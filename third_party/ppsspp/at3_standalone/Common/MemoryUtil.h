/* pspreco shim for PPSSPP's Common/MemoryUtil.h -- only the aligned-alloc
 * pair mem.cpp uses. Not a PPSSPP file. */
#pragma once

#include <stdlib.h>

#ifdef _WIN32
#include <malloc.h>
static inline void *AllocateAlignedMemory(size_t size, size_t alignment)
{
    return _aligned_malloc(size ? size : 1, alignment);
}
static inline void FreeAlignedMemory(void *ptr)
{
    _aligned_free(ptr);
}
#else
static inline void *AllocateAlignedMemory(size_t size, size_t alignment)
{
    void *p = NULL;
    if (posix_memalign(&p, alignment, size ? size : 1) != 0) return NULL;
    return p;
}
static inline void FreeAlignedMemory(void *ptr) { free(ptr); }
#endif
