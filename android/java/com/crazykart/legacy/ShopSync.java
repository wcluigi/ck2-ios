package com.crazykart.legacy;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.StandardCharsets;

// The dashboard's shop for this play session, as the PC launcher does it (Launcher/shop-sync.js): the game reads its
// shop only from data/config/shopconfig.xml (CN/data/config/shopconfig.xml in Chinese), so before Play the selected
// server's copies (ck2server GET /launcher/shopconfig[?lang=cn]: hidden items, prices, renames, kart stats) are put
// in place. Without it phones showed karts the dashboard had taken off sale (6 Nov 2026). Every good copy is kept
// per server in the app's files (with its ETag: an unchanged shop is not downloaded again); when the fetch fails that
// copy is used, else the shipped shop stays. Never blocks Play. The patcher leaves these two files alone once they
// exist (Patcher.keptIfPresent), since every Play replaces them.
final class ShopSync {
    static final String[][] SHOPS = {{"data/config/shopconfig.xml", ""}, {"CN/data/config/shopconfig.xml", "?lang=cn"}};

    // plainly a full shop file (the launcher's isShop)
    static boolean isShop(byte[] b) {
        if (b == null || b.length > (16 << 20) || b.length < 64) return false;
        String head = new String(b, 0, 16, StandardCharsets.ISO_8859_1), all = new String(b, StandardCharsets.ISO_8859_1);
        return head.contains("<?xml") && all.contains("<AllCars") && all.contains("</AllCarProps>");
    }

    static byte[] read(File f) {
        try (InputStream in = new java.io.FileInputStream(f)) { return readAll(in); } catch (Exception e) { return null; }
    }

    static byte[] readAll(InputStream in) throws Exception {
        ByteArrayOutputStream o = new ByteArrayOutputStream();
        byte[] buf = new byte[65536];
        for (int n; (n = in.read(buf)) > 0; ) o.write(buf, 0, n);
        in.close();
        return o.toByteArray();
    }

    static void write(File f, byte[] b) throws Exception {
        File parent = f.getParentFile();
        if (parent != null) parent.mkdirs();
        File tmp = new File(f.getPath() + ".tmp");
        FileOutputStream o = new FileOutputStream(tmp);
        o.write(b);
        o.close();
        if (!tmp.renameTo(f)) { f.delete(); if (!tmp.renameTo(f)) throw new Exception("rename"); }
    }

    // -> "ok", "cached" or why the shipped shop is used (the English copy decides, as on PC)
    static String apply(File game, File cacheDir, String api) {        // api: https://api-xx.crazykartlegacy.com
        String result = "ok";
        for (int i = 0; i < SHOPS.length; i++) {
            File cached = new File(cacheDir, "shop-" + api.replaceAll("[^\\w.-]", "_") + "-" + (i == 0 ? "en" : "cn") + ".xml");
            File etagFile = new File(cached.getPath() + ".etag");
            byte[] old = read(cached), body = null;
            try {
                HttpURLConnection c = (HttpURLConnection) new URL(api + "/launcher/shopconfig" + SHOPS[i][1]).openConnection();
                c.setConnectTimeout(8000); c.setReadTimeout(8000);
                byte[] et = read(etagFile);
                if (et != null && isShop(old)) c.setRequestProperty("If-None-Match", new String(et, StandardCharsets.ISO_8859_1).trim());
                int code = c.getResponseCode();
                if (code == 304 && isShop(old)) body = old;
                else if (code == 200) {
                    body = readAll(c.getInputStream());
                    if (!isShop(body)) throw new Exception("bad shop file");
                    // old ETag out first, the new one only after its file: an ETag never vouches for another copy
                    etagFile.delete();
                    write(cached, body);
                    String tag = c.getHeaderField("ETag");
                    if (tag != null && !tag.isEmpty()) write(etagFile, tag.getBytes(StandardCharsets.ISO_8859_1));
                } else throw new Exception("shop api HTTP " + code);
            } catch (Exception e) {
                body = isShop(old) ? old : null;
                if (i == 0) result = body != null ? "cached" : String.valueOf(e.getMessage());
            }
            File target = Patcher.findIn(game, SHOPS[i][0]);
            if (body != null && target != null && target.isFile()) {      // a folder without the Chinese files: skip it
                try { write(target, body); } catch (Exception e) { if (i == 0) result = "could not write the shop"; }
            }
        }
        return result;
    }
}
