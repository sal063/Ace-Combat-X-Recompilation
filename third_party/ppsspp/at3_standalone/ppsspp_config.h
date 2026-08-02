/* pspreco shim for PPSSPP's ppsspp_config.h -- just the PPSSPP_ARCH()
 * dispatch the at3_standalone sources test. Not a PPSSPP file. */
#pragma once

#define PPSSPP_ARCH(flag) (PPSSPP_ARCH_##flag)

#if defined(_M_X64) || defined(__x86_64__)
#define PPSSPP_ARCH_AMD64 1
#define PPSSPP_ARCH_SSE2 1
#else
#define PPSSPP_ARCH_AMD64 0
#if defined(_M_IX86) || defined(__i386__)
#define PPSSPP_ARCH_X86 1
#define PPSSPP_ARCH_SSE2 1
#endif
#endif

#ifndef PPSSPP_ARCH_X86
#define PPSSPP_ARCH_X86 0
#endif
#ifndef PPSSPP_ARCH_SSE2
#define PPSSPP_ARCH_SSE2 0
#endif
#ifndef PPSSPP_ARCH_ARM_NEON
#define PPSSPP_ARCH_ARM_NEON 0
#endif
#ifndef PPSSPP_ARCH_ARM64
#define PPSSPP_ARCH_ARM64 0
#endif
