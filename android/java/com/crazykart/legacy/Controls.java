package com.crazykart.legacy;

import android.app.Activity;
import android.app.Dialog;
import android.content.SharedPreferences;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.view.Gravity;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

import java.io.File;
import java.io.FileOutputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;

// Keyboards and game controllers (the user, 6 Nov 2026: players use wireless / wired controllers and keyboards):
// Settings > Controls binds one keyboard key and one controller button (or stick / trigger direction) to each game
// action, Settings > Chat macros a key or a two-button combination to each of the 9 chat macros. Written to
// <files>/controls.txt at every Play (plat_android.c controls_load): "bind <code> <vk>", "macro <slot> <code> [<code>]".
// Codes: Android key codes; a stick / d-pad hat / trigger direction is 1000 + axis * 2 + (1 if positive).
final class Controls {
    // the game's own keys (UserSetting.bin defaults: arrows, Ctrl, Space, Shift; the touch buttons press the same)
    static final String[] ID = {"throttle", "reverse", "left", "right", "item", "switch", "drift", "chat", "menu"};
    static final String[] EN = {"Accelerate", "Brake / reverse", "Steer left", "Steer right", "Use item", "Switch item", "Drift", "Chat", "Menu (Esc)"};
    static final String[] ZH = {"加速", "刹车 / 倒车", "左转", "右转", "使用道具", "切换道具", "漂移", "聊天", "菜单 (Esc)"};
    static final int[] VK = {0x26, 0x28, 0x25, 0x27, 0x11, 0x20, 0x10, 0x0d, 0x1b};
    static final int A_X = 0, A_Y = 1, A_HAT_X = 15, A_HAT_Y = 16, A_LT = 17, A_RT = 18, A_GAS = 22, A_BRAKE = 23;
    static int axis(int a, boolean pos) { return 1000 + a * 2 + (pos ? 1 : 0); }
    static final int[] KB = {KeyEvent.KEYCODE_DPAD_UP, KeyEvent.KEYCODE_DPAD_DOWN, KeyEvent.KEYCODE_DPAD_LEFT, KeyEvent.KEYCODE_DPAD_RIGHT,
            KeyEvent.KEYCODE_CTRL_LEFT, KeyEvent.KEYCODE_SPACE, KeyEvent.KEYCODE_SHIFT_LEFT, KeyEvent.KEYCODE_ENTER, KeyEvent.KEYCODE_ESCAPE};
    static final int[] PAD = {KeyEvent.KEYCODE_BUTTON_A, KeyEvent.KEYCODE_BUTTON_B, axis(A_X, false), axis(A_X, true),
            KeyEvent.KEYCODE_BUTTON_X, KeyEvent.KEYCODE_BUTTON_Y, KeyEvent.KEYCODE_BUTTON_R1, KeyEvent.KEYCODE_BUTTON_SELECT, KeyEvent.KEYCODE_BUTTON_START};
    // always on besides the player's choice: d-pad hats steer, the triggers drive (any controller works out of the box)
    static final int[][] EXTRA = {{axis(A_RT, true), 0}, {axis(A_GAS, true), 0}, {axis(A_LT, true), 1}, {axis(A_BRAKE, true), 1},
            {axis(A_HAT_X, false), 2}, {axis(A_HAT_X, true), 3}, {axis(A_HAT_Y, false), 0}, {axis(A_HAT_Y, true), 1}};
    static final int MACROS = 9;

    static int kb(SharedPreferences p, int i) { return p.getInt("kb_" + ID[i], KB[i]); }
    static int pad(SharedPreferences p, int i) { return p.getInt("pad_" + ID[i], PAD[i]); }
    static int[] macro(SharedPreferences p, int slot) {
        String s = p.getString("macro_" + slot, "");
        if (s.isEmpty()) return new int[0];
        String[] f = s.split("\\+");
        int[] r = new int[Math.min(2, f.length)];
        for (int i = 0; i < r.length; i++) r[i] = Integer.parseInt(f[i]);
        return r;
    }
    static String join(int[] codes) {
        StringBuilder b = new StringBuilder();
        for (int c : codes) { if (b.length() > 0) b.append('+'); b.append(c); }
        return b.toString();
    }

