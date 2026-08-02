/* chpak_inflate -- run the game's own CHPAK loader tail on real archive bytes,
 * without booting the game.
 *
 *     chpak_inflate <archive.bin> [clobber_base_hex clobber_size_hex]
 *
 * The asset loader (func_089d73b4) memcpy's a CHPAK archive into the volatile
 * block at 0x08400000, then walks its members and hands each compressed one to
 * the zlib pump at func_089d6a6c. That pump only ever leaves its loop on
 * Z_STREAM_END: any other return value makes it delay 8333 us and call inflate
 * again, forever. So a single corrupted byte anywhere in a staged archive is
 * not a glitch, it is a permanent hang on the loading screen.
 *
 * That is exactly what happened while the interrupt stack lived at 0x08700000,
 * three megabytes inside the volatile block: every vblank wrote a stack frame
 * into the middle of any archive larger than 3 MB. The optional clobber
 * arguments reproduce it -- with `08700000 1000` the six largest archives fail
 * and everything smaller passes, which is the whole shape of the bug.
 *
 * Build (after `python build.py`, which leaves the objects in build/obj):
 *
 *     clang -std=c11 -O2 -ffp-contract=off -fno-strict-aliasing \
 *         -I runtime/cpu -I generated -I runtime/hle -I runtime/gpu \
 *         -D_CRT_SECURE_NO_WARNINGS -c tests/chpak_inflate.c -o build/chpak.o
 *     clang -O2 build/chpak.o <every build/obj object except main.o> \
 *         -o build/chpak_inflate.exe -lwinmm -luser32 -lmfplat -lmfuuid -lole32
 *
 * tests/chpak_check.py does all of that, extracts the archives from a disc
 * image and checks the results. Run that, not this, unless you are debugging.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pspreco.h"
#include "symbols.h"

u8 *g_ram;

#define LOAD_BASE 0x08804000u
#define GUEST_GP  (LOAD_BASE + 0x00269200u)
#define VER_STR   0x08a4bb24u                /* zlib 1.2.1 version string  */
#define VME       0x08400000u                /* sceKernelVolatileMemLock   */
#define VME_SIZE  0x00400000u
#define ZWORK     (VME + VME_SIZE - 0x10000u)  /* what func_089d5ee0 leaves */
#define OUTBUF    0x09256640u                /* where the read landed       */
#define STACKTOP  0x08380000u
#define STRM      0x08200000u
#define OPAQUE    0x08200100u
#define CHUNK     0x00010000u                /* obj[0x60e0], the pump's unit */

#define F_MEMCPY      0x08a19db8u
#define F_INFLATEINIT 0x08a07180u
#define F_INFLATE     0x08a074a0u
#define F_INFLATEEND  0x08a09e30u

#define ZALLOC 0x089d687cu
#define ZFREE  0x089d68d0u
#define ZWORK_PTR 0x08b90540u

static void gcall(CpuCtx *c, u32 addr)
{
    RecompFn f = recomp_lookup(addr);
    if (!f) {
        fprintf(stderr, "chpak_inflate: no recompiled function at %08x\n", addr);
        exit(2);
    }
    c->pc = addr;
    c->r[R_RA] = 0;
    c->r[R_SP] = STACKTOP;
    c->r[R_GP] = GUEST_GP;
    f(c, g_ram);
}

static u32 fnv(u32 base, u32 n)
{
    u32 h = 0x811c9dc5u, i;
    for (i = 0; i < n; i++) { h ^= mem_r8(g_ram, base + i); h *= 0x01000193u; }
    return h;
}

