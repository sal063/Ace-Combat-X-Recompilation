/* sceSasCore HLE: VAG (SPU-ADPCM) voice mixer with pitch resampling, volumes
 * and loop points, ported from the previous project's implementation.
 * The module exports __sceSasX(core, ...), which is sceSasX(...) with one
 * extra leading argument: the caller's SAS core block address.
 * Simplifications: the ADSR envelope is a gate (KeyOn = full level until
 * stream end or KeyOff), no reverb, no noise generator, nearest-neighbour
 * resampling. __sceSasCore mixes into a guest buffer the game then submits
 * through sceAudioOutput*, which forwards to the host sink. */

#include "hle.h"
#include "sce_errors.h"

/* --- limits ------------------------------------------------------------ */
#define SCE_SAS_VOICE_MAX            32
#define SCE_SAS_GRAIN_SAMPLES       256
#define SCE_SAS_VOLUME_MAX       0x1000
#define SCE_SAS_LOOP_DISABLE          0
#define SCE_SAS_LOOP_ENABLE           1
#define SCE_SAS_PITCH_MIN             1
#define SCE_SAS_PITCH_MAX        0x4000
#define SCE_SAS_NOISE_CLOCK_MAX    0x3f
#define SCE_SAS_ADSR_MODE_DIRECT      5
#define SCE_SAS_OUTPUTMODE_STEREO     0
#define SCE_SAS_OUTPUTMODE_MULTI      1
#define SCE_SAS_FX_TYPE_OFF          (-1)
#define SCE_SAS_FX_TYPE_PIPE          8
#define SCE_SAS_PAUSE_DISABLE         0
#define SCE_SAS_PAUSE_ENABLE          1

/* --- error codes ------------------------------------------------------- */
#define SCE_SAS_ERROR_ADDRESS        0x80420005u
#define SCE_SAS_ERROR_VOICE_INDEX    0x80420010u
#define SCE_SAS_ERROR_NOISE_CLOCK    0x80420011u
#define SCE_SAS_ERROR_PITCH_VAL      0x80420012u
#define SCE_SAS_ERROR_ADSR_MODE      0x80420013u
#define SCE_SAS_ERROR_LOOP_MODE      0x80420015u
#define SCE_SAS_ERROR_VOLUME_VAL     0x80420018u
#define SCE_SAS_ERROR_ADSR_VAL       0x80420019u
#define SCE_SAS_ERROR_FX_TYPE        0x80420020u
#define SCE_SAS_ERROR_FX_VOLUME_VAL  0x80420023u
#define SCE_SAS_ERROR_NOTINIT        0x80420100u
#define SCE_SAS_ERROR_ALRDYINIT      0x80420101u

/* --- state ------------------------------------------------------------- */
typedef struct {
    int in_use;          /* a waveform has been given to this voice */
    int keyed_on;
    int ended;           /* reported through sceSasGetEndFlag */
    int paused;
    int pitch;
    int left, right, wet_left, wet_right;
    int vol_set;         /* SetVolume seen since init (KeyOn default quirk) */

    /* VAG playback state (mixer). */
    u32 vag, vag_size;   /* stream base and byte size in guest RAM */
    u32 pos;             /* byte offset of the next 16-byte block */
    int loop_start;      /* block byte offset to loop to; -1 = none */
    int hist1, hist2;    /* ADPCM filter history */
    s16 buf[28];         /* decoded samples of the current block */
    int bufn, bufi;
    u32 frac;            /* 12-bit fixed-point resample remainder */
} SasVoice;

static struct {
    int initialized;
    u32 core;            /* the guest's SAS core block address */
    u32 grain;
    int max_voices;
    int output_mode;
    int fx_type;
    int fx_dry, fx_wet;
    int fx_vol_l, fx_vol_r;
    SasVoice v[SCE_SAS_VOICE_MAX];
} g_sas;

static int sas_ready(CpuCtx *c)
{
    if (g_sas.initialized) return 1;
    c->r[R_V0] = SCE_SAS_ERROR_NOTINIT;
    c->r[R_V1] = 0u;
    return 0;
}

