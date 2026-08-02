/* runtime/hle/sysmem.c -- SysMemUserForUser HLE.
 *
 * sceKernelAllocPartitionMemory (237DBD4F), sceKernelFreePartitionMemory
 * (B6D61D02) and sceKernelGetBlockHeadAddr (9D9A5BA1) are absent from SDK
 * 6.6.0 headers; their argument shapes come from the game's call sites, and
 * the SCE_KERNEL_SMEM_* placement constants they take are the firmware's.
 */

#include "hle.h"
#include "sce_errors.h"

#include <stdio.h>
#include <string.h>

/* --- the user partition ------------------------------------------------ */
/* Starts page-aligned just above the loaded module: main() computes it and
 * calls sysmem_set_partition_begin(); the constant is only the fallback.
 * The top, 0x09FFFF00, is 0x100 below the end of 32 MB of user RAM
 * (PSP-2000 model), matching where a real boot puts the first SMEM_High
 * allocation; lower it to model a 24 MB PSP-1000. */
#define USER_PARTITION_END   0x09FFFF00u
#define PARTITION_PAGE       0x1000u
#define BLOCK_ALIGN          256u

static u32 g_partition_begin = 0x08BA1000u;
#define USER_PARTITION_BEGIN g_partition_begin

void sysmem_set_partition_begin(u32 module_end)
{
    g_partition_begin = (module_end + (PARTITION_PAGE - 1u))
                        & ~(PARTITION_PAGE - 1u);
}

typedef struct MemBlock {
    int  used;
    int  uid;
    u32  addr;
    u32  size;
    char name[32];
} MemBlock;

#define MAX_BLOCKS 512
static MemBlock g_blocks[MAX_BLOCKS];
static int      g_next_uid = 0x1000;

static u32 align_up(u32 v, u32 a) { return (v + a - 1u) & ~(a - 1u); }

/* First/last fit over the free space between existing blocks. */
static int alloc_block(const char *name, int type, u32 size, u32 want_addr,
                       u32 *out_addr)
{
    u32 lo = USER_PARTITION_BEGIN, hi = USER_PARTITION_END;
    u32 chosen = 0;
    int i, slot = -1;

    size = align_up(size, BLOCK_ALIGN);
    if (!size || size > (hi - lo)) return -1;

    for (i = 0; i < MAX_BLOCKS; i++)
        if (!g_blocks[i].used) { slot = i; break; }
    if (slot < 0) return -1;

    if (type == 2 /* SCE_KERNEL_SMEM_Addr */) {
        chosen = align_up(want_addr, BLOCK_ALIGN);
    } else if (type == 1 /* SCE_KERNEL_SMEM_High */
               || type == 4 /* HighAligned */) {
        /* Highest free run that fits: start at the top and slide down past
         * collisions (the low-placed heap sits at the partition bottom). */
        u32 base = (hi - size) & ~(BLOCK_ALIGN - 1u);
        int moved = 1;
        while (moved) {
            moved = 0;
            for (i = 0; i < MAX_BLOCKS; i++) {
                if (!g_blocks[i].used) continue;
                if (base < g_blocks[i].addr + g_blocks[i].size
                    && base + size > g_blocks[i].addr) {
                    if (g_blocks[i].addr < lo + size) return -1;
                    base = (g_blocks[i].addr - size) & ~(BLOCK_ALIGN - 1u);
                    moved = 1;
                }
            }
        }
        if (base < lo) return -1;
        chosen = base;
    } else {                 /* Low / LowAligned */
        u32 base = lo;
        int moved = 1;
        while (moved) {
            moved = 0;
            for (i = 0; i < MAX_BLOCKS; i++) {
                if (!g_blocks[i].used) continue;
                if (base < g_blocks[i].addr + g_blocks[i].size
                    && base + size > g_blocks[i].addr) {
                    base = align_up(g_blocks[i].addr + g_blocks[i].size,
                                    BLOCK_ALIGN);
                    moved = 1;
                }
            }
        }
        if (base + size > hi) return -1;
        chosen = base;
    }
    if (chosen < lo || chosen + size > hi) return -1;

    g_blocks[slot].used = 1;
    g_blocks[slot].uid = g_next_uid++;
    g_blocks[slot].addr = chosen;
    g_blocks[slot].size = size;
    snprintf(g_blocks[slot].name, sizeof g_blocks[slot].name, "%s",
             name ? name : "");
    *out_addr = chosen;
    return g_blocks[slot].uid;
}

static MemBlock *find_block(int uid)
{
    int i;
    for (i = 0; i < MAX_BLOCKS; i++)
        if (g_blocks[i].used && g_blocks[i].uid == uid)
            return &g_blocks[i];
    return NULL;
}

static u32 total_free(void)
{
    u32 used = 0;
    int i;
    for (i = 0; i < MAX_BLOCKS; i++)
        if (g_blocks[i].used) used += g_blocks[i].size;
    return (USER_PARTITION_END - USER_PARTITION_BEGIN) - used;
}

/* --- exported state ---------------------------------------------------- */
static u32 g_compiled_sdk_version;
static u32 g_compiler_version;

