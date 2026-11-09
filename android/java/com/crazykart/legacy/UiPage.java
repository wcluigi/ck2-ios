package com.crazykart.legacy;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.graphics.Color;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.PopupWindow;

// The phone UI in the Claude design (9 Nov 2026, the user: "go html"): webui/ served by the runtime's bridge
// (runtime/mobile/ui_bridge.c, http://127.0.0.1:6930/ui/...) in one full-screen WebView over the game. The runtime
// says when (plat_ui_show): only on the screens the page draws; every other screen, popup and the races stay the game's.
// The page is loaded at once (hidden, letting touches through) so it can tell the runtime which screens it draws;
// showing / hiding then only switches the view and whether its window takes touches.
final class UiPage {
    final Activity act;
    final String api, user, key, lang;
    WebView web;
    PopupWindow win;
    String url;
    boolean want;

    UiPage(Activity act, String api, String user, String key, String lang) {
        this.act = act; this.api = api; this.user = user; this.key = key; this.lang = lang == null ? "en" : lang;
    }

    // The page's server data (the player's profile, worn items, friends): CKNative.get("/launcher/me", id) -> GET
    // <api>/launcher/... with the launcher key, answered as window.__ckNative(id, status, body). The key stays here.
    final class Native {
        @android.webkit.JavascriptInterface
        public void get(final String path, final int id) {
            if (path == null || !path.startsWith("/launcher/") || api == null || key == null) { answer(id, 0, "null"); return; }
            new Thread(new Runnable() { public void run() {
                int status = 0;
                String body = "null";
                java.net.HttpURLConnection c = null;
                try {
                    String q = (path.contains("?") ? "&" : "?") + "user=" + java.net.URLEncoder.encode(user == null ? "" : user, "UTF-8");
                    c = (java.net.HttpURLConnection) new java.net.URL(api + path + q).openConnection();   // /launcher/friends wants ?user=
                    c.setConnectTimeout(8000);
                    c.setReadTimeout(8000);
                    c.setRequestProperty("Authorization", "Bearer " + key);
                    c.setRequestProperty("X-CK-User", user);
                    c.setRequestProperty("X-CK-Lang", lang.equals("zh") ? "cn" : "en");
                    status = c.getResponseCode();
                    if (status < 400) body = new String(VoiceChat.readAll(c.getInputStream()), java.nio.charset.StandardCharsets.UTF_8);
                } catch (Exception e) { /* status 0: unreachable */ }
                finally { if (c != null) c.disconnect(); }
                try { new org.json.JSONTokener(body).nextValue(); } catch (Exception e) { body = "null"; }
                answer(id, status, body.trim().isEmpty() ? "null" : body);
            } }).start();
        }
    }
    void answer(int id, int status, String body) {
        final String js = "window.__ckNative&&window.__ckNative(" + id + "," + status + "," + body + ")";
        act.runOnUiThread(new Runnable() { public void run() { if (web != null) web.evaluateJavascript(js, null); } });
    }

    void show(final String u, final boolean visible) {
        act.runOnUiThread(new Runnable() { public void run() { apply(u, visible); } });
    }

    @SuppressLint("SetJavaScriptEnabled")
    void apply(String u, boolean visible) {
        want = visible;
        if (web == null) {
            if (u == null || u.isEmpty()) return;
            web = new WebView(act);
            WebSettings s = web.getSettings();
            s.setJavaScriptEnabled(true);
            s.setDomStorageEnabled(true);
            s.setMediaPlaybackRequiresUserGesture(false);
            web.setBackgroundColor(Color.BLACK);
            web.setWebViewClient(new WebViewClient());
            web.setOverScrollMode(View.OVER_SCROLL_NEVER);
            web.setVisibility(View.INVISIBLE);
            web.addJavascriptInterface(new Native(), "CKNative");
            web.loadUrl(u);
            url = u;
            win = new PopupWindow(web, ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT, false);
            win.setClippingEnabled(false);
            win.setTouchable(false);
        } else if (u != null && !u.isEmpty() && !u.equals(url)) {
            web.loadUrl(u);
            url = u;
        }
        View decor = act.getWindow().getDecorView();
        if (!win.isShowing()) {
            if (decor.getWindowToken() == null) {                 // the game window is not up yet: try again shortly
                decor.postDelayed(new Runnable() { public void run() { apply(null, want); } }, 300);
                return;
            }
            win.showAtLocation(decor, Gravity.TOP | Gravity.START, 0, 0);
        }
        boolean was = web.getVisibility() == View.VISIBLE;
        web.setVisibility(visible ? View.VISIBLE : View.INVISIBLE);
        win.setTouchable(visible);                                // hidden: touches go to the game under it
        win.setFocusable(visible);
        win.update();
        if (was != visible) web.evaluateJavascript("window.__ckShown&&window.__ckShown(" + visible + ")", null);
    }

    void close() {
        act.runOnUiThread(new Runnable() { public void run() {
            if (win != null && win.isShowing()) win.dismiss();
            if (web != null) web.destroy();
            web = null; win = null;
        } });
    }
}
