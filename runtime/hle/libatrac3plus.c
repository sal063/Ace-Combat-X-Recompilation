/* sceAtrac HLE: bookkeeping per PPSSPP's sceAtrac.cpp plus real decode.
 * SetDataAndGetID parses the clip's RIFF header and opens an ATRAC3/
 * ATRAC3plus decoder via runtime/host/at3_decode.cpp (vendored ffmpeg
 * decoders); without one the same schedule runs with silent frames. */

#include "hle.h"
#include "../host/at3_decode.h"

#define SCE_ATRAC_ERROR_API_FAIL    0x80630002u
#define SCE_ATRAC_ERROR_NO_ATRACID  0x80630003u
#define SCE_ATRAC_ERROR_BAD_ATRACID 0x80630005u
#define SCE_ATRAC_ALLDATA_IS_ON_MEMORY 0xFFFFFFFFu

#define ATRAC_SAMPLES_PER_FRAME 2048              /* ATRAC3plus */
#define ATRAC_AT3_SAMPLES_PER_FRAME 1024          /* plain ATRAC3 */
#define ATRAC_MAX_IDS 8
#define ATRAC_MAX_BLOCK 8192

typedef struct {
    int used;
    u32 buf, size;
    int end_sample, pos_sample, loop_num;

    /* real decode state */
    At3Handle *dec;          /* NULL = silence path */
    int is_plus;
    int spf;                 /* samples per frame */
    int channels;
    u32 data_off;            /* RIFF 'data' payload offset within buf */
    u32 block_align;
    u32 cursor;              /* byte offset of the next frame in the payload */
} Atrac;

static Atrac g_atrac[ATRAC_MAX_IDS];

static Atrac *atrac_of(u32 id)
{
    return (id < ATRAC_MAX_IDS && g_atrac[id].used) ? &g_atrac[id] : NULL;
}

/* Walk the RIFF. 'fmt ' gives the codec (tag 0x0270 = ATRAC3, 0xFFFE
 * extensible = ATRAC3plus), channels, block align and decoder extradata;
 * 'fact' gives the clip length in samples; 'data' locates the payload. */
typedef struct {
    int ok, is_plus, channels, sample_rate;
    u32 block_align, data_off, data_size;
    int fact_samples;
    unsigned char extradata[64];
    int extradata_size;
} AtracRiff;

static void atrac_parse_riff(u8 *ram, u32 buf, u32 size, AtracRiff *r)
{
    u32 p, end;
    memset(r, 0, sizeof *r);
    if (size < 44 || mem_r32(ram, buf) != 0x46464952u /* 'RIFF' */) return;
    p = buf + 12;
    end = buf + (size < 0x1000000u ? size : 0x1000000u);
    while (p + 8 <= end) {
        u32 id = mem_r32(ram, p), sz = mem_r32(ram, p + 4);
        if (id == 0x20746D66u /* 'fmt ' */ && sz >= 16) {
            u32 tag = mem_r16(ram, p + 8);
            r->channels = (int)mem_r16(ram, p + 10);
            r->sample_rate = (int)mem_r32(ram, p + 12);
            r->block_align = mem_r16(ram, p + 20);
            r->is_plus = (tag == 0xFFFEu);
            r->ok = (tag == 0x0270u || tag == 0xFFFEu);
            if (sz > 18) {
                u32 cb = mem_r16(ram, p + 24);
                u32 i, n = cb;
                if (n > sizeof r->extradata) n = sizeof r->extradata;
                if (26 + n <= 8 + sz)
                    for (i = 0; i < n; i++)
                        r->extradata[i] = (unsigned char)mem_r8(ram, p + 26 + i);
                r->extradata_size = (int)n;
            }
        } else if (id == 0x74636166u /* 'fact' */) {
            r->fact_samples = (int)mem_r32(ram, p + 8);
        } else if (id == 0x61746164u /* 'data' */) {
            r->data_off = (p + 8) - buf;
            r->data_size = sz;
            break;
        }
        p += 8 + ((sz + 1u) & ~1u);
    }
}