static SasVoice *voice(CpuCtx *c, int n)
{
    if (n < 0 || n >= g_sas.max_voices) {
        c->r[R_V0] = SCE_SAS_ERROR_VOICE_INDEX;
        c->r[R_V1] = 0u;
        return NULL;
    }
    return &g_sas.v[n];
}

static int volume_ok(int v) { return v >= -SCE_SAS_VOLUME_MAX
                                  && v <= SCE_SAS_VOLUME_MAX; }

void hle_sceSasInit(CpuCtx *c, u8 *ram)
{
    u32 core = HLE_A0;
    u32 grain = HLE_A1;
    int voices = (int)HLE_A2;
    int mode = (int)HLE_A3;
    int i;
    (void)ram;

    if (g_sas.initialized) {
        hle_log("[hle] __sceSasInit: already initialized");
        HLE_RET(SCE_SAS_ERROR_ALRDYINIT);
        return;
    }
    if (!core || (core & 3u)) {
        hle_log("[hle] __sceSasInit(core=%08x) -> ERROR_ADDRESS", core);
        HLE_RET(SCE_SAS_ERROR_ADDRESS);
        return;
    }
    if (voices < 1 || voices > SCE_SAS_VOICE_MAX) {
        HLE_RET(SCE_SAS_ERROR_VOICE_INDEX);
        return;
    }
    if (mode != SCE_SAS_OUTPUTMODE_STEREO && mode != SCE_SAS_OUTPUTMODE_MULTI) {
        HLE_RET(SCE_SAS_ERROR_FX_TYPE);
        return;
    }

    g_sas.initialized = 1;
    g_sas.core = core;
    g_sas.grain = grain ? grain : SCE_SAS_GRAIN_SAMPLES;
    g_sas.max_voices = voices;
    g_sas.output_mode = mode;
    g_sas.fx_type = SCE_SAS_FX_TYPE_OFF;
    g_sas.fx_vol_l = g_sas.fx_vol_r = 0;
    for (i = 0; i < SCE_SAS_VOICE_MAX; i++) {
        SasVoice *v = &g_sas.v[i];
        memset(v, 0, sizeof *v);
        v->ended = 1;
        v->pitch = SCE_SAS_PITCH_MAX / 4;      /* SCE_SAS_PITCH_BASE */
        v->left = v->right = SCE_SAS_VOLUME_MAX;
        v->loop_start = -1;
    }
    hle_log("[hle] __sceSasInit(core=%08x, grain=%u, voices=%d, %s) -- VAG "
            "mixer active (gate envelope, no reverb)",
            core, g_sas.grain, voices,
            mode == SCE_SAS_OUTPUTMODE_MULTI ? "multi" : "stereo");
    HLE_RET(0);
}

/* --- the mixer --------------------------------------------------------- */

static const int k_vag_f0[5] = { 0, 60, 115,  98, 122 };
static const int k_vag_f1[5] = { 0,  0, -52, -55, -60 };

/* Decode the next 16-byte VAG block into v->buf. Returns 0 at stream end.
 * Block: byte 0 = predictor<<4 | shift, byte 1 = flags (7 = end marker,
 * 6 = loop start, 3 = loop end -> jump to loop start), bytes 2..15 = 28
 * ADPCM nibbles through a 2-tap IIR filter. */
