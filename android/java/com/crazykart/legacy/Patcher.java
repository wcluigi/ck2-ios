package com.crazykart.legacy;

import android.util.Base64;

import org.json.JSONObject;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicLong;

// The PC launcher's patcher (Launcher/patcher.js) for the phone: the game data comes from the same signed patch
// the PC players get (ck2server /patch on India and Hong Kong, published by ck2server/release/publish_patch.py).
// - /patch/manifest.md5 first: equal to the last one finished (patchstate.json) and every file still there = done.
// - manifest.json must verify against the release key (Ed25519.java), and must not be older than the last one.
// - Each listed file is compared (size + mtime from patchstate.json, else hashed); changed ones are downloaded as
//   *.ckpart, checked against the sha256 and moved in. Skipped: Launcher/ (the PC launcher); the two shop files
//   (ShopSync puts the server's shop there at every Play) are only fetched when missing. Files go where the same name already is in any letter case (the game
//   looks names up ignoring case, runtime/mobile/plat.c host_path).
// - The manifest's "mobile" entry is this app's own newest build (versionCode, sha256, size): LoginActivity
//   installs it when it is newer than the running one.
final class Patcher {
    interface Progress { void step(int pct, String text); }

    static final class Result {
        String status = "offline", version;     // current | updated | partial | offline | refused
        int changed;
        List<String> failed = new ArrayList<>();
        JSONObject mobile;                      // the newest app build, from the signed manifest
        String base;                            // the server it came from (objects / the app download)
    }

    static final byte[] PUBLIC_KEY;
    static {
        byte[] spki = Base64.decode("MCowBQYDK2VwAyEAVwEjZ5H/7D6V2n9R8Iq7DtdID6aV/jOOpzgpdI8HPNQ=", Base64.DEFAULT);
        PUBLIC_KEY = Arrays.copyOfRange(spki, spki.length - 32, spki.length);
    }
    static final String STATE = "patchstate.json";
    static boolean zh;                   // the launcher's language (progress lines)

    final File game;
    final Progress prog;
    final Map<String, String[]> listings = new HashMap<>();

    Patcher(File game, Progress prog) { this.game = game; this.prog = prog; }

    static boolean skipped(String rel) { return rel.startsWith("Launcher/") || rel.toLowerCase(java.util.Locale.ROOT).endsWith(".exe"); }
    // fetched only when missing: replaced by the server's copy at every Play (ShopSync), so the shipped one is not restored
    static boolean keptIfPresent(String rel) { return rel.equals("data/config/shopconfig.xml") || rel.equals("CN/data/config/shopconfig.xml"); }

    static File findIn(File game, String rel) { return new Patcher(game, null).target(rel); }

    // urls: the picked server's /patch first, then the other (the PC launcher's order)
    Result run(String[] bases) {
        Result r = new Result();
        for (String b : bases) {
            r = from(b);
            if (!r.status.equals("offline") && !r.status.equals("refused") && !r.status.equals("partial")) return r;
        }
        return r;
    }

    static byte[] get(String url, int timeoutMs) throws Exception {
        Exception last = null;
        for (int i = 1; i <= 3; i++) {
            try {
                HttpURLConnection c = (HttpURLConnection) new URL(url).openConnection();
                c.setConnectTimeout(8000); c.setReadTimeout(timeoutMs); c.setUseCaches(false);
                if (c.getResponseCode() != 200) throw new Exception("HTTP " + c.getResponseCode());
                InputStream in = c.getInputStream();
                ByteArrayOutputStream o = new ByteArrayOutputStream();
                byte[] buf = new byte[65536];
                for (int n; (n = in.read(buf)) > 0; ) o.write(buf, 0, n);
                in.close();
                return o.toByteArray();
            } catch (Exception e) { last = e; Thread.sleep(1500L * i); }
        }
        throw last;
    }

    static String hex(byte[] b) {
        StringBuilder s = new StringBuilder();
        for (byte x : b) s.append(String.format("%02x", x & 255));
        return s.toString();
    }

    static String sha256(File f) {
        try (InputStream in = new FileInputStream(f)) {
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            byte[] buf = new byte[1 << 16];
            for (int n; (n = in.read(buf)) > 0; ) md.update(buf, 0, n);
            return hex(md.digest());
        } catch (Exception e) { return null; }
    }

