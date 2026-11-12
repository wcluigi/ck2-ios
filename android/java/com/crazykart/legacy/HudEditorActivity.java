package com.crazykart.legacy;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.DashPathEffect;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.SeekBar;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

// Race HUD layout editor (like the control layout screens of phone shooters): every HUD element and touch button
// on a plain screen, drawn with the game's own pictures; one finger drags, two fingers pinch, or the Size slider.
// Elements and their original rectangles: asset hud_elements.txt (shared with the runtime, hud.c). Pictures:
// <game>/hudshots/<name>.rgba, taken by the game in the first race (hud.c), else the ones shipped in the APK
// (assets hud_<name>.rgba); touch buttons: assets touch_<name>.png (the art touch_ui.c draws).
// The result goes to <external files>/game/hud_layout.txt: "name x y scale" (game pixels, 1280x720, top-left).
public class HudEditorActivity extends Activity {
    static final float GW = 1280, GH = 720;
    static final int SLAB = 0xFF0E1F5C, INK = 0xFF131A2E, YELLOW = 0xFFF5C21B, MUTED = 0xFFB7C4E8;   // launcher colours

    static class Elem {
        String name, label; float sx, sy, sw, sh;      // original rectangle (game pixels)
        float x, y, s = 1;                              // placed top-left and scale
        boolean touch;                                  // a touch button (circle)
        Bitmap pic;                                     // the game's picture of it
    }

    final List<Elem> elems = new ArrayList<>();
    final List<Elem> kept = new ArrayList<>();          // not arranged in this session, saved as they were
    float opacity = 0.6f;
    EditorView view;
    TextView info;
    SeekBar size;
    boolean settingSize, zh;
    Typeface baloo, nunito;
    LinearLayout iconBar;                               // a touch button picked: its icon from the gallery
    ImageView iconPreview;
    Button iconDefault;
    // the player's own button pictures (Choose from gallery), written at Save: name -> picture, or null = back to the default
    final java.util.Map<String, Bitmap> icons = new java.util.HashMap<>();
    static final int ART = 160, PICK = 7;               // touch_ui.c ART: the runtime's button picture size
    String t(String en, String cn) { return zh ? cn : en; }
    // hud_elements.txt has English labels; the launcher's Chinese ones (the design)
    static final String[][] ZH = {{"items", "道具栏"}, {"itemcount", "道具数量"}, {"place", "名次"}, {"ranking", "排名"}, {"time", "比赛时间"},
            {"minimap", "小地图"}, {"speedo", "速度表"}, {"touch_left", "左转"}, {"touch_right", "右转"}, {"touch_gas", "油门"}, {"touch_brake", "刹车"},
            {"touch_drift", "漂移"}, {"touch_item", "道具"}, {"touch_swap", "切换道具"}, {"touch_esc", "菜单"}, {"touch_chat", "聊天"},
            {"chat", "比赛聊天"}, {"announce", "公告"}, {"touch_autogas", "自动油门"}};

    File gameDir() { return new File(getExternalFilesDir(null), "game"); }
    File layoutFile() { return new File(gameDir(), "hud_layout.txt"); }
    boolean autoGasOn() {                                // touch_ui.c touch_mobile.txt: on unless "autogas=0"
        try { return !new String(java.nio.file.Files.readAllBytes(new File(gameDir(), "touch_mobile.txt").toPath())).contains("autogas=0"); }
        catch (Exception e) { return true; }
    }
    File iconFile(String name, String ext) { return new File(new File(gameDir(), "touch_icons"), name + ext); }