static int sas_vag_block(u8 *ram, SasVoice *v)
{
    u32 a;
    int hdr, flags, pred, shift, i;

    if (v->pos + 16u > v->vag_size) return 0;
    a = v->vag + v->pos;
    hdr = (int)mem_r8(ram, a);
    flags = (int)mem_r8(ram, a + 1u);
    if (flags == 7) return 0;
    pred = (hdr >> 4) & 0xF;
    shift = hdr & 0xF;
    if (pred > 4) pred = 0;
    if (flags == 6) v->loop_start = (int)v->pos;
    for (i = 0; i < 28; i++) {
        int byte = (int)mem_r8(ram, a + 2u + (u32)(i >> 1));
        int nib = (i & 1) ? (byte >> 4) : (byte & 0xF);
        int samp = (int)((s16)((u16)nib << 12)) >> shift;
        samp += (v->hist1 * k_vag_f0[pred] + v->hist2 * k_vag_f1[pred]) >> 6;
        if (samp > 32767) samp = 32767;
        if (samp < -32768) samp = -32768;
        v->buf[i] = (s16)samp;
        v->hist2 = v->hist1;
        v->hist1 = samp;
    }
    v->pos += 16u;
    if (flags == 3 && v->loop_start >= 0) v->pos = (u32)v->loop_start;
    v->bufn = 28;
    v->bufi = 0;
    return 1;
}

/* Mix one grain of stereo s16 frames into guest memory at `out`; mix=1
 * accumulates onto the buffer's existing contents. */
static void sas_render(CpuCtx *c, u8 *ram, u32 out, int mix)
{
    s32 mixl[1024], mixr[1024];
    int n, i, vi;

    if (!sas_ready(c)) return;
    if (!out || (out & 3u)) { HLE_RET(SCE_SAS_ERROR_ADDRESS); return; }

    n = (g_sas.grain > 1024u) ? 1024 : (int)g_sas.grain;
    for (i = 0; i < n; i++) { mixl[i] = 0; mixr[i] = 0; }

    for (vi = 0; vi < g_sas.max_voices; vi++) {
        SasVoice *v = &g_sas.v[vi];
        if (!v->keyed_on || v->paused) continue;
        for (i = 0; i < n; i++) {
            int samp;
            if (v->bufi >= v->bufn && !sas_vag_block(ram, v)) {
                v->keyed_on = 0;
                v->ended = 1;
                break;
            }
            samp = v->buf[v->bufi];
            mixl[i] += (samp * v->left) >> 12;
            mixr[i] += (samp * v->right) >> 12;
            v->frac += (u32)(v->pitch > 0 ? v->pitch : 0x1000);
            while (v->frac >= 0x1000u) { v->frac -= 0x1000u; v->bufi++; }
        }
    }

    for (i = 0; i < n; i++) {
        int l = mixl[i], r = mixr[i];
        if (mix) {
            l += (s16)mem_r16(ram, out + (u32)i * 4u);
            r += (s16)mem_r16(ram, out + (u32)i * 4u + 2u);
        }
        if (l > 32767) l = 32767;
        if (l < -32768) l = -32768;
        if (r > 32767) r = 32767;
        if (r < -32768) r = -32768;
        mem_w16(ram, out + (u32)i * 4u,      (u16)(s16)l);
        mem_w16(ram, out + (u32)i * 4u + 2u, (u16)(s16)r);
    }
    HLE_RET(0);
}

void hle_sceSasCore(CpuCtx *c, u8 *ram) { sas_render(c, ram, HLE_A1, 0); }

void hle_sceSasCoreWithMix(CpuCtx *c, u8 *ram)
{
    int l = (int)HLE_A2, r = (int)HLE_A3;
    if (!volume_ok(l) || !volume_ok(r)) {
        HLE_RET(SCE_SAS_ERROR_VOLUME_VAL);
        return;
    }
    sas_render(c, ram, HLE_A1, 1);
}

/* --- per-voice control ------------------------------------------------- */
void hle_sceSasSetKeyOn(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    (void)ram;
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    /* Restart from the top. KeyOn before any SetVolume plays at full level
     * on hardware, so default the volumes rather than leaving them silent. */
    v->pos = 0;
    v->hist1 = v->hist2 = 0;
    v->bufn = v->bufi = 0;
    v->frac = 0;
    if (!v->vol_set && !v->left && !v->right) {
        v->left = SCE_SAS_VOLUME_MAX;
        v->right = SCE_SAS_VOLUME_MAX;
    }
    if (v->vag && v->vag_size >= 16u) {
        v->keyed_on = 1;
        v->ended = 0;
    } else {
        v->keyed_on = 0;
        v->ended = 1;      /* nothing to play: finished immediately */
    }
    HLE_RET(0);
}

