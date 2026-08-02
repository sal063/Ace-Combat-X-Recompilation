/* runtime/hle/libmpeg.c  <-  include/libmpeg.h
 *
 * sceMpeg with real playback. PSMF analysis, ring accounting and AU pacing
 * follow the previous project's port of PPSSPP's sceMpeg (GPLv2+), which ran
 * this title's movie loop to completion. On top of that model, the MPEG
 * program stream is demuxed as the ring fills: video PES (0xE0..0xEF) feed
 * the host H.264 decoder (runtime/host/h264_dec.c, Media Foundation);
 * private-stream-1 PES feed an ATRAC3plus frame queue decoded by
 * runtime/host/at3_decode.cpp. AvcDecode writes real frames, AtracDecode
 * real audio.
 *
 * PSMF audio framing (measured from this title's movies): each private-
 * stream-1 PES payload starts with a 4-byte substream prefix; frames are
 * "0F D0" synced, frameSize = ((hdr[2]&3)<<8 | hdr[3]) * 8 + 8, and the
 * decoder takes the frame with its 8-byte header stripped.
 */

#include "hle.h"
#include "threadman.h"
#include "../host/h264_dec.h"
#include "../host/at3_decode.h"
#include "../gpu/ge.h"

#include <stdlib.h>
#include <string.h>

#define PSMF_MAGIC 0x464D5350u

#define MPEG_AVC_ES_SIZE   2048
#define MPEG_ATRAC_ES_SIZE 2112
#define MPEG_MEMSIZE_0105 0x10000u

#define SCE_MPEG_ERROR_INVALID_VALUE 0x806100FEu
#define SCE_MPEG_ERROR_BAD_VERSION   0x806100A0u
#define SCE_MPEG_ERROR_NO_DATA       0x80618001u
#define SCE_MPEG_ERROR_NO_MEMORY     0x80610022u

static const int videoTimestampStep = 3003;   /* 90000 / 29.97 */
static const int audioTimestampStep = 4180;   /* 2048 samples @ 44100 */

/* SceMpegRingbuffer fields (all 32-bit). */
enum {
    RB_packets = 0, RB_packetsRead = 4, RB_packetsWritePos = 8,
    RB_packetsAvail = 12, RB_packetSize = 16, RB_data = 20,
    RB_callback_addr = 24, RB_callback_args = 28, RB_dataUpperBound = 32,
    RB_semaID = 36, RB_mpeg = 40,
};

#define AUDIO_FIFO_CAP (1u << 20)

typedef struct {
    int used;
    u32 handle;
    u32 ringAddr;
    u32 magic, rawVersion; int version;
    u32 offset, streamSize;
    s64 firstTimestamp, lastTimestamp;
    int isAnalyzed;
    s64 videoPts, audioPts;
    int videoEnd;
    u32 totalPackets, fedPackets;
    u32 vrate_q16;     /* ring packets one video AU frees, Q16 */
    u32 vdrain_q16;    /* fractional carry for the above */
    int defaultFrameWidth, pixelMode;
    int esBuffers[2];
    struct { int used, type, num, needsReset; u32 sid; } streams[8];

    H264Dec *h264;
    int h264_tried, h264_frames;
    At3Handle *at3;
    /* demuxed ATRAC frame bytes (0F D0 framing, sync-scanned at decode) */
    u8 *afifo;
    u32 alen, apos;
} Mpeg;

static Mpeg g_mpeg[8];
static int g_mpeg_init;
static u32 g_sid_gen = 1;
static int g_log = -1;

static int mlog(void)
{
    if (g_log < 0) g_log = getenv("PSPRECO_MPEGLOG") ? 1 : 0;
    return g_log;
}

static u32 rb_get(u8 *ram, u32 ring, int f) { return mem_r32(ram, ring + (u32)f); }
static void rb_set(u8 *ram, u32 ring, int f, u32 v) { mem_w32(ram, ring + (u32)f, v); }

static Mpeg *mpeg_find(u8 *ram, u32 mpegAddr)
{
    u32 h;
    int i;
    if (!mpegAddr) return NULL;
    h = mem_r32(ram, mpegAddr);
    for (i = 0; i < 8; i++)
        if (g_mpeg[i].used && g_mpeg[i].handle == h) return &g_mpeg[i];
    return NULL;
}

