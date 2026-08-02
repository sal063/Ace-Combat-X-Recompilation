/* runtime/hle/savedata.c -- sceUtilitySavedata worker; utility_dialog.c calls
 * savedata_execute() synchronously at InitStart and reports its result.
 *
 * Saves are stored PLAINTEXT under a host dir standing in for
 * ms0:/PSP/SAVEDATA/ (no PSP encryption/signing); the secure read/write modes
 * still round-trip byte-identical, so the game cannot tell.
 * Title facts: SIZES for an absent named save must zero the data block and
 * return SIZES_NO_DATA (else the profile FSM treats a fresh pilot as an
 * overwrite); bind status is written back on every successful load; saves are
 * stamped with sceWlanGetEtherAddr's MAC, which must stay constant across
 * runs (fixed constant in misc.c).
 */

#include "hle.h"
#include "sce_errors.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <direct.h>
#endif

/* --- SceUtilitySavedataParam offsets (PPSSPP SavedataParam; note the
 * abortStatus word at 0x5CC that earlier ports dropped, shifting the rest) */
#define SDP_MODE          0x30u
#define SDP_BIND          0x34u
#define SDP_OVERWRITE     0x38u
#define SDP_GAMENAME      0x3Cu   /* char[13] + 3 pad  */
#define SDP_SAVENAME      0x4Cu   /* char[20]          */
#define SDP_SAVENAMELIST  0x60u   /* ptr to char[20][], "" terminated */
#define SDP_FILENAME      0x64u   /* char[13] + 3 pad  */
#define SDP_DATABUF       0x74u
#define SDP_DATABUFSIZE   0x78u
#define SDP_DATASIZE      0x7Cu
#define SDP_SFO_TITLE     0x80u   /* char[128]  */
#define SDP_SFO_SAVETITLE 0x100u  /* char[128]  */
#define SDP_SFO_DETAIL    0x180u  /* char[1024] */
#define SDP_SFO_PARENTAL  0x580u  /* u8         */
#define SDP_ICON0         0x584u  /* {bufAddr, bufSize, size, unk} */
#define SDP_ICON1         0x594u
#define SDP_PIC1          0x5A4u
#define SDP_SND0          0x5B4u
#define SDP_MSFREE        0x5D0u
#define SDP_MSDATA        0x5D4u
#define SDP_UTILITYDATA   0x5D8u
#define SDP_KEY           0x5DCu  /* u8[16] */
#define SDP_IDLIST        0x5F4u
#define SDP_FILELIST      0x5F8u
#define SDP_SIZEADDR      0x5FCu

/* --- modes (utility_savedata.h, via PPSSPP) ----------------------------- */
enum {
    SD_AUTOLOAD = 0,  SD_AUTOSAVE = 1,  SD_LOAD = 2,        SD_SAVE = 3,
    SD_LISTLOAD = 4,  SD_LISTSAVE = 5,  SD_LISTDELETE = 6,  SD_DELETE = 7,
    SD_SIZES = 8,     SD_AUTODELETE = 9, SD_SINGLEDELETE = 10, SD_LIST = 11,
    SD_FILES = 12,    SD_MAKEDATASECURE = 13, SD_MAKEDATA = 14,
    SD_READDATASECURE = 15, SD_READDATA = 16,
    SD_WRITEDATASECURE = 17, SD_WRITEDATA = 18,
    SD_ERASESECURE = 19, SD_ERASE = 20, SD_DELETEDATA = 21, SD_GETSIZE = 22
};

/* --- result codes ------------------------------------------------------- */
#define SD_ERR_LOAD_NO_DATA     0x80110301u
#define SD_ERR_LOAD_DATA_BROKEN 0x80110306u
#define SD_ERR_SAVE_MS_NOSPACE  0x80110401u
#define SD_ERR_DELETE_NO_DATA   0x80110601u
#define SD_ERR_SIZES_NO_DATA    0x801103C7u
#define SD_ERR_RW_NO_DATA       0x80110701u
#define SD_ERR_RW_BAD_PARAMS    0x80110708u

#define SD_BIND_OK              1   /* SCE_UTILITY_SAVEDATA_BIND_OK */

