/* GPU GE rasterizer: full GPU rendering with persistent framebuffers (see README.md).
 *
 * AI disclosure: original Vulkan backend (not a PPSSPP port), written with substantial
 * LLM assistance (Anthropic Claude); reproduces PSP/GE pixel rules derived from
 * PPSSPP's software renderer via ge.c, so GPLv2+. See CREDITS.md.
 *
 * ge.c keeps vertex decode + T&L + clipping and hands SCREEN-SPACE primitives here
 * through GeGpuHooks. GE framebuffers are PERSISTENT GPU images (color RGBA8 + shared
 * D16 depth keyed by zbp); guest VRAM is read only on target creation or CPU-dirty
 * invalidation, written only on paths that genuinely consume it (CLUT-from-VRAM,
 * eviction). Batches accumulate across GE lists and submit only when something
 * consumes the target; presentation blits the GPU image straight to the swapchain.
 *
 * Approximations (no software fallback): doubled DST-alpha factors halved,
 * min/max/absdiff blend equations approximated, two distinct FIX constants (dst
 * rounded to ZERO/ONE), partial-byte write masks (>= 0x80 disables the channel),
 * dithering skipped, lines/points as 1px quads. Doubled SRC-alpha is exact
 * (premultiplied in the shader).
 */
/* Compiled into SDL3+Vulkan builds only (build.py --sdl3 defines PSPRECO_SDL3);
 * the headless build gets the empty translation unit at the bottom. The Vulkan
 * device is shared with the presenter via present_get_vk(); finished targets go
 * to the swapchain via present_image(). */
#ifdef PSPRECO_SDL3

#include "pspreco.h"
#include "ge.h"
#include "ge_shared.h"
#include "../host/present.h"
#include "../host/settings.h"

extern u8 *g_ram;
#define SR_HOST(a) (g_ram + ((a) & PSP_ADDR_MASK))

int  gegpu_init(void);
void gegpu_shutdown(void);
static void gegpu_flush(const char *reason);
static int  gegpu_present(uint32_t fbaddr, int fmt, uint32_t stride);

#include <vulkan/vulkan.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define FB_W 512            /* full PSP framebuffer stride */
#define FB_H 272
#define DRAW_W 480          /* pixels the GE can actually write */
#define MAX_VERTS  131072
#define MAX_BATCH  4096
#define MAX_PIPES  192
#define MAX_TEX    1024
#define MAX_TGT    8
#define MAX_DEP    4

static const uint32_t k_vert_spv[] =
#include "psp_vert.inc"
;
static const uint32_t k_frag_spv[] =
#include "psp_frag.inc"
;

/* ---- captured vertex (must match psp.vert input layout) ------------------------------ */
/* uvlo/uvhi bound the texel rect this vertex's primitive is allowed to sample.
 * Supersampling takes several samples inside one PSP pixel, and the UV mapping
 * (built so a PSP pixel CENTRE hits the exact texel) keeps extrapolating toward
 * the quad edge -- up to half a texel past the outermost centre. On a font atlas
 * whose cells touch, that reads the neighbouring glyph and leaves a bright seam.
 * The bound is per-vertex because sprites with different rects share a batch. */
typedef struct { float x, y, z, rw, u, v, fog; uint32_t rgba;
                 float ulo, vlo, uhi, vhi; } GpuVert;

/* fragment push constants (must match psp.frag PC block) */
typedef struct { int32_t cfg[4]; float texenv[4]; float fogcol[4]; float texsize[4]; } PushPC;
enum { F_TEX = 1, F_RGBA = 2, F_DBL = 4, F_FOG = 8, F_PERSP = 16, F_CLEAR = 32,
       F_NEAREST = 64, F_SA2X = 128, F_SA2XI = 256 };

typedef struct {
    uint8_t blend_on, srcf, dstf, eq;      /* VkBlendFactor / VkBlendOp values */
    uint8_t cull;                          /* VkCullModeFlagBits */
    uint8_t ztest, zwrite, zfunc;          /* VkCompareOp */
    uint8_t cmask;                         /* VkColorComponentFlags */
} PipeKey;

typedef struct {
    PipeKey key;
    int32_t sx, sy, sw, sh;                /* scissor rect */
    float   bconst[4];                     /* blend constants (FIX factors) */
    PushPC  pc;
    VkDescriptorSet dset;
    uint32_t first, count;
} Batch;

typedef struct {
    uint64_t key, hash;                    /* state key + content hash; 0,0 = empty */
    VkImage img; VkDeviceMemory mem; VkImageView view; VkSampler smp;
    VkDescriptorSet set;
    int w, h;
    uint32_t levels;                       /* mip levels this image was built with */
    int pending;                           /* referenced by not-yet-submitted batches */
    uint64_t lru;
} TexEnt;

typedef struct { PipeKey key; VkPipeline pipe; int used; } PipeEnt;

/* shared depth buffer, keyed by guest zbuf placement */
typedef struct {
    int used;
    uint32_t zba, zstride;                 /* key: zbp & 0x1FFFFF, stride */
    VkImage img; VkDeviceMemory mem; VkImageView view;
    VkImageLayout layout;
    uint32_t scale;                        /* matches the colour target's */
} DepthEnt;

/* persistent GE render target */
typedef struct {
    int used;
    uint32_t fba, stride, fmt;             /* key: framebuffer addr (masked), stride px, psm */
    VkImage img; VkDeviceMemory mem; VkImageView view;
    VkImageLayout layout;
    VkDescriptorSet set_n, set_l;          /* sampled (nearest / linear) for RTT + blit src */
    DepthEnt *dep;
    VkFramebuffer fb;                      /* for (this color, this->dep) */
    int gpu_valid;                         /* GPU contents are the truth (newer than VRAM) */
    uint64_t lru;
    uint64_t render_gen;                   /* bumped per submit that rendered into this */
    uint64_t clean_gen;                    /* render_gen when guest VRAM last matched */
    /* Last PARTIAL readback: render_gen it was taken at, and the row span it
     * covered. Lets repeat reads of the same small range inside one frame skip
     * the stall without claiming the whole frame is current. */
    uint64_t part_gen;
    uint32_t part_y0, part_y1;
    /* Rows the GPU has written since guest VRAM last matched this image, as one
     * conservative span; empty when drawn_y0 >= drawn_y1. Every target claims
     * stride*272 bytes of VRAM whether or not the game draws that tall, so a
     * CLUT parked just past a short scratch buffer lands "inside" it and used
     * to force a readback of rows nothing had ever rendered. Reading those back
     * is provably a no-op -- target_upload seeded them FROM VRAM -- so this
     * span is what lets the request be answered without touching the GPU. */
    uint32_t drawn_y0, drawn_y1;
    /* Supersampling: `img` is scale*FB_W x scale*FB_H, but guest VRAM is always
     * native, so the transfer paths go through this native-sized image and the
     * scaling is one blit each way. At scale 1 it is unused and img is native. */
    uint32_t scale;
    VkImage rimg; VkDeviceMemory rmem;
    VkImageLayout rlayout;
} Target;

/* The GE render scale in force for targets created from now on. Sampled once
 * per target so a mid-frame change cannot make one target disagree with the
 * framebuffer it shares. */
static uint32_t s_scale = 1;
static unsigned s_scale_gen;

static uint32_t gpu_scale(void) {
    if (s_scale_gen != g_gfx_generation) {
        uint32_t want = (uint32_t)(g_gfx.res_scale < 1 ? 1
                                 : g_gfx.res_scale > 4 ? 4 : g_gfx.res_scale);
        s_scale_gen = g_gfx_generation;
        s_scale = want;
    }
    return s_scale;
}

/* ---- backend state -------------------------------------------------------------------- */
static int s_ready = 0;
/* Max anisotropy the device supports, 1.0 when the feature is off. Set by the
 * presenter when it creates the device. */
extern float g_vk_max_aniso;
#define s_max_aniso g_vk_max_aniso
static GeState  *s_ge;
static uint16_t *s_zbuf;

static VkPhysicalDevice s_pdev;
static VkDevice   s_dev;
static VkQueue    s_queue;
static VkCommandPool s_pool;

/* Submission ring. Every submit gets a monotonically increasing id; slot
 * `id % RING` holds its command buffer and fence, so waiting for a slot to come
 * free waits for the submit RING submissions ago rather than the previous one.
 * That is the whole point: a single command buffer forces a drain at every
 * cmd_begin(), which is what capped the last round at 50 FPS. */
#define RING 3
typedef struct { VkCommandBuffer cmd; VkFence fence; } RingSlot;
static RingSlot  s_ring[RING];
static uint64_t  s_submit_id;      /* id of the last submit issued */
static uint64_t  s_completed_id;   /* every id <= this has signalled */
static VkCommandBuffer s_cmd;      /* the slot currently being recorded */

static VkRenderPass s_rp;

/* Vertices: one region per ring slot, so a submit still reading its vertices is
 * not overwritten by the next one being built. */
static VkBuffer s_vbuf;
static VkDeviceMemory s_vbuf_m;
static GpuVert *s_vmap;
static VkDeviceSize s_voff;                /* byte offset of this submit's region */
/* Vertices are built HERE, in ordinary cached memory, and copied into s_vmap in
 * one block per submit.
 *
 * s_vmap is HOST_VISIBLE|HOST_COHERENT, which on every desktop driver means
 * write-combined. WC memory is only fast when a full 64-byte line is filled by
 * consecutive stores: x86 has a handful of write-combining buffers, and any
 * intervening store to normal memory evicts a partially filled one as an
 * uncached partial-line bus transaction. hook_tri interleaves exactly that way
 * -- three 48-byte vertices into the mapped buffer, then a batch record into
 * cached memory -- so nearly every vertex paid a partial flush. Staging turns
 * the whole frame's vertices into one linear memcpy, which is the access
 * pattern WC memory is designed for. */
static GpuVert *s_vstage;

/* Pixel transfer staging, one 1 MB buffer per slot. Five call sites memcpy into
 * this and then submit a copy out of it; with the wait deferred, the next user
 * would otherwise overwrite bytes the GPU is still reading. `id` is the submit
 * that consumed the slot, so xfer_acquire() waits for that one alone. */
#define XFER_RING 3
#define XFER_SIZE (1u << 20)
typedef struct { VkBuffer buf; VkDeviceMemory mem; void *map; uint64_t id; } XferSlot;
static XferSlot s_xfer[XFER_RING];
static int      s_xfer_i;

static VkDescriptorSetLayout s_dlayout;
static VkDescriptorPool s_dpool_tex, s_dpool_fix;
static VkPipelineLayout s_playout;
static VkShaderModule s_vs, s_fs;

static TexEnt  s_tex[MAX_TEX];
static int     s_tex_n = 0;
static VkImage s_white; static VkDeviceMemory s_white_mem;
static VkImageView s_white_view; static VkSampler s_white_smp;
static VkDescriptorSet s_white_set;

/* snapshot copy of a target for self-sampling (feedback) draws */
static VkImage s_snapimg; static VkDeviceMemory s_snapimg_mem;
static VkImageView s_snap_view; static VkImageLayout s_snap_layout;
static VkSampler s_smp_n, s_smp_l;         /* shared nearest/linear samplers (clamp) */
static VkDescriptorSet s_snap_n, s_snap_l;
static Target *s_snap_src = NULL;          /* what the snapshot currently holds */
static uint64_t s_snap_srcgen = 0;

static PipeEnt s_pipes[MAX_PIPES];
static int s_pipe_n = 0;

static Target   s_tgts[MAX_TGT];
static void target_drew(Target *t, uint32_t y0, uint32_t y1);  /* used by the submit path */
static DepthEnt s_deps[MAX_DEP];
static Target  *s_cur = NULL;              /* target of the pending batches */
static uint64_t s_lru = 1;

static Batch    s_batch[MAX_BATCH];
static uint32_t s_nbatch = 0, s_nverts = 0;

static int s_log = 0;
static unsigned long s_cnt_submit = 0, s_cnt_tri = 0, s_cnt_spr = 0, s_cnt_line = 0;
static unsigned long s_cnt_present_gpu = 0, s_cnt_present_cpu = 0, s_cnt_rtt = 0;
static unsigned long s_cnt_readback = 0, s_cnt_upload = 0, s_cnt_dirty = 0;
/* Of s_cnt_readback: how many were row-ranged rather than whole-frame, and how
 * many requests were answered without touching the GPU at all. Both are the
 * sun-glare stutter fix reporting whether it is working. */
static unsigned long s_cnt_readback_rows = 0, s_cnt_readback_skip = 0;
static unsigned long s_cnt_snap = 0, s_cnt_texup = 0, s_cnt_xferblit = 0;

static uint32_t s_texscratch[512 * 512];
static uint32_t s_pxscratch[FB_W * FB_H];