static void mpeg_free_ctx(Mpeg *m)
{
    if (m->h264) h264_destroy(m->h264);
    if (m->at3) at3_close(m->at3);
    free(m->afifo);
    memset(m, 0, sizeof *m);
}

/* PSMF header is big-endian. */
static u32 be32(u8 *ram, u32 a)
{
    return (mem_r8(ram, a) << 24) | (mem_r8(ram, a + 1) << 16)
         | (mem_r8(ram, a + 2) << 8) | mem_r8(ram, a + 3);
}

static s64 mpeg_ts(u8 *ram, u32 a)
{
    return ((s64)mem_r8(ram, a) << 32) | ((s64)mem_r8(ram, a + 1) << 24)
         | ((s64)mem_r8(ram, a + 2) << 16) | ((s64)mem_r8(ram, a + 3) << 8)
         | (s64)mem_r8(ram, a + 4);
}

static int mpeg_version(u32 raw)
{
    switch (raw) {
    case 0x32313030: return 0;
    case 0x33313030: return 1;
    case 0x34313030: return 2;
    case 0x35313030: return 3;
    default: return -1;
    }
}

static void analyze(u8 *ram, u32 buffer, Mpeg *m)
{
    m->magic = mem_r32(ram, buffer);
    m->rawVersion = mem_r32(ram, buffer + 4);
    m->version = mpeg_version(m->rawVersion);
    m->offset = be32(ram, buffer + 8);
    m->streamSize = be32(ram, buffer + 12);
    /* The two presentation timestamps are 6-byte fields at 0x54 and 0x5A
     * whose value is the low 5 bytes -- reading from the field start yields
     * the right value divided by 256. Checked against every PSMF in the ACX
     * image: the first timestamp is 90000 in all of them and the durations
     * come out as whole 29.97 Hz frame counts. */
    m->firstTimestamp = mpeg_ts(ram, buffer + 0x55);
    m->lastTimestamp = mpeg_ts(ram, buffer + 0x5B);
    m->videoPts = m->audioPts = 0;
    m->videoEnd = 0;
    m->fedPackets = 0;
    m->totalPackets = m->streamSize / 2048u;
    /* Ring drain pacing: the demux consumes packet data eagerly at Put time
     * (into host fifos), so packetsAvail is only a pacing counter for the
     * game's feeder loop -- but it decides how fast the game reads the file,
     * so it has to match the stream's real rate or the movie runs out of
     * data early. One video AU is one displayed frame, so the rate is
     * totalPackets / videoAuCount, kept in Q16 and accumulated (it is ~2.3
     * packets per frame, and truncating to 2 or rounding to 3 drifts the
     * whole movie). */
    {
        s64 dur = m->lastTimestamp - m->firstTimestamp;
        u32 vaus = (dur > 0) ? (u32)(dur / videoTimestampStep) : 0;
        m->vrate_q16 = vaus ? (u32)(((u64)m->totalPackets << 16) / vaus)
                            : (2u << 16);
        m->vdrain_q16 = 0;
    }
    if (mlog())
        hle_log("[hle] mpeg analyze: streamSize=%u (%u packets) ts=%lld..%lld "
                "(%u frames) drain=%u.%03u packets/frame", m->streamSize,
                m->totalPackets, (long long)m->firstTimestamp,
                (long long)m->lastTimestamp,
                (unsigned)((m->lastTimestamp - m->firstTimestamp)
                           / videoTimestampStep),
                m->vrate_q16 >> 16, ((m->vrate_q16 & 0xFFFFu) * 1000u) >> 16);
}

/* SceMpegAu pts/dts: {MSB, LSB} word pairs (SceMpegTimeStamp). */
static void au_write_pts(u8 *ram, u32 au, int off, s64 v)
{
    mem_w32(ram, au + (u32)off, (u32)((u64)v >> 32));
    mem_w32(ram, au + (u32)off + 4, (u32)v);
}

/* ---- program-stream demux (as ring packets arrive) --------------------- */

