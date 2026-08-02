/* runtime/hle/iofilemgr.c -- IoFileMgrForUser HLE.
 *
 * disc0:/ and umd0: map to the mounted ISO, read-only. Async ops complete
 * only after a modelled UMD delay (seek penalty + throughput), so the game's
 * streaming loop sees deterministic, non-instant latency.
 */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"
#include "iso9660.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* UMD performance model: ~1.4 MB/s + seek penalty, tunable here. */
#define UMD_BYTES_PER_SEC 1400000u
#define UMD_SEEK_US       120000u     /* worst-case full-stroke seek */
#define UMD_SECTOR        2048u

#define MAX_FD 64

typedef struct {
    int   used;
    int   fd;
    char  path[256];
    u32   flags;
    s64   offset;
    s64   size;
    s64   iso_offset;      /* byte offset of the file within the ISO */
    FILE *host;            /* for ms0: files */
    int   is_iso;
    /* async state */
    int   async_pending;
    u64   async_ready_us;
    s64   async_result;
} FileDesc;

static FileDesc g_fds[MAX_FD];
static int      g_next_fd = 3;

static u64 umd_transfer_us(u32 bytes, int seeked)
{
    u64 us = (u64)bytes * 1000000u / UMD_BYTES_PER_SEC;
    if (seeked) us += UMD_SEEK_US;
    return us;
}

static FileDesc *fd_of(int fd)
{
    int i;
    for (i = 0; i < MAX_FD; i++)
        if (g_fds[i].used && g_fds[i].fd == fd) return &g_fds[i];
    return NULL;
}

/* disc0:/PATH and umd0:/PATH both mean the mounted ISO. */
static const char *iso_relative(const char *path)
{
    const char *p = strchr(path, ':');
    if (!p) return NULL;
    if (strncmp(path, "disc0:", 6) && strncmp(path, "umd0:", 5)) return NULL;
    p++;
    while (*p == '/') p++;
    return p;
}

/* Raw-sector pseudo-path, undocumented but used by the game at boot:
 *
 *     disc0:/sce_lbn<lba>_size<bytes>
 *
 * opens a window on the UMD data track at logical block `lba` (2048-byte
 * ISO 9660 sectors) for `bytes` bytes, bypassing the directory entirely.
 * Both numbers accept 0x-prefixed hex or plain decimal. */
#define ISO_SECTOR_BYTES 2048

static int parse_lbn_path(const char *rel, s64 *out_offset, s64 *out_size)
{
    const char *p = rel;
    char *end;
    unsigned long long lba, size;

    if (strncmp(p, "sce_lbn", 7) != 0) return 0;
    p += 7;
    lba = strtoull(p, &end, 0);
    if (end == p) return 0;
    p = end;
    if (strncmp(p, "_size", 5) != 0) return 0;
    p += 5;
    size = strtoull(p, &end, 0);
    if (end == p) return 0;

    *out_offset = (s64)lba * ISO_SECTOR_BYTES;
    *out_size = (s64)size;

    /* Nothing else range-checks a raw-sector path; refuse overruns loudly. */
    if (*out_offset < 0 || *out_size < 0
        || *out_offset + *out_size > iso_image_size()) {
        hle_log("[hle] sce_lbn path \"%s\" asks for bytes %lld..%lld of a "
                "%lld-byte image -- out of range", rel,
                (long long)*out_offset,
                (long long)(*out_offset + *out_size),
                (long long)iso_image_size());
        return 0;
    }
    return 1;
}

/* ---- modding ------------------------------------------------------------
 * Two directories, both optional and both off by default:
 *
 *   PSPRECO_DISC_DUMP=<dir>   write out each disc window the game opens
 *   PSPRECO_DISC_PATCH=<dir>  serve any window that has a file waiting here
 *
 * That pairing is what makes this game moddable at all. Its assets live in one
 * 1.02 GB archive, PSP_GAME/USRDIR/REGFILE.CDI, and the game reads them by
 * ABSOLUTE DISC SECTOR -- `disc0:/sce_lbn<lba>_size<bytes>` -- never by name
 * and never even opening the archive by name. So there is no filename to
 * intercept and no need to understand the container: dump what the game asks
 * for, edit the file, drop it in the patch directory, and the edit is live.
 *
 * A window's file name is the path the game used, so a dump can be matched
 * straight against a log line:
 *     disc0:/sce_lbn0x5F20_size0x20000 -> sce_lbn0x5F20_size0x20000.bin
 */
