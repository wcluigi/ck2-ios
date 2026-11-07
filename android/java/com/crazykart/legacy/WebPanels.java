package com.crazykart.legacy;

import android.app.Activity;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.Gravity;
import android.view.View;
import android.webkit.CookieManager;
import android.webkit.JavascriptInterface;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import android.widget.PopupWindow;

import org.json.JSONObject;
import org.json.JSONTokener;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

// The game's web panels on a phone (8 Nov 2026, the user: "i want it to run on mobile also") -- ckweb.exe's job on PC
// (ck2server/ckweb/ckweb.cs is the reference; keep the two in step). hle_user32.c reports every CkWebHelpClass window
// whose title names a game-folder page (web/ranked/index.html?..); plat_android.c turns the panel's game rectangle into
// screen fractions and calls GameActivity.webPanel -> panel() here. The page is shown in a WebView in a PopupWindow over
// the panel; it talks to us through the same window.chrome.webview object WebView2 gives it on PC (SHIM):
//   ranked / find / cancel -> GET <api>/launcher/ranked[?do=..] with the sign-in, answered {id, status, lang, data}
//   ready  -> GetPropA(hwnd, "ckready") turns true: the game's per-frame show (ranked_html.py HOLD) shows the panel
//   close  -> WM_CLOSE to the panel (the game sees it gone and hides its overlay)
//   board  -> the Leaderboard popup: web/ranked/board.html with the site over its content area; its "home" goes back
// The view loads (invisible, untouchable) as soon as the panel exists, so the page has drawn when the game shows it.
final class WebPanels {
    static final String TAG = "ck2web";
    static final String BOARD_SITE = "https://crazykartlegacy.com/";
    // what WebView2 gives a page on PC: postMessage(obj) out, 'message' events {data: obj} in
    static final String SHIM = "<script>(function(){var L=[];window.chrome=window.chrome||{};window.chrome.webview={"
            + "postMessage:function(m){CKWeb.post(JSON.stringify(m));},"
            + "addEventListener:function(t,f){if(t==='message')L.push(f);},"
            + "removeEventListener:function(t,f){var i=L.indexOf(f);if(i>=0)L.splice(i,1);}};"
            + "window.__ckweb=function(d){for(var i=0;i<L.length;i++){try{L[i]({data:d});}catch(e){}}};})();</script>";

    final Activity act;
    final String api, user, key, lang;     // lang "zh" / "en" (the login screen's choice = the game's language)
    final File game;
    final Handler ui = new Handler(Looper.getMainLooper());
    final ExecutorService net = Executors.newCachedThreadPool();
    final Map<Integer, Panel> panels = new HashMap<Integer, Panel>();
    PopupWindow board;
    WebView boardSite;
    PopupWindow popup;                     // a server-asked popup (map ban, Rename Card): one at a time
    WebView popupWeb;
    int boardOwner;
    String boardUrl;

    WebPanels(Activity act, String api, String user, String key, String lang, File game) {
        this.act = act; this.api = api; this.user = user; this.key = key; this.lang = "zh".equals(lang) ? "zh" : "en"; this.game = game;
    }

    final class Panel {
        final int hwnd;
        final WebView web;
        final PopupWindow pop;
        String page = "";
        boolean ready, visible;
        float fx, fy, fw, fh;
        Panel(int hwnd) {
            this.hwnd = hwnd;
            web = newWeb();
            web.addJavascriptInterface(new Bridge(this), "CKWeb");
            web.setAlpha(0f);
            pop = new PopupWindow(web, 1, 1, false);
            pop.setTouchable(false);
            pop.setClippingEnabled(false);
        }
    }

    WebView newWeb() {
        WebView w = new WebView(act);
        WebSettings s = w.getSettings();
        s.setJavaScriptEnabled(true);
        s.setDomStorageEnabled(true);
        s.setAllowFileAccess(true);            // the page's frame.png next to it
        s.setTextZoom(100);                    // the page sizes itself from the panel, not the phone's font size
        s.setMediaPlaybackRequiresUserGesture(true);
        w.setBackgroundColor(0xff26292d);
        w.setVerticalScrollBarEnabled(false);
        w.setHorizontalScrollBarEnabled(false);
        w.setOverScrollMode(View.OVER_SCROLL_NEVER);
        return w;
    }

    // ---- from the game (any thread): page "" = the panel is gone; x/y/w/h = fractions of the screen ----
    void panel(final int hwnd, final String page, final float x, final float y, final float w, final float h, final boolean vis) {
        ui.post(new Runnable() { public void run() { apply(hwnd, page, x, y, w, h, vis); } });
    }