static void afifo_append(Mpeg *m, u8 *ram, u32 src, u32 n)
{
    u32 i;
    if (!n || m->alen + n > AUDIO_FIFO_CAP) return;
    if (!m->afifo) {
        m->afifo = (u8 *)malloc(AUDIO_FIFO_CAP);
        if (!m->afifo) return;
    }
    for (i = 0; i < n; i++)
        m->afifo[m->alen + i] = (u8)mem_r8(ram, src + i);
    m->alen += n;
}

static void afifo_compact(Mpeg *m)
{
    if (m->apos < (1u << 16)) return;
    memmove(m->afifo, m->afifo + m->apos, m->alen - m->apos);
    m->alen -= m->apos;
    m->apos = 0;
}

static void demux_run(Mpeg *m, u8 *ram, u32 src, u32 bytes)
{
    u32 p = src, end = src + bytes;
    static u8 chunk[2048];
    static int nodemux = -1;

    /* Crash-bisect knob: ring accounting still runs, but no PES parsing and
     * nothing is fed to the video/audio decoders (movie blank/silent). */
    if (nodemux < 0) nodemux = getenv("PSPRECO_NODEMUX") ? 1 : 0;
    if (nodemux) return;

    if (!m->h264_tried) {
        m->h264_tried = 1;
        m->h264 = h264_create();
        if (!m->h264)
            hle_log("[hle] sceMpeg: no H.264 decoder; movie video blank");
    }

    while (p + 6 <= end) {
        u32 code, len, tot;
        if (!(mem_r8(ram, p) == 0 && mem_r8(ram, p + 1) == 0
              && mem_r8(ram, p + 2) == 1)) {
            p++;
            continue;
        }
        code = mem_r8(ram, p + 3);
        if (code == 0xBA) {                     /* pack header */
            if (p + 14 > end) break;
            p += 14u + (mem_r8(ram, p + 13) & 7u);
            continue;
        }
        if (code == 0xB9) break;                /* program end */
        if (code < 0xBB) { p += 4; continue; }
        if (p + 6 > end) break;
        len = (mem_r8(ram, p + 4) << 8) | mem_r8(ram, p + 5);
        tot = 6 + len;
        if (p + tot > end) break;
        if (code >= 0xE0 && code <= 0xEF && len >= 3
            && (mem_r8(ram, p + 6) & 0xC0) == 0x80) {
            u32 hdr = 9u + mem_r8(ram, p + 8);
            if (tot > hdr && m->h264) {
                u32 n = tot - hdr, i, off = hdr;
                while (n) {
                    u32 cl = n > sizeof chunk ? (u32)sizeof chunk : n;
                    for (i = 0; i < cl; i++)
                        chunk[i] = (u8)mem_r8(ram, p + off + i);
                    h264_feed(m->h264, chunk, cl);
                    off += cl;
                    n -= cl;
                }
            }
        } else if (code == 0xBD && len >= 3
                   && (mem_r8(ram, p + 6) & 0xC0) == 0x80) {
            /* private stream 1: PES header + 4-byte substream prefix */
            u32 hdr = 9u + mem_r8(ram, p + 8) + 4u;
            if (tot > hdr)
                afifo_append(m, ram, p + hdr, tot - hdr);
        }
        p += tot;
    }
}

/* ---- guest ring-fill callback ------------------------------------------ */
/* sceMpegRingbufferPut runs the game's fill callback synchronously on the
 * calling thread, on that thread's own stack -- same convention as the GE
 * and subintr callback dispatchers (a nested call, exactly like hardware).
 * An earlier scratch-stack scheme (0x086F0000) put deep callback frames in
 * a region the thread never registered; keep the caller's sp/fp/gp. */

static u32 call_guest3(CpuCtx *c, u8 *ram, u32 fn, u32 a0, u32 a1, u32 a2)
{
    CpuCtx save;
    RecompFn f = recomp_lookup(fn);
    u32 ret;

    if (!f) {
        static int warned;
        if (!warned) {
            warned = 1;
            hle_log("[hle] sceMpegRingbufferPut: fill callback %08x is not "
                    "recompiled code", fn);
        }
        return 0;
    }
    memcpy(&save, c, sizeof save);
    c->r[R_A0] = a0;
    c->r[R_A1] = a1;
    c->r[R_A2] = a2;
    c->r[R_RA] = 0;
    f(c, ram);
    ret = c->r[R_V0];
    memcpy(c, &save, sizeof save);
    return ret;
}

