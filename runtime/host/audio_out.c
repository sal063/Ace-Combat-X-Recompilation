/* runtime/host/audio_out.c -- winmm waveOut sink. See audio_out.h.
 * Short device queue (4 x 1024 frames ~ 93 ms) keeps voice near subtitles;
 * the feeder emits silence when starved, so the device never stalls. */

#include "audio_out.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>

#define AO_RATE       44100
#define AO_CHANNELS   8
#define RING_FRAMES   65536              /* ~1.49 s; power of two */
#define BLOCK_FRAMES  1024               /* one waveOut buffer */
#define NUM_BLOCKS    4

static int32_t  s_accL[RING_FRAMES];
static int32_t  s_accR[RING_FRAMES];
static uint32_t s_play;                  /* feeder read cursor (frames) */
static uint32_t s_chw[AO_CHANNELS];      /* per-channel write cursors */

static HWAVEOUT s_dev;
static HANDLE   s_event;
static HANDLE   s_thread;
static WAVEHDR  s_hdr[NUM_BLOCKS];
static int16_t  s_pcm[NUM_BLOCKS][BLOCK_FRAMES * 2];
static CRITICAL_SECTION s_lock;
static volatile int s_run;
static int s_state;                      /* 0 = untried, 1 = ok, -1 = failed */

static int16_t clamp16(int32_t v)
{
    if (v > 32767) return 32767;
    if (v < -32768) return -32768;
    return (int16_t)v;
}

static DWORD WINAPI feeder(LPVOID arg)
{
    (void)arg;
    while (s_run) {
        int b;
        for (b = 0; b < NUM_BLOCKS; b++) {
            int i;
            if (!(s_hdr[b].dwFlags & WHDR_DONE)) continue;
            EnterCriticalSection(&s_lock);
            for (i = 0; i < BLOCK_FRAMES; i++) {
                uint32_t p = (s_play + (uint32_t)i) & (RING_FRAMES - 1);
                s_pcm[b][i * 2 + 0] = clamp16(s_accL[p]);
                s_pcm[b][i * 2 + 1] = clamp16(s_accR[p]);
                s_accL[p] = 0;
                s_accR[p] = 0;
            }
            s_play += BLOCK_FRAMES;
            LeaveCriticalSection(&s_lock);
            s_hdr[b].dwFlags &= ~WHDR_DONE;
            waveOutWrite(s_dev, &s_hdr[b], sizeof s_hdr[b]);
        }
        WaitForSingleObject(s_event, 100);
    }
    return 0;
}

static int ao_init(void)
{
    WAVEFORMATEX wf;
    int b;

    if (s_state) return s_state > 0;
    s_state = -1;
    {
        const char *e = getenv("PSPRECO_NOAUDIO");
        if (e && e[0] && e[0] != '0') return 0;
    }

    memset(&wf, 0, sizeof wf);
    wf.wFormatTag = WAVE_FORMAT_PCM;
    wf.nChannels = 2;
    wf.nSamplesPerSec = AO_RATE;
    wf.wBitsPerSample = 16;
    wf.nBlockAlign = 4;
    wf.nAvgBytesPerSec = AO_RATE * 4;

    s_event = CreateEventW(NULL, FALSE, FALSE, NULL);
    if (!s_event) return 0;
    if (waveOutOpen(&s_dev, WAVE_MAPPER, &wf, (DWORD_PTR)s_event, 0,
                    CALLBACK_EVENT) != MMSYSERR_NOERROR) {
        fprintf(stderr, "[audio] waveOutOpen failed; running silent\n");
        CloseHandle(s_event);
        s_event = NULL;
        return 0;
    }
    InitializeCriticalSection(&s_lock);
    for (b = 0; b < NUM_BLOCKS; b++) {
        s_hdr[b].lpData = (LPSTR)s_pcm[b];
        s_hdr[b].dwBufferLength = BLOCK_FRAMES * 4;
        waveOutPrepareHeader(s_dev, &s_hdr[b], sizeof s_hdr[b]);
        s_hdr[b].dwFlags |= WHDR_DONE;   /* all blocks start available */
    }
    s_run = 1;
    s_thread = CreateThread(NULL, 0, feeder, NULL, 0, NULL);
    if (!s_thread) {
        s_run = 0;
        waveOutClose(s_dev);
        s_dev = NULL;
        return 0;
    }
    printf("[audio] waveOut open: %d Hz stereo s16, %d x %d-frame blocks\n",
           AO_RATE, NUM_BLOCKS, BLOCK_FRAMES);
    s_state = 1;
    return 1;
}

void audio_out_push(int ch, const int16_t *lr, int nframes, int volL, int volR)
{
    int i;
    uint32_t w;

    if (ch < 0 || ch >= AO_CHANNELS || nframes <= 0) return;
    if (!ao_init()) return;

    EnterCriticalSection(&s_lock);
    w = s_chw[ch];
    /* Fell behind the playhead: snap forward. Ran a full ring ahead: drop. */
    if ((int32_t)(w - s_play) < 0) w = s_play;
    if (w - s_play > RING_FRAMES - (uint32_t)nframes) {
        LeaveCriticalSection(&s_lock);
        return;
    }
    for (i = 0; i < nframes; i++) {
        uint32_t p = (w + (uint32_t)i) & (RING_FRAMES - 1);
        s_accL[p] += ((int32_t)lr[i * 2 + 0] * volL) >> 15;
        s_accR[p] += ((int32_t)lr[i * 2 + 1] * volR) >> 15;
    }
    s_chw[ch] = w + (uint32_t)nframes;
    LeaveCriticalSection(&s_lock);
}

int audio_out_queued(int ch)
{
    int32_t d;
    if (ch < 0 || ch >= AO_CHANNELS) return -1;
    if (s_state <= 0) return -1;
    EnterCriticalSection(&s_lock);
    d = (int32_t)(s_chw[ch] - s_play);
    LeaveCriticalSection(&s_lock);
    return d > 0 ? d : 0;
}

void audio_out_shutdown(void)
{
    if (s_state <= 0) return;
    s_run = 0;
    SetEvent(s_event);
    WaitForSingleObject(s_thread, 1000);
    CloseHandle(s_thread);
    waveOutReset(s_dev);
    waveOutClose(s_dev);
    CloseHandle(s_event);
    DeleteCriticalSection(&s_lock);
    s_state = -1;
}

#else /* !_WIN32: no host audio; the HLE layer paces open-loop. */

void audio_out_push(int ch, const int16_t *lr, int nframes, int volL, int volR)
{ (void)ch; (void)lr; (void)nframes; (void)volL; (void)volR; }
int audio_out_queued(int ch) { (void)ch; return -1; }
void audio_out_shutdown(void) {}

#endif