    void apply(int hwnd, String page, float x, float y, float w, float h, boolean vis) {
        Panel p = panels.get(hwnd);
        if (page == null || page.isEmpty()) { if (p != null) remove(p); return; }
        if (p == null) { p = new Panel(hwnd); panels.put(hwnd, p); }
        if (!page.equals(p.page)) { p.page = page; p.ready = false; load(p); }
        p.fx = x; p.fy = y; p.fw = w; p.fh = h;
        p.visible = vis;
        place(p);
    }

    void place(final Panel p) {
        View decor = act.getWindow().getDecorView();
        if (decor.getWindowToken() == null || decor.getWidth() == 0) {        // not laid out yet: try again shortly
            ui.postDelayed(new Runnable() { public void run() { if (panels.get(p.hwnd) == p) place(p); } }, 100);
            return;
        }
        int W = decor.getWidth(), H = decor.getHeight();
        int x = Math.round(p.fx * W), y = Math.round(p.fy * H), w = Math.max(1, Math.round(p.fw * W)), h = Math.max(1, Math.round(p.fh * H));
        p.web.setAlpha(p.visible ? 1f : 0f);
        p.pop.setTouchable(p.visible);
        if (!p.pop.isShowing()) p.pop.showAtLocation(decor, Gravity.TOP | Gravity.START, x, y);
        p.pop.update(x, y, w, h, true);
    }

    // the page with SHIM first; the page's own address (query kept: ?lang=, ?a=) as the base, so relative files load
    void load(final Panel p) {
        int q = p.page.indexOf('?');
        String path = (q < 0 ? p.page : p.page.substring(0, q)).replace('\\', '/');
        File f = new File(game, path);
        String html;
        try { html = new String(readAll(new FileInputStream(f)), StandardCharsets.UTF_8); }
        catch (Exception e) { Log.w(TAG, "page " + f + ": " + e); return; }
        int head = html.toLowerCase(Locale.ROOT).indexOf("<head>");
        html = head < 0 ? SHIM + html : html.substring(0, head + 6) + SHIM + html.substring(head + 6);
        p.web.loadDataWithBaseURL(Uri.fromFile(f).toString() + (q < 0 ? "" : p.page.substring(q)), html, "text/html", "utf-8", null);
        ui.postDelayed(new Runnable() { public void run() { reveal(p); } }, 2500);       // ckweb's fallback
    }

    void reveal(Panel p) {
        if (p.ready || panels.get(p.hwnd) != p) return;
        p.ready = true;
        GameActivity.nativeWebReady(p.hwnd);
    }

    void remove(Panel p) {
        panels.remove(p.hwnd);
        if (board != null && boardOwner == p.hwnd) closeBoard();            // the board goes with its panel
        p.pop.dismiss();
        p.web.destroy();
    }

    // Android's Back on an open panel: the page's own Esc (closes Rewards / Help first, then the panel)
    void back() {
        ui.post(new Runnable() { public void run() {
            if (board != null) { closeBoard(); return; }
            for (Panel p : panels.values())
                if (p.visible) p.web.evaluateJavascript("document.dispatchEvent(new KeyboardEvent('keydown',{key:'Escape',bubbles:true}))", null);
        } });
    }

    void closeAll() {
        for (Panel p : panels.values().toArray(new Panel[0])) remove(p);
        closeBoard();
        closePopup();
        net.shutdownNow();
    }

    // ---- the page's messages (JavaBridge thread) ----
    final class Bridge {
        final Panel p;
        Bridge(Panel p) { this.p = p; }
        @JavascriptInterface public void post(String json) {
            JSONObject m;
            try { m = new JSONObject(json); } catch (Exception e) { return; }
            final int id = m.optInt("id", 0);
            String op = m.optString("op", "");
            if (op.equals("ready")) ui.post(new Runnable() { public void run() { reveal(p); } });
            else if (op.equals("close")) GameActivity.nativeWebClose(p.hwnd);
            else if (op.equals("board")) {
                final String url = m.optString("url", "");
                if (url.startsWith(BOARD_SITE)) ui.post(new Runnable() { public void run() { openBoard(p, url); } });
                else Log.w(TAG, "leaderboard: refused url " + url);
            }
            else if (op.equals("ranked")) ask(p, id, "/launcher/ranked");
            else if (op.equals("find")) ask(p, id, "/launcher/ranked?do=find");
            else if (op.equals("cancel")) ask(p, id, "/launcher/ranked?do=cancel");
            else reply(p, id, 400, "null");
        }
    }

    void ask(final Panel p, int id, String path) { get(p.web, id, path); }

