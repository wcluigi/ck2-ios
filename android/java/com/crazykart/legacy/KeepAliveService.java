package com.crazykart.legacy;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Intent;
import android.content.pm.ServiceInfo;
import android.os.Build;
import android.os.IBinder;

// Home / app switcher (12 Nov 2026, the user: "every time i go home the game disconnects"): in the background Android
// (and the phone maker's battery manager) froze or closed the game, so it stopped answering the server, which dropped it.
// While the game runs this foreground service keeps the app "in use" (a quiet notification: tap = back to the game), so the
// game goes on in the background without a window (gpu_wgpu.c: no drawing, ~30 frames a second) and stays connected.
public class KeepAliveService extends Service {
    static final String CHANNEL = "ck2_running";

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        boolean zh = "zh".equals(getSharedPreferences("login", MODE_PRIVATE).getString("lang", ""));
        NotificationManager nm = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
        nm.createNotificationChannel(new NotificationChannel(CHANNEL, zh ? "游戏运行中" : "Game running", NotificationManager.IMPORTANCE_LOW));
        PendingIntent back = PendingIntent.getActivity(this, 0, new Intent(this, GameActivity.class)
                .addFlags(Intent.FLAG_ACTIVITY_SINGLE_TOP | Intent.FLAG_ACTIVITY_REORDER_TO_FRONT), PendingIntent.FLAG_IMMUTABLE);
        Notification n = new Notification.Builder(this, CHANNEL)
                .setSmallIcon(getApplicationInfo().icon)
                .setContentTitle("Crazy Kart Legacy")
                .setContentText(zh ? "游戏在后台运行，保持在线。点击返回游戏。" : "Still connected in the background. Tap to return to the game.")
                .setContentIntent(back)
                .setOngoing(true)
                .build();
        if (Build.VERSION.SDK_INT >= 34) startForeground(1, n, ServiceInfo.FOREGROUND_SERVICE_TYPE_SPECIAL_USE);
        else startForeground(1, n);
        return START_NOT_STICKY;                              // the game process ended: nothing to keep
    }

    @Override
    public IBinder onBind(Intent i) { return null; }
}
