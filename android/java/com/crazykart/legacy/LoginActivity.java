package com.crazykart.legacy;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.util.Log;
import android.content.res.ColorStateList;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PixelFormat;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.StateListDrawable;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.ScrollView;
import android.graphics.Typeface;
import android.os.Bundle;
import android.provider.Settings;
import android.text.InputType;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.nio.charset.StandardCharsets;

/**
 * Sign-in screen in front of the game (the phone's stand-in for the PC launcher).
 * Same protocol as Launcher/login.js: op 0x6F01 = account + password -> 30-day launcher key,
 * op 0x6F03 = account + key -> one-time game pass. The game then starts with
 * -u account -password pass -ad server -port 6910, so the real password never reaches the game.
 */
public class LoginActivity extends Activity {
    static final String[] NAMES = {"India", "Hong Kong"}, NAMES_ZH = {"印度", "香港"};
    static final String[] HOSTS = {"201.18.200.6", "8.210.188.242"};
    // the servers' launcher API over HTTPS (voice sends the 30-day launcher key with every poll: not in the clear)
    static final String[] API = {"https://api-in.crazykartlegacy.com", "https://api-hk.crazykartlegacy.com"};
    static int declinedVersion;          // an app update the player did not install: not asked again until the app restarts
    static final int LOGIN_PORT = 6910;

    EditText user, pass;
    RadioGroup servers;
    CheckBox remember;
    Button play;
    TextView status;
    android.widget.ProgressBar bar;
    SharedPreferences prefs;
    // Launcher language (the user, 6 Nov 2026: asked at the first start, the game follows it: CrazyKart.ini Language)
    boolean zh;
    String t(String en, String cn) { return zh ? cn : en; }
    TextView online;                                  // players online on the picked server (bottom-left of the key art)
    final android.os.Handler ui = new android.os.Handler(android.os.Looper.getMainLooper());

    // PC launcher look (Launcher/styles.css): slab #0e1f5c, ink #131a2e, kart yellow #f5c21b / deep #c98f00,
    // muted #b7c4e8, glass line rgba(255,255,255,.12), Baloo 2 for display text and Nunito for the rest.
    static final int SLAB = 0xFF0E1F5C, INK = 0xFF131A2E, YELLOW = 0xFFF5C21B, YELLOW_DEEP = 0xFFC98F00,
            MUTED = 0xFFB7C4E8, GLASS = 0x0FFFFFFF, GLASS_LINE = 0x1FFFFFFF, ERROR = 0xFFFFAB8F;
    Typeface baloo, baloo800, nunito;

    @Override
    protected void onCreate(Bundle b) {
        super.onCreate(b);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        prefs = getSharedPreferences("login", MODE_PRIVATE);
        zh = "zh".equals(prefs.getString("lang", ""));
        Patcher.zh = zh;
        baloo = font("baloo2.ttf", 700); baloo800 = font("baloo2.ttf", 800); nunito = font("nunito.ttf", 600);

        // left: key art + logo on the slab; right: the launcher's side panel with the form
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.HORIZONTAL);
        root.setBackgroundColor(SLAB);

        FrameLayout hero = new FrameLayout(this);
        ImageView art = image("launcher_keyart.png");
        art.setScaleType(ImageView.ScaleType.CENTER_CROP);          // the key art carries the logo itself
        hero.addView(art, new FrameLayout.LayoutParams(-1, -1, Gravity.CENTER));
        root.addView(hero, new LinearLayout.LayoutParams(0, -1, 1));

        LinearLayout side = new LinearLayout(this);
        side.setOrientation(LinearLayout.VERTICAL);
        side.setBackgroundColor(INK);
        root.addView(side, new LinearLayout.LayoutParams(dp(340), -1));
        View checker = new View(this);
        checker.setBackground(new Checker(dp(6)));
        side.addView(checker, new LinearLayout.LayoutParams(-1, dp(12)));

        ScrollView scroll = new ScrollView(this);          // the keyboard can cover the lower half
        side.addView(scroll, new LinearLayout.LayoutParams(-1, 0, 1));
        LinearLayout box = new LinearLayout(this);
        box.setOrientation(LinearLayout.VERTICAL);
        int pad = dp(22);
        box.setPadding(pad, dp(4), pad, dp(12));
        scroll.addView(box);


        box.addView(label(t("Username", "用户名")));
        user = field(false);
        user.setText(prefs.getString("user", ""));
        box.addView(user, fieldParams());
        box.addView(label(t("Password", "密码")));
        pass = field(true);
        // "Remember" keeps the 30-day launcher key, never the password: say so instead of an empty box
        if (!prefs.getString("key", "").isEmpty()) {
            pass.setHint(t("••••••••  saved", "••••••••  已保存"));
            pass.setHintTextColor(MUTED);
        }
        box.addView(pass, fieldParams());

        box.addView(label(t("Server", "服务器")));
        servers = new RadioGroup(this);
        servers.setOrientation(RadioGroup.HORIZONTAL);
        servers.setBackground(round(0x40000000, GLASS_LINE, 999));
        servers.setPadding(dp(4), dp(4), dp(4), dp(4));
        for (int i = 0; i < NAMES.length; i++) {
            RadioButton r = new RadioButton(this);
            r.setId(100 + i);
            r.setText(zh ? NAMES_ZH[i] : NAMES[i]);
            r.setButtonDrawable(null);
            r.setGravity(Gravity.CENTER);
            r.setTypeface(baloo);
            r.setTextSize(15);
            StateListDrawable bg = new StateListDrawable();
            bg.addState(new int[]{android.R.attr.state_checked}, round(YELLOW, 0, 999));
            bg.addState(new int[]{}, round(0, 0, 999));
            r.setBackground(bg);
            r.setTextColor(new ColorStateList(new int[][]{{android.R.attr.state_checked}, {}}, new int[]{INK, MUTED}));
            servers.addView(r, new RadioGroup.LayoutParams(0, dp(36), 1));
        }
        servers.check(100 + prefs.getInt("server", 0));
        box.addView(servers, new LinearLayout.LayoutParams(-1, -2));

        remember = check(t("Remember this phone", "记住此手机"), t(" (30 days)", "（30天）"));
        remember.setChecked(prefs.getBoolean("remember", true));
        box.addView(remember);

        status = new TextView(this);
        status.setTextColor(ERROR);
        status.setTypeface(nunito);
        status.setTextSize(13);
        status.setMinHeight(dp(16));
        box.addView(status);
        bar = new android.widget.ProgressBar(this, null, android.R.attr.progressBarStyleHorizontal);
        bar.setMax(100);
        bar.setProgressTintList(ColorStateList.valueOf(YELLOW));
        bar.setVisibility(View.GONE);
        box.addView(bar, new LinearLayout.LayoutParams(-1, dp(8)));