int main(int argc, char **argv)
{
    const char *arc = (argc > 1) ? argv[1] : NULL;
    FILE *fp; long sz; CpuCtx ctx; u32 cur, out, i;

    if (!arc) {
        fprintf(stderr, "usage: chpak_inflate <archive.bin> "
                        "[clobber_base_hex clobber_size_hex]\n");
        return 2;
    }
    setvbuf(stdout, NULL, _IONBF, 0);

    g_ram = (u8 *)calloc(1, PSP_RAM_SIZE);
    if (!g_ram) { fprintf(stderr, "chpak_inflate: out of memory\n"); return 1; }

    fp = fopen("generated/image.bin", "rb");
    if (!fp) { fprintf(stderr, "chpak_inflate: no generated/image.bin\n"); return 1; }
    fseek(fp, 0, SEEK_END); sz = ftell(fp); fseek(fp, 0, SEEK_SET);
    if (fread(g_ram + LOAD_BASE, 1, (size_t)sz, fp) != (size_t)sz) return 1;
    fclose(fp);

    /* The archive lands where sceIoReadAsync put it in the real run. */
    fp = fopen(arc, "rb");
    if (!fp) { fprintf(stderr, "chpak_inflate: cannot open %s\n", arc); return 1; }
    fseek(fp, 0, SEEK_END); sz = ftell(fp); fseek(fp, 0, SEEK_SET);
    {
        unsigned char *tmp = (unsigned char *)malloc((size_t)sz);
        if (!tmp || fread(tmp, 1, (size_t)sz, fp) != (size_t)sz) return 1;
        for (i = 0; i < (u32)sz; i++) mem_w8(g_ram, OUTBUF + i, tmp[i]);
        free(tmp);
    }
    fclose(fp);
    printf("archive %s: %ld bytes at %08x\n", arc, sz, OUTBUF);

    memset(&ctx, 0, sizeof ctx);
    ctx.fcr31 = 0x00000E00u;
    cpu_set_host_fpu_mode();

    /* func_089d5ee0's half: the zlib scratch is the top 64 KB of the block,
     * which is exactly the two 32 KB allocations inflate makes. */
    mem_w32(g_ram, ZWORK_PTR, ZWORK);

    /* memcpy(volatile, readbuf, size) -- guest code, as at 0x089d74c4. */
    ctx.r[R_A0] = VME; ctx.r[R_A1] = OUTBUF; ctx.r[R_A2] = (u32)sz;
    gcall(&ctx, F_MEMCPY);
    if (memcmp(g_ram + VME, g_ram + OUTBUF, (size_t)sz) != 0) {
        printf("  MEMCPY MISMATCH\n");
        return 1;
    }
    printf("  memcpy ok\n");

    /* Optional: scribble over a window of the staged archive, the way a
     * runtime structure living inside the volatile block would. */
    if (argc > 3) {
        u32 cb = (u32)strtoul(argv[2], NULL, 16);
        u32 cn = (u32)strtoul(argv[3], NULL, 16);
        for (i = 0; i < cn; i++) mem_w8(g_ram, cb + i, 0xA5);
        printf("  clobbered %08x..%08x\n", cb, cb + cn);
    }

    cur = VME;
    out = OUTBUF;
    for (i = 0; ; i++) {
        u32 msize, pay, unc, r, iter, total;

        if (mem_r32(g_ram, cur) == 0x44455453u) {   /* 'STED' */
            printf("  STED at %08x\n", cur);
            break;
        }
        msize = mem_r32(g_ram, cur + 0x10);
        pay   = cur + 0x14;
        if (mem_r32(g_ram, pay) != 0x2E464544u) {   /* 'DEF.' */
            printf("  m%u raw msize=%08x\n", i, msize);
            cur += msize + 0x10;
            continue;
        }
        unc = mem_r32(g_ram, pay + 8);

        /* func_089d6a6c, with a bail-out where the guest spins forever. */
        for (r = 0; r < 0x38u; r += 4) mem_w32(g_ram, STRM + r, 0);
        mem_w32(g_ram, OPAQUE, 0);
        mem_w32(g_ram, STRM + 0x20, ZALLOC);
        mem_w32(g_ram, STRM + 0x24, ZFREE);
        mem_w32(g_ram, STRM + 0x28, OPAQUE);
        ctx.r[R_A0] = STRM; ctx.r[R_A1] = VER_STR; ctx.r[R_A2] = 0x38;
        gcall(&ctx, F_INFLATEINIT);
        if ((int)ctx.r[R_V0] != 0) {
            printf("  m%u inflateInit_ -> %d\n", i, (int)ctx.r[R_V0]);
            return 3;
        }
        mem_w32(g_ram, STRM + 0x00, pay + 0x10);    /* next_in   */
        mem_w32(g_ram, STRM + 0x04, CHUNK);         /* avail_in  */
        mem_w32(g_ram, STRM + 0x0c, out);           /* next_out  */
        mem_w32(g_ram, STRM + 0x10, CHUNK);         /* avail_out */
        r = 0;
        for (iter = 0; iter < 2000000u; iter++) {
            int rv;
            if (mem_r32(g_ram, STRM + 0x04) == 0) mem_w32(g_ram, STRM + 0x04, CHUNK);
            ctx.r[R_A0] = STRM; ctx.r[R_A1] = 0;
            gcall(&ctx, F_INFLATE);
            rv = (int)ctx.r[R_V0];
            if (rv == 1) { r = 1; break; }          /* Z_STREAM_END */
            if (mem_r32(g_ram, STRM + 0x10) == 0) mem_w32(g_ram, STRM + 0x10, CHUNK);
            if (rv != 0) {
                u32 msg = mem_r32(g_ram, STRM + 0x18);
                printf("  m%u inflate -> %d after %u calls, msg=%08x \"%s\"\n",
                       i, rv, iter, msg,
                       msg ? (const char *)(g_ram + (msg & PSP_ADDR_MASK)) : "");
                r = 2;
                break;
            }
        }
        total = mem_r32(g_ram, STRM + 0x14);        /* total_out */
        ctx.r[R_A0] = STRM;
        gcall(&ctx, F_INFLATEEND);
        printf("  m%u unc=%08x total_out=%08x fnv=%08x %s\n",
               i, unc, total, fnv(out, total),
               r == 1 ? "OK" : "*** WOULD SPIN FOREVER ***");
        if (r != 1) return 3;
        out += unc;
        cur += msize + 0x10;
    }
    printf("  output %08x..%08x\n", OUTBUF, out);
    return 0;
}
