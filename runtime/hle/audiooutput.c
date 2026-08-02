/* sceAudio channel-output HLE, forwarding to the host sink
 * (runtime/host/audio_out.c). The legacy channel API has no prototypes in
 * the 6.6.0 SDK; argument order and channel semantics follow the public
 * homebrew pspsdk headers. */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"
#include "../host/audio_out.h"

/* --- SDK constants ----------------------------------------------------- */
#define SCE_AUDIO_VOLUME_SHIFT      15
#define SCE_AUDIO_VOLUME_0dB        (1 << SCE_AUDIO_VOLUME_SHIFT)

#define SCE_AUDIO_ERROR_OUTPUT_BUSY    0x80260002u
#define SCE_AUDIO_ERROR_INVALID_CH     0x80260003u
#define SCE_AUDIO_ERROR_NOT_FOUND      0x80260005u
#define SCE_AUDIO_ERROR_INVALID_SIZE   0x80260006u
#define SCE_AUDIO_ERROR_INVALID_FORMAT 0x80260007u
#define SCE_AUDIO_ERROR_NOT_RESERVED   0x80260008u
#define SCE_AUDIO_ERROR_INVALID_VOLUME 0x8026000Bu

/* --- channel model ----------------------------------------------------- */
#define AUDIO_CHANNELS       8
#define AUDIO_SAMPLE_GRAIN   64        /* sample counts are multiples of 64 */
#define AUDIO_SAMPLE_MIN     64
#define AUDIO_SAMPLE_MAX     65472
#define AUDIO_FORMAT_STEREO  0x00
#define AUDIO_FORMAT_MONO    0x10
#define AUDIO_SAMPLE_RATE_HZ 44100u

typedef struct {
    int reserved;
    int samples;
    int format;
    int left_vol, right_vol;
} AudioCh;

static AudioCh g_ch[AUDIO_CHANNELS];
static unsigned long long g_frames_output;

static int valid_format(int f)
{
    return f == AUDIO_FORMAT_STEREO || f == AUDIO_FORMAT_MONO;
}

static int valid_samples(int n)
{
    return n >= AUDIO_SAMPLE_MIN && n <= AUDIO_SAMPLE_MAX
        && (n % AUDIO_SAMPLE_GRAIN) == 0;
}

static int valid_vol(int v)
{
    return v >= 0 && v <= SCE_AUDIO_VOLUME_0dB;
}

/* sceAudioChReserve(channel, samplecount, format): channel -1 auto-picks a
 * free one; returns the channel reserved or a negative error. */
void hle_sceAudioChReserve(CpuCtx *c, u8 *ram)
{
    int ch = (int)HLE_A0;
    int n  = (int)HLE_A1;
    int fmt = (int)HLE_A2;
    int i;
    (void)ram;

    if (!valid_samples(n)) {
        hle_log("[hle] sceAudioChReserve(samples=%d) -> INVALID_SIZE", n);
        HLE_RET(SCE_AUDIO_ERROR_INVALID_SIZE);
        return;
    }
    if (!valid_format(fmt)) {
        hle_log("[hle] sceAudioChReserve(format=%d) -> INVALID_FORMAT", fmt);
        HLE_RET(SCE_AUDIO_ERROR_INVALID_FORMAT);
        return;
    }
    if (ch < 0) {
        ch = -1;
        for (i = 0; i < AUDIO_CHANNELS; i++)
            if (!g_ch[i].reserved) { ch = i; break; }
        if (ch < 0) {
            hle_log("[hle] sceAudioChReserve: all %d channels busy",
                    AUDIO_CHANNELS);
            HLE_RET(SCE_AUDIO_ERROR_NOT_FOUND);
            return;
        }
    } else if (ch >= AUDIO_CHANNELS) {
        HLE_RET(SCE_AUDIO_ERROR_INVALID_CH);
        return;
    } else if (g_ch[ch].reserved) {
        HLE_RET(SCE_AUDIO_ERROR_OUTPUT_BUSY);
        return;
    }

    g_ch[ch].reserved = 1;
    g_ch[ch].samples = n;
    g_ch[ch].format = fmt;
    g_ch[ch].left_vol = g_ch[ch].right_vol = SCE_AUDIO_VOLUME_0dB;
    hle_log("[hle] sceAudioChReserve(auto, %d samples, %s) -> channel %d",
            n, fmt == AUDIO_FORMAT_MONO ? "mono" : "stereo", ch);
    HLE_RET(ch);
}

static AudioCh *channel(int ch)
{
    if (ch < 0 || ch >= AUDIO_CHANNELS) return NULL;
    return g_ch[ch].reserved ? &g_ch[ch] : NULL;
}

void hle_sceAudioChRelease(CpuCtx *c, u8 *ram)
{
    int ch = (int)HLE_A0;
    AudioCh *a = channel(ch);
    (void)ram;
    if (!a) { HLE_RET(SCE_AUDIO_ERROR_NOT_RESERVED); return; }
    a->reserved = 0;
    hle_log("[hle] sceAudioChRelease(%d)", ch);
    HLE_RET(0);
}

/* Push one buffer of `samples` frames to the host sink; blocking variants
 * pace the caller CLOSED-LOOP against the device queue (open-loop sleep
 * drifts and remains only as the no-device fallback). Blocking must
 * genuinely block, not just yield: the high-priority audio thread would
 * otherwise be re-picked at once and starve lower-priority threads. */