/* ================= handlers ================= */

void hle_sceMpegInit(CpuCtx *c, u8 *ram)
{
    (void)ram;
    g_mpeg_init = 1;
    HLE_RET(0);
}

void hle_sceMpegFinish(CpuCtx *c, u8 *ram)
{
    int i;
    (void)ram;
    for (i = 0; i < 8; i++)
        if (g_mpeg[i].used) mpeg_free_ctx(&g_mpeg[i]);
    g_mpeg_init = 0;
    HLE_RET(0);
}

/* Returns the required context size in $v0 (PPSSPP MpegRequiredMem for lib
 * version >= 0x0105, which this title uses). */
void hle_sceMpegQueryMemSize(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(MPEG_MEMSIZE_0105);
}

void hle_sceMpegRingbufferQueryMemSize(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(HLE_A0 * (104u + 2048u));
}

void hle_sceMpegRingbufferConstruct(CpuCtx *c, u8 *ram)
{
    u32 ring = HLE_A0, numPackets = HLE_A1, data = HLE_A2, size = HLE_A3;
    u32 cbAddr = hle_arg(c, ram, 0), cbArg = hle_arg(c, ram, 1);

    if (!ring) { HLE_RET(0x80020003u); return; }
    if ((s32)size < 0) { HLE_RET(SCE_MPEG_ERROR_NO_MEMORY); return; }
    if (numPackets * (104u + 2048u) > size && numPackets < 0x00100000u) {
        HLE_RET(SCE_MPEG_ERROR_NO_MEMORY);
        return;
    }
    rb_set(ram, ring, RB_packets, numPackets);
    rb_set(ram, ring, RB_packetsRead, 0);
    rb_set(ram, ring, RB_packetsWritePos, 0);
    rb_set(ram, ring, RB_packetsAvail, 0);
    rb_set(ram, ring, RB_packetSize, 2048);
    rb_set(ram, ring, RB_data, data);
    rb_set(ram, ring, RB_callback_addr, cbAddr);
    rb_set(ram, ring, RB_callback_args, cbArg);
    rb_set(ram, ring, RB_dataUpperBound, data + numPackets * 2048u);
    rb_set(ram, ring, RB_mpeg, 0);
    HLE_RET(0);
}

void hle_sceMpegRingbufferDestruct(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(0);
}

void hle_sceMpegCreate(CpuCtx *c, u8 *ram)
{
    u32 mpegAddr = HLE_A0, dataPtr = HLE_A1, size = HLE_A2, ringAddr = HLE_A3;
    u32 frameWidth = hle_arg(c, ram, 0);
    u32 h;
    Mpeg *m = NULL;
    int i;
    static const char lib[8] = "LIBMPEG";
    static const char ver[4] = "001";

    if (!mpegAddr) { HLE_RET((u32)-1); return; }
    if (size < MPEG_MEMSIZE_0105) { HLE_RET(SCE_MPEG_ERROR_NO_MEMORY); return; }

    if (ringAddr) {
        u32 psize = rb_get(ram, ringAddr, RB_packetSize);
        if (psize == 0)
            rb_set(ram, ringAddr, RB_packetsAvail, 0);
        else
            rb_set(ram, ringAddr, RB_packetsAvail,
                   rb_get(ram, ringAddr, RB_packets)
                   - (rb_get(ram, ringAddr, RB_dataUpperBound)
                      - rb_get(ram, ringAddr, RB_data)) / psize);
        rb_set(ram, ringAddr, RB_mpeg, mpegAddr);
    }

    h = dataPtr + 0x30;
    mem_w32(ram, mpegAddr, h);
    for (i = 0; i < 8; i++) mem_w8(ram, h + (u32)i, (u8)lib[i]);
    for (i = 0; i < 4; i++) mem_w8(ram, h + 8 + (u32)i, (u8)ver[i]);
    mem_w32(ram, h + 12, (u32)-1);
    if (ringAddr) {
        mem_w32(ram, h + 16, ringAddr);
        mem_w32(ram, h + 20, rb_get(ram, ringAddr, RB_dataUpperBound));
    }

    for (i = 0; i < 8; i++)
        if (!g_mpeg[i].used) { m = &g_mpeg[i]; break; }
    if (!m) { HLE_RET(SCE_MPEG_ERROR_NO_MEMORY); return; }
    memset(m, 0, sizeof *m);
    m->used = 1;
    m->handle = h;
    m->ringAddr = ringAddr;
    m->defaultFrameWidth = (int)frameWidth;
    m->pixelMode = 3;
    hle_log("[hle] sceMpegCreate(mpeg=%08x, ring=%08x, fw=%u)", mpegAddr,
            ringAddr, frameWidth);
    HLE_RET(0);
}