static const char *env_dir(const char *name)
{
    const char *v = getenv(name);
    return (v && v[0]) ? v : NULL;
}

static void window_file(char *out, size_t n, const char *dir, const char *rel)
{
    if (strncmp(rel, "sce_lbn", 7) == 0) snprintf(out, n, "%s/%s.bin", dir, rel);
    else                                 snprintf(out, n, "%s/%s", dir, rel);
}

/* Opened once per window, on first use, and never overwritten -- a dump run
 * with a patch directory already in place must not clobber the edits. */
static void dump_window(const char *rel, s64 off, s64 size)
{
    const char *dir = env_dir("PSPRECO_DISC_DUMP");
    char path[512];
    unsigned char *buf;
    FILE *fp;

    if (!dir || size <= 0 || size > (128 << 20)) return;
    window_file(path, sizeof path, dir, rel);
    fp = fopen(path, "rb");
    if (fp) { fclose(fp); return; }              /* already dumped */

    buf = (unsigned char *)malloc((size_t)size);
    if (!buf) return;
    if (iso_pread(off, buf, (u32)size)) {
        fp = fopen(path, "wb");
        if (!fp) {
            hle_log("[disc] cannot write %s -- does the directory exist?", path);
        } else {
            fwrite(buf, 1, (size_t)size, fp);
            fclose(fp);
            hle_log("[disc] dumped %s (%lld bytes)", path, (long long)size);
        }
    }
    free(buf);
}

/* Returns an open handle and its size, or NULL when nothing is waiting. */
static FILE *open_patch(const char *rel, s64 *out_size)
{
    const char *dir = env_dir("PSPRECO_DISC_PATCH");
    char path[512];
    FILE *fp;

    if (!dir) return NULL;
    window_file(path, sizeof path, dir, rel);
    fp = fopen(path, "rb");
    if (!fp) return NULL;
    if (fseek(fp, 0, SEEK_END) != 0) { fclose(fp); return NULL; }
    *out_size = (s64)ftell(fp);
    rewind(fp);
    return fp;
}

static int do_open(u8 *ram, const char *path, u32 flags, FileDesc **out)
{
    int i, slot = -1;
    const char *rel;
    (void)ram;

    for (i = 0; i < MAX_FD; i++) if (!g_fds[i].used) { slot = i; break; }
    if (slot < 0) return -1;

    memset(&g_fds[slot], 0, sizeof g_fds[slot]);
    snprintf(g_fds[slot].path, sizeof g_fds[slot].path, "%s", path);
    g_fds[slot].flags = flags;

    rel = iso_relative(path);
    if (rel) {
        s64 off = 0, size = 0, psize = 0;
        int on_disc = parse_lbn_path(rel, &off, &size)
                   || iso_find(rel, &off, &size);
        FILE *patch = open_patch(rel, &psize);

        if (patch) {
            /* A replacement of the wrong length is the mistake to expect, and
             * it fails as a short read deep inside a load rather than here. */
            if (on_disc && psize != size)
                hle_log("[disc] patched %s is %lld bytes, the game asked for "
                        "%lld -- reads will be short",
                        rel, (long long)psize, (long long)size);
            g_fds[slot].host = patch;
            g_fds[slot].size = psize;
        } else {
            if (!on_disc) return -2;
            dump_window(rel, off, size);
            g_fds[slot].is_iso = 1;
            g_fds[slot].iso_offset = off;
            g_fds[slot].size = size;
        }
    } else {
        /* ms0: and anything else goes to the host save directory. */
        return -3;
    }

    g_fds[slot].used = 1;
    g_fds[slot].fd = g_next_fd++;
    *out = &g_fds[slot];
    return g_fds[slot].fd;
}