void hle_sceAtracSetDataAndGetID(CpuCtx *c, u8 *ram)
{
    int id = -1, i;
    Atrac *a;
    AtracRiff r;

    for (i = 0; i < ATRAC_MAX_IDS; i++)
        if (!g_atrac[i].used) { id = i; break; }
    if (id < 0) { HLE_RET(SCE_ATRAC_ERROR_NO_ATRACID); return; }
    a = &g_atrac[id];
    memset(a, 0, sizeof *a);
    a->used = 1;
    a->buf = HLE_A0;
    a->size = HLE_A1;

    atrac_parse_riff(ram, HLE_A0, HLE_A1, &r);
    a->end_sample = r.fact_samples;
    if (a->end_sample <= 0)
        a->end_sample = ATRAC_SAMPLES_PER_FRAME * 1024;
    a->is_plus = r.is_plus;
    a->spf = r.is_plus ? ATRAC_SAMPLES_PER_FRAME : ATRAC_AT3_SAMPLES_PER_FRAME;
    a->channels = r.channels > 0 ? r.channels : 2;
    a->data_off = r.data_off;
    a->block_align = r.block_align;

    if (r.ok && at3_available() && r.block_align > 0
        && r.block_align <= ATRAC_MAX_BLOCK && r.data_off) {
        a->dec = at3_open(r.is_plus, r.extradata, r.extradata_size,
                          a->channels, (int)r.block_align, r.sample_rate);
    }
    hle_log("[hle] sceAtracSetDataAndGetID(buf=%08x, bytes=%u) -> id %d "
            "(%s, %d ch, %d samples, block %u) %s",
            HLE_A0, HLE_A1, id, a->is_plus ? "AT3+" : "AT3", a->channels,
            a->end_sample, a->block_align,
            a->dec ? "decoding" : "SILENCE (no decoder)");
    HLE_RET(id);
}

void hle_sceAtracReleaseAtracID(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    (void)ram;
    if (!a) { HLE_RET(SCE_ATRAC_ERROR_BAD_ATRACID); return; }
    if (a->dec) at3_close(a->dec);
    a->dec = NULL;
    a->used = 0;
    HLE_RET(0);
}

/* One decoded frame (or silence without a decoder), plus the bookkeeping the
 * caller steers by. */
void hle_sceAtracDecodeData(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    u32 out = HLE_A1, dec_addr = HLE_A2, fin_addr = HLE_A3;
    u32 rem_addr = hle_arg(c, ram, 0);      /* arg 5, in $t0 */
    int n, finished = 0, i, wrote = 0;

    if (!a) { HLE_RET(SCE_ATRAC_ERROR_API_FAIL); return; }
    n = a->spf ? a->spf : ATRAC_SAMPLES_PER_FRAME;

    if (a->dec && a->cursor + a->block_align <= a->size - a->data_off) {
        static unsigned char frame[ATRAC_MAX_BLOCK];
        static short pcm[ATRAC_SAMPLES_PER_FRAME * 2];
        u32 src = a->buf + a->data_off + a->cursor;
        int got;
        for (i = 0; i < (int)a->block_align; i++)
            frame[i] = (unsigned char)mem_r8(ram, src + (u32)i);
        got = at3_decode_frame(a->dec, frame, (int)a->block_align, pcm,
                               ATRAC_SAMPLES_PER_FRAME);
        a->cursor += a->block_align;
        if (got > 0 && out) {
            /* Output matches the stream's channel count. */
            if (a->channels >= 2) {
                for (i = 0; i < got * 2; i++)
                    mem_w16(ram, out + (u32)i * 2u, (u16)(s16)pcm[i]);
            } else {
                for (i = 0; i < got; i++)
                    mem_w16(ram, out + (u32)i * 2u, (u16)(s16)pcm[i * 2]);
            }
            n = got;
            wrote = 1;
        }
    }
    if (!wrote && out) {
        int words = n * (a->channels >= 2 ? 2 : 1);
        for (i = 0; i < words; i++)
            mem_w16(ram, out + (u32)i * 2u, 0);
    }

    a->pos_sample += n;
    if (a->pos_sample >= a->end_sample) {
        if (a->loop_num == 0) {
            finished = 1;
        } else {
            a->pos_sample = 0;
            a->cursor = 0;
            if (a->dec) at3_flush(a->dec);
            if (a->loop_num > 0) a->loop_num--;
        }
    }
    if (dec_addr) mem_w32(ram, dec_addr, (u32)n);
    if (fin_addr) mem_w32(ram, fin_addr, (u32)finished);
    if (rem_addr) mem_w32(ram, rem_addr, SCE_ATRAC_ALLDATA_IS_ON_MEMORY);
    HLE_RET(0);
}

