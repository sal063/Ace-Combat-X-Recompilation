/* runtime/hle/iso9660.c -- read-only ISO9660 reader, and the extracted-tree
 * backing that stands in for it.
 *
 * On-disc layout facts (ISO9660 standard): sector size 2048; Primary Volume
 * Descriptor at sector 16; root directory record at PVD offset 156; files
 * are one contiguous extent; a directory record is
 *   { u8 len; u8 ext_attr_len; u32_lsb_msb extent; u32_lsb_msb size;
 *     u8 date[7]; u8 flags; ...; u8 name_len; char name[]; }.
 *
 * Both backings answer the same question -- "give me the bytes at this
 * absolute disc offset" -- because that is the only question the game asks.
 * See iso9660.h for why an extracted directory needs a manifest to do it.
 */

#include "iso9660.h"
#include "hle.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define SECTOR 2048

/* A UMD is up to 1.8 GB and this game's image is 1.07 GB, so disc offsets do
 * not fit a 32-bit long -- which is what `fseek` takes on Windows. The old
 * code cast to (long) and happened to stay under the limit; anything seeking
 * past 2 GB would have wrapped silently. */
#if defined(_WIN32)
#  define seek64(f, off, whence) _fseeki64((f), (off), (whence))
#  define tell64(f)              ((s64)_ftelli64(f))
#else
#  define seek64(f, off, whence) fseeko((f), (off_t)(off), (whence))
#  define tell64(f)              ((s64)ftello(f))
#endif

/* ---- image backing ------------------------------------------------------ */
static FILE *g_iso;
static s64   g_image_size;
static s64   g_root_extent;
static s64   g_root_size;

/* ---- extracted-tree backing --------------------------------------------- */
/* One row per file, from disc.manifest: where it used to live on the disc, and
 * where it lives now. Kept sorted by lba so an offset lookup is a bisect. */
typedef struct {
    s64  lba;          /* original sector, so absolute offsets still resolve */
    s64  size;         /* declared size; the extent is padded up to a sector */
    char rel[192];     /* disc-relative path, e.g. PSP_GAME/USRDIR/REGFILE.CDI */
    char host[320];    /* where the extracted file actually is               */
} DiscFile;

static DiscFile *g_files;
static int       g_file_count;
static s64       g_declared_size;   /* from the manifest, when it says */

/* ---- extracted-archive backing ------------------------------------------
 * A second manifest, one level down. PSP_GAME/USRDIR/REGFILE.CDI is 1.02 GB --
 * 95% of the disc -- and every asset the game loads is a byte range inside it,
 * so extracting the disc alone still leaves one opaque file. tools/cdiextract.py
 * unpacks it into named assets and records where each one lived; this serves
 * disc reads that land in its extent from those files instead.
 *
 * The regions cover the archive with no gaps, including its entry table and
 * the unindexed streamed audio and movies at the end, so once this exists the
 * archive itself is never read and may be deleted. */
typedef struct {
    s64  off;          /* offset within the archive */
    s64  size;
    char host[512];
} CdiRegion;

static CdiRegion *g_cdi;
static int        g_cdi_count;
static s64        g_cdi_disc_off = -1;   /* where the archive sits on the disc */
static s64        g_cdi_size;
static char      g_dir[256];

static u32 rd32le(const unsigned char *p)
{
    return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24);
}

static int path_is_dir(const char *p)
{
    struct stat st;
    return stat(p, &st) == 0 && (st.st_mode & S_IFDIR) != 0;
}

/* ---- manifest ----------------------------------------------------------- */
/* Deliberately a plain text table rather than anything structured: it is meant
 * to be read, diffed and hand-edited by whoever is modding.
 *
 *     # pspreco disc manifest v1
 *     # <lba hex> <size decimal> <disc-relative path>
 *     5f20 1071140864 PSP_GAME/USRDIR/REGFILE.CDI
 */
static int cmp_lba(const void *a, const void *b)
{
    s64 x = ((const DiscFile *)a)->lba, y = ((const DiscFile *)b)->lba;
    return x < y ? -1 : (x > y ? 1 : 0);
}

