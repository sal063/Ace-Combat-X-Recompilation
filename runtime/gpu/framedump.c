/* runtime/gpu/framedump.c -- write the display frame buffer to a file.
 *
 * 24-bit BMP (no third-party dependencies): 54-byte header, BGR rows, bottom-up.
 * Enabled with PSPRECO_FRAMEDUMP=<prefix>; writes <prefix>NNNNNN.bmp.
 * PSPRECO_FRAMEDUMP_EVERY=N dumps one frame in N (default 60).
 */

#include "pspreco.h"
#include "ge.h"
#include "framedump.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *g_prefix;
static unsigned g_every = 60;
static unsigned g_seq;
static int g_checked;

static void init_once(void)
{
    const char *e;
    if (g_checked) return;
    g_checked = 1;
    g_prefix = getenv("PSPRECO_FRAMEDUMP");
    e = getenv("PSPRECO_FRAMEDUMP_EVERY");
    if (e) {
        unsigned long v = strtoul(e, NULL, 10);
        if (v) g_every = (unsigned)v;
    }
    if (g_prefix)
        printf("[gpu] dumping every %u-th frame to %sNNNNNN.bmp\n",
               g_every, g_prefix);
}

int framedump_enabled(void)
{
    init_once();
    return g_prefix != NULL;
}

static void put_le16(u8 *p, unsigned v) { p[0] = (u8)v; p[1] = (u8)(v >> 8); }
static void put_le32(u8 *p, u32 v)
{
    p[0] = (u8)v; p[1] = (u8)(v >> 8); p[2] = (u8)(v >> 16); p[3] = (u8)(v >> 24);
}

/* `addr` is the guest frame buffer, `stride` its width in pixels, `fpf` its
 * pixel format, and w/h the visible area. */
static int write_bmp(const char *path, u8 *ram, u32 addr, u32 stride,
                     int fpf, int w, int h)
{
    unsigned row_bytes = (unsigned)w * 3u;
    unsigned pad = (4u - (row_bytes & 3u)) & 3u;
    unsigned image = (row_bytes + pad) * (unsigned)h;
    u8 hdr[54];
    u8 *row;
    FILE *f;
    int x, y;
    unsigned bpp = (fpf == 3) ? 4u : 2u;

    f = fopen(path, "wb");
    if (!f) return 0;

    memset(hdr, 0, sizeof hdr);
    hdr[0] = 'B'; hdr[1] = 'M';
    put_le32(hdr + 2, 54u + image);      /* file size            */
    put_le32(hdr + 10, 54u);             /* pixel data offset    */
    put_le32(hdr + 14, 40u);             /* DIB header size      */
    put_le32(hdr + 18, (u32)w);
    put_le32(hdr + 22, (u32)h);          /* positive = bottom-up */
    put_le16(hdr + 26, 1u);              /* planes               */
    put_le16(hdr + 28, 24u);             /* bits per pixel       */
    put_le32(hdr + 34, image);
    fwrite(hdr, 1, sizeof hdr, f);

    row = (u8 *)malloc(row_bytes + pad);
    if (!row) { fclose(f); return 0; }
    memset(row, 0, row_bytes + pad);

    for (y = h - 1; y >= 0; y--) {       /* BMP rows run bottom to top */
        for (x = 0; x < w; x++) {
            u32 a = addr + (u32)y * stride * bpp + (u32)x * bpp;
            u32 raw = (bpp == 4) ? mem_r32(ram, a) : mem_r16(ram, a);
            u32 rgba = ge_unpack_pixel(fpf, raw);
            row[x * 3 + 0] = (u8)((rgba >> 16) & 0xFFu);   /* B */
            row[x * 3 + 1] = (u8)((rgba >> 8) & 0xFFu);    /* G */
            row[x * 3 + 2] = (u8)(rgba & 0xFFu);           /* R */
        }
        fwrite(row, 1, row_bytes + pad, f);
    }
    free(row);
    fclose(f);
    return 1;
}

void framedump_frame(u8 *ram, u32 addr, u32 stride, int fpf, int w, int h)
{
    char path[512];
    if (!framedump_enabled() || !addr) return;
    if (g_every > 1 && (g_seq % g_every) != 0) { g_seq++; return; }
    snprintf(path, sizeof path, "%s%06u.bmp", g_prefix, g_seq);
    if (write_bmp(path, ram, addr, stride, fpf, w, h))
        printf("[gpu] wrote %s (%dx%d from %08x, fpf=%d)\n",
               path, w, h, addr, fpf);
    else
        printf("[gpu] could not write %s\n", path);
    g_seq++;
}
