package com.crazykart.legacy;

import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.Base64;

// The phone's patch signature check (android/.../Ed25519.java) against a message signed with the real release patch
// key (~/.ck2/patch_signing_key.pem, the one build_release.py signs manifest.json with). Run: tools/test_ed25519.sh
public class Ed25519Test {
    public static void main(String[] a) throws Exception {
        byte[] spki = Base64.getDecoder().decode("MCowBQYDK2VwAyEAVwEjZ5H/7D6V2n9R8Iq7DtdID6aV/jOOpzgpdI8HPNQ=");   // = Patcher.PUBLIC_KEY
        byte[] pub = Arrays.copyOfRange(spki, spki.length - 32, spki.length);
        byte[] msg = Files.readAllBytes(Paths.get(a[0], "msg.bin")), sig = Files.readAllBytes(Paths.get(a[0], "msg.sig"));
        check(Ed25519.verify(pub, msg, sig), "the real signature is accepted");
        byte[] m2 = msg.clone(); m2[3] ^= 1;
        check(!Ed25519.verify(pub, m2, sig), "one changed byte in the message is refused");
        byte[] s2 = sig.clone(); s2[40] ^= 1;
        check(!Ed25519.verify(pub, msg, s2), "one changed byte in the signature is refused");
        check(!Ed25519.verify(pub, msg, new byte[64]), "an empty signature is refused");
        System.out.println("Ed25519: all checks passed");
    }

    static void check(boolean ok, String what) {
        if (!ok) { System.out.println("FAILED: " + what); System.exit(1); }
        System.out.println("ok: " + what);
    }
}