static int manifest_load(const char *dir)
{
    char path[300];
    char line[512];
    FILE *fp;
    int cap = 64;

    snprintf(path, sizeof path, "%s/disc.manifest", dir);
    fp = fopen(path, "r");
    if (!fp) {
        fprintf(stderr,
                "[disc] %s has no disc.manifest.\n"
                "       An extracted disc needs one: it records the sector each\n"
                "       file came from, and the game asks for sectors, not\n"
                "       names. Make one with:\n"
                "           python tools/isoextract.py <game.iso> %s\n",
                dir, dir);
        return 0;
    }

    g_files = (DiscFile *)malloc((size_t)cap * sizeof *g_files);
    if (!g_files) { fclose(fp); return 0; }

    while (fgets(line, sizeof line, fp)) {
        char rel[192];
        long long lba, size;
        char *h = line;
        while (*h == ' ' || *h == '\t') h++;
        if (*h == '#' || *h == '\n' || *h == '\r' || !*h) continue;
        /* The image is padded past its last file; only the extractor knows by
         * how much, and a raw sector path is range-checked against it. */
        if (sscanf(h, "image-size %lld", &size) == 1) {
            g_declared_size = (s64)size;
            continue;
        }
        if (sscanf(h, "%llx %lld %191[^\r\n]", &lba, &size, rel) != 3) {
            fprintf(stderr, "[disc] ignoring unparsable manifest line: %s", h);
            continue;
        }
        if (g_file_count == cap) {
            DiscFile *bigger;
            cap *= 2;
            bigger = (DiscFile *)realloc(g_files, (size_t)cap * sizeof *g_files);
            if (!bigger) break;
            g_files = bigger;
        }
        g_files[g_file_count].lba = (s64)lba;
        g_files[g_file_count].size = (s64)size;
        snprintf(g_files[g_file_count].rel, sizeof g_files[g_file_count].rel,
                 "%s", rel);
        snprintf(g_files[g_file_count].host, sizeof g_files[g_file_count].host,
                 "%s/%s", dir, rel);
        g_file_count++;
    }
    fclose(fp);
    if (!g_file_count) {
        fprintf(stderr, "[disc] %s is empty\n", path);
        free(g_files); g_files = NULL;
        return 0;
    }
    qsort(g_files, (size_t)g_file_count, sizeof *g_files, cmp_lba);

    /* The disc ends where its last file ends, rounded up to a sector -- the
     * same number the image size gave, and what range-checks a raw path. */
    {
        int i;
        g_image_size = 0;
        for (i = 0; i < g_file_count; i++) {
            s64 end = g_files[i].lba * SECTOR
                    + ((g_files[i].size + SECTOR - 1) / SECTOR) * SECTOR;
            if (end > g_image_size) g_image_size = end;
        }
        if (g_declared_size > g_image_size) g_image_size = g_declared_size;
    }

    /* The missing-file check runs in iso_mount, after cdi_load: only then can
     * a genuinely lost file be told from an archive that was unpacked and
     * deleted, which is a supported thing to do. */
    printf("[disc] extracted tree: %d files, %lld bytes of disc\n",
           g_file_count, (long long)g_image_size);
    return 1;
}

static int rel_matches(const char *a, const char *b);

static int cmp_cdi(const void *a, const void *b)
{
    s64 x = ((const CdiRegion *)a)->off, y = ((const CdiRegion *)b)->off;
    return x < y ? -1 : (x > y ? 1 : 0);
}

/* <dir>/cdi/cdi.manifest, optional. Absent means the archive is read as one
 * file, exactly as before. */
