#!/bin/sh
# Build the phone app for a release: the dev client (the one the release ships) with the phone patches, lifted and
# built for Android, signed with ~/.ck2/mobile_release.keystore (package_apk.sh), into build/android/release/:
# CrazyKartLegacy.apk + mobile.json {versionCode, version}. ck2server/release/build_release.py then lists it in the
# signed patch manifest ("mobile") and publish_patch.py uploads it; phones install it themselves (LoginActivity).
# Run it AFTER the dev client is stamped with the release's build (the servers' CLIENT_BUILD) and BEFORE build_release.
#   usage: ./release_apk.sh "OBT 1.4.4"
set -e
cd "$(dirname "$0")"
NAME="${1:?usage: ./release_apk.sh <release name, e.g. OBT 1.4.4>}"
G=../CrazyKart2
[ -f "$HOME/.ck2/mobile_release.keystore" ] || { echo "missing ~/.ck2/mobile_release.keystore (phones only take updates signed with it)"; exit 1; }
R=build/android/release
mkdir -p $R
# version code from the release name, the same on every PC and always growing (a counter kept in build/ restarted
# after a cleanup, and phones never take a lower number): "OBT 1.4.4" -> 104040; REBUILD=1..9 for another phone
# build of the same release
CODE=$(echo "$NAME" | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1 | awk -F. -v r="${REBUILD:-0}" '{ printf "%d", $1 * 100000 + $2 * 1000 + $3 * 10 + r }')
[ -n "$CODE" ] && [ "$CODE" -gt 2 ] || { echo "release name needs x.y.z, e.g. \"OBT 1.4.4\""; exit 1; }
python -I tools/mobile_patch.py $G/CrazyKartClient_offline.dat build/client_mobile.dat
python -I recomp/lift.py build/client_mobile.dat out_m recomp/extra_entries.txt --dll $G/KartRes.dll@0x10000000 \
  --dll $G/SDFriend.dll@0x10100000 --dll $G/CKGuildCli.dll@0x10200000 --dll $G/CKMarryCli.dll@0x10300000 --dll $G/CKEventCli.dll@0x10400000
rm -rf build/android/obj
./build_android.sh
# lean APK (~40 MB): the automatic update in the patch -- installed phones already have the game files
BUNDLE=0 VERSION_CODE=$CODE VERSION_NAME="$NAME" ./package_apk.sh
cp build/android/CrazyKartLegacy.apk $R/CrazyKartLegacy.apk
# full APK (~650 MB) for new players (ckindo/dist): the game files of the last built release (patchdist) inside, unpacked
# on the first start; the patcher then fetches only what changed since (the VPS bandwidth, 5 Nov 2026)
python -I tools/bundle_data.py
BUNDLE=1 VERSION_CODE=$CODE VERSION_NAME="$NAME" ./package_apk.sh
mkdir -p ../dist
cp build/android/CrazyKartLegacy.apk "../dist/CrazyKartLegacy-Android-$(echo "$NAME" | tr ' ' '-').apk"
printf '{"versionCode": %d, "version": "%s"}\n' $CODE "$NAME" > $R/mobile.json
echo "phone app $NAME = versionCode $CODE -> $R"