void hle_sceIoOpen(CpuCtx *c, u8 *ram)
{
    const char *path = hle_cstr(ram, HLE_A0);
    FileDesc *f = NULL;
    int fd = do_open(ram, path, HLE_A1, &f);
    if (fd < 0) {
        hle_log("[hle] sceIoOpen(\"%s\", %08x) -> NOT FOUND", path, HLE_A1);
        HLE_RET(SCE_ERROR_ERRNO_ENOENT);
        return;
    }
    /* PSPRECO_WATCH_STR=<guest address> logs the C string at that address
     * alongside each open (e.g. the resource name behind an sce_lbn path). */
    {
        static int checked;
        static u32 watch;
        if (!checked) {
            const char *e = getenv("PSPRECO_WATCH_STR");
            checked = 1;
            if (e) watch = (u32)strtoul(e, NULL, 0);
        }
        hle_log("[hle] sceIoOpen(\"%s\", %08x) -> fd=%d (%lld bytes) "
                "[from %08x]%s%s",
                path, HLE_A1, fd, (long long)f->size, c->r[R_RA],
                watch ? " want=" : "", watch ? hle_cstr(ram, watch) : "");
    }
    HLE_RET(fd);
}

void hle_sceIoOpenAsync(CpuCtx *c, u8 *ram)
{
    const char *path = hle_cstr(ram, HLE_A0);
    FileDesc *f = NULL;
    int fd = do_open(ram, path, HLE_A1, &f);
    if (fd < 0) {
        hle_log("[hle] sceIoOpenAsync(\"%s\") -> NOT FOUND", path);
        HLE_RET(SCE_ERROR_ERRNO_ENOENT);
        return;
    }
    f->async_pending = 1;
    f->async_result = fd;
    f->async_ready_us = threadman_now_us() + UMD_SEEK_US;
    hle_log("[hle] sceIoOpenAsync(\"%s\") -> fd=%d (ready in %u us)",
            path, fd, UMD_SEEK_US);
    HLE_RET(fd);
}

void hle_sceIoClose(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    (void)ram;
    if (!f) {
        hle_log("[hle] sceIoClose(fd=%d): bad descriptor", (int)HLE_A0);
        HLE_RET(SCE_ERROR_ERRNO_EBADF);
        return;
    }
    hle_log("[hle] sceIoClose(fd=%d) [from %08x]", (int)HLE_A0, c->r[R_RA]);
    if (f->host) fclose(f->host);
    f->used = 0;
    HLE_RET(0);
}

static s64 read_into_guest(u8 *ram, FileDesc *f, u32 buf, u32 nbyte)
{
    s64 avail = f->size - f->offset;
    u32 n = (avail <= 0) ? 0u : (u32)((s64)nbyte < avail ? (s64)nbyte : avail);
    if (n && f->host) {
        /* A replacement file, from PSPRECO_DISC_PATCH. Plain fseek is enough:
         * these are single assets, not the 1 GB disc. */
        unsigned char chunk[8192];
        u32 done = 0;
        if (fseek(f->host, (long)f->offset, SEEK_SET) != 0) return -1;
        while (done < n) {
            u32 want = n - done, i;
            size_t got;
            if (want > sizeof chunk) want = (u32)sizeof chunk;
            got = fread(chunk, 1, want, f->host);
            if (got == 0) break;
            for (i = 0; i < (u32)got; i++)
                mem_w8(ram, buf + done + i, chunk[i]);
            done += (u32)got;
        }
        if (done != n) return -1;
    } else if (n && f->is_iso) {
        if (!iso_read(f->iso_offset + f->offset, ram, buf, n)) return -1;
    }
    f->offset += n;
    return (s64)n;
}

void hle_sceIoRead(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    s64 n;
    if (!f) {
        hle_log("[hle] sceIoRead(fd=%d): bad descriptor", (int)HLE_A0);
        HLE_RET(SCE_ERROR_ERRNO_EBADF);
        return;
    }
    n = read_into_guest(ram, f, HLE_A1, HLE_A2);
    if (n < 0) { HLE_RET(SCE_ERROR_ERRNO_EIO); return; }
    hle_log("[hle] sceIoRead(fd=%d, %u) -> %lld", (int)HLE_A0, HLE_A2,
            (long long)n);
    /* A synchronous read still costs UMD time. */
    threadman_advance_us(umd_transfer_us((u32)n, 0));
    HLE_RET((u32)n);
}