static void cdi_load(const char *dir)
{
    char path[320], line[600], source[192];
    FILE *fp;
    int cap = 256;
    s64 declared = 0;

    snprintf(path, sizeof path, "%s/cdi/cdi.manifest", dir);
    fp = fopen(path, "r");
    if (!fp) return;

    source[0] = '\0';
    g_cdi = (CdiRegion *)malloc((size_t)cap * sizeof *g_cdi);
    if (!g_cdi) { fclose(fp); return; }

    while (fgets(line, sizeof line, fp)) {
        char rel[256];
        long long off, size;
        char *h = line;
        while (*h == ' ' || *h == '\t') h++;
        if (*h == '#' || *h == '\n' || *h == '\r' || !*h) continue;
        if (sscanf(h, "source %191[^\r\n]", source) == 1) continue;
        if (sscanf(h, "size %lld", &size) == 1) { declared = (s64)size; continue; }
        if (sscanf(h, "%llx %lld %255[^\r\n]", &off, &size, rel) != 3) continue;
        if (g_cdi_count == cap) {
            CdiRegion *bigger;
            cap *= 2;
            bigger = (CdiRegion *)realloc(g_cdi, (size_t)cap * sizeof *g_cdi);
            if (!bigger) break;
            g_cdi = bigger;
        }
        g_cdi[g_cdi_count].off = (s64)off;
        g_cdi[g_cdi_count].size = (s64)size;
        snprintf(g_cdi[g_cdi_count].host, sizeof g_cdi[g_cdi_count].host,
                 "%s/cdi/%s", dir, rel);
        g_cdi_count++;
    }
    fclose(fp);

    if (!g_cdi_count || !source[0]) {
        fprintf(stderr, "[disc] %s has no regions or no source line; ignored\n",
                path);
        free(g_cdi); g_cdi = NULL; g_cdi_count = 0;
        return;
    }
    qsort(g_cdi, (size_t)g_cdi_count, sizeof *g_cdi, cmp_cdi);

    /* Which disc file does this stand in for? Its own entry stays in
     * disc.manifest whether or not the file is still there, which is what
     * lets the archive be deleted once it is unpacked. */
    {
        int i;
        for (i = 0; i < g_file_count; i++)
            if (rel_matches(g_files[i].rel, source)) {
                g_cdi_disc_off = g_files[i].lba * SECTOR;
                g_cdi_size = declared ? declared : g_files[i].size;
                break;
            }
    }
    if (g_cdi_disc_off < 0) {
        fprintf(stderr, "[disc] %s says it replaces \"%s\", which is not in "
                        "disc.manifest; ignored\n", path, source);
        free(g_cdi); g_cdi = NULL; g_cdi_count = 0;
        return;
    }
    /* Check the layout now, at mount, rather than letting a bad region turn
     * into a frozen loading screen twenty minutes into a playtest. The game
     * reads assets by absolute offset and inflates them without checking for
     * errors, so the manifest has to tile the archive exactly: no gaps, no
     * overlaps, and every file the length it claims. Set SR_CDI_NOCHECK=1 to
     * skip the stat of every region. */
    if (!getenv("SR_CDI_NOCHECK")) {
        int i, bad = 0;
        s64 cur = 0;
        for (i = 0; i < g_cdi_count; i++) {
            const CdiRegion *r = &g_cdi[i];
            FILE *fp;
            s64 actual = -1;

            if (r->off > cur && bad < 10) {
                fprintf(stderr, "[disc] cdi.manifest leaves 0x%llx..0x%llx "
                        "uncovered (%lld bytes before %s)\n",
                        (unsigned long long)cur, (unsigned long long)r->off,
                        (long long)(r->off - cur), r->host);
                bad++;
            } else if (r->off < cur && bad < 10) {
                fprintf(stderr, "[disc] cdi.manifest overlaps at 0x%llx by "
                        "%lld bytes (%s)\n", (unsigned long long)r->off,
                        (long long)(cur - r->off), r->host);
                bad++;
            }
            if (r->off + r->size > cur) cur = r->off + r->size;

            fp = fopen(r->host, "rb");
            if (fp) {
                if (seek64(fp, 0, SEEK_END) == 0) actual = (s64)ftell(fp);
                fclose(fp);
            }
            if (actual != r->size && bad < 10) {
                if (actual < 0)
                    fprintf(stderr, "[disc] %s is missing\n", r->host);
                else
                    fprintf(stderr, "[disc] %s is %lld bytes, the manifest "
                            "says %lld -- an edited asset has to keep its "
                            "size\n", r->host, (long long)actual,
                            (long long)r->size);
                bad++;
            }
        }
        if (cur != g_cdi_size) {
            fprintf(stderr, "[disc] cdi.manifest covers %lld bytes, the "
                    "archive is %lld\n", (long long)cur, (long long)g_cdi_size);
            bad++;
        }
        if (bad) {
            fprintf(stderr, "[disc] %s does not describe %s correctly; "
                    "ignoring the extracted archive. Re-run "
                    "tools/cdiextract.py.\n", path, source);
            free(g_cdi); g_cdi = NULL; g_cdi_count = 0;
            g_cdi_disc_off = -1; g_cdi_size = 0;
            return;
        }
    }

    printf("[disc] extracted archive: %d regions standing in for %s, "
           "%lld bytes tiled exactly\n",
           g_cdi_count, source, (long long)g_cdi_size);
}