/* --- host paths --------------------------------------------------------- */

static const char *ms_root(void)
{
    const char *e = getenv("PSPRECO_MEMSTICK");
    return (e && e[0]) ? e : "memstick";
}

static void read_guest_str(u8 *ram, u32 addr, char *out, int cap)
{
    int i;
    for (i = 0; i < cap - 1; i++) {
        char ch = (char)mem_r8(ram, addr + (u32)i);
        out[i] = ch;
        if (!ch) break;
    }
    out[cap - 1] = '\0';
    out[i < cap - 1 ? i : cap - 1] = '\0';
}

/* Directory for gameName+saveName; also creates parents when `make` is set. */
static void save_dir(u8 *ram, u32 param, const char *savename,
                     char *out, size_t cap, int make)
{
    char game[16];
    read_guest_str(ram, param + SDP_GAMENAME, game, sizeof game);
    if (make) {
        char p[512];
        snprintf(p, sizeof p, "%s", ms_root());               _mkdir(p);
        snprintf(p, sizeof p, "%s/PSP", ms_root());           _mkdir(p);
        snprintf(p, sizeof p, "%s/PSP/SAVEDATA", ms_root());  _mkdir(p);
    }
    snprintf(out, cap, "%s/PSP/SAVEDATA/%s%s", ms_root(), game, savename);
    if (make) _mkdir(out);
}

static int dir_exists(const char *path)
{
#ifdef _WIN32
    DWORD a = GetFileAttributesA(path);
    return a != INVALID_FILE_ATTRIBUTES && (a & FILE_ATTRIBUTE_DIRECTORY);
#else
    FILE *f = fopen(path, "r");
    if (f) fclose(f);
    return f != NULL;
#endif
}

static long file_size(const char *path)
{
    long sz;
    FILE *f = fopen(path, "rb");
    if (!f) return -1;
    fseek(f, 0, SEEK_END);
    sz = ftell(f);
    fclose(f);
    return sz;
}

/* "<>" (or empty) saveName picks the first saveNameList entry whose dir
 * exists, else the first entry; there is no host UI, the auto-pick is the
 * whole dialog. */
static void resolve_savename(u8 *ram, u32 param, char *out, int cap)
{
    read_guest_str(ram, param + SDP_SAVENAME, out, cap);
    if (out[0] && strcmp(out, "<>") != 0) return;
    {
        u32 list = mem_r32(ram, param + SDP_SAVENAMELIST);
        char first[24];
        int have_first = 0;
        first[0] = '\0';
        while (list) {
            char name[24], dir[512];
            read_guest_str(ram, list, name, sizeof name);
            if (!name[0]) break;
            if (!have_first) { snprintf(first, sizeof first, "%s", name); have_first = 1; }
            save_dir(ram, param, name, dir, sizeof dir, 0);
            if (dir_exists(dir)) { snprintf(out, (size_t)cap, "%s", name); return; }
            list += 20u;
        }
        if (have_first) snprintf(out, (size_t)cap, "%s", first);
    }
}

/* --- PARAM.SFO (PSF v1.1) ----------------------------------------------- */
/* Keys must be alphabetically sorted per the format. SAVEDATA_FILE_LIST and
 * SAVEDATA_PARAMS are zeroed blocks: plaintext saves carry no CMAC. */
static void sfo_put(u8 **kp, u8 **vp, u16 *keyofs, u32 *valofs, int *n,
                    u8 *keys, u8 *vals, const char *key,
                    const void *val, u32 len, u32 maxlen, int fmt)
{
    (void)fmt;
    keyofs[*n] = (u16)(*kp - keys);
    valofs[(*n) * 3 + 0] = len;
    valofs[(*n) * 3 + 1] = maxlen;
    valofs[(*n) * 3 + 2] = (u32)(*vp - vals);
    memcpy(*kp, key, strlen(key) + 1);
    *kp += strlen(key) + 1;
    memcpy(*vp, val, len);
    memset(*vp + len, 0, maxlen - len);
    *vp += maxlen;
    (*n)++;
}

