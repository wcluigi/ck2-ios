"""Exact codec for the game's GUI textures (data/GUI/IMAGE/*.png).

Found in CrazyKartClient.dat ("Mem:" file system PNGD, 0x5471a0 -> 0x559e30 / 0x559d10, 8 Nov 2026):
the first 32 bytes are TEA-encrypted (7 rounds, delta 0x4143534E, key "1234567890abcdef" at 0x6891ec),
CBC with a zero IV, after the signature's "PNG" is swapped for "TEA". Byte 33 on is plain.
The client also takes a PLAIN png: on first load it encrypts the file in place (0x559d10) and the next load
decrypts it. So new art can be dropped in as ordinary PNGs; this tool is for reading textures exactly and for
shipping files already in the game's form.

    python -I tools/ck2png.py decode <in.png> <out.png>     scrambled or plain -> ordinary PNG
    python -I tools/ck2png.py encode <in.png> <out.png>     ordinary PNG -> the game's form
"""
import struct
import sys

KEY = struct.unpack("<4I", b"1234567890abcdef")
DELTA, ROUNDS, M = 0x4143534E, 7, 0xFFFFFFFF
SIG = b"\x89PNG\r\n\x1a\n"


def _enc_block(v0, v1, k=KEY):
    s = 0
    for _ in range(ROUNDS):
        s = (s + DELTA) & M
        v0 = (v0 + ((((v1 << 4) + k[0]) & M) ^ ((v1 + s) & M) ^ (((v1 >> 5) + k[1]) & M))) & M
        v1 = (v1 + ((((v0 << 4) + k[2]) & M) ^ ((v0 + s) & M) ^ (((v0 >> 5) + k[3]) & M))) & M
    return v0, v1


def _dec_block(v0, v1, k=KEY):
    s = (DELTA * ROUNDS) & M
    for _ in range(ROUNDS):
        v1 = (v1 - ((((v0 << 4) + k[2]) & M) ^ ((v0 + s) & M) ^ (((v0 >> 5) + k[3]) & M))) & M
        v0 = (v0 - ((((v1 << 4) + k[0]) & M) ^ ((v1 + s) & M) ^ (((v1 >> 5) + k[1]) & M))) & M
        s = (s - DELTA) & M
    return v0, v1


def is_scrambled(data: bytes) -> bool:
    return data[:8] != SIG and len(data) >= 33


def decode(data: bytes) -> bytes:
    if not is_scrambled(data):
        return data
    head, prev = bytearray(data[:32]), (0, 0)
    for i in range(4):
        c = struct.unpack_from("<2I", data, i * 8)
        p = _dec_block(*c)
        struct.pack_into("<2I", head, i * 8, p[0] ^ prev[0], p[1] ^ prev[1])
        prev = c
    if head[1:4] != b"TEA":
        raise ValueError("not a game texture (header does not decrypt to TEA)")
    head[1:4] = b"PNG"
    return bytes(head) + data[32:]


def encode(data: bytes) -> bytes:
    if is_scrambled(data):
        return data
    head, prev = bytearray(data[:32]), (0, 0)
    head[1:4] = b"TEA"
    out = bytearray(head)
    for i in range(4):
        p = struct.unpack_from("<2I", head, i * 8)
        c = _enc_block(p[0] ^ prev[0], p[1] ^ prev[1])
        struct.pack_into("<2I", out, i * 8, *c)
        prev = c
    return bytes(out) + data[32:]


if __name__ == "__main__":
    if len(sys.argv) != 4 or sys.argv[1] not in ("decode", "encode"):
        sys.exit(__doc__)
    src = open(sys.argv[2], "rb").read()
    open(sys.argv[3], "wb").write((decode if sys.argv[1] == "decode" else encode)(src))