u32 sysmem_compiled_sdk_version(void) { return g_compiled_sdk_version; }

/* --- handlers ---------------------------------------------------------- */

void hle_sceKernelSetCompiledSdkVersion(CpuCtx *c, u8 *ram)
{
    (void)ram;
    g_compiled_sdk_version = HLE_A0;
    hle_log("[hle] sceKernelSetCompiledSdkVersion(0x%08x)  /* SDK %u.%u.%u.%u */",
            HLE_A0, (HLE_A0 >> 24) & 0xFF, (HLE_A0 >> 16) & 0xFF,
            (HLE_A0 >> 8) & 0xFF, HLE_A0 & 0xFF);
    HLE_RET(0);
}

void hle_sceKernelSetCompilerVersion(CpuCtx *c, u8 *ram)
{
    (void)ram;
    g_compiler_version = HLE_A0;
    hle_log("[hle] sceKernelSetCompilerVersion(0x%08x)", HLE_A0);
    HLE_RET(0);
}

void hle_sceKernelTotalFreeMemSize(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceKernelTotalFreeMemSize() -> %u", total_free());
    HLE_RET(total_free());
}

void hle_sceKernelMaxFreeMemSize(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(total_free());
}

/* Logs the format string only; guest varargs are not interpreted. */
void hle_sceKernelPrintf(CpuCtx *c, u8 *ram)
{
    hle_log("[game] %s", hle_cstr(ram, HLE_A0));
    HLE_RET(0);
}

/* Not in SDK headers (see file header).
 * SceUID sceKernelAllocPartitionMemory(SceUID partition, const char *name,
 *                                      int type, SceSize size, void *addr) */
void hle_sceKernelAllocPartitionMemory(CpuCtx *c, u8 *ram)
{
    u32 partition = HLE_A0;
    u32 name_ptr  = HLE_A1;
    int type      = (int)HLE_A2;
    u32 size      = HLE_A3;
    u32 want      = hle_arg(c, ram, 0);
    u32 addr = 0;
    int uid;

    if (partition != 2u /* SCE_KERNEL_PRIMARY_USER_PARTITION */) {
        hle_log("[hle] sceKernelAllocPartitionMemory: partition %u refused",
                partition);
        HLE_RET(SCE_KERNEL_ERROR_ILLEGAL_PARTITION);
        return;
    }
    uid = alloc_block(hle_cstr(ram, name_ptr), type, size, want, &addr);
    if (uid < 0) {
        hle_log("[hle] sceKernelAllocPartitionMemory(%s, type=%d, size=%u)"
                " -> NO MEMORY", hle_cstr(ram, name_ptr), type, size);
        HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY);
        return;
    }
    hle_log("[hle] sceKernelAllocPartitionMemory(\"%s\", type=%d, size=%u)"
            " -> uid=%d addr=%08x", hle_cstr(ram, name_ptr), type, size,
            uid, addr);
    HLE_RET(uid);
}

/* Not in SDK headers. int sceKernelFreePartitionMemory(SceUID blockid) */
void hle_sceKernelFreePartitionMemory(CpuCtx *c, u8 *ram)
{
    MemBlock *b = find_block((int)HLE_A0);
    (void)ram;
    if (!b) {
        HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID);
        return;
    }
    hle_log("[hle] sceKernelFreePartitionMemory(%d) /* %s, %u B at %08x */",
            b->uid, b->name, b->size, b->addr);
    b->used = 0;
    HLE_RET(0);
}

/* Not in SDK headers. void *sceKernelGetBlockHeadAddr(SceUID blockid) */
void hle_sceKernelGetBlockHeadAddr(CpuCtx *c, u8 *ram)
{
    MemBlock *b = find_block((int)HLE_A0);
    (void)ram;
    if (!b) {
        hle_log("[hle] sceKernelGetBlockHeadAddr(%d) -> unknown uid",
                (int)HLE_A0);
        HLE_RET(0);
        return;
    }
    HLE_RET(b->addr);
}

/* Runtime-internal allocation; shares the guest allocator's bookkeeping so
 * sceKernelTotalFreeMemSize stays honest. */
u32 sysmem_alloc_raw(const char *name, u32 size)
{
    u32 addr = 0;
    int uid = alloc_block(name, 0 /* SCE_KERNEL_SMEM_Low */, size, 0, &addr);
    return (uid < 0) ? 0u : addr;
}

/* Thread stacks come off the top of the partition, as on a real kernel. */
u32 sysmem_alloc_high(const char *name, u32 size)
{
    u32 addr = 0;
    int uid = alloc_block(name, 1 /* SCE_KERNEL_SMEM_High */, size, 0, &addr);
    return (uid < 0) ? 0u : addr;
}

/* By address, because the block uid never leaves sysmem for these: thread
 * stacks are allocated by threadman, which only ever knows where they are.
 * Without this every deleted thread's stack stayed allocated for the run. */
int sysmem_free_at(u32 addr)
{
    int i;
    for (i = 0; i < MAX_BLOCKS; i++)
        if (g_blocks[i].used && g_blocks[i].addr == addr) {
            g_blocks[i].used = 0;
            return 1;
        }
    return 0;
}
