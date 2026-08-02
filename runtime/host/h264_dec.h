/* runtime/host/h264_dec.h -- H.264 elementary-stream decoder for sceMpeg
 * movies, backed by the Windows Media Foundation H.264 MFT (a system
 * component; nothing to install). The HLE layer feeds demuxed Annex-B video
 * ES bytes and pulls converted frames in the PSP pixel format. */

#ifndef PSPRECO_H264_DEC_H
#define PSPRECO_H264_DEC_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct H264Dec H264Dec;

H264Dec *h264_create(void);
void h264_destroy(H264Dec *d);

/* Append demuxed Annex-B ES bytes (arbitrary chunking). */
void h264_feed(H264Dec *d, const uint8_t *data, uint32_t len);

/* Decode the next frame into dst (host pointer to the guest video buffer,
 * frameWidth pixels stride, up to 272 rows, PSP pixelMode 0/1/2/3).
 * eos != 0 drains buffered frames at end of stream.
 * Returns 1 = frame written, 0 = need more input, -1 = decoder failed. */
int h264_frame(H264Dec *d, int eos, uint8_t *dst, int frameWidth,
               int pixelMode);

#ifdef __cplusplus
}
#endif
#endif /* PSPRECO_H264_DEC_H */