    @Override
    protected void onCreate(Bundle b) {
        super.onCreate(b);
        android.content.SharedPreferences prefs = getSharedPreferences("login", MODE_PRIVATE);
        zh = "zh".equals(prefs.getString("lang", ""));
        baloo = font("baloo2.ttf", 700); nunito = font("nunito.ttf", 800);
        loadElements();
        loadLayout();
        // what this player can arrange (the launcher design, 12 Nov 2026): every HUD element and on-screen button; the
        // AUTO GAS switch only with Mobile controls ("mode" extra, else the saved choice). The switch is kept
        // (saved unchanged) when not shown.
        String mode = getIntent().getStringExtra("mode");
        boolean mobileOn = mode != null ? mode.equals("mobile") : prefs.getBoolean("touchmobile", false);
        boolean first = getIntent().getBooleanExtra("first", false);      // the first start's step 3: Skip, not Back
        for (int i = elems.size() - 1; i >= 0; i--) {
            Elem e = elems.get(i);
            if (zh) for (String[] z : ZH) if (z[0].equals(e.name)) e.label = z[1];
            if (e.name.equals("touch_autogas") && !mobileOn) { kept.add(e); elems.remove(i); }
            else if (e.name.equals("touch_gas") && mobileOn && autoGasOn()) { kept.add(e); elems.remove(i); }   // auto gas: no gas button in the race
        }
        loadPictures();

        FrameLayout root = new FrameLayout(this);
        root.setBackgroundColor(0xFF0A0E18);
        view = new EditorView(this);
        root.addView(view, new FrameLayout.LayoutParams(-1, -1));

        LinearLayout bar = new LinearLayout(this);
        bar.setOrientation(LinearLayout.HORIZONTAL);
        bar.setGravity(Gravity.CENTER_VERTICAL);
        GradientDrawable bg = new GradientDrawable();
        bg.setColor(0xE6131A2E); bg.setCornerRadius(dp(14)); bg.setStroke(dp(1), 0xFF2A3A6E);
        bar.setBackground(bg);
        int p = dp(8);
        bar.setPadding(p, dp(4), p, dp(4));
        info = label(t("Tap an item, then slide it", "点击一个元素，然后拖动"), Color.WHITE);
        info.setMinWidth(dp(128));
        bar.addView(info);
        bar.addView(label("  " + t("Size", "大小") + " ", MUTED));
        size = slider(260, 60, new SeekBar.OnSeekBarChangeListener() {        // 40 % .. 300 %
            public void onProgressChanged(SeekBar s, int v, boolean user) {
                if (!user || settingSize || view.active == null) return;
                Elem e = view.active;
                float cx = e.x + e.sw * e.s / 2, cy = e.y + e.sh * e.s / 2;
                e.s = (40 + v) / 100f;
                e.x = cx - e.sw * e.s / 2; e.y = cy - e.sh * e.s / 2;
                view.showInfo(); view.invalidate();
            }
            public void onStartTrackingTouch(SeekBar s) {}
            public void onStopTrackingTouch(SeekBar s) {}
        });
        size.setEnabled(false);
        bar.addView(size, new LinearLayout.LayoutParams(dp(110), -2));
        bar.addView(label("  " + t("Buttons", "按键") + " ", MUTED));
        SeekBar ob = slider(100, (int) (opacity * 100), new SeekBar.OnSeekBarChangeListener() {
            public void onProgressChanged(SeekBar s, int v, boolean u) { opacity = Math.max(0f, v / 100f); view.invalidate(); }
            public void onStartTrackingTouch(SeekBar s) {}
            public void onStopTrackingTouch(SeekBar s) {}
        });
        bar.addView(ob, new LinearLayout.LayoutParams(dp(90), -2));
        bar.addView(button(t("Reset", "重置"), false, new View.OnClickListener() { public void onClick(View v) { reset(); } }));
        bar.addView(button(first ? t("Skip", "跳过") : t("Back", "返回"), false, new View.OnClickListener() { public void onClick(View v) { finish(); } }));
        bar.addView(button(t("Save", "保存"), true, new View.OnClickListener() { public void onClick(View v) { save(); finish(); } }));
        bar.setClickable(true);
        // bottom centre: the race HUD has nothing there
        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(-2, -2, Gravity.BOTTOM | Gravity.CENTER_HORIZONTAL);
        lp.bottomMargin = dp(6);
        root.addView(bar, lp);

        // a touch button picked: its picture from the gallery (the design: round, with a light ring), or back to the default
        iconBar = new LinearLayout(this);
        iconBar.setOrientation(LinearLayout.HORIZONTAL);
        iconBar.setGravity(Gravity.CENTER_VERTICAL);
        GradientDrawable ib = new GradientDrawable();
        ib.setColor(0xEB131A2E); ib.setCornerRadius(dp(14)); ib.setStroke(dp(1), 0xFF2A3A6E);
        iconBar.setBackground(ib);
        iconBar.setPadding(dp(6), dp(4), dp(6), dp(4));
        iconBar.setClickable(true);
        iconPreview = new ImageView(this);
        iconBar.addView(iconPreview, new LinearLayout.LayoutParams(dp(32), dp(32)));
        Button gallery = button(t("Choose from gallery", "从相册选择"), false, new View.OnClickListener() { public void onClick(View v) {
            Intent i = new Intent(Intent.ACTION_GET_CONTENT).setType("image/*").addCategory(Intent.CATEGORY_OPENABLE);
            try { startActivityForResult(Intent.createChooser(i, t("Choose from gallery", "从相册选择")), PICK); } catch (Exception ignored) { }
        } });
        ((GradientDrawable) gallery.getBackground()).setColor(0xFF1A4FD6);
        iconBar.addView(gallery);
        iconDefault = button(t("Default icon", "恢复默认图标"), false, new View.OnClickListener() { public void onClick(View v) {
            Elem e = view.active;
            if (e == null) return;
            icons.put(e.name, null);
            e.pic = assetPic(e.name);
            view.showInfo(); view.invalidate();
        } });
        iconBar.addView(iconDefault);
        TextView hint = label("  " + t("Square images work best", "建议使用正方形图片") + "  ", MUTED);
        hint.setTextSize(12);
        iconBar.addView(hint);
        iconBar.setVisibility(View.GONE);
        FrameLayout.LayoutParams ilp = new FrameLayout.LayoutParams(-2, -2, Gravity.BOTTOM | Gravity.CENTER_HORIZONTAL);
        ilp.bottomMargin = dp(56);
        root.addView(iconBar, ilp);

        if (first) {                                     // the first start: which step this is
            TextView title = label(mobileOn ? t("Step 3 of 3 · Arrange your HUD · Mobile controls", "第 3 步，共 3 步 · 调整 HUD · 手游操作")
                                            : t("Step 3 of 3 · Arrange your HUD · Classic controls", "第 3 步，共 3 步 · 调整 HUD · 经典操作"), Color.WHITE);
            title.setTypeface(baloo);
            GradientDrawable tb = new GradientDrawable();
            tb.setColor(0xE6131A2E); tb.setCornerRadius(dp(999)); tb.setStroke(dp(1), 0xFF2A3A6E);
            title.setBackground(tb);
            title.setPadding(dp(14), dp(6), dp(14), dp(6));
            FrameLayout.LayoutParams tlp = new FrameLayout.LayoutParams(-2, -2, Gravity.TOP | Gravity.CENTER_HORIZONTAL);
            tlp.topMargin = (int) (getResources().getDisplayMetrics().heightPixels * 0.236f);
            root.addView(title, tlp);
        }
        setContentView(root);
    }

