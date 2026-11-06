#!/bin/sh
# The phone's patch signature check (Ed25519.java) against a fixture signed with the real patch key: run after any
# change to Ed25519.java or Patcher.PUBLIC_KEY. Exit code 1 = broken (a phone would accept fake patches or refuse real ones).
set -e
cd "$(dirname "$0")/.."
J="$LOCALAPPDATA/ck2mobile-tools/jdk17/jdk-17.0.21+9/bin"
OUT=build/ed25519_test
rm -rf $OUT && mkdir -p $OUT
"$J/javac" -nowarn -d $OUT android/java/com/crazykart/legacy/Ed25519.java tools/ed25519_test/Ed25519Test.java
"$J/java" -cp $OUT com.crazykart.legacy.Ed25519Test tools/ed25519_test
