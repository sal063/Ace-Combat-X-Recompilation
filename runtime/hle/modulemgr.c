/* runtime/hle/modulemgr.c -- ModuleMgrForUser HLE.
 *
 * The only module the game loads at runtime is USRDIR/LIBFONT.PRX, whose
 * exports are HLE'd; any other PRX traps loudly rather than returning a
 * fake id that would corrupt the game's state later.
 */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"

#include <string.h>

/* Module UID in the kernel allocator's numeric range: newlib hashes the id
 * into a bucket table, so the range matters. */
#define ACEPSP_MODULE_ID 0x112

/* PRXs whose exports pspreco provides itself; loads of these must succeed
 * (the game retries forever on failure) with ids distinct from the main
 * module's. LIBFONT.PRX is an encrypted SCE module (no ELF), so it is HLE'd
 * in libfont.c rather than recompiled. */
static const struct { const char *leaf; int id; } g_hle_modules[] = {
    { "LIBFONT.PRX", 0x113 },
};

static const char *path_leaf(const char *path)
{
    const char *p, *leaf = path;
    for (p = path; *p; p++)
        if (*p == '/' || *p == '\\') leaf = p + 1;
    return leaf;
}

static int ci_equal(const char *a, const char *b)
{
    for (; *a && *b; a++, b++) {
        char ca = (*a >= 'a' && *a <= 'z') ? (char)(*a - 32) : *a;
        char cb = (*b >= 'a' && *b <= 'z') ? (char)(*b - 32) : *b;
        if (ca != cb) return 0;
    }
    return *a == *b;
}

int hle_module_id_for_path(const char *path)
{
    unsigned i;
    const char *leaf = path_leaf(path);
    for (i = 0; i < sizeof g_hle_modules / sizeof g_hle_modules[0]; i++)
        if (ci_equal(leaf, g_hle_modules[i].leaf))
            return g_hle_modules[i].id;
    return 0;
}

static int is_hle_module_id(int id)
{
    unsigned i;
    for (i = 0; i < sizeof g_hle_modules / sizeof g_hle_modules[0]; i++)
        if (g_hle_modules[i].id == id) return 1;
    return 0;
}

void hle_sceKernelGetModuleId(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(ACEPSP_MODULE_ID);
}

/* Everything in this process belongs to the one recompiled module. */
void hle_sceKernelGetModuleIdByAddress(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceKernelGetModuleIdByAddress(%08x) -> %d",
            HLE_A0, ACEPSP_MODULE_ID);
    HLE_RET(ACEPSP_MODULE_ID);
}

void hle_sceKernelLoadModule(CpuCtx *c, u8 *ram)
{
    const char *path = hle_cstr(ram, HLE_A0);
    int id = hle_module_id_for_path(path);

    if (id > 0) {
        hle_log("[hle] sceKernelLoadModule(\"%s\") -> %d (its exports are "
                "provided by pspreco's HLE)", path, id);
        HLE_RET(id);
        return;
    }
    /* The game retries a failed load forever; trap loudly instead. */
    hle_log("[hle] sceKernelLoadModule(\"%s\", flags=%08x)", path, HLE_A1);
    recomp_trap_unimplemented(c, ram, c->r[R_RA],
                              "sceKernelLoadModule: this PRX is neither "
                              "recompiled nor HLE'd");
}

void hle_sceKernelStartModule(CpuCtx *c, u8 *ram)
{
    int id = (int)HLE_A0;
    u32 modresult = HLE_A3;
    /* modresult receives module_start's return value; an HLE'd module has
     * no module_start, so report 0. */
    if (modresult) mem_w32(ram, modresult, 0u);
    if (is_hle_module_id(id)) {
        hle_log("[hle] sceKernelStartModule(%d) -- HLE'd module, already "
                "live", id);
        HLE_RET(id);
        return;
    }
    hle_log("[hle] sceKernelStartModule(%d): unknown module", id);
    HLE_RET(SCE_KERNEL_ERROR_ERROR);
}

void hle_sceKernelStopModule(CpuCtx *c, u8 *ram)
{
    u32 modresult = HLE_A3;
    hle_log("[hle] sceKernelStopModule(%d)", (int)HLE_A0);
    if (modresult) mem_w32(ram, modresult, 0u);
    HLE_RET(0);
}

void hle_sceKernelUnloadModule(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceKernelUnloadModule(%d)", (int)HLE_A0);
    HLE_RET(0);
}

void hle_sceKernelStopUnloadSelfModuleWithStatus(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceKernelStopUnloadSelfModuleWithStatus(%d) - module is "
            "shutting itself down", (int)HLE_A0);
    threadman_request_exit();
    HLE_RET(0);
}
