#!/bin/sh
# Build libck2.so (arm64-v8a): recompiled client + Android runtime + WebGPU (wgpu-native). Needs the NDK only.
set -e
cd "$(dirname "$0")"
T="$LOCALAPPDATA/ck2mobile-tools"
NDK="$T/ndk/android-ndk-r27c"
TCB="$NDK/toolchains/llvm/prebuilt/windows-x86_64"
CC="$TCB/bin/clang"
TGT="--target=aarch64-linux-android26 --sysroot=$TCB/sysroot"
WG="$T/wgpu-android-aarch64"
OPT=${OPT:--O2}
CFLAGS="$TGT $OPT -fPIC -fvisibility=hidden -fno-semantic-interposition -fno-strict-aliasing -fno-math-errno -fwrapv -w -Iruntime -Iruntime/mobile -Iout_m -I$WG/include -I$NDK/sources/android/native_app_glue"
mkdir -p build/android/obj
ls out_m/*.c | xargs -P "${JOBS:-16}" -I{} sh -c 'o="build/android/obj/$(basename "{}" .c).o"; [ "$o" -nt "{}" ] || "$0" $1 -c "{}" -o "$o"' "$CC" "$CFLAGS"
RT="runtime/mobile/core.c runtime/mobile/heap.c runtime/mobile/plat.c runtime/mobile/loader.c runtime/mobile/main.c runtime/mobile/fmt.c
    runtime/mobile/gbk_table.c runtime/mobile/hle_kernel32.c runtime/mobile/hle_msvcrt.c runtime/mobile/hle_user32.c runtime/mobile/hle_misc.c
    runtime/mobile/hle_ws2.c runtime/mobile/hle_input_audio.c runtime/mobile/hle_fmod.c runtime/mobile/native_rw.c runtime/mobile/hle_gdi.c runtime/mobile/text.c runtime/mobile/touch_ui.c runtime/mobile/input.c runtime/mobile/hud.c runtime/mobile/ui_bridge.c runtime/mobile/d3d9.c runtime/mobile/gpu_wgpu.c
    android/plat_android.c $NDK/sources/android/native_app_glue/android_native_app_glue.c"
mkdir -p build/android/lib/arm64-v8a
"$CC" $CFLAGS -shared -o build/android/lib/arm64-v8a/libck2.so $RT build/android/obj/*.o "$WG/lib/libwgpu_native.a" \
  -u ANativeActivity_onCreate -landroid -laaudio -llog -lm -ldl -Wl,--gc-sections -Wl,--no-undefined -Wl,-z,max-page-size=16384
ls -la build/android/lib/arm64-v8a/libck2.so
