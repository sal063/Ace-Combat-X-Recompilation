/* runtime/host/osk_host.h -- host text-entry service for sceUtilityOsk.
 *
 * Strings are UTF-16 (the OSK's native encoding), passed as unsigned short
 * so the HLE layer needs no wchar_t assumptions. Returns 1 when the user
 * confirmed (out holds the text, cap chars including the terminator),
 * 0 on cancel or when no host UI exists (out untouched).
 */

#ifndef PSPRECO_OSK_HOST_H
#define PSPRECO_OSK_HOST_H

#ifdef __cplusplus
extern "C" {
#endif

int osk_host_input(const unsigned short *desc, const unsigned short *initial,
                   unsigned short *out, int cap);

#ifdef __cplusplus
}
#endif
#endif /* PSPRECO_OSK_HOST_H */