void hle_sceMpegDelete(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    if (!m) { HLE_RET((u32)-1); return; }
    mpeg_free_ctx(m);
    HLE_RET(0);
}

void hle_sceMpegQueryStreamOffset(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 buffer = HLE_A1, offsetAddr = HLE_A2;

    if (!m || !buffer || !offsetAddr) { HLE_RET((u32)-1); return; }
    analyze(ram, buffer, m);
    m->isAnalyzed = 1;
    if (m->magic != PSMF_MAGIC) {
        mem_w32(ram, offsetAddr, 0);
        HLE_RET(SCE_MPEG_ERROR_INVALID_VALUE);
        return;
    }
    if (m->version < 0) {
        mem_w32(ram, offsetAddr, 0);
        HLE_RET(SCE_MPEG_ERROR_BAD_VERSION);
        return;
    }
    if ((m->offset & 2047u) != 0 || m->offset == 0) {
        mem_w32(ram, offsetAddr, 0);
        HLE_RET(SCE_MPEG_ERROR_INVALID_VALUE);
        return;
    }
    mem_w32(ram, offsetAddr, m->offset);
    HLE_RET(0);
}

void hle_sceMpegQueryStreamSize(CpuCtx *c, u8 *ram)
{
    u32 buffer = HLE_A0, sizeAddr = HLE_A1;
    Mpeg tmp;

    if (!buffer || !sizeAddr) { HLE_RET((u32)-1); return; }
    memset(&tmp, 0, sizeof tmp);
    analyze(ram, buffer, &tmp);
    if (tmp.magic != PSMF_MAGIC || (tmp.offset & 2047u) != 0) {
        mem_w32(ram, sizeAddr, 0);
        HLE_RET(SCE_MPEG_ERROR_INVALID_VALUE);
        return;
    }
    mem_w32(ram, sizeAddr, tmp.streamSize);
    HLE_RET(0);
}

void hle_sceMpegRegistStream(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 streamType = HLE_A1, streamNum = HLE_A2;
    u32 sid;
    int i;

    if (!m) { HLE_RET((u32)-1); return; }
    sid = g_sid_gen++;
    for (i = 0; i < 8; i++)
        if (!m->streams[i].used) {
            m->streams[i].used = 1;
            m->streams[i].type = (int)streamType;
            m->streams[i].num = (int)streamNum;
            m->streams[i].sid = sid;
            m->streams[i].needsReset = 1;
            break;
        }
    HLE_RET(sid);
}

void hle_sceMpegUnRegistStream(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    int i;
    if (m)
        for (i = 0; i < 8; i++)
            if (m->streams[i].used && m->streams[i].sid == HLE_A1)
                m->streams[i].used = 0;
    HLE_RET(0);
}

/* PPSSPP keeps flags rather than allocating; a 1-based nonzero index is the
 * handle the game expects (0 reads as failure and tears the player down). */
void hle_sceMpegMallocAvcEsBuf(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    int i;
    if (!m) { HLE_RET((u32)-1); return; }
    for (i = 0; i < 2; i++)
        if (!m->esBuffers[i]) {
            m->esBuffers[i] = 1;
            HLE_RET((u32)(i + 1));
            return;
        }
    HLE_RET(0);
}

void hle_sceMpegFreeAvcEsBuf(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 esBuf = HLE_A1;
    if (!m) { HLE_RET((u32)-1); return; }
    if (esBuf >= 1 && esBuf <= 2) m->esBuffers[esBuf - 1] = 0;
    HLE_RET(0);
}

