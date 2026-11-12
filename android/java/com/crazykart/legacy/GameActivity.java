package com.crazykart.legacy;

import android.app.AlertDialog;
import android.app.NativeActivity;
import android.content.DialogInterface;
import android.os.Bundle;
import android.text.InputType;
import android.view.Display;
import android.view.WindowManager;
import android.view.inputmethod.EditorInfo;
import android.widget.EditText;

// The recompiled client (libck2.so) in a NativeActivity that asks for the panel's fastest display mode:
// without it the phone keeps the game at 60 Hz (a 144 Hz phone; ANativeWindow_setFrameRate alone was ignored).
// Also the race chat box: the game has no keyboard on a phone, so its Chat button (touch_ui.c) opens this dialog
// and the text goes back to the game as typed characters (nativeChat, registered by plat_android.c).
public class GameActivity extends NativeActivity {
    static native void nativeChat(String text);       // "" = cancelled
    static native void nativeText(String text);       // a game text field (nickname, room name...): no Enter
    static native void nativeWebReady(int hwnd);      // web panel drawn: GetPropA "ckready" (hle_user32.c)
    static native void nativeWebClose(int hwnd);      // the page's Close: WM_CLOSE to the panel
    VoiceChat voice;                                  // room voice chat (VoiceChat.java), the launcher's job on PC
    WebPanels web;                                    // the game's web panels (WebPanels.java), ckweb.exe's job on PC

    @Override
    protected void onCreate(Bundle saved) {
        super.onCreate(saved);
        Display d = getWindowManager().getDefaultDisplay();
        Display.Mode best = d.getMode();
        for (Display.Mode m : d.getSupportedModes())
            if (m.getPhysicalWidth() == best.getPhysicalWidth() && m.getPhysicalHeight() == best.getPhysicalHeight()
                    && m.getRefreshRate() > best.getRefreshRate()) best = m;
        // a frame rate cap (Settings 30 / 60 / 90 / 120): the slowest mode the cap divides evenly, so every frame stays
        // on screen equally long -- a 60 cap on a 144 Hz panel showed frames for 2 or 3 refreshes (judder)
        int cap = getIntent().getIntExtra("fpscap", 0);
        if (cap > 0) {
            Display.Mode even = null;
            for (Display.Mode m : d.getSupportedModes()) {
                if (m.getPhysicalWidth() != best.getPhysicalWidth() || m.getPhysicalHeight() != best.getPhysicalHeight()) continue;
                int hz = Math.round(m.getRefreshRate());
                if (hz >= cap && hz % cap == 0 && (even == null || m.getRefreshRate() < even.getRefreshRate())) even = m;
            }
            if (even != null) best = even;
        }
        WindowManager.LayoutParams lp = getWindow().getAttributes();
        lp.preferredDisplayModeId = best.getModeId();
        lp.preferredRefreshRate = best.getRefreshRate();
        getWindow().setAttributes(lp);
        String user = getIntent().getStringExtra("user"), key = getIntent().getStringExtra("key");
        if (user != null && key != null && getIntent().getStringExtra("api") != null) {
            voice = new VoiceChat(this, getIntent().getStringExtra("api"), user, key, getIntent().getStringExtra("lang"),
                    getIntent().getBooleanExtra("accessories", true));
            voice.start();
        }
        java.io.File ext = getExternalFilesDir(null);      // = NativeActivity's externalDataPath (plat_android.c game dir)
        web = new WebPanels(this, getIntent().getStringExtra("api"), user, key, getIntent().getStringExtra("lang"),
                new java.io.File(ext != null ? ext : getFilesDir(), "game"));
        // stays connected in the background (KeepAliveService); started here, while the game is on screen (Android 12+
        // refuses foreground services started from the background)
        try { startForegroundService(new android.content.Intent(this, KeepAliveService.class)); } catch (Exception e) { android.util.Log.w("ck2", "keep-alive service: " + e); }
    }

    @Override
    protected void onDestroy() {
        stopService(new android.content.Intent(this, KeepAliveService.class));
        if (voice != null) voice.stop();
        if (web != null) web.closeAll();
        if (ui != null) ui.close();
        super.onDestroy();
    }

    @Override
    public void onRequestPermissionsResult(int code, String[] perms, int[] res) {
        if (code == VoiceChat.MIC_REQUEST && voice != null) voice.onMicAnswer(res.length > 0 && res[0] == android.content.pm.PackageManager.PERMISSION_GRANTED);
    }

    // called from the game thread (plat_android.c): a web panel appeared / moved / showed / went (page "")
    public void webPanel(int hwnd, String page, float x, float y, float w, float h, boolean visible) {
        if (web != null) web.panel(hwnd, page, x, y, w, h, visible);
    }
    // Android's Back while a web panel is up (plat_android.c): the page's Esc
    public void webBack() { if (web != null) web.back(); }

