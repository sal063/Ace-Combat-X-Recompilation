#!/usr/bin/env python3
"""build.py -- compile the recompiled module and the runtime.

FP flags: -ffp-contract=off (the PSP has no FMA) and no -ffast-math (NaN and
signed-zero behaviour must match); flush-to-zero is set at runtime instead.
"""

from __future__ import annotations

import argparse
import concurrent.futures
import os
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent
GEN = ROOT / "generated"
OBJ = ROOT / "build" / "obj"
BIN = ROOT / "build"

CFLAGS = [
    "-std=c11", "-O2", "-Wall", "-Wextra",
    "-ffp-contract=off",
    "-fno-strict-aliasing",     # the guest heap is genuinely type-punned
    "-I", str(ROOT / "runtime" / "cpu"),
    "-I", str(GEN),
    "-I", str(ROOT / "runtime" / "hle"),
    "-I", str(ROOT / "runtime" / "gpu"),
]
if os.name == "nt":
    # clang on Windows targets the MSVC CRT, which deprecates fopen et al.
    CFLAGS.append("-D_CRT_SECURE_NO_WARNINGS")

RUNTIME_SOURCES = (
    [ROOT / "runtime" / "cpu" / "cpu.c",
     ROOT / "runtime" / "cpu" / "vfpu.c"]
    + sorted((ROOT / "runtime" / "gpu").glob("*.c"))
    + sorted((ROOT / "runtime" / "hle").glob("*.c"))
    + [ROOT / "runtime" / "host" / "main.c",
       ROOT / "runtime" / "host" / "audio_out.c",
       ROOT / "runtime" / "host" / "osk_win.c",
       ROOT / "runtime" / "host" / "h264_dec.c",
       # The renderer reads g_gfx in both builds, so the settings live here
       # and not in the SDL3-only list.
       ROOT / "runtime" / "host" / "settings.c"]
)
# Vendored ATRAC3/ATRAC3plus decoders + C shim, in both variants so the
# executable needs no external codec libraries.
CPP_SOURCES = (
    sorted((ROOT / "third_party" / "ppsspp" / "at3_standalone").glob("*.cpp"))
    + [ROOT / "runtime" / "host" / "at3_decode.cpp"]
)
CXXFLAGS_REPLACE = {"-std=c11": "-std=c++14"}
CXXFLAGS_EXTRA = ["-fno-exceptions", "-fno-rtti"]
# The presenter is chosen at build time; exactly one of these is compiled.
PRESENT_NULL  = ROOT / "runtime" / "host" / "present_null.c"
PRESENT_SDL3  = ROOT / "runtime" / "host" / "present_sdl3vk.c"
# Dear ImGui + the F4 overlay: windowed build only (it draws into the
# swapchain). imgui_demo.cpp is deliberately not compiled.
IMGUI_DIR     = ROOT / "third_party" / "imgui"
UI_SOURCES    = [
    IMGUI_DIR / "imgui.cpp",
    IMGUI_DIR / "imgui_draw.cpp",
    IMGUI_DIR / "imgui_tables.cpp",
    IMGUI_DIR / "imgui_widgets.cpp",
    IMGUI_DIR / "backends" / "imgui_impl_sdl3.cpp",
    IMGUI_DIR / "backends" / "imgui_impl_vulkan.cpp",
    ROOT / "runtime" / "host" / "ui_overlay.cpp",
]
# Only in a --trace build: runtime/cpu/trace.c is empty without PSPRECO_TRACE.
TRACE_SOURCE = ROOT / "runtime" / "cpu" / "trace.c"


