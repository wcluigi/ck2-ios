#!/bin/sh
# Build the iOS app (macOS + Xcode only: .github/workflows/ios.yml runs it) into an unsigned .ipa for sideloading
# (Sideloadly / AltStore sign it with the player's Apple ID). Same runtime as Android (runtime/mobile + input.c),
# ios/plat_ios.m instead of android/plat_android.c, WebGPU on Metal (wgpu-native's iOS build).
#   WG=<unzipped wgpu-ios-aarch64-release>  GAMEDATA=<gamedata.zip from tools/bundle_data.py>  sh ios/build_ios.sh
set -e
cd "$(dirname "$0")/.."
: "${WG:?unzipped wgpu-native iOS release}" "${GAMEDATA:?gamedata.zip}"
VERSION=${VERSION:-1.0}
BUILD=${BUILD:-1}
SDK=$(xcrun --sdk iphoneos --show-sdk-path)
CC="xcrun -sdk iphoneos clang"
INC=$(dirname "$(find "$WG" -name webgpu.h | head -1)")/..
LIB=$(find "$WG" -name libwgpu_native.a | head -1)
CFLAGS="-arch arm64 -isysroot $SDK -miphoneos-version-min=14.0 ${OPT:--O2} -fno-strict-aliasing -fno-math-errno -fwrapv -w
        -Iruntime -Iruntime/mobile -Iout_m -I$INC"
O=build/ios/obj
mkdir -p $O
# the recompiled client (89 MB of C): all cores, only what changed
export CC CFLAGS O
ls out_m/*.c | xargs -P "${JOBS:-$(sysctl -n hw.ncpu)}" -I{} sh -c 'o="$O/$(basename "$1" .c).o"; [ "$o" -nt "$1" ] || $CC $CFLAGS -c "$1" -o "$o"' _ {}
RT="core heap plat loader main fmt gbk_table hle_kernel32 hle_msvcrt hle_user32 hle_misc hle_ws2 hle_input_audio hle_fmod
    native_rw hle_gdi text touch_ui input hud ui_bridge etc2 d3d9 gpu_wgpu"
for f in $RT; do $CC $CFLAGS -c runtime/mobile/$f.c -o $O/rt_$f.o; done
$CC $CFLAGS -fobjc-arc -c ios/plat_ios.m -o $O/plat_ios.o
APP=build/ios/Payload/CK2.app
rm -rf build/ios/Payload && mkdir -p $APP/image
$CC -arch arm64 -isysroot $SDK -miphoneos-version-min=14.0 -o $APP/CK2 $O/*.o "$LIB" -dead_strip \
  -framework UIKit -framework Foundation -framework QuartzCore -framework Metal -framework CoreGraphics \
  -framework AudioToolbox -framework AVFoundation -framework GameController -framework WebKit -framework PhotosUI -lobjc -lc++
# the app's files: lifted image + phone assets (as package_apk.sh puts them in the APK) and the game data
cp out_m/image.bin out_m/imports.txt out_m/modules.txt $APP/image/
cp android/assets/* $APP/image/
if [ "$HTML" = 1 ]; then mkdir -p $APP/image/webui && cp webui_app/index.html webui_app/bridge.js $APP/image/webui/; fi   # the phone UI page (ui_bridge.c), only with HTML=1
cp ios/assets/latin*.ttf ios/assets/latin_OFL.txt $APP/image/
cp ios/assets/AppIcon*.png $APP/
sed -e "s/__VERSION__/$VERSION/" -e "s/__BUILD__/$BUILD/" ios/Info.plist > $APP/Info.plist
plutil -convert binary1 $APP/Info.plist
ls -la $O | tail -3; ls $O | wc -l; ls -la $APP/CK2
mkdir -p $APP/gamedata
unzip -q "$GAMEDATA" -d $APP/gamedata
# ad-hoc signature carrying the entitlements (sideloaders re-sign and keep what the Apple ID may have)
codesign -f -s - --entitlements ios/ck2.entitlements $APP
cd build/ios && rm -f CrazyKartLegacy-iOS.ipa && zip -qry -1 CrazyKartLegacy-iOS.ipa Payload && ls -la CrazyKartLegacy-iOS.ipa