    // GET <api><path> with the sign-in; the answer goes into `web` as the bridge reply {id, status, lang, data}
    // (status 1: not signed in, 0: unreachable; only JSON goes into the page). Panels and popups alike.
    void get(final WebView web, final int id, final String path) {
        if (api == null || user == null || key == null) { reply(web, id, 1, "null"); return; }
        net.execute(new Runnable() { public void run() {
            int status = 0;
            String body = "null";
            HttpURLConnection c = null;
            try {
                c = (HttpURLConnection) new URL(api + path).openConnection();
                c.setConnectTimeout(8000);
                c.setReadTimeout(8000);
                c.setRequestProperty("Authorization", "Bearer " + key);
                c.setRequestProperty("X-CK-User", user);
                c.setRequestProperty("X-CK-Lang", lang.equals("zh") ? "cn" : "en");
                status = c.getResponseCode();
                if (status < 400) body = new String(readAll(c.getInputStream()), StandardCharsets.UTF_8);
            } catch (Exception e) {
                if (status == 0) Log.w(TAG, path + ": " + e);
            } finally {
                if (c != null) c.disconnect();
            }
            try { new JSONTokener(body).nextValue(); } catch (Exception e) { body = "null"; }
            if (body.trim().isEmpty()) body = "null";
            reply(web, id, status, body);
        } });
    }

    void reply(Panel p, int id, int status, String data) { reply(p.web, id, status, data); }

    void reply(final WebView web, int id, int status, String data) {
        final String js = "window.__ckweb&&window.__ckweb({\"id\":" + id + ",\"status\":" + status + ",\"lang\":\"" + lang + "\",\"data\":" + data + "})";
        ui.post(new Runnable() { public void run() { if (live(web)) web.evaluateJavascript(js, null); } });
    }

    boolean live(WebView web) {                        // still on screen (not closed meanwhile)
        if (web == popupWeb) return true;
        for (Panel p : panels.values()) if (p.web == web) return true;
        return false;
    }

