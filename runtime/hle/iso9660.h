/* runtime/hle/iso9660.h -- read-only access to the mounted UMD.
 *
 * Two backings, chosen by what iso_mount() is pointed at:
 *
 *   * an ISO image        -- a file. The original behaviour.
 *   * an extracted tree   -- a directory holding the extracted files plus the
 *                            disc.manifest tools/isoextract.py writes.
 *
 * The manifest is not bookkeeping, it is the whole reason a directory can
 * stand in for an image. Ace Combat X opens its data with RAW SECTOR paths
 * (disc0:/sce_lbn<lba>_size<bytes>) and never by name -- 72 distinct windows
 * in one playtest, not one filename among them -- so serving it means knowing
 * which extracted file each original LBA fell in. Extraction destroys that
 * mapping; the manifest is where it is written down.
 */
#ifndef PSPRECO_ISO9660_H
#define PSPRECO_ISO9660_H

#include "pspreco.h"

/* `path` is either an ISO image or an extracted disc directory. */
int iso_mount(const char *path);
int iso_mounted(void);
/* 1 when the mount is an extracted directory rather than an image. */
int iso_is_directory(void);
/* Total bytes the disc spans, for range-checking raw-sector access. For a
 * directory that is the end of its highest-placed file, which is what the
 * image size was. */
s64 iso_image_size(void);
/* Resolve a disc-relative path (e.g. "PSP_GAME/USRDIR/REGFILE.CDI") to its
 * byte offset and size. Returns 1 on success. */
int iso_find(const char *path, s64 *out_offset, s64 *out_size);
/* Copy `length` bytes at disc byte `offset` into guest memory. */
int iso_read(s64 offset, u8 *ram, u32 guest_addr, u32 length);
/* Same, into a host buffer. Used to dump raw windows for modding. */
int iso_pread(s64 offset, void *dst, u32 length);

#endif