static void write_param_sfo(u8 *ram, u32 param, const char *dir)
{
    char path[560], game[16], savename[24];
    char title[128], stitle[128], detail[1024];
    u8 keys[256], vals[8192];
    u16 keyofs[8];
    u32 valofs[8 * 3];
    u8 *kp = keys, *vp = vals;
    int n = 0, i;
    u32 parental = mem_r8(ram, param + SDP_SFO_PARENTAL);
    static const u8 zeros3168[3168];
    static const u8 zeros128[128];
    FILE *f;

    read_guest_str(ram, param + SDP_GAMENAME, game, sizeof game);
    read_guest_str(ram, param + SDP_SAVENAME, savename, sizeof savename);
    read_guest_str(ram, param + SDP_SFO_TITLE, title, sizeof title);
    read_guest_str(ram, param + SDP_SFO_SAVETITLE, stitle, sizeof stitle);
    read_guest_str(ram, param + SDP_SFO_DETAIL, detail, sizeof detail);

    {
        char dirname[40];
        snprintf(dirname, sizeof dirname, "%s%s", game, savename);
        /* Alphabetical order. Formats: 0x0404 int, 0x0204 utf8, 0x0004 bin */
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "CATEGORY",
                "MS", 3, 4, 0x0204);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "PARENTAL_LEVEL",
                &parental, 4, 4, 0x0404);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "SAVEDATA_DETAIL",
                detail, (u32)strlen(detail) + 1, 1024, 0x0204);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "SAVEDATA_DIRECTORY",
                dirname, (u32)strlen(dirname) + 1, 64, 0x0204);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "SAVEDATA_FILE_LIST",
                zeros3168, 3168, 3168, 0x0004);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "SAVEDATA_PARAMS",
                zeros128, 128, 128, 0x0004);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "SAVEDATA_TITLE",
                stitle, (u32)strlen(stitle) + 1, 128, 0x0204);
        sfo_put(&kp, &vp, keyofs, valofs, &n, keys, vals, "TITLE",
                title, (u32)strlen(title) + 1, 128, 0x0204);
    }

    snprintf(path, sizeof path, "%s/PARAM.SFO", dir);
    f = fopen(path, "wb");
    if (!f) return;
    {
        u32 keylen = (u32)(kp - keys);
        u32 keylen_pad = (keylen + 3u) & ~3u;
        u32 hdr[5];
        static const int fmts[8] =
            { 0x0204, 0x0404, 0x0204, 0x0204, 0x0004, 0x0004, 0x0204, 0x0204 };
        hdr[0] = 0x46535000u;              /* "\0PSF" */
        hdr[1] = 0x00000101u;              /* v1.1 */
        hdr[2] = 20u + (u32)n * 16u;       /* key table offset */
        hdr[3] = hdr[2] + keylen_pad;      /* value table offset */
        hdr[4] = (u32)n;
        fwrite(hdr, 4, 5, f);
        for (i = 0; i < n; i++) {
            u16 e16[2];
            u32 e32[3];
            e16[0] = keyofs[i];
            e16[1] = (u16)fmts[i];
            e32[0] = valofs[i * 3 + 0];
            e32[1] = valofs[i * 3 + 1];
            e32[2] = valofs[i * 3 + 2];
            fwrite(e16, 2, 2, f);
            fwrite(e32, 4, 3, f);
        }
        fwrite(keys, 1, keylen, f);
        for (i = 0; i < (int)(keylen_pad - keylen); i++) fputc(0, f);
        fwrite(vals, 1, (size_t)(vp - vals), f);
    }
    fclose(f);
}

/* --- icon / pic / snd blobs --------------------------------------------- */
static void write_blob(u8 *ram, u32 rec, const char *dir, const char *name)
{
    u32 buf = mem_r32(ram, rec + 0), size = mem_r32(ram, rec + 8);
    char path[560];
    FILE *f;
    u32 i;
    if (!buf || !size || size > 4u * 1024u * 1024u) return;
    snprintf(path, sizeof path, "%s/%s", dir, name);
    f = fopen(path, "wb");
    if (!f) return;
    for (i = 0; i < size; i++) fputc((int)mem_r8(ram, buf + i), f);
    fclose(f);
}

/* --- save / load / delete ----------------------------------------------- */

