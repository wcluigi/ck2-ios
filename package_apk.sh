#!/bin/sh
# Package build/android/lib/arm64-v8a/libck2.so + the lifted image into a signed APK (debug key).
set -e
cd "$(dirname "$0")"
T="$LOCALAPPDATA/ck2mobile-tools"
export JAVA_HOME="$T/jdk17/jdk-17.0.21+9"
export PATH="$JAVA_HOME/bin:$PATH"
SDK="$T/android-sdk"
BT="$SDK/build-tools/34.0.0"
OUT=build/android
mkdir -p $OUT/assets
cp out_m/image.bin out_m/imports.txt out_m/modules.txt $OUT/assets/
rm -f $OUT/assets/gamedata.zip $OUT/assets/gamedata.json
cp android/assets/* $OUT/assets/ 2>/dev/null || true     # HUD editor element list, button art, fonts, voice page
# the phone's menus (the Claude design, tools/mobile_ui.py -> mobile_overlay/): one zip, unpacked by LoginActivity.phoneUi
rm -f $OUT/assets/mobile_ui.zip
# (the re-skin overlay is not shipped while the HTML UI is the phone UI: plat.c would draw it under the page)
# the phone UI page (the Claude design + webui_app/bridge.js), served by runtime/mobile/ui_bridge.c
rm -rf $OUT/assets/webui && mkdir -p $OUT/assets/webui && cp webui_app/index.html webui_app/bridge.js $OUT/assets/webui/
# The release's game files inside the APK (tools/bundle_data.py; ~600 MB): ALWAYS (the user, 5 Nov 2026: "always pack
# with the data, not only apk"). BUNDLE=0 only for the lean automatic update in the patch (release_apk.sh).
BUNDLE=${BUNDLE:-1}
if [ "$BUNDLE" = 1 ]; then
  [ -f build/android/bundle/gamedata.zip ] || python -I tools/bundle_data.py
  cp build/android/bundle/gamedata.zip build/android/bundle/gamedata.json $OUT/assets/
fi
rm -rf $OUT/res.zip && "$BT/aapt2.exe" compile --dir android/res -o $OUT/res.zip     # app icon (android/res)
"$BT/aapt2.exe" link $OUT/res.zip --manifest android/AndroidManifest.xml -I "$SDK/platforms/android-34/android.jar" -A $OUT/assets \
  -o $OUT/unsigned.apk --min-sdk-version 26 --target-sdk-version 34   ${VERSION_CODE:+--replace-version --version-code $VERSION_CODE} ${VERSION_NAME:+--version-name "$VERSION_NAME"}
# login screen (Java) -> classes.dex
rm -rf $OUT/classes && mkdir -p $OUT/classes $OUT/dex
javac -encoding UTF-8 -source 8 -target 8 -nowarn -bootclasspath "$SDK/platforms/android-34/android.jar" -d $OUT/classes android/java/com/crazykart/legacy/*.java 2>&1 | grep -v "warning: \[options\]" || true
"$BT/d8.bat" --min-api 26 --lib "$SDK/platforms/android-34/android.jar" --output $OUT/dex $OUT/classes/com/crazykart/legacy/*.class
# native library stored uncompressed (extractNativeLibs=false: loaded straight from the APK)
python -I - "$OUT/unsigned.apk" "$OUT/lib/arm64-v8a/libck2.so" "$OUT/dex/classes.dex" <<'EOF'
import sys, zipfile
apk, so, dex = sys.argv[1], sys.argv[2], sys.argv[3]
with zipfile.ZipFile(apk, 'a') as z:
    z.write(dex, 'classes.dex', compress_type=zipfile.ZIP_DEFLATED)
    z.write(so, 'lib/arm64-v8a/libck2.so', compress_type=zipfile.ZIP_STORED)
EOF
"$BT/zipalign.exe" -p -f 4 $OUT/unsigned.apk $OUT/aligned.apk
# the signing key: every update must be signed with the same one, or Android refuses to install it over the old app.
# ~/.ck2/mobile_release.keystore + its password in mobile_release.pass (made 6 Nov 2026; private, never shipped:
# back both up -- losing them means every player must uninstall). Without it: the project's debug key (tests only;
# the old debug-key "release" was replaced, ponytail audit 6 Nov: anyone with the project could sign updates).
KS=android/debug.keystore
PASS=android
if [ -f "$HOME/.ck2/mobile_release.keystore" ]; then
  KS="$(cygpath -w "$HOME/.ck2/mobile_release.keystore")"     # Windows path: apksigner is Java
  PASS="$(cat "$HOME/.ck2/mobile_release.pass")"
fi
[ -f $KS ] || keytool -genkeypair -keystore $KS -storepass android -keypass android -alias ck2debug -keyalg RSA -keysize 2048 \
  -validity 10000 -dname "CN=Crazy Kart Mobile Debug" >/dev/null 2>&1
"$BT/apksigner.bat" sign --ks $KS --ks-pass "pass:$PASS" --key-pass "pass:$PASS" --out $OUT/CrazyKartLegacy.apk $OUT/aligned.apk
"$BT/apksigner.bat" verify $OUT/CrazyKartLegacy.apk && ls -la $OUT/CrazyKartLegacy.apk