void hle_sceIoReadAsync(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    s64 n;
    if (!f) { HLE_RET(SCE_ERROR_ERRNO_EBADF); return; }
    n = read_into_guest(ram, f, HLE_A1, HLE_A2);
    if (n < 0) { HLE_RET(SCE_ERROR_ERRNO_EIO); return; }
    f->async_pending = 1;
    f->async_result = n;
    f->async_ready_us = threadman_now_us() + umd_transfer_us((u32)n, 1);
    hle_log("[hle] sceIoReadAsync(fd=%d, buf=%08x, %u) -> %lld queued",
            (int)HLE_A0, HLE_A1, HLE_A2, (long long)n);
    HLE_RET(0);
}

/* Standard streams: newlib maps guest fds 0/1/2 onto these UIDs and routes
 * printf through sceIoWrite on them. Fixed UIDs outside do_open's range;
 * output is forwarded to the host's stdout/stderr. */
#define STDIN_UID  0x40u
#define STDOUT_UID 0x41u
#define STDERR_UID 0x42u

void hle_sceKernelStdin(CpuCtx *c, u8 *ram)  { (void)ram; HLE_RET(STDIN_UID); }
void hle_sceKernelStdout(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(STDOUT_UID); }
void hle_sceKernelStderr(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(STDERR_UID); }

/* Only the standard streams are writable; every disc device is read-only. */
void hle_sceIoWrite(CpuCtx *c, u8 *ram)
{
    u32 uid = HLE_A0;
    FileDesc *f;

    if (uid == STDOUT_UID || uid == STDERR_UID) {
        u32 p = HLE_A1, n = HLE_A2, i;
        FILE *out = (uid == STDERR_UID) ? stderr : stdout;
        fputs("[guest] ", out);
        for (i = 0; i < n; i++) {
            int ch = (int)mem_r8(ram, p + i);
            fputc(ch, out);
            /* Keep the tag on every line so guest output cannot be mistaken
             * for pspreco's own. */
            if (ch == '\n' && i + 1 < n) fputs("[guest] ", out);
        }
        if (n && mem_r8(ram, p + n - 1) != (u32)'\n') fputc('\n', out);
        HLE_RET((u32)n);
        return;
    }
    if (uid == STDIN_UID) { HLE_RET(SCE_ERROR_ERRNO_EBADF); return; }

    f = fd_of((int)uid);
    if (!f) { HLE_RET(SCE_ERROR_ERRNO_EBADF); return; }
    if (f->is_iso) { HLE_RET(SCE_ERROR_ERRNO_EROFS); return; }
    HLE_RET(SCE_ERROR_ERRNO_EROFS);
}

/* SceOff is 64-bit: the offset arrives in $a2:$a3 (64-bit args align to an
 * even register pair) and whence on the stack. */
static s64 lseek_common(CpuCtx *c, u8 *ram, FileDesc *f, s64 off, int whence)
{
    s64 base = (whence == 0) ? 0 : (whence == 1) ? f->offset : f->size;
    s64 want = base + off;
    (void)c; (void)ram;
    if (want < 0) return -1;
    if (want > f->size) want = f->size;
    f->offset = want;
    return want;
}

void hle_sceIoLseek(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    s64 off = (s64)(((u64)HLE_A3 << 32) | HLE_A2);
    int whence = (int)hle_arg(c, ram, 0);
    s64 r;
    if (!f) {
        hle_log("[hle] sceIoLseek(fd=%d): bad descriptor", (int)HLE_A0);
        HLE_RET64((u64)(s64)SCE_ERROR_ERRNO_EBADF);
        return;
    }
    r = lseek_common(c, ram, f, off, whence);
    hle_log("[hle] sceIoLseek(fd=%d, %lld, whence=%d) -> %lld",
            (int)HLE_A0, (long long)off, whence, (long long)r);
    HLE_RET64((u64)r);
}

void hle_sceIoLseekAsync(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    s64 off = (s64)(((u64)HLE_A3 << 32) | HLE_A2);
    int whence = (int)hle_arg(c, ram, 0);
    s64 r;
    if (!f) { HLE_RET(SCE_ERROR_ERRNO_EBADF); return; }
    r = lseek_common(c, ram, f, off, whence);
    f->async_pending = 1;
    f->async_result = r;
    f->async_ready_us = threadman_now_us() + UMD_SEEK_US;
    HLE_RET(0);
}