void hle_sceAtracGetRemainFrame(CpuCtx *c, u8 *ram)
{
    if (HLE_A1) mem_w32(ram, HLE_A1, SCE_ATRAC_ALLDATA_IS_ON_MEMORY);
    HLE_RET(0);
}

void hle_sceAtracGetStreamDataInfo(CpuCtx *c, u8 *ram)
{
    /* Whole clip in memory: nothing writable, read position at start. */
    Atrac *a = atrac_of(HLE_A0);
    if (HLE_A1) mem_w32(ram, HLE_A1, a ? a->buf : 0);
    if (HLE_A2) mem_w32(ram, HLE_A2, 0);
    if (HLE_A3) mem_w32(ram, HLE_A3, 0);
    HLE_RET(0);
}

void hle_sceAtracAddStreamData(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(0);
}

void hle_sceAtracGetNextDecodePosition(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    if (!a) { HLE_RET(SCE_ATRAC_ERROR_API_FAIL); return; }
    if (HLE_A1) mem_w32(ram, HLE_A1, (u32)a->pos_sample);
    HLE_RET(0);
}

void hle_sceAtracGetSoundSample(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    if (!a) { HLE_RET(SCE_ATRAC_ERROR_API_FAIL); return; }
    if (HLE_A1) mem_w32(ram, HLE_A1, (u32)a->end_sample);
    if (HLE_A2) mem_w32(ram, HLE_A2, 0xFFFFFFFFu);   /* no loop start */
    if (HLE_A3) mem_w32(ram, HLE_A3, 0xFFFFFFFFu);   /* no loop end   */
    HLE_RET(0);
}

void hle_sceAtracGetLoopStatus(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    if (HLE_A1) mem_w32(ram, HLE_A1, a ? (u32)a->loop_num : 0);
    if (HLE_A2) mem_w32(ram, HLE_A2, 0);
    HLE_RET(0);
}

void hle_sceAtracSetLoopNum(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    (void)ram;
    if (!a) { HLE_RET(SCE_ATRAC_ERROR_BAD_ATRACID); return; }
    a->loop_num = (int)HLE_A1;
    HLE_RET(0);
}

void hle_sceAtracResetPlayPosition(CpuCtx *c, u8 *ram)
{
    Atrac *a = atrac_of(HLE_A0);
    (void)ram;
    if (!a) { HLE_RET(SCE_ATRAC_ERROR_BAD_ATRACID); return; }
    a->pos_sample = (int)HLE_A1;
    /* Re-aim the frame cursor at the nearest preceding frame boundary and
     * reset the decoder (frames are self-contained). */
    if (a->spf > 0 && a->block_align)
        a->cursor = (u32)(a->pos_sample / a->spf) * a->block_align;
    else
        a->cursor = 0;
    if (a->dec) at3_flush(a->dec);
    HLE_RET(0);
}
