#!/bin/sh
# Lift -> build -> install DLL -> launch the PC validation client; prints the harness log.
set -e
cd "$(dirname "$0")"
GAME=../CrazyKart2
touch recomp/extra_entries.txt
[ -f $GAME/ck2recomp_missing.txt ] && cat $GAME/ck2recomp_missing.txt >> recomp/extra_entries.txt && rm $GAME/ck2recomp_missing.txt
sort -u recomp/extra_entries.txt -o recomp/extra_entries.txt
if [ "$1" != "nolift" ]; then rm -f out/*.c; python -I recomp/lift.py $GAME/CrazyKartClient_offline.dat out recomp/extra_entries.txt | head -2; rm -f build/pc/f*.o; fi
JOBS=16 ./build_pc.sh >/dev/null
taskkill //F //IM CrazyKartClient_recomp.dat >/dev/null 2>&1 || true; sleep 1
cp build/pc/ck2recomp.dll $GAME/