#define VKC(expr) do { VkResult vr_ = (expr); if (vr_ != VK_SUCCESS) { \
    fprintf(stderr, "gegpu: %s failed: %d\n", #expr, (int)vr_); return 0; } } while (0)

/* ---- small helpers -------------------------------------------------------------------- */

static uint32_t find_mem(uint32_t bits, VkMemoryPropertyFlags want) {
    VkPhysicalDeviceMemoryProperties mp;
    vkGetPhysicalDeviceMemoryProperties(s_pdev, &mp);
    for (uint32_t i = 0; i < mp.memoryTypeCount; i++)
        if ((bits & (1u << i)) && (mp.memoryTypes[i].propertyFlags & want) == want)
            return i;
    return UINT32_MAX;
}

static int make_buffer(VkDeviceSize size, VkBufferUsageFlags usage, VkBuffer *buf,
                       VkDeviceMemory *mem, void **map) {
    VkBufferCreateInfo bci = { VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
    bci.size = size; bci.usage = usage;
    VKC(vkCreateBuffer(s_dev, &bci, NULL, buf));
    VkMemoryRequirements mr; vkGetBufferMemoryRequirements(s_dev, *buf, &mr);
    VkMemoryAllocateInfo mai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_mem(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VKC(vkAllocateMemory(s_dev, &mai, NULL, mem));
    VKC(vkBindBufferMemory(s_dev, *buf, *mem, 0));
    if (map) VKC(vkMapMemory(s_dev, *mem, 0, VK_WHOLE_SIZE, 0, map));
    return 1;
}

static int make_image_mip(uint32_t w, uint32_t h, uint32_t levels, VkFormat fmt,
                          VkImageUsageFlags usage, VkImage *img, VkDeviceMemory *mem) {
    VkImageCreateInfo ici = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
    ici.imageType = VK_IMAGE_TYPE_2D; ici.format = fmt;
    ici.extent.width = w; ici.extent.height = h; ici.extent.depth = 1;
    ici.mipLevels = levels; ici.arrayLayers = 1;
    ici.samples = VK_SAMPLE_COUNT_1_BIT; ici.tiling = VK_IMAGE_TILING_OPTIMAL;
    ici.usage = usage; ici.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VKC(vkCreateImage(s_dev, &ici, NULL, img));
    VkMemoryRequirements mr; vkGetImageMemoryRequirements(s_dev, *img, &mr);
    VkMemoryAllocateInfo mai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_mem(mr.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    VKC(vkAllocateMemory(s_dev, &mai, NULL, mem));
    VKC(vkBindImageMemory(s_dev, *img, *mem, 0));
    return 1;
}

static int make_image(uint32_t w, uint32_t h, VkFormat fmt, VkImageUsageFlags usage,
                      VkImage *img, VkDeviceMemory *mem) {
    return make_image_mip(w, h, 1, fmt, usage, img, mem);
}

static int make_view_mip(VkImage img, VkFormat fmt, VkImageAspectFlags aspect,
                         uint32_t levels, VkImageView *view) {
    VkImageViewCreateInfo vci = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
    vci.image = img; vci.viewType = VK_IMAGE_VIEW_TYPE_2D; vci.format = fmt;
    vci.subresourceRange.aspectMask = aspect;
    vci.subresourceRange.levelCount = levels; vci.subresourceRange.layerCount = 1;
    VKC(vkCreateImageView(s_dev, &vci, NULL, view));
    return 1;
}

static int make_view(VkImage img, VkFormat fmt, VkImageAspectFlags aspect, VkImageView *view) {
    return make_view_mip(img, fmt, aspect, 1, view);
}

/* Mip levels for a w x h texture, down to 1x1. */
static uint32_t mip_levels_for(int w, int h) {
    uint32_t n = 1, d = (uint32_t)(w > h ? w : h);
    while (d > 1) { d >>= 1; n++; }
    return n;
}

/* Transition an image whose layout we track to `want` (full barrier; correctness over
 * fine-grained sync — these happen a handful of times per frame). */
static void to_layout(VkCommandBuffer cmd, VkImage img, VkImageAspectFlags aspect,
                      VkImageLayout *cur, VkImageLayout want) {
    if (*cur == want) return;
    VkImageMemoryBarrier mb = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
    mb.srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
    mb.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
    mb.oldLayout = *cur; mb.newLayout = want;
    mb.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    mb.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    mb.image = img;
    mb.subresourceRange.aspectMask = aspect;
    mb.subresourceRange.levelCount = 1;
    mb.subresourceRange.layerCount = 1;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                         0, 0, NULL, 0, NULL, 1, &mb);
    *cur = want;
}

/* The wait is counted and timed so the log says what it actually costs; it is
 * the `gpuwait` figure under SR_GEPROF=1. */
extern unsigned long long g_prof_wait_tk;   /* defined in ge_render.c, which */
extern unsigned long g_prof_wait_n;         /* the headless build also links  */
extern unsigned long g_prof_on;
u64 ge_prof_now_tk(void);

/* Submitting and then immediately blocking on a fence cost a measured 335 ms of
 * every second -- 365 round trips, ~920 us each, and resolution-independent, so
 * it was the pipeline drain rather than the drawing.
 *
 * Deferring the wait with a SINGLE command buffer took that to 215 ms and
 * 46.6 -> 50.8 FPS, and then stopped: one buffer has to be reset before it can
 * be recorded again, so every submit still forced a drain at the next
 * cmd_begin(). The round-trip COUNT was unchanged (364 -> 352) -- each trip got
 * cheaper, none went away. Per frame there are ~4 batch submits, 1 block
 * transfer and 1 present, and the CPU work in the gap between two of them is
 * not always enough to cover the GPU work in it.
 *
 * So the buffer is a ring of RING slots keyed by submit id. cmd_begin() waits
 * only for the submit RING submissions ago, which pools RING gaps' worth of CPU
 * work against one submit's GPU work. Fences signal in submission order on a
 * single queue, so `s_completed_id` is just a high-water mark.
 *
 * WHAT THIS COSTS, and it is the reason the previous round stopped short of it:
 * the rule "a CPU write or a free is safe after cmd_begin()" is GONE. cmd_begin
 * no longer synchronises anything the caller cares about. Every shared resource
 * now needs its own answer:
 *
 *   - vertices        -> one buffer region per ring slot (s_voff)
 *   - pixel staging   -> XferSlot ring, acquired by fence (xfer_acquire)
 *   - images rewritten in place (texture refresh, target_upload) -> explicit
 *     gpu_sync(); both are rare (0.085 and ~3 per session)
 *   - descriptor sets, images, framebuffers being FREED -> the existing
 *     gpu_sync() at each free site, which drains everything. Frees happen on
 *     scene load, so a full drain there is the right trade and needs no
 *     per-resource id tracking.
 *
 * And one that is easy to miss: consecutive submits on one queue may OVERLAP.
 * Previously each submit completed before the next was recorded, so cross-submit
 * GPU hazards could not exist; now they can, and only barriers prevent them.
 * to_layout() emits a full ALL_COMMANDS barrier whose first scope covers all
 * earlier submissions, which covers the layout transitions -- but the render
 * pass needed an explicit external subpass dependency (see s_rp in gegpu_init),
 * because its loadOp otherwise races its own initial transition.
 *
 * SR_VKVALIDATE=1 (synchronization validation) is how all of this is checked,
 * and SR_GPU_SERIAL=1 restores submit-and-drain as the A/B control. */

static int gpu_sync(void);

/* Wait until `id` has completed. Fences signal in order, so this consumes them
 * in order and leaves each one reset for its slot's next submit. */
static int gpu_wait_id(uint64_t id) {
    if (id > s_submit_id) id = s_submit_id;      /* nothing that new exists yet */
    if (id <= s_completed_id) return 1;
    u64 t0 = g_prof_on ? ge_prof_now_tk() : 0;
    while (s_completed_id < id) {
        VkFence f = s_ring[(s_completed_id + 1) % RING].fence;
        VKC(vkWaitForFences(s_dev, 1, &f, VK_TRUE, UINT64_MAX));
        VKC(vkResetFences(s_dev, 1, &f));
        s_completed_id++;
    }
    if (g_prof_on) { g_prof_wait_tk += ge_prof_now_tk() - t0; g_prof_wait_n++; }
    return 1;
}

/* Drain everything. The blunt instrument: used where the CPU reads GPU output,
 * and at every site that frees a GPU object. */
static int gpu_sync(void) { return gpu_wait_id(s_submit_id); }

/* Begin recording into the next ring slot, waiting only for that slot. */
static int cmd_begin(void) {
    uint64_t next = s_submit_id + 1;
    if (next > RING) gpu_wait_id(next - RING);
    s_cmd = s_ring[next % RING].cmd;
    vkResetCommandBuffer(s_cmd, 0);
    VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    VKC(vkBeginCommandBuffer(s_cmd, &bi));
    return 1;
}

/* Queue the recorded buffer and return. The caller does NOT get an idle GPU
 * back; whatever it touches next must be covered by one of the rules above. */
static int cmd_submit(void) {
    VKC(vkEndCommandBuffer(s_cmd));
    uint64_t id = s_submit_id + 1;
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    si.commandBufferCount = 1; si.pCommandBuffers = &s_cmd;
    VKC(vkQueueSubmit(s_queue, 1, &si, s_ring[id % RING].fence));
    s_submit_id = id;
    /* SR_GPU_SERIAL=1 restores the old submit-and-drain behaviour. It is the
     * A/B control for this change: if a rendering bug appears, this says in one
     * run whether asynchrony is the cause. */
    static int serial = -1;
    if (serial < 0) { const char *sv = getenv("SR_GPU_SERIAL");
                      serial = (sv && sv[0] && strcmp(sv, "0") != 0) ? 1 : 0; }
    return serial ? gpu_sync() : 1;
}

/* Take the next staging slot, waiting only for the submit that last consumed
 * it. Tag it with xfer_used() after the submit that reads it is queued. */
static XferSlot *xfer_acquire(void) {
    XferSlot *x = &s_xfer[s_xfer_i];
    s_xfer_i = (s_xfer_i + 1) % XFER_RING;
    gpu_wait_id(x->id);
    return x;
}
static void xfer_used(XferSlot *x) { x->id = s_submit_id; }

/* ---- guest framebuffer <-> RGBA8 (must match ge.c unpack_color / pack_fb exactly) ----- */

static uint32_t fb_unpack(uint32_t raw, uint32_t fmt) {
    uint32_t r, g, b, a;
    switch (fmt & 3) {
        case 0: r=(raw&0x1F)*255/31; g=((raw>>5)&0x3F)*255/63; b=((raw>>11)&0x1F)*255/31; a=255; break;
        case 1: r=(raw&0x1F)*255/31; g=((raw>>5)&0x1F)*255/31; b=((raw>>10)&0x1F)*255/31; a=(raw&0x8000)?255:0; break;
        case 2: r=(raw&0xF)*17; g=((raw>>4)&0xF)*17; b=((raw>>8)&0xF)*17; a=((raw>>12)&0xF)*17; break;
        default: return raw;
    }
    return r | (g << 8) | (b << 16) | (a << 24);
}

static uint32_t fb_pack(uint32_t px, uint32_t fmt) {
    uint32_t r = px & 0xFF, g = (px >> 8) & 0xFF, b = (px >> 16) & 0xFF, a = px >> 24;
    switch (fmt & 3) {
        case 0: return ((r>>3)&0x1F) | (((g>>2)&0x3F)<<5) | (((b>>3)&0x1F)<<11);
        case 1: return ((r>>3)&0x1F) | (((g>>3)&0x1F)<<5) | (((b>>3)&0x1F)<<10) | (a>=128?0x8000u:0);
        case 2: return ((r>>4)&0xF) | (((g>>4)&0xF)<<4) | (((b>>4)&0xF)<<8) | (((a>>4)&0xF)<<12);
        default: return px;
    }
}

/* ---- pipelines ------------------------------------------------------------------------ */

static VkPipeline pipe_create(const PipeKey *k) {
    VkPipelineShaderStageCreateInfo st[2] = {
        { VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO },
        { VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO },
    };
    st[0].stage = VK_SHADER_STAGE_VERTEX_BIT;   st[0].module = s_vs; st[0].pName = "main";
    st[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT; st[1].module = s_fs; st[1].pName = "main";

    VkVertexInputBindingDescription bind = { 0, sizeof(GpuVert), VK_VERTEX_INPUT_RATE_VERTEX };
    VkVertexInputAttributeDescription at[5] = {
        { 0, 0, VK_FORMAT_R32G32B32A32_SFLOAT, 0 },
        { 1, 0, VK_FORMAT_R32G32_SFLOAT,       16 },
        { 2, 0, VK_FORMAT_R32_SFLOAT,          24 },
        { 3, 0, VK_FORMAT_R8G8B8A8_UNORM,      28 },
        { 4, 0, VK_FORMAT_R32G32B32A32_SFLOAT, 32 },
    };
    VkPipelineVertexInputStateCreateInfo vi = { VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO };
    vi.vertexBindingDescriptionCount = 1;   vi.pVertexBindingDescriptions = &bind;
    vi.vertexAttributeDescriptionCount = 5; vi.pVertexAttributeDescriptions = at;

    VkPipelineInputAssemblyStateCreateInfo ia = { VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO };
    ia.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkPipelineViewportStateCreateInfo vp = { VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO };
    vp.viewportCount = 1; vp.scissorCount = 1;

    VkPipelineRasterizationStateCreateInfo rs = { VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO };
    rs.polygonMode = VK_POLYGON_MODE_FILL;
    rs.cullMode = k->cull;
    /* raster_tri keeps POSITIVE cross product in y-down screen coords; Vulkan's signed
     * area has the opposite sign convention, so those triangles are Vulkan-"clockwise". */
    rs.frontFace = VK_FRONT_FACE_CLOCKWISE;
    rs.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo ms = { VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO };
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineDepthStencilStateCreateInfo ds = { VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO };
    ds.depthTestEnable = k->ztest;
    ds.depthWriteEnable = k->zwrite;
    ds.depthCompareOp = (VkCompareOp)k->zfunc;

    VkPipelineColorBlendAttachmentState ba = {0};
    ba.blendEnable = k->blend_on;
    ba.srcColorBlendFactor = (VkBlendFactor)k->srcf;
    ba.dstColorBlendFactor = (VkBlendFactor)k->dstf;
    ba.colorBlendOp = (VkBlendOp)k->eq;
    ba.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;    /* PSP: dst alpha = clamp(sa + da) */
    ba.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    ba.alphaBlendOp = VK_BLEND_OP_ADD;
    ba.colorWriteMask = k->cmask;
    VkPipelineColorBlendStateCreateInfo cb = { VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO };
    cb.attachmentCount = 1; cb.pAttachments = &ba;

    VkDynamicState dyn[] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR,
                             VK_DYNAMIC_STATE_BLEND_CONSTANTS };
    VkPipelineDynamicStateCreateInfo dn = { VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO };
    dn.dynamicStateCount = 3; dn.pDynamicStates = dyn;

    VkGraphicsPipelineCreateInfo pci = { VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO };
    pci.stageCount = 2; pci.pStages = st;
    pci.pVertexInputState = &vi; pci.pInputAssemblyState = &ia;
    pci.pViewportState = &vp; pci.pRasterizationState = &rs;
    pci.pMultisampleState = &ms; pci.pDepthStencilState = &ds;
    pci.pColorBlendState = &cb; pci.pDynamicState = &dn;
    pci.layout = s_playout; pci.renderPass = s_rp;

    VkPipeline p = VK_NULL_HANDLE;
    VkResult r = vkCreateGraphicsPipelines(s_dev, VK_NULL_HANDLE, 1, &pci, NULL, &p);
    if (r != VK_SUCCESS) fprintf(stderr, "gegpu: pipeline create failed: %d\n", (int)r);
    return p;
}

static VkPipeline pipe_get(const PipeKey *k) {
    for (int i = 0; i < s_pipe_n; i++)
        if (!memcmp(&s_pipes[i].key, k, sizeof(*k))) return s_pipes[i].pipe;
    if (s_pipe_n >= MAX_PIPES) return VK_NULL_HANDLE;
    VkPipeline p = pipe_create(k);
    if (!p) return VK_NULL_HANDLE;
    s_pipes[s_pipe_n].key = *k; s_pipes[s_pipe_n].pipe = p; s_pipe_n++;
    return p;
}

/* ---- descriptors ------------------------------------------------------------------------ */

static VkDescriptorSet make_descriptor(VkImageView view, VkSampler smp, VkDescriptorPool pool) {
    VkDescriptorSetAllocateInfo dai = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO };
    dai.descriptorPool = pool; dai.descriptorSetCount = 1; dai.pSetLayouts = &s_dlayout;
    VkDescriptorSet set = VK_NULL_HANDLE;
    if (vkAllocateDescriptorSets(s_dev, &dai, &set) != VK_SUCCESS) return VK_NULL_HANDLE;
    VkDescriptorImageInfo dii = { smp, view, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL };
    VkWriteDescriptorSet wr = { VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET };
    wr.dstSet = set; wr.descriptorCount = 1;
    wr.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    wr.pImageInfo = &dii;
    vkUpdateDescriptorSets(s_dev, 1, &wr, 0, NULL);
    return set;
}

/* ---- batch submission (GPU only, no VRAM I/O) ------------------------------------------- */

static uint32_t s_flushgen = 1;            /* bumped per submit: invalidates state template */

static void batches_reset(void) {
    s_nbatch = 0; s_nverts = 0;
    s_flushgen++;
    for (int i = 0; i < s_tex_n; i++) s_tex[i].pending = 0;
}

/* Render all pending batches into s_cur. Leaves the color image SHADER_READ_ONLY. */
static int submit_pending(void) {
    if (!s_nbatch || !s_cur) { if (s_nbatch == 0) batches_reset(); return 1; }
    Target *t = s_cur;
    if (!cmd_begin()) { batches_reset(); return 0; }

    /* One linear copy of everything this submit will draw, instead of scattered
     * stores into write-combined memory as the vertices were produced.
     *
     * It lands in this ring slot's own region. With a single region the copy
     * would overwrite vertices a submit up to RING-1 submissions old is still
     * reading -- cmd_begin() no longer drains, so nothing else would stop it.
     * The batches index from the region base, which is what the bind offset
     * below supplies, so b->first is unchanged. */
    s_voff = (VkDeviceSize)((s_submit_id + 1) % RING) * MAX_VERTS * sizeof(GpuVert);
    if (s_nverts)
        memcpy((u8 *)s_vmap + s_voff, s_vstage, (size_t)s_nverts * sizeof(GpuVert));

    to_layout(s_cmd, t->img, VK_IMAGE_ASPECT_COLOR_BIT, &t->layout,
              VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
    to_layout(s_cmd, t->dep->img, VK_IMAGE_ASPECT_DEPTH_BIT, &t->dep->layout,
              VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);

    /* Supersampling is purely a viewport change: psp.vert maps screen pixels
     * to NDC with FB_W/FB_H baked in, so the same vertices cover the same
     * fraction of a bigger target. Only the scissor rectangles, which arrive
     * in PSP pixels, have to be scaled. */
    const uint32_t sc_mul = t->scale;
    VkRenderPassBeginInfo rbi = { VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO };
    rbi.renderPass = s_rp; rbi.framebuffer = t->fb;
    rbi.renderArea.extent.width = FB_W * sc_mul;
    rbi.renderArea.extent.height = FB_H * sc_mul;
    vkCmdBeginRenderPass(s_cmd, &rbi, VK_SUBPASS_CONTENTS_INLINE);

    VkViewport vp = { 0, 0, (float)(FB_W * sc_mul), (float)(FB_H * sc_mul), 0.0f, 1.0f };
    vkCmdSetViewport(s_cmd, 0, 1, &vp);
    vkCmdBindVertexBuffers(s_cmd, 0, 1, &s_vbuf, &s_voff);

    VkPipeline cur = VK_NULL_HANDLE;
    for (uint32_t i = 0; i < s_nbatch; i++) {
        Batch *b = &s_batch[i];
        VkPipeline p = pipe_get(&b->key);
        if (!p) continue;
        if (p != cur) { vkCmdBindPipeline(s_cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, p); cur = p; }
        VkRect2D sc = { { b->sx * (int32_t)sc_mul, b->sy * (int32_t)sc_mul },
                        { (uint32_t)b->sw * sc_mul, (uint32_t)b->sh * sc_mul } };
        vkCmdSetScissor(s_cmd, 0, 1, &sc);
        /* The scissor bounds what this batch can touch, in PSP rows. */
        target_drew(t, (uint32_t)(b->sy < 0 ? 0 : b->sy),
                    (uint32_t)(b->sy < 0 ? 0 : b->sy) + (uint32_t)(b->sh < 0 ? 0 : b->sh));
        vkCmdSetBlendConstants(s_cmd, b->bconst);
        vkCmdPushConstants(s_cmd, s_playout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(b->pc), &b->pc);
        vkCmdBindDescriptorSets(s_cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s_playout, 0, 1, &b->dset, 0, NULL);
        vkCmdDraw(s_cmd, b->count, 1, b->first, 0);
    }
    vkCmdEndRenderPass(s_cmd);
    /* render pass final layouts (see init): color -> SHADER_READ_ONLY, depth stays */
    t->layout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;

    int ok = cmd_submit();
    t->gpu_valid = 1;
    t->render_gen++;
    s_cnt_submit++;
    if (s_log)
        fprintf(stderr, "GEGPU submit #%lu batches=%u verts=%u tgt=0x%08x/%u fmt=%u\n",
                s_cnt_submit, s_nbatch, s_nverts, t->fba, t->stride, t->fmt);
    batches_reset();
    return ok;
}

static void stats_tick(void) {
    static unsigned long last_ms = 0;
    unsigned long now = (unsigned long)(clock() * 1000ull / CLOCKS_PER_SEC);
    if (now - last_ms < 5000) return;
    last_ms = now;
    fprintf(stderr, "GEGPU stats: submits=%lu tris=%lu spr=%lu lines=%lu rtt=%lu snap=%lu "
            "present[gpu=%lu cpu=%lu] upload=%lu readback=%lu[rows=%lu skip=%lu] "
            "texup=%lu dirty=%lu xferblit=%lu pipes=%d texs=%d\n",
            s_cnt_submit, s_cnt_tri, s_cnt_spr, s_cnt_line, s_cnt_rtt, s_cnt_snap,
            s_cnt_present_gpu, s_cnt_present_cpu, s_cnt_upload, s_cnt_readback,
            s_cnt_readback_rows, s_cnt_readback_skip, s_cnt_texup,
            s_cnt_dirty, s_cnt_xferblit, s_pipe_n, s_tex_n);
}

/* ---- targets ----------------------------------------------------------------------------- */

/* Record that the GPU wrote rows [y0,y1) of this target. Conservative union:
 * widening is always safe, narrowing would risk serving stale VRAM. */
static void target_drew(Target *t, uint32_t y0, uint32_t y1) {
    if (y1 > FB_H) y1 = FB_H;
    if (y0 >= y1) return;
    if (t->drawn_y0 >= t->drawn_y1) { t->drawn_y0 = y0; t->drawn_y1 = y1; return; }
    if (y0 < t->drawn_y0) t->drawn_y0 = y0;
    if (y1 > t->drawn_y1) t->drawn_y1 = y1;
}

/* Which rows of `t` a guest-VRAM byte range actually needs materialized.
 *
 * WHY THIS EXISTS. A CLUT load reads at most 2 KB -- two rows of a 512-stride
 * 16-bit target. The old code answered it by resolving and copying the whole
 * frame: at res_scale=4 that is a 1920x1088 -> 512x272 blit, a 557 KB
 * GPU->host copy, a hard pipeline stall, and 130,560 scalar fb_pack() calls.
 * Two playtest logs put it at 14.1 and 13.0 ms a time, 45 times a second, and
 * it alone explained 90% of the variance in GE time (r^2=0.904, against
 * r^2=0.002 for triangle count). That was the sun-glare microstutter: it also
 * starved the emulated audio thread, which is what made it audible.
 *
 * Returns 0 -- nothing to do -- when the range meets no pixel the GE can have
 * written. That covers the case that matters: `flen` below spans the full
 * stride, but only the first DRAW_W columns are drawable, so a CLUT parked in
 * the 32-column stride gap (17 KB per target, and exactly where a game puts
 * one) intersects the target's ADDRESS range while sharing no byte with its
 * pixels. The old whole-frame copy could not even deliver such a CLUT -- it
 * clips each row to DRAW_W too -- so the stall bought nothing at all. */
static int target_rows_for_range(const Target *t, uint32_t a0, uint32_t bytes,
                                 uint32_t *out_y0, uint32_t *out_y1) {
    uint32_t bpp   = t->fmt == 3 ? 4 : 2;
    uint32_t pitch = t->stride * bpp;                              /* row, incl. gap */
    uint32_t draw  = (t->stride < DRAW_W ? t->stride : DRAW_W) * bpp;
    if (!pitch || !bytes) return 0;
    if (a0 + bytes <= t->fba || t->fba + pitch * FB_H <= a0) return 0;
    uint32_t lo = a0 > t->fba ? a0 - t->fba : 0;                   /* offsets into t */
    uint32_t hi = (a0 + bytes) - t->fba;
    if (hi > pitch * FB_H) hi = pitch * FB_H;
    uint32_t y0 = lo / pitch, y1 = (hi + pitch - 1) / pitch;
    if (y1 > FB_H) y1 = FB_H;
    /* Per row, intersect against the DRAWABLE span rather than the whole pitch. */
    uint32_t first = FB_H, last = 0;
    for (uint32_t y = y0; y < y1; y++) {
        uint32_t rs = y * pitch;
        if (lo < rs + draw && rs < hi) { if (y < first) first = y; last = y + 1; }
    }
    if (first >= last) return 0;
    *out_y0 = first; *out_y1 = last;
    return 1;
}

/* Write rows [y0,y1) of the target's GPU contents back to guest VRAM.
 * y0=0,y1=FB_H is the whole frame (eviction, rescale); a narrower span is the
 * CLUT-from-VRAM and block-transfer-source cases. */
static int target_readback_rows(Target *t, uint32_t y0, uint32_t y1) {
    if (!t->gpu_valid) return 1;
    if (y1 > FB_H) y1 = FB_H;
    if (y0 >= y1) return 1;
    int whole = (y0 == 0 && y1 == FB_H);
    if (t == s_cur && s_nbatch) submit_pending();
    if (t->clean_gen == t->render_gen) return 1;   /* VRAM already current */
    /* A partial readback cannot claim clean_gen, so without this the same CLUT
     * address would pay the stall again on every load within one frame -- and
     * this game issues ~42 LOADCLUTs a frame. One remembered span is enough:
     * the address does not move. */
    if (!whole && t->part_gen == t->render_gen
        && y0 >= t->part_y0 && y1 <= t->part_y1) return 1;
    uint32_t rows = y1 - y0;
    XferSlot *x = xfer_acquire();
    if (!cmd_begin()) return 0;
    to_layout(s_cmd, t->img, VK_IMAGE_ASPECT_COLOR_BIT, &t->layout,
              VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    VkBufferImageCopy c = {0};
    c.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    c.imageSubresource.layerCount = 1;
    c.imageOffset.y = (int32_t)y0;
    c.imageExtent.width = FB_W; c.imageExtent.height = rows; c.imageExtent.depth = 1;
    /* Supersampled: resolve down to the native image first, so everything
     * below (and guest VRAM) still works in native pixels. Only the rows being
     * read are resolved -- at scale 4 a two-row CLUT span is 1920x8, not
     * 1920x1088. */
    VkImage srcimg = t->img;
    if (t->scale > 1) {
        VkImageBlit b = {0};
        b.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        b.srcSubresource.layerCount = 1;
        b.srcOffsets[0].y = (int32_t)(y0 * t->scale);
        b.srcOffsets[1].x = (int32_t)(FB_W * t->scale);
        b.srcOffsets[1].y = (int32_t)(y1 * t->scale);
        b.srcOffsets[1].z = 1;
        b.dstSubresource = b.srcSubresource;
        b.dstOffsets[0].y = (int32_t)y0;
        b.dstOffsets[1].x = FB_W; b.dstOffsets[1].y = (int32_t)y1; b.dstOffsets[1].z = 1;
        to_layout(s_cmd, t->rimg, VK_IMAGE_ASPECT_COLOR_BIT, &t->rlayout,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        vkCmdBlitImage(s_cmd, t->img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       t->rimg, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &b,
                       VK_FILTER_LINEAR);
        to_layout(s_cmd, t->rimg, VK_IMAGE_ASPECT_COLOR_BIT, &t->rlayout,
                  VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        srcimg = t->rimg;
    }
    vkCmdCopyImageToBuffer(s_cmd, srcimg, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, x->buf, 1, &c);
    if (!cmd_submit()) return 0;
    xfer_used(x);
    /* A genuine dependency, not an artefact of the old design: the CPU reads
     * these pixels on the next line. */
    gpu_wait_id(x->id);
    /* Row y of the image landed at row (y - y0) of the staging buffer. */
    const uint32_t *src = (const uint32_t *)x->map;
    uint32_t wb = t->stride < DRAW_W ? t->stride : DRAW_W;
    for (uint32_t y = y0; y < y1; y++) {
        const uint32_t *row = src + (y - y0) * FB_W;
        if (t->fmt == 3) {
            memcpy((uint32_t *)SR_HOST((0x04000000u | t->fba) + y * t->stride * 4),
                   row, wb * 4);
        } else {
            uint16_t *dst = (uint16_t *)SR_HOST((0x04000000u | t->fba) + y * t->stride * 2);
            for (uint32_t x = 0; x < wb; x++) dst[x] = (uint16_t)fb_pack(row[x], t->fmt);
        }
    }
    if (whole) {
        t->clean_gen = t->render_gen;
        t->drawn_y0 = t->drawn_y1 = 0;     /* VRAM matches every row again */
    } else { t->part_gen = t->render_gen; t->part_y0 = y0; t->part_y1 = y1; }
    s_cnt_readback++;
    if (!whole) s_cnt_readback_rows++;
    return 1;
}

/* Whole-frame readback: eviction, reinterpretation, rescale, SR_GPU_SAFE. */
static int target_readback(Target *t) { return target_readback_rows(t, 0, FB_H); }

/* Materialize only what a guest read of [a0,a0+bytes) can actually observe. */
static int target_readback_range(Target *t, uint32_t a0, uint32_t bytes) {
    uint32_t y0, y1;
    if (!t->gpu_valid) return 1;
    /* SR_GPU_FULLRB=1 restores the whole-frame readback: the A/B control for
     * this change, in case a palette ever comes back wrong. */
    static int fullrb = -1;
    if (fullrb < 0) fullrb = getenv("SR_GPU_FULLRB") ? 1 : 0;
    if (fullrb) return target_readback(t);
    if (!target_rows_for_range(t, a0, bytes, &y0, &y1)) { s_cnt_readback_skip++; return 1; }
    /* Clip to rows the GPU has actually written. Outside that span the image
     * still holds what target_upload put there, which came from VRAM, so VRAM
     * is already correct and the stall would buy nothing. */
    if (y0 < t->drawn_y0) y0 = t->drawn_y0;
    if (y1 > t->drawn_y1) y1 = t->drawn_y1;
    if (y0 >= y1) { s_cnt_readback_skip++; return 1; }
    return target_readback_rows(t, y0, y1);
}

/* Fill the target's color image from guest VRAM (creation / CPU-dirty reacquire). */
static int target_upload(Target *t) {
    uint32_t *dst = s_pxscratch;
    for (uint32_t y = 0; y < FB_H; y++) {
        if (t->fmt == 3) {
            memcpy(dst + y * FB_W, (const uint32_t *)SR_HOST((0x04000000u | t->fba) + y * t->stride * 4),
                   t->stride * 4);
        } else {
            const uint16_t *src = (const uint16_t *)SR_HOST((0x04000000u | t->fba) + y * t->stride * 2);
            for (uint32_t x = 0; x < t->stride; x++) dst[y * FB_W + x] = fb_unpack(src[x], t->fmt);
        }
        for (uint32_t x = t->stride; x < FB_W; x++) dst[y * FB_W + x] = 0;
    }
    /* This overwrites t->img, which an in-flight submit may still be rendering
     * into or sampling. Rare (3 uploads in a whole tester session: target
     * creation and CPU-dirtied VRAM), so drain rather than track. */
    gpu_sync();
    XferSlot *x = xfer_acquire();
    memcpy(x->map, s_pxscratch, FB_W * FB_H * 4);
    if (!cmd_begin()) return 0;
    VkBufferImageCopy c = {0};
    c.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    c.imageSubresource.layerCount = 1;
    c.imageExtent.width = FB_W; c.imageExtent.height = FB_H; c.imageExtent.depth = 1;
    if (t->scale > 1) {
        /* VRAM is native: land it in the staging image, then magnify. */
        VkImageBlit b = {0};
        to_layout(s_cmd, t->rimg, VK_IMAGE_ASPECT_COLOR_BIT, &t->rlayout,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        vkCmdCopyBufferToImage(s_cmd, x->buf, t->rimg,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &c);
        to_layout(s_cmd, t->rimg, VK_IMAGE_ASPECT_COLOR_BIT, &t->rlayout,
                  VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        b.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        b.srcSubresource.layerCount = 1;
        b.srcOffsets[1].x = FB_W; b.srcOffsets[1].y = FB_H; b.srcOffsets[1].z = 1;
        b.dstSubresource = b.srcSubresource;
        b.dstOffsets[1].x = (int32_t)(FB_W * t->scale);
        b.dstOffsets[1].y = (int32_t)(FB_H * t->scale);
        b.dstOffsets[1].z = 1;
        to_layout(s_cmd, t->img, VK_IMAGE_ASPECT_COLOR_BIT, &t->layout,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        vkCmdBlitImage(s_cmd, t->rimg, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       t->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &b,
                       VK_FILTER_NEAREST);
    } else {
        to_layout(s_cmd, t->img, VK_IMAGE_ASPECT_COLOR_BIT, &t->layout,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        vkCmdCopyBufferToImage(s_cmd, x->buf, t->img,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &c);
    }
    to_layout(s_cmd, t->img, VK_IMAGE_ASPECT_COLOR_BIT, &t->layout,
              VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    if (!cmd_submit()) return 0;
    xfer_used(x);
    t->gpu_valid = 1;
    t->render_gen++;                       /* image content changed (snapshot reuse check) */
    t->clean_gen = t->render_gen;          /* VRAM is the source: in sync by definition */
    t->drawn_y0 = t->drawn_y1 = 0;         /* ...so no row needs reading back */
    s_cnt_upload++;
    return 1;
}

static void target_destroy(Target *t) {
    if (!t->used) return;
    /* The in-flight submit may still be rendering into this target, sampling
     * it through set_n/set_l, or blitting out of it. Freeing a descriptor set
     * or an image a queued command buffer references is undefined behaviour,
     * and the reachable path here (target_acquire evicting a target whose
     * readback was a no-op) does not sync on its own. Targets are destroyed a
     * handful of times per scene, so the wait is not worth being clever about. */
    gpu_sync();
    if (s_snap_src == t) s_snap_src = NULL;
    if (t->fb) vkDestroyFramebuffer(s_dev, t->fb, NULL);
    if (t->set_n) vkFreeDescriptorSets(s_dev, s_dpool_fix, 1, &t->set_n);
    if (t->set_l) vkFreeDescriptorSets(s_dev, s_dpool_fix, 1, &t->set_l);
    if (t->view) vkDestroyImageView(s_dev, t->view, NULL);
    if (t->img) vkDestroyImage(s_dev, t->img, NULL);
    if (t->mem) vkFreeMemory(s_dev, t->mem, NULL);
    if (t->rimg) vkDestroyImage(s_dev, t->rimg, NULL);
    if (t->rmem) vkFreeMemory(s_dev, t->rmem, NULL);
    memset(t, 0, sizeof(*t));
}

static DepthEnt *depth_acquire(uint32_t zba, uint32_t zstride) {
    for (int i = 0; i < MAX_DEP; i++)
        if (s_deps[i].used && s_deps[i].zba == zba && s_deps[i].zstride == zstride)
            return &s_deps[i];
    DepthEnt *d = NULL;
    for (int i = 0; i < MAX_DEP; i++) if (!s_deps[i].used) { d = &s_deps[i]; break; }
    if (!d) {   /* evict slot 0 arbitrarily (depth contents are transient frame data) */
        gpu_sync(); vkDeviceWaitIdle(s_dev);
        d = &s_deps[0];
        vkDestroyImageView(s_dev, d->view, NULL);
        vkDestroyImage(s_dev, d->img, NULL);
        vkFreeMemory(s_dev, d->mem, NULL);
        /* targets holding this depth must drop their framebuffers */
        for (int i = 0; i < MAX_TGT; i++)
            if (s_tgts[i].used && s_tgts[i].dep == d) {
                vkDestroyFramebuffer(s_dev, s_tgts[i].fb, NULL);
                s_tgts[i].fb = VK_NULL_HANDLE; s_tgts[i].dep = NULL;
            }
        memset(d, 0, sizeof(*d));
    }
    /* Depth shares the framebuffer with the colour target, so it scales with
     * it. The one-off seed below stays native and is only copied at scale 1;
     * at higher scales the first clear supplies the contents instead. */
    d->scale = gpu_scale();
    if (!make_image(FB_W * d->scale, FB_H * d->scale, VK_FORMAT_D16_UNORM,
                    VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                    &d->img, &d->mem)) return NULL;
    if (!make_view(d->img, VK_FORMAT_D16_UNORM, VK_IMAGE_ASPECT_DEPTH_BIT, &d->view)) return NULL;
    d->layout = VK_IMAGE_LAYOUT_UNDEFINED;
    d->zba = zba; d->zstride = zstride; d->used = 1;
    /* initialize from the (CPU) software z-buffer once — games clear depth before use,
     * this just avoids garbage on the very first frame */
    if (d->scale == 1) {
        XferSlot *x = xfer_acquire();
        memcpy(x->map, s_zbuf, FB_W * FB_H * 2);
        if (!cmd_begin()) return d;
        to_layout(s_cmd, d->img, VK_IMAGE_ASPECT_DEPTH_BIT, &d->layout,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        VkBufferImageCopy c = {0};
        c.imageSubresource.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
        c.imageSubresource.layerCount = 1;
        c.imageExtent.width = FB_W; c.imageExtent.height = FB_H; c.imageExtent.depth = 1;
        vkCmdCopyBufferToImage(s_cmd, x->buf, d->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &c);
        to_layout(s_cmd, d->img, VK_IMAGE_ASPECT_DEPTH_BIT, &d->layout,
                  VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
        cmd_submit();
        xfer_used(x);
    }
    return d;
}

/* The render scale changed: every image is the wrong size now. Write the
 * targets back to guest VRAM first so nothing on screen is lost, then drop
 * them -- they are rebuilt at the new scale on demand. */
static void targets_rescale(void) {
    if (s_nbatch) submit_pending();
    gpu_sync(); vkDeviceWaitIdle(s_dev);
    for (int i = 0; i < MAX_TGT; i++)
        if (s_tgts[i].used) { target_readback(&s_tgts[i]); target_destroy(&s_tgts[i]); }
    for (int i = 0; i < MAX_DEP; i++) {
        DepthEnt *d = &s_deps[i];
        if (!d->used) continue;
        if (d->view) vkDestroyImageView(s_dev, d->view, NULL);
        if (d->img) vkDestroyImage(s_dev, d->img, NULL);
        if (d->mem) vkFreeMemory(s_dev, d->mem, NULL);
        memset(d, 0, sizeof(*d));
    }
    s_cur = NULL;
    s_snap_src = NULL;
}

static Target *target_acquire(void) {
    uint32_t fba = s_ge->fbp & 0x001FFFFFu;
    uint32_t stride = s_ge->fbw ? s_ge->fbw : 512;
    if (stride > 512) stride = 512;
    uint32_t fmt = s_ge->fbfmt & 3;
    uint32_t zba = s_ge->zbp & 0x001FFFFFu;
    uint32_t zstride = s_ge->zbw ? s_ge->zbw : stride;
    if (zstride > 512) zstride = 512;

    /* A live target built at another scale cannot share a framebuffer with a
     * depth image at the current one, so the switch happens all at once. */
    for (int i = 0; i < MAX_TGT; i++)
        if (s_tgts[i].used && s_tgts[i].scale != gpu_scale()) { targets_rescale(); break; }

    Target *t = NULL;
    for (int i = 0; i < MAX_TGT; i++)
        if (s_tgts[i].used && s_tgts[i].fba == fba) { t = &s_tgts[i]; break; }

    if (t && (t->stride != stride || t->fmt != fmt)) {
        /* same address reinterpreted: preserve pixels through VRAM */
        target_readback(t);
        if (t == s_cur) { submit_pending(); s_cur = NULL; }
        target_destroy(t);
        t = NULL;
    }

    if (!t) {
        for (int i = 0; i < MAX_TGT; i++) if (!s_tgts[i].used) { t = &s_tgts[i]; break; }
        if (!t) {   /* LRU eviction, preserving contents */
            Target *old = NULL;
            for (int i = 0; i < MAX_TGT; i++)
                if (s_tgts[i].used && (!old || s_tgts[i].lru < old->lru) && &s_tgts[i] != s_cur)
                    old = &s_tgts[i];
            target_readback(old);
            if (old == s_cur) { submit_pending(); s_cur = NULL; }
            target_destroy(old);
            t = old;
        }
        memset(t, 0, sizeof(*t));
        t->fba = fba; t->stride = stride; t->fmt = fmt; t->used = 1;
        t->layout = VK_IMAGE_LAYOUT_UNDEFINED;
        t->rlayout = VK_IMAGE_LAYOUT_UNDEFINED;
        t->scale = gpu_scale();
        if (!make_image(FB_W * t->scale, FB_H * t->scale, VK_FORMAT_R8G8B8A8_UNORM,
                        VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                        VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                        &t->img, &t->mem)) { t->used = 0; return NULL; }
        /* The native staging image only exists when the two sizes differ. */
        if (t->scale > 1
            && !make_image(FB_W, FB_H, VK_FORMAT_R8G8B8A8_UNORM,
                           VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                           &t->rimg, &t->rmem)) { t->used = 0; return NULL; }
        if (!make_view(t->img, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_ASPECT_COLOR_BIT, &t->view)) return NULL;
        t->set_n = make_descriptor(t->view, s_smp_n, s_dpool_fix);
        t->set_l = make_descriptor(t->view, s_smp_l, s_dpool_fix);
        if (!target_upload(t)) return NULL;   /* seed from guest VRAM */
    } else if (!t->gpu_valid) {
        if (!target_upload(t)) return NULL;   /* CPU dirtied VRAM (movie/DMA): re-seed */
    }

    DepthEnt *d = depth_acquire(zba, zstride);
    if (!d) return NULL;
    if (t->dep != d || !t->fb) {
        /* Same rule as target_destroy: a queued render pass still names this
         * framebuffer. Only reached when the target's depth buffer changes. */
        if (t->fb) { gpu_sync(); vkDestroyFramebuffer(s_dev, t->fb, NULL); }
        VkImageView views[2] = { t->view, d->view };
        VkFramebufferCreateInfo fbc = { VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO };
        fbc.renderPass = s_rp; fbc.attachmentCount = 2; fbc.pAttachments = views;
        fbc.width = FB_W * t->scale; fbc.height = FB_H * t->scale; fbc.layers = 1;
        if (vkCreateFramebuffer(s_dev, &fbc, NULL, &t->fb) != VK_SUCCESS) return NULL;
        t->dep = d;
    }
    t->lru = s_lru++;
    return t;
}

/* Ensure s_cur points at the GE's current target, submitting pending work on a switch. */
static int begin_target(void) {
    uint32_t fba = s_ge->fbp & 0x001FFFFFu;
    uint32_t stride = s_ge->fbw ? s_ge->fbw : 512;
    if (stride > 512) stride = 512;
    if (s_cur && s_cur->used && s_cur->fba == fba &&
        s_cur->fmt == (s_ge->fbfmt & 3) && s_cur->stride == stride && s_cur->gpu_valid) {
        s_cur->lru = s_lru++;
        return 1;
    }
    if (s_nbatch) submit_pending();
    s_cur = target_acquire();
    return s_cur != NULL;
}

/* ---- texture cache (RAM textures, decoded by ge.c's reference sampler) ------------------- */

static uint64_t fnv64(uint64_t h, const void *data, size_t n) {
    const uint8_t *p = (const uint8_t *)data;
    for (size_t i = 0; i < n; i++) { h ^= p[i]; h *= 1099511628211ull; }
    return h;
}

static uint64_t tex_hash(void) {
    uint32_t bpp_num;
    switch (s_ge->tex_fmt) {
        case 3: bpp_num = 32; break;
        case 4: bpp_num = 4;  break;
        case 5: bpp_num = 8;  break;
        default: bpp_num = 16; break;
    }
    uint32_t stride = s_ge->tex_bufw ? s_ge->tex_bufw : (uint32_t)s_ge->tex_w;
    uint64_t bytes = ((uint64_t)stride * (uint64_t)s_ge->tex_h * bpp_num) >> 3;
    if (bytes > 4u << 20) bytes = 4u << 20;
    const uint8_t *p = (const uint8_t *)SR_HOST(s_ge->tex_addr);
    uint64_t h = 1469598103934665603ull;
    h = fnv64(h, &bytes, sizeof(bytes));
    uint64_t step = bytes / 64; if (step < 16) step = 16;
    for (uint64_t off = 0; off + 16 <= bytes; off += step) h = fnv64(h, p + off, 16);
    if (bytes >= 16) h = fnv64(h, p + bytes - 16, 16);
    return h;
}

/* Palette identity for CLUT textures. Must be part of the cache KEY, not just the
 * content hash: one greyscale texture drawn through many palettes per frame would
 * otherwise ping-pong a single entry (full decode + upload + wait on every draw). */
static uint64_t clut_hash(void) {
    uint64_t h = 1469598103934665603ull;
    h = fnv64(h, s_ge->clutram, sizeof(s_ge->clutram));
    h = fnv64(h, &s_ge->clut_fmt, sizeof(s_ge->clut_fmt));
    return h;
}

static uint64_t s_texlru = 1;

/* Evict the LRU quarter so the working set survives (a full clear would rebuild
 * every texture per frame once a scene exceeds the cap). */
static void tex_evict_lru(void) {
    gpu_sync(); vkDeviceWaitIdle(s_dev);
    int goal = s_tex_n - MAX_TEX / 4;
    while (s_tex_n > goal) {
        int v = 0;
        for (int i = 1; i < s_tex_n; i++)
            if (s_tex[i].lru < s_tex[v].lru) v = i;
        TexEnt *e = &s_tex[v];
        vkFreeDescriptorSets(s_dev, s_dpool_tex, 1, &e->set);
        vkDestroySampler(s_dev, e->smp, NULL);
        vkDestroyImageView(s_dev, e->view, NULL);
        vkDestroyImage(s_dev, e->img, NULL);
        vkFreeMemory(s_dev, e->mem, NULL);
        *e = s_tex[--s_tex_n];
    }
}

/* Barrier a single mip level; to_layout() only knows whole images.
 *
 * The destination stage follows the destination access: SHADER_READ is not a
 * TRANSFER-stage access, and pairing them was a validation error (harmless
 * while every submit drained, not harmless now that they can overlap). */
static void mip_barrier(VkCommandBuffer cmd, VkImage img, uint32_t level,
                        VkImageLayout from, VkImageLayout to,
                        VkAccessFlags src, VkAccessFlags dst) {
    VkImageMemoryBarrier mb = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
    mb.srcAccessMask = src; mb.dstAccessMask = dst;
    mb.oldLayout = from; mb.newLayout = to;
    mb.srcQueueFamilyIndex = mb.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    mb.image = img;
    mb.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    mb.subresourceRange.baseMipLevel = level;
    mb.subresourceRange.levelCount = 1;
    mb.subresourceRange.layerCount = 1;
    VkPipelineStageFlags dst_stage = (dst & VK_ACCESS_SHADER_READ_BIT)
                                   ? VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT
                                   : VK_PIPELINE_STAGE_TRANSFER_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         dst_stage, 0, 0, NULL, 0, NULL, 1, &mb);
}

/* Upload level 0, then build the chain by successive halving blits.
 *
 * This is what makes minified text readable. The game's font stores glyphs at
 * twice the size it draws them (the sprite trace shows 8 texels going into 4
 * pixels), and with only level 0 the sampler reads every other texel and never
 * sees the ones between, so thin strokes drop out. Level 1 is the box-filtered
 * half-size image -- exactly what a 2:1 draw should be reading. */
static int tex_upload(VkImage img, const uint32_t *px, int w, int h, uint32_t levels) {
    /* The slot's own fence is what makes this safe. Writing a single shared
     * staging buffer here, with the wait deferred, is what corrupted the font
     * atlas the first time this was attempted: the glyph sheet is uploaded once
     * and then read for the rest of the frame, so the next upload's memcpy
     * landed in bytes the GPU was still copying out. */
    XferSlot *x = xfer_acquire();
    memcpy(x->map, px, (size_t)w * (size_t)h * 4);
    if (!cmd_begin()) return 0;

    mip_barrier(s_cmd, img, 0, VK_IMAGE_LAYOUT_UNDEFINED,
                VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT);
    VkBufferImageCopy bic = {0};
    bic.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    bic.imageSubresource.layerCount = 1;
    bic.imageExtent.width = (uint32_t)w; bic.imageExtent.height = (uint32_t)h; bic.imageExtent.depth = 1;
    vkCmdCopyBufferToImage(s_cmd, x->buf, img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &bic);

    int mw = w, mh = h;
    for (uint32_t l = 1; l < levels; l++) {
        int nw = mw > 1 ? mw / 2 : 1, nh = mh > 1 ? mh / 2 : 1;
        mip_barrier(s_cmd, img, l - 1, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                    VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT);
        mip_barrier(s_cmd, img, l, VK_IMAGE_LAYOUT_UNDEFINED,
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT);
        VkImageBlit b = {0};
        b.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        b.srcSubresource.mipLevel = l - 1;
        b.srcSubresource.layerCount = 1;
        b.srcOffsets[1].x = mw; b.srcOffsets[1].y = mh; b.srcOffsets[1].z = 1;
        b.dstSubresource = b.srcSubresource;
        b.dstSubresource.mipLevel = l;
        b.dstOffsets[1].x = nw; b.dstOffsets[1].y = nh; b.dstOffsets[1].z = 1;
        vkCmdBlitImage(s_cmd, img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &b, VK_FILTER_LINEAR);
        mip_barrier(s_cmd, img, l - 1, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                    VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                    VK_ACCESS_TRANSFER_READ_BIT, VK_ACCESS_SHADER_READ_BIT);
        mw = nw; mh = nh;
    }
    mip_barrier(s_cmd, img, levels - 1, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT);
    if (!cmd_submit()) return 0;
    xfer_used(x);
    return 1;
}

static int tex_make(const uint32_t *px, int w, int h, int linear, int clamp_u, int clamp_v,
                    VkImage *img, VkDeviceMemory *mem, VkImageView *view, VkSampler *smp) {
    /* Mips are only worth building for a filtered texture: a nearest-sampled
     * one is meant to look blocky, and mip selection would just blur it. */
    uint32_t levels = (linear && g_gfx.mipmaps_on) ? mip_levels_for(w, h) : 1;
    if (!make_image_mip((uint32_t)w, (uint32_t)h, levels, VK_FORMAT_R8G8B8A8_UNORM,
                        VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT
                        | VK_IMAGE_USAGE_SAMPLED_BIT, img, mem))
        return 0;
    if (!tex_upload(*img, px, w, h, levels)) return 0;
    if (!make_view_mip(*img, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_ASPECT_COLOR_BIT,
                       levels, view)) return 0;
    VkSamplerCreateInfo sci = { VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO };
    sci.magFilter = linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    sci.minFilter = sci.magFilter;
    /* Trilinear between levels, so a glyph drawn at 1.7:1 does not pop between
     * two mips mid-string. */
    sci.mipmapMode = levels > 1 ? VK_SAMPLER_MIPMAP_MODE_LINEAR
                                : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    sci.maxLod = (float)(levels - 1);
    sci.addressModeU = clamp_u ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sci.addressModeV = clamp_v ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sci.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    if (levels > 1 && s_max_aniso > 1.0f && g_gfx.anisotropy > 1) {
        float want = (float)g_gfx.anisotropy;
        sci.anisotropyEnable = VK_TRUE;
        sci.maxAnisotropy = want < s_max_aniso ? want : s_max_aniso;
    }
    VKC(vkCreateSampler(s_dev, &sci, NULL, smp));
    return 1;
}

/* Drop every cached texture: the images themselves are now built wrong (mip
 * levels, sampler state), so they have to be made again rather than reused. */
static void tex_cache_flush(void) {
    if (!s_tex_n) return;
    submit_pending();
    gpu_sync(); vkDeviceWaitIdle(s_dev);
    for (int i = 0; i < s_tex_n; i++) {
        TexEnt *e = &s_tex[i];
        vkFreeDescriptorSets(s_dev, s_dpool_tex, 1, &e->set);
        vkDestroySampler(s_dev, e->smp, NULL);
        vkDestroyImageView(s_dev, e->view, NULL);
        vkDestroyImage(s_dev, e->img, NULL);
        vkFreeMemory(s_dev, e->mem, NULL);
    }
    s_tex_n = 0;
}

static VkDescriptorSet tex_get(void) {
    int w = s_ge->tex_w, h = s_ge->tex_h;
    /* Texture settings changed in the menu: rebuild on the spot so the player
     * sees the result now, not after the next scene load. */
    static unsigned tex_gen;
    if (tex_gen != g_gfx_generation) { tex_gen = g_gfx_generation; tex_cache_flush(); }
    if (w <= 0 || h <= 0 || w > 512 || h > 512) return s_white_set;
    int linear  = (s_ge->tex_filter & 1) || ((s_ge->tex_filter >> 8) & 1);
    int clamp_u = s_ge->tex_wrap & 1, clamp_v = (s_ge->tex_wrap >> 8) & 1;
    /* Forcing linear on a surface the game meant to point-sample makes the
     * sampler reach outside the texel it was asked for. Where the game left
     * REPEAT on -- harmless under nearest -- that reach wraps to the opposite
     * edge and drags a bright column across the seam. Clamp instead: it cannot
     * fix a glyph bleeding into the cell packed beside it, but it does stop
     * the far side of the texture bleeding in. */
    if (g_gfx.tex_filter == TEXF_LINEAR) clamp_u = clamp_v = 1;
    uint64_t key = (uint64_t)s_ge->tex_addr | ((uint64_t)s_ge->tex_fmt << 32)
                 | ((uint64_t)(uint32_t)w << 36) | ((uint64_t)(uint32_t)h << 46)
                 | ((uint64_t)s_ge->tex_swizzle << 56) | ((uint64_t)(unsigned)linear << 57)
                 | ((uint64_t)(unsigned)clamp_u << 58) | ((uint64_t)(unsigned)clamp_v << 59);
    key ^= (uint64_t)s_ge->tex_bufw << 16;
    if (s_ge->tex_fmt == 4 || s_ge->tex_fmt == 5)
        key ^= clut_hash() | 1;        /* distinct entry per (texture, palette) pair */
    uint64_t hash = tex_hash();
    for (int i = 0; i < s_tex_n; i++) {
        TexEnt *e = &s_tex[i];
        if (e->key != key) continue;
        e->lru = s_texlru++;
        if (e->hash == hash) { e->pending = 1; return e->set; }
        /* Same texture state, new contents: update in place (cache stays
         * bounded). The image is rewritten under a submit that may still be
         * sampling it, and cmd_begin() no longer drains, so this one needs a
         * real wait. Measured at 0.085 texture uploads per frame, so a drain
         * here is cheaper than tracking a per-entry submit id. */
        if (e->pending) submit_pending();
        gpu_sync();
        ge_decode_tex_rgba(s_texscratch);
        if (!tex_upload(e->img, s_texscratch, e->w, e->h, e->levels)) return s_white_set;
        e->hash = hash;
        e->pending = 1;
        s_cnt_texup++;
        return e->set;
    }

    if (s_tex_n >= MAX_TEX) {
        submit_pending();   /* batches reference sets about to be freed */
        tex_evict_lru();
    }
    ge_decode_tex_rgba(s_texscratch);
    TexEnt *e = &s_tex[s_tex_n];
    memset(e, 0, sizeof(*e));
    if (!tex_make(s_texscratch, w, h, linear, clamp_u, clamp_v, &e->img, &e->mem, &e->view, &e->smp))
        return s_white_set;
    e->set = make_descriptor(e->view, e->smp, s_dpool_tex);
    if (!e->set) return s_white_set;
    e->key = key; e->hash = hash;
    e->w = w; e->h = h;
    /* must match what tex_make() chose, or an in-place refresh rebuilds the
     * wrong number of levels */
    e->levels = (linear && g_gfx.mipmaps_on) ? mip_levels_for(w, h) : 1;
    e->pending = 1;
    e->lru = s_texlru++;
    s_cnt_texup++;
    s_tex_n++;
    return e->set;
}

/* ---- capture --------------------------------------------------------------------------- */

static float snap16(float v) { return floorf(v * 16.0f + 0.375f) * (1.0f / 16.0f); }

/* NO_UV_BOUND is wider than any texel coordinate the GE can produce, so the
 * shader's clamp is a no-op for 3D geometry (which legitimately wraps/repeats). */
#define NO_UV_BOUND 1.0e30f

static float s_ulo = -NO_UV_BOUND, s_vlo = -NO_UV_BOUND;
static float s_uhi =  NO_UV_BOUND, s_vhi =  NO_UV_BOUND;

static void uv_bound_set(float u0, float u1, float v0, float v1) {
    s_ulo = u0 < u1 ? u0 : u1;  s_uhi = u0 < u1 ? u1 : u0;
    s_vlo = v0 < v1 ? v0 : v1;  s_vhi = v0 < v1 ? v1 : v0;
}
static void uv_bound_clear(void) {
    s_ulo = s_vlo = -NO_UV_BOUND;
    s_uhi = s_vhi =  NO_UV_BOUND;
}

static void put_vert(float x, float y, float z, float rw, float u, float v, float fog,
                     int r, int g, int b, int a) {
    GpuVert *o = &s_vstage[s_nverts++];
    o->x = snap16(x); o->y = snap16(y); o->z = z; o->rw = rw;
    o->u = u; o->v = v; o->fog = fog;
    o->ulo = s_ulo; o->vlo = s_vlo; o->uhi = s_uhi; o->vhi = s_vhi;
    uint32_t cr = (uint32_t)(r < 0 ? 0 : r > 255 ? 255 : r);
    uint32_t cg = (uint32_t)(g < 0 ? 0 : g > 255 ? 255 : g);
    uint32_t cb = (uint32_t)(b < 0 ? 0 : b > 255 ? 255 : b);
    uint32_t ca = (uint32_t)(a < 0 ? 0 : a > 255 ? 255 : a);
    o->rgba = cr | (cg << 8) | (cb << 16) | (ca << 24);
}

/* PSP blend factor -> VkBlendFactor + shader premultiply flags. Never fails: factors
 * with no VK equivalent are approximated (see file header). */
static int map_factor(uint32_t f, int src_side, uint32_t fixed, int *need_const, int *premul) {
    switch (f & 0xF) {
        case 0: return src_side ? VK_BLEND_FACTOR_DST_COLOR : VK_BLEND_FACTOR_SRC_COLOR;
        case 1: return src_side ? VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR : VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
        case 2: return VK_BLEND_FACTOR_SRC_ALPHA;
        case 3: return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case 4: return VK_BLEND_FACTOR_DST_ALPHA;
        case 5: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        case 6:   /* 2*src alpha: exact on the src side (shader premultiplies rgb) */
            if (src_side) { *premul = F_SA2X; return VK_BLEND_FACTOR_ONE; }
            return VK_BLEND_FACTOR_SRC_ALPHA;                  /* dst side: halved approx */
        case 7:
            if (src_side) { *premul = F_SA2XI; return VK_BLEND_FACTOR_ONE; }
            return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case 8: return VK_BLEND_FACTOR_DST_ALPHA;              /* 2*dst alpha approx */
        case 9: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        default:
            if ((fixed & 0xFFFFFF) == 0)        return VK_BLEND_FACTOR_ZERO;
            if ((fixed & 0xFFFFFF) == 0xFFFFFF) return VK_BLEND_FACTOR_ONE;
            *need_const = 1;
            return VK_BLEND_FACTOR_CONSTANT_COLOR;
    }
}

/* Build pipeline key + push constants for the current GE state. Always succeeds. */
static void build_state(int persp, int sprite, Batch *b) {
    GeState *g = s_ge;
    PipeKey *k = &b->key;
    memset(b, 0, sizeof(*b));

    int clear = g->clear;
    int premul = 0;

    /* scissor, clamped to the drawable region */
    int sx1 = g->scis_x1 > 0 ? g->scis_x1 : 0, sy1 = g->scis_y1 > 0 ? g->scis_y1 : 0;
    int sx2 = g->scis_x2 < DRAW_W - 1 ? g->scis_x2 : DRAW_W - 1;
    int sy2 = g->scis_y2 < FB_H - 1 ? g->scis_y2 : FB_H - 1;
    if (sx1 > sx2 || sy1 > sy2) { b->sw = 0; return; }   /* nothing drawable */
    b->sx = sx1; b->sy = sy1; b->sw = sx2 - sx1 + 1; b->sh = sy2 - sy1 + 1;

    /* color write mask (partial-byte masks approximate: >= 0x80 disables the channel) */
    if (clear) {
        k->cmask = ((g->clear_mode & 0x100) ? (VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                                               VK_COLOR_COMPONENT_B_BIT) : 0)
                 | ((g->clear_mode & 0x200) ? VK_COLOR_COMPONENT_A_BIT : 0);
    } else {
        uint32_t mr = g->mask_rgb & 0xFF, mg = (g->mask_rgb >> 8) & 0xFF, mb = (g->mask_rgb >> 16) & 0xFF;
        uint32_t ma = (uint32_t)g->mask_alpha & 0xFF;
        k->cmask = (mr >= 0x80 ? 0 : VK_COLOR_COMPONENT_R_BIT) | (mg >= 0x80 ? 0 : VK_COLOR_COMPONENT_G_BIT)
                 | (mb >= 0x80 ? 0 : VK_COLOR_COMPONENT_B_BIT) | (ma >= 0x80 ? 0 : VK_COLOR_COMPONENT_A_BIT);
    }

    /* blending */
    b->bconst[3] = 1.0f;
    if (!clear && g->blend_enable) {
        uint32_t eq = (g->blend_mode >> 8) & 7;
        int nc_a = 0, nc_b = 0;
        int sf = map_factor(g->blend_mode & 0xF, 1, g->blend_fixa, &nc_a, &premul);
        int df = map_factor((g->blend_mode >> 4) & 0xF, 0, g->blend_fixb, &nc_b, &premul);
        if (nc_a && nc_b && (g->blend_fixa & 0xFFFFFF) != (g->blend_fixb & 0xFFFFFF)) {
            /* one constant register in VK: keep src exact, round dst to ZERO/ONE */
            uint32_t fb_ = g->blend_fixb;
            uint32_t lum = (fb_ & 0xFF) + ((fb_ >> 8) & 0xFF) + ((fb_ >> 16) & 0xFF);
            df = lum >= 384 ? VK_BLEND_FACTOR_ONE : VK_BLEND_FACTOR_ZERO;
            nc_b = 0;
        }
        uint32_t fixed = nc_a ? g->blend_fixa : g->blend_fixb;
        b->bconst[0] = (float)(fixed & 0xFF) / 255.0f;
        b->bconst[1] = (float)((fixed >> 8) & 0xFF) / 255.0f;
        b->bconst[2] = (float)((fixed >> 16) & 0xFF) / 255.0f;
        k->blend_on = 1;
        k->srcf = (uint8_t)sf; k->dstf = (uint8_t)df;
        switch (eq) {
            case 1:  k->eq = VK_BLEND_OP_SUBTRACT; break;
            case 2:  k->eq = VK_BLEND_OP_REVERSE_SUBTRACT; break;
            case 3:  k->eq = VK_BLEND_OP_MIN; break;          /* factors ignored: approx */
            case 4:  k->eq = VK_BLEND_OP_MAX; break;
            case 5:  k->eq = VK_BLEND_OP_SUBTRACT; break;     /* absdiff: approx */
            default: k->eq = VK_BLEND_OP_ADD; break;
        }
    }

    /* depth */
    static const uint8_t zmap[8] = {
        VK_COMPARE_OP_NEVER, VK_COMPARE_OP_ALWAYS, VK_COMPARE_OP_EQUAL, VK_COMPARE_OP_NOT_EQUAL,
        VK_COMPARE_OP_LESS, VK_COMPARE_OP_LESS_OR_EQUAL, VK_COMPARE_OP_GREATER, VK_COMPARE_OP_GREATER_OR_EQUAL,
    };
    if (clear) {
        /* clear mode (sprites AND triangles): bit 10 = unconditional depth fill, no test */
        k->ztest = k->zwrite = (g->clear_mode & 0x400) ? 1 : 0;
        k->zfunc = VK_COMPARE_OP_ALWAYS;
    } else {
        k->ztest = g->ztest_enable ? 1 : 0;
        k->zwrite = (k->ztest && !g->zwrite_disable) ? 1 : 0;
        k->zfunc = k->ztest ? zmap[g->ztest & 7] : VK_COMPARE_OP_ALWAYS;
    }

    /* culling: draw_prim already reordered vertices; rasterizer keeps positive winding */
    k->cull = (!sprite && g->cull_enable && !clear) ? VK_CULL_MODE_BACK_BIT : VK_CULL_MODE_NONE;

    /* fragment config */
    int textured = g->tex_enable && !clear && g->tex_addr;
    int flags = premul;
    if (clear) flags |= F_CLEAR;
    if (persp && !(clear && sprite)) flags |= F_PERSP;   /* minz/maxz discard */
    if (persp && g->fog_enable && !clear) flags |= F_FOG;
    b->pc.texsize[0] = b->pc.texsize[1] = 1.0f;
    if (textured) {
        flags |= F_TEX;
        if (g->tex_func & 0x100)   flags |= F_RGBA;
        if (g->tex_func & 0x10000) flags |= F_DBL;
        int linear = (g->tex_filter & 1) || ((g->tex_filter >> 8) & 1);
        if (!linear) flags |= F_NEAREST;
        b->pc.texsize[0] = (float)g->tex_w;
        b->pc.texsize[1] = (float)g->tex_h;
    }
    b->pc.cfg[1] = (!clear && g->atest_enable) ? (int32_t)g->atest : 1 /* func ALWAYS */;
    b->pc.cfg[2] = (int32_t)g->minz;
    b->pc.cfg[3] = (int32_t)g->maxz;
    b->pc.texenv[0] = (float)(g->tex_env & 0xFF) / 255.0f;
    b->pc.texenv[1] = (float)((g->tex_env >> 8) & 0xFF) / 255.0f;
    b->pc.texenv[2] = (float)((g->tex_env >> 16) & 0xFF) / 255.0f;
    b->pc.fogcol[0] = (float)(g->fog_color & 0xFF) / 255.0f;
    b->pc.fogcol[1] = (float)((g->fog_color >> 8) & 0xFF) / 255.0f;
    b->pc.fogcol[2] = (float)((g->fog_color >> 16) & 0xFF) / 255.0f;


    /* texture binding: a render target sampled directly (render-to-texture), or the
     * RAM-texture cache, or white for untextured */
    b->dset = s_white_set;
    if (textured) {
        Target *src = NULL;
        if ((g->tex_addr & 0x0F000000u) == 0x04000000u) {
            uint32_t ta = g->tex_addr & 0x001FFFFFu;
            for (int i = 0; i < MAX_TGT; i++) {
                Target *ti = &s_tgts[i];
                if (!ti->used || !ti->gpu_valid) continue;
                uint32_t bpp_t = ti->fmt == 3 ? 4 : 2;
                uint32_t flen = ti->stride * FB_H * bpp_t;
                if (ta >= ti->fba && ta < ti->fba + flen) { src = ti; break; }
            }
        }
        if (src) {
            /* The menu's "render to texture" switch, plus the old env knob. */
            static int nortt_env = -1;
            if (nortt_env < 0) { const char *nv = getenv("SR_GPU_NORTT");
                                 nortt_env = (nv && nv[0] && strcmp(nv, "0") != 0) ? 1 : 0; }
            int nortt = nortt_env || !g_gfx.rtt;
            int linear = (g->tex_filter & 1) || ((g->tex_filter >> 8) & 1);
            uint32_t bpp_s = src->fmt == 3 ? 4 : 2;
            uint32_t toff = (g->tex_addr & 0x001FFFFFu) - src->fba;
            s_cnt_rtt++;
            /* GPU-direct: bind the target image, sub-rect via texel offset in
             * texsize.zw. tex_fmt must EQUAL the target's psm: reinterpreting one
             * 16-bit format as another must go through VRAM pack/unpack.
             * SR_GPU_NORTT=1 forces the readback path (debug bisect). */
            if (!nortt && g->tex_fmt == src->fmt && !g->tex_swizzle &&
                (g->tex_bufw == src->stride || g->tex_bufw == 0) && (toff % bpp_s) == 0) {
                uint32_t pix = toff / bpp_s;
                if (src == s_cur) {
                    /* feedback loop: sample a snapshot copy; reuse the previous snapshot
                     * while nothing new has rendered into the target */
                    if (s_nbatch) submit_pending();
                    if (s_snap_src != src || s_snap_srcgen != src->render_gen) {
                        if (cmd_begin()) {
                            to_layout(s_cmd, src->img, VK_IMAGE_ASPECT_COLOR_BIT, &src->layout,
                                      VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
                            to_layout(s_cmd, s_snapimg, VK_IMAGE_ASPECT_COLOR_BIT, &s_snap_layout,
                                      VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
                            /* A blit, not a copy: the snapshot stays native so
                             * the sampler's normalized coords are unchanged,
                             * and a supersampled source resolves into it. */
                            VkImageBlit ib = {0};
                            ib.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                            ib.srcSubresource.layerCount = 1;
                            ib.srcOffsets[1].x = (int32_t)(FB_W * src->scale);
                            ib.srcOffsets[1].y = (int32_t)(FB_H * src->scale);
                            ib.srcOffsets[1].z = 1;
                            ib.dstSubresource = ib.srcSubresource;
                            ib.dstOffsets[1].x = FB_W;
                            ib.dstOffsets[1].y = FB_H;
                            ib.dstOffsets[1].z = 1;
                            vkCmdBlitImage(s_cmd, src->img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                                           s_snapimg, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &ib,
                                           src->scale > 1 ? VK_FILTER_LINEAR : VK_FILTER_NEAREST);
                            to_layout(s_cmd, s_snapimg, VK_IMAGE_ASPECT_COLOR_BIT, &s_snap_layout,
                                      VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
                            to_layout(s_cmd, src->img, VK_IMAGE_ASPECT_COLOR_BIT, &src->layout,
                                      VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
                            cmd_submit();
                        }
                        s_snap_src = src;
                        s_snap_srcgen = src->render_gen;
                        s_cnt_snap++;
                    }
                    b->dset = linear ? s_snap_l : s_snap_n;
                } else {
                    if (s_nbatch && src->layout != VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL)
                        submit_pending();
                    if (src->layout != VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL && cmd_begin()) {
                        to_layout(s_cmd, src->img, VK_IMAGE_ASPECT_COLOR_BIT, &src->layout,
                                  VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
                        cmd_submit();
                    }
                    b->dset = linear ? src->set_l : src->set_n;
                }
                /* texel coords map 1:1 onto the 512x272 image, shifted by the sub-rect */
                b->pc.texsize[0] = (float)FB_W;
                b->pc.texsize[1] = (float)FB_H;
                b->pc.texsize[2] = (float)(pix % src->stride);
                b->pc.texsize[3] = (float)(pix / src->stride);
            } else {
                /* incompatible stride/format reinterpretation: VRAM + decoder (rare) */
                target_readback(src);
                b->dset = tex_get();
            }
        } else {
            b->dset = tex_get();
        }
    }
    b->pc.cfg[0] = (int32_t)((g->tex_func & 7) | ((uint32_t)flags << 8));
}

/* ---- built-state template (state rebuilt per CHANGE, not per primitive) ------------------ */

typedef struct {
    uint32_t clear, clear_mode;
    int blend_enable; uint32_t blend_mode, fixa, fixb;
    uint32_t mask_rgb; int mask_alpha;
    int scis[4];
    int ztest_enable, zwrite_disable; uint32_t ztest, minz, maxz;
    int cull_enable; uint32_t cull;
    int tex_enable; uint32_t tex_addr, tex_bufw, tex_fmt, tex_wrap, tex_func, tex_env, tex_filter;
    int tex_w, tex_h; int tex_swizzle;
    uint32_t clut_fmt, clut_gen;
    int atest_enable; uint32_t atest;
    int fog_enable; uint32_t fog_color;
    int persp, sprite;
    uint32_t flushgen;
} StateSnap;
static StateSnap s_snapst;
static Batch     s_tmpl;
static int       s_tmpl_ok = 0;

static void snap_fill(StateSnap *o, int persp, int sprite) {
    GeState *g = s_ge;
    memset(o, 0, sizeof(*o));
    o->clear = (uint32_t)g->clear; o->clear_mode = g->clear_mode;
    o->blend_enable = g->blend_enable; o->blend_mode = g->blend_mode;
    o->fixa = g->blend_fixa; o->fixb = g->blend_fixb;
    o->mask_rgb = g->mask_rgb; o->mask_alpha = g->mask_alpha;
    o->scis[0] = g->scis_x1; o->scis[1] = g->scis_y1; o->scis[2] = g->scis_x2; o->scis[3] = g->scis_y2;
    o->ztest_enable = g->ztest_enable; o->zwrite_disable = g->zwrite_disable;
    o->ztest = g->ztest; o->minz = g->minz; o->maxz = g->maxz;
    o->cull_enable = g->cull_enable; o->cull = g->cull;
    o->tex_enable = g->tex_enable; o->tex_addr = g->tex_addr; o->tex_bufw = g->tex_bufw;
    o->tex_fmt = g->tex_fmt; o->tex_wrap = g->tex_wrap; o->tex_func = g->tex_func;
    o->tex_env = g->tex_env; o->tex_filter = g->tex_filter;
    o->tex_w = g->tex_w; o->tex_h = g->tex_h; o->tex_swizzle = g->tex_swizzle;
    o->clut_fmt = g->clut_fmt; o->clut_gen = g->clut_gen;
    o->atest_enable = g->atest_enable; o->atest = g->atest;
    o->fog_enable = g->fog_enable; o->fog_color = g->fog_color;
    o->persp = persp; o->sprite = sprite;
    o->flushgen = s_flushgen;
}

/* Bumped by ge_state_command on every GE state write (ge_render.c). */
extern unsigned long g_ge_state_gen;
static unsigned long s_tmpl_gen;
static int s_tmpl_persp = -1, s_tmpl_sprite = -1;
static uint32_t s_tmpl_flushgen;

static void state_get(int persp, int sprite, Batch *out) {
    /* Fast path. snap_fill memsets and refills a ~40-field struct and the
     * compare below walks all of it -- per TRIANGLE, which measured at half of
     * all GE time. No GE command runs while a primitive's triangles are being
     * emitted, so every triangle after the first hits this integer compare
     * instead. The full compare is kept as the second level, so a spuriously
     * bumped generation costs a snapshot, never correctness. */
    if (s_tmpl_ok && s_tmpl_gen == g_ge_state_gen && s_tmpl_persp == persp
        && s_tmpl_sprite == sprite && s_tmpl_flushgen == s_flushgen) {
        *out = s_tmpl;
        return;
    }
    {
        StateSnap sn; snap_fill(&sn, persp, sprite);
        if (s_tmpl_ok && !memcmp(&sn, &s_snapst, sizeof(sn))) {
            s_tmpl_gen = g_ge_state_gen; s_tmpl_persp = persp;
            s_tmpl_sprite = sprite; s_tmpl_flushgen = s_flushgen;
            *out = s_tmpl;
            return;
        }
    }
    begin_target();                       /* build_state may bind sibling targets */
    build_state(persp, sprite, &s_tmpl);
    snap_fill(&s_snapst, persp, sprite);  /* re-fill: build_state may have submitted */
    s_tmpl_ok = 1;
    s_tmpl_gen = g_ge_state_gen; s_tmpl_persp = persp;
    s_tmpl_sprite = sprite; s_tmpl_flushgen = s_flushgen;
    *out = s_tmpl;
}

static void append(Batch *b, uint32_t first, uint32_t count) {
    if (b->sw <= 0 || count == 0) return;
    if (s_nbatch) {
        Batch *last = &s_batch[s_nbatch - 1];
        if (last->first + last->count == first &&
            !memcmp(&last->key, &b->key, sizeof(b->key)) &&
            last->sx == b->sx && last->sy == b->sy && last->sw == b->sw && last->sh == b->sh &&
            !memcmp(last->bconst, b->bconst, sizeof(b->bconst)) &&
            !memcmp(&last->pc, &b->pc, sizeof(b->pc)) && last->dset == b->dset) {
            last->count += count;
            return;
        }
    }
    b->first = first; b->count = count;
    s_batch[s_nbatch++] = *b;
}

static void ensure_room(uint32_t verts) {
    if (s_nverts + verts > MAX_VERTS || s_nbatch >= MAX_BATCH - 1)
        submit_pending();
}

/* ---- primitive hooks ---------------------------------------------------------------------- */

static int hook_tri(const GeVtx *A, const GeVtx *B, const GeVtx *C, int persp) {
    if (!s_ready) return 0;
    static int nocull = -1;
    if (nocull < 0) nocull = getenv("SR_NOCULL") ? 1 : 0;
    Batch b;
    state_get(persp, 0, &b);
    if (nocull) b.key.cull = VK_CULL_MODE_NONE;
    if (!begin_target()) return 1;        /* target alloc failed: drop draw, stay on GPU */
    ensure_room(3);
    uint32_t first = s_nverts;
    /* flat shading: provoking vertex is the LAST one on the PSP; clear triangles always
     * use C's color (raster_tri clear branch) */
    int flat = !s_ge->shade_gouraud || s_ge->clear;
    const GeVtx *ca = flat ? C : A;
    const GeVtx *cb = flat ? C : B;
    put_vert(A->x, A->y, A->z, A->rw, A->u, A->v, A->fog, ca->r, ca->g, ca->b, ca->a);
    put_vert(B->x, B->y, B->z, B->rw, B->u, B->v, B->fog, cb->r, cb->g, cb->b, cb->a);
    put_vert(C->x, C->y, C->z, C->rw, C->u, C->v, C->fog, C->r, C->g, C->b, C->a);
    append(&b, first, 3);
    s_cnt_tri++;
    return 1;
}

static int hook_sprite(const GeVtx *p0, const GeVtx *p1, int persp) {
    if (!s_ready) return 0;
    Batch b;
    state_get(persp, 1, &b);
    if (!begin_target()) return 1;

    float xa = floorf(fminf(p0->x, p1->x)), xb = floorf(fmaxf(p0->x, p1->x));
    float ya = floorf(fminf(p0->y, p1->y)), yb = floorf(fmaxf(p0->y, p1->y));
    if (xb <= xa || yb <= ya) return 1;

    float u0 = p0->u, v0 = p0->v, u1 = p1->u, v1 = p1->v;
    if (persp) {
        u0 = p0->u / (p0->rw != 0.0f ? p0->rw : 1.0f);
        v0 = p0->v / (p0->rw != 0.0f ? p0->rw : 1.0f);
        u1 = p1->u / (p1->rw != 0.0f ? p1->rw : 1.0f);
        v1 = p1->v / (p1->rw != 0.0f ? p1->rw : 1.0f);
    }
    /* Same corner rule as fill_sprite(): u0/v0 belong to p0's corner, not to
     * the top-left one. xa/xb/ya/yb sorted the rect, so sort the texel coords
     * with them -- otherwise a reverse-order sprite (the GE's way of flipping
     * one) draws unflipped. A mirrored run is anchored at the far edge, hence
     * the extra step; see fill_sprite(). */
    int flipx = p0->x > p1->x, flipy = p0->y > p1->y;
    if (flipx) { float t = u0; u0 = u1; u1 = t; }
    if (flipy) { float t = v0; v0 = v1; v1 = t; }
    float uw = (u1 - u0) / (xb - xa), vw = (v1 - v0) / (yb - ya);
    if (flipx) { u0 += uw; u1 += uw; }
    if (flipy) { v0 += vw; v1 += vw; }
    float ua = u0 - 0.5f * uw, ub = u1 - 0.5f * uw;
    float va = v0 - 0.5f * vw, vb = v1 - 0.5f * vw;

    float z = p1->z, fog = p1->fog;
    int r = p1->r, g = p1->g, bb_ = p1->b, a = p1->a;

    /* A 2D sprite may sample only its own texel rect; see GpuVert. Bound to the
     * declared UV span, which is where the first and last pixel centres sit. */
    uv_bound_set(u0, u1, v0, v1);
    ensure_room(6);
    uint32_t first = s_nverts;
    put_vert(xa, ya, z, 1.0f, ua, va, fog, r, g, bb_, a);
    put_vert(xb, ya, z, 1.0f, ub, va, fog, r, g, bb_, a);
    put_vert(xa, yb, z, 1.0f, ua, vb, fog, r, g, bb_, a);
    put_vert(xb, ya, z, 1.0f, ub, va, fog, r, g, bb_, a);
    put_vert(xb, yb, z, 1.0f, ub, vb, fog, r, g, bb_, a);
    put_vert(xa, yb, z, 1.0f, ua, vb, fog, r, g, bb_, a);
    uv_bound_clear();
    append(&b, first, 6);
    s_cnt_spr++;
    return 1;
}

/* Lines as 1-pixel-wide quads (the software DDA's pixel set, approximately). */
static int hook_line(const GeVtx *A, const GeVtx *B, int persp) {
    if (!s_ready) return 0;
    Batch b;
    state_get(persp, 1, &b);              /* sprite semantics: no culling */
    if (!begin_target()) return 1;

    float dx = B->x - A->x, dy = B->y - A->y;
    float len = sqrtf(dx * dx + dy * dy);
    if (len < 1e-6f) { dx = 1.0f; dy = 0.0f; len = 1.0f; }
    float nx = -dy / len * 0.5f, ny = dx / len * 0.5f;   /* half-width perpendicular */
    float ex = dx / len * 0.5f, ey = dy / len * 0.5f;    /* endpoint extension */
    float ax = A->x + 0.5f, ay = A->y + 0.5f;            /* DDA truncates; sample centers */
    float bx = B->x + 0.5f, by = B->y + 0.5f;

    /* flat shading uses B (the provoking vertex) */
    int flat = !s_ge->shade_gouraud;
    const GeVtx *cA = flat ? B : A;

    ensure_room(6);
    uint32_t first = s_nverts;
    put_vert(ax - ex - nx, ay - ey - ny, A->z, A->rw, A->u, A->v, A->fog, cA->r, cA->g, cA->b, cA->a);
    put_vert(ax - ex + nx, ay - ey + ny, A->z, A->rw, A->u, A->v, A->fog, cA->r, cA->g, cA->b, cA->a);
    put_vert(bx + ex - nx, by + ey - ny, B->z, B->rw, B->u, B->v, B->fog, B->r, B->g, B->b, B->a);
    put_vert(ax - ex + nx, ay - ey + ny, A->z, A->rw, A->u, A->v, A->fog, cA->r, cA->g, cA->b, cA->a);
    put_vert(bx + ex + nx, by + ey + ny, B->z, B->rw, B->u, B->v, B->fog, B->r, B->g, B->b, B->a);
    put_vert(bx + ex - nx, by + ey - ny, B->z, B->rw, B->u, B->v, B->fog, B->r, B->g, B->b, B->a);
    append(&b, first, 6);
    s_cnt_line++;
    return 1;
}

static int hook_point(const GeVtx *A, int persp) {
    if (!s_ready) return 0;
    Batch b;
    state_get(persp, 1, &b);
    if (!begin_target()) return 1;
    float x0 = floorf(A->x), y0 = floorf(A->y);
    ensure_room(6);
    uint32_t first = s_nverts;
    put_vert(x0,        y0,        A->z, A->rw, A->u, A->v, A->fog, A->r, A->g, A->b, A->a);
    put_vert(x0 + 1.0f, y0,        A->z, A->rw, A->u, A->v, A->fog, A->r, A->g, A->b, A->a);
    put_vert(x0,        y0 + 1.0f, A->z, A->rw, A->u, A->v, A->fog, A->r, A->g, A->b, A->a);
    put_vert(x0 + 1.0f, y0,        A->z, A->rw, A->u, A->v, A->fog, A->r, A->g, A->b, A->a);
    put_vert(x0 + 1.0f, y0 + 1.0f, A->z, A->rw, A->u, A->v, A->fog, A->r, A->g, A->b, A->a);
    put_vert(x0,        y0 + 1.0f, A->z, A->rw, A->u, A->v, A->fog, A->r, A->g, A->b, A->a);
    append(&b, first, 6);
    s_cnt_line++;
    return 1;
}

/* ---- CPU writes to VRAM (movie decode, DMA): invalidate overlapping targets --------------- */

static void hook_vram_dirty(uint32_t addr, uint32_t bytes) {
    if (!s_ready) return;
    if ((addr & 0x0F000000u) != 0x04000000u) return;
    uint32_t a0 = addr & 0x001FFFFFu;
    for (int i = 0; i < MAX_TGT; i++) {
        Target *t = &s_tgts[i];
        if (!t->used || !t->gpu_valid) continue;
        uint32_t bpp_t = t->fmt == 3 ? 4 : 2;
        uint32_t flen = t->stride * FB_H * bpp_t;
        if (a0 < t->fba + flen && t->fba < a0 + bytes) {
            if (t == s_cur && s_nbatch) submit_pending();
            t->gpu_valid = 0;             /* next use re-seeds from guest VRAM */
            s_cnt_dirty++;
        }
    }
}

/* ---- GE block transfer: GPU-side image blit ------------------------------------------------ */

/* Find the target whose address range contains VRAM offset `a` (gpu_valid not required). */
static Target *target_containing(uint32_t a) {
    for (int i = 0; i < MAX_TGT; i++) {
        Target *t = &s_tgts[i];
        if (!t->used) continue;
        uint32_t bpp_t = t->fmt == 3 ? 4 : 2;
        if (a >= t->fba && a < t->fba + t->stride * FB_H * bpp_t) return t;
    }
    return NULL;
}

/* Perform the block transfer as a vkCmdCopyImage between two framebuffer targets. Returns 1
 * on success (guest VRAM left stale for the destination, like any rendered-to target); 0
 * falls back to the CPU copy in ge.c (readback + memmove + dirty-invalidate). */
static int hook_xfer(uint32_t startdata) {
    if (!s_ready) return 0;
    uint32_t srcBase = (s_ge->xf_src & 0xFFFFF0u) | ((s_ge->xf_srcw & 0xFF0000u) << 8);
    uint32_t dstBase = (s_ge->xf_dst & 0xFFFFF0u) | ((s_ge->xf_dstw & 0xFF0000u) << 8);
    if ((srcBase & 0x0F000000u) != 0x04000000u || (dstBase & 0x0F000000u) != 0x04000000u)
        return 0;                                       /* RAM endpoint: CPU path */
    uint32_t srcStride = s_ge->xf_srcw & 0x7F8u;
    uint32_t dstStride = s_ge->xf_dstw & 0x7F8u;
    uint32_t bpp = (startdata & 1) ? 4 : 2;
    Target *src = target_containing(srcBase & 0x001FFFFFu);
    Target *dst = target_containing(dstBase & 0x001FFFFFu);
    if (!src || !dst || src == dst || !src->gpu_valid) return 0;
    if (src->scale != dst->scale) return 0;   /* scale changed between them */
    uint32_t bpp_s = src->fmt == 3 ? 4 : 2;
    /* raw-byte copy must match the converted RGBA images texel-for-texel */
    if (src->fmt != dst->fmt || bpp_s != bpp) return 0;
    if (src->stride != srcStride || dst->stride != dstStride) return 0;
    uint32_t soff = ((srcBase & 0x001FFFFFu) - src->fba) / bpp;
    uint32_t doff = ((dstBase & 0x001FFFFFu) - dst->fba) / bpp;
    uint32_t sx = (s_ge->xf_spos & 0x3FFu) + soff % src->stride;
    uint32_t sy = ((s_ge->xf_spos >> 10) & 0x3FFu) + soff / src->stride;
    uint32_t dx = (s_ge->xf_dpos & 0x3FFu) + doff % dst->stride;
    uint32_t dy = ((s_ge->xf_dpos >> 10) & 0x3FFu) + doff / dst->stride;
    uint32_t w = (s_ge->xf_size & 0x3FFu) + 1, h = ((s_ge->xf_size >> 10) & 0x3FFu) + 1;
    if (sx + w > FB_W || dx + w > FB_W || sy + h > FB_H || dy + h > FB_H) return 0;
    if (!dst->gpu_valid && !target_upload(dst)) return 0;   /* seed rows we don't overwrite */
    if (s_nbatch && (s_cur == src || s_cur == dst)) submit_pending();
    if (!cmd_begin()) return 0;
    to_layout(s_cmd, src->img, VK_IMAGE_ASPECT_COLOR_BIT, &src->layout,
              VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    to_layout(s_cmd, dst->img, VK_IMAGE_ASPECT_COLOR_BIT, &dst->layout,
              VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
    /* Rectangles arrive in PSP pixels; both images are scaled by the same
     * factor (target_acquire samples it once), so scaling both sides keeps
     * the copy texel-exact. */
    const uint32_t xs = src->scale;
    VkImageCopy ic = {0};
    ic.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    ic.srcSubresource.layerCount = 1;
    ic.dstSubresource = ic.srcSubresource;
    ic.srcOffset.x = (int32_t)(sx * xs); ic.srcOffset.y = (int32_t)(sy * xs);
    ic.dstOffset.x = (int32_t)(dx * xs); ic.dstOffset.y = (int32_t)(dy * xs);
    ic.extent.width = w * xs; ic.extent.height = h * xs; ic.extent.depth = 1;
    vkCmdCopyImage(s_cmd, src->img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                   dst->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &ic);
    to_layout(s_cmd, dst->img, VK_IMAGE_ASPECT_COLOR_BIT, &dst->layout,
              VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    if (!cmd_submit()) return 0;
    dst->render_gen++;                       /* content changed (snapshot/present tracking) */
    target_drew(dst, dy, dy + h);
    dst->lru = s_lru++;
    s_cnt_xferblit++;
    return 1;
}

/* ---- GE sync points ------------------------------------------------------------------------ */

static void gegpu_flush(const char *reason) {
    if (!s_ready) return;
    if (reason && strcmp(reason, "listend") == 0) { stats_tick(); return; }
    if (reason && strcmp(reason, "xfersrc") == 0) {
        /* GE block transfer is about to READ guest memory: materialize any GPU-resident
         * target overlapping the source rows into guest VRAM (the transfer itself runs on
         * the CPU in ge.c; the destination range is invalidated via vram_dirty after). */
        submit_pending();
        uint32_t srcBase = (s_ge->xf_src & 0xFFFFF0u) | ((s_ge->xf_srcw & 0xFF0000u) << 8);
        if ((srcBase & 0x0F000000u) != 0x04000000u) return;
        uint32_t srcStride = s_ge->xf_srcw & 0x7F8u;
        uint32_t srcY = (s_ge->xf_spos >> 10) & 0x3FFu;
        uint32_t h = ((s_ge->xf_size >> 10) & 0x3FFu) + 1;
        uint32_t a0 = srcBase & 0x001FFFFFu;
        uint32_t bytes = (srcY + h) * (srcStride ? srcStride : 512u) * 4u;  /* conservative */
        for (int i = 0; i < MAX_TGT; i++)
            if (s_tgts[i].used) target_readback_range(&s_tgts[i], a0, bytes);
        return;
    }
    if (reason && strcmp(reason, "loadclut") == 0) {
        /* The CLUT loader is about to READ guest VRAM: materialize what it will
         * see. A LOADCLUT takes at most 63 blocks of 32 bytes, so 2048 bounds
         * it -- two rows of a 512-stride 16-bit target, not 272. This is the
         * path that produced the sun-glare stutter; see target_rows_for_range. */
        uint32_t ca = s_ge->clut_addr & 0x001FFFFFu;
        for (int i = 0; i < MAX_TGT; i++)
            if (s_tgts[i].used) target_readback_range(&s_tgts[i], ca, 2048);
        return;
    }
    submit_pending();
}

/* Present: hand the GPU image straight to the swapchain. Returns 0 if this address is
 * not GPU-resident (CPU-written movie frames, pre-GPU content) — caller uses the
 * guest-VRAM path. */
static int gegpu_present(uint32_t fbaddr, int fmt, uint32_t stride) {
    (void)stride;
    if (!s_ready) return -1;
    uint32_t fba = fbaddr & 0x001FFFFFu;
    Target *t = NULL;
    for (int i = 0; i < MAX_TGT; i++)
        if (s_tgts[i].used && s_tgts[i].fba == fba) { t = &s_tgts[i]; break; }
    if (!t || !t->gpu_valid || (int)t->fmt != (fmt & 3)) { s_cnt_present_cpu++; return -1; }
    if (t == s_cur && s_nbatch) submit_pending();

    static int safe = -1;
    if (safe < 0) { const char *sv = getenv("SR_GPU_SAFE"); safe = (sv && sv[0] && strcmp(sv, "0") != 0) ? 1 : 0; }
    if (safe) target_readback(t);         /* keep guest VRAM current (A/B compare, debug) */

    if (t->layout != VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
        if (!cmd_begin()) return -1;
        to_layout(s_cmd, t->img, VK_IMAGE_ASPECT_COLOR_BIT, &t->layout,
                  VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        if (!cmd_submit()) return -1;
    }
    gpu_sync();                  /* the presenter reads this image immediately */
    s_cnt_present_gpu++;
    stats_tick();
    /* The image is DRAW_W of FB_W wide, times the internal-resolution scale.
     * Handing over the native 480x272 here would show the top-left corner
     * magnified instead of the whole supersampled frame. */
    return present_image((void *)t->img, (int)(DRAW_W * t->scale),
                         (int)(FB_H * t->scale));
}

/* ---- init ----------------------------------------------------------------------------------- */

static const GeGpuHooks k_hooks = {
    hook_tri, hook_sprite, hook_line, hook_point, gegpu_flush, hook_vram_dirty, hook_xfer,
};

int gegpu_init(void) {
    PresentVkInfo vi;
    if (!present_get_vk(&vi)) { fprintf(stderr, "gegpu: presenter has no Vulkan device\n"); return 0; }
    s_pdev  = (VkPhysicalDevice)vi.physical;
    s_dev   = (VkDevice)vi.device;
    s_queue = (VkQueue)vi.queue;
    s_ge    = ge_state_ptr();
    s_zbuf  = ge_zbuf_ptr();
    {
        const char *lg = getenv("SR_GPU_LOG");
        s_log = (lg && lg[0] && strcmp(lg, "0") != 0) ? 1 : 0;
    }

    VkCommandPoolCreateInfo cpi = { VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO };
    cpi.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    cpi.queueFamilyIndex = vi.queue_family;
    VKC(vkCreateCommandPool(s_dev, &cpi, NULL, &s_pool));
    VkCommandBuffer cbs[RING];
    VkCommandBufferAllocateInfo cbi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    cbi.commandPool = s_pool; cbi.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY; cbi.commandBufferCount = RING;
    VKC(vkAllocateCommandBuffers(s_dev, &cbi, cbs));
    VkFenceCreateInfo fci = { VK_STRUCTURE_TYPE_FENCE_CREATE_INFO };
    for (int i = 0; i < RING; i++) {
        s_ring[i].cmd = cbs[i];
        VKC(vkCreateFence(s_dev, &fci, NULL, &s_ring[i].fence));
    }
    s_cmd = s_ring[1 % RING].cmd;      /* cmd_begin picks the real one */

    /* render pass: LOAD/STORE both attachments; color ends SHADER_READ_ONLY so finished
     * targets are always samplable/presentable, depth stays an attachment */
    VkAttachmentDescription at[2] = {0};
    at[0].format = VK_FORMAT_R8G8B8A8_UNORM;
    at[0].samples = VK_SAMPLE_COUNT_1_BIT;
    at[0].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD; at[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    at[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    at[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    at[0].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    at[0].finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    at[1] = at[0];
    at[1].format = VK_FORMAT_D16_UNORM;
    at[1].initialLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    at[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    VkAttachmentReference cref = { 0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL };
    VkAttachmentReference zref = { 1, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL };
    VkSubpassDescription sub = {0};
    sub.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    sub.colorAttachmentCount = 1; sub.pColorAttachments = &cref;
    sub.pDepthStencilAttachment = &zref;
    /* Without this the LOAD_OP_LOAD races the render pass's own initial layout
     * transition -- both are "the same command", and nothing orders them
     * against work already submitted. It was reported by synchronization
     * validation all along and was harmless only because every submit drained
     * before the next was recorded. With the ring, submits overlap. */
    VkSubpassDependency dep[2] = {0};
    dep[0].srcSubpass = VK_SUBPASS_EXTERNAL; dep[0].dstSubpass = 0;
    dep[0].srcStageMask = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
    dep[0].dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
                        | VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT
                        | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
    dep[0].srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT;
    dep[0].dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT
                         | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT
                         | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT
                         | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
    dep[1].srcSubpass = 0; dep[1].dstSubpass = VK_SUBPASS_EXTERNAL;
    dep[1].srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
                        | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
    dep[1].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT
                         | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
    dep[1].dstStageMask = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
    dep[1].dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;

    VkRenderPassCreateInfo rpc = { VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO };
    rpc.attachmentCount = 2; rpc.pAttachments = at;
    rpc.subpassCount = 1; rpc.pSubpasses = &sub;
    rpc.dependencyCount = 2; rpc.pDependencies = dep;
    VKC(vkCreateRenderPass(s_dev, &rpc, NULL, &s_rp));

    /* RING regions of MAX_VERTS: one per in-flight submit (see s_voff). */
    if (!make_buffer((VkDeviceSize)RING * MAX_VERTS * sizeof(GpuVert),
                     VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                     &s_vbuf, &s_vbuf_m, (void **)&s_vmap)) return 0;
    s_vstage = (GpuVert *)malloc(MAX_VERTS * sizeof(GpuVert));
    if (!s_vstage) return 0;
    for (int i = 0; i < XFER_RING; i++)
        if (!make_buffer(XFER_SIZE,
                         VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT,
                         &s_xfer[i].buf, &s_xfer[i].mem, &s_xfer[i].map)) return 0;

    VkDescriptorSetLayoutBinding db = {0};
    db.binding = 0; db.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    db.descriptorCount = 1; db.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo dlc = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
    dlc.bindingCount = 1; dlc.pBindings = &db;
    VKC(vkCreateDescriptorSetLayout(s_dev, &dlc, NULL, &s_dlayout));

    VkDescriptorPoolSize dps = { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, MAX_TEX };
    VkDescriptorPoolCreateInfo dpc = { VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO };
    dpc.maxSets = MAX_TEX; dpc.poolSizeCount = 1; dpc.pPoolSizes = &dps;
    dpc.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;   /* LRU eviction */
    VKC(vkCreateDescriptorPool(s_dev, &dpc, NULL, &s_dpool_tex));
    VkDescriptorPoolSize dpsf = { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 2 * MAX_TGT + 3 };
    dpc.maxSets = 2 * MAX_TGT + 3; dpc.pPoolSizes = &dpsf;
    dpc.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    VKC(vkCreateDescriptorPool(s_dev, &dpc, NULL, &s_dpool_fix));

    VkPushConstantRange pcr = { VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(PushPC) };
    VkPipelineLayoutCreateInfo plc = { VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
    plc.setLayoutCount = 1; plc.pSetLayouts = &s_dlayout;
    plc.pushConstantRangeCount = 1; plc.pPushConstantRanges = &pcr;
    VKC(vkCreatePipelineLayout(s_dev, &plc, NULL, &s_playout));

    VkShaderModuleCreateInfo smc = { VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
    smc.codeSize = sizeof(k_vert_spv); smc.pCode = k_vert_spv;
    VKC(vkCreateShaderModule(s_dev, &smc, NULL, &s_vs));
    smc.codeSize = sizeof(k_frag_spv); smc.pCode = k_frag_spv;
    VKC(vkCreateShaderModule(s_dev, &smc, NULL, &s_fs));

    /* shared clamp samplers (render-target sampling + snapshot) */
    {
        VkSamplerCreateInfo sci = { VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO };
        sci.magFilter = VK_FILTER_NEAREST; sci.minFilter = VK_FILTER_NEAREST;
        sci.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
        sci.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        sci.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        sci.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        VKC(vkCreateSampler(s_dev, &sci, NULL, &s_smp_n));
        sci.magFilter = VK_FILTER_LINEAR; sci.minFilter = VK_FILTER_LINEAR;
        VKC(vkCreateSampler(s_dev, &sci, NULL, &s_smp_l));
    }

    /* 1x1 white texture for untextured draws */
    {
        uint32_t white = 0xFFFFFFFFu;
        if (!tex_make(&white, 1, 1, 0, 1, 1, &s_white, &s_white_mem, &s_white_view, &s_white_smp))
            return 0;
        s_white_set = make_descriptor(s_white_view, s_white_smp, s_dpool_fix);
        if (!s_white_set) return 0;
    }

    /* snapshot image for feedback (self-sampling) draws */
    if (!make_image(FB_W, FB_H, VK_FORMAT_R8G8B8A8_UNORM,
                    VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT,
                    &s_snapimg, &s_snapimg_mem)) return 0;
    if (!make_view(s_snapimg, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_ASPECT_COLOR_BIT, &s_snap_view)) return 0;
    s_snap_layout = VK_IMAGE_LAYOUT_UNDEFINED;
    s_snap_n = make_descriptor(s_snap_view, s_smp_n, s_dpool_fix);
    s_snap_l = make_descriptor(s_snap_view, s_smp_l, s_dpool_fix);
    if (!s_snap_n || !s_snap_l) return 0;

    s_ready = 1;
    ge_set_gpu_hooks(&k_hooks);
    ge_gpu_present_fn = gegpu_present;
    fprintf(stderr, "gegpu: full GPU GE active (persistent targets, no software fallback)\n");
    return 1;
}

void gegpu_shutdown(void) {
    if (!s_ready) return;
    submit_pending();
    ge_set_gpu_hooks(NULL);
    ge_gpu_present_fn = NULL;
    s_ready = 0;
    gpu_sync(); vkDeviceWaitIdle(s_dev);
    /* process exit follows immediately; Vulkan objects die with the device */
}

#else /* !PSPRECO_SDL3: the headless build has no GPU backend */
typedef int pspreco_ge_gpu_vk_has_no_headless_contents;
#endif