int iso_mount(const char *path)
{
    unsigned char pvd[SECTOR];

    if (g_iso) { fclose(g_iso); g_iso = NULL; }
    free(g_files); g_files = NULL; g_file_count = 0;
    free(g_cdi);   g_cdi = NULL;   g_cdi_count = 0;
    g_cdi_disc_off = -1;
    g_image_size = 0;
    g_declared_size = 0;

    if (path_is_dir(path)) {
        snprintf(g_dir, sizeof g_dir, "%s", path);
        if (!manifest_load(path)) return 0;
        cdi_load(path);          /* optional; absent = read the archive whole */
        {
            int i, missing = 0;
            for (i = 0; i < g_file_count; i++) {
                FILE *t;
                if (g_cdi_count && g_files[i].lba * SECTOR == g_cdi_disc_off)
                    continue;                    /* unpacked; served from cdi/ */
                t = fopen(g_files[i].host, "rb");
                if (t) { fclose(t); continue; }
                fprintf(stderr, "[disc] manifest lists %s but it is not there\n",
                        g_files[i].host);
                missing++;
            }
            if (missing)
                fprintf(stderr, "[disc] %d of %d files missing; reads of those "
                                "will fail\n", missing, g_file_count);
        }
        return 1;
    }

    g_iso = fopen(path, "rb");
    if (!g_iso) return 0;

    if (fseek(g_iso, 16 * SECTOR, SEEK_SET) != 0
        || fread(pvd, 1, SECTOR, g_iso) != SECTOR) {
        fclose(g_iso); g_iso = NULL; return 0;
    }
    /* "CD001" and descriptor type 1 == Primary Volume Descriptor */
    if (pvd[0] != 1 || memcmp(pvd + 1, "CD001", 5) != 0) {
        fclose(g_iso); g_iso = NULL; return 0;
    }
    g_root_extent = rd32le(pvd + 156 + 2);
    g_root_size   = rd32le(pvd + 156 + 10);

    if (seek64(g_iso, 0, SEEK_END) == 0) g_image_size = tell64(g_iso);
    return 1;
}

int iso_mounted(void) { return g_iso != NULL || g_file_count > 0; }

int iso_is_directory(void) { return g_file_count > 0; }

s64 iso_image_size(void) { return g_image_size; }

/* Case-insensitive compare of one path component against a directory record
 * name, ignoring the ";1" version suffix ISO9660 appends to files. */
static int name_matches(const unsigned char *rec_name, int rec_len,
                        const char *want, int want_len)
{
    int i;
    if (rec_len > 2 && rec_name[rec_len - 2] == ';') rec_len -= 2;
    if (rec_len != want_len) return 0;
    for (i = 0; i < rec_len; i++) {
        int a = rec_name[i], b = (unsigned char)want[i];
        if (a >= 'a' && a <= 'z') a -= 32;
        if (b >= 'a' && b <= 'z') b -= 32;
        if (a != b) return 0;
    }
    return 1;
}

static int find_in_dir(s64 extent, s64 dir_size, const char *name, int name_len,
                       s64 *out_extent, s64 *out_size, int *out_is_dir)
{
    unsigned char *buf;
    s64 pos = 0;
    int found = 0;

    if (dir_size <= 0 || dir_size > (16 << 20)) return 0;
    buf = (unsigned char *)malloc((size_t)dir_size);
    if (!buf) return 0;
    if (seek64(g_iso, extent * SECTOR, SEEK_SET) != 0
        || fread(buf, 1, (size_t)dir_size, g_iso) != (size_t)dir_size) {
        free(buf);
        return 0;
    }

    while (pos < dir_size) {
        unsigned char *r = buf + pos;
        int len = r[0];
        if (len == 0) {
            /* records never straddle a sector boundary; skip the padding */
            pos = ((pos / SECTOR) + 1) * SECTOR;
            continue;
        }
        if (pos + len > dir_size) break;
        if (name_matches(r + 33, r[32], name, name_len)) {
            *out_extent = rd32le(r + 2);
            *out_size = rd32le(r + 10);
            *out_is_dir = (r[25] & 0x02) ? 1 : 0;
            found = 1;
            break;
        }
        pos += len;
    }
    free(buf);
    return found;
}

