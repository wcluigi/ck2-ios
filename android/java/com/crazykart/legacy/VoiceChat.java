package com.crazykart.legacy;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.util.Log;
import android.webkit.JavascriptInterface;
import android.webkit.PermissionRequest;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;

import org.json.JSONArray;
import org.json.JSONObject;

import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

// Room voice chat, as the PC launcher does it (Launcher/voice.js + voice-page.js): the game server is only the
// switchboard (GET /launcher/voice long poll = my room + who there has voice on + connection setup messages;
// POST /launcher/voice/signal, /speak). The audio goes peer to peer with WebRTC in a hidden WebView running the
// launcher's own voice-page.js (assets/voice-page.js, a copy: re-sync it when the launcher's changes).
// The microphone permission is asked when voice gets switched on in the game (the room's Voice button or
// /voicechat), not at start.
final class VoiceChat {
    static final String TAG = "ck2voice";
    static final int MIC_REQUEST = 7;
    // shortcut: STUN only like the launcher, no TURN relay -- players behind blocking NATs hear nobody
    static final String ICE = "[{\"urls\":[\"stun:stun.cloudflare.com:3478\",\"stun:stun.l.google.com:19302\"]},{\"urls\":\"stun:stun.miwifi.com:3478\"}]";
    // window.voice as voice-preload.js gives it to the page in the launcher
    static final String BRIDGE = "window.voice={onState:function(f){window.__ckState=f;},"
            + "signal:function(to,data){CKVoice.signal(JSON.stringify({to:to,data:data}));return Promise.resolve(true);},"
            + "status:function(t){CKVoice.status(String(t));},speak:function(on){CKVoice.speak(!!on);}};";

    final Activity act;
    final String base, user, key, lang;
    final boolean accessories;          // other players' kart accessories shown (Settings; the server reads X-CK-Accessories)
    final ExecutorService posts = Executors.newSingleThreadExecutor();     // setup messages in order
    WebView web;
    volatile boolean running;
    volatile HttpURLConnection polling;
    PermissionRequest pending;          // the page's microphone request, waiting for the player's answer
    boolean asked, asking;

    VoiceChat(Activity act, String api, String user, String key, String lang, boolean accessories) {     // api: https://api-xx...
        this.act = act; this.base = api; this.user = user; this.key = key; this.lang = lang; this.accessories = accessories;
    }

    void start() {
        try {
            InputStream in = act.getAssets().open("voice-page.js");
            String page = new String(readAll(in), StandardCharsets.UTF_8);
            web = new WebView(act);
            WebSettings s = web.getSettings();
            s.setJavaScriptEnabled(true);
            s.setMediaPlaybackRequiresUserGesture(false);
            web.addJavascriptInterface(new Bridge(), "CKVoice");
            web.setWebChromeClient(new WebChromeClient() {
                @Override public void onPermissionRequest(PermissionRequest r) {
                    boolean micOnly = true;
                    for (String res : r.getResources()) if (!PermissionRequest.RESOURCE_AUDIO_CAPTURE.equals(res)) micOnly = false;
                    if (!micOnly) { r.deny(); return; }
                    if (hasMic()) { r.grant(r.getResources()); return; }
                    if (pending != null) pending.deny();
                    pending = r;
                    askMic();
                }
            });
            // an https origin: getUserMedia needs a secure context
            web.loadDataWithBaseURL("https://voice.ck2.local/", "<!doctype html><html><head><meta charset=\"utf-8\"></head><body><script>"
                    + BRIDGE + "</script><script>" + page + "</script></body></html>", "text/html", "utf-8", null);
            web.onResume();
            web.resumeTimers();
        } catch (Exception e) {
            Log.w(TAG, "voice page: " + e);
            return;
        }
        running = true;
        new Thread(new Runnable() { public void run() { loop(); } }, "ck2voice").start();
    }

    void stop() {
        running = false;
        HttpURLConnection c = polling;
        if (c != null) c.disconnect();
        posts.shutdownNow();
        if (pending != null) { pending.deny(); pending = null; }
        if (web != null) { web.destroy(); web = null; }      // closes the peer connections and the microphone
    }

    boolean hasMic() { return act.checkSelfPermission(Manifest.permission.RECORD_AUDIO) == PackageManager.PERMISSION_GRANTED; }

