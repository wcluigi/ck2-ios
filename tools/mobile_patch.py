"""Phone-only client patches, applied to a copy of the PC client before lifting (the PC client is never changed).

    python -I tools/mobile_patch.py <CrazyKartClient_offline.dat> <out.dat>

RACE PANEL UNDER THE MINIMAP: the speedometer + item-frame panel is anchored at ([0x6870c8], [0x6870cc]) =
(250 from .data, screen height - 100 set by race init at 0x4c09c0); bottom-left sits under the touch steering
buttons. The phone runs 1280x720 windowed, where the minimap is 210x112 at x = 1280 - 30 - 210, y = 108, so the
panel (about 174 x 97 from its anchor) goes to (1058, 213): centred under the map, above the DRIFT button.
shortcut: fixed for 1280x720 (the only phone resolution); compute from the screen size if that ever changes.
"""
import sys

import pefile

PATCHES = [
    # (VA, original bytes, new bytes)
    (0x4C09C0, bytes.fromhex("a1041f9c00909083e864a3cc706800"),       # mov eax,[G_HUDH]; nop; nop; sub eax,100; mov [0x6870cc],eax
     bytes.fromhex("c705cc706800d5000000") + b"\x90" * 5),            # mov dword [0x6870cc], 213
    (0x6870C8, (250).to_bytes(4, "little"), (1058).to_bytes(4, "little")),   # panel x
]


def main(src, dst):
    pe = pefile.PE(src, fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    data = bytearray(open(src, "rb").read())
    for va, old, new in PATCHES:
        off = pe.get_offset_from_rva(va - base)
        assert data[off:off + len(old)] == old, f"{va:#x}: client bytes differ, patch not applied"
        data[off:off + len(new)] = new
    open(dst, "wb").write(data)
    print(f"{len(PATCHES)} phone patches -> {dst}")


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