static u32 do_save(u8 *ram, u32 param, const char *savename)
{
    char dir[512], path[560], fname[16];
    u32 buf = mem_r32(ram, param + SDP_DATABUF);
    u32 size = mem_r32(ram, param + SDP_DATASIZE);
    FILE *f;
    u32 i;

    save_dir(ram, param, savename, dir, sizeof dir, 1);
    read_guest_str(ram, param + SDP_FILENAME, fname, sizeof fname);
    if (!fname[0]) snprintf(fname, sizeof fname, "DATA.BIN");

    snprintf(path, sizeof path, "%s/%s", dir, fname);
    f = fopen(path, "wb");
    if (!f) return SD_ERR_SAVE_MS_NOSPACE;
    for (i = 0; i < size; i++) fputc((int)mem_r8(ram, buf + i), f);
    fclose(f);

    write_param_sfo(ram, param, dir);
    write_blob(ram, param + SDP_ICON0, dir, "ICON0.PNG");
    write_blob(ram, param + SDP_ICON1, dir, "ICON1.PMF");
    write_blob(ram, param + SDP_PIC1, dir, "PIC1.PNG");
    write_blob(ram, param + SDP_SND0, dir, "SND0.AT3");
    hle_log("[hle] savedata: wrote %s (%u bytes)", path, size);
    return 0;
}

static u32 do_load(u8 *ram, u32 param, const char *savename, int rw_mode)
{
    char dir[512], path[560], fname[16];
    u32 buf = mem_r32(ram, param + SDP_DATABUF);
    u32 cap = mem_r32(ram, param + SDP_DATABUFSIZE);
    long sz;
    FILE *f;
    u32 i, n;

    save_dir(ram, param, savename, dir, sizeof dir, 0);
    read_guest_str(ram, param + SDP_FILENAME, fname, sizeof fname);
    if (!fname[0]) snprintf(fname, sizeof fname, "DATA.BIN");
    snprintf(path, sizeof path, "%s/%s", dir, fname);

    sz = file_size(path);
    if (sz < 0)
        return rw_mode ? SD_ERR_RW_NO_DATA : SD_ERR_LOAD_NO_DATA;
    if (!buf) return rw_mode ? SD_ERR_RW_BAD_PARAMS : SD_ERR_LOAD_DATA_BROKEN;

    n = (u32)sz;
    if (cap && n > cap) n = cap;
    f = fopen(path, "rb");
    if (!f) return rw_mode ? SD_ERR_RW_NO_DATA : SD_ERR_LOAD_NO_DATA;
    for (i = 0; i < n; i++) {
        int ch = fgetc(f);
        if (ch < 0) break;
        mem_w8(ram, buf + i, (u32)ch);
    }
    fclose(f);
    mem_w32(ram, param + SDP_DATASIZE, i);
    mem_w32(ram, param + SDP_BIND, SD_BIND_OK);
    hle_log("[hle] savedata: read %s (%u bytes)", path, i);
    return 0;
}

static u32 do_delete(u8 *ram, u32 param, const char *savename)
{
#ifdef _WIN32
    char dir[512], pat[560];
    WIN32_FIND_DATAA fd;
    HANDLE h;

    save_dir(ram, param, savename, dir, sizeof dir, 0);
    if (!dir_exists(dir)) return SD_ERR_DELETE_NO_DATA;
    snprintf(pat, sizeof pat, "%s/*", dir);
    h = FindFirstFileA(pat, &fd);
    if (h != INVALID_HANDLE_VALUE) {
        do {
            char p[820];
            if (fd.cFileName[0] == '.') continue;
            snprintf(p, sizeof p, "%s/%s", dir, fd.cFileName);
            DeleteFileA(p);
        } while (FindNextFileA(h, &fd));
        FindClose(h);
    }
    RemoveDirectoryA(dir);
    return 0;
#else
    (void)ram; (void)param; (void)savename;
    return SD_ERR_DELETE_NO_DATA;
#endif
}

/* --- SIZES / GETSIZE ---------------------------------------------------- */
/* Free space is a fat constant (1 GB in 32 KB clusters): only has to be big
 * enough that the game never refuses to save. */
