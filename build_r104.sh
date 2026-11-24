#!/bin/sh
# 1.0.4 phone build (24 Nov 2026): lift the 1.0.4 release client (name styles rooms + race, sign-in calendar, red evo-3 names; runtime has the keyboard fix b27f7c9), build, lean APK (in-app update). The full APK is
# built after the 1.0.4 manifest exists (bundle_data checks files against it).
set -e
cd "$(dirname "$0")"
SRC="../release build"
date
python -I tools/mobile_patch.py "$SRC/CrazyKartClient.exe" build/client_mobile.dat
python -I recomp/lift.py build/client_mobile.dat out_m recomp/extra_entries.txt --dll "$SRC/KartRes.dll@0x10000000" \
  --dll "$SRC/SDFriend.dll@0x10100000" --dll "$SRC/CKGuildCli.dll@0x10200000" --dll "$SRC/CKMarryCli.dll@0x10300000" --dll "$SRC/CKEventCli.dll@0x10400000"
date
rm -rf build/android/obj
./build_android.sh
date
BUNDLE=0 VERSION_CODE=1100032 VERSION_NAME="1.0.4" ./package_apk.sh
ls -la build/android/CrazyKartLegacy.apk
sha256sum build/android/CrazyKartLegacy.apk
echo LEAN_DONE