    // ---- the Leaderboard popup: board.html draws the frame, header, Leaderboard (home) and X; the site sits over its
    // content area (ckweb.cs OpenBoard: 72% x 82% of the game, k = frame scale; here in CSS pixels) ----
    void openBoard(Panel owner, final String url) {
        if (board != null) return;
        View decor = act.getWindow().getDecorView();
        int W = decor.getWidth(), H = decor.getHeight();
        if (W == 0) return;
        float dens = act.getResources().getDisplayMetrics().density;
        int w = (int) (W * 0.72), h = (int) (H * 0.82);
        double wc = w / dens, hc = h / dens, k = Math.max(1.0, Math.min(2.5, hc / 420.0));
        int x = (int) ((9 * k + 0.05 * wc) * dens), y = (int) ((46 * k + 0.05 * hc) * dens), bottom = (int) ((9 * k + 0.05 * hc) * dens);
        FrameLayout box = new FrameLayout(act);
        WebView frame = newWeb();
        frame.addJavascriptInterface(new BoardBridge(), "CKWeb");
        box.addView(frame, new FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));
        final WebView site = newWeb();
        site.setBackgroundColor(0xff15171a);
        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(Math.max(1, w - 2 * x - 2), Math.max(1, h - y - bottom - 2));
        lp.leftMargin = x + 1;
        lp.topMargin = y + 1;
        box.addView(site, lp);
        final String css = iniCss();
        site.setWebViewClient(new WebViewClient() {
            @Override public void onPageFinished(WebView v, String u) {         // ckweb.ini Css (hides the site header)
                if (css.isEmpty() || !u.startsWith("http")) return;
                v.evaluateJavascript("(function(){var s=document.createElement('style');s.textContent=" + JSONObject.quote(css)
                        + ";(document.head||document.documentElement).appendChild(s);})()", null);
            }
        });
        CookieManager.getInstance().setCookie(BOARD_SITE, "ck_lang=" + lang + "; path=/; max-age=31536000");
        File f = new File(game, "web/ranked/board.html");
        try {
            String html = new String(readAll(new FileInputStream(f)), StandardCharsets.UTF_8);
            int head = html.toLowerCase(Locale.ROOT).indexOf("<head>");
            html = head < 0 ? SHIM + html : html.substring(0, head + 6) + SHIM + html.substring(head + 6);
            frame.loadDataWithBaseURL(Uri.fromFile(f).toString() + "?k=" + String.format(Locale.ROOT, "%.2f", k)
                    + (lang.equals("zh") ? "&lang=zh" : ""), html, "text/html", "utf-8", null);
        } catch (Exception e) { Log.w(TAG, "leaderboard frame: " + e); }
        site.loadUrl(url);
        board = new PopupWindow(box, w, h, false);
        board.setTouchable(true);
        board.setClippingEnabled(false);
        board.showAtLocation(decor, Gravity.TOP | Gravity.START, (W - w) / 2, (H - h) / 2);
        boardOwner = owner.hwnd;
        boardUrl = url;
        boardSite = site;
    }

    void closeBoard() {
        if (board == null) return;
        board.dismiss();
        if (boardSite != null) boardSite.destroy();
        board = null;
        boardSite = null;
    }

    final class BoardBridge {
        @JavascriptInterface public void post(final String json) {
            ui.post(new Runnable() { public void run() {
                if (json.contains("\"close\"")) closeBoard();
                else if (json.contains("\"home\"") && boardSite != null) boardSite.loadUrl(boardUrl);   // header Leaderboard button
            } });
        }
    }

    // ---- server-asked popups (ckweb --popup <name> on PC): the voice poll's "popup" (VoiceChat.java). web/<name>/index.html
    // centred at ckweb's size for it, shown once the page says "ready" (or after 2.5 s); "state" / "submit" {name} ask
    // the popup's API, "close" closes it. Focusable: the Rename Card types a name; Back closes it. ----
    static final Map<String, String> POPUP_API = new HashMap<String, String>();
    static final Map<String, float[]> POPUP_SIZE = new HashMap<String, float[]>();
    static {
        POPUP_API.put("rename", "/launcher/rename");  POPUP_SIZE.put("rename", new float[]{0.60f, 0.24f});
        POPUP_API.put("mapban", "/launcher/mapban");  POPUP_SIZE.put("mapban", new float[]{0.70f, 0.80f});
    }

    void popup(final String name) {
        ui.post(new Runnable() { public void run() { openPopup(name); } });
    }

    void openPopup(final String name) {
        if (!POPUP_API.containsKey(name) || popup != null) return;
        File f = new File(game, "web/" + name + "/index.html");
        View decor = act.getWindow().getDecorView();
        if (!f.isFile() || decor.getWidth() == 0) return;
        String html;
        try { html = new String(readAll(new FileInputStream(f)), StandardCharsets.UTF_8); }
        catch (Exception e) { Log.w(TAG, "popup " + name + ": " + e); return; }
        int head = html.toLowerCase(Locale.ROOT).indexOf("<head>");
        html = head < 0 ? SHIM + html : html.substring(0, head + 6) + SHIM + html.substring(head + 6);
        float[] size = POPUP_SIZE.get(name);
        final int W = decor.getWidth(), H = decor.getHeight(), w = (int) (W * size[0]), h = (int) (H * size[1]);
        final WebView web = newWeb();
        final String path = POPUP_API.get(name);
        web.addJavascriptInterface(new Object() {
            @JavascriptInterface public void post(String json) {
                JSONObject m;
                try { m = new JSONObject(json); } catch (Exception e) { return; }
                int id = m.optInt("id", 0);
                String op = m.optString("op", ""), arg = m.optString("name", null);
                if (op.equals("ready")) ui.post(new Runnable() { public void run() { showPopup(web); } });
                else if (op.equals("close")) ui.post(new Runnable() { public void run() { if (popupWeb == web) closePopup(); } });
                else if (op.equals("state")) get(web, id, path);
                else if (op.equals("submit") && arg != null && arg.length() <= 40) get(web, id, path + "?name=" + Uri.encode(arg));
            }
        }, "CKWeb");
        web.setAlpha(0f);
        web.loadDataWithBaseURL(Uri.fromFile(f).toString() + (lang.equals("zh") ? "?lang=zh" : ""), html, "text/html", "utf-8", null);
        popup = new PopupWindow(web, w, h, true);
        popup.setClippingEnabled(false);
        popup.setOnDismissListener(new PopupWindow.OnDismissListener() {
            public void onDismiss() { if (popupWeb == web) { popup = null; popupWeb = null; web.destroy(); } }
        });
        popup.showAtLocation(decor, Gravity.TOP | Gravity.START, (W - w) / 2, (H - h) / 2);
        popupWeb = web;
        ui.postDelayed(new Runnable() { public void run() { showPopup(web); } }, 2500);
    }

    void showPopup(WebView web) { if (popupWeb == web) web.setAlpha(1f); }

    void closePopup() {
        if (popup == null) return;
        PopupWindow p = popup;
        p.dismiss();                                   // onDismiss destroys the view
    }

    // [Web] Css= in the game folder's ckweb.ini (the same file ckweb.exe reads on PC)
    String iniCss() {
        try {
            String ini = new String(readAll(new FileInputStream(new File(game, "ckweb.ini"))), StandardCharsets.UTF_8);
            boolean web = false;
            for (String line : ini.split("\r?\n")) {
                String t = line.trim();
                if (t.startsWith("[")) web = t.equalsIgnoreCase("[Web]");
                else if (web && t.indexOf('=') > 0 && t.substring(0, t.indexOf('=')).trim().equalsIgnoreCase("Css"))
                    return t.substring(t.indexOf('=') + 1).trim();
            }
        } catch (Exception e) { /* no ckweb.ini: the site as it is */ }
        return "";
    }

    static byte[] readAll(InputStream in) throws Exception { return VoiceChat.readAll(in); }
}
