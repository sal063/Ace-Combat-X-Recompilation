/* runtime/host/at3_decode.h -- ATRAC3 / ATRAC3plus frame decoder, as a plain
 * C API so the HLE layer never sees a decoder type. */

#ifndef PSPRECO_AT3_DECODE_H
#define PSPRECO_AT3_DECODE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct At3Handle At3Handle;

/* Non-zero when a real decoder is linked in. */
int at3_available(void);

/* is_plus: 1 = ATRAC3plus, 0 = ATRAC3. extradata comes from the RIFF fmt
 * chunk (bytes after the 16-byte WAVEFORMATEX head + cbSize field, may be
 * empty for ATRAC3plus). Returns NULL on failure. */
At3Handle *at3_open(int is_plus, const unsigned char *extradata,
                    int extradata_size, int channels, int block_align,
                    int sample_rate);

/* Decode one frame (block_align bytes at `in`). Writes interleaved STEREO
 * s16 (mono input duplicated) and returns samples per channel, 0 when the
 * decoder needs more input, -1 on error. out_cap is in stereo frames. */
int at3_decode_frame(At3Handle *h, const unsigned char *in, int in_size,
                     short *out, int out_cap);

/* Reset decoder state for a loop/seek back to the stream start. */
void at3_flush(At3Handle *h);

void at3_close(At3Handle *h);

#ifdef __cplusplus
}
#endif
#endif /* PSPRECO_AT3_DECODE_H */
