#!/bin/sh
# Build the desktop test bench of the Android runtime (x86_64, llvm-mingw). GPU=null|wgpu
set -e
cd "$(dirname "$0")"
TC="$LOCALAPPDATA/ck2mobile-tools/llvm-mingw/llvm-mingw-20261020-ucrt-x86_64/bin"
CC="$TC/x86_64-w64-mingw32-clang"
OPT=${OPT:--O1}
GPU=${GPU:-null}
CFLAGS="$OPT -fno-strict-aliasing -fno-math-errno -fwrapv -w ${CHECK:+-DCK_CHECK_ABI} -Iruntime -Iruntime/mobile -Iout_m -g0"
mkdir -p build/bench
ls out_m/*.c | xargs -P "${JOBS:-16}" -I{} sh -c 'o="build/bench/$(basename "{}" .c).o"; [ "$o" -nt "{}" ] || "$0" $1 -c "{}" -o "$o"' "$CC" "$CFLAGS"
RT="runtime/mobile/core.c runtime/mobile/heap.c runtime/mobile/plat.c runtime/mobile/loader.c runtime/mobile/main.c runtime/mobile/fmt.c
    runtime/mobile/gbk_table.c runtime/mobile/hle_kernel32.c runtime/mobile/hle_msvcrt.c runtime/mobile/hle_user32.c runtime/mobile/hle_misc.c
    runtime/mobile/hle_ws2.c runtime/mobile/hle_input_audio.c runtime/mobile/hle_fmod.c runtime/mobile/native_rw.c runtime/mobile/hle_gdi.c runtime/mobile/text.c runtime/mobile/touch_ui.c runtime/mobile/hud.c runtime/mobile/d3d9.c runtime/mobile/gpu_$GPU.c bench/plat_bench.c"
EXTRA=""
[ "$GPU" = wgpu ] && EXTRA="-I$LOCALAPPDATA/ck2mobile-tools/wgpu-windows/include -L$LOCALAPPDATA/ck2mobile-tools/wgpu-windows/lib -lwgpu_native" && cp "$LOCALAPPDATA/ck2mobile-tools/wgpu-windows/lib/wgpu_native.dll" build/bench/
"$CC" -O2 -g $CFLAGS $EXTRA $RT build/bench/f*.o build/bench/table.o -o build/bench/ck2bench.exe -lws2_32 -luser32 -lgdi32 -lpthread $EXTRA
ls -la build/bench/ck2bench.exe