        play = new Button(this);
        play.setText(prefs.getString("key", "").isEmpty() ? t("Sign in", "登录") : t("Play", "开始游戏"));
        play.setAllCaps(false);
        play.setTypeface(baloo800);
        play.setTextSize(22);
        play.setTextColor(INK);
        play.setStateListAnimator(null);
        LayerDrawable pill = new LayerDrawable(new Drawable[]{round(YELLOW_DEEP, 0, 999), round(YELLOW, 0, 999)});
        pill.setLayerInset(1, 0, 0, 0, dp(4));                  // the deep yellow "step" under the button
        play.setBackground(pill);
        play.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { go(); } });
        // Play and HUD layout side by side: the whole panel fits a landscape phone without scrolling
        LinearLayout row = new LinearLayout(this);
        row.setOrientation(LinearLayout.HORIZONTAL);
        row.setGravity(Gravity.CENTER_VERTICAL);
        row.addView(play, new LinearLayout.LayoutParams(0, dp(52), 2));

        Button hud = new Button(this);
        hud.setText("HUD");
        hud.setAllCaps(false);
        hud.setTypeface(baloo);
        hud.setTextSize(15);
        hud.setTextColor(Color.WHITE);
        hud.setStateListAnimator(null);
        hud.setBackground(round(GLASS, GLASS_LINE, 999));
        hud.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { startActivity(new Intent(LoginActivity.this, HudEditorActivity.class)); } });
        LinearLayout.LayoutParams hlp = new LinearLayout.LayoutParams(0, dp(44), 1);
        hlp.leftMargin = dp(8);
        row.addView(hud, hlp);
        Button gfx = new Button(this);
        gfx.setText(t("Settings", "设置"));
        gfx.setAllCaps(false);
        gfx.setTypeface(baloo);
        gfx.setTextSize(13);
        gfx.setTextColor(Color.WHITE);
        gfx.setStateListAnimator(null);
        gfx.setBackground(round(GLASS, GLASS_LINE, 999));
        gfx.setPadding(0, 0, 0, 0);
        gfx.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { showGraphics(); } });
        LinearLayout.LayoutParams glp = new LinearLayout.LayoutParams(0, dp(44), 1.3f);
        glp.leftMargin = dp(8);
        row.addView(gfx, glp);
        LinearLayout.LayoutParams rlp = new LinearLayout.LayoutParams(-1, -2);
        rlp.topMargin = dp(2);
        box.addView(row, rlp);

        heroView = hero;
        online = new TextView(this);
        online.setTextColor(Color.WHITE);
        online.setTypeface(baloo);
        online.setTextSize(14);
        online.setBackground(round(0xB0131A2E, GLASS_LINE, 999));
        online.setPadding(dp(14), dp(5), dp(16), dp(5));
        online.setVisibility(View.GONE);
        FrameLayout.LayoutParams olp = new FrameLayout.LayoutParams(-2, -2, Gravity.BOTTOM | Gravity.START);
        olp.leftMargin = dp(16); olp.bottomMargin = dp(16);
        hero.addView(online, olp);
        servers.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            public void onCheckedChanged(RadioGroup g, int id) { online.setVisibility(View.GONE); refreshOnline(); }
        });
        ui.post(onlineTick);
        patchNotes(hero);
        setContentView(root);
        if (!prefs.contains("lang")) askLanguage();
    }

    @Override
    protected void onDestroy() {
        ui.removeCallbacksAndMessages(null);
        super.onDestroy();
    }

    // ---- patch notes: the PC launcher's list (site patchnotes.json, newest first), last copy kept for offline starts;
    // a card on the key art's right, items in the launcher language (the file has each line in English and Chinese)
    static final String NOTES_URL = "https://crazykartlegacy.com/patchnotes.json";
    View notes;
    void patchNotes(final FrameLayout hero) {
        final String cached = prefs.getString("notes", null);
        if (cached != null) showNotes(hero, cached);
        new Thread(new Runnable() { public void run() {
            try {
                java.net.HttpURLConnection c = (java.net.HttpURLConnection) new java.net.URL(NOTES_URL).openConnection();
                c.setConnectTimeout(6000); c.setReadTimeout(8000);
                if (c.getResponseCode() != 200) return;
                final String j = new String(ShopSync.readAll(c.getInputStream()), StandardCharsets.UTF_8);
                new org.json.JSONArray(j);                               // only a list that parses replaces the copy
                if (j.equals(cached)) return;
                prefs.edit().putString("notes", j).apply();
                runOnUiThread(new Runnable() { public void run() { showNotes(hero, j); } });
            } catch (Exception ignored) { }
        } }).start();
    }
    static boolean cjk(String s) {
        for (int i = 0; i < s.length(); i++) { char ch = s.charAt(i); if (ch >= 0x3000 && ch <= 0x9fff || ch >= 0xff00 && ch <= 0xffef) return true; }
        return false;
    }
    void showNotes(FrameLayout hero, String json) {
        org.json.JSONArray a;
        try { a = new org.json.JSONArray(json); } catch (Exception e) { return; }
        LinearLayout list = new LinearLayout(this);
        list.setOrientation(LinearLayout.VERTICAL);
        list.setPadding(dp(16), dp(12), dp(16), dp(14));
        TextView head = new TextView(this);
        head.setText(t("PATCH NOTES", "更新公告"));
        head.setTextColor(YELLOW); head.setTypeface(baloo800); head.setTextSize(16); head.setLetterSpacing(0.06f);
        list.addView(head);
        for (int i = 0; i < Math.min(a.length(), 8); i++) {
            org.json.JSONObject n = a.optJSONObject(i);
            if (n == null) continue;
            TextView v = new TextView(this);
            v.setText(n.optString("version") + "  ·  " + n.optString("date"));
            v.setTextColor(MUTED); v.setTypeface(baloo); v.setTextSize(11);
            v.setPadding(0, dp(i == 0 ? 6 : 14), 0, 0);
            list.addView(v);
            TextView ti = new TextView(this);
            ti.setText(n.optString("title"));
            ti.setTextColor(Color.WHITE); ti.setTypeface(baloo800); ti.setTextSize(14);
            list.addView(ti);
            org.json.JSONArray it = n.optJSONArray("items");
            StringBuilder b = new StringBuilder();
            for (int k = 0; it != null && k < it.length(); k++) {
                String line = it.optString(k);
                if (cjk(line) != zh) continue;
                if (b.length() > 0) b.append('\n');
                b.append("•  ").append(line);
            }
            if (b.length() == 0) continue;
            TextView body = new TextView(this);
            body.setText(b);
            body.setTextColor(0xFFDDE4F7); body.setTypeface(nunito); body.setTextSize(12); body.setLineSpacing(dp(2), 1);
            body.setPadding(0, dp(3), 0, 0);
            list.addView(body);
        }
        ScrollView sv = new ScrollView(this);
        sv.setBackground(round(0xB0131A2E, GLASS_LINE, 16));
        sv.setVerticalScrollBarEnabled(false);
        sv.addView(list);
        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(dp(300), -1, Gravity.END | Gravity.TOP);
        lp.setMargins(dp(16), dp(16), dp(16), dp(16));
        if (notes != null) hero.removeView(notes);
        hero.addView(sv, lp);
        notes = sv;
        if (gfxPanel != null) { sv.setVisibility(View.GONE); gfxPanel.bringToFront(); }
    }

    // ---- players online: <server API>/launcher/online {"online": n}, every 30 s; hidden while Settings is open
    final Runnable onlineTick = new Runnable() { public void run() { refreshOnline(); ui.postDelayed(this, 30000); } };
    void refreshOnline() {
        final int srv = servers.getCheckedRadioButtonId() - 100;
        if (srv < 0 || srv >= API.length) return;
        new Thread(new Runnable() { public void run() {
            try {
                java.net.HttpURLConnection c = (java.net.HttpURLConnection) new java.net.URL(API[srv] + "/launcher/online").openConnection();
                c.setConnectTimeout(6000); c.setReadTimeout(6000);
                if (c.getResponseCode() != 200) return;
                final int n = new org.json.JSONObject(new String(ShopSync.readAll(c.getInputStream()), StandardCharsets.UTF_8)).getInt("online");
                runOnUiThread(new Runnable() { public void run() {
                    if (servers.getCheckedRadioButtonId() - 100 != srv) return;          // switched meanwhile
                    android.text.SpannableString s = new android.text.SpannableString("●  " + n + t(" online", " 在线"));
                    s.setSpan(new android.text.style.ForegroundColorSpan(0xFF3CCF52), 0, 1, 0);
                    online.setText(s);
                    online.setVisibility(gfxPanel == null ? View.VISIBLE : View.GONE);
                } });
            } catch (Exception ignored) { }
        } }).start();
    }

    // ---- language: asked once, at the first start; the launcher and the game (CrazyKart.ini Language) follow it
    void askLanguage() {
        new android.app.AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert)
                .setTitle("Language / 语言")
                .setMessage("Choose your language\n选择你的语言")
                .setCancelable(false)
                .setPositiveButton("English", new android.content.DialogInterface.OnClickListener() {
                    public void onClick(android.content.DialogInterface d, int w) { setLanguage(false); } })
                .setNegativeButton("中文", new android.content.DialogInterface.OnClickListener() {
                    public void onClick(android.content.DialogInterface d, int w) { setLanguage(true); } })
                .show();
    }
    void setLanguage(boolean cn) {
        prefs.edit().putString("lang", cn ? "zh" : "en").apply();
        File inf = gameFile("CrazyKart.ini");
        byte[] ib = readAll(inf);
        try {
            FileOutputStream o = new FileOutputStream(inf);
            o.write(iniSet(ib == null ? "" : new String(ib, StandardCharsets.UTF_8), "Language", cn ? 1 : 0).getBytes(StandardCharsets.UTF_8));
            o.close();
        } catch (Exception ignored) { }
        if (cn != zh) recreate();
    }

    // ---- Graphics (the PC launcher's Display / Gamma settings that matter on a phone) ----------------------
    // UserSetting.bin (same layout as Launcher/settings-store.js): 0x18 u32 detail (0 High, 1 Middle), 0x1c f32 gamma.
    // CrazyKart.ini [Option]: VSync=1 caps at the screen rate, else MaxFps=N (HighRefresh = limiter on).
    // Resolution / window mode stay as the phone needs them (1280x720 windowed: HUD layout + touch controls).
    FrameLayout heroView;
    View gfxPanel;
    static final int[] FPS = {0, 30, 60, 90, 120};
    static final String[] FPS_NAMES = {"Auto", "30", "60", "90", "120"};   // Auto = VSync: the screen's rate

    // the game folder appears with the first Play (data unpack): Settings saved before that failed ("file not found")
    File gameFile(String name) {
        File d = new File(getExternalFilesDir(null), "game");
        d.mkdirs();
        return new File(d, name);
    }

    byte[] readAll(File f) {
        try (InputStream in = new java.io.FileInputStream(f)) {
            ByteArrayOutputStream o = new ByteArrayOutputStream();
            byte[] b = new byte[8192]; int n;
            while ((n = in.read(b)) > 0) o.write(b, 0, n);
            return o.toByteArray();
        } catch (Exception e) { return null; }
    }

    String iniGet(String ini, String key) {
        java.util.regex.Matcher m = java.util.regex.Pattern.compile("(?m)^" + key + "=(\\d+)").matcher(ini);
        return m.find() ? m.group(1) : null;
    }

    String iniSet(String ini, String key, int v) {
        String line = key + "=" + v;
        java.util.regex.Pattern p = java.util.regex.Pattern.compile("(?m)^" + key + "=.*$");
        if (p.matcher(ini).find()) return p.matcher(ini).replaceFirst(line);
        int at = ini.indexOf("[Option]");
        if (at < 0) return ini + "\r\n[Option]\r\n" + line + "\r\n";
        int eol = ini.indexOf('\n', at);
        return eol < 0 ? ini + "\r\n" + line : ini.substring(0, eol + 1) + line + "\r\n" + ini.substring(eol + 1);
    }

    RadioGroup segmented(String[] names, int selected) {
        RadioGroup g = new RadioGroup(this);
        g.setOrientation(RadioGroup.HORIZONTAL);
        g.setBackground(round(0x40000000, GLASS_LINE, 999));
        g.setPadding(dp(4), dp(4), dp(4), dp(4));
        for (int i = 0; i < names.length; i++) {
            RadioButton r = new RadioButton(this);
            r.setId(200 + i);
            r.setText(names[i]);
            r.setButtonDrawable(null);
            r.setGravity(Gravity.CENTER);
            r.setTypeface(baloo);
            r.setTextSize(14);
            StateListDrawable bg = new StateListDrawable();
            bg.addState(new int[]{android.R.attr.state_checked}, round(YELLOW, 0, 999));
            bg.addState(new int[]{}, round(0, 0, 999));
            r.setBackground(bg);
            r.setTextColor(new ColorStateList(new int[][]{{android.R.attr.state_checked}, {}}, new int[]{INK, MUTED}));
            g.addView(r, new RadioGroup.LayoutParams(0, dp(34), 1));
        }
        g.check(200 + selected);
        return g;
    }

    void showGraphics() {
        if (gfxPanel != null) return;
        phoneDisplay();                                       // a fresh install has no UserSetting.bin yet
        final File usf = gameFile("UserSetting.bin"), inf = gameFile("CrazyKart.ini");
        final byte[] us = readAll(usf);
        byte[] ib = readAll(inf);
        final String ini = ib == null ? "" : new String(ib, StandardCharsets.UTF_8);
        int detail = 0; float gamma = 1f;
        if (us != null && us.length >= 0x20) {
            java.nio.ByteBuffer bb = java.nio.ByteBuffer.wrap(us).order(java.nio.ByteOrder.LITTLE_ENDIAN);
            detail = Math.min(1, Math.max(0, bb.getInt(0x18)));
            gamma = bb.getFloat(0x1c);
            if (!(gamma >= 0.5f && gamma <= 3f)) gamma = 1f;
        }
        String vs = iniGet(ini, "VSync"), mf = iniGet(ini, "MaxFps");
        // Language (CrazyKart.ini [Option] Language: 0 English, 1 Chinese -- the game reads CN\ data itself, as on PC)
        final int langSel = zh ? 1 : 0;
        int fpsSel = 0;
        if (!"1".equals(vs) && mf != null) for (int i = 1; i < FPS.length; i++) if (FPS[i] == Integer.parseInt(mf)) fpsSel = i;

        LinearLayout card = new LinearLayout(this);
        card.setOrientation(LinearLayout.VERTICAL);
        card.setBackground(round(0xF2131A2E, GLASS_LINE, 16));
        card.setPadding(dp(20), dp(14), dp(20), dp(16));
        card.setClickable(true);
        TextView t = new TextView(this);
        t.setText(t("SETTINGS", "设置"));
        t.setTextColor(Color.WHITE);
        t.setTypeface(baloo800);
        t.setTextSize(22);
        // title + an X: close without saving (back to the key art, the online count, the Play button)
        LinearLayout head = new LinearLayout(this);
        head.setOrientation(LinearLayout.HORIZONTAL);
        head.setGravity(Gravity.CENTER_VERTICAL);
        head.addView(t, new LinearLayout.LayoutParams(0, -2, 1));
        TextView close = new TextView(this);
        close.setText("✕");
        close.setTextColor(Color.WHITE);
        close.setTextSize(18);
        close.setGravity(Gravity.CENTER);
        close.setBackground(round(GLASS, GLASS_LINE, 999));
        close.setContentDescription(t("Close", "关闭"));
        close.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
            if (gfxPanel == null) return;
            heroView.removeView(gfxPanel);
            gfxPanel = null;
            if (online.getText().length() > 0) online.setVisibility(View.VISIBLE);
            if (notes != null) notes.setVisibility(View.VISIBLE);
        } });
        head.addView(close, new LinearLayout.LayoutParams(dp(40), dp(40)));
        card.addView(head, new LinearLayout.LayoutParams(-1, -2));
        card.addView(label(t("Language", "语言")));
        final RadioGroup lang = segmented(new String[]{"English", "中文"}, langSel);
        card.addView(lang, new LinearLayout.LayoutParams(-1, -2));
        card.addView(label(t("Screen", "画面")));
        final RadioGroup wide = segmented(new String[]{t("Fill screen", "全屏"), t("16:9 with bars", "16:9 黑边")}, prefs.getBoolean("wide", true) ? 0 : 1);
        card.addView(wide, new LinearLayout.LayoutParams(-1, -2));
        // Render quality: the 3D drawn smaller and scaled up (more fps on phone GPUs); 100 % = full sharpness
        // a slider, 50-100 % in 5 % steps (the runtime takes 50-99, 100 = off)
        final TextView rqLabel = label("");
        card.addView(rqLabel);
        final android.widget.SeekBar rq = new android.widget.SeekBar(this);
        rq.setMax(10);
        rq.setProgress(Math.max(0, Math.min(10, (prefs.getInt("scale", 100) - 50) / 5)));
        rq.setProgressTintList(ColorStateList.valueOf(YELLOW));
        rq.setThumbTintList(ColorStateList.valueOf(YELLOW));
        final Runnable showRq = new Runnable() { public void run() {
            rqLabel.setText(t("Render quality  ", "渲染质量  ") + (50 + rq.getProgress() * 5) + "%"
                    + (rq.getProgress() == 10 ? t("  (full)", "  （原画）") : ""));
        } };
        showRq.run();
        rq.setOnSeekBarChangeListener(new android.widget.SeekBar.OnSeekBarChangeListener() {
            public void onProgressChanged(android.widget.SeekBar s, int v, boolean u) { showRq.run(); }
            public void onStartTrackingTouch(android.widget.SeekBar s) { }
            public void onStopTrackingTouch(android.widget.SeekBar s) { }
        });
        card.addView(rq, new LinearLayout.LayoutParams(-1, -2));
        card.addView(label(t("Graphics detail", "画质")));
        final RadioGroup det = segmented(new String[]{t("High", "高"), t("Middle", "中")}, detail);
        card.addView(det, new LinearLayout.LayoutParams(-1, -2));
        // other players' kart accessories (back, top, horn, exhaust, wheels, aura): hidden = fewer models to draw;
        // the server leaves them out of what it sends this player (X-CK-Accessories, server.py HIDE_PROPS)
        card.addView(label(t("Other players' accessories", "其他玩家的赛车配件")));
        final RadioGroup acc = segmented(new String[]{t("Show", "显示"), t("Hide", "隐藏")}, prefs.getBoolean("accessories", true) ? 0 : 1);
        card.addView(acc, new LinearLayout.LayoutParams(-1, -2));
        // race speed-ups (gpu_wgpu.c): less vertex data per draw / the game's DXT textures as ETC2 (1 byte a pixel, not 4)
        card.addView(label(t("Compact 3D data", "精简3D数据")));
        final RadioGroup lean = segmented(new String[]{t("On", "开"), t("Off", "关")}, prefs.getBoolean("lean", false) ? 0 : 1);
        card.addView(lean, new LinearLayout.LayoutParams(-1, -2));
        card.addView(label(t("Compressed textures", "纹理压缩")));
        final RadioGroup etc2 = segmented(new String[]{t("On", "开"), t("Off", "关")}, prefs.getBoolean("etc2", false) ? 0 : 1);
        card.addView(etc2, new LinearLayout.LayoutParams(-1, -2));
        // Effects (d3d9.c): Fewer = no additive glows in races (item halos, sparks, trails, flames, aura glows)
        card.addView(label(t("Effects", "特效")));
        final RadioGroup fx = segmented(new String[]{t("All", "全部"), t("Fewer", "精简")}, prefs.getBoolean("effects", true) ? 0 : 1);
        card.addView(fx, new LinearLayout.LayoutParams(-1, -2));
        // Touch controls (touch_ui.c): Mobile = AUTO GAS + TAP DRIFT switches on the race screen (phone-style driving)
        card.addView(label(t("Touch controls", "触屏操作")));
        final RadioGroup tc = segmented(new String[]{t("Classic", "经典"), t("Mobile", "手游")}, prefs.getBoolean("touchmobile", false) ? 1 : 0);
        card.addView(tc, new LinearLayout.LayoutParams(-1, -2));
        card.addView(label(t("Frame rate cap", "帧率上限")));
        String[] fpsNames = FPS_NAMES.clone();
        fpsNames[0] = t("Auto", "自动");
        final RadioGroup fps = segmented(fpsNames, fpsSel);
        card.addView(fps, new LinearLayout.LayoutParams(-1, -2));
        final TextView gl = label("");
        card.addView(gl);
        final android.widget.SeekBar gs = new android.widget.SeekBar(this);
        gs.setMax(25);                                        // 0.5 .. 3.0 in 0.1 steps, like the launcher's slider
        gs.setProgress(Math.round(gamma * 10) - 5);
        gs.setProgressTintList(ColorStateList.valueOf(YELLOW));
        gs.setThumbTintList(ColorStateList.valueOf(YELLOW));
        final Runnable showGamma = new Runnable() { public void run() { gl.setText(String.format(java.util.Locale.ROOT, "Gamma  %.1f", (gs.getProgress() + 5) / 10f)); } };
        showGamma.run();
        gs.setOnSeekBarChangeListener(new android.widget.SeekBar.OnSeekBarChangeListener() {
            public void onProgressChanged(android.widget.SeekBar s, int v, boolean u) { showGamma.run(); }
            public void onStartTrackingTouch(android.widget.SeekBar s) { }
            public void onStopTrackingTouch(android.widget.SeekBar s) { }
        });
        card.addView(gs, new LinearLayout.LayoutParams(-1, -2));

        // Controls: one keyboard key + one controller button (or stick / trigger direction) per game action
        card.addView(label(t("Controls  (keyboard · controller)", "按键  （键盘 · 手柄）")));
        final Button[] kbBtn = new Button[Controls.ID.length], padBtn = new Button[Controls.ID.length];
        for (int i = 0; i < Controls.ID.length; i++) {
            final int ai = i;
            LinearLayout r = new LinearLayout(this);
            r.setOrientation(LinearLayout.HORIZONTAL);
            r.setGravity(Gravity.CENTER_VERTICAL);
            TextView name = new TextView(this);
            name.setText(zh ? Controls.ZH[i] : Controls.EN[i]);
            name.setTextColor(MUTED); name.setTypeface(nunito); name.setTextSize(13);
            r.addView(name, new LinearLayout.LayoutParams(0, -2, 1.25f));
            kbBtn[i] = bindButton(Controls.name(Controls.kb(prefs, i), zh));
            padBtn[i] = bindButton(Controls.name(Controls.pad(prefs, i), zh));
            kbBtn[i].setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                Controls.capture(LoginActivity.this, false, zh, new Controls.Got() { public void codes(int[] c) {
                    int code = c.length > 0 ? c[0] : 0;
                    prefs.edit().putInt("kb_" + Controls.ID[ai], code).apply();
                    kbBtn[ai].setText(Controls.name(code, zh));
                } });
            } });
            padBtn[i].setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                Controls.capture(LoginActivity.this, false, zh, new Controls.Got() { public void codes(int[] c) {
                    int code = c.length > 0 ? c[0] : 0;
                    prefs.edit().putInt("pad_" + Controls.ID[ai], code).apply();
                    padBtn[ai].setText(Controls.name(code, zh));
                } });
            } });
            r.addView(kbBtn[i], new LinearLayout.LayoutParams(0, dp(34), 1));
            LinearLayout.LayoutParams plp = new LinearLayout.LayoutParams(0, dp(34), 1);
            plp.leftMargin = dp(6);
            r.addView(padBtn[i], plp);
            LinearLayout.LayoutParams rlp2 = new LinearLayout.LayoutParams(-1, -2);
            rlp2.topMargin = dp(4);
            card.addView(r, rlp2);
        }
        Button resetCtl = bindButton(t("Reset controls", "恢复默认按键"));
        resetCtl.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
            SharedPreferences.Editor e = prefs.edit();
            for (int i = 0; i < Controls.ID.length; i++) {
                e.remove("kb_" + Controls.ID[i]).remove("pad_" + Controls.ID[i]);
                kbBtn[i].setText(Controls.name(Controls.KB[i], zh));
                padBtn[i].setText(Controls.name(Controls.PAD[i], zh));
            }
            e.apply();
        } });
        LinearLayout.LayoutParams rcl = new LinearLayout.LayoutParams(-1, dp(34));
        rcl.topMargin = dp(6);
        card.addView(resetCtl, rcl);

        // Chat macros: the game's 9 quick-chat lines (UserSetting.bin, as the PC launcher edits them) + a key or
        // two-button combination that sends each one
        card.addView(label(t("Chat macros  (text · key or combo)", "快捷聊天  （内容 · 按键或组合键）")));
        final EditText[] macroText = new EditText[Controls.MACROS];
        for (int s = 0; s < Controls.MACROS; s++) {
            final int slot = s;
            LinearLayout r = new LinearLayout(this);
            r.setOrientation(LinearLayout.HORIZONTAL);
            r.setGravity(Gravity.CENTER_VERTICAL);
            TextView num = new TextView(this);
            num.setText(String.valueOf(s + 1));
            num.setTextColor(MUTED); num.setTypeface(baloo); num.setTextSize(14);
            r.addView(num, new LinearLayout.LayoutParams(dp(18), -2));
            macroText[s] = new EditText(this);
            macroText[s].setSingleLine(true);
            macroText[s].setText(macro(us, s));
            macroText[s].setTextColor(Color.WHITE); macroText[s].setTextSize(13); macroText[s].setTypeface(nunito);
            macroText[s].setBackground(round(0x40000000, GLASS_LINE, 10));
            macroText[s].setPadding(dp(8), dp(4), dp(8), dp(4));
            macroText[s].setFilters(new android.text.InputFilter[]{new android.text.InputFilter.LengthFilter(200)});
            r.addView(macroText[s], new LinearLayout.LayoutParams(0, dp(34), 2.2f));
            final Button combo = bindButton(comboName(Controls.macro(prefs, s)));
            combo.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                Controls.capture(LoginActivity.this, true, zh, new Controls.Got() { public void codes(int[] c) {
                    prefs.edit().putString("macro_" + slot, Controls.join(c)).apply();
                    combo.setText(comboName(c));
                } });
            } });
            LinearLayout.LayoutParams clp = new LinearLayout.LayoutParams(0, dp(34), 1.2f);
            clp.leftMargin = dp(6);
            r.addView(combo, clp);
            LinearLayout.LayoutParams mlp = new LinearLayout.LayoutParams(-1, -2);
            mlp.topMargin = dp(4);
            card.addView(r, mlp);
        }

        LinearLayout btns = new LinearLayout(this);
        btns.setOrientation(LinearLayout.HORIZONTAL);
        Button def = new Button(this);
        def.setText(t("Default gamma", "默认亮度"));
        def.setAllCaps(false); def.setTypeface(baloo); def.setTextSize(13); def.setTextColor(Color.WHITE);
        def.setStateListAnimator(null); def.setBackground(round(GLASS, GLASS_LINE, 999));
        def.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { gs.setProgress(5); } });
        btns.addView(def, new LinearLayout.LayoutParams(0, dp(40), 1));
        Button done = new Button(this);
        done.setText(t("Done", "完成"));
        done.setAllCaps(false); done.setTypeface(baloo800); done.setTextSize(17); done.setTextColor(INK);
        done.setStateListAnimator(null);
        LayerDrawable pill = new LayerDrawable(new Drawable[]{round(YELLOW_DEEP, 0, 999), round(YELLOW, 0, 999)});
        pill.setLayerInset(1, 0, 0, 0, dp(3));
        done.setBackground(pill);
        LinearLayout.LayoutParams dlp = new LinearLayout.LayoutParams(0, dp(42), 1);
        dlp.leftMargin = dp(10);
        btns.addView(done, dlp);
        LinearLayout.LayoutParams blp = new LinearLayout.LayoutParams(-1, -2);
        blp.topMargin = dp(12);
        card.addView(btns, blp);

        done.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
            int d = det.getCheckedRadioButtonId() - 200, f = fps.getCheckedRadioButtonId() - 200;
            prefs.edit().putBoolean("wide", wide.getCheckedRadioButtonId() == 200)          // 3D fills the phone's screen
                    .putBoolean("vsync", FPS[f] == 0).putInt("scale", 50 + rq.getProgress() * 5).putBoolean("accessories", acc.getCheckedRadioButtonId() == 200)
                    .putBoolean("lean", lean.getCheckedRadioButtonId() == 200).putBoolean("etc2", etc2.getCheckedRadioButtonId() == 200)
                    .putBoolean("effects", fx.getCheckedRadioButtonId() == 200).putBoolean("touchmobile", tc.getCheckedRadioButtonId() == 201).apply();                                   // Auto = synced to the screen
            float g = (gs.getProgress() + 5) / 10f;
            try {
                if (us != null && us.length >= 0x20) {
                    java.nio.ByteBuffer bb = java.nio.ByteBuffer.wrap(us).order(java.nio.ByteOrder.LITTLE_ENDIAN);
                    bb.putInt(0x18, d);
                    bb.putFloat(0x1c, g);
                    for (int s = 0; s < Controls.MACROS; s++) {        // chat macros: UTF-16LE, zero padded, 511 chars at most
                        String m = macroText[s].getText().toString();
                        if (m.equals(macro(us, s)) || us.length < 0x58 + (s + 1) * 0x400) continue;
                        java.util.Arrays.fill(us, 0x58 + s * 0x400, 0x58 + (s + 1) * 0x400, (byte) 0);
                        byte[] u = m.substring(0, Math.min(m.length(), 511)).getBytes(StandardCharsets.UTF_16LE);
                        System.arraycopy(u, 0, us, 0x58 + s * 0x400, Math.min(u.length, 0x3fe));
                    }
                    FileOutputStream o = new FileOutputStream(usf); o.write(us); o.close();
                }
                String n = iniSet(ini, "VSync", FPS[f] == 0 ? 1 : 0);
                n = iniSet(n, "MaxFps", FPS[f]);
                n = iniSet(n, "HighRefresh", 1);
                n = iniSet(n, "Language", lang.getCheckedRadioButtonId() - 200);
                FileOutputStream o = new FileOutputStream(inf); o.write(n.getBytes(StandardCharsets.UTF_8)); o.close();
            } catch (Exception e) {
                status.setText(t("Could not save the settings (", "无法保存设置（") + e.getMessage() + t(")", "）"));
            }
            heroView.removeView(gfxPanel);
            gfxPanel = null;
            if (online.getText().length() > 0) online.setVisibility(View.VISIBLE);
            if (notes != null) notes.setVisibility(View.VISIBLE);
            if ((lang.getCheckedRadioButtonId() == 201) != zh) setLanguage(lang.getCheckedRadioButtonId() == 201);
        } });

        ScrollView sv = new ScrollView(this);
        sv.addView(card);
        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(dp(380), -2, Gravity.CENTER);
        heroView.addView(sv, lp);
        gfxPanel = sv;
        online.setVisibility(View.GONE);
        if (notes != null) notes.setVisibility(View.GONE);
    }

    Button bindButton(String text) {
        Button b = new Button(this);
        b.setText(text);
        b.setAllCaps(false); b.setTypeface(baloo); b.setTextSize(12); b.setTextColor(Color.WHITE);
        b.setStateListAnimator(null); b.setBackground(round(GLASS, GLASS_LINE, 10));
        b.setPadding(dp(4), 0, dp(4), 0);
        return b;
    }
    String comboName(int[] c) {
        if (c.length == 0) return t("No key", "无按键");
        StringBuilder b = new StringBuilder();
        for (int x : c) { if (b.length() > 0) b.append(" + "); b.append(Controls.name(x, zh)); }
        return b.toString();
    }
    // chat macro <slot> of UserSetting.bin (0x58 + slot * 0x400, UTF-16LE, zero padded)
    static String macro(byte[] us, int slot) {
        int o = 0x58 + slot * 0x400;
        if (us == null || us.length < o + 0x400) return "";
        int n = 0;
        while (n < 0x3fe && (us[o + n] != 0 || us[o + n + 1] != 0)) n += 2;
        return new String(us, o, n, StandardCharsets.UTF_16LE);
    }

    int dp(int v) { return (int) (v * getResources().getDisplayMetrics().density + 0.5f); }

    Typeface font(String asset, int weight) {
        try { return new Typeface.Builder(getAssets(), asset).setFontVariationSettings("'wght' " + weight).build(); }
        catch (Exception e) { return Typeface.DEFAULT_BOLD; }
    }

    ImageView image(String asset) {
        ImageView v = new ImageView(this);
        try (InputStream in = getAssets().open(asset)) { v.setImageBitmap(BitmapFactory.decodeStream(in)); } catch (Exception ignored) { }
        return v;
    }

    GradientDrawable round(int fill, int stroke, int radiusDp) {
        GradientDrawable g = new GradientDrawable();
        g.setColor(fill);
        g.setCornerRadius(radiusDp >= 999 ? dp(999) : dp(radiusDp));
        if (stroke != 0) g.setStroke(dp(1), stroke);
        return g;
    }

    TextView label(String text) {
        TextView t = new TextView(this);
        t.setText(text);
        t.setTextColor(MUTED);
        t.setTypeface(baloo);
        t.setTextSize(13);
        t.setLetterSpacing(0.04f);
        t.setPadding(0, dp(8), 0, dp(4));
        return t;
    }

    LinearLayout.LayoutParams fieldParams() { return new LinearLayout.LayoutParams(-1, dp(44)); }

    EditText field(boolean secret) {
        EditText e = new EditText(this);
        e.setSingleLine(true);
        e.setTextColor(Color.WHITE);
        e.setTypeface(nunito);
        e.setTextSize(15);
        e.setPadding(dp(14), 0, dp(14), 0);
        StateListDrawable bg = new StateListDrawable();             // yellow outline while typing, like the launcher
        bg.addState(new int[]{android.R.attr.state_focused}, round(0x40000000, YELLOW, 12));
        bg.addState(new int[]{}, round(0x40000000, GLASS_LINE, 12));
        e.setBackground(bg);
        e.setInputType(secret ? (InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_VARIATION_PASSWORD)
                              : (InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_FLAG_NO_SUGGESTIONS));
        return e;
    }

    CheckBox check(String text, String note) {
        CheckBox c = new CheckBox(this);
        SpannableString s = new SpannableString(text + note);
        s.setSpan(new ForegroundColorSpan(0x73FFFFFF), text.length(), s.length(), 0);
        c.setText(s);
        c.setTextColor(Color.WHITE);
        c.setTypeface(nunito);
        c.setTextSize(14);
        c.setButtonDrawable(new Tick(dp(18)));
        c.setPadding(dp(10), dp(3), 0, dp(3));
        return c;
    }

    // the launcher's checkbox: 18dp rounded square, yellow with an ink tick when checked
    class Tick extends Drawable {
        final int size; boolean on;
        final Paint p = new Paint(Paint.ANTI_ALIAS_FLAG);
        Tick(int size) { this.size = size; }
        @Override public boolean isStateful() { return true; }
        @Override protected boolean onStateChange(int[] st) {
            boolean c = false;
            for (int s : st) if (s == android.R.attr.state_checked) c = true;
            if (c == on) return false;
            on = c; invalidateSelf(); return true;
        }
        @Override public int getIntrinsicWidth() { return size; }
        @Override public int getIntrinsicHeight() { return size; }
        @Override public void draw(Canvas cv) {
            Rect b = getBounds();
            float l = b.left, t = b.top + (b.height() - size) / 2f, r5 = dp(5);
            RectF r = new RectF(l, t, l + size, t + size);
            p.setStyle(Paint.Style.FILL);
            p.setColor(on ? YELLOW : 0x40000000);
            cv.drawRoundRect(r, r5, r5, p);
            p.setStyle(Paint.Style.STROKE);
            p.setStrokeWidth(dp(1) * 1.5f);
            p.setColor(on ? YELLOW : 0x47FFFFFF);
            cv.drawRoundRect(r, r5, r5, p);
            if (on) {
                Path tick = new Path();
                tick.moveTo(l + size * 0.27f, t + size * 0.52f);
                tick.lineTo(l + size * 0.44f, t + size * 0.68f);
                tick.lineTo(l + size * 0.74f, t + size * 0.33f);
                p.setColor(INK); p.setStrokeWidth(dp(2)); p.setStrokeCap(Paint.Cap.ROUND); p.setStrokeJoin(Paint.Join.ROUND);
                cv.drawPath(tick, p);
            }
        }
        @Override public void setAlpha(int a) { }
        @Override public void setColorFilter(ColorFilter f) { }
        @Override public int getOpacity() { return PixelFormat.TRANSLUCENT; }
    }

    // the launcher's .ck-checker strip: ink and white squares
    static class Checker extends Drawable {
        final int sq; final Paint p = new Paint();
        Checker(int sq) { this.sq = sq; }
        @Override public void draw(Canvas c) {
            Rect b = getBounds();
            for (int y = b.top, row = 0; y < b.bottom; y += sq, row++)
                for (int x = b.left, col = 0; x < b.right; x += sq, col++) {
                    p.setColor(((row + col) & 1) == 0 ? INK : Color.WHITE);
                    c.drawRect(x, y, x + sq, y + sq, p);
                }
        }
        @Override public void setAlpha(int a) { }
        @Override public void setColorFilter(ColorFilter f) { }
        @Override public int getOpacity() { return PixelFormat.OPAQUE; }
    }

    void go() {
        final String account = user.getText().toString().trim().toLowerCase();   // login names are lowercase only
        final String password = pass.getText().toString();
        final int srv = servers.getCheckedRadioButtonId() - 100;
        final String savedKey = prefs.getString("key", "");
        final boolean sameAccount = account.equals(prefs.getString("user", "")) && srv == prefs.getInt("keyServer", -1);
        if (account.isEmpty() || (password.isEmpty() && (savedKey.isEmpty() || !sameAccount))) {
            status.setText(t("Enter your account and password.", "请输入账号和密码。"));
            return;
        }
        float maxHz = 60;                   // the panel's highest refresh rate: the game caps its frame rate at it
        for (android.view.Display.Mode m : getWindowManager().getDefaultDisplay().getSupportedModes()) maxHz = Math.max(maxHz, m.getRefreshRate());
        final int hz = Math.round(maxHz);
        play.setEnabled(false);
        status.setTextColor(MUTED);
        status.setText(t("Signing in to ", "正在登录") + (zh ? NAMES_ZH[srv] : NAMES[srv]) + "...");
        new Thread(new Runnable() { public void run() {
            try {
                if (!update(srv)) return;                     // game files + this app from the patch servers
                say(t("Loading the shop...", "正在加载商城..."), -1);               // the dashboard's shop (hidden karts, prices): ShopSync
                Log.i("ck2", "shop: " + ShopSync.apply(new File(getExternalFilesDir(null), "game"), getFilesDir(), API[srv]));
                say(t("Signing in to ", "正在登录") + (zh ? NAMES_ZH[srv] : NAMES[srv]) + "...", -1);
                String key = savedKey;
                if (!password.isEmpty() || !sameAccount) {
                    Reply r = request(HOSTS[srv], account, password, 0x6f01);
                    if (r.error != null) { fail(r.error, r.result != 0); return; }
                    key = r.key;
                }
                Reply p = request(HOSTS[srv], account, key, 0x6f03);    // fresh one-time pass, like the launcher's Play
                if (p.error != null) { fail(p.error, p.result != 0); return; }
                SharedPreferences.Editor ed = prefs.edit().putString("user", account).putInt("server", srv).putBoolean("remember", remember.isChecked());
                if (remember.isChecked()) ed.putString("key", key).putInt("keyServer", srv); else ed.remove("key");
                ed.apply();
                phoneDisplay();
                phoneUi();
                Controls.write(prefs, getFilesDir());          // keyboards + controllers (plat_android.c)
                final String fkey = key;
                String args = "-u " + account + " -password " + p.pass + " -ad " + HOSTS[srv] + " -port " + LOGIN_PORT + " -wnd 1";
                File f = new File(getFilesDir(), "launch_args.txt");
                FileOutputStream o = new FileOutputStream(f);
                o.write(args.getBytes(StandardCharsets.UTF_8));
                o.close();
                // runtime options (not game arguments): read by plat_android.c at start
                FileOutputStream oo = new FileOutputStream(new File(getFilesDir(), "options.txt"));
                oo.write(("vsync=" + (prefs.getBoolean("vsync", true) ? 1 : 0) + "\nhz=" + hz + "\nwide=" + (prefs.getBoolean("wide", true) ? 1 : 0) + "\nscale=" + prefs.getInt("scale", 100)
                        + "\nlean=" + (prefs.getBoolean("lean", false) ? 1 : 0) + "\netc2=" + (prefs.getBoolean("etc2", false) ? 1 : 0)
                        + "\neffects=" + (prefs.getBoolean("effects", true) ? 1 : 0)
                        + "\ntouch=" + (prefs.getBoolean("touchmobile", false) ? "mobile" : "classic") + "\n").getBytes(StandardCharsets.UTF_8));
                oo.close();
                runOnUiThread(new Runnable() { public void run() {
                    // the game's voice chat signs in to the server API with the launcher key, like the PC launcher
                    byte[] ib = readAll(gameFile("CrazyKart.ini"));          // the game's language (Settings)
                    String ini = ib != null ? new String(ib, StandardCharsets.UTF_8) : "";
                    String lang = "1".equals(iniGet(ini, "Language")) ? "zh" : "en";
                    int cap = 0;                                                // the frame rate cap (0 = Auto)
                    try { if (!"1".equals(iniGet(ini, "VSync")) && iniGet(ini, "MaxFps") != null) cap = Integer.parseInt(iniGet(ini, "MaxFps")); } catch (Exception e) { }
                    startActivity(new Intent(LoginActivity.this, GameActivity.class).putExtra("api", API[srv])
                            .putExtra("user", account).putExtra("key", fkey).putExtra("lang", lang)
                            .putExtra("accessories", prefs.getBoolean("accessories", true)).putExtra("fpscap", cap));
                    finish();
                } });
            } catch (Exception e) {
                fail("Cannot reach " + NAMES[srv] + " (" + e.getMessage() + ")", false);
            }
        } }).start();
    }

    // ---- updates: game files + this app, from the same signed patch the PC launcher uses (Patcher.java) -------------
    static final String ACTION_INSTALLED = "com.crazykart.legacy.INSTALLED";

    void say(final String text, final int pct) {
        runOnUiThread(new Runnable() { public void run() {
            status.setTextColor(MUTED);
            status.setText(text);
            bar.setVisibility(pct < 0 ? View.GONE : View.VISIBLE);
            if (pct >= 0) bar.setProgress(pct);
        } });
    }

    int myVersion() {
        try { return getPackageManager().getPackageInfo(getPackageName(), 0).versionCode; } catch (Exception e) { return 0; }
    }

    // false = stop (the app is updating, or there are no game files to play with)
    boolean update(int srv) {
        File game = new File(getExternalFilesDir(null), "game");
        game.mkdirs();
        if (!unpackBundle(game)) return false;
        String[] bases = {"http://" + HOSTS[srv] + ":6912/patch", "http://" + HOSTS[1 - srv] + ":6912/patch"};  // picked first
        Patcher.Result r = new Patcher(game, new Patcher.Progress() {
            public void step(int pct, String text) { say(text, pct); }
        }).run(bases);
        say("", -1);
        int newer = r.mobile != null ? r.mobile.optInt("versionCode") : 0;
        if (newer > myVersion() && newer != declinedVersion) { updateApp(r.base, r.mobile); return false; }
        if (r.status.equals("current") || r.status.equals("updated")) return true;
        // offline, refused or some files failed: play what is there (one damaged file on the server must not lock every
        // phone out; the failed files are fetched at the next Play)
        if (new File(game, "data").isDirectory()) return true;
        fail(r.status.equals("partial") ? r.failed.size() + t(" game files did not download. Press Play to try again.", " 个游戏文件下载失败，请再次点击开始。")
                : r.status.equals("refused") ? t("The update was refused (it is not signed by Crazy Kart Legacy).", "更新被拒绝（不是 Crazy Kart Legacy 的签名）。")
                : t("Cannot reach the update servers. Check your internet and press Play again.", "无法连接更新服务器，请检查网络后再次点击开始。"), false);
        return false;
    }

    // The phone's menus (the Claude design, tools/mobile_ui.py): assets/mobile_ui.zip -> <files>/image/mobile, where
    // runtime/mobile/plat.c reads data/... and CN/data/... first. Unpacked again whenever this app was installed or
    // updated since the last time (lastUpdateTime), so app updates carry the UI; no zip in the app = no overlay.
    void phoneUi() {
        File dir = new File(new File(getFilesDir(), "image"), "mobile");
        File stamp = new File(getFilesDir(), "mobile_ui.stamp");
        String want;
        try { want = Long.toString(getPackageManager().getPackageInfo(getPackageName(), 0).lastUpdateTime); } catch (Exception e) { want = "?"; }
        byte[] have = readAll(stamp);
        if (have != null && want.equals(new String(have, StandardCharsets.UTF_8)) && dir.isDirectory()) return;
        deleteTree(dir);
        try (java.util.zip.ZipInputStream z = new java.util.zip.ZipInputStream(new java.io.BufferedInputStream(getAssets().open("mobile_ui.zip"), 1 << 16))) {
            byte[] b = new byte[1 << 16];
            for (java.util.zip.ZipEntry e; (e = z.getNextEntry()) != null; ) {
                File out = new File(dir, e.getName());
                if (!out.getCanonicalPath().startsWith(dir.getCanonicalPath() + File.separator)) continue;   // no ../ escapes
                if (e.isDirectory()) { out.mkdirs(); continue; }
                out.getParentFile().mkdirs();
                try (FileOutputStream o = new FileOutputStream(out)) { for (int n; (n = z.read(b)) > 0; ) o.write(b, 0, n); }
            }
        } catch (java.io.FileNotFoundException e) {
            return;                                              // this build has no phone UI overlay
        } catch (Exception e) {
            Log.w("ck2", "phone UI overlay: " + e);
            deleteTree(dir);                                     // half a UI is worse than the stock one
            return;
        }
        try (FileOutputStream o = new FileOutputStream(stamp)) { o.write(want.getBytes(StandardCharsets.UTF_8)); } catch (Exception ignored) { }
    }

    static void deleteTree(File f) {
        File[] kids = f.listFiles();
        if (kids != null) for (File k : kids) deleteTree(k);
        f.delete();
    }

    // The phone runs the game windowed at 1280x720 (the HUD layout, touch controls and widescreen fill are built for
    // it). UserSetting.bin (Launcher/settings-store.js: 0x04 display mode 0 windowed / 1 fullscreen, 0x10 resolution
    // index, 4 = 1280*720) comes from the release with the PC defaults (fullscreen, 800*600): set at every Play
    // (5 Nov 2026: a fresh install drew the lobby 800x600 in the corner).
    // The patch leaves UserSetting.bin out (the PC player's own file, build_release.py), so a fresh install had none and
    // the game ran on built-in defaults (800x600 GUI, no frame cap settings): the phone's copy ships as an asset.
    void phoneDisplay() {
        File f = gameFile("UserSetting.bin");
        byte[] us = readAll(f);
        if (us == null || us.length < 0x20) {
            try (InputStream in = getAssets().open("UserSetting.bin")) {
                ByteArrayOutputStream o = new ByteArrayOutputStream();
                byte[] b = new byte[8192];
                for (int n; (n = in.read(b)) > 0; ) o.write(b, 0, n);
                us = o.toByteArray();
            } catch (Exception e) { return; }
            try { FileOutputStream o = new FileOutputStream(f); o.write(us); o.close(); } catch (Exception ignored) { }
        }
        // CrazyKart.ini [Option]: the Settings panel's defaults (Auto = synced to the screen) when never set
        File inf = gameFile("CrazyKart.ini");
        byte[] ib = readAll(inf);
        String ini = ib == null ? "" : new String(ib, StandardCharsets.UTF_8);
        if (iniGet(ini, "VSync") == null) {
            String n = iniSet(ini, "VSync", 1);
            n = iniSet(n, "MaxFps", 0);
            n = iniSet(n, "HighRefresh", 1);
            try { FileOutputStream o = new FileOutputStream(inf); o.write(n.getBytes(StandardCharsets.UTF_8)); o.close(); } catch (Exception ignored) { }
        }
        java.nio.ByteBuffer bb = java.nio.ByteBuffer.wrap(us).order(java.nio.ByteOrder.LITTLE_ENDIAN);
        if (bb.getInt(0x04) == 0 && bb.getInt(0x10) == 4) return;
        bb.putInt(0x04, 0);
        bb.putInt(0x10, 4);
        try { FileOutputStream o = new FileOutputStream(f); o.write(us); o.close(); } catch (Exception ignored) { }
    }

    // The game files packed in the APK (tools/bundle_data.py): unpacked on the first start, no download (the user: the
    // VPS bandwidth). patchstate.json is written from the bundle's list (sizes, the unpacked files' times, sha256), so
    // the patcher fetches only what changed since that release, without hashing every file.
    boolean unpackBundle(File game) {
        if (new File(game, Patcher.STATE).exists()) return true;            // installed before: the patcher keeps it current
        org.json.JSONObject meta;
        try (InputStream in = getAssets().open("gamedata.json")) {
            ByteArrayOutputStream o = new ByteArrayOutputStream();
            byte[] b = new byte[1 << 16];
            for (int n; (n = in.read(b)) > 0; ) o.write(b, 0, n);
            meta = new org.json.JSONObject(new String(o.toByteArray(), StandardCharsets.UTF_8));
        } catch (Exception e) { return true; }                               // an APK without the bundle: download all
        long total = Math.max(1, meta.optLong("bytes"));
        if (game.getUsableSpace() < total + (200L << 20)) {
            fail(String.format(java.util.Locale.ROOT, "Not enough free space: the game needs %.1f GB.", (total + (200L << 20)) / 1073741824.0), false);
            return false;
        }
        String root;
        try { root = game.getCanonicalPath() + File.separator; } catch (Exception e) { root = game.getAbsolutePath() + File.separator; }
        try (java.util.zip.ZipInputStream z = new java.util.zip.ZipInputStream(new java.io.BufferedInputStream(getAssets().open("gamedata.zip"), 1 << 17))) {
            byte[] buf = new byte[1 << 17];
            long done = 0, shown = -1;
            for (java.util.zip.ZipEntry e; (e = z.getNextEntry()) != null; ) {
                if (e.isDirectory()) continue;
                File f = new File(game, e.getName());
                if (!f.getCanonicalPath().startsWith(root)) continue;            // never outside the game folder
                f.getParentFile().mkdirs();
                try (FileOutputStream o = new FileOutputStream(f)) {
                    for (int n; (n = z.read(buf)) > 0; ) { o.write(buf, 0, n); done += n; }
                }
                if (done - shown > (8L << 20)) {
                    shown = done;
                    say(String.format(java.util.Locale.ROOT, "Unpacking game files  %.0f / %.0f MB (first start only)", done / 1048576.0, total / 1048576.0),
                            (int) (done * 100 / total));
                }
            }
            say("Unpacking game files: almost done", 100);
            org.json.JSONObject files = meta.getJSONObject("files"), known = new org.json.JSONObject();
            for (java.util.Iterator<String> it = files.keys(); it.hasNext(); ) {
                String rel = it.next();
                File f = new File(game, rel);
                if (!f.isFile()) continue;
                known.put(rel, new org.json.JSONObject().put("size", f.length()).put("mtime", f.lastModified() / 1000)
                        .put("sha256", files.getJSONObject(rel).getString("sha256")));
            }
            org.json.JSONObject st = new org.json.JSONObject().put("version", meta.optString("version")).put("manifestMd5", meta.optString("md5"))
                    .put("files", known).put("time", meta.optLong("time"));
            FileOutputStream o = new FileOutputStream(new File(game, Patcher.STATE));
            o.write(st.toString().getBytes(StandardCharsets.UTF_8));
            o.close();
            return true;
        } catch (Exception e) {
            fail("Could not unpack the game files (" + e.getMessage() + "). Press Play to try again.", false);
            return false;
        }
    }

    void updateApp(final String base, final org.json.JSONObject m) {
        try {
            final long size = m.getLong("size");
            final String sha = m.getString("sha256");
            final java.util.concurrent.atomic.AtomicLong got = new java.util.concurrent.atomic.AtomicLong();
            final java.util.concurrent.atomic.AtomicBoolean busy = new java.util.concurrent.atomic.AtomicBoolean(true);
            new Thread(new Runnable() { public void run() {
                while (busy.get()) {
                    say(String.format(java.util.Locale.ROOT, "Downloading the new app version %s  (%.0f / %.0f MB)", m.optString("version"),
                            got.get() / 1048576.0, size / 1048576.0), (int) (got.get() * 100 / Math.max(1, size)));
                    try { Thread.sleep(300); } catch (InterruptedException e) { return; }
                }
            } }).start();
            File apk = new File(getCacheDir(), "update-" + sha + ".apk");
            try {
                if (!(apk.length() == size && sha.equals(Patcher.sha256(apk)))) Patcher.download(base + "/objects/" + sha, apk, size, sha, got, size);
            } finally { busy.set(false); }
            declinedVersion = m.optInt("versionCode");       // until Android reports it installed: Play goes on without it
            say("Installing the new app version...", -1);
            android.content.pm.PackageInstaller pi = getPackageManager().getPackageInstaller();
            int id = pi.createSession(new android.content.pm.PackageInstaller.SessionParams(android.content.pm.PackageInstaller.SessionParams.MODE_FULL_INSTALL));
            android.content.pm.PackageInstaller.Session ses = pi.openSession(id);
            try (java.io.OutputStream o = ses.openWrite("app.apk", 0, apk.length()); InputStream in = new java.io.FileInputStream(apk)) {
                byte[] buf = new byte[1 << 16];
                for (int n; (n = in.read(buf)) > 0; ) o.write(buf, 0, n);
                ses.fsync(o);
            }
            Intent done = new Intent(this, LoginActivity.class).setAction(ACTION_INSTALLED);
            android.app.PendingIntent pe = android.app.PendingIntent.getActivity(this, 1, done,
                    android.app.PendingIntent.FLAG_UPDATE_CURRENT | android.app.PendingIntent.FLAG_MUTABLE);
            ses.commit(pe.getIntentSender());
            ses.close();
        } catch (Exception e) {
            declinedVersion = m.optInt("versionCode");
            fail("The app update failed (" + e.getMessage() + "). Press Play to play this version.", false);
        }
    }

    @Override
    protected void onNewIntent(Intent i) {
        super.onNewIntent(i);
        if (!ACTION_INSTALLED.equals(i.getAction())) return;
        int st = i.getIntExtra(android.content.pm.PackageInstaller.EXTRA_STATUS, android.content.pm.PackageInstaller.STATUS_FAILURE);
        if (st == android.content.pm.PackageInstaller.STATUS_PENDING_USER_ACTION) {      // Android asks the player
            Intent ask = i.getParcelableExtra(Intent.EXTRA_INTENT);
            if (ask != null) startActivity(ask);
        } else if (st != android.content.pm.PackageInstaller.STATUS_SUCCESS) {
            fail("The update was not installed (" + i.getStringExtra(android.content.pm.PackageInstaller.EXTRA_STATUS_MESSAGE)
                    + "). Press Play to play this version; the update is offered again next time.", false);
        }
    }

    void fail(final String msg, final boolean badLogin) {
        if (badLogin) prefs.edit().remove("key").apply();         // a refused key signs the player out
        runOnUiThread(new Runnable() { public void run() {
            status.setTextColor(ERROR);
            status.setText(msg);
            bar.setVisibility(View.GONE);
            play.setEnabled(true);
            play.setText(prefs.getString("key", "").isEmpty() ? t("Sign in & Play", "登录并开始") : t("Play", "开始游戏"));
        } });
    }

    // ---- wire format (ck2server protocol.py, Launcher/login.js) -----------------------------------
    static final byte[] DEC = new byte[256], ENC = new byte[256];
    static {
        for (int b = 0; b < 256; b++) {
            int x = (b ^ 0x5e) & 0xff;
            int p = ((x << 2) | (x >> 6)) & 0xff;
            DEC[b] = (byte) p;
            ENC[p] = (byte) b;
        }
    }
    static class Reply { int result; String pass = "", nickname = "", key = "0", error; }

    String hwid() {
        String id = Settings.Secure.getString(getContentResolver(), Settings.Secure.ANDROID_ID);
        return "android-" + (id == null ? "unknown" : id) + "|";
    }

    Reply request(String host, String account, String secret, int op) throws Exception {
        ByteArrayOutputStream body = new ByteArrayOutputStream();
        body.write(op & 0xff); body.write(op >> 8);
        body.write(new byte[9]);
        body.write(account.getBytes(StandardCharsets.UTF_8)); body.write(0);
        body.write(secret.getBytes(StandardCharsets.ISO_8859_1)); body.write(0);
        body.write(hwid().getBytes(StandardCharsets.ISO_8859_1)); body.write(0);
        byte[] plain = body.toByteArray();
        byte[] frame = new byte[2 + plain.length];
        frame[0] = (byte) (frame.length & 0xff); frame[1] = (byte) (frame.length >> 8);
        for (int i = 0; i < plain.length; i++) frame[2 + i] = ENC[plain[i] & 0xff];

        Socket s = new Socket();
        try {
            s.connect(new InetSocketAddress(host, LOGIN_PORT), 8000);
            s.setSoTimeout(8000);
            OutputStream out = s.getOutputStream();
            out.write(frame);
            out.flush();
            InputStream in = s.getInputStream();
            byte[] hdr = readFully(in, 2);
            int len = (hdr[0] & 0xff) | ((hdr[1] & 0xff) << 8);
            Reply r = new Reply();
            if (len < 12) { r.error = "Unexpected answer from the game server."; return r; }
            byte[] enc = readFully(in, len - 2);
            byte[] p = new byte[enc.length];
            for (int i = 0; i < enc.length; i++) p[i] = DEC[enc[i] & 0xff];
            int rop = (p[0] & 0xff) | ((p[1] & 0xff) << 8);
            r.result = (p[2] & 0xff) | ((p[3] & 0xff) << 8);
            if (rop != 0x6f02) { r.error = "Unexpected answer from the game server."; return r; }
            if (r.result != 0) {
                r.error = r.result == 2 ? "Wrong account or password." : r.result == 3 ? "Enter your account and password."
                        : r.result == 12 ? "This account is banned for cheating." : "Sign-in refused (code " + r.result + ").";
                return r;
            }
            int a = indexOf(p, 10), bb = indexOf(p, a + 1);
            r.pass = new String(p, 10, a - 10, StandardCharsets.UTF_8);
            r.nickname = new String(p, a + 1, bb - a - 1, StandardCharsets.UTF_8);
            if (bb + 9 <= p.length) {
                long k = 0;
                for (int i = 7; i >= 0; i--) k = (k << 8) | (p[bb + 1 + i] & 0xff);
                r.key = Long.toString(k);
            }
            return r;
        } finally {
            s.close();
        }
    }
    static int indexOf(byte[] b, int from) { for (int i = from; i < b.length; i++) if (b[i] == 0) return i; return b.length; }
    static byte[] readFully(InputStream in, int n) throws Exception {
        byte[] b = new byte[n];
        int o = 0;
        while (o < n) { int r = in.read(b, o, n - o); if (r < 0) throw new Exception("connection closed"); o += r; }
        return b;
    }
}