static void output_common(CpuCtx *c, u8 *ram, int ch, int lvol, int rvol,
                          u32 buf, int blocking, const char *what)
{
    AudioCh *a = channel(ch);
    u64 usec;

    if (!a) {
        hle_log("[hle] %s(%d): channel not reserved", what, ch);
        HLE_RET(SCE_AUDIO_ERROR_NOT_RESERVED);
        return;
    }
    if (!valid_vol(lvol) || !valid_vol(rvol)) {
        hle_log("[hle] %s(%d, %d, %d) -> INVALID_VOLUME", what, ch,
                lvol, rvol);
        HLE_RET(SCE_AUDIO_ERROR_INVALID_VOLUME);
        return;
    }
    a->left_vol = lvol;
    a->right_vol = rvol;
    if (!buf) {                      /* a null buffer drains the channel */
        HLE_RET(0);
        return;
    }
    g_frames_output += (unsigned long long)a->samples;

    /* Mono expands to stereo. Static scratch is safe: HLE handlers run one
     * at a time on the fiber scheduler. */
    {
        static s16 lr[AUDIO_SAMPLE_MAX * 2];
        int i, n = a->samples;
        if (a->format == AUDIO_FORMAT_STEREO) {
            for (i = 0; i < n; i++) {
                lr[i * 2 + 0] = (s16)mem_r16(ram, buf + (u32)(i * 4));
                lr[i * 2 + 1] = (s16)mem_r16(ram, buf + (u32)(i * 4) + 2);
            }
        } else {
            for (i = 0; i < n; i++) {
                s16 s = (s16)mem_r16(ram, buf + (u32)(i * 2));
                lr[i * 2 + 0] = s;
                lr[i * 2 + 1] = s;
            }
        }
        audio_out_push(ch, lr, n, lvol, rvol);
    }

    /* $v0 is set before blocking in case the fiber never resumes here. */
    HLE_RET(a->samples);
    if (blocking) {
        int q = audio_out_queued(ch);
        if (q < 0) {                 /* no device: open-loop fallback */
            usec = ((u64)a->samples * 1000000u) / AUDIO_SAMPLE_RATE_HZ;
            threadman_block_us(usec);
        } else {
            /* The lead MUST exceed the sink's 1024-frame feeder block, else
             * partially written blocks play as silence (stutter) and the
             * playhead skips past the channel cursor, dropping samples
             * (desync). Two blocks (~46 ms) of cushion. */
            int lead = a->samples * 2;
            if (lead < 2048) lead = 2048;
            while ((q = audio_out_queued(ch)) > lead) {
                usec = ((u64)(q - lead) * 1000000u) / AUDIO_SAMPLE_RATE_HZ;
                if (usec < 1000u) usec = 1000u;
                threadman_block_us(usec);
            }
        }
    }
}

void hle_sceAudioOutputBlocking(CpuCtx *c, u8 *ram)
{
    int vol = (int)HLE_A1;
    output_common(c, ram, (int)HLE_A0, vol, vol, HLE_A2, 1,
                  "sceAudioOutputBlocking");
}

void hle_sceAudioOutputPanned(CpuCtx *c, u8 *ram)
{
    output_common(c, ram, (int)HLE_A0, (int)HLE_A1, (int)HLE_A2, HLE_A3, 0,
                  "sceAudioOutputPanned");
}

void hle_sceAudioOutputPannedBlocking(CpuCtx *c, u8 *ram)
{
    output_common(c, ram, (int)HLE_A0, (int)HLE_A1, (int)HLE_A2, HLE_A3, 1,
                  "sceAudioOutputPannedBlocking");
}

void hle_sceAudioChangeChannelConfig(CpuCtx *c, u8 *ram)
{
    AudioCh *a = channel((int)HLE_A0);
    int fmt = (int)HLE_A1;
    (void)ram;
    if (!a) { HLE_RET(SCE_AUDIO_ERROR_NOT_RESERVED); return; }
    if (!valid_format(fmt)) { HLE_RET(SCE_AUDIO_ERROR_INVALID_FORMAT); return; }
    a->format = fmt;
    HLE_RET(0);
}

void hle_sceAudioChangeChannelVolume(CpuCtx *c, u8 *ram)
{
    AudioCh *a = channel((int)HLE_A0);
    int l = (int)HLE_A1, r = (int)HLE_A2;
    (void)ram;
    if (!a) { HLE_RET(SCE_AUDIO_ERROR_NOT_RESERVED); return; }
    if (!valid_vol(l) || !valid_vol(r)) {
        HLE_RET(SCE_AUDIO_ERROR_INVALID_VOLUME);
        return;
    }
    a->left_vol = l;
    a->right_vol = r;
    HLE_RET(0);
}

void hle_sceAudioSetChannelDataLen(CpuCtx *c, u8 *ram)
{
    AudioCh *a = channel((int)HLE_A0);
    int n = (int)HLE_A1;
    (void)ram;
    if (!a) { HLE_RET(SCE_AUDIO_ERROR_NOT_RESERVED); return; }
    if (!valid_samples(n)) { HLE_RET(SCE_AUDIO_ERROR_INVALID_SIZE); return; }
    a->samples = n;
    HLE_RET(0);
}

/* Samples still queued on the channel: the host sink's real queue depth,
 * or 0 without a device. */
void hle_sceAudioGetChannelRestLength(CpuCtx *c, u8 *ram)
{
    AudioCh *a = channel((int)HLE_A0);
    int q;
    (void)ram;
    if (!a) { HLE_RET(SCE_AUDIO_ERROR_NOT_RESERVED); return; }
    q = audio_out_queued((int)HLE_A0);
    HLE_RET(q > 0 ? q : 0);
}