    // the file a manifest path names: each part matched ignoring case against what is already there
    File target(String rel) {
        File cur = game;
        for (String part : rel.split("/")) {
            if (part.isEmpty() || part.equals(".") || part.equals("..")) return null;
            File exact = new File(cur, part);
            if (!exact.exists()) {
                String key = cur.getPath();
                String[] names = listings.get(key);
                if (names == null) { names = cur.list(); if (names == null) names = new String[0]; listings.put(key, names); }
                for (String n : names) if (n.equalsIgnoreCase(part)) { exact = new File(cur, n); break; }
            }
            cur = exact;
        }
        return cur;
    }

    JSONObject readState() {
        try (InputStream in = new FileInputStream(new File(game, STATE))) {
            ByteArrayOutputStream o = new ByteArrayOutputStream();
            byte[] buf = new byte[65536];
            for (int n; (n = in.read(buf)) > 0; ) o.write(buf, 0, n);
            return new JSONObject(new String(o.toByteArray(), StandardCharsets.UTF_8));
        } catch (Exception e) { return new JSONObject(); }
    }

    boolean filesIntact(JSONObject files) {
        if (files == null || files.length() == 0) return false;
        for (Iterator<String> it = files.keys(); it.hasNext(); ) {
            String rel = it.next();
            File f = target(rel);
            if (f == null) continue;
            if (!f.isFile() || f.length() != files.optJSONObject(rel).optLong("size", -1)) return false;
        }
        return true;
    }

