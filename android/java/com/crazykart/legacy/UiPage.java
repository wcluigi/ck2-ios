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
    WebView web;
    PopupWindow win;
    String url;
    boolean want;

    UiPage(Activity act) { this.act = act; }

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