    // UI thread. Once per game: a player who said no is not asked again on every poll.
    void askMic() {
        if (hasMic()) { if (pending != null) { pending.grant(pending.getResources()); pending = null; } return; }
        if (asking) return;
        if (asked) { if (pending != null) { pending.deny(); pending = null; } return; }
        asked = asking = true;
        act.requestPermissions(new String[]{Manifest.permission.RECORD_AUDIO}, MIC_REQUEST);
    }

    // GameActivity.onRequestPermissionsResult
    void onMicAnswer(boolean granted) {
        asking = false;
        Log.i(TAG, "microphone " + (granted ? "allowed" : "refused"));
        if (pending == null) return;
        if (granted) pending.grant(pending.getResources()); else pending.deny();     // refused: still hears the room
        pending = null;
    }

    HttpURLConnection open(String path) throws Exception {
        HttpURLConnection c = (HttpURLConnection) new URL(base + path).openConnection();
        c.setRequestProperty("Authorization", "Bearer " + key);
        c.setRequestProperty("X-CK-User", user);
        c.setRequestProperty("X-CK-Lang", lang);
        c.setRequestProperty("X-CK-Ping", "room,race");
        c.setRequestProperty("X-CK-Accessories", accessories ? "on" : "off");
        c.setConnectTimeout(8000);
        return c;
    }

    void loop() {
        String rev = "";
        while (running) {
            try {
                HttpURLConnection c = open("/launcher/voice?since=" + URLEncoder.encode(rev, "UTF-8"));
                c.setReadTimeout(45000);          // the server answers within 25 s
                polling = c;
                int code = c.getResponseCode();
                if (code == 401) { Log.w(TAG, "voice: sign in again"); pause(30000); continue; }
                if (code == 404) { pause(60000); continue; }        // a server without voice
                if (code != 200) throw new Exception("HTTP " + code);
                JSONObject st = new JSONObject(new String(readAll(c.getInputStream()), StandardCharsets.UTF_8));
                rev = st.optString("rev", "");
                if (st.optBoolean("on")) act.runOnUiThread(new Runnable() { public void run() { askMic(); } });
                final String popup = st.optString("popup", "");          // the server asks for a popup (map ban, Rename Card)
                if (!popup.isEmpty() && act instanceof GameActivity && ((GameActivity) act).web != null) ((GameActivity) act).web.popup(popup);
                st.put("ice", new JSONArray(ICE));
                st.put("audio", new JSONObject().put("noise", "standard"));     // RNNoise model not shipped in the APK
                final String js = "window.__ckState&&window.__ckState(" + st + ")";
                act.runOnUiThread(new Runnable() { public void run() { if (web != null) web.evaluateJavascript(js, null); } });
            } catch (Exception e) {
                if (running) pause(3000);         // server restarting, connection lost: poll again
            }
        }
    }

    void post(final String path, final String body) {
        if (!running) return;
        try {
            posts.execute(new Runnable() { public void run() {
                try {
                    HttpURLConnection c = open(path);
                    c.setReadTimeout(8000);
                    c.setDoOutput(true);
                    c.setRequestMethod("POST");
                    c.setRequestProperty("Content-Type", "application/json");
                    OutputStream o = c.getOutputStream();
                    o.write(body.getBytes(StandardCharsets.UTF_8));
                    o.close();
                    c.getResponseCode();
                    c.disconnect();
                } catch (Exception e) { Log.w(TAG, path + ": " + e); }
            } });
        } catch (Exception e) { /* stopped */ }
    }

    final class Bridge {
        @JavascriptInterface public void signal(String json) { post("/launcher/voice/signal", json); }
        @JavascriptInterface public void speak(boolean on) { post("/launcher/voice/speak", on ? "{\"on\":true}" : "{\"on\":false}"); }
        @JavascriptInterface public void status(String text) { if (!text.isEmpty()) Log.i(TAG, text); }
    }

    static void pause(long ms) { try { Thread.sleep(ms); } catch (InterruptedException e) { /* stop */ } }

    static byte[] readAll(InputStream in) throws Exception {
        ByteArrayOutputStream b = new ByteArrayOutputStream();
        byte[] buf = new byte[8192];
        for (int n; (n = in.read(buf)) > 0; ) b.write(buf, 0, n);
        in.close();
        return b.toByteArray();
    }
}