    static void write(SharedPreferences p, File dir) {
        StringBuilder b = new StringBuilder("# Settings > Controls (Controls.java)\n");
        for (int i = 0; i < ID.length; i++) {
            if (kb(p, i) > 0) b.append("bind ").append(kb(p, i)).append(' ').append(VK[i]).append('\n');
            if (pad(p, i) > 0) b.append("bind ").append(pad(p, i)).append(' ').append(i == 7 ? -1 : VK[i]).append('\n');   // chat on a controller: + text box
        }
        for (int[] e : EXTRA) b.append("bind ").append(e[0]).append(' ').append(VK[e[1]]).append('\n');
        for (int s = 0; s < MACROS; s++) {
            int[] m = macro(p, s);
            if (m.length == 0) continue;
            b.append("macro ").append(s);
            for (int c : m) b.append(' ').append(c);
            b.append('\n');
        }
        try { FileOutputStream o = new FileOutputStream(new File(dir, "controls.txt")); o.write(b.toString().getBytes(StandardCharsets.UTF_8)); o.close(); }
        catch (Exception ignored) { }
    }

    static String name(int code, boolean zh) {
        if (code <= 0) return zh ? "无" : "None";
        if (code >= 1000) {
            int a = (code - 1000) / 2;
            boolean pos = (code & 1) == 1;
            switch (a) {
                case A_X: return (zh ? "左摇杆 " : "L stick ") + (pos ? "→" : "←");
                case A_Y: return (zh ? "左摇杆 " : "L stick ") + (pos ? "↓" : "↑");
                case 11: return (zh ? "右摇杆 " : "R stick ") + (pos ? "→" : "←");
                case 14: return (zh ? "右摇杆 " : "R stick ") + (pos ? "↓" : "↑");
                case A_HAT_X: return (zh ? "方向键 " : "D-pad ") + (pos ? "→" : "←");
                case A_HAT_Y: return (zh ? "方向键 " : "D-pad ") + (pos ? "↓" : "↑");
                case A_LT: case A_BRAKE: return "LT";
                case A_RT: case A_GAS: return "RT";
            }
            return MotionEvent.axisToString(a).replace("AXIS_", "") + (pos ? "+" : "-");
        }
        switch (code) {
            case KeyEvent.KEYCODE_DPAD_UP: return "↑";
            case KeyEvent.KEYCODE_DPAD_DOWN: return "↓";
            case KeyEvent.KEYCODE_DPAD_LEFT: return "←";
            case KeyEvent.KEYCODE_DPAD_RIGHT: return "→";
            case KeyEvent.KEYCODE_BUTTON_L1: return "LB";
            case KeyEvent.KEYCODE_BUTTON_R1: return "RB";
            case KeyEvent.KEYCODE_BUTTON_L2: return "LT";
            case KeyEvent.KEYCODE_BUTTON_R2: return "RT";
            case KeyEvent.KEYCODE_BUTTON_THUMBL: return "L3";
            case KeyEvent.KEYCODE_BUTTON_THUMBR: return "R3";
            case KeyEvent.KEYCODE_CTRL_LEFT: case KeyEvent.KEYCODE_CTRL_RIGHT: return "Ctrl";
            case KeyEvent.KEYCODE_SHIFT_LEFT: case KeyEvent.KEYCODE_SHIFT_RIGHT: return "Shift";
            case KeyEvent.KEYCODE_ESCAPE: return "Esc";
        }
        String k = KeyEvent.keyCodeToString(code).replace("KEYCODE_", "").replace("BUTTON_", "");
        k = k.replace('_', ' ').toLowerCase(Locale.ROOT);
        return k.length() <= 1 ? k.toUpperCase(Locale.ROOT) : Character.toUpperCase(k.charAt(0)) + k.substring(1);
    }

    interface Got { void codes(int[] codes); }      // empty = cleared