void hle_sceMpegQueryAtracEsSize(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    if (!m) { HLE_RET((u32)-1); return; }
    if (HLE_A1) mem_w32(ram, HLE_A1, MPEG_ATRAC_ES_SIZE);
    if (HLE_A2) mem_w32(ram, HLE_A2, 8192);
    HLE_RET(0);
}

void hle_sceMpegInitAu(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 esBuffer = HLE_A1, au = HLE_A2;
    int isAvc;
    if (!m) { HLE_RET((u32)-1); return; }
    isAvc = (esBuffer >= 1 && esBuffer <= 2 && m->esBuffers[esBuffer - 1]);
    au_write_pts(ram, au, 0, 0);
    au_write_pts(ram, au, 8, isAvc ? 0 : -1);
    mem_w32(ram, au + 16, 0);
    mem_w32(ram, au + 20, isAvc ? MPEG_AVC_ES_SIZE : MPEG_ATRAC_ES_SIZE);
    HLE_RET(0);
}

void hle_sceMpegRingbufferAvailableSize(CpuCtx *c, u8 *ram)
{
    u32 ring = HLE_A0;
    if (!ring) { HLE_RET(0); return; }
    HLE_RET(rb_get(ram, ring, RB_packets) - rb_get(ram, ring, RB_packetsAvail));
}

void hle_sceMpegRingbufferPut(CpuCtx *c, u8 *ram)
{
    u32 ring = HLE_A0, numPackets = HLE_A1, available = HLE_A2;
    u32 avail, total, mpegAddr, addWanted, cb, cbArg, packetSize;
    u32 addedTotal = 0, writePos;
    Mpeg *m;

    if (!ring || (s32)numPackets <= 0) { HLE_RET(0); return; }
    avail = rb_get(ram, ring, RB_packetsAvail);
    total = rb_get(ram, ring, RB_packets);
    mpegAddr = rb_get(ram, ring, RB_mpeg);
    m = mpegAddr ? mpeg_find(ram, mpegAddr) : NULL;
    addWanted = numPackets;
    if (addWanted > available) addWanted = available;
    if (avail + addWanted > total) addWanted = total - avail;
    if (addWanted == 0) {
        /* Ring full: the feeder polls Put in a tight loop. Without a block
         * the cooperative scheduler never runs the decode thread (which is
         * what frees ring space) or the display pump -- the window hangs. */
        HLE_RET(0);
        threadman_block_us(3000);
        return;
    }

    cb = rb_get(ram, ring, RB_callback_addr);
    cbArg = rb_get(ram, ring, RB_callback_args);
    packetSize = rb_get(ram, ring, RB_packetSize);
    if (!packetSize) packetSize = 2048;

    writePos = total ? (rb_get(ram, ring, RB_packetsWritePos) % total) : 0;
    while (addedTotal < addWanted) {
        u32 chunk = addWanted - addedTotal, dst, got;
        if (total && chunk > total - writePos) chunk = total - writePos;
        if (chunk == 0) break;

        dst = rb_get(ram, ring, RB_data) + writePos * packetSize;
        got = cb ? call_guest3(c, ram, cb, dst, chunk, cbArg) : chunk;
        if ((s32)got < 0) {
            if (addedTotal == 0) { HLE_RET(got); return; }
            break;
        }
        if (got > chunk) got = chunk;
        if (got == 0) break;

        if (m) demux_run(m, ram, dst, got * packetSize);

        addedTotal += got;
        writePos = total ? (writePos + got) % total : 0;
        if (got < chunk) break;
    }

    if (addedTotal) {
        rb_set(ram, ring, RB_packetsAvail, avail + addedTotal);
        rb_set(ram, ring, RB_packetsRead,
               rb_get(ram, ring, RB_packetsRead) + addedTotal);
        rb_set(ram, ring, RB_packetsWritePos, writePos);
        if (m) m->fedPackets += addedTotal;
    }
    if (mlog())
        hle_log("[hle] MpegRingbufferPut want=%u -> %u avail=%u/%u",
                numPackets, addedTotal, rb_get(ram, ring, RB_packetsAvail),
                total);
    HLE_RET(addedTotal);
}