    Result from(String base) {
        Result r = new Result();
        r.base = base;
        prog.step(2, zh ? "正在检查更新" : "Checking for updates");
        JSONObject state = readState();
        String md5;
        try { md5 = new String(get(base + "/manifest.md5", 8000), StandardCharsets.ISO_8859_1).trim(); } catch (Exception e) { return r; }
        if (md5.equals(state.optString("manifestMd5")) && filesIntact(state.optJSONObject("files"))) {   // nothing new
            r.status = "current"; r.version = state.optString("version", null); r.mobile = state.optJSONObject("mobile");
            return r;
        }
        byte[] body, sig;
        try {
            body = get(base + "/manifest.json", 120000);
            sig = get(base + "/manifest.json.sig", 20000);
        } catch (Exception e) { return r; }
        if (!Ed25519.verify(PUBLIC_KEY, body, sig)) { r.status = "refused"; return r; }
        JSONObject man;
        try { man = new JSONObject(new String(body, StandardCharsets.UTF_8)); } catch (Exception e) { r.status = "refused"; return r; }
        if (man.has("time") && man.optLong("time") < state.optLong("time", 0)) { r.status = "refused"; return r; }   // rollback
        r.version = man.optString("version", null);
        r.mobile = man.optJSONObject("mobile");

        JSONObject files = man.optJSONObject("files"), known = state.optJSONObject("files");
        if (files == null) { r.status = "refused"; return r; }
        if (known == null) known = new JSONObject();
        final JSONObject next = new JSONObject();
        final List<Object[]> todo = new ArrayList<>();
        int i = 0, n = files.length();
        try {
            for (Iterator<String> it = files.keys(); it.hasNext(); i++) {
                String rel = it.next();
                JSONObject want = files.getJSONObject(rel);
                File f = target(rel);
                if (f == null || skipped(rel) || !want.optString("sha256").matches("[0-9a-f]{64}")) continue;
                if (i % 50 == 0) prog.step(3 + i * 27 / n, (zh ? "正在检查游戏文件 (" : "Checking game files (") + i * 100 / n + "%)");
                long size = want.getLong("size");
                if (f.isFile() && keptIfPresent(rel)) continue;
                String sha = null;
                if (f.isFile() && f.length() == size) {
                    JSONObject k = known.optJSONObject(rel);
                    sha = k != null && k.optLong("size") == size && k.optLong("mtime") == f.lastModified() / 1000 ? k.optString("sha256") : sha256(f);
                }
                if (want.getString("sha256").equals(sha)) next.put(rel, new JSONObject().put("size", size).put("mtime", f.lastModified() / 1000).put("sha256", sha));
                else todo.add(new Object[]{rel, f, want});
            }
        } catch (Exception e) { r.status = "refused"; return r; }

        long total = 1;
        for (Object[] t : todo) total += ((JSONObject) t[2]).optLong("size");
        final long all = total;
        final AtomicLong got = new AtomicLong();
        final List<String> failed = java.util.Collections.synchronizedList(new ArrayList<String>());
        final int[] done = {0};
        ExecutorService pool = Executors.newFixedThreadPool(4);
        for (final Object[] t : todo) pool.execute(new Runnable() { public void run() {
            String rel = (String) t[0];
            File f = (File) t[1];
            JSONObject want = (JSONObject) t[2];
            File part = new File(f.getPath() + ".ckpart");
            try {
                String sha = want.getString("sha256");
                download(base + "/objects/" + sha, part, want.getLong("size"), sha, got, all);
                File parent = f.getParentFile();
                if (parent != null) parent.mkdirs();
                if (f.exists() && !f.delete()) throw new Exception("busy");
                if (!part.renameTo(f)) throw new Exception("rename");
                synchronized (next) { next.put(rel, new JSONObject().put("size", f.length()).put("mtime", f.lastModified() / 1000).put("sha256", sha)); }
            } catch (Exception e) {
                failed.add(rel);
                part.delete();
            }
            synchronized (done) {
                done[0]++;
                prog.step(30 + (int) (got.get() * 69 / all), String.format(java.util.Locale.ROOT, zh ? "正在下载更新  %d / %d 个文件  (%.0f / %.0f MB)" : "Downloading update  %d / %d files  (%.0f / %.0f MB)",
                        done[0], todo.size(), got.get() / 1048576.0, all / 1048576.0));
            }
        } });
        pool.shutdown();
        try { pool.awaitTermination(7, TimeUnit.DAYS); } catch (InterruptedException e) { return r; }

        boolean ok = failed.isEmpty();
        try {
            JSONObject st = new JSONObject();
            st.put("version", ok ? r.version : state.optString("version", null));
            st.put("manifestMd5", ok ? md5 : state.optString("manifestMd5", null));
            if (ok) st.put("files", next);
            else {                                   // keep what is known; the failed ones are fetched next time
                for (Iterator<String> it = next.keys(); it.hasNext(); ) { String k = it.next(); known.put(k, next.get(k)); }
                st.put("files", known);
            }
            st.put("time", ok ? man.optLong("time", 0) : state.optLong("time", 0));
            if (ok && r.mobile != null) st.put("mobile", r.mobile);
            FileOutputStream o = new FileOutputStream(new File(game, STATE));
            o.write(st.toString().getBytes(StandardCharsets.UTF_8));
            o.close();
        } catch (Exception ignored) { }
        r.failed = failed;
        r.changed = todo.size() - failed.size();
        r.status = !ok ? "partial" : todo.isEmpty() ? "current" : "updated";
        return r;
    }

    // stream an object to `to`, checking size + sha256
    static void download(String url, File to, long size, String sha, AtomicLong got, long all) throws Exception {
        Exception last = null;
        for (int i = 1; i <= 3; i++) {
            long mine = 0;
            try {
                File parent = to.getParentFile();
                if (parent != null) parent.mkdirs();
                HttpURLConnection c = (HttpURLConnection) new URL(url).openConnection();
                c.setConnectTimeout(8000); c.setReadTimeout(120000); c.setUseCaches(false);
                if (c.getResponseCode() != 200) throw new Exception("HTTP " + c.getResponseCode());
                MessageDigest md = MessageDigest.getInstance("SHA-256");
                try (InputStream in = c.getInputStream(); OutputStream o = new FileOutputStream(to)) {
                    byte[] buf = new byte[1 << 16];
                    for (int n; (n = in.read(buf)) > 0; ) { o.write(buf, 0, n); md.update(buf, 0, n); mine += n; got.addAndGet(n); }
                }
                if (mine != size || !hex(md.digest()).equals(sha)) throw new Exception("bad download");
                return;
            } catch (Exception e) {
                last = e;
                got.addAndGet(-mine);
                Thread.sleep(1500L * i);
            }
        }
        throw last;
    }
}
