"""Make CrazyKartClient_recomp.dat: the client with its entry point replaced by a stub that loads
ck2recomp.dll and calls ck_run(). Also sets NX_COMPAT so guest code pages can be made non-executable.

usage: python -I make_exe.py <client.dat> <out.dat>
"""
import struct, sys
import pefile

STUB_VA = 0x9c4f90          # free tail of .ckx (114 zero bytes from 0x9c4f8e)
IAT = {'LoadLibraryA': 0x62e198, 'GetProcAddress': 0x62e19c, 'ExitProcess': 0x62e144}

src, dst = sys.argv[1], sys.argv[2]
pe = pefile.PE(src)
base = pe.OPTIONAL_HEADER.ImageBase
for e in pe.DIRECTORY_ENTRY_IMPORT:      # the IAT slots must be what the stub expects
    for i in e.imports:
        if i.name and i.name.decode() in IAT:
            assert IAT[i.name.decode()] == i.address, i.name

dll_s, fn_s = b'ck2recomp.dll\0', b'ck_run\0'
code_len = 41
dll_va = STUB_VA + code_len
fn_va = dll_va + len(dll_s)
c = b''
c += b'\x68' + struct.pack('<I', dll_va)                       # push "ck2recomp.dll"
c += b'\xff\x15' + struct.pack('<I', IAT['LoadLibraryA'])      # call [LoadLibraryA]
c += b'\x85\xc0\x74\x13'                                       # test eax,eax ; jz fail
c += b'\x68' + struct.pack('<I', fn_va)                        # push "ck_run"
c += b'\x50'                                                   # push eax
c += b'\xff\x15' + struct.pack('<I', IAT['GetProcAddress'])    # call [GetProcAddress]
c += b'\x85\xc0\x74\x02'                                       # test eax,eax ; jz fail
c += b'\xff\xd0'                                               # call eax (never returns)
c += b'\x6a\x01'                                               # fail: push 1
c += b'\xff\x15' + struct.pack('<I', IAT['ExitProcess'])       # call [ExitProcess]
assert len(c) == code_len, len(c)
# jz offsets: first jz at +11 jumps to fail (+33): 33 - 15 = 18? recompute exactly
fail = 33
c = bytearray(c)
c[14] = fail - 15                                              # after first jz (ends at 15)
c[30] = fail - 31                                              # after second jz (ends at 31)
blob = bytes(c) + dll_s + fn_s

sec = next(s for s in pe.sections if s.Name.rstrip(b'\0') == b'.ckx')
off = sec.PointerToRawData + (STUB_VA - base - sec.VirtualAddress)
data = bytearray(open(src, 'rb').read())
assert data[off - 2:off + len(blob)] == b'\0' * (len(blob) + 2), 'stub area not free'
data[off:off + len(blob)] = blob
pe.OPTIONAL_HEADER.AddressOfEntryPoint = STUB_VA - base
pe.OPTIONAL_HEADER.DllCharacteristics |= 0x100
hdr = pe.write()
data[:len(hdr)] = hdr[:len(hdr)] if len(hdr) <= len(data) else hdr
data[off:off + len(blob)] = blob
open(dst, 'wb').write(data)
print('wrote', dst, 'entry', hex(STUB_VA))