    // called from the game thread (plat_android.c plat_ui_show): the phone UI page shown / hidden (UiPage.java)
    UiPage ui;
    public void uiPage(String url, boolean visible) {
        if (ui == null) ui = new UiPage(this, getIntent().getStringExtra("api"), getIntent().getStringExtra("user"),
                getIntent().getStringExtra("key"), getIntent().getStringExtra("lang"));
        ui.show(url, visible);
    }

    // called from the game thread (plat_android.c)
    public void openChat() {
        runOnUiThread(new Runnable() { public void run() { showChat(); } });
    }

    // Full-screen typing (11 Nov 2026, the user: "make the typing fullscreen"): the small dialog was half under the
    // landscape keyboard. A dark full-screen panel, the text field + Send / Cancel across the top, keyboard below.
    void showChat() {
        final android.app.Dialog dlg = new android.app.Dialog(this, android.R.style.Theme_Black_NoTitleBar_Fullscreen);
        final boolean[] done = {false};
        final EditText e = new EditText(this);
        e.setSingleLine(true);
        e.setInputType(InputType.TYPE_CLASS_TEXT);
        e.setImeOptions(EditorInfo.IME_ACTION_SEND | EditorInfo.IME_FLAG_NO_EXTRACT_UI | EditorInfo.IME_FLAG_NO_FULLSCREEN);
        e.setHint("Message");
        e.setTextSize(20);
        e.setTextColor(0xFFFFFFFF);
        e.setHintTextColor(0x80FFFFFF);
        e.setBackgroundColor(0xFF1E2538);
        int pad = (int) (12 * getResources().getDisplayMetrics().density);
        e.setPadding(pad, pad, pad, pad);
        final Runnable send = new Runnable() { public void run() {
            if (done[0]) return;
            done[0] = true;
            nativeChat(e.getText().toString());
            dlg.dismiss();
        } };
        final Runnable cancel = new Runnable() { public void run() {
            if (done[0]) return;
            done[0] = true;
            nativeChat("");
            dlg.dismiss();
        } };
        android.widget.Button bs = new android.widget.Button(this), bc = new android.widget.Button(this);
        bs.setText("Send"); bc.setText("Cancel");
        bs.setOnClickListener(new android.view.View.OnClickListener() { public void onClick(android.view.View v) { send.run(); } });
        bc.setOnClickListener(new android.view.View.OnClickListener() { public void onClick(android.view.View v) { cancel.run(); } });
        android.widget.LinearLayout row = new android.widget.LinearLayout(this);
        row.setOrientation(android.widget.LinearLayout.HORIZONTAL);
        row.setGravity(android.view.Gravity.CENTER_VERTICAL);
        row.setPadding(pad * 3, pad * 2, pad * 3, pad);      // clear of a notch / rounded corners
        row.addView(e, new android.widget.LinearLayout.LayoutParams(0, -2, 1));
        android.widget.LinearLayout.LayoutParams blp = new android.widget.LinearLayout.LayoutParams(-2, -2);
        blp.leftMargin = pad;
        row.addView(bs, blp);
        row.addView(bc, new android.widget.LinearLayout.LayoutParams(blp));
        android.widget.LinearLayout root = new android.widget.LinearLayout(this);
        root.setOrientation(android.widget.LinearLayout.VERTICAL);
        root.setBackgroundColor(0xF00A0E18);
        root.addView(row, new android.widget.LinearLayout.LayoutParams(-1, -2));
        dlg.setContentView(root);
        dlg.setOnCancelListener(new DialogInterface.OnCancelListener() {    // Android's Back
            public void onCancel(DialogInterface di) { cancel.run(); }
        });
        e.setOnEditorActionListener(new android.widget.TextView.OnEditorActionListener() {
            public boolean onEditorAction(android.widget.TextView v, int id, android.view.KeyEvent ev) { send.run(); return true; }
        });
        dlg.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_VISIBLE
                | WindowManager.LayoutParams.SOFT_INPUT_ADJUST_RESIZE);
        dlg.show();
        e.requestFocus();
    }

    // a game text field the player tapped (hle_misc.c ImmSetOpenStatus): the phone keyboard, typed into it on OK
    public void openText() {
        runOnUiThread(new Runnable() { public void run() { showText(); } });
    }

    void showText() {
        final EditText e = new EditText(this);
        e.setSingleLine(true);
        e.setInputType(InputType.TYPE_CLASS_TEXT);
        e.setImeOptions(EditorInfo.IME_ACTION_DONE | EditorInfo.IME_FLAG_NO_EXTRACT_UI);
        final AlertDialog dlg = new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                .setTitle("Type")
                .setView(e)
                .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface di, int w) { nativeText(e.getText().toString()); }
                })
                .setNegativeButton("Cancel", null)
                .create();
        e.setOnEditorActionListener(new android.widget.TextView.OnEditorActionListener() {
            public boolean onEditorAction(android.widget.TextView v, int id, android.view.KeyEvent ev) {
                nativeText(e.getText().toString());
                dlg.dismiss();
                return true;
            }
        });
        dlg.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_VISIBLE);
        dlg.show();
        e.requestFocus();
    }
}
