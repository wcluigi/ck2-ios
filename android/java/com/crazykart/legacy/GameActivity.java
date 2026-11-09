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
    }

    @Override
    protected void onDestroy() {
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
        if (ui == null) ui = new UiPage(this);
        ui.show(url, visible);
    }

    // called from the game thread (plat_android.c)
    public void openChat() {
        runOnUiThread(new Runnable() { public void run() { showChat(); } });
    }

    void showChat() {
        final EditText e = new EditText(this);
        e.setSingleLine(true);
        e.setInputType(InputType.TYPE_CLASS_TEXT);
        e.setImeOptions(EditorInfo.IME_ACTION_SEND | EditorInfo.IME_FLAG_NO_EXTRACT_UI);
        e.setHint("Message");
        final AlertDialog dlg = new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                .setTitle("Chat")
                .setView(e)
                .setPositiveButton("Send", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface di, int w) { nativeChat(e.getText().toString()); }
                })
                .setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface di, int w) { nativeChat(""); }
                })
                .setOnCancelListener(new DialogInterface.OnCancelListener() {
                    public void onCancel(DialogInterface di) { nativeChat(""); }
                })
                .create();
        e.setOnEditorActionListener(new android.widget.TextView.OnEditorActionListener() {
            public boolean onEditorAction(android.widget.TextView v, int id, android.view.KeyEvent ev) {
                nativeChat(e.getText().toString());
                dlg.dismiss();
                return true;
            }
        });
        dlg.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_VISIBLE);
        dlg.show();
        e.requestFocus();
    }
}