    // "Press a key or button": keyboards, controllers, sticks and triggers; combo = up to two held together
    static void capture(Activity a, final boolean combo, final boolean zh, final Got got) {
        final Set<Integer> held = new LinkedHashSet<>(), seen = new LinkedHashSet<>();
        final int[] axisState = new int[64];
        final int[] AXES = {A_X, A_Y, 11, 14, A_HAT_X, A_HAT_Y, A_LT, A_RT, A_GAS, A_BRAKE};
        final Dialog[] box = new Dialog[1];
        final Runnable finish = new Runnable() { public void run() {
            if (box[0] == null || !box[0].isShowing()) return;
            box[0].dismiss();
            List<Integer> l = new ArrayList<>(seen);
            int n = Math.min(combo ? 2 : 1, l.size());
            int[] r = new int[n];
            for (int i = 0; i < n; i++) r[i] = l.get(i);
            got.codes(r);
        } };
        box[0] = new Dialog(a) {
            @Override public boolean dispatchKeyEvent(KeyEvent e) {
                int c = e.getKeyCode();
                // the phone's own back gesture cancels; a controller's B / back button is bindable
                if (c == KeyEvent.KEYCODE_BACK && (e.getSource() & InputDevice.SOURCE_GAMEPAD) != InputDevice.SOURCE_GAMEPAD
                        && (e.getSource() & InputDevice.SOURCE_JOYSTICK) != InputDevice.SOURCE_JOYSTICK) return super.dispatchKeyEvent(e);
                if (e.getAction() == KeyEvent.ACTION_DOWN && e.getRepeatCount() == 0) { held.add(c); seen.add(c); }
                else if (e.getAction() == KeyEvent.ACTION_UP) { held.remove(c); if (held.isEmpty() && !seen.isEmpty()) finish.run(); }
                return true;
            }
            @Override public boolean dispatchGenericMotionEvent(MotionEvent e) {
                if ((e.getSource() & InputDevice.SOURCE_CLASS_JOYSTICK) == 0) return super.dispatchGenericMotionEvent(e);
                for (int ax : AXES) {
                    float v = e.getAxisValue(ax);
                    int s = v > 0.6f ? 1 : v < -0.6f ? -1 : 0;
                    if (s == axisState[ax]) continue;
                    if (axisState[ax] != 0) held.remove(axis(ax, axisState[ax] > 0));
                    axisState[ax] = s;
                    if (s != 0) { held.add(axis(ax, s > 0)); seen.add(axis(ax, s > 0)); }
                }
                if (held.isEmpty() && !seen.isEmpty()) finish.run();
                return true;
            }
        };
        box[0].requestWindowFeature(Window.FEATURE_NO_TITLE);
        LinearLayout v = new LinearLayout(a);
        v.setOrientation(LinearLayout.VERTICAL);
        v.setGravity(Gravity.CENTER);
        GradientDrawable bg = new GradientDrawable();
        bg.setColor(0xF2131A2E); bg.setCornerRadius(40); bg.setStroke(2, 0xFFF5C21B);
        v.setBackground(bg);
        v.setPadding(60, 40, 60, 30);
        TextView t = new TextView(a);
        t.setText(combo ? (zh ? "按下一个键，或同时按下两个键" : "Press a key or button, or two together")
                : (zh ? "按下一个键或手柄按钮（或推动摇杆）" : "Press a key or controller button (or move a stick)"));
        t.setTextColor(Color.WHITE); t.setTextSize(17); t.setGravity(Gravity.CENTER);
        v.addView(t);
        LinearLayout row = new LinearLayout(a);
        row.setGravity(Gravity.CENTER);
        Button clear = new Button(a), cancel = new Button(a);
        clear.setText(zh ? "清除" : "Clear"); cancel.setText(zh ? "取消" : "Cancel");
        clear.setAllCaps(false); cancel.setAllCaps(false);
        clear.setFocusable(false); cancel.setFocusable(false);         // keys go to the capture, not the buttons
        clear.setOnClickListener(new View.OnClickListener() { public void onClick(View x) { box[0].dismiss(); got.codes(new int[0]); } });
        cancel.setOnClickListener(new View.OnClickListener() { public void onClick(View x) { box[0].dismiss(); } });
        row.addView(clear); row.addView(cancel);
        v.addView(row);
        box[0].setContentView(v);
        box[0].show();
    }
}
