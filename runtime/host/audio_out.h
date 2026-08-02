/* runtime/host/audio_out.h -- host audio sink (ported from a prior project).
 *
 * One int32 accumulator ring the 8 PSP channels sum into at independent
 * write cursors, drained by a feeder thread into waveOut at 44100 Hz stereo
 * s16 (the PSP's native rate, so no resampling). The queue-depth query lets
 * the HLE layer pace closed-loop; open-loop sleeping drifts and crackles.
 */

#ifndef PSPRECO_AUDIO_OUT_H
#define PSPRECO_AUDIO_OUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Sum `nframes` stereo s16 frames from `lr` into channel `ch`'s position in
 * the ring, scaled by volL/volR (0..0x8000 = 0dB). Opens the device lazily
 * on first call; a failed open (or PSPRECO_NOAUDIO=1) makes this a no-op. */
void audio_out_push(int ch, const int16_t *lr, int nframes,
                    int volL, int volR);

/* Frames channel `ch` has queued ahead of the playhead, or -1 when there is
 * no host audio device (caller falls back to open-loop pacing). */
int audio_out_queued(int ch);

/* Stop the feeder and close the device. Safe to call without init. */
void audio_out_shutdown(void);

#ifdef __cplusplus
}
#endif
#endif /* PSPRECO_AUDIO_OUT_H */