#define MS_CLUSTER 32768u
#define MS_FREE_CLUSTERS 32768u          /* 1 GB */

static u32 dir_used_bytes(const char *dir)
{
#ifdef _WIN32
    char pat[560];
    WIN32_FIND_DATAA fd;
    HANDLE h;
    u32 total = 0;
    snprintf(pat, sizeof pat, "%s/*", dir);
    h = FindFirstFileA(pat, &fd);
    if (h == INVALID_HANDLE_VALUE) return 0;
    do {
        if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
            total += (u32)fd.nFileSizeLow;
    } while (FindNextFileA(h, &fd));
    FindClose(h);
    return total;
#else
    (void)dir;
    return 0;
#endif
}

static u32 do_sizes(u8 *ram, u32 param, const char *savename)
{
    u32 pfree = mem_r32(ram, param + SDP_MSFREE);
    u32 pdata = mem_r32(ram, param + SDP_MSDATA);
    u32 putil = mem_r32(ram, param + SDP_UTILITYDATA);
    char dir[512];
    int exists = 0;
    u32 used = 0;

    /* SIZES fills whichever of pMs / pMsData / pUtilityData the game
     * supplied; the save to size up is named inside the pMsData block
     * (titleId[13]+pad at +0, userId[20] at +16). */
    dir[0] = '\0';
    if (pdata) {
        char g2[16], s2[24];
        read_guest_str(ram, pdata + 0u, g2, sizeof g2);
        read_guest_str(ram, pdata + 16u, s2, sizeof s2);
        if (g2[0])
            snprintf(dir, sizeof dir, "%s/PSP/SAVEDATA/%s%s",
                     ms_root(), g2, s2);
        else
            save_dir(ram, param, savename, dir, sizeof dir, 0);
        exists = dir_exists(dir);
        used = exists ? dir_used_bytes(dir) : 0;
    }
    hle_log("[hle] savedata SIZES pMs=%08x pMsData=%08x pUtil=%08x "
            "dir=\"%s\" exists=%d used=%u",
            pfree, pdata, putil, dir, exists, used);

    if (pfree) {
        char s[16];
        int i;
        memset(s, 0, sizeof s);
        mem_w32(ram, pfree + 0, MS_CLUSTER);           /* cluster size   */
        mem_w32(ram, pfree + 4, MS_FREE_CLUSTERS);     /* free clusters  */
        mem_w32(ram, pfree + 8, MS_FREE_CLUSTERS * (MS_CLUSTER / 1024u));
        snprintf(s, sizeof s, "%u MB",
                 (MS_FREE_CLUSTERS * (MS_CLUSTER / 1024u)) / 1024u);
        for (i = 0; i < 8; i++) mem_w8(ram, pfree + 12u + (u32)i, (u8)s[i]);
    }
    if (pdata) {
        /* Out block after the 36-byte name input: +36 usedClusters,
         * +40 usedSpaceKB, +44 str[8], +52 usedSpace32KB, +56 str[8].
         * For an absent save the whole block reads zero. */
        u32 kb = (used + 1023u) / 1024u;
        u32 clusters = (used + MS_CLUSTER - 1u) / MS_CLUSTER;
        u32 kb32 = (kb + 31u) & ~31u;
        char s[16], s32b[16];
        int i;
        memset(s, 0, sizeof s);
        memset(s32b, 0, sizeof s32b);
        if (exists) {
            snprintf(s, sizeof s, "%uKB", kb);
            snprintf(s32b, sizeof s32b, "%uKB", kb32);
        } else {
            clusters = kb = kb32 = 0;
        }
        mem_w32(ram, pdata + 36u, clusters);
        mem_w32(ram, pdata + 40u, kb);
        for (i = 0; i < 8; i++) mem_w8(ram, pdata + 44u + (u32)i, (u8)s[i]);
        mem_w32(ram, pdata + 52u, kb32);
        for (i = 0; i < 8; i++) mem_w8(ram, pdata + 56u + (u32)i, (u8)s32b[i]);
    }
    if (putil) {
        u32 need_kb = 4u + 32u;   /* a slot's worth; generous constant */
        char s[16];
        int i;
        memset(s, 0, sizeof s);
        mem_w32(ram, putil + 0, (need_kb + 31u) / 32u); /* clusters */
        mem_w32(ram, putil + 4, need_kb);
        snprintf(s, sizeof s, "%uKB", need_kb);
        for (i = 0; i < 8; i++) mem_w8(ram, putil + 8u + (u32)i, (u8)s[i]);
        mem_w32(ram, putil + 16u, (need_kb + 31u) & ~31u);
        for (i = 0; i < 8; i++) mem_w8(ram, putil + 20u + (u32)i, (u8)s[i]);
    }
    /* SIZES_NO_DATA only when pMsData names an absent save; a free-space-only
     * query (pMsData == NULL) must succeed. */
    return (pdata && !exists) ? SD_ERR_SIZES_NO_DATA : 0;
}

