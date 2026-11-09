"""Desktop bench sign-in like the phone launchers (LoginActivity / plat_ios.m wire_request): 0x6F01 account + password
-> launcher key, 0x6F03 account + key -> one-time game pass. Prints the pass (for ck2bench.exe's -password).

    python -I bench/launcher_pass.py <host> <account> <password>
"""
import socket
import sys

DEC, ENC = [0] * 256, [0] * 256
for b in range(256):
    x = (b ^ 0x5E) & 0xFF
    p = ((x << 2) | (x >> 6)) & 0xFF
    DEC[b], ENC[p] = p, b


def request(host, account, secret, op):
    body = bytes([op & 0xFF, op >> 8]) + bytes(9)
    for s, enc in ((account, "utf-8"), (secret, "latin-1"), ("bench|", "latin-1")):
        body += s.encode(enc) + b"\0"
    n = len(body) + 2
    frame = bytes([n & 0xFF, n >> 8]) + bytes(ENC[c] for c in body)
    with socket.create_connection((host, 6910), timeout=8) as so:
        so.sendall(frame)
        def read(n):                                  # no MSG_WAITALL on Windows
            got = bytearray()
            while len(got) < n:
                chunk = so.recv(n - len(got))
                if not chunk:
                    break
                got += chunk
            return bytes(got)
        h = read(2)
        p = read((h[0] | (h[1] << 8)) - 2)
    p = bytes(DEC[c] for c in p)
    rop, res = p[0] | (p[1] << 8), p[2] | (p[3] << 8)
    if rop != 0x6F02 or res:
        sys.exit(f"sign-in refused: op {rop:#x} result {res}")
    a = p.index(0, 10)
    b = p.index(0, a + 1)
    key = int.from_bytes(p[b + 1:b + 9], "little")
    return p[10:a].decode("utf-8", "replace"), str(key)


if __name__ == "__main__":
    host, account, password = sys.argv[1:4]
    _pass, key = request(host, account, password, 0x6F01)
    game_pass, _ = request(host, account, key, 0x6F03)
    print(game_pass)