def compile_one(cc: str, src: Path, obj: Path, extra: list[str]) -> tuple[Path, int, str]:
    obj.parent.mkdir(parents=True, exist_ok=True)
    flags = list(CFLAGS)
    if src.suffix == ".cpp":
        flags = [CXXFLAGS_REPLACE.get(f, f) for f in flags] + CXXFLAGS_EXTRA
    cmd = [cc, "-c", *flags, *extra, str(src), "-o", str(obj)]
    p = subprocess.run(cmd, capture_output=True, text=True,
                       encoding="utf-8", errors="replace")
    return src, p.returncode, (p.stdout or "") + (p.stderr or "")


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--cc", default="clang")
    ap.add_argument("--jobs", type=int, default=min(16, (os.cpu_count() or 4)))
    ap.add_argument("--warnings-as-errors", action="store_true")
    ap.add_argument("--clean", action="store_true")
    ap.add_argument("--sdl3", action="store_true",
                    help="build with the SDL3 + Vulkan window instead of the "
                         "headless presenter. Needs SDL3 and a Vulkan loader; "
                         "set PSPRECO_SDL3_PREFIX if they are not on the "
                         "default search path.")
    ap.add_argument("--trace", action="store_true",
                    help="build the RECOMP_PLAN 9.1 differential-trace "
                         "variant: every recompiled function logs its entry "
                         "state. Separate objects and a separate executable, "
                         "so it never clobbers the normal build.")
    a = ap.parse_args(argv)

    suffix = ("-trace" if a.trace else "") + ("-sdl3" if a.sdl3 else "")
    obj_dir = OBJ.with_name("obj" + suffix) if suffix else OBJ
    exe_name = "pspreco" + suffix

    if shutil.which(a.cc) is None and not Path(a.cc).exists():
        print(f"error: compiler {a.cc!r} not found", file=sys.stderr)
        return 2
    if not (GEN / "symbols.h").exists():
        print("error: generated/ is empty -- run recomp/emit/emit_c.py first",
              file=sys.stderr)
        return 2
    if a.clean and obj_dir.exists():
        shutil.rmtree(obj_dir)

    extra = ["-Werror"] if a.warnings_as_errors else []
    if not (GEN / "vfpu_ops.h").exists():
        print("error: generated/vfpu_ops.h missing -- run "
              "tools/pspdisasm/gen_vfpu_decode.py", file=sys.stderr)
        return 2

    sources = sorted(GEN.glob("*.c")) + RUNTIME_SOURCES + CPP_SOURCES
    if a.trace:
        extra = extra + ["-DPSPRECO_TRACE"]
        sources = sources + [TRACE_SOURCE]

    link_extra: list[str] = []
    if a.sdl3:
        # SDL3 + Vulkan loader location; PSPRECO_SDL3_PREFIX overrides.
        prefix = Path(os.environ.get("PSPRECO_SDL3_PREFIX", r"C:\msys64\ucrt64"))
        if not (prefix / "include" / "SDL3" / "SDL.h").exists():
            print(f"error: no SDL3 headers under {prefix} -- install SDL3 or "
                  f"set PSPRECO_SDL3_PREFIX", file=sys.stderr)
            return 2
        # The prefix's headers are MinGW's and collide with clang's MSVC CRT,
        # and its .dll.a import libs are unreadable by lld-link: use MinGW gcc.
        if "gcc" not in Path(a.cc).name and "mingw" not in a.cc.lower():
            cc = prefix / "bin" / "gcc.exe"
            if not cc.exists():
                print(f"error: --sdl3 needs the toolchain SDL3 was built for; "
                      f"no gcc at {cc}. Pass --cc explicitly.",
                      file=sys.stderr)
                return 2
            print(f"note: --sdl3 uses {cc} (SDL3 and the Vulkan loader here "
                  f"are MinGW builds)")
            a.cc = str(cc)
        extra = extra + ["-DPSPRECO_SDL3", "-I", str(prefix / "include"),
                         "-I", str(IMGUI_DIR)]
        # -lstdc++ for ImGui; the ATRAC3 C++ needs none of it, so the plain
        # gcc link worked until now. Static, because a shared libstdc++-6.dll
        # drags libgcc_s_seh-1.dll and libwinpthread-1.dll along with it and a
        # playtester without MSYS2 gets "libstdc++-6.dll was not found"; the
        # only DLLs the package should need are SDL3 and the system's Vulkan
        # loader.
        link_extra = ["-L", str(prefix / "lib"), "-lSDL3", "-lvulkan-1",
                      "-static-libstdc++", "-static-libgcc",
                      "-Wl,-Bstatic", "-lstdc++", "-lwinpthread",
                      "-Wl,-Bdynamic"]
        sources = sources + [PRESENT_SDL3] + UI_SOURCES
    else:
        sources = sources + [PRESENT_NULL]
    print(f"compiling {len(sources)} translation units with {a.cc} "
          f"({a.jobs} jobs)")

    t0 = time.time()
    objs: list[Path] = []
    failures = 0
    warnings = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=a.jobs) as pool:
        futs = []
        for src in sources:
            obj = obj_dir / (src.stem + ".o")
            objs.append(obj)
            futs.append(pool.submit(compile_one, a.cc, src, obj, extra))
        for fut in concurrent.futures.as_completed(futs):
            src, rc, out = fut.result()
            if rc != 0:
                failures += 1
                print(f"\n--- FAILED {src.name} ---")
                print(out[:6000])
            elif out.strip():
                warnings += 1
                print(f"\n--- warnings in {src.name} ---")
                print(out[:3000])
    dt = time.time() - t0
    print(f"\ncompiled {len(sources) - failures}/{len(sources)} in {dt:.1f}s"
          f"  ({failures} failed, {warnings} with warnings)")
    if failures:
        return 1

    BIN.mkdir(parents=True, exist_ok=True)
    exe = BIN / (exe_name + ".exe" if os.name == "nt" else exe_name)
    # libm is part of the CRT on Windows; -lm only exists on unix-likes.
    link = [a.cc, *[str(o) for o in objs], "-o", str(exe), *link_extra]
    if os.name == "nt":
        # winmm: audio_out.c; user32: osk_win.c; mfplat/mfuuid/ole32:
        # h264_dec.c (Media Foundation movie decode).
        link.extend(["-lwinmm", "-luser32", "-lmfplat", "-lmfuuid", "-lole32"])
    else:
        link.append("-lm")
    p = subprocess.run(link, capture_output=True, text=True,
                       encoding="utf-8", errors="replace")
    if p.returncode != 0:
        print("--- LINK FAILED ---")
        print((p.stdout or "") + (p.stderr or ""))
        return 1
    print(f"linked {exe} ({exe.stat().st_size:,} B)")
    print(f"total {time.time() - t0:.1f}s")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