/* --- MC_CHECKSIZE (mode 22) --------------------------------------------- */
/* Reports cluster geometry, free space, and space LACKING for create and
 * overwrite; with the fat synthetic free space both shortfalls are zero. */
static u32 do_checksize(u8 *ram, u32 param)
{
    u32 p = mem_r32(ram, param + SDP_SIZEADDR);
    char s[16];
    int i;
    if (!p) return 0;
    memset(s, 0, sizeof s);
    snprintf(s, sizeof s, "%u MB",
             (MS_FREE_CLUSTERS * (MS_CLUSTER / 1024u)) / 1024u);
    mem_w32(ram, p + 16u, MS_CLUSTER);           /* msClusterSizeByte */
    mem_w32(ram, p + 20u, MS_FREE_CLUSTERS);     /* msFreeCluster     */
    mem_w32(ram, p + 24u, MS_FREE_CLUSTERS * (MS_CLUSTER / 1024u));
    for (i = 0; i < 8; i++) mem_w8(ram, p + 28u + (u32)i, (u8)s[i]);
    memset(s, 0, sizeof s);
    snprintf(s, sizeof s, "0KB");
    mem_w32(ram, p + 36u, 0);                    /* createNeedSizeKB  */
    for (i = 0; i < 8; i++) mem_w8(ram, p + 40u + (u32)i, (u8)s[i]);
    mem_w32(ram, p + 48u, 0);                    /* overwriteNeedSizeKB */
    for (i = 0; i < 8; i++) mem_w8(ram, p + 52u + (u32)i, (u8)s[i]);
    return 0;
}

/* --- LIST (mode 11) ----------------------------------------------------- */
#ifdef _WIN32
static void filetime_to_psp(const FILETIME *ft, u8 *ram, u32 out)
{
    SYSTEMTIME st;
    FILETIME lt;
    FileTimeToLocalFileTime(ft, &lt);
    FileTimeToSystemTime(&lt, &st);
    mem_w16(ram, out + 0, st.wYear);
    mem_w16(ram, out + 2, st.wMonth);
    mem_w16(ram, out + 4, st.wDay);
    mem_w16(ram, out + 6, st.wHour);
    mem_w16(ram, out + 8, st.wMinute);
    mem_w16(ram, out + 10, st.wSecond);
    mem_w32(ram, out + 12, (u32)st.wMilliseconds * 1000u);
}
#endif