    int dp(int v) { return (int) (v * getResources().getDisplayMetrics().density + 0.5f); }

    TextView label(String t, int color) {
        TextView v = new TextView(this);
        v.setText(t); v.setTextColor(color); v.setTextSize(13);
        v.setTypeface(nunito);
        return v;
    }
    Typeface font(String asset, int weight) {
        try { return new Typeface.Builder(getAssets(), asset).setFontVariationSettings("'wght' " + weight).build(); }
        catch (Exception e) { return Typeface.DEFAULT_BOLD; }
    }

    SeekBar slider(int max, int value, SeekBar.OnSeekBarChangeListener l) {
        SeekBar s = new SeekBar(this);
        s.setMax(max); s.setProgress(value); s.setOnSeekBarChangeListener(l);
        return s;
    }

    Button button(String t, boolean primary, View.OnClickListener l) {
        Button b = new Button(this);
        b.setText(t); b.setAllCaps(false); b.setTextSize(13); b.setTypeface(nunito);
        b.setTextColor(primary ? INK : Color.WHITE);
        GradientDrawable d = new GradientDrawable();
        d.setColor(primary ? YELLOW : SLAB); d.setCornerRadius(dp(18));
        b.setBackground(d);
        b.setMinWidth(dp(64)); b.setMinimumWidth(dp(64)); b.setMinHeight(dp(36)); b.setMinimumHeight(dp(36));
        b.setPadding(dp(12), 0, dp(12), 0);
        b.setOnClickListener(l);
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(-2, dp(36));
        lp.leftMargin = dp(6);
        b.setLayoutParams(lp);
        return b;
    }

