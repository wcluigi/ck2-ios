"""Pack the release's game files into the APK (the user, 5 Nov 2026: the first-run download of ~830 MB per phone would
eat the VPS bandwidth). Phones unpack it on the first start (LoginActivity.unpackBundle); the patcher then fetches only
what changed since this release.

    python -I tools/bundle_data.py      ->  build/android/bundle/gamedata.zip + gamedata.json

Source: the release folder + its signed manifest (ck2server/release: build_release.py output). Every file is checked
against the manifest's sha256 while packing, so the bundle is exactly a published release. Launcher/ (the PC launcher)
is left out, as the phone patcher does. gamedata.json = {version, md5 (of manifest.json), time, bytes, files: {path:
{sha256, size}}}: the phone writes patchstate.json from it, so the patcher need not hash 19,000 files.
"""
import hashlib
import json
import os
import sys
import zipfile

RELEASE = r"C:\Users\Luigi\Desktop\ckindo\release build"
PATCHDIST = r"C:\Users\Luigi\Desktop\ckindo\ck2server\release\patchdist"
OUT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "build", "android", "bundle")


def main():
    body = open(os.path.join(PATCHDIST, "manifest.json"), "rb").read()
    man = json.loads(body)
    files = {k: v for k, v in man["files"].items() if not k.startswith("Launcher/")}
    os.makedirs(OUT, exist_ok=True)
    tmp = os.path.join(OUT, "gamedata.zip.part")
    total = 0
    with zipfile.ZipFile(tmp, "w", zipfile.ZIP_DEFLATED, compresslevel=6) as z:
        for i, (rel, want) in enumerate(sorted(files.items())):
            src = os.path.join(RELEASE, *rel.split("/"))
            data = open(src, "rb").read()
            if len(data) != want["size"] or hashlib.sha256(data).hexdigest() != want["sha256"]:
                sys.exit(f"{rel} does not match the release manifest -- rebuild the release first; nothing packed")
            z.writestr(zipfile.ZipInfo(rel, date_time=(2026, 1, 1, 0, 0, 0)), data, zipfile.ZIP_DEFLATED, 6)
            total += len(data)
            if i % 2000 == 0:
                print(f"  {i}/{len(files)} files")
    os.replace(tmp, os.path.join(OUT, "gamedata.zip"))
    meta = {"version": man["version"], "md5": hashlib.md5(body).hexdigest(), "time": man.get("time", 0), "bytes": total,
            "files": files}
    json.dump(meta, open(os.path.join(OUT, "gamedata.json"), "w"), separators=(",", ":"))
    zsize = os.path.getsize(os.path.join(OUT, "gamedata.zip"))
    print(f"bundle {man['version']}: {len(files)} files, {total / 1e6:.0f} MB -> gamedata.zip {zsize / 1e6:.0f} MB")


if __name__ == "__main__":
    main()