static u32 do_list(u8 *ram, u32 param)
{
#ifdef _WIN32
    u32 info = mem_r32(ram, param + SDP_IDLIST);
    u32 maxn, entries, count = 0;
    char game[16], spec[24], pat[560];
    WIN32_FIND_DATAA fd;
    HANDLE h;

    if (!info) return 0;
    maxn = mem_r32(ram, info + 0);
    entries = mem_r32(ram, info + 8);
    read_guest_str(ram, param + SDP_GAMENAME, game, sizeof game);
    read_guest_str(ram, param + SDP_SAVENAME, spec, sizeof spec);

    /* saveName is a suffix filter; FindFirstFile handles its trailing '*'. */
    snprintf(pat, sizeof pat, "%s/PSP/SAVEDATA/%s%s%s", ms_root(), game, spec,
             (spec[0] && spec[strlen(spec) - 1] == '*') ? "" : "");
    h = FindFirstFileA(pat, &fd);
    if (h != INVALID_HANDLE_VALUE) {
        do {
            u32 e;
            const char *dirname = fd.cFileName;
            size_t glen = strlen(game);
            if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) continue;
            if (dirname[0] == '.') continue;
            if (strlen(dirname) <= glen) continue;
            if (count >= maxn || !entries) { count++; continue; }
            /* SceUtilitySDUserIdStat: st_mode, three ScePspDateTime blocks
             * back to back, then userId[20]. */
            e = entries + count * 72u;
            mem_w32(ram, e + 0, 0x11FFu);              /* st_mode: dir rwx */
            filetime_to_psp(&fd.ftCreationTime, ram, e + 4);
            filetime_to_psp(&fd.ftLastAccessTime, ram, e + 20);
            filetime_to_psp(&fd.ftLastWriteTime, ram, e + 36);
            {
                int i;
                const char *sn = dirname + glen;       /* strip gameName */
                for (i = 0; i < 20; i++) {
                    mem_w8(ram, e + 52u + (u32)i, (u8)sn[i]);
                    if (!sn[i]) break;
                }
                for (; i < 20; i++) mem_w8(ram, e + 52u + (u32)i, 0);
            }
            count++;
        } while (FindNextFileA(h, &fd));
        FindClose(h);
    }
    mem_w32(ram, info + 4, count > maxn ? maxn : count);
    hle_log("[hle] savedata LIST \"%s\": %u entries", pat, count);
    return 0;
#else
    (void)ram; (void)param;
    return 0;
#endif
}

/* --- dispatcher --------------------------------------------------------- */

u32 savedata_execute(u8 *ram, u32 param)
{
    u32 mode = mem_r32(ram, param + SDP_MODE);
    char savename[24];
    u32 r;

    resolve_savename(ram, param, savename, sizeof savename);

    switch (mode) {
    case SD_AUTOSAVE: case SD_SAVE: case SD_LISTSAVE:
    case SD_MAKEDATASECURE: case SD_MAKEDATA:
    case SD_WRITEDATASECURE: case SD_WRITEDATA:
        r = do_save(ram, param, savename);
        break;

    case SD_AUTOLOAD: case SD_LOAD: case SD_LISTLOAD:
        r = do_load(ram, param, savename, 0);
        break;
    case SD_READDATASECURE: case SD_READDATA:
        r = do_load(ram, param, savename, 1);
        break;

    case SD_LISTDELETE: case SD_DELETE: case SD_AUTODELETE:
    case SD_SINGLEDELETE: case SD_DELETEDATA:
        r = do_delete(ram, param, savename);
        break;

    case SD_ERASESECURE: case SD_ERASE: {
        char dir[512], path[560], fname[16];
        save_dir(ram, param, savename, dir, sizeof dir, 0);
        read_guest_str(ram, param + SDP_FILENAME, fname, sizeof fname);
        if (!fname[0]) snprintf(fname, sizeof fname, "DATA.BIN");
        snprintf(path, sizeof path, "%s/%s", dir, fname);
        r = (remove(path) == 0) ? 0 : SD_ERR_DELETE_NO_DATA;
        break;
    }

    case SD_SIZES:
        r = do_sizes(ram, param, savename);
        break;

    case SD_GETSIZE:                    /* MC_CHECKSIZE */
        r = do_checksize(ram, param);
        break;

    case SD_LIST:
        r = do_list(ram, param);
        break;

    case SD_FILES:
        /* Nothing in this title's flow consumes FILES; report empty. */
        {
            u32 info = mem_r32(ram, param + SDP_FILELIST);
            if (info) {
                mem_w32(ram, info + 12u, 0);   /* resultNumSecureEntries */
                mem_w32(ram, info + 16u, 0);   /* resultNumNormalEntries */
                mem_w32(ram, info + 20u, 0);   /* resultNumSystemEntries */
            }
            r = 0;
        }
        break;

    default:
        hle_log("[hle] savedata: mode %u not modelled -> CANCELED", mode);
        r = 1;  /* SCE_UTILITY_COMMON_RESULT_CANCELED */
        break;
    }

    hle_log("[hle] savedata mode=%u save=\"%s\" -> %08x", mode, savename, r);
    return r;
}