/* Poll returns 1 while still busy; Wait blocks until the result is ready.
 * The 64-bit result is written through the SceIores pointer. */
static void deliver_async(u8 *ram, FileDesc *f, u32 res_ptr)
{
    if (res_ptr) {
        mem_w32(ram, res_ptr + 0, (u32)((u64)f->async_result & 0xFFFFFFFFu));
        mem_w32(ram, res_ptr + 4, (u32)((u64)f->async_result >> 32));
    }
    f->async_pending = 0;
}

void hle_sceIoPollAsync(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    if (!f) { HLE_RET(SCE_ERROR_ERRNO_EBADF); return; }
    if (f->async_pending && threadman_now_us() < f->async_ready_us) {
        HLE_RET(1);                 /* still busy */
        return;
    }
    hle_log("[hle] sceIoPollAsync(fd=%d) -> ready, result %lld",
            (int)HLE_A0, (long long)f->async_result);
    deliver_async(ram, f, HLE_A1);
    HLE_RET(0);
}

void hle_sceIoWaitAsync(CpuCtx *c, u8 *ram)
{
    FileDesc *f = fd_of((int)HLE_A0);
    if (!f) { HLE_RET(SCE_ERROR_ERRNO_EBADF); return; }
    if (f->async_pending && threadman_now_us() < f->async_ready_us)
        threadman_advance_us(f->async_ready_us - threadman_now_us());
    deliver_async(ram, f, HLE_A1);
    HLE_RET(0);
}

void hle_sceIoGetstat(CpuCtx *c, u8 *ram)
{
    const char *path = hle_cstr(ram, HLE_A0);
    const char *rel = iso_relative(path);
    u32 stat = HLE_A1;
    s64 off = 0, size = 0;
    if (!rel || !iso_find(rel, &off, &size)) {
        hle_log("[hle] sceIoGetstat(\"%s\") -> NOT FOUND", path);
        HLE_RET(SCE_ERROR_ERRNO_ENOENT);
        return;
    }
    if (stat) {
        u32 i;
        /* SceIoStat layout (ScePspDateTime is 16 bytes):
         *   0  st_mode     4
         *   4  st_attr     4
         *   8  st_size     8   (SceOff, 8-aligned)
         *  16  st_ctime   16
         *  32  st_atime   16
         *  48  st_mtime   16
         *  64  st_private 24   (6 x u32)
         * total 88 */
        for (i = 0; i < 88u; i += 4u) mem_w32(ram, stat + i, 0u);
        mem_w32(ram, stat + 0, 0x21FFu);       /* regular file, all perms */
        mem_w32(ram, stat + 4, 0x20u);         /* FIO_SO_IFREG */
        mem_w32(ram, stat + 8, (u32)(size & 0xFFFFFFFF));
        mem_w32(ram, stat + 12, (u32)(size >> 32));
        /* Undocumented but load-bearing: the ISO 9660 driver reports the
         * file's starting LBA in "reserved" st_private[0]. The game stats
         * REGFILE.CDI and builds raw sce_lbn paths from it; a zero here
         * makes it read the wrong sectors and retry forever. */
        mem_w32(ram, stat + 64, (u32)(off / ISO_SECTOR_BYTES));
    }
    hle_log("[hle] sceIoGetstat(\"%s\") -> %lld bytes", path, (long long)size);
    HLE_RET(0);
}

void hle_sceIoRename(CpuCtx *c, u8 *ram)
{
    hle_log("[hle] sceIoRename(\"%s\", \"%s\") on a read-only device",
            hle_cstr(ram, HLE_A0), hle_cstr(ram, HLE_A1));
    HLE_RET(SCE_ERROR_ERRNO_EROFS);
}

void hle_sceIoDevctl(CpuCtx *c, u8 *ram)
{
    const char *dev = hle_cstr(ram, HLE_A0);
    u32 cmd = HLE_A1;
    hle_log("[hle] sceIoDevctl(\"%s\", cmd=%08x)", dev, cmd);
    HLE_RET(0);
}