static void stream_touch(Mpeg *m, u32 sid, int *num)
{
    int i;
    for (i = 0; i < 8; i++)
        if (m->streams[i].used && m->streams[i].sid == sid) {
            if (num) *num = m->streams[i].num;
            m->streams[i].needsReset = 0;
            return;
        }
}

/* The blocking mirrors PPSSPP's hleDelayResult: the playback thread must
 * yield here or it starves the feeder thread. */
void hle_sceMpegGetAvcAu(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 sid = HLE_A1, au = HLE_A2, attrAddr = HLE_A3;
    u32 ring;
    int num = 0;
    s64 pts;

    if (!m || !m->ringAddr) { HLE_RET((u32)-1); return; }
    ring = m->ringAddr;

    if (m->totalPackets && m->fedPackets >= m->totalPackets
        && rb_get(ram, ring, RB_packetsAvail) == 0)
        m->videoEnd = 1;
    if (rb_get(ram, ring, RB_packetsRead) == 0
        || rb_get(ram, ring, RB_packetsAvail) == 0) {
        au_write_pts(ram, au, 0, -1);
        au_write_pts(ram, au, 8, -1);
        HLE_RET(SCE_MPEG_ERROR_NO_DATA);
        threadman_block_us(8000);
        return;
    }
    stream_touch(m, sid, &num);
    pts = m->videoPts + m->firstTimestamp;
    au_write_pts(ram, au, 0, pts);
    au_write_pts(ram, au, 8, pts - videoTimestampStep);
    mem_w32(ram, au + 16, (u32)num);
    {
        u32 avail = rb_get(ram, ring, RB_packetsAvail), take;
        m->vdrain_q16 += m->vrate_q16 ? m->vrate_q16 : (2u << 16);
        take = m->vdrain_q16 >> 16;
        m->vdrain_q16 &= 0xFFFFu;
        if (take > avail) take = avail;
        rb_set(ram, ring, RB_packetsAvail, avail - take);
    }
    if (attrAddr) mem_w32(ram, attrAddr, 1);
    if (m->videoEnd) {
        HLE_RET(SCE_MPEG_ERROR_NO_DATA);
        threadman_block_us(3000);
        return;
    }
    HLE_RET(0);
    threadman_block_us(3000);
}

/* Both AU fetches must report the drained ring, not just the video one: the
 * player's decode step resets its retry count every pass and only ends the
 * movie when audio AND video fail in the same pass (guest func_089dd3f0). An
 * audio fetch that always succeeds keeps the count above zero forever, so the
 * movie loop never exits and the game never returns to the menu. */
void hle_sceMpegGetAtracAu(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 sid = HLE_A1, au = HLE_A2, attrAddr = HLE_A3;
    s64 pts;

    if (!m || !m->ringAddr) { HLE_RET((u32)-1); return; }
    if (rb_get(ram, m->ringAddr, RB_packetsRead) == 0
        || rb_get(ram, m->ringAddr, RB_packetsAvail) == 0) {
        au_write_pts(ram, au, 0, -1);
        au_write_pts(ram, au, 8, -1);
        HLE_RET(SCE_MPEG_ERROR_NO_DATA);
        threadman_block_us(8000);
        return;
    }
    stream_touch(m, sid, NULL);
    pts = m->audioPts + m->firstTimestamp;
    au_write_pts(ram, au, 0, pts);
    au_write_pts(ram, au, 8, pts);
    mem_w32(ram, au + 20, MPEG_ATRAC_ES_SIZE);
    if (attrAddr) mem_w32(ram, attrAddr, 0);
    /* No ring drain here: the video AU is the pacing unit and its rate covers
     * the whole multiplexed stream (see analyze()). Freeing per audio AU too
     * would drain the ring at roughly twice the stream's real rate, and the
     * game would read the file to EOF a third of the way into the movie. */
    HLE_RET(0);
    threadman_block_us(3000);
}

static u32 video_buffer_bytes(u32 frameWidth, int pixelMode)
{
    u32 fw = frameWidth ? frameWidth : 512;
    if (fw > 2048) fw = 512;
    return fw * 272u * (pixelMode == 3 ? 4u : 2u);
}