void hle_sceSasSetKeyOff(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    (void)ram;
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    v->keyed_on = 0;
    v->ended = 1;
    HLE_RET(0);
}

/* sceSasSetVolume(voice, l, r, wl, wr) -- two arguments past $a3. */
void hle_sceSasSetVolume(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    int l = (int)HLE_A2, r = (int)HLE_A3;
    int wl = (int)hle_arg(c, ram, 0);
    int wr = (int)hle_arg(c, ram, 1);
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    if (!volume_ok(l) || !volume_ok(r) || !volume_ok(wl) || !volume_ok(wr)) {
        HLE_RET(SCE_SAS_ERROR_VOLUME_VAL);
        return;
    }
    v->left = l; v->right = r; v->wet_left = wl; v->wet_right = wr;
    v->vol_set = 1;
    HLE_RET(0);
}

void hle_sceSasSetPitch(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    int pitch = (int)HLE_A2;
    (void)ram;
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    if (pitch < SCE_SAS_PITCH_MIN || pitch > SCE_SAS_PITCH_MAX) {
        HLE_RET(SCE_SAS_ERROR_PITCH_VAL);
        return;
    }
    v->pitch = pitch;
    HLE_RET(0);
}

/* sceSasSetVoice(voice, vagBuf, size, loopflag) */
void hle_sceSasSetVoice(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    u32 buf = HLE_A2, size = HLE_A3;
    int loop = (int)hle_arg(c, ram, 0);
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    if (buf & 3u) { HLE_RET(SCE_SAS_ERROR_ADDRESS); return; }
    if (loop != SCE_SAS_LOOP_DISABLE && loop != SCE_SAS_LOOP_ENABLE) {
        HLE_RET(SCE_SAS_ERROR_LOOP_MODE);
        return;
    }
    v->in_use = (buf != 0);
    v->vag = buf;
    v->vag_size = size;
    v->pos = 0;
    v->loop_start = (loop == SCE_SAS_LOOP_ENABLE) ? 0 : -1;
    v->hist1 = v->hist2 = 0;
    v->bufn = v->bufi = 0;
    v->frac = 0;
    HLE_RET(0);
}

void hle_sceSasSetNoise(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    u32 clk = HLE_A2;
    (void)ram;
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    if (clk > SCE_SAS_NOISE_CLOCK_MAX) {
        HLE_RET(SCE_SAS_ERROR_NOISE_CLOCK);
        return;
    }
    v->in_use = 1;
    HLE_RET(0);
}

/* sceSasSetADSR(voice, flag, a, d, s, r) -- two args on the stack. */
void hle_sceSasSetADSR(CpuCtx *c, u8 *ram)
{
    if (!sas_ready(c)) return;
    if (!voice(c, (int)HLE_A1)) return;
    (void)ram;
    HLE_RET(0);
}

/* sceSasSetADSRmode(voice, flag, a, d, s, r) */
void hle_sceSasSetADSRmode(CpuCtx *c, u8 *ram)
{
    int modes[4];
    int i;
    if (!sas_ready(c)) return;
    if (!voice(c, (int)HLE_A1)) return;
    modes[0] = (int)HLE_A3;
    modes[1] = (int)hle_arg(c, ram, 0);
    modes[2] = (int)hle_arg(c, ram, 1);
    modes[3] = (int)hle_arg(c, ram, 2);
    for (i = 0; i < 4; i++)
        if (modes[i] < 0 || modes[i] > SCE_SAS_ADSR_MODE_DIRECT) {
            HLE_RET(SCE_SAS_ERROR_ADSR_MODE);
            return;
        }
    HLE_RET(0);
}

void hle_sceSasSetSL(CpuCtx *c, u8 *ram)
{
    (void)ram;
    if (!sas_ready(c)) return;
    if (!voice(c, (int)HLE_A1)) return;
    HLE_RET(0);
}