/* Case-insensitive path compare that treats '\' and '/' alike, so a manifest
 * written on either platform matches what the guest asks for. */
static int rel_matches(const char *a, const char *b)
{
    for (;;) {
        int x = (unsigned char)*a++, y = (unsigned char)*b++;
        if (x == '\\') x = '/';
        if (y == '\\') y = '/';
        if (x >= 'a' && x <= 'z') x -= 32;
        if (y >= 'a' && y <= 'z') y -= 32;
        if (x != y) return 0;
        if (!x) return 1;
    }
}

int iso_find(const char *path, s64 *out_offset, s64 *out_size)
{
    s64 extent, size;
    const char *p = path;

    while (*p == '/') p++;

    if (g_file_count) {
        int i;
        for (i = 0; i < g_file_count; i++)
            if (rel_matches(g_files[i].rel, p)) {
                *out_offset = g_files[i].lba * SECTOR;
                *out_size = g_files[i].size;
                return 1;
            }
        return 0;
    }

    if (!g_iso) return 0;
    extent = g_root_extent;
    size = g_root_size;
    while (*p) {
        const char *slash = strchr(p, '/');
        int len = slash ? (int)(slash - p) : (int)strlen(p);
        s64 e = 0, s = 0;
        int is_dir = 0;
        if (len <= 0) break;
        if (!find_in_dir(extent, size, p, len, &e, &s, &is_dir)) return 0;
        extent = e;
        size = s;
        if (!slash) {
            if (is_dir) return 0;
            *out_offset = extent * SECTOR;
            *out_size = size;
            return 1;
        }
        if (!is_dir) return 0;
        p = slash + 1;
    }
    return 0;
}

/* Which extracted file covers this absolute disc offset? The extent runs to
 * the end of the file's last SECTOR, not to its size: a read that spills into
 * that padding is normal (the game rounds its windows up), and the padding
 * reads as zero, exactly as it did on the disc. */
static const DiscFile *file_at(s64 offset)
{
    int lo = 0, hi = g_file_count;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (g_files[mid].lba * SECTOR <= offset) lo = mid + 1;
        else hi = mid;
    }
    if (lo <= 0) return NULL;
    {
        const DiscFile *f = &g_files[lo - 1];
        s64 start = f->lba * SECTOR;
        s64 end = start + ((f->size + SECTOR - 1) / SECTOR) * SECTOR;
        return (offset < end) ? f : NULL;
    }
}

/* One region of the extracted archive, by archive offset. */
static const CdiRegion *cdi_at(s64 off)
{
    int lo = 0, hi = g_cdi_count;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (g_cdi[mid].off <= off) lo = mid + 1;
        else hi = mid;
    }
    if (lo <= 0) return NULL;
    {
        const CdiRegion *r = &g_cdi[lo - 1];
        return (off < r->off + r->size) ? r : NULL;
    }
}

/* Every byte handed back here has to be the byte that was on the disc. The
 * game inflates these regions with its own zlib and never checks the return
 * value -- CDI_Decompress_v121 loops until inflate() reports Z_STREAM_END, so
 * one wrong byte is an infinite loading screen with nothing in the log. An
 * earlier version zero-filled a short asset to keep a load going; that traded
 * a one-line diagnosis for an unfindable hang. Fail loudly instead. */
