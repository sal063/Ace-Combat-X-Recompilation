Ace Combat X: Skies of Deception -- static recompilation
==========================================================

pspreco takes the PSP game's MIPS code and recompiles it, ahead of time, into
native C. The PSP's kernel calls (sceIo, sceKernel, sceGe, ...) are
reimplemented on the host in runtime/hle, and runtime/host wires that up to a
real window, GPU and audio backend. There is no MIPS interpreter and no JIT at
runtime -- every recompiled function is plain C, compiled once by a normal C
compiler.

This is not an emulator and it is not a copy of the game. It is a compiler
pipeline (recomp/, tools/) plus a small OS-reimplementation runtime
(runtime/). Nothing under PSP_GAME/, no ISO, no CDI archive, and no save data
ships here -- you provide those yourself from a disc you own, the same way you
would for any other PSP homebrew or recompilation project.

This repository does not include:
  - The game's disc image, extracted files, or any asset archive.
  - Any mod or asset-replacement content.
  - The prebuilt "image.bin" data blob (a raw copy of the game's .data/.bss
    section) -- you regenerate this yourself from your own EBOOT, see below.


Layout
------
recomp/          the static recompiler: ELF/PRX analysis, function-boundary
                  analysis, and the C-emitter
runtime/cpu/      MIPS/VFPU interpreter core used by traps and cold paths
runtime/gpu/      the PSP's GE (graphics engine) reimplemented against Vulkan
runtime/hle/      high-level reimplementations of the PSP's kernel modules
runtime/host/     window, audio, input, video-decode, and the F4 debug overlay
tools/            standalone utilities (ISO/CDI extraction, ELF/PRX loading,
                  disassembly, VFPU tables, trace comparison)
third_party/      Dear ImGui (MIT) and a standalone ATRAC3/ATRAC3+ decoder
                  lifted from FFmpeg/PPSSPP, plus the PSP system fonts PPSSPP
                  ships as test assets (needed to draw any text at all)
data/             the syscall NID database and VFPU instruction table the
                  recompiler and disassembler read as input
generated/        recompiled C output (checked in so you can build without
                  running the recompiler first) -- excludes image.bin
tests/            regression checks: a boot trace, and a decompression
                  self-check against the disc's mission archives
build.py          compiles runtime/ + generated/ into the pspreco executable


Requirements
------------
- Python 3.10+
- clang (or another C11/C++14 compiler on your PATH)
- Windows + SDL3 + a Vulkan loader for the windowed build; a headless build
  needs neither


Extracting your own copy of the game
-------------------------------------
Everything below assumes you own "Ace Combat X: Skies of Deception" (US,
ULUS10176) and have dumped your own UMD to an ISO. This project does not
provide a dumping tool -- use whatever you already use to image your own PSP
media.

1. List and pull files out of the ISO (ISO9660, no Joliet/UDF):

       python tools/isoextract.py "Ace Combat X.iso" game/

   This writes the disc's files under game/, plus game/disc.manifest. The
   game addresses its data by absolute disc sector rather than by file name,
   so the manifest -- which records each file's original LBA -- is what lets
   the runtime serve reads out of a plain directory instead of the ISO.

2. Almost all of the game's data lives in one archive,
   PSP_GAME/USRDIR/REGFILE.CDI. Unpack it into individually named files:

       python tools/cdiextract.py game

   This writes game/cdi/<real names> plus game/cdi/cdi.manifest, covering
   every byte of the archive including the streamed audio and movies that
   aren't in its own directory table.

3. If you ever need to change an asset's size rather than just its bytes
   (repacking, not something this project does for you), acxreindex.py
   rewrites the archive's index and both manifests together so the three
   stay consistent:

       python tools/acxreindex.py apply game

The runtime prefers an extracted game/ directory over a raw ISO; point it at
whichever you have (see "Running" below).


Building the recompiled game
-------------------------------
The recompiler works from EBOOT.elf, the game's main executable. EBOOT.BIN on
the disc is encrypted; decrypt your own copy to ELF with whatever PSP devkit
tooling you already use for that (out of scope here) and place it at the
repository root as EBOOT.elf.

1. Regenerate the VFPU decode tables (checked into generated/, but this is
   how they were produced, and it's how you'd rebuild them if data/vfpu_table.json
   ever changes):

       python tools/pspdisasm/gen_vfpu_decode.py

2. Run the analysis pass, which finds function boundaries and reports how
   much of the executable's code the recompiler accounts for:

       python recomp/analyze/analyze.py EBOOT.elf

3. Emit the recompiled C (also already checked into generated/, so this step
   is only needed if you're re-recompiling from a different dump or a patched
   EBOOT):

       python recomp/emit/emit_c.py EBOOT.elf

4. Produce the program's initial-data image, which the runtime loads into
   guest RAM at startup (this is the one file this repo deliberately does not
   ship, since it's a byte-for-byte copy of the game's own data section):

       python tools/prxload/prxload.py EBOOT.elf --emit-image generated/image.bin

5. Compile:

       python build.py               # headless, software-rasterised
       python build.py --sdl3        # windowed, SDL3 + Vulkan

   build/pspreco.exe (or build/pspreco-sdl3.exe) is the result.


Running
-------
    build/pspreco-sdl3.exe generated/image.bin game

The second argument is either a game.iso file or an extracted game/
directory (see "Extracting your own copy of the game" above); it defaults to
game.iso in the current directory if omitted. PSPRECO_ISO also works as an
environment variable if you'd rather not pass it on the command line.


Tests
-----
    python tests/boot_check.py build/pspreco.exe
    python tests/chpak_check.py "Ace Combat X.iso"

boot_check runs the recompiled module to its first HLE call and diffs the
trace against tests/golden/boot_trace.txt, so a regression in the recompiler
shows up as a diff instead of a silent hang. chpak_check needs your own ISO
and isn't run in CI for that reason.


Third-party components
-----------------------
- third_party/imgui -- Dear ImGui, MIT licensed (see third_party/imgui/LICENSE.txt)
- third_party/ppsspp/at3_standalone -- ATRAC3/ATRAC3+ decoding, extracted from
  FFmpeg by the PPSSPP project (see its own README.txt for provenance)
- third_party/ppsspp/assets/flash0/font -- the PSP system fonts PPSSPP bundles
  as test assets; used here so on-screen text has something to render with
