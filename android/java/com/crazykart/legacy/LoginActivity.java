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
import android.graphics.ColorMatrix;
import android.graphics.ColorMatrixColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PixelFormat;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.LayerDrawable;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.PopupWindow;
import android.widget.ScrollView;
import android.widget.SeekBar;
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
import android.widget.TextView;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.nio.charset.StandardCharsets;
import java.util.Locale;

/**
 * Sign-in screen in front of the game (the phone's stand-in for the PC launcher).
 * Same protocol as Launcher/login.js: op 0x6F01 = account + password -> 30-day launcher key,
 * op 0x6F03 = account + key -> one-time game pass. The game then starts with
 * -u account -password pass -ad server -port 6910, so the real password never reaches the game.
 *
 * Look (12 Nov 2026, the user: "pick the launcher design made in claude design"): the Claude design canvas
 * "CrazyKart Legacy Mobile Launcher": logo + server + Play on the left, the sign-in card or the racer's profile card
 * (site profile look) on the right; first start = language -> control type -> HUD editor; Settings = a full-screen
 * light panel with tabs (Display, Game, Sound, Controls, HUD, Chat macros, Gamma).
 */
public class LoginActivity extends Activity {
    static final String[] NAMES = {"India", "Hong Kong"}, NAMES_ZH = {"印度", "香港"};
    static final String[] HOSTS = {"201.18.200.6", "8.210.188.242"};
    // the servers' launcher API over HTTPS (voice sends the 30-day launcher key with every poll: not in the clear)
    static final String[] API = {"https://api-in.crazykartlegacy.com", "https://api-hk.crazykartlegacy.com"};
    static int declinedVersion;          // an app update the player did not install: not asked again until the app restarts
    static final int LOGIN_PORT = 6910;

    SharedPreferences prefs;
    // Launcher language (the user, 6 Nov 2026: asked at the first start, the game follows it: CrazyKart.ini Language)
    boolean zh;
    String t(String en, String cn) { return zh ? cn : en; }
    final android.os.Handler ui = new android.os.Handler(android.os.Looper.getMainLooper());

    // the design's colours: slab #0e1f5c, ink #131a2e, kart yellow #f5c21b / deep #c98f00, muted #b7c4e8; the light
    // dialogs and Settings: paper #f2f8fc, line #cfdeea, tab rail #e3eef6, sub text #4a5870, edge #7a8ea3, blue #1a4fd6
    static final int SLAB = 0xFF0E1F5C, INK = 0xFF131A2E, YELLOW = 0xFFF5C21B, YELLOW_DEEP = 0xFFC98F00,
            MUTED = 0xFFB7C4E8, GLASS = 0x0FFFFFFF, GLASS_LINE = 0x1FFFFFFF, ERROR = 0xFFFFAB8F,
            PAPER = 0xFFF2F8FC, LINE = 0xFFCFDEEA, RAIL = 0xFFE3EEF6, SUB = 0xFF4A5870, EDGE = 0xFF7A8EA3,
            BLUE = 0xFF1A4FD6, PILL_ON = 0xFFFFF4CC, GOLD = 0xFFD4A72C, NIGHT = 0xFF0A1436;
    Typeface baloo, baloo800, nunito, nunito800;

    FrameLayout root;
    EditText user, pass;
    CheckBox remember;
    TextView formError, signInFirst, status, verText, serverName, playText, cardName;
    android.widget.ProgressBar bar;
    LinearLayout formCard, serverPill, playBtn;
    FrameLayout profile;
    ImageView playIcon, cover, avatar;
    Button signInBtn, signOutBtn;
    int srv;                                          // the picked server
    String sessionKey = ""; int sessionSrv = -1;      // signed in without "Remember": this run only
    int base = 0xFF1A4FD6, accent = 0xFF8FD3F2;       // the racer's site profile theme (accent, band)

    @Override
    protected void onCreate(Bundle b) {
        super.onCreate(b);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        prefs = getSharedPreferences("login", MODE_PRIVATE);
        zh = "zh".equals(prefs.getString("lang", ""));
        Patcher.zh = zh;
        baloo = font("baloo2.ttf", 700); baloo800 = font("baloo2.ttf", 800); nunito = font("nunito.ttf", 600); nunito800 = font("nunito.ttf", 800);
        srv = Math.max(0, Math.min(NAMES.length - 1, prefs.getInt("server", 0)));
        int[] th = themeColours(prefs.getString("theme", "sky"));
        base = th[0]; accent = th[1];
        root = new FrameLayout(this);
        root.addView(mainScreen(), new FrameLayout.LayoutParams(-1, -1));
        setContentView(root);
        showSignedIn();
        if (!prefs.contains("lang")) showLanguage();
        else if (!prefs.contains("controltype")) showControlType();
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (setPanel != null) { opts.opacity = readOpacity(); if ("hud".equals(tab)) fillTab(); }   // back from the HUD editor
    }

    @Override
    protected void onDestroy() {
        ui.removeCallbacksAndMessages(null);
        super.onDestroy();
    }

