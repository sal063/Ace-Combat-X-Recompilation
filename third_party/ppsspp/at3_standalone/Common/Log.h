/* pspreco shim for PPSSPP's Common/Log.h -- the at3_standalone sources log
 * through these macros; route everything to stderr. Not a PPSSPP file. */
#pragma once

#include <stdio.h>

namespace Log { enum Channel { ME }; }

#define AT3_SHIM_LOG(kind, chan, ...) \
    do { (void)(chan); fprintf(stderr, "[at3] " kind ": " __VA_ARGS__); \
         fputc('\n', stderr); } while (0)

#define DEBUG_LOG(chan, ...) do { (void)(chan); } while (0)
#define INFO_LOG(chan, ...)  do { (void)(chan); } while (0)
#define WARN_LOG(chan, ...)  AT3_SHIM_LOG("warn", chan, __VA_ARGS__)
#define ERROR_LOG(chan, ...) AT3_SHIM_LOG("error", chan, __VA_ARGS__)
