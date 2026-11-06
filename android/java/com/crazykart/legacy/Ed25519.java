package com.crazykart.legacy;

import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.Arrays;

// Ed25519 signature check (RFC 8032 section 5.1.7), for the signed patch manifest (Patcher.java). Android has
// Ed25519 only from 13 (API 33); this app runs from 8. Slow BigInteger arithmetic -- one check per patch.
final class Ed25519 {
    static final BigInteger P = BigInteger.ONE.shiftLeft(255).subtract(BigInteger.valueOf(19));
    static final BigInteger L = BigInteger.ONE.shiftLeft(252).add(new BigInteger("27742317777372353535851937790883648493"));
    static final BigInteger D = BigInteger.valueOf(-121665).multiply(BigInteger.valueOf(121666).modInverse(P)).mod(P);
    static final BigInteger SQRT_M1 = BigInteger.valueOf(2).modPow(P.subtract(BigInteger.ONE).shiftRight(2), P);
    static final BigInteger[] B;
    static {
        BigInteger by = BigInteger.valueOf(4).multiply(BigInteger.valueOf(5).modInverse(P)).mod(P);
        BigInteger bx = recoverX(by, 0);
        B = new BigInteger[]{bx, by, BigInteger.ONE, bx.multiply(by).mod(P)};
    }

    // extended coordinates (X, Y, Z, T)
    static BigInteger[] add(BigInteger[] p, BigInteger[] q) {
        BigInteger a = p[1].subtract(p[0]).multiply(q[1].subtract(q[0])).mod(P);
        BigInteger b = p[1].add(p[0]).multiply(q[1].add(q[0])).mod(P);
        BigInteger c = BigInteger.valueOf(2).multiply(p[3]).multiply(q[3]).multiply(D).mod(P);
        BigInteger d = BigInteger.valueOf(2).multiply(p[2]).multiply(q[2]).mod(P);
        BigInteger e = b.subtract(a), f = d.subtract(c), g = d.add(c), h = b.add(a);
        return new BigInteger[]{e.multiply(f).mod(P), g.multiply(h).mod(P), f.multiply(g).mod(P), e.multiply(h).mod(P)};
    }

    static BigInteger[] mul(BigInteger s, BigInteger[] p) {
        BigInteger[] q = {BigInteger.ZERO, BigInteger.ONE, BigInteger.ONE, BigInteger.ZERO};
        for (int i = s.bitLength() - 1; i >= 0; i--) {
            q = add(q, q);
            if (s.testBit(i)) q = add(q, p);
        }
        return q;
    }

    static boolean equal(BigInteger[] p, BigInteger[] q) {
        return p[0].multiply(q[2]).subtract(q[0].multiply(p[2])).mod(P).signum() == 0
            && p[1].multiply(q[2]).subtract(q[1].multiply(p[2])).mod(P).signum() == 0;
    }

    static BigInteger recoverX(BigInteger y, int sign) {
        if (y.compareTo(P) >= 0) return null;
        BigInteger x2 = y.multiply(y).subtract(BigInteger.ONE).multiply(D.multiply(y).multiply(y).add(BigInteger.ONE).modInverse(P)).mod(P);
        if (x2.signum() == 0) return sign == 0 ? BigInteger.ZERO : null;
        BigInteger x = x2.modPow(P.add(BigInteger.valueOf(3)).shiftRight(3), P);
        if (x.multiply(x).subtract(x2).mod(P).signum() != 0) x = x.multiply(SQRT_M1).mod(P);
        if (x.multiply(x).subtract(x2).mod(P).signum() != 0) return null;
        if ((x.testBit(0) ? 1 : 0) != sign) x = P.subtract(x);
        return x;
    }

    static BigInteger le(byte[] b, int off, int len) {
        byte[] r = new byte[len];
        for (int i = 0; i < len; i++) r[i] = b[off + len - 1 - i];
        return new BigInteger(1, r);
    }

    static BigInteger[] decode(byte[] b, int off) {
        byte[] c = Arrays.copyOfRange(b, off, off + 32);
        int sign = (c[31] >> 7) & 1;
        c[31] &= 0x7f;
        BigInteger y = le(c, 0, 32), x = recoverX(y, sign);
        return x == null ? null : new BigInteger[]{x, y, BigInteger.ONE, x.multiply(y).mod(P)};
    }

    static boolean verify(byte[] pub, byte[] msg, byte[] sig) {
        try {
            if (pub.length != 32 || sig.length != 64) return false;
            BigInteger[] a = decode(pub, 0), r = decode(sig, 0);
            if (a == null || r == null) return false;
            BigInteger s = le(sig, 32, 32);
            if (s.compareTo(L) >= 0) return false;
            MessageDigest md = MessageDigest.getInstance("SHA-512");
            md.update(sig, 0, 32); md.update(pub); md.update(msg);
            byte[] hd = md.digest();
            BigInteger h = le(hd, 0, 64).mod(L);
            return equal(mul(s, B), add(r, mul(h, a)));
        } catch (Exception e) {
            return false;
        }
    }
}