    // ---- the main screen ---------------------------------------------------------------------------------------------
    View mainScreen() {
        LinearLayout m = new LinearLayout(this);
        m.setOrientation(LinearLayout.HORIZONTAL);
        m.setPadding(dp(40), dp(18), dp(40), dp(18));

        LinearLayout left = vbox();
        left.setGravity(Gravity.CENTER_VERTICAL);
        m.addView(left, new LinearLayout.LayoutParams(dp(330), -1));
        ImageView logo = image("launcher_logo.png");
        logo.setAdjustViewBounds(true);
        logo.setContentDescription("CrazyKart Legacy");
        LinearLayout.LayoutParams llp = new LinearLayout.LayoutParams(-2, dp(110));
        llp.gravity = Gravity.CENTER_HORIZONTAL; llp.bottomMargin = dp(18);
        left.addView(logo, llp);

        // server: a pill that opens the list above it (both signed in and out: the sign-in goes to the picked server)
        serverPill = hbox();
        serverPill.setPadding(dp(16), 0, dp(14), 0);
        serverPill.addView(icon(Icon.SERVER, 0xFFA9BDB0, 20), new LinearLayout.LayoutParams(dp(20), dp(20)));
        serverName = text("", 17, Color.WHITE, baloo800);
        serverName.setPadding(dp(12), 0, dp(8), 0);
        serverPill.addView(serverName, new LinearLayout.LayoutParams(0, -2, 1));
        serverPill.addView(icon(Icon.CHEVRON_UP, 0xFFCFDCD3, 20), new LinearLayout.LayoutParams(dp(20), dp(20)));
        serverPill.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { pickServer(); } });
        left.addView(serverPill, lp(-1, dp(48), 0, 0, 0, dp(10)));

        playBtn = hbox();
        playBtn.setGravity(Gravity.CENTER);
        playIcon = icon(Icon.PLAY, INK, 22);
        playBtn.addView(playIcon, new LinearLayout.LayoutParams(dp(22), dp(22)));
        playText = text(t("Play", "开始游戏"), 24, INK, baloo800);
        playText.setPadding(dp(10), 0, 0, 0);
        playBtn.addView(playText);
        playBtn.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { go(); } });
        left.addView(playBtn, lp(-1, dp(56), 0, 0, 0, 0));
        signInFirst = text(t("Sign in first.", "请先登录。"), 13, MUTED, nunito800);
        signInFirst.setGravity(Gravity.CENTER);
        left.addView(signInFirst, lp(-1, -2, 0, dp(4), 0, 0));
        status = text("", 13, MUTED, nunito);
        status.setGravity(Gravity.CENTER);
        status.setVisibility(View.GONE);
        left.addView(status, lp(-1, -2, 0, dp(4), 0, 0));
        bar = new android.widget.ProgressBar(this, null, android.R.attr.progressBarStyleHorizontal);
        bar.setMax(100);
        bar.setProgressTintList(ColorStateList.valueOf(YELLOW));
        bar.setVisibility(View.GONE);
        left.addView(bar, lp(-1, dp(6), 0, dp(4), 0, 0));

        LinearLayout tools = hbox();
        LinearLayout set = hbox();
        set.setPadding(dp(12), 0, dp(16), 0);
        set.setBackground(round(0x40000000, 0x29FFFFFF, 999));
        set.addView(icon(Icon.GEAR, Color.WHITE, 20), new LinearLayout.LayoutParams(dp(20), dp(20)));
        TextView st = text(t("Settings", "设置"), 15, Color.WHITE, baloo);
        st.setPadding(dp(8), 0, 0, 0);
        set.addView(st);
        set.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { showSettings(); } });
        tools.addView(set, new LinearLayout.LayoutParams(-2, dp(44)));
        String ver = "";
        try { ver = getPackageManager().getPackageInfo(getPackageName(), 0).versionName; } catch (Exception ignored) { }
        verText = text(t("Launcher ", "启动器 ") + ver, 12, MUTED, nunito);
        verText.setGravity(Gravity.END);
        tools.addView(verText, new LinearLayout.LayoutParams(0, -2, 1));
        left.addView(tools, lp(-1, -2, 0, dp(10), 0, 0));

        ScrollView sc = new ScrollView(this);             // the keyboard can cover the card
        sc.setFillViewport(true);
        sc.setVerticalScrollBarEnabled(false);
        LinearLayout rc = vbox();
        rc.setGravity(Gravity.CENTER_VERTICAL);
        sc.addView(rc, new FrameLayout.LayoutParams(-1, -1));
        formCard = signInCard();
        rc.addView(formCard, new LinearLayout.LayoutParams(-1, -2));
        profile = profileCard();
        rc.addView(profile, new LinearLayout.LayoutParams(-1, -2));
        LinearLayout.LayoutParams rlp = new LinearLayout.LayoutParams(0, -1, 1);
        rlp.leftMargin = dp(28);
        m.addView(sc, rlp);
        return m;
    }

    LinearLayout signInCard() {
        LinearLayout c = vbox();
        c.setBackground(round(0x40000000, 0x24FFFFFF, 16));
        c.setClipToOutline(true);
        LinearLayout in = vbox();
        in.setPadding(dp(18), dp(16), dp(18), dp(16));
        LinearLayout grid = hbox();
        grid.setGravity(Gravity.TOP);
        LinearLayout c1 = vbox(), c2 = vbox();
        c1.addView(fieldLabel(t("Username", "账号")));
        user = field(false);
        user.setText(prefs.getString("user", ""));
        c1.addView(user, new LinearLayout.LayoutParams(-1, dp(44)));
        c2.addView(fieldLabel(t("Password", "密码")));
        FrameLayout pw = new FrameLayout(this);
        pass = field(true);
        pass.setPadding(dp(12), 0, dp(46), 0);
        pw.addView(pass, new FrameLayout.LayoutParams(-1, dp(44)));
        final ImageView eye = icon(Icon.EYE, MUTED, 19);
        eye.setScaleType(ImageView.ScaleType.CENTER);
        eye.setContentDescription(t("Show password", "显示密码"));
        eye.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
            boolean show = (pass.getInputType() & InputType.TYPE_TEXT_VARIATION_PASSWORD) != 0;
            pass.setInputType(show ? InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_VARIATION_VISIBLE_PASSWORD
                                   : InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_VARIATION_PASSWORD);
            pass.setTypeface(nunito);
            pass.setSelection(pass.getText().length());
            eye.setImageDrawable(new Icon(show ? Icon.EYE_OFF : Icon.EYE, show ? YELLOW : MUTED, dp(19)));
            eye.setContentDescription(show ? t("Hide password", "隐藏密码") : t("Show password", "显示密码"));
        } });
        pw.addView(eye, new FrameLayout.LayoutParams(dp(44), dp(44), Gravity.END));
        c2.addView(pw);
        grid.addView(c1, new LinearLayout.LayoutParams(0, -2, 1));
        LinearLayout.LayoutParams c2p = new LinearLayout.LayoutParams(0, -2, 1);
        c2p.leftMargin = dp(10);
        grid.addView(c2, c2p);
        in.addView(grid);
        remember = check(t("Remember this device", "在此设备上记住我"), t(" (30 days)", "（30天）"));
        remember.setChecked(prefs.getBoolean("remember", true));
        in.addView(remember, lp(-2, dp(36), 0, dp(10), 0, 0));
        formError = text("", 13, ERROR, nunito800);
        formError.setVisibility(View.GONE);
        in.addView(formError);
        signInBtn = yellowButton(t("Sign in", "登录"), 21);
        signInBtn.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { signIn(); } });
        in.addView(signInBtn, lp(-1, dp(50), 0, dp(10), 0, 0));
        c.addView(in);
        View chk = new View(this);
        chk.setBackground(new Checker(dp(5)));
        c.addView(chk, new LinearLayout.LayoutParams(-1, dp(10)));
        return c;
    }

    FrameLayout profileCard() {
        FrameLayout c = new FrameLayout(this);
        c.setClipToOutline(true);
        LinearLayout col = vbox();
        View gold = new View(this);
        gold.setBackgroundColor(GOLD);
        col.addView(gold, new LinearLayout.LayoutParams(-1, dp(5)));
        cover = new ImageView(this);
        cover.setScaleType(ImageView.ScaleType.CENTER_CROP);
        cover.setBackground(new Stripes(0xFF151515, 0x0BFFFFFF, dp(10)));
        col.addView(cover, new LinearLayout.LayoutParams(-1, dp(150)));
        LinearLayout row = hbox();
        row.setPadding(dp(14), dp(14), dp(14), dp(18));
        avatar = image("launcher_avatar.png");
        avatar.setScaleType(ImageView.ScaleType.CENTER_CROP);
        avatar.setClipToOutline(true);
        int ap = dp(2);
        avatar.setPadding(ap, ap, ap, ap);
        row.addView(avatar, new LinearLayout.LayoutParams(dp(60), dp(60)));
        LinearLayout who = vbox();
        who.setPadding(dp(12), 0, dp(12), 0);
        cardName = text("", 22, accent, baloo800);
        cardName.setSingleLine(true);
        cardName.setEllipsize(android.text.TextUtils.TruncateAt.END);
        who.addView(cardName);
        LinearLayout idle = hbox();
        View dot = new View(this);
        dot.setBackground(round(0xFF8F9AA3, 0, 999));
        idle.addView(dot, new LinearLayout.LayoutParams(dp(9), dp(9)));
        TextView it = text(t("Idle", "空闲"), 14, 0xFFB5C2BA, nunito800);
        it.setPadding(dp(7), 0, 0, 0);
        idle.addView(it);
        who.addView(idle);
        row.addView(who, new LinearLayout.LayoutParams(0, -2, 1));
        signOutBtn = new Button(this);
        signOutBtn.setText(t("Sign out", "退出登录"));
        signOutBtn.setAllCaps(false);
        signOutBtn.setTypeface(nunito800);
        signOutBtn.setTextSize(14);
        signOutBtn.setTextColor(0xFFE6EFE9);
        signOutBtn.setStateListAnimator(null);
        signOutBtn.setPadding(dp(16), 0, dp(16), 0);
        signOutBtn.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { signOut(); } });
        row.addView(signOutBtn, new LinearLayout.LayoutParams(-2, dp(44)));
        col.addView(row);
        c.addView(col);
        return c;
    }

    // card or form: signed in = a launcher key for the server that is picked now
    String currentKey() {
        String k = prefs.getString("key", "");
        if (!k.isEmpty() && prefs.getInt("keyServer", -1) == srv) return k;
        return sessionSrv == srv ? sessionKey : "";
    }

    void showSignedIn() {
        boolean in = !currentKey().isEmpty();
        serverName.setText(zh ? NAMES_ZH[srv] : NAMES[srv]);
        formCard.setVisibility(in ? View.GONE : View.VISIBLE);
        profile.setVisibility(in ? View.VISIBLE : View.GONE);
        signInFirst.setVisibility(in ? View.GONE : View.VISIBLE);
        signInFirst.setText(!in && !prefs.getString("key", "").isEmpty() ? t("Sign in to this server first.", "请先登录此服务器。") : t("Sign in first.", "请先登录。"));
        playBtn.setEnabled(in);
        playBtn.setAlpha(in ? 1f : 0.6f);
        playBtn.setBackground(in ? step(YELLOW, 0, 0, YELLOW_DEEP, 4, 999) : round(0x1AFFFFFF, 0, 999));
        playText.setTextColor(in ? INK : MUTED);
        playIcon.setImageDrawable(new Icon(Icon.PLAY, in ? INK : MUTED, dp(22)));
        if (in) {
            String user = prefs.getString("user", "");
            cardName.setText(prefs.getString("nick", "").isEmpty() ? user : prefs.getString("nick", ""));
            loadSkin(user);
        }
        applyLook(in);
    }

    // signed in: the screen wears the racer's profile theme (the design's "account style"); signed out: the slab
    void applyLook(boolean in) {
        int line = mix(base, 0xFF000000, 0.6f);
        if (in) root.setBackground(new Stripes(mix(base, 0xFF000000, 0.86f), 0x07FFFFFF, dp(14)));
        else root.setBackgroundColor(SLAB);
        verText.setTextColor(in ? mix(accent, 0xFF6B7280, 0.55f) : MUTED);
        serverPill.setBackground(roundS(0x4D000000, in ? line : 0x29FFFFFF, 2, 999));
        profile.setBackground(roundS(mix(base, 0xFF000000, 0.8f), accent, 2, 18));
        cardName.setTextColor(accent);
        signOutBtn.setBackground(roundS(mix(base, 0xFF000000, 0.72f), mix(base, 0xFF000000, 0.5f), 2, 999));
        avatar.setBackground(roundS(accent, GOLD, 2, 12));
    }

    void pickServer() {
        boolean in = !currentKey().isEmpty();
        int popBg = in ? mix(base, 0xFF000000, 0.8f) : INK, line = in ? mix(base, 0xFF000000, 0.6f) : 0x29FFFFFF;
        LinearLayout list = vbox();
        list.setBackground(roundS(popBg, line, 2, 16));
        list.setClipToOutline(true);
        final PopupWindow pw = new PopupWindow(list, serverPill.getWidth(), -2, true);
        for (int i = 0; i < NAMES.length; i++) {
            final int k = i;
            LinearLayout r = hbox();
            r.setPadding(dp(16), 0, dp(16), 0);
            if (i == srv) r.setBackgroundColor(in ? mix(base, 0xFF000000, 0.7f) : 0x1AFFFFFF);
            r.addView(text(zh ? NAMES_ZH[i] : NAMES[i], 16, Color.WHITE, nunito800), new LinearLayout.LayoutParams(0, -2, 1));
            if (i == srv) r.addView(icon(Icon.CHECK, in ? accent : YELLOW, 20), new LinearLayout.LayoutParams(dp(20), dp(20)));
            r.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                pw.dismiss();
                if (k == srv) return;
                srv = k;
                prefs.edit().putInt("server", k).apply();
                status.setVisibility(View.GONE);
                showSignedIn();
            } });
            list.addView(r, new LinearLayout.LayoutParams(-1, dp(46)));
        }
        pw.setBackgroundDrawable(new ColorDrawable(0));
        pw.setOutsideTouchable(true);
        list.measure(View.MeasureSpec.makeMeasureSpec(serverPill.getWidth(), View.MeasureSpec.EXACTLY), View.MeasureSpec.UNSPECIFIED);
        pw.showAsDropDown(serverPill, 0, -(serverPill.getHeight() + list.getMeasuredHeight() + dp(8)));
    }

    void signIn() {
        final String account = user.getText().toString().trim().toLowerCase(Locale.ROOT);   // login names are lowercase only
        final String password = pass.getText().toString();
        user.setBackground(fieldBg(account.isEmpty()));
        pass.setBackground(fieldBg(password.isEmpty()));
        if (account.isEmpty() || password.isEmpty()) { formErr(t("Enter your username and password.", "请输入账号和密码。")); return; }
        formError.setVisibility(View.GONE);
        signInBtn.setEnabled(false);
        signInBtn.setText(t("Signing in...", "正在登录..."));
        final int s = srv;
        final boolean rem = remember.isChecked();
        new Thread(new Runnable() { public void run() {
            String err;
            try {
                Reply r = request(HOSTS[s], account, password, 0x6f01);
                if (r.error == null) {
                    Reply p = request(HOSTS[s], account, r.key, 0x6f03);     // only for the racer's nickname (the card's name)
                    final String key = r.key, nick = p.error == null ? p.nickname : "";
                    runOnUiThread(new Runnable() { public void run() {
                        SharedPreferences.Editor ed = prefs.edit().putString("user", account).putInt("server", s).putBoolean("remember", rem);
                        if (!nick.isEmpty()) ed.putString("nick", nick); else ed.remove("nick");
                        if (rem) ed.putString("key", key).putInt("keyServer", s); else { ed.remove("key"); sessionKey = key; sessionSrv = s; }
                        ed.apply();
                        pass.setText("");
                        signInBtn.setEnabled(true);
                        signInBtn.setText(t("Sign in", "登录"));
                        skinFor = null;
                        showSignedIn();
                    } });
                    return;
                }
                err = r.error;
            } catch (Exception e) {
                err = t("Cannot reach ", "无法连接") + (zh ? NAMES_ZH[s] : NAMES[s]) + " (" + e.getMessage() + ")";
            }
            final String msg = err;
            runOnUiThread(new Runnable() { public void run() { signInBtn.setEnabled(true); signInBtn.setText(t("Sign in", "登录")); formErr(msg); } });
        } }).start();
    }
    void formErr(String m) { formError.setText(m); formError.setVisibility(View.VISIBLE); }

    void signOut() {                                     // the key goes; the username stays filled in
        prefs.edit().remove("key").remove("nick").apply();
        sessionKey = ""; sessionSrv = -1; skinFor = null;
        cover.setImageDrawable(null);
        avatar.setImageDrawable(image("launcher_avatar.png").getDrawable());
        showSignedIn();
    }

    // ---- the racer's site profile look: GET <site>/api/launcher/skin/<user> -> theme, cover, avatar (frame: SVG, not drawn)
    static final String SITE = "https://crazykartlegacy.com";
    static int[] themeColours(String theme) {                 // accent, band (the launcher's profile-theme-* colours)
        if ("sunset".equals(theme)) return new int[]{0xFFE2551B, 0xFFFFB38A};
        if ("mint".equals(theme)) return new int[]{0xFF10917D, 0xFF8FE0CF};
        if ("grape".equals(theme)) return new int[]{0xFF7A3FD1, 0xFFC9B0F2};
        if ("gold".equals(theme)) return new int[]{0xFFC98F00, 0xFFF5C21B};
        return new int[]{0xFF1A4FD6, 0xFF8FD3F2};             // sky (the site's default)
    }
    String skinFor;                                             // the user whose look is loading / shown
    void loadSkin(final String name) {
        if (name.isEmpty() || name.equals(skinFor)) return;
        skinFor = name;
        new Thread(new Runnable() { public void run() {
            try {
                org.json.JSONObject s = new org.json.JSONObject(new String(fetch(SITE + "/api/launcher/skin/" + java.net.URLEncoder.encode(name, "UTF-8")), StandardCharsets.UTF_8));
                if (!s.optBoolean("ok")) return;
                final String theme = s.optString("theme", "sky");
                org.json.JSONObject cv = s.optJSONObject("cover");
                final android.graphics.Bitmap cov = cv != null ? bitmap(cv.optString("url")) : null;
                final android.graphics.Bitmap av = s.isNull("avatar") ? null : bitmap(s.optString("avatar"));
                runOnUiThread(new Runnable() { public void run() {
                    if (!name.equals(skinFor)) return;              // signed out / switched while it loaded
                    prefs.edit().putString("theme", theme).apply();
                    int[] th = themeColours(theme);
                    base = th[0]; accent = th[1];
                    if (cov != null) cover.setImageBitmap(cov);
                    if (av != null) avatar.setImageBitmap(av);
                    applyLook(!currentKey().isEmpty());
                } });
            } catch (Exception e) { /* offline: the plain card */ }
        } }).start();
    }
    static byte[] fetch(String url) throws Exception {
        java.net.HttpURLConnection c = (java.net.HttpURLConnection) new java.net.URL(url).openConnection();
        c.setConnectTimeout(8000);
        c.setReadTimeout(8000);
        try { return readStream(c.getInputStream()); } finally { c.disconnect(); }
    }
    static byte[] readStream(java.io.InputStream in) throws Exception {
        java.io.ByteArrayOutputStream o = new java.io.ByteArrayOutputStream();
        byte[] b = new byte[16384];
        for (int n; (n = in.read(b)) > 0; ) o.write(b, 0, n);
        in.close();
        return o.toByteArray();
    }
    static android.graphics.Bitmap bitmap(String url) {
        if (url == null || url.isEmpty() || "null".equals(url)) return null;
        try { byte[] d = fetch(url); return BitmapFactory.decodeByteArray(d, 0, d.length); } catch (Exception e) { return null; }
    }

    // ---- first start: language -> control type -> HUD editor (keyboard / controller: a note instead) ------------------
    View overlay;
    FrameLayout dialogScreen(View dialog, int widthDp) {
        FrameLayout f = new FrameLayout(this);
        f.setBackgroundColor(NIGHT);
        f.setClickable(true);
        int w = Math.min(dp(widthDp), getResources().getDisplayMetrics().widthPixels - dp(32));
        ScrollView sv = new ScrollView(this);
        sv.setFillViewport(false);
        sv.addView(dialog);
        f.addView(sv, new FrameLayout.LayoutParams(w, -2, Gravity.CENTER));
        if (overlay != null) root.removeView(overlay);
        root.addView(f, new FrameLayout.LayoutParams(-1, -1));
        overlay = f;
        return f;
    }
    void closeOverlay() { if (overlay != null) root.removeView(overlay); overlay = null; }

    LinearLayout lightDialog(int padH, int padT, int padB) {
        LinearLayout d = vbox();
        d.setGravity(Gravity.CENTER_HORIZONTAL);
        d.setBackground(step(PAPER, 0, 0, LINE, 4, 16));
        d.setPadding(dp(padH), dp(padT), dp(padH), dp(padB));
        return d;
    }

    void showLanguage() {
        LinearLayout d = lightDialog(32, 22, 20);
        ImageView logo = image("launcher_logo.png");
        logo.setAdjustViewBounds(true);
        d.addView(logo, new LinearLayout.LayoutParams(-2, dp(76)));
        SpannableString title = new SpannableString("选择语言 · Choose your language");
        title.setSpan(new ForegroundColorSpan(EDGE), 5, 6, 0);
        TextView h = text("", 24, INK, baloo800);
        h.setText(title);
        d.addView(h, lp(-2, -2, 0, dp(14), 0, 0));
        LinearLayout two = hbox();
        two.addView(langCard("中文", "简体中文", true), new LinearLayout.LayoutParams(0, dp(100), 1));
        View gap = new View(this);
        two.addView(gap, new LinearLayout.LayoutParams(dp(16), 1));
        two.addView(langCard("English", "English", false), new LinearLayout.LayoutParams(0, dp(100), 1));
        d.addView(two, lp(-1, -2, 0, dp(14), 0, 0));
        d.addView(text("以后可以在 设置 中更改。   You can change this later in Settings.", 13, SUB, nunito), lp(-2, -2, 0, dp(14), 0, 0));
        dialogScreen(d, 540);
    }
    View langCard(String big, String small, final boolean cn) {
        LinearLayout b = vbox();
        b.setGravity(Gravity.CENTER);
        b.setBackground(step(Color.WHITE, LINE, 2, LINE, 4, 16));
        b.addView(text(big, 32, INK, baloo800));
        b.addView(text(small, 13, SUB, nunito));
        b.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { setLanguage(cn); } });
        return b;
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
        if (cn != zh) recreate();                                      // onCreate then asks the control type
        else if (!prefs.contains("controltype")) showControlType();
        else closeOverlay();
    }

    // control type (the user, 12 Nov 2026): Classic -> the HUD editor; Mobile -> Mobile touch controls on (AUTO GAS +
    // TAP DRIFT) + the editor; Keyboard / controller -> on-screen controls at opacity 0 (hud_layout.txt touch_opacity)
    void showControlType() {
        LinearLayout d = lightDialog(24, 18, 16);
        d.addView(text(t("STEP 2 OF 3", "第 2 步，共 3 步"), 13, SUB, baloo));
        d.addView(text(t("How do you want to play?", "选择操作方式"), 26, INK, baloo800));
        LinearLayout three = hbox();
        three.setGravity(Gravity.TOP);
        three.addView(typeCard(0), new LinearLayout.LayoutParams(0, -2, 1));
        three.addView(new View(this), new LinearLayout.LayoutParams(dp(14), 1));
        three.addView(typeCard(1), new LinearLayout.LayoutParams(0, -2, 1));
        three.addView(new View(this), new LinearLayout.LayoutParams(dp(14), 1));
        three.addView(typeCard(2), new LinearLayout.LayoutParams(0, -2, 1));
        d.addView(three, lp(-1, -2, 0, dp(12), 0, 0));
        d.addView(text(t("You can change this later in Settings › Controls.", "以后可以在 设置 › 按键 中更改。"), 13, SUB, nunito), lp(-2, -2, 0, dp(12), 0, 0));
        dialogScreen(d, 760);
    }
    View typeCard(final int w) {
        LinearLayout b = vbox();
        b.setBackground(step(Color.WHITE, LINE, 2, LINE, 4, 16));
        b.setPadding(dp(10), dp(10), dp(10), dp(14));
        FrameLayout pv = new FrameLayout(this);
        pv.setBackground(round(0xFF111827, 0, 10));
        if (w == 2) {
            LinearLayout ic = hbox();
            ic.setGravity(Gravity.CENTER);
            ic.addView(icon(Icon.PAD, YELLOW, 64), new LinearLayout.LayoutParams(dp(64), dp(64)));
            ic.addView(new View(this), new LinearLayout.LayoutParams(dp(14), 1));
            ic.addView(icon(Icon.KEYBOARD, MUTED, 56), new LinearLayout.LayoutParams(dp(56), dp(56)));
            pv.addView(ic, new FrameLayout.LayoutParams(-1, -1));
        } else {
            dashed(pv, 6, 6, 46, 16, false);
            dashed(pv, 8, 6, 34, 30, true);
            if (w == 1) {
                pic(pv, "touch_autogas.png", 8, 60, 18, false);
                pic(pv, "touch_tapdrift.png", 30, 60, 18, false);
                View ring = new View(this);
                ring.setBackground(roundS(0, YELLOW, 2, 8));
                FrameLayout.LayoutParams rl = new FrameLayout.LayoutParams(dp(48), dp(26));
                rl.leftMargin = dp(4); rl.topMargin = dp(56);
                pv.addView(ring, rl);
            }
            pic(pv, "touch_left.png", 5, 84, 28, false);
            pic(pv, "touch_right.png", 38, 84, 28, false);
            pic(pv, "touch_gas.png", 5, 84, 28, true);
            pic(pv, "touch_brake.png", 38, 90, 21, true);
            pic(pv, "touch_drift.png", 6, 54, 25, true);
            pic(pv, "touch_item.png", 37, 62, 22, true);
        }
        b.addView(pv, new LinearLayout.LayoutParams(-1, dp(120)));
        String[] name = {t("Classic", "经典"), t("Mobile", "手游"), t("Keyboard / controller", "键盘 / 手柄")};
        String[] sub = {t("Touch buttons, hold to drive. Arrange your HUD and buttons next.", "触屏按键，按住油门。下一步调整 HUD 和按键。"),
                        t("Auto gas, tap to drift: two switches above the steering. Arrange your HUD and buttons next.", "自动油门，轻点漂移：方向键上方有两个开关。下一步调整 HUD 和按键。"),
                        t("On-screen controls hidden (0% opacity).", "隐藏屏幕按键（透明度 0%）。")};
        b.addView(text(name[w], 20, INK, baloo800), lp(-2, -2, 0, dp(8), 0, 0));
        b.addView(text(sub[w], 13, SUB, nunito), lp(-1, -2, 0, dp(4), 0, 0));
        b.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { setControls(w); } });
        return b;
    }
    void pic(FrameLayout f, String asset, int x, int y, int size, boolean fromRight) {
        ImageView v = image(asset);
        FrameLayout.LayoutParams l = new FrameLayout.LayoutParams(dp(size), dp(size), Gravity.TOP | (fromRight ? Gravity.END : Gravity.START));
        if (fromRight) l.rightMargin = dp(x); else l.leftMargin = dp(x);
        l.topMargin = dp(y);
        f.addView(v, l);
    }
    void dashed(FrameLayout f, int x, int y, int w, int h, boolean fromRight) {
        View v = new View(this);
        GradientDrawable g = new GradientDrawable();
        g.setCornerRadius(dp(4));
        g.setStroke(dp(1), 0x59FFFFFF, dp(3), dp(2));
        v.setBackground(g);
        FrameLayout.LayoutParams l = new FrameLayout.LayoutParams(dp(w), dp(h), Gravity.TOP | (fromRight ? Gravity.END : Gravity.START));
        if (fromRight) l.rightMargin = dp(x); else l.leftMargin = dp(x);
        l.topMargin = dp(y);
        f.addView(v, l);
    }
    void setControls(int w) {
        String type = w == 1 ? "mobile" : w == 2 ? "keyboard" : "classic";
        prefs.edit().putString("controltype", type).putBoolean("touchmobile", w == 1).apply();
        closeOverlay();
        setTouchOpacity(w == 2 ? 0f : 0.6f);
        if (w == 2) { showKeyboardNote(); return; }
        startActivity(new Intent(this, HudEditorActivity.class).putExtra("mode", type).putExtra("first", true));
    }
    View note;
    void showKeyboardNote() {
        LinearLayout n = hbox();
        n.setBackground(roundS(INK, 0x29FFFFFF, 1, 16));
        n.setPadding(dp(16), dp(8), dp(8), dp(8));
        n.addView(icon(Icon.PAD, YELLOW, 22), new LinearLayout.LayoutParams(dp(22), dp(22)));
        TextView m = text(t("On-screen controls are hidden for keyboard / controller. Change it in Settings › Controls.",
                            "已为键盘 / 手柄隐藏屏幕按键。可以在 设置 › 按键 中更改。"), 14, Color.WHITE, nunito800);
        m.setPadding(dp(12), 0, dp(12), 0);
        n.addView(m, new LinearLayout.LayoutParams(0, -2, 1));
        ImageView x = icon(Icon.CLOSE, Color.WHITE, 16);
        x.setScaleType(ImageView.ScaleType.CENTER);
        x.setBackground(round(0x14FFFFFF, 0, 999));
        x.setContentDescription(t("Dismiss", "关闭"));
        x.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { root.removeView(note); note = null; } });
        n.addView(x, new LinearLayout.LayoutParams(dp(40), dp(40)));
        FrameLayout.LayoutParams l = new FrameLayout.LayoutParams(Math.min(dp(560), getResources().getDisplayMetrics().widthPixels - dp(32)), -2, Gravity.TOP | Gravity.CENTER_HORIZONTAL);
        l.topMargin = dp(10);
        if (note != null) root.removeView(note);
        root.addView(n, l);
        note = n;
    }

    // hud_layout.txt keeps the HUD editor's positions; only its touch_opacity line changes
    void setTouchOpacity(float a) {
        File f = gameFile("hud_layout.txt");
        byte[] old = readAll(f);
        StringBuilder sb = new StringBuilder();
        if (old != null)
            for (String line : new String(old, StandardCharsets.UTF_8).split("\n"))
                if (!line.trim().startsWith("touch_opacity") && !line.trim().isEmpty()) sb.append(line.trim()).append('\n');
        sb.append(String.format(Locale.ROOT, "touch_opacity %.2f\n", a));
        try {
            f.getParentFile().mkdirs();
            FileOutputStream o = new FileOutputStream(f);
            o.write(sb.toString().getBytes(StandardCharsets.UTF_8));
            o.close();
        } catch (Exception ignored) { }
    }
    float readOpacity() {
        byte[] b = readAll(gameFile("hud_layout.txt"));
        if (b != null)
            for (String line : new String(b, StandardCharsets.UTF_8).split("\n")) {
                String[] p = line.trim().split("\\s+");
                if (p.length == 2 && p[0].equals("touch_opacity")) try { return Math.max(0f, Math.min(1f, Float.parseFloat(p[1]))); } catch (Exception ignored) { }
            }
        return "keyboard".equals(prefs.getString("controltype", "")) ? 0f : 0.6f;
    }

    // ---- Settings: full-screen light panel, tabs on the left, Restore / Repair / Cancel / Save ---------------------
    // UserSetting.bin (Launcher/settings-store.js): 0x18 u32 detail (0 High, 1 Middle), 0x1c f32 gamma, 0x20 u8 music on,
    // 0x24 u32 music volume 0-10, 0x28 u8 effects on, 0x2c u32 effects volume, 0x58 chat macros. CrazyKart.ini [Option]:
    // VSync=1 caps at the screen rate, else MaxFps=N (HighRefresh = limiter on), Language. Resolution / window mode stay
    // as the phone needs them (1280x720 windowed). Voice volumes / noise / ping: prefs, sent by VoiceChat.
    static final int[] FPS = {0, 30, 60, 90, 120};                       // 0 = Auto (VSync: the screen's rate)
    static class Opts {
        boolean wide = true, effects = true, lean, etc2, acc = true, music = true, sfx = true;
        int scale = 100, detail, fps, musicVol = 7, sfxVol = 7, voiceVol = 100, micVol = 100;
        String ping = "room,race", noise = "ai", ctl = "classic";
        float opacity = 0.6f, gamma = 1f;
        String[] macros = new String[Controls.MACROS];
    }
    Opts opts;
    View setPanel;
    LinearLayout tabContent;
    String tab = "display";
    boolean zhBefore;

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
    // chat macro <slot> of UserSetting.bin (0x58 + slot * 0x400, UTF-16LE, zero padded)
    static String macro(byte[] us, int slot) {
        int o = 0x58 + slot * 0x400;
        if (us == null || us.length < o + 0x400) return "";
        int n = 0;
        while (n < 0x3fe && (us[o + n] != 0 || us[o + n + 1] != 0)) n += 2;
        return new String(us, o, n, StandardCharsets.UTF_16LE);
    }

    Opts loadOpts() {
        Opts o = new Opts();
        o.wide = prefs.getBoolean("wide", true); o.scale = prefs.getInt("scale", 100);
        o.effects = prefs.getBoolean("effects", true); o.lean = prefs.getBoolean("lean", false); o.etc2 = prefs.getBoolean("etc2", false);
        o.acc = prefs.getBoolean("accessories", true); o.ping = prefs.getString("ping", "room,race");
        o.noise = prefs.getString("noise", "ai"); o.voiceVol = prefs.getInt("voicevol", 100); o.micVol = prefs.getInt("micvol", 100);
        o.ctl = prefs.getString("controltype", prefs.getBoolean("touchmobile", false) ? "mobile" : "classic");
        o.opacity = readOpacity();
        byte[] us = readAll(gameFile("UserSetting.bin"));
        if (us != null && us.length >= 0x30) {
            java.nio.ByteBuffer bb = java.nio.ByteBuffer.wrap(us).order(java.nio.ByteOrder.LITTLE_ENDIAN);
            o.detail = Math.min(1, Math.max(0, bb.getInt(0x18)));
            o.gamma = bb.getFloat(0x1c);
            if (!(o.gamma >= 0.5f && o.gamma <= 3f)) o.gamma = 1f;
            o.music = us[0x20] != 0; o.musicVol = Math.min(10, Math.max(0, bb.getInt(0x24)));
            o.sfx = us[0x28] != 0; o.sfxVol = Math.min(10, Math.max(0, bb.getInt(0x2c)));
        }
        for (int s = 0; s < Controls.MACROS; s++) o.macros[s] = macro(us, s);
        byte[] ib = readAll(gameFile("CrazyKart.ini"));
        String ini = ib == null ? "" : new String(ib, StandardCharsets.UTF_8);
        String vs = iniGet(ini, "VSync"), mf = iniGet(ini, "MaxFps");
        if (!"1".equals(vs) && mf != null) for (int i = 1; i < FPS.length; i++) if (FPS[i] == Integer.parseInt(mf)) o.fps = i;
        return o;
    }

    void saveOpts() {
        Opts o = opts;
        prefs.edit().putBoolean("wide", o.wide).putInt("scale", o.scale).putBoolean("effects", o.effects).putBoolean("lean", o.lean)
                .putBoolean("etc2", o.etc2).putBoolean("vsync", FPS[o.fps] == 0).putBoolean("accessories", o.acc).putString("ping", o.ping)
                .putString("noise", o.noise).putInt("voicevol", o.voiceVol).putInt("micvol", o.micVol)
                .putString("controltype", o.ctl).putBoolean("touchmobile", "mobile".equals(o.ctl)).apply();
        setTouchOpacity(o.opacity);
        try {
            File usf = gameFile("UserSetting.bin");
            byte[] us = readAll(usf);
            if (us != null && us.length >= 0x30) {
                java.nio.ByteBuffer bb = java.nio.ByteBuffer.wrap(us).order(java.nio.ByteOrder.LITTLE_ENDIAN);
                bb.putInt(0x18, o.detail);
                bb.putFloat(0x1c, o.gamma);
                us[0x20] = (byte) (o.music ? 1 : 0); bb.putInt(0x24, o.musicVol);
                us[0x28] = (byte) (o.sfx ? 1 : 0); bb.putInt(0x2c, o.sfxVol);
                for (int s = 0; s < Controls.MACROS; s++) {        // chat macros: UTF-16LE, zero padded, 511 chars at most
                    String m = o.macros[s] == null ? "" : o.macros[s];
                    if (m.equals(macro(us, s)) || us.length < 0x58 + (s + 1) * 0x400) continue;
                    java.util.Arrays.fill(us, 0x58 + s * 0x400, 0x58 + (s + 1) * 0x400, (byte) 0);
                    byte[] u = m.substring(0, Math.min(m.length(), 511)).getBytes(StandardCharsets.UTF_16LE);
                    System.arraycopy(u, 0, us, 0x58 + s * 0x400, Math.min(u.length, 0x3fe));
                }
                FileOutputStream f = new FileOutputStream(usf); f.write(us); f.close();
            }
            File inf = gameFile("CrazyKart.ini");
            byte[] ib = readAll(inf);
            String n = iniSet(ib == null ? "" : new String(ib, StandardCharsets.UTF_8), "VSync", FPS[o.fps] == 0 ? 1 : 0);
            n = iniSet(n, "MaxFps", FPS[o.fps]);
            n = iniSet(n, "HighRefresh", 1);
            FileOutputStream f = new FileOutputStream(inf); f.write(n.getBytes(StandardCharsets.UTF_8)); f.close();
        } catch (Exception e) {
            android.widget.Toast.makeText(this, t("Could not save the settings (", "无法保存设置（") + e.getMessage() + t(")", "）"), android.widget.Toast.LENGTH_LONG).show();
        }
    }

    void showSettings() {
        if (setPanel != null) return;
        phoneDisplay();                                       // a fresh install has no UserSetting.bin yet
        opts = loadOpts();
        zhBefore = zh;
        tab = "display";
        buildSettings();
    }
    void closeSettings(boolean save) {
        if (setPanel == null) return;
        boolean lang = zh;
        if (save) saveOpts();
        root.removeView(setPanel);
        setPanel = null;
        zh = zhBefore;
        if (save && lang != zhBefore) setLanguage(lang);       // the launcher comes back in the new language
    }

    void buildSettings() {
        if (setPanel != null) root.removeView(setPanel);
        LinearLayout p = vbox();
        p.setBackgroundColor(PAPER);
        p.setClickable(true);
        LinearLayout head = hbox();
        head.setPadding(dp(24), dp(10), dp(16), dp(8));
        head.addView(text(t("Game settings", "游戏设置"), 24, INK, baloo800), new LinearLayout.LayoutParams(0, -2, 1));
        LinearLayout lang = hbox();
        lang.setBackground(step(Color.WHITE, EDGE, 1, LINE, 3, 999));
        lang.setPadding(dp(12), 0, dp(12), dp(3));
        lang.addView(icon(Icon.GLOBE, INK, 18), new LinearLayout.LayoutParams(dp(18), dp(18)));
        TextView ln = text(zh ? "中文" : "English", 15, INK, nunito800);
        ln.setPadding(dp(8), 0, dp(10), 0);
        lang.addView(ln);
        lang.addView(icon(Icon.CHEVRON_DOWN, INK, 14), new LinearLayout.LayoutParams(dp(14), dp(14)));
        lang.setContentDescription("Language / 语言");
        lang.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
            android.widget.PopupMenu pm = new android.widget.PopupMenu(LoginActivity.this, v);
            pm.getMenu().add(0, 0, 0, "English");
            pm.getMenu().add(0, 1, 1, "中文");
            pm.setOnMenuItemClickListener(new android.widget.PopupMenu.OnMenuItemClickListener() { public boolean onMenuItemClick(android.view.MenuItem mi) { boolean cn = mi.getItemId() == 1; if (cn != zh) { zh = cn; buildSettings(); } return true; } });
            pm.show();
        } });
        head.addView(lang, lp(-2, dp(44), 0, 0, dp(12), 0));
        ImageView x = icon(Icon.CLOSE, INK, 18);
        x.setScaleType(ImageView.ScaleType.CENTER);
        x.setBackground(step(Color.WHITE, 0, 0, LINE, 3, 999));
        x.setContentDescription(t("Close settings", "关闭设置"));
        x.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { closeSettings(false); } });
        head.addView(x, new LinearLayout.LayoutParams(dp(44), dp(44)));
        p.addView(head);

        LinearLayout body = hbox();
        body.setGravity(Gravity.TOP);
        body.setPadding(dp(24), 0, dp(16), 0);
        ScrollView rail = new ScrollView(this);
        rail.setVerticalScrollBarEnabled(false);
        LinearLayout tabs = vbox();
        tabs.setBackground(round(RAIL, 0, 22));
        tabs.setPadding(dp(4), dp(4), dp(4), dp(4));
        String[][] all = {{"display", t("Display", "画面")}, {"game", t("Game", "游戏")}, {"sound", t("Sound", "声音")}, {"controls", t("Controls", "按键")},
                          {"hud", "HUD"}, {"chat", t("Chat macros", "快捷聊天")}, {"gamma", "Gamma"}};
        for (final String[] tb : all) {
            boolean on = tb[0].equals(tab);
            TextView b = text(tb[1], 15, on ? INK : SUB, baloo);
            b.setGravity(Gravity.CENTER);
            b.setBackground(on ? step(Color.WHITE, 0, 0, LINE, 2, 999) : null);
            b.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { tab = tb[0]; buildSettings(); } });
            tabs.addView(b, lp(-1, dp(40), 0, 0, 0, dp(3)));
        }
        rail.addView(tabs);
        body.addView(rail, new LinearLayout.LayoutParams(dp(150), -2));
        ScrollView card = new ScrollView(this);
        card.setBackground(step(Color.WHITE, LINE, 1, LINE, 3, 16));
        tabContent = vbox();
        tabContent.setPadding(dp(18), dp(4), dp(18), dp(12));
        card.addView(tabContent);
        LinearLayout.LayoutParams cl = new LinearLayout.LayoutParams(0, -1, 1);
        cl.leftMargin = dp(14);
        body.addView(card, cl);
        p.addView(body, new LinearLayout.LayoutParams(-1, 0, 1));
        fillTab();

        LinearLayout foot = hbox();
        foot.setPadding(dp(24), dp(10), dp(16), dp(10));
        Button restore = lightButton(t("Restore defaults", "恢复默认设置"));
        restore.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
            Opts d = new Opts();
            d.ctl = opts.ctl; d.opacity = opts.opacity; d.macros = opts.macros;   // the design's defaults: display, game, sound, gamma
            opts = d;
            fillTab();
        } });
        foot.addView(restore, new LinearLayout.LayoutParams(-2, dp(44)));
        Button repair = lightButton(t("Repair game files", "修复游戏文件"));
        repair.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { new android.app.AlertDialog.Builder(LoginActivity.this)
                .setMessage(t("Check every game file and download again the ones that are damaged? It runs at the next Play and can take a few minutes.",
                              "检查所有游戏文件并重新下载损坏的文件？会在下次开始游戏时进行，可能需要几分钟。"))
                .setNegativeButton(t("Cancel", "取消"), null)
                .setPositiveButton(t("Repair", "修复"), new android.content.DialogInterface.OnClickListener() { public void onClick(android.content.DialogInterface dlg, int w) {
                    new File(gameFile(""), Patcher.STATE).delete();       // no state: the next Play unpacks / checks everything
                    android.widget.Toast.makeText(LoginActivity.this, t("The game files are checked at the next Play.", "下次开始游戏时会检查游戏文件。"), android.widget.Toast.LENGTH_LONG).show();
                } }).show(); } });
        foot.addView(repair, lp(-2, dp(44), dp(10), 0, 0, 0));
        foot.addView(new View(this), new LinearLayout.LayoutParams(0, 1, 1));
        Button cancel = lightButton(t("Cancel", "取消"));
        cancel.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { closeSettings(false); } });
        foot.addView(cancel, new LinearLayout.LayoutParams(-2, dp(44)));
        Button save = yellowButton(t("Save", "确定"), 16);
        save.setMinWidth(dp(110)); save.setMinimumWidth(dp(110));
        save.setPadding(dp(18), 0, dp(18), dp(4));
        save.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { closeSettings(true); } });
        foot.addView(save, lp(-2, dp(44), dp(10), 0, 0, 0));
        p.addView(foot);

        root.addView(p, new FrameLayout.LayoutParams(-1, -1));
        setPanel = p;
    }

    void fillTab() {
        final LinearLayout c = tabContent;
        c.removeAllViews();
        final Opts o = opts;
        switch (tab) {
            case "display":
                row(c, t("Screen", "画面"), pills(new String[]{t("Fill screen", "全屏"), t("16:9 with bars", "16:9 黑边")}, o.wide ? 0 : 1, new Pick() { public void on(int i) { o.wide = i == 0; } }));
                row(c, t("Render quality", "渲染质量"), slider(50, 100, 5, o.scale, null, null,
                        new Fmt() { public String of(int v) { return v + "%" + (v == 100 ? t("  (full)", "  （原画）") : ""); } }, new Pick() { public void on(int v) { o.scale = v; } }));
                row(c, t("Graphics detail", "画质"), pills(new String[]{t("High", "高"), t("Middle", "中")}, o.detail, new Pick() { public void on(int i) { o.detail = i; } }));
                row(c, t("Effects", "特效"), pills(new String[]{t("All", "全部"), t("Fewer", "精简")}, o.effects ? 0 : 1, new Pick() { public void on(int i) { o.effects = i == 0; } }));
                row(c, t("Compact 3D data", "精简3D数据"), pills(new String[]{t("On", "开"), t("Off", "关")}, o.lean ? 0 : 1, new Pick() { public void on(int i) { o.lean = i == 0; } }));
                row(c, t("Compressed textures", "纹理压缩"), pills(new String[]{t("On", "开"), t("Off", "关")}, o.etc2 ? 0 : 1, new Pick() { public void on(int i) { o.etc2 = i == 0; } }));
                row(c, t("Frame rate cap", "帧率上限"), pills(new String[]{t("Auto", "自动"), "30", "60", "90", "120"}, o.fps, new Pick() { public void on(int i) { o.fps = i; } }));
                break;
            case "game":
                row(c, t("Other players' accessories", "其他玩家的赛车配件"), pills(new String[]{t("Show", "显示"), t("Hide", "隐藏")}, o.acc ? 0 : 1, new Pick() { public void on(int i) { o.acc = i == 0; } }));
                final String[] pv = {"room", "race", "room,race"};
                int ps = 2;
                for (int i = 0; i < 3; i++) if (pv[i].equals(o.ping)) ps = i;
                row(c, t("Show ping", "显示延迟"), pills(new String[]{t("In the room", "房间内"), t("In races", "比赛中"), t("Both", "两者")}, ps, new Pick() { public void on(int i) { o.ping = pv[i]; } }));
                c.addView(hint(t("Hiding other players' accessories can make races smoother on slower phones. Your own kart and what others see stay the same. Changes apply within half a minute, accessories from the next room you join.",
                                 "隐藏其他玩家的配件可以让配置较低的手机比赛更流畅。你自己的赛车和别人看到的都不会改变。更改会在半分钟内生效，配件从下一个进入的房间开始。")));
                break;
            case "sound":
                row(c, t("Music", "音乐"), onOff(o.music, new Flag() { public void on(boolean b) { o.music = b; } }));
                row(c, t("Music volume", "音乐音量"), slider(0, 10, 1, o.musicVol, t("Low", "低"), t("High", "高"), NUM, new Pick() { public void on(int v) { o.musicVol = v; } }));
                row(c, t("Sound effects", "音效"), onOff(o.sfx, new Flag() { public void on(boolean b) { o.sfx = b; } }));
                row(c, t("Effects volume", "音效音量"), slider(0, 10, 1, o.sfxVol, t("Low", "低"), t("High", "高"), NUM, new Pick() { public void on(int v) { o.sfxVol = v; } }));
                row(c, t("Voice chat volume", "语音聊天音量"), slider(0, 100, 5, o.voiceVol, t("Low", "低"), t("High", "高"), NUM, new Pick() { public void on(int v) { o.voiceVol = v; } }));
                row(c, t("Microphone volume", "麦克风音量"), slider(0, 200, 5, o.micVol, t("Low", "低"), t("High", "高"), NUM, new Pick() { public void on(int v) { o.micVol = v; } }));
                final String[] nv = {"ai", "standard", "off"};
                int ns = 0;
                for (int i = 0; i < 3; i++) if (nv[i].equals(o.noise)) ns = i;
                row(c, t("Noise suppression", "降噪"), pills(new String[]{t("AI · voice only", "AI · 只保留人声"), t("Standard", "标准"), t("Off", "关")}, ns, new Pick() { public void on(int i) { o.noise = nv[i]; } }));
                break;
            case "controls":
                final String[] cv = {"classic", "mobile", "keyboard"};
                int cs = 0;
                for (int i = 0; i < 3; i++) if (cv[i].equals(o.ctl)) cs = i;
                row(c, t("Touch controls", "触屏操作"), pills(new String[]{t("Classic", "经典"), t("Mobile", "手游"), t("Keyboard / controller", "键盘 / 手柄")}, cs, new Pick() { public void on(int i) {
                    if (i == 2) o.opacity = 0f; else if (o.opacity == 0f) o.opacity = 0.6f;
                    o.ctl = cv[i];
                } }));
                LinearLayout hd = hbox();
                hd.setPadding(0, dp(12), 0, dp(4));
                hd.addView(text(t("ACTION", "操作"), 13, SUB, baloo), new LinearLayout.LayoutParams(dp(170), -2));
                hd.addView(text(t("KEYBOARD", "键盘"), 13, SUB, baloo), new LinearLayout.LayoutParams(0, -2, 1));
                hd.addView(text(t("CONTROLLER", "手柄"), 13, SUB, baloo), lp(0, -2, dp(10), 0, 0, 0, 1));
                c.addView(hd);
                for (int i = 0; i < Controls.ID.length; i++) {
                    final int ai = i;
                    LinearLayout r = hbox();
                    r.setPadding(0, dp(3), 0, dp(3));
                    r.addView(text(zh ? Controls.ZH[i] : Controls.EN[i], 15, INK, baloo), new LinearLayout.LayoutParams(dp(170), -2));
                    final Button kb = keyButton(Controls.name(Controls.kb(prefs, i), zh)), pad = keyButton(Controls.name(Controls.pad(prefs, i), zh));
                    kb.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { Controls.capture(LoginActivity.this, false, zh, new Controls.Got() { public void codes(int[] codes) {
                        int code = codes.length > 0 ? codes[0] : 0;
                        prefs.edit().putInt("kb_" + Controls.ID[ai], code).apply();
                        kb.setText(Controls.name(code, zh));
                    } }); } });
                    pad.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { Controls.capture(LoginActivity.this, false, zh, new Controls.Got() { public void codes(int[] codes) {
                        int code = codes.length > 0 ? codes[0] : 0;
                        prefs.edit().putInt("pad_" + Controls.ID[ai], code).apply();
                        pad.setText(Controls.name(code, zh));
                    } }); } });
                    r.addView(kb, new LinearLayout.LayoutParams(0, dp(40), 1));
                    r.addView(pad, lp(0, dp(40), dp(10), 0, 0, 0, 1));
                    c.addView(r);
                }
                Button reset = lightButton(t("Reset controls", "恢复默认按键"));
                reset.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                    SharedPreferences.Editor e = prefs.edit();
                    for (int i = 0; i < Controls.ID.length; i++) e.remove("kb_" + Controls.ID[i]).remove("pad_" + Controls.ID[i]);
                    e.apply();
                    fillTab();
                } });
                c.addView(reset, lp(-2, dp(44), 0, dp(10), 0, 0));
                break;
            case "hud":
                LinearLayout hc = vbox();
                LinearLayout edit = hbox();
                edit.setBackground(step(BLUE, 0, 0, SLAB, 4, 999));
                edit.setPadding(dp(14), 0, dp(18), dp(4));
                edit.addView(icon(Icon.MOVE, Color.WHITE, 18), new LinearLayout.LayoutParams(dp(18), dp(18)));
                TextView et = text(t("Edit HUD layout", "编辑 HUD 布局"), 15, Color.WHITE, baloo);
                et.setPadding(dp(8), 0, 0, 0);
                edit.addView(et);
                edit.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                    setTouchOpacity(o.opacity);                    // the editor starts from the opacity chosen here
                    startActivity(new Intent(LoginActivity.this, HudEditorActivity.class).putExtra("mode", o.ctl));
                } });
                hc.addView(edit, new LinearLayout.LayoutParams(-2, dp(44)));
                hc.addView(text("mobile".equals(o.ctl) ? t("Every HUD element and on-screen button, plus the Auto gas and Tap drift switches.", "全部 HUD 元素和屏幕按键，以及自动油门和轻点漂移开关。")
                              : "keyboard".equals(o.ctl) ? t("On-screen buttons are hidden; the race HUD can still be moved.", "屏幕按键已隐藏；比赛 HUD 仍可移动。")
                              : t("Every HUD element and on-screen button.", "全部 HUD 元素和屏幕按键。"), 13, SUB, nunito), lp(-2, -2, 0, dp(4), 0, 0));
                row(c, t("HUD layout", "HUD 布局"), hc);
                row(c, t("On-screen buttons", "屏幕按键透明度"), slider(0, 100, 5, Math.round(o.opacity * 100), null, null, new Fmt() { public String of(int v) { return v + "%"; } }, new Pick() { public void on(int v) { o.opacity = v / 100f; } }));
                c.addView(hint(t("In the editor, tap an item to move it or change its size. Tap an on-screen button to also pick its icon from your gallery.",
                                 "在编辑器中点击元素可以移动或调整大小。点击屏幕按键还可以从相册选择图标。")));
                break;
            case "chat":
                c.addView(hint(t("The game’s 9 quick-chat lines, each with a key or two-button combination that sends it.", "游戏的 9 条快捷聊天，每条可设置一个按键或组合键来发送。")));
                for (int s = 0; s < Controls.MACROS; s++) {
                    final int slot = s;
                    LinearLayout r = hbox();
                    r.setPadding(0, dp(3), 0, dp(3));
                    TextView num = text(String.valueOf(s + 1), 15, SUB, baloo800);
                    num.setGravity(Gravity.END);
                    r.addView(num, new LinearLayout.LayoutParams(dp(20), -2));
                    EditText m = new EditText(this);
                    m.setSingleLine(true);
                    m.setText(o.macros[s]);
                    m.setTextColor(INK); m.setTextSize(15); m.setTypeface(nunito);
                    m.setBackground(round(Color.WHITE, EDGE, 10));
                    m.setPadding(dp(12), 0, dp(12), 0);
                    m.setContentDescription(t("Quick chat line ", "快捷聊天 ") + (s + 1));
                    m.setFilters(new android.text.InputFilter[]{new android.text.InputFilter.LengthFilter(200)});
                    m.addTextChangedListener(new android.text.TextWatcher() {
                        public void beforeTextChanged(CharSequence q, int a, int b2, int d) { }
                        public void onTextChanged(CharSequence q, int a, int b2, int d) { o.macros[slot] = q.toString(); }
                        public void afterTextChanged(android.text.Editable e) { }
                    });
                    r.addView(m, lp(0, dp(40), dp(10), 0, 0, 0, 2.2f));
                    final Button combo = keyButton(comboName(Controls.macro(prefs, s)));
                    combo.setTextColor(SUB);
                    combo.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { Controls.capture(LoginActivity.this, true, zh, new Controls.Got() { public void codes(int[] codes) {
                        prefs.edit().putString("macro_" + slot, Controls.join(codes)).apply();
                        combo.setText(comboName(codes));
                    } }); } });
                    r.addView(combo, lp(0, dp(40), dp(10), 0, 0, 0, 1.2f));
                    c.addView(r);
                }
                break;
            case "gamma":
                final ImageView after = image("launcher_keyart.png");
                LinearLayout gr = hbox();
                gr.addView(slider(5, 30, 1, Math.round(o.gamma * 10), null, null, new Fmt() { public String of(int v) { return String.format(Locale.ROOT, "%.1f", v / 10f); } }, new Pick() { public void on(int v) {
                    o.gamma = v / 10f;
                    after.setColorFilter(gammaFilter(o.gamma));
                } }), new LinearLayout.LayoutParams(0, -2, 1));
                Button def = lightButton(t("Default gamma", "默认亮度"));
                def.setTextSize(14);
                def.setOnClickListener(new View.OnClickListener() { public void onClick(View v) { o.gamma = 1f; fillTab(); } });
                gr.addView(def, lp(-2, dp(40), dp(10), 0, 0, 0));
                row(c, "Gamma", gr);
                LinearLayout two = hbox();
                two.setGravity(Gravity.TOP);
                after.setColorFilter(gammaFilter(o.gamma));
                two.addView(figure(image("launcher_keyart.png"), t("Original", "原图")), new LinearLayout.LayoutParams(0, -2, 1));
                two.addView(figure(after, t("Corrected", "校正")), lp(0, -2, dp(12), 0, 0, 0, 1));
                c.addView(two, lp(-1, -2, 0, dp(4), 0, dp(4)));
                break;
        }
    }
    ColorMatrixColorFilter gammaFilter(float g) {
        float k = (float) Math.pow(g, 0.6);                     // the design's preview: brightness(gamma^0.6)
        ColorMatrix m = new ColorMatrix();
        m.setScale(k, k, k, 1);
        return new ColorMatrixColorFilter(m);
    }
    View figure(ImageView img, String caption) {
        LinearLayout f = vbox();
        img.setScaleType(ImageView.ScaleType.CENTER_CROP);
        img.setBackground(round(0xFF111827, 0, 10));
        img.setClipToOutline(true);
        f.addView(img, new LinearLayout.LayoutParams(-1, dp(96)));
        f.addView(text(caption, 13, SUB, nunito), lp(-2, -2, 0, dp(4), 0, 0));
        return f;
    }

    // ---- Settings pieces ----------------------------------------------------------------------------------------------
    interface Pick { void on(int i); }
    interface Flag { void on(boolean b); }
    interface Fmt { String of(int v); }
    static final Fmt NUM = new Fmt() { public String of(int v) { return String.valueOf(v); } };

    void row(LinearLayout c, String label, View control) {
        LinearLayout r = hbox();
        r.setPadding(0, dp(8), 0, dp(8));
        r.addView(text(label, 15, INK, baloo), new LinearLayout.LayoutParams(dp(170), -2));
        r.addView(control, lp(0, -2, dp(14), 0, 0, 0, 1));
        c.addView(r);
        View line = new View(this);
        line.setBackgroundColor(RAIL);
        c.addView(line, new LinearLayout.LayoutParams(-1, dp(1)));
    }
    TextView hint(String s) {
        TextView h = text(s, 14, SUB, nunito);
        h.setLineSpacing(dp(2), 1);
        h.setPadding(0, dp(8), 0, dp(6));
        return h;
    }
    LinearLayout pills(String[] labels, int sel, final Pick pick) {
        final LinearLayout g = hbox();
        for (int i = 0; i < labels.length; i++) {
            final int k = i;
            TextView p = text(labels[i], 14, INK, nunito800);
            p.setGravity(Gravity.CENTER);
            p.setMinWidth(dp(52));
            p.setPadding(dp(14), 0, dp(14), 0);
            p.setOnClickListener(new View.OnClickListener() { public void onClick(View v) {
                for (int j = 0; j < g.getChildCount(); j++) pillLook((TextView) g.getChildAt(j), j == k);
                pick.on(k);
            } });
            pillLook(p, i == sel);
            g.addView(p, lp(-2, dp(40), i == 0 ? 0 : dp(6), 0, 0, 0));
        }
        return g;
    }
    void pillLook(TextView p, boolean on) {
        p.setBackground(round(on ? PILL_ON : Color.WHITE, on ? YELLOW_DEEP : LINE, 999));
        p.setSelected(on);
    }
    View onOff(boolean on, final Flag f) {
        CheckBox c = new CheckBox(this);
        c.setText(t("On", "开"));
        c.setTextColor(INK); c.setTypeface(nunito); c.setTextSize(14);
        c.setButtonDrawable(new Tick(dp(18), BLUE, Color.WHITE, EDGE, Color.WHITE));
        c.setPadding(dp(10), 0, 0, 0);
        c.setMinHeight(dp(40));
        c.setChecked(on);
        c.setOnCheckedChangeListener(new android.widget.CompoundButton.OnCheckedChangeListener() { public void onCheckedChanged(android.widget.CompoundButton b, boolean v) { f.on(v); } });
        return c;
    }
    View slider(final int min, int max, final int stepV, int value, String low, String high, final Fmt fmt, final Pick set) {
        LinearLayout r = hbox();
        if (low != null) r.addView(text(low, 13, SUB, nunito));
        SeekBar s = new SeekBar(this);
        s.setMax((max - min) / stepV);
        s.setProgress(Math.max(0, Math.min(s.getMax(), (value - min) / stepV)));
        s.setProgressTintList(ColorStateList.valueOf(BLUE));
        s.setThumbTintList(ColorStateList.valueOf(BLUE));
        r.addView(s, new LinearLayout.LayoutParams(0, dp(40), 1));
        if (high != null) r.addView(text(high, 13, SUB, nunito));
        final TextView out = text(fmt.of(value), 17, INK, baloo800);
        out.setGravity(Gravity.END);
        out.setMinWidth(dp(48));
        r.addView(out, lp(-2, -2, dp(12), 0, 0, 0));
        s.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            public void onProgressChanged(SeekBar b, int v, boolean u) { int x = min + v * stepV; out.setText(fmt.of(x)); set.on(x); }
            public void onStartTrackingTouch(SeekBar b) { }
            public void onStopTrackingTouch(SeekBar b) { }
        });
        return r;
    }
    Button keyButton(String s) {
        Button b = new Button(this);
        b.setText(s);
        b.setAllCaps(false); b.setTypeface(nunito800); b.setTextSize(14); b.setTextColor(INK);
        b.setStateListAnimator(null);
        b.setBackground(round(Color.WHITE, EDGE, 10));
        b.setPadding(dp(4), 0, dp(4), 0);
        return b;
    }
    String comboName(int[] c) {
        if (c.length == 0) return t("None", "无");
        StringBuilder b = new StringBuilder();
        for (int x : c) { if (b.length() > 0) b.append(" + "); b.append(Controls.name(x, zh)); }
        return b.toString();
    }

    // ---- building blocks ----------------------------------------------------------------------------------------------
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
    ImageView icon(int kind, int color, int sizeDp) {
        ImageView v = new ImageView(this);
        v.setImageDrawable(new Icon(kind, color, dp(sizeDp)));
        return v;
    }
    LinearLayout vbox() { LinearLayout l = new LinearLayout(this); l.setOrientation(LinearLayout.VERTICAL); return l; }
    LinearLayout hbox() { LinearLayout l = new LinearLayout(this); l.setOrientation(LinearLayout.HORIZONTAL); l.setGravity(Gravity.CENTER_VERTICAL); return l; }
    LinearLayout.LayoutParams lp(int w, int h, int l, int t, int r, int b) { return lp(w, h, l, t, r, b, 0); }
    LinearLayout.LayoutParams lp(int w, int h, int l, int t, int r, int b, float weight) {
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(w, h, weight);
        p.setMargins(l, t, r, b);
        return p;
    }
    TextView text(String s, int sp, int color, Typeface tf) {
        TextView v = new TextView(this);
        v.setText(s); v.setTextSize(sp); v.setTextColor(color); v.setTypeface(tf);
        return v;
    }
    TextView fieldLabel(String s) {
        TextView v = text(s, 13, MUTED, baloo);
        v.setLetterSpacing(0.04f);
        v.setPadding(0, 0, 0, dp(4));
        return v;
    }
    static int mix(int a, int b, float k) {
        int r = (int) (Color.red(a) + (Color.red(b) - Color.red(a)) * k), g = (int) (Color.green(a) + (Color.green(b) - Color.green(a)) * k),
            bl = (int) (Color.blue(a) + (Color.blue(b) - Color.blue(a)) * k);
        return Color.rgb(r, g, bl);
    }
    GradientDrawable round(int fill, int stroke, int radiusDp) { return roundS(fill, stroke, 1, radiusDp); }
    GradientDrawable roundS(int fill, int stroke, int strokeDp, int radiusDp) {
        GradientDrawable g = new GradientDrawable();
        g.setColor(fill);
        g.setCornerRadius(radiusDp >= 999 ? dp(999) : dp(radiusDp));
        if (stroke != 0) g.setStroke(dp(strokeDp), stroke);
        return g;
    }
    // a face with its "step" shadow under it (the design's box-shadow: 0 Npx 0 <colour>)
    LayerDrawable step(int fill, int stroke, int strokeDp, int shadow, int shadowDp, int radiusDp) {
        LayerDrawable d = new LayerDrawable(new Drawable[]{roundS(shadow, 0, 0, radiusDp), roundS(fill, stroke, strokeDp, radiusDp)});
        d.setLayerInset(1, 0, 0, 0, dp(shadowDp));
        return d;
    }
    Button yellowButton(String s, int sp) {
        Button b = new Button(this);
        b.setText(s);
        b.setAllCaps(false); b.setTypeface(baloo800); b.setTextSize(sp); b.setTextColor(INK);
        b.setStateListAnimator(null);
        b.setBackground(step(YELLOW, 0, 0, YELLOW_DEEP, 4, 999));
        b.setPadding(0, 0, 0, dp(4));
        return b;
    }
    Button lightButton(String s) {
        Button b = new Button(this);
        b.setText(s);
        b.setAllCaps(false); b.setTypeface(baloo); b.setTextSize(15); b.setTextColor(INK);
        b.setStateListAnimator(null);
        b.setBackground(step(Color.WHITE, EDGE, 1, LINE, 3, 999));
        b.setPadding(dp(16), 0, dp(16), dp(3));
        return b;
    }
    Drawable fieldBg(boolean bad) { return round(0x40000000, bad ? ERROR : 0x24FFFFFF, 12); }
    EditText field(boolean secret) {
        EditText e = new EditText(this);
        e.setSingleLine(true);
        e.setTextColor(Color.WHITE);
        e.setTypeface(nunito);
        e.setTextSize(16);
        e.setPadding(dp(12), 0, dp(12), 0);
        e.setBackground(fieldBg(false));
        e.setInputType(secret ? (InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_VARIATION_PASSWORD)
                              : (InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_FLAG_NO_SUGGESTIONS));
        return e;
    }
    CheckBox check(String text, String note) {
        CheckBox c = new CheckBox(this);
        SpannableString s = new SpannableString(text + note);
        s.setSpan(new ForegroundColorSpan(0x99FFFFFF), text.length(), s.length(), 0);
        c.setText(s);
        c.setTextColor(Color.WHITE);
        c.setTypeface(nunito);
        c.setTextSize(14);
        c.setButtonDrawable(new Tick(dp(18), YELLOW, 0x40000000, 0x47FFFFFF, INK));
        c.setPadding(dp(10), 0, 0, 0);
        return c;
    }

    // a checkbox: 18dp rounded square, filled with a tick when checked
    class Tick extends Drawable {
        final int size, onFill, offFill, offStroke, tickColor; boolean on;
        final Paint p = new Paint(Paint.ANTI_ALIAS_FLAG);
        Tick(int size, int onFill, int offFill, int offStroke, int tickColor) {
            this.size = size; this.onFill = onFill; this.offFill = offFill; this.offStroke = offStroke; this.tickColor = tickColor;
        }
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
            p.setColor(on ? onFill : offFill);
            cv.drawRoundRect(r, r5, r5, p);
            p.setStyle(Paint.Style.STROKE);
            p.setStrokeWidth(dp(1) * 1.5f);
            p.setColor(on ? onFill : offStroke);
            cv.drawRoundRect(r, r5, r5, p);
            if (on) {
                Path tick = new Path();
                tick.moveTo(l + size * 0.27f, t + size * 0.52f);
                tick.lineTo(l + size * 0.44f, t + size * 0.68f);
                tick.lineTo(l + size * 0.74f, t + size * 0.33f);
                p.setColor(tickColor); p.setStrokeWidth(dp(2)); p.setStrokeCap(Paint.Cap.ROUND); p.setStrokeJoin(Paint.Join.ROUND);
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

    // diagonal stripes on a ground colour (the design's repeating-linear-gradient): band = half the period
    static class Stripes extends Drawable {
        final int bg, ink, band; final Paint p = new Paint();
        Stripes(int bg, int ink, int band) { this.bg = bg; this.ink = ink; this.band = Math.max(1, band); }
        @Override public void draw(Canvas c) {
            Rect b = getBounds();
            c.drawColor(bg);
            c.save();
            c.clipRect(b);
            p.setColor(ink);
            p.setStrokeWidth(band);
            float span = b.width() + b.height();
            for (float x = b.left - b.height(); x < b.left + span; x += band * 2) c.drawLine(x, b.bottom, x + b.height(), b.top, p);
            c.restore();
        }
        @Override public void setAlpha(int a) { }
        @Override public void setColorFilter(ColorFilter f) { }
        @Override public int getOpacity() { return PixelFormat.OPAQUE; }
    }

    // the design's line icons, drawn on a 24-unit grid
    static class Icon extends Drawable {
        static final int PLAY = 0, CHEVRON_UP = 1, CHEVRON_DOWN = 2, CHECK = 3, SERVER = 4, GEAR = 5, EYE = 6, EYE_OFF = 7, CLOSE = 8,
                PAD = 9, KEYBOARD = 10, MOVE = 11, GALLERY = 12, GLOBE = 13;
        final int kind, size; final Paint p = new Paint(Paint.ANTI_ALIAS_FLAG);
        Icon(int kind, int color, int size) {
            this.kind = kind; this.size = size;
            p.setColor(color);
            p.setStyle(Paint.Style.STROKE);
            p.setStrokeCap(Paint.Cap.ROUND);
            p.setStrokeJoin(Paint.Join.ROUND);
        }
        @Override public int getIntrinsicWidth() { return size; }
        @Override public int getIntrinsicHeight() { return size; }
        @Override public void draw(Canvas c) {
            Rect b = getBounds();
            float k = Math.min(b.width(), b.height()) / 24f;
            c.save();
            c.translate(b.left + (b.width() - 24 * k) / 2, b.top + (b.height() - 24 * k) / 2);
            c.scale(k, k);
            p.setStrokeWidth(2);
            Path a = new Path();
            switch (kind) {
                case PLAY: a.moveTo(7, 4.5f); a.lineTo(7, 19.5f); a.lineTo(19, 12); a.close(); p.setStyle(Paint.Style.FILL); c.drawPath(a, p); break;
                case CHEVRON_UP: p.setStrokeWidth(2.4f); a.moveTo(6, 15); a.lineTo(12, 9); a.lineTo(18, 15); c.drawPath(a, p); break;
                case CHEVRON_DOWN: p.setStrokeWidth(3); a.moveTo(6, 9); a.lineTo(12, 15); a.lineTo(18, 9); c.drawPath(a, p); break;
                case CHECK: p.setStrokeWidth(2.6f); a.moveTo(5, 12.5f); a.lineTo(9.5f, 17); a.lineTo(19, 7.5f); c.drawPath(a, p); break;
                case SERVER:
                    c.drawRoundRect(new RectF(4, 4, 20, 10), 2, 2, p); c.drawRoundRect(new RectF(4, 14, 20, 20), 2, 2, p);
                    c.drawPoint(8, 7, p); c.drawPoint(8, 17, p); break;
                case GEAR:
                    c.drawCircle(12, 12, 3, p); c.drawCircle(12, 12, 7, p);
                    p.setStrokeWidth(2.6f);
                    for (int i = 0; i < 8; i++) {
                        double r = Math.PI / 4 * i;
                        c.drawLine(12 + (float) Math.cos(r) * 7.5f, 12 + (float) Math.sin(r) * 7.5f, 12 + (float) Math.cos(r) * 9.8f, 12 + (float) Math.sin(r) * 9.8f, p);
                    }
                    break;
                case EYE: case EYE_OFF:
                    a.moveTo(2, 12); a.quadTo(12, 0.5f, 22, 12); a.quadTo(12, 23.5f, 2, 12); c.drawPath(a, p); c.drawCircle(12, 12, 3, p);
                    if (kind == EYE_OFF) c.drawLine(3, 3, 21, 21, p);
                    break;
                case CLOSE: p.setStrokeWidth(2.4f); c.drawLine(6, 6, 18, 18, p); c.drawLine(18, 6, 6, 18, p); break;
                case PAD:
                    p.setStrokeWidth(1.6f);
                    c.drawRoundRect(new RectF(2, 7, 22, 17.5f), 5, 5, p);
                    c.drawLine(7, 10, 7, 13, p); c.drawLine(5.5f, 11.5f, 8.5f, 11.5f, p);
                    p.setStyle(Paint.Style.FILL); c.drawCircle(16, 10.5f, 0.8f, p); c.drawCircle(18, 12.5f, 0.8f, p); break;
                case KEYBOARD:
                    p.setStrokeWidth(1.6f);
                    c.drawRoundRect(new RectF(2, 6, 22, 18), 2.5f, 2.5f, p);
                    for (int x = 6; x <= 18; x += 4) c.drawPoint(x, 10, p);
                    c.drawLine(7, 14, 17, 14, p); break;
                case MOVE:
                    c.drawLine(2, 12, 22, 12, p); c.drawLine(12, 2, 12, 22, p);
                    a.moveTo(5, 9); a.lineTo(2, 12); a.lineTo(5, 15); a.moveTo(9, 5); a.lineTo(12, 2); a.lineTo(15, 5);
                    a.moveTo(15, 19); a.lineTo(12, 22); a.lineTo(9, 19); a.moveTo(19, 9); a.lineTo(22, 12); a.lineTo(19, 15);
                    c.drawPath(a, p); break;
                case GALLERY:
                    c.drawRoundRect(new RectF(3, 4, 21, 20), 3, 3, p); c.drawCircle(9, 10, 2, p);
                    a.moveTo(21, 16); a.lineTo(16, 11); a.lineTo(7, 20); c.drawPath(a, p); break;
                case GLOBE:
                    p.setStrokeWidth(1.8f);
                    c.drawCircle(12, 12, 9, p); c.drawLine(3, 12, 21, 12, p); c.drawOval(new RectF(8.2f, 3, 15.8f, 21), p); break;
            }
            c.restore();
        }
        @Override public void setAlpha(int a) { p.setAlpha(a); }
        @Override public void setColorFilter(ColorFilter f) { p.setColorFilter(f); }
        @Override public int getOpacity() { return PixelFormat.TRANSLUCENT; }
    }

    // ---- Play ---------------------------------------------------------------------------------------------------------
    void go() {
        final String key = currentKey();
        if (key.isEmpty()) { showSignedIn(); return; }
        final String account = prefs.getString("user", "");
        final int srv = this.srv;
        float maxHz = 60;                   // the panel's highest refresh rate: the game caps its frame rate at it
        for (android.view.Display.Mode m : getWindowManager().getDefaultDisplay().getSupportedModes()) maxHz = Math.max(maxHz, m.getRefreshRate());
        final int hz = Math.round(maxHz);
        playBtn.setEnabled(false);
        playBtn.setAlpha(0.7f);
        say(t("Signing in to ", "正在登录") + (zh ? NAMES_ZH[srv] : NAMES[srv]) + "...", -1);
        new Thread(new Runnable() { public void run() {
            try {
                if (!update(srv)) return;                     // game files + this app from the patch servers
                say(t("Loading the shop...", "正在加载商城..."), -1);               // the dashboard's shop (hidden karts, prices): ShopSync
                Log.i("ck2", "shop: " + ShopSync.apply(new File(getExternalFilesDir(null), "game"), getFilesDir(), API[srv]));
                say(t("Signing in to ", "正在登录") + (zh ? NAMES_ZH[srv] : NAMES[srv]) + "...", -1);
                Reply p = request(HOSTS[srv], account, key, 0x6f03);    // fresh one-time pass, like the launcher's Play
                if (p.error != null) { fail(p.error, p.result != 0); return; }
                SharedPreferences.Editor ed = prefs.edit().putInt("server", srv);
                if (!p.nickname.isEmpty()) ed.putString("nick", p.nickname);   // the account card's name
                ed.apply();
                phoneDisplay();
                phoneUi();
                Controls.write(prefs, getFilesDir());          // keyboards + controllers (plat_android.c)
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
                            .putExtra("user", account).putExtra("key", key).putExtra("lang", lang)
                            .putExtra("accessories", prefs.getBoolean("accessories", true)).putExtra("fpscap", cap));
                    finish();
                } });
            } catch (Exception e) {
                fail("Cannot reach " + NAMES[srv] + " (" + e.getMessage() + ")", false);
            }
        } }).start();
    }

    void say(final String text, final int pct) {
        runOnUiThread(new Runnable() { public void run() {
            status.setTextColor(MUTED);
            status.setText(text);
            status.setVisibility(text.isEmpty() ? View.GONE : View.VISIBLE);
            bar.setVisibility(pct < 0 ? View.GONE : View.VISIBLE);
            if (pct >= 0) bar.setProgress(pct);
        } });
    }

    void fail(final String msg, final boolean badLogin) {
        if (badLogin) { prefs.edit().remove("key").apply(); sessionKey = ""; sessionSrv = -1; }   // a refused key signs the player out
        runOnUiThread(new Runnable() { public void run() {
            bar.setVisibility(View.GONE);
            if (badLogin) { showSignedIn(); formErr(msg); status.setVisibility(View.GONE); return; }   // the card gives way to the form
            status.setTextColor(ERROR);
            status.setText(msg);
            status.setVisibility(View.VISIBLE);
            showSignedIn();
        } });
    }

    // ---- updates: game files + this app, from the same signed patch the PC launcher uses (Patcher.java) -------------
    static final String ACTION_INSTALLED = "com.crazykart.legacy.INSTALLED";

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
