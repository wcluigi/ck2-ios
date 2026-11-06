#!/bin/sh
# Build the PC validation DLL (ck2recomp.dll) from recomp output + runtime. Needs only LLVM.
set -e
cd "$(dirname "$0")"
LLVM="/c/Program Files/LLVM/bin"
OPT=${OPT:--O1}
CFLAGS="--target=i686-pc-windows-msvc $OPT -ffreestanding -nostdlib -msse4.1 -mfpmath=sse -mno-stack-arg-probe \
 -fno-strict-aliasing -fno-math-errno -fwrapv -DCK_MEM_IDENTITY -DCK_HYBRID -Iruntime -Iout -w"
mkdir -p build/pc
for d in kernel32 user32; do "$LLVM/llvm-dlltool" -m i386 -k -d runtime/pc/lib/$d.def -l build/pc/$d.lib; done
"$LLVM/clang" $CFLAGS -O2 -fno-builtin -c runtime/pc/host.c -o build/pc/host.o
"$LLVM/clang" --target=i686-pc-windows-msvc -c runtime/pc/thunk.S -o build/pc/thunk.o
ls out/*.c | xargs -P "${JOBS:-12}" -I{} sh -c '"$0/clang" $1 -c "{}" -o "build/pc/$(basename "{}" .c).o"' "$LLVM" "$CFLAGS"
"$LLVM/lld-link" -dll -noentry -safeseh:no -machine:x86 -out:build/pc/ck2recomp.dll -map:build/pc/ck2recomp.map \
  -export:ck_run build/pc/*.o build/pc/kernel32.lib build/pc/user32.lib
ls -la build/pc/ck2recomp.dll
