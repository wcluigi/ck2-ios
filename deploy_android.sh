#!/bin/sh
# Install the APK on the connected phone, copy the game data (first time / with "data"), start it, show the log.
# usage: ./deploy_android.sh [data] ["-u name -password pass -ad IP -port 6910 -wnd 0"]
set -e
export MSYS_NO_PATHCONV=1      # Git Bash would rewrite /sdcard paths
cd "$(dirname "$0")"
ADB=/c/platform-tools/adb
PKG=com.crazykart.legacy
DST=/sdcard/Android/data/$PKG/files/game
$ADB devices | grep -q "device$" || { echo "no phone connected (enable USB debugging)"; exit 1; }
$ADB install -r build/android/CrazyKartLegacy.apk
if [ "$1" = data ]; then
  shift
  $ADB shell mkdir -p $DST
  # game data from the bench copy (never the live CrazyKart2 folder)
  (cd bench_data && $ADB push --sync . $DST/)
fi
if [ -n "$1" ]; then
  printf '%s\n' "$1" > build/android/launch.txt
  $ADB push build/android/launch.txt $DST/launch.txt
fi
$ADB logcat -c
$ADB shell am start -n $PKG/android.app.NativeActivity
$ADB logcat -s ck2:V ck2:E wgpu:V AndroidRuntime:E DEBUG:V
