/* runtime/host/at3_decode.cpp -- ATRAC3/ATRAC3plus decode. See at3_decode.h.
 * Backed by third_party/ppsspp/at3_standalone: PPSSPP's standalone extraction
 * of ffmpeg's atrac3/atrac3plus decoders (GPLv2+). C++ TU; exports plain C. */

#include "at3_decode.h"

#include <stdlib.h>

#include "../../third_party/ppsspp/at3_standalone/at3_decoders.h"

struct At3Handle {
    ATRAC3Context *at3;
    ATRAC3PContext *at3p;
    int channels;
};

extern "C" int at3_available(void) { return 1; }

extern "C" At3Handle *at3_open(int is_plus, const unsigned char *extradata,
                               int extradata_size, int channels,
                               int block_align, int sample_rate)
{
    At3Handle *h = (At3Handle *)calloc(1, sizeof *h);
    int ba = block_align;
    (void)sample_rate;
    if (!h) return NULL;
    h->channels = channels;
    if (is_plus)
        h->at3p = atrac3p_alloc(channels, &ba);
    else
        h->at3 = atrac3_alloc(channels, &ba, extradata, extradata_size);
    if (!h->at3p && !h->at3) { free(h); return NULL; }
    return h;
}

extern "C" int at3_decode_frame(At3Handle *h, const unsigned char *in,
                                int in_size, short *out, int out_cap)
{
    /* The decoder memcpys into CALLER-owned planes (2048 samples/frame);
     * HLE handlers are serialised on the fiber scheduler, so statics are ok. */
    static float plane_l[2048], plane_r[2048];
    float *planes[2] = { plane_l, plane_r };
    int n = 0, r, i;

    if (!h || !in || in_size <= 0) return -1;
    if (h->at3p)
        r = atrac3p_decode_frame(h->at3p, planes, &n, in, in_size);
    else
        r = atrac3_decode_frame(h->at3, planes, &n, in, in_size);
    if (r < 0) return -1;
    if (n <= 0) return 0;
    if (n > out_cap) n = out_cap;

    {
        const float *l = planes[0];
        const float *rch = (h->channels > 1 && planes[1]) ? planes[1] : l;
        for (i = 0; i < n; i++) {
            float fl = l[i] * 32767.0f, fr = rch[i] * 32767.0f;
            if (fl > 32767.0f) fl = 32767.0f;
            if (fl < -32768.0f) fl = -32768.0f;
            if (fr > 32767.0f) fr = 32767.0f;
            if (fr < -32768.0f) fr = -32768.0f;
            out[i * 2 + 0] = (short)fl;
            out[i * 2 + 1] = (short)fr;
        }
    }
    return n;
}

extern "C" void at3_flush(At3Handle *h)
{
    if (!h) return;
    if (h->at3p) atrac3p_flush_buffers(h->at3p);
    if (h->at3) atrac3_flush_buffers(h->at3);
}

extern "C" void at3_close(At3Handle *h)
{
    if (!h) return;
    if (h->at3p) atrac3p_free(h->at3p);
    if (h->at3) atrac3_free(h->at3);
    free(h);
}