    void loadElements() {
        try (BufferedReader r = new BufferedReader(new InputStreamReader(getAssets().open("hud_elements.txt"), StandardCharsets.UTF_8))) {
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty() || line.startsWith("#")) continue;
                String[] f = line.split("\\s+", 6);       // name sx sy sw sh label
                if (f.length < 6) continue;
                Elem e = new Elem();
                e.name = f[0]; e.sx = Float.parseFloat(f[1]); e.sy = Float.parseFloat(f[2]);
                e.sw = Float.parseFloat(f[3]); e.sh = Float.parseFloat(f[4]); e.label = f[5];
                e.touch = e.name.startsWith("touch_");
                e.x = e.sx; e.y = e.sy;
                elems.add(e);
            }
        } catch (Exception ignored) {
        }
    }

    static byte[] readAll(InputStream in) throws Exception {
        ByteArrayOutputStream o = new ByteArrayOutputStream();
        byte[] buf = new byte[65536];
        for (int n; (n = in.read(buf)) > 0; ) o.write(buf, 0, n);
        in.close();
        return o.toByteArray();
    }

    // <u32 w><u32 h> premultiplied RGBA rows (hud.c shot_save)
    static Bitmap rgba(byte[] d) {
        ByteBuffer bb = ByteBuffer.wrap(d).order(ByteOrder.LITTLE_ENDIAN);
        int w = bb.getInt(0), h = bb.getInt(4);
        if (w <= 0 || h <= 0 || d.length < 8 + w * h * 4) return null;
        Bitmap b = Bitmap.createBitmap(w, h, Bitmap.Config.ARGB_8888);
        b.copyPixelsFromBuffer(ByteBuffer.wrap(d, 8, w * h * 4));
        return b;
    }

    Bitmap assetPic(String name) {
        try (InputStream in = getAssets().open(name + ".png")) { return BitmapFactory.decodeStream(in); } catch (Exception e) { return null; }
    }
    void loadPictures() {
        for (Elem e : elems) {
            try {
                if (e.touch) {
                    File own = iconFile(e.name, ".png");
                    e.pic = own.exists() ? BitmapFactory.decodeFile(own.getPath()) : null;
                    if (e.pic == null) e.pic = assetPic(e.name);
                    continue;
                }
                File f = new File(new File(gameDir(), "hudshots"), e.name + ".rgba");
                e.pic = rgba(readAll(f.exists() ? new FileInputStream(f) : getAssets().open("hud_" + e.name + ".rgba")));
            } catch (Exception ignored) {
                e.pic = null;
            }
        }
    }

    void loadLayout() {
        File f = layoutFile();
        if (!f.exists()) return;
        try (BufferedReader r = new BufferedReader(new InputStreamReader(new FileInputStream(f), StandardCharsets.UTF_8))) {
            String line;
            while ((line = r.readLine()) != null) {
                String[] p = line.trim().split("\\s+");
                if (p.length == 2 && p[0].equals("touch_opacity")) { opacity = Float.parseFloat(p[1]); continue; }
                if (p.length < 4) continue;
                for (Elem e : elems) if (e.name.equals(p[0])) { e.x = Float.parseFloat(p[1]); e.y = Float.parseFloat(p[2]); e.s = Float.parseFloat(p[3]); }
            }
        } catch (Exception ignored) {
        }
    }

    void save() {
        StringBuilder sb = new StringBuilder("# HUD layout from the editor: name x y scale (game pixels 1280x720, top-left)\n");
        List<Elem> all = new ArrayList<>(elems);
        all.addAll(kept);
        for (Elem e : all)
            if (e.x != e.sx || e.y != e.sy || e.s != 1)
                sb.append(String.format(Locale.ROOT, "%s %.1f %.1f %.3f\n", e.name, e.x, e.y, e.s));
        sb.append(String.format(Locale.ROOT, "touch_opacity %.2f\n", opacity));
        try {
            File f = layoutFile();
            f.getParentFile().mkdirs();
            FileOutputStream o = new FileOutputStream(f);
            o.write(sb.toString().getBytes(StandardCharsets.UTF_8));
            o.close();
        } catch (Exception ignored) {
        }
        for (java.util.Map.Entry<String, Bitmap> it : icons.entrySet()) saveIcon(it.getKey(), it.getValue());
    }

    // the runtime's copy (touch_ui.c own_art): <u32 w><u32 h> + straight-alpha RGBA rows; the PNG is for this editor
    void saveIcon(String name, Bitmap b) {
        File png = iconFile(name, ".png"), raw = iconFile(name, ".rgba");
        if (b == null) { png.delete(); raw.delete(); return; }
        try {
            png.getParentFile().mkdirs();
            try (FileOutputStream o = new FileOutputStream(png)) { b.compress(Bitmap.CompressFormat.PNG, 100, o); }
            ByteBuffer px = ByteBuffer.allocate(ART * ART * 4);
            b.copyPixelsToBuffer(px);                       // ARGB_8888 = premultiplied R, G, B, A bytes
            byte[] d = px.array();
            for (int i = 0; i < d.length; i += 4) {
                int a = d[i + 3] & 0xff;
                if (a == 0 || a == 255) continue;
                for (int k = 0; k < 3; k++) d[i + k] = (byte) Math.min(255, (d[i + k] & 0xff) * 255 / a);
            }
            ByteBuffer out = ByteBuffer.allocate(8 + d.length).order(ByteOrder.LITTLE_ENDIAN);
            out.putInt(ART).putInt(ART).put(d);
            try (FileOutputStream o = new FileOutputStream(raw)) { o.write(out.array()); }
        } catch (Exception e) {
            png.delete(); raw.delete();
        }
    }

    // a picture from the gallery: the middle square, cut round, with a light ring (the design), ART x ART
    @Override
    protected void onActivityResult(int req, int res, Intent data) {
        super.onActivityResult(req, res, data);
        Elem e = view.active;
        if (req != PICK || res != RESULT_OK || data == null || data.getData() == null || e == null || !e.touch) return;
        try {
            BitmapFactory.Options o = new BitmapFactory.Options();
            o.inJustDecodeBounds = true;
            try (InputStream in = getContentResolver().openInputStream(data.getData())) { BitmapFactory.decodeStream(in, null, o); }
            o.inSampleSize = Math.max(1, Math.min(o.outWidth, o.outHeight) / (ART * 2));
            o.inJustDecodeBounds = false;
            Bitmap src;
            try (InputStream in = getContentResolver().openInputStream(data.getData())) { src = BitmapFactory.decodeStream(in, null, o); }
            if (src == null) return;
            Bitmap b = Bitmap.createBitmap(ART, ART, Bitmap.Config.ARGB_8888);
            Canvas c = new Canvas(b);
            Paint p = new Paint(Paint.ANTI_ALIAS_FLAG | Paint.FILTER_BITMAP_FLAG);
            int side = Math.min(src.getWidth(), src.getHeight());
            android.graphics.Rect from = new android.graphics.Rect((src.getWidth() - side) / 2, (src.getHeight() - side) / 2,
                    (src.getWidth() + side) / 2, (src.getHeight() + side) / 2);
            c.drawCircle(ART / 2f, ART / 2f, ART / 2f - 1, p);
            p.setXfermode(new android.graphics.PorterDuffXfermode(android.graphics.PorterDuff.Mode.SRC_IN));
            c.drawBitmap(src, from, new RectF(0, 0, ART, ART), p);
            p.setXfermode(null);
            p.setStyle(Paint.Style.STROKE);
            p.setStrokeWidth(6);
            p.setColor(0xFFE6EBF2);
            c.drawCircle(ART / 2f, ART / 2f, ART / 2f - 4, p);
            icons.put(e.name, b);
            e.pic = b;
            view.showInfo(); view.invalidate();
        } catch (Exception ignored) {
        }
    }

    void reset() {
        for (Elem e : elems) { e.x = e.sx; e.y = e.sy; e.s = 1; }
        opacity = 0.6f;
        view.showInfo();
        view.invalidate();
    }

    class EditorView extends View {
        final Paint fill = new Paint(), frame = new Paint(), guide = new Paint(), sel = new Paint(), text = new Paint(), pic = new Paint();
        Elem active, tapped;
        boolean dragging;
        float lastX, lastY, downX, downY, startDist, startScale;
        float scale, ox, oy;          // game pixels -> view

        EditorView(Context c) {
            super(c);
            fill.setStyle(Paint.Style.FILL);
            frame.setStyle(Paint.Style.STROKE); frame.setStrokeWidth(2); frame.setColor(0xFF2A3A6E);
            guide.setStyle(Paint.Style.STROKE); guide.setStrokeWidth(2); guide.setColor(0x40FFFFFF);
            guide.setPathEffect(new DashPathEffect(new float[]{10, 8}, 0));
            sel.setStyle(Paint.Style.STROKE); sel.setStrokeWidth(4); sel.setColor(YELLOW);
            text.setColor(Color.WHITE); text.setTextSize(13 * getResources().getDisplayMetrics().density); text.setAntiAlias(true); text.setTypeface(nunito);
            text.setShadowLayer(4, 1, 1, Color.BLACK);
            pic.setFilterBitmap(true); pic.setAntiAlias(true);
        }

        void fit() {
            scale = Math.min(getWidth() / GW, getHeight() / GH);
            ox = (getWidth() - GW * scale) / 2; oy = (getHeight() - GH * scale) / 2;
        }

        RectF rect(Elem e) {
            float w = e.sw * e.s, h = e.sh * e.s;
            return new RectF(ox + e.x * scale, oy + e.y * scale, ox + (e.x + w) * scale, oy + (e.y + h) * scale);
        }

        void showInfo() {
            Elem e = active;
            info.setText(e == null ? t("Tap an item, then slide it", "点击一个元素，然后拖动") : e.label + String.format(Locale.ROOT, "  %.0f%%", e.s * 100));
            iconBar.setVisibility(e != null && e.touch ? View.VISIBLE : View.GONE);
            if (e != null && e.touch) {
                iconPreview.setImageBitmap(e.pic);
                boolean own = icons.containsKey(e.name) ? icons.get(e.name) != null : iconFile(e.name, ".png").exists();
                iconDefault.setVisibility(own ? View.VISIBLE : View.GONE);
            }
            size.setEnabled(e != null);
            if (e != null) { settingSize = true; size.setProgress(Math.round(e.s * 100) - 40); settingSize = false; }
        }

        @Override
        protected void onDraw(Canvas c) {
            fit();
            fill.setColor(0xFF111827);                        // the race screen: plain
            c.drawRect(ox, oy, ox + GW * scale, oy + GH * scale, fill);
            c.drawRect(ox, oy, ox + GW * scale, oy + GH * scale, frame);
            for (Elem e : elems) {
                RectF r = rect(e);
                if (e.pic != null) {
                    pic.setAlpha(e.touch ? (int) (255 * Math.min(1f, opacity / 0.6f * 0.8f)) : 255);
                    c.drawBitmap(e.pic, null, r, pic);
                } else {                                      // no picture yet: a plain box
                    fill.setColor(0x14FFFFFF);
                    if (e.touch) c.drawOval(r, fill); else c.drawRoundRect(r, 8, 8, fill);
                }
                if (e.touch && opacity < 0.05f && e != active) c.drawOval(r, guide);   // invisible buttons: their outline
                if (e == active) {
                    if (e.touch) c.drawOval(r, sel); else c.drawRoundRect(r, 8, 8, sel);
                } else if (!e.touch) {
                    c.drawRoundRect(r, 8, 8, guide);
                }
                if (!e.touch) c.drawText(e.label, r.left + 8, r.top + text.getTextSize() + 2, text);      // HUD boxes: their name
                else if (e.name.equals("touch_autogas")) {          // the switch: a tag under
                    String tag = t("AUTO GAS", "自动油门");
                    c.drawText(tag, r.centerX() - text.measureText(tag) / 2, r.bottom + text.getTextSize() + 2, text);
                }
            }
        }

        Elem hit(float x, float y) {
            Elem best = null; float area = Float.MAX_VALUE;
            for (Elem e : elems) {
                RectF r = rect(e);
                r.inset(-dp(8), -dp(8));
                if (r.contains(x, y) && r.width() * r.height() < area) { best = e; area = r.width() * r.height(); }
            }
            return best;
        }

        @Override
        public boolean onTouchEvent(MotionEvent ev) {
            switch (ev.getActionMasked()) {
                // Tap to pick an item, then slide it: a drag only moves the item already picked (the user: no
                // accidental drags of the wrong item); a tap elsewhere picks another, on nothing drops the pick.
                case MotionEvent.ACTION_DOWN:
                    tapped = hit(ev.getX(), ev.getY());
                    dragging = tapped != null && tapped == active;
                    downX = lastX = ev.getX(); downY = lastY = ev.getY();
                    break;
                case MotionEvent.ACTION_UP:
                    if (!dragging && Math.hypot(ev.getX() - downX, ev.getY() - downY) < dp(12)) { active = tapped; showInfo(); invalidate(); }
                    dragging = false;
                    break;
                case MotionEvent.ACTION_POINTER_DOWN:
                    if (active != null && ev.getPointerCount() == 2) { startDist = dist(ev); startScale = active.s; dragging = true; }
                    break;
                case MotionEvent.ACTION_MOVE:
                    if (active == null || !dragging) break;
                    if (ev.getPointerCount() >= 2 && startDist > 0) {
                        float cx = active.x + active.sw * active.s / 2, cy = active.y + active.sh * active.s / 2;
                        active.s = Math.max(0.4f, Math.min(3f, startScale * dist(ev) / startDist));
                        active.x = cx - active.sw * active.s / 2; active.y = cy - active.sh * active.s / 2;   // grow around the centre
                    } else {
                        active.x += (ev.getX() - lastX) / scale; active.y += (ev.getY() - lastY) / scale;
                    }
                    active.x = Math.max(-active.sw * active.s / 2, Math.min(GW - active.sw * active.s / 2, active.x));
                    active.y = Math.max(-active.sh * active.s / 2, Math.min(GH - active.sh * active.s / 2, active.y));
                    lastX = ev.getX(); lastY = ev.getY();
                    showInfo();
                    invalidate();
                    break;
                case MotionEvent.ACTION_POINTER_UP:
                    startDist = 0;
                    int keep = ev.getActionIndex() == 0 ? 1 : 0;      // keep dragging with the finger that stays
                    lastX = ev.getX(keep); lastY = ev.getY(keep);
                    break;
            }
            return true;
        }

        float dist(MotionEvent ev) {
            float dx = ev.getX(0) - ev.getX(1), dy = ev.getY(0) - ev.getY(1);
            return (float) Math.sqrt(dx * dx + dy * dy);
        }
    }
}
