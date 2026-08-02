/* runtime/hle/sce_errors.h -- SCE error constants transcribed from the firmware headers
 * headers (which must not be copied into this repo). Add a value only after
 * looking it up in kerror.h / psperror.h -- never guess one; verify with
 * tools/sdk_index/sdk_search.py.
 */

#ifndef PSPRECO_SCE_ERRORS_H
#define PSPRECO_SCE_ERRORS_H

/* --- kernel (kerror.h) -------------------------------------------------- */
#define SCE_KERNEL_ERROR_OK                 0x00000000u
#define SCE_KERNEL_ERROR_UNKNOWN_UID        0x800200cbu
#define SCE_KERNEL_ERROR_ILLEGAL_ARGUMENT   0x800200d2u
#define SCE_KERNEL_ERROR_ILLEGAL_PARTITION  0x800200d6u
#define SCE_KERNEL_ERROR_NO_MEMORY          0x80020190u

/* --- threads (kerror.h) ------------------------------------------------- */
#define SCE_KERNEL_ERROR_ILLEGAL_ATTR       0x80020191u
#define SCE_KERNEL_ERROR_ILLEGAL_PRIORITY   0x80020193u
#define SCE_KERNEL_ERROR_ILLEGAL_THID       0x80020197u
#define SCE_KERNEL_ERROR_UNKNOWN_THID       0x80020198u
#define SCE_KERNEL_ERROR_DORMANT            0x800201a2u
#define SCE_KERNEL_ERROR_NOT_DORMANT        0x800201a4u
#define SCE_KERNEL_ERROR_WAIT_TIMEOUT       0x800201a8u

/* --- SCE_ERROR_FACILITY_ERRNO (psperror.h) ------------------------------ */
#define SCE_ERROR_ERRNO_ENOENT              0x80010002u
#define SCE_ERROR_ERRNO_EIO                 0x80010005u
#define SCE_ERROR_ERRNO_EBADF               0x80010009u
#define SCE_ERROR_ERRNO_EROFS               0x8001001Eu

#define SCE_KERNEL_ERROR_ERROR              0x80020001u

#endif /* PSPRECO_SCE_ERRORS_H */