void hle_sceMpegAvcDecode(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 au = HLE_A1, frameWidth = HLE_A2, bufferAddr = HLE_A3;
    u32 initAddr = hle_arg(c, ram, 0);
    u32 buffer;
    int gotFrame = 0;

    (void)au;
    if (!m) { HLE_RET((u32)-1); return; }
    if (frameWidth == 0 || frameWidth > 2048)
        frameWidth = m->defaultFrameWidth ? (u32)m->defaultFrameWidth : 512u;
    buffer = bufferAddr ? mem_r32(ram, bufferAddr) : 0;

    m->videoPts += videoTimestampStep;
    /* The decode writes through a raw host pointer; the full frame extent
     * must stay inside the guest arena. */
    if (m->h264 && buffer
        && (buffer & PSP_ADDR_MASK) + video_buffer_bytes(frameWidth,
                                                         m->pixelMode)
           <= PSP_RAM_SIZE) {
        int eos = m->totalPackets && m->fedPackets >= m->totalPackets;
        gotFrame = h264_frame(m->h264, eos, ram + (buffer & PSP_ADDR_MASK),
                              (int)frameWidth, m->pixelMode);
        if (gotFrame > 0) m->h264_frames++;
    }
    /* Before the first frame lands, clear instead of leaving stale bytes;
     * after that a miss keeps the previous frame (no black flicker). */
    if (gotFrame <= 0 && !m->h264_frames && buffer) {
        u32 bytes = video_buffer_bytes(frameWidth, m->pixelMode), i;
        for (i = 0; i < bytes; i += 4) mem_w32(ram, buffer + i, 0);
    }
    if (buffer)
        ge_gpu_vram_dirty(buffer, video_buffer_bytes(frameWidth, m->pixelMode));
    if (initAddr) mem_w32(ram, initAddr, 1);
    if (mlog())
        hle_log("[hle] MpegAvcDecode buf=%08x got=%d frames=%d", buffer,
                gotFrame, m->h264_frames);
    HLE_RET(0);
}

void hle_sceMpegAvcDecodeStop(CpuCtx *c, u8 *ram)
{
    u32 statusAddr = HLE_A3;
    if (statusAddr) mem_w32(ram, statusAddr, 0);   /* no frames left */
    HLE_RET(0);
}

void hle_sceMpegAvcDecodeFlush(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(0);
}

void hle_sceMpegFlushAllStream(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    if (m) {
        m->alen = m->apos = 0;
        m->videoEnd = 0;
    }
    HLE_RET(0);
}

/* One ATRAC3plus frame from the demuxed queue into the game's PCM buffer:
 * 2048 stereo s16 samples (8192 bytes), silence when starved. */
void hle_sceMpegAtracDecode(CpuCtx *c, u8 *ram)
{
    Mpeg *m = mpeg_find(ram, HLE_A0);
    u32 au = HLE_A1, buffer = HLE_A2, init = HLE_A3;
    static short pcm[2048 * 2];
    int wrote = 0;

    (void)au; (void)init;
    if (!m) { HLE_RET((u32)-1); return; }
    m->audioPts += audioTimestampStep;

    if (m->afifo) {
        while (m->apos + 8 < m->alen
               && !(m->afifo[m->apos] == 0x0F && m->afifo[m->apos + 1] == 0xD0))
            m->apos++;
        if (m->apos + 8 < m->alen) {
            u32 fs = (((m->afifo[m->apos + 2] & 3u) << 8)
                      | m->afifo[m->apos + 3]) * 8u + 8u;
            if (m->apos + fs <= m->alen) {
                if (!m->at3)
                    m->at3 = at3_open(1, NULL, 0, 2, (int)fs - 8, 44100);
                if (m->at3) {
                    int n = at3_decode_frame(m->at3, m->afifo + m->apos + 8,
                                             (int)fs - 8, pcm, 2048);
                    if (n > 0) {
                        int i;
                        for (i = 0; i < n * 2; i++)
                            mem_w16(ram, buffer + (u32)i * 2u, (u16)(s16)pcm[i]);
                        wrote = n;
                    }
                }
                m->apos += fs;
                afifo_compact(m);
            }
        }
    }
    if (!wrote && buffer) {
        u32 i;
        for (i = 0; i < 8192; i += 4) mem_w32(ram, buffer + i, 0);
    }
    HLE_RET(0);
    threadman_block_us(3000);
}