void hle_sceSasSetSimpleADSR(CpuCtx *c, u8 *ram)
{
    u32 a1 = HLE_A2, a2 = HLE_A3;
    (void)ram;
    if (!sas_ready(c)) return;
    if (!voice(c, (int)HLE_A1)) return;
    if ((a1 >> 16) || (a2 >> 16)) {     /* both are 16-bit packed words */
        HLE_RET(SCE_SAS_ERROR_ADSR_VAL);
        return;
    }
    HLE_RET(0);
}

/* --- queries ----------------------------------------------------------- */
/* sceSasGetEndFlag: bit n set means voice n has finished. */
void hle_sceSasGetEndFlag(CpuCtx *c, u8 *ram)
{
    u32 flags = 0;
    int i;
    (void)ram;
    if (!sas_ready(c)) return;
    for (i = 0; i < g_sas.max_voices; i++)
        if (g_sas.v[i].ended) flags |= (1u << i);
    HLE_RET(flags);
}

/* Gate envelope: a playing voice reports full height, a finished one zero. */
void hle_sceSasGetEnvelopeHeight(CpuCtx *c, u8 *ram)
{
    SasVoice *v;
    (void)ram;
    if (!sas_ready(c)) return;
    v = voice(c, (int)HLE_A1);
    if (!v) return;
    HLE_RET(v->keyed_on ? 0x40000000u : 0u);
}

/* Not declared in libsas.h. SetPause takes a voice bitmask, matching the
 * bitmask GetPauseFlag returns. */
void hle_sceSasGetPauseFlag(CpuCtx *c, u8 *ram)
{
    u32 flags = 0;
    int i;
    (void)ram;
    if (!sas_ready(c)) return;
    for (i = 0; i < g_sas.max_voices; i++)
        if (g_sas.v[i].paused) flags |= (1u << i);
    HLE_RET(flags);
}

void hle_sceSasSetPause(CpuCtx *c, u8 *ram)
{
    u32 mask = HLE_A1;
    int on = (int)HLE_A2;
    int i;
    (void)ram;
    if (!sas_ready(c)) return;
    if (on != SCE_SAS_PAUSE_DISABLE && on != SCE_SAS_PAUSE_ENABLE) {
        HLE_RET(SCE_SAS_ERROR_ADSR_MODE);
        return;
    }
    for (i = 0; i < g_sas.max_voices; i++)
        if (mask & (1u << i)) g_sas.v[i].paused = on;
    HLE_RET(0);
}

/* --- reverb ------------------------------------------------------------ */
void hle_sceSasRevType(CpuCtx *c, u8 *ram)
{
    int type = (int)HLE_A1;
    (void)ram;
    if (!sas_ready(c)) return;
    if (type < SCE_SAS_FX_TYPE_OFF || type > SCE_SAS_FX_TYPE_PIPE) {
        HLE_RET(SCE_SAS_ERROR_FX_TYPE);
        return;
    }
    g_sas.fx_type = type;
    HLE_RET(0);
}

/* sceSasSetEffectVolume(val_l, val_r) */
void hle_sceSasRevEVOL(CpuCtx *c, u8 *ram)
{
    int l = (int)HLE_A1, r = (int)HLE_A2;
    (void)ram;
    if (!sas_ready(c)) return;
    if (!volume_ok(l) || !volume_ok(r)) {
        HLE_RET(SCE_SAS_ERROR_FX_VOLUME_VAL);
        return;
    }
    g_sas.fx_vol_l = l;
    g_sas.fx_vol_r = r;
    HLE_RET(0);
}

/* sceSasSetEffect(dry_sw, wet_sw) */
void hle_sceSasRevVON(CpuCtx *c, u8 *ram)
{
    (void)ram;
    if (!sas_ready(c)) return;
    g_sas.fx_dry = (int)HLE_A1;
    g_sas.fx_wet = (int)HLE_A2;
    HLE_RET(0);
}

/* __sceSasRevParam(core, delay, feedback) -- not declared in libsas.h. */
void hle_sceSasRevParam(CpuCtx *c, u8 *ram)
{
    (void)ram;
    if (!sas_ready(c)) return;
    HLE_RET(0);
}