static int cdi_pread(s64 arc_off, unsigned char *out, u32 length)
{
    u32 done = 0;
    while (done < length) {
        const CdiRegion *r = cdi_at(arc_off + done);
        s64 within;
        u32 want;
        size_t got;
        FILE *fp;

        if (!r) {
            fprintf(stderr, "[disc] archive offset 0x%llx is not covered by "
                    "any region in cdi.manifest (%u bytes into a %u-byte read "
                    "at 0x%llx)\n", (unsigned long long)(arc_off + done),
                    done, length, (unsigned long long)arc_off);
            return 0;
        }
        within = (arc_off + done) - r->off;
        want = length - done;
        if ((s64)want > r->size - within) want = (u32)(r->size - within);

        fp = fopen(r->host, "rb");
        if (!fp) {
            fprintf(stderr, "[disc] missing asset %s\n", r->host);
            return 0;
        }
        if (seek64(fp, within, SEEK_SET) != 0) { fclose(fp); return 0; }
        got = fread(out + done, 1, want, fp);
        fclose(fp);
        if (got < want) {
            fprintf(stderr,
                    "[disc] %s is short: wanted %u bytes at %lld, got %llu. "
                    "It must stay exactly %lld bytes -- an edited asset cannot "
                    "change size, because the game addresses assets by "
                    "absolute offset.\n", r->host, want, (long long)within,
                    (unsigned long long)got, (long long)r->size);
            return 0;
        }
        done += want;
    }
    return 1;
}

static int tree_pread(s64 offset, unsigned char *out, u32 length)
{
    u32 done = 0;
    while (done < length) {
        const DiscFile *f = file_at(offset + done);
        s64 within, avail;
        u32 want;
        size_t got;
        FILE *fp;

        if (!f) return 0;                      /* nothing mapped there */
        within = (offset + done) - f->lba * SECTOR;
        avail = f->size - within;
        want = length - done;

        /* Past the declared size but inside the extent: sector padding. */
        if (avail <= 0) {
            s64 pad_end = ((f->size + SECTOR - 1) / SECTOR) * SECTOR;
            u32 pad = (u32)(pad_end - within);
            if (pad > want) pad = want;
            if (!pad) return 0;
            memset(out + done, 0, pad);
            done += pad;
            continue;
        }
        if ((s64)want > avail) want = (u32)avail;

        fp = fopen(f->host, "rb");
        if (!fp) return 0;
        if (seek64(fp, within, SEEK_SET) != 0) { fclose(fp); return 0; }
        got = fread(out + done, 1, want, fp);
        fclose(fp);
        if (got == 0) return 0;
        done += (u32)got;
    }
    return 1;
}

int iso_pread(s64 offset, void *dst, u32 length)
{
    unsigned char *out = (unsigned char *)dst;
    u32 done = 0;

    /* Three backings, and a read may straddle them, so dispatch per range
     * rather than per call. The extracted archive wins inside its extent --
     * that is what lets the archive file itself be deleted. */
    while (done < length) {
        s64 at = offset + done;
        u32 want = length - done;

        if (g_cdi_count && at >= g_cdi_disc_off
                        && at < g_cdi_disc_off + g_cdi_size) {
            s64 room = g_cdi_disc_off + g_cdi_size - at;
            if ((s64)want > room) want = (u32)room;
            if (!cdi_pread(at - g_cdi_disc_off, out + done, want)) return 0;
        } else if (g_file_count) {
            const DiscFile *f = file_at(at);
            if (f && g_cdi_count && f->lba * SECTOR == g_cdi_disc_off) return 0;
            if (!tree_pread(at, out + done, want)) return 0;
        } else {
            if (!g_iso) return 0;
            if (seek64(g_iso, at, SEEK_SET) != 0) return 0;
            {
                size_t got = fread(out + done, 1, want, g_iso);
                if (got != want) return 0;
            }
        }
        done += want;
    }
    return 1;
}

int iso_read(s64 offset, u8 *ram, u32 guest_addr, u32 length)
{
    unsigned char chunk[8192];
    u32 done = 0;

    if (!iso_mounted()) return 0;
    while (done < length) {
        u32 want = length - done;
        u32 i;
        if (want > sizeof chunk) want = (u32)sizeof chunk;
        if (!iso_pread(offset + done, chunk, want)) return 0;
        for (i = 0; i < want; i++)
            mem_w8(ram, guest_addr + done + i, chunk[i]);
        done += want;
    }
    return 1;
}
