// iOS platform layer + launcher (phase 1) for the recompiled client: the same runtime as Android (runtime/mobile/*,
// input.c), drawn through WebGPU on Metal. Built by ios/build_ios.sh on a macOS runner (.github/workflows/ios.yml) into
// an unsigned .ipa that Sideloadly / AltStore sign. Launcher: sign-in (Launcher/login.js protocol, as LoginActivity),
// the game data copied from the app on the first start, the phone's settings file, the server's shop (ShopSync).
// Not yet here (Android has them): updates from the patch servers.
#import <UIKit/UIKit.h>
#import <QuartzCore/CAMetalLayer.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import <GameController/GameController.h>
#import <WebKit/WebKit.h>
#import <PhotosUI/PhotosUI.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <unistd.h>

// ---- the runtime's side -----------------------------------------------------------------------------------------
int ck_main(const char *game_dir, const char *image_dir, const char *args);
extern int g_screen_hz;
void ui_key(int vk, int down);
void gpu_backbuffer_size(int *w, int *h);
void gpu_wide(int *gw, int *rw, int *ox);
void input_push(int kind, int a, int b, int c, int d);
void input_controls_load(const char *dir);
int input_code(int code, int down);
void input_sticks(float lx, float ly, float ry);
void input_axis(int axis, float v);

static CAMetalLayer *g_layer;            // the game view's layer (gpu_wgpu.c make_surface: WGPUSurfaceSourceMetalLayer)
static int g_pw, g_ph;                   // its size in pixels
static UIView *g_game_view;              // the game view: web panels go over it (plat_web_panel)
static char g_game_dir_s[1024], g_image_dir_s[1024], g_files_s[1024], g_args[512];

// Home / app switcher (12 Nov 2026, the user: "every time i go home the game disconnects"): iOS suspended the app within
// seconds, so the server dropped it. Now (AppDelegate) the app keeps running in the background on its audio (Info.plist
// UIBackgroundModes audio; the output is silence there) and the game goes on without a window: no GPU work (iOS forbids
// it in the background), ~30 frames a second (gpu_wgpu.c), its connection alive.
static volatile int g_bg;
void *plat_native_window(void) { return g_bg ? NULL : (__bridge void *)g_layer; }
void plat_window_released(void) {}
void plat_client_size(int *w, int *h) { *w = g_pw; *h = g_ph; }
void plat_message_box(const char *title, const char *text) { NSLog(@"message box '%s': %s", title, text); }

// a fatal error stays on screen (the 4 GB reservation test, a missing file) instead of a silent crash
void plat_fatal_hook(const char *msg) {
    NSString *m = [NSString stringWithUTF8String:msg ? msg : "?"];
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *a = [UIAlertController alertControllerWithTitle:@"Crazy Kart Legacy stopped" message:m
                                                             preferredStyle:UIAlertControllerStyleAlert];
        UIViewController *vc = UIApplication.sharedApplication.windows.firstObject.rootViewController;
        while (vc.presentedViewController) vc = vc.presentedViewController;
        [vc presentViewController:a animated:YES completion:nil];
    });
    for (;;) pause();                    // keep the message up (rt_fatal would abort right after)
}

// ---- chat: the game's Chat button / a controller's chat key -> a text box; the text comes back as typed characters.
// Full screen (11 Nov 2026, the user: "make the typing fullscreen"), as Android: a dark panel, the text field +
// Send / Cancel across the top, the keyboard below.
@interface ChatVC : UIViewController <UITextFieldDelegate>
@property (copy) void (^done)(NSString *);
@end
@implementation ChatVC {
    UITextField *_tf;
    BOOL _sent;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithRed:0.04 green:0.055 blue:0.094 alpha:0.94];
    _tf = [[UITextField alloc] init];
    _tf.placeholder = @"Message";
    _tf.font = [UIFont systemFontOfSize:20];
    _tf.textColor = UIColor.whiteColor;
    _tf.backgroundColor = [UIColor colorWithRed:0.118 green:0.145 blue:0.22 alpha:1];
    _tf.returnKeyType = UIReturnKeySend;
    _tf.delegate = self;
    _tf.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 12, 12)];
    _tf.leftViewMode = UITextFieldViewModeAlways;
    _tf.layer.cornerRadius = 8;
    UIButton *s = [UIButton buttonWithType:UIButtonTypeSystem], *c = [UIButton buttonWithType:UIButtonTypeSystem];
    [s setTitle:@"Send" forState:UIControlStateNormal];
    [c setTitle:@"Cancel" forState:UIControlStateNormal];
    s.titleLabel.font = c.titleLabel.font = [UIFont boldSystemFontOfSize:18];
    [s addTarget:self action:@selector(send) forControlEvents:UIControlEventTouchUpInside];
    [c addTarget:self action:@selector(cancel) forControlEvents:UIControlEventTouchUpInside];
    UIStackView *row = [[UIStackView alloc] initWithArrangedSubviews:@[_tf, s, c]];
    row.axis = UILayoutConstraintAxisHorizontal;
    row.spacing = 14;
    row.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:row];
    UILayoutGuide *g = self.view.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[
        [row.topAnchor constraintEqualToAnchor:g.topAnchor constant:12], [row.leadingAnchor constraintEqualToAnchor:g.leadingAnchor constant:16],
        [row.trailingAnchor constraintEqualToAnchor:g.trailingAnchor constant:-16], [row.heightAnchor constraintEqualToConstant:48]]];
}
- (void)viewDidAppear:(BOOL)animated { [super viewDidAppear:animated]; [_tf becomeFirstResponder]; }
- (BOOL)textFieldShouldReturn:(UITextField *)t { [self finish:t.text ?: @""]; return NO; }
- (void)send { [self finish:_tf.text ?: @""]; }
- (void)cancel { [self finish:@""]; }
- (void)finish:(NSString *)s {
    if (_sent) return;
    _sent = YES;
    if (self.done) self.done(s);
    [self dismissViewControllerAnimated:NO completion:nil];
}
@end
void plat_open_chat(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        ChatVC *a = [[ChatVC alloc] init];
        a.modalPresentationStyle = UIModalPresentationOverFullScreen;
        a.done = ^(NSString *s) {
            for (NSUInteger i = 0; i < s.length && i < 120; i++) input_push(4, [s characterAtIndex:i], 0, 0, 0);
            input_push(2, 0x0d, 1, 0, 0); input_push(2, 0x0d, 0, 0, 0);     // Enter: send (empty: just closes the line)
        };
        UIViewController *vc = UIApplication.sharedApplication.windows.firstObject.rootViewController;
        while (vc.presentedViewController) vc = vc.presentedViewController;
        [vc presentViewController:a animated:NO completion:nil];
    });
}

// the HTML phone UI's full-screen page (ui_bridge.c, compiled for the lobby swipe): iOS builds ship no page, so the
// bridge never asks to show it; shortcut: no iOS web view for it yet, add one when the HTML UI goes into iOS builds
void plat_ui_show(const char *url, int visible) { (void)url; (void)visible; }

// ---- a game text field the player tapped (hle_misc.c ImmSetOpenStatus): typed into it, no Enter (12 Nov 2026)
void plat_open_text(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *a = [UIAlertController alertControllerWithTitle:@"Type" message:nil preferredStyle:UIAlertControllerStyleAlert];
        [a addTextFieldWithConfigurationHandler:^(UITextField *t) { t.returnKeyType = UIReturnKeyDone; }];
        [a addAction:[UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:nil]];
        [a addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction *x) {
            NSString *s = a.textFields.firstObject.text ?: @"";
            for (NSUInteger i = 0; i < s.length && i < 120; i++) input_push(4, [s characterAtIndex:i], 0, 0, 0); }]];
        UIViewController *vc = UIApplication.sharedApplication.windows.firstObject.rootViewController;
        while (vc.presentedViewController) vc = vc.presentedViewController;
        [vc presentViewController:a animated:YES completion:nil];
    });
}

// ---- audio out: AudioUnit (RemoteIO), float stereo, pulled from the FMOD mixer (hle_fmod.c) ------------------------
static void (*g_mix)(float *, int);
static AudioUnit g_au;
static OSStatus render(void *ref, AudioUnitRenderActionFlags *fl, const AudioTimeStamp *ts, UInt32 bus, UInt32 frames, AudioBufferList *io) {
    (void)ref; (void)fl; (void)ts; (void)bus;
    g_mix((float *)io->mBuffers[0].mData, (int)frames);
    if (g_bg) memset(io->mBuffers[0].mData, 0, io->mBuffers[0].mDataByteSize);   // background: the game goes on, silently
    return noErr;
}
// the audio that keeps the app running in the background: Ambient (the game's own: obeys the silent switch, mixes with
// music apps) cannot play there, so the app's session becomes Playback (mixing) while it is away; voice chat's
// PlayAndRecord already can and is left alone
static void bg_audio(int away) {
    AVAudioSession *s = AVAudioSession.sharedInstance;
    if (away && [s.category isEqualToString:AVAudioSessionCategoryAmbient])
        [s setCategory:AVAudioSessionCategoryPlayback withOptions:AVAudioSessionCategoryOptionMixWithOthers error:nil];
    else if (!away && [s.category isEqualToString:AVAudioSessionCategoryPlayback])
        [s setCategory:AVAudioSessionCategoryAmbient error:nil];
    [s setActive:YES error:nil];
}
int plat_audio_start(void (*mix)(float *out, int frames), int *rate) {
    g_mix = mix;
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryAmbient error:nil];   // mixes with music apps
    [[AVAudioSession sharedInstance] setActive:YES error:nil];
    AudioComponentDescription d = {kAudioUnitType_Output, kAudioUnitSubType_RemoteIO, kAudioUnitManufacturer_Apple, 0, 0};
    AudioComponent c = AudioComponentFindNext(NULL, &d);
    if (!c || AudioComponentInstanceNew(c, &g_au) != noErr) return 0;
    AudioStreamBasicDescription f = {0};
    f.mSampleRate = 48000; f.mFormatID = kAudioFormatLinearPCM; f.mFormatFlags = kAudioFormatFlagIsFloat | kAudioFormatFlagIsPacked;
    f.mChannelsPerFrame = 2; f.mBitsPerChannel = 32; f.mFramesPerPacket = 1; f.mBytesPerFrame = 8; f.mBytesPerPacket = 8;
    AudioUnitSetProperty(g_au, kAudioUnitProperty_StreamFormat, kAudioUnitScope_Input, 0, &f, sizeof f);
    AURenderCallbackStruct cb = {render, NULL};
    AudioUnitSetProperty(g_au, kAudioUnitProperty_SetRenderCallback, kAudioUnitScope_Input, 0, &cb, sizeof cb);
    if (AudioUnitInitialize(g_au) != noErr || AudioOutputUnitStart(g_au) != noErr) return 0;
    *rate = 48000;
    return 1;
}

// ---- touches, keys, controllers -> the shared input (Android's codes) ----------------------------------------------
static void to_game(float sx, float sy, int *gx, int *gy) {      // undo the letterbox scaling done at present
    int ww = g_pw, wh = g_ph, bw, bh, gw, rw, gox;
    gpu_backbuffer_size(&bw, &bh);
    gpu_wide(&gw, &rw, &gox);
    if (bw <= 0 || bh <= 0) { bw = 1024; bh = 768; }
    if (rw > bw) bw = rw; else gox = 0;
    float scale = (float)ww / bw < (float)wh / bh ? (float)ww / bw : (float)wh / bh;
    float ox = (ww - bw * scale) / 2, oy = (wh - bh * scale) / 2;
    *gx = (int)((sx - ox) / scale) - gox;
    *gy = (int)((sy - oy) / scale);
}
// keyboard: USB HID usage -> Android key code (for Settings > Controls) / Windows VK (typing)
static int hid_to_android(long u) {
    if (u >= 0x04 && u <= 0x1d) return 29 + (int)(u - 0x04);           // a-z
    if (u >= 0x1e && u <= 0x26) return 8 + (int)(u - 0x1e);            // 1-9
    switch (u) {
    case 0x27: return 7;  case 0x28: return 66; case 0x29: return 111; case 0x2a: return 67; case 0x2b: return 61;
    case 0x2c: return 62; case 0x4f: return 22; case 0x50: return 21; case 0x51: return 20; case 0x52: return 19;
    case 0xe0: return 113; case 0xe4: return 114; case 0xe1: return 59; case 0xe5: return 60;
    }
    if (u >= 0x3a && u <= 0x45) return 131 + (int)(u - 0x3a);          // F1-F12
    return 0;
}
static int android_to_vk(int c) {
    if (c >= 29 && c <= 54) return 'A' + c - 29;
    if (c >= 7 && c <= 16) return '0' + c - 7;
    switch (c) {
    case 66: return 0x0d; case 67: return 0x08; case 62: return 0x20; case 21: return 0x25; case 19: return 0x26; case 22: return 0x27;
    case 20: return 0x28; case 59: case 60: return 0x10; case 113: case 114: return 0x11; case 111: return 0x1b; case 61: return 0x09;
    }
    if (c >= 131 && c <= 142) return 0x70 + c - 131;
    return 0;
}

@interface GameView : UIView
@end
@implementation GameView {
    NSMutableArray *_touches;            // slot -> UITouch (ids 0..8 for the shared input; 9 is the controller pointer)
}
+ (Class)layerClass { return [CAMetalLayer class]; }
- (instancetype)initWithFrame:(CGRect)f {
    if ((self = [super initWithFrame:f])) {
        _touches = [NSMutableArray array];
        for (int i = 0; i < 9; i++) [_touches addObject:[NSNull null]];
        self.multipleTouchEnabled = YES;
        self.contentScaleFactor = UIScreen.mainScreen.nativeScale;
        g_layer = (CAMetalLayer *)self.layer;
        g_game_view = self;
        g_layer.pixelFormat = MTLPixelFormatBGRA8Unorm;
    }
    return self;
}
- (void)layoutSubviews {
    [super layoutSubviews];
    CGFloat s = self.contentScaleFactor;
    g_pw = (int)(self.bounds.size.width * s); g_ph = (int)(self.bounds.size.height * s);
    g_layer.drawableSize = CGSizeMake(g_pw, g_ph);
    // the lobby / room button rail keeps clear of the notch / Dynamic Island (hud.c chan_layout): the safe inset
    // in game pixels (the game is 720 high and fills the screen)
    extern float hud_safe_inset;
    UIEdgeInsets in = self.window ? self.window.safeAreaInsets : self.safeAreaInsets;
    if (self.bounds.size.height > 0) hud_safe_inset = (float)(MAX(in.left, in.right) * 720 / self.bounds.size.height);
}
- (void)safeAreaInsetsDidChange { [super safeAreaInsetsDidChange]; [self setNeedsLayout]; }
- (int)slot:(UITouch *)t add:(BOOL)add {
    for (int i = 0; i < 9; i++) if (_touches[i] == t) return i;
    if (!add) return -1;
    for (int i = 0; i < 9; i++) if (_touches[i] == [NSNull null]) { _touches[i] = t; return i; }
    return -1;
}
- (void)send:(NSSet *)touches act:(int)act {
    CGFloat s = self.contentScaleFactor;
    for (UITouch *t in touches) {
        int id = [self slot:t add:act == 0];
        if (id < 0) continue;
        CGPoint p = [t locationInView:self];
        int x, y;
        to_game(p.x * s, p.y * s, &x, &y);
        input_push(3, id, act, x, y);
        if (act == 1) _touches[id] = [NSNull null];
    }
}
- (void)touchesBegan:(NSSet *)t withEvent:(UIEvent *)e { [self send:t act:0]; }
- (void)touchesMoved:(NSSet *)t withEvent:(UIEvent *)e { [self send:t act:2]; }
- (void)touchesEnded:(NSSet *)t withEvent:(UIEvent *)e { [self send:t act:1]; }
- (void)touchesCancelled:(NSSet *)t withEvent:(UIEvent *)e { [self send:t act:1]; }
- (BOOL)canBecomeFirstResponder { return YES; }
- (void)key:(NSSet *)presses down:(int)down {
    for (UIPress *p in presses) {
        if (@available(iOS 13.4, *)) {
            int code = hid_to_android(p.key.keyCode);
            if (!code) continue;
            if (input_code(code, down)) continue;                  // Settings > Controls bindings
            int vk = android_to_vk(code);
            if (vk) input_push(2, vk, down, 0, 0);
        }
    }
}
- (void)pressesBegan:(NSSet *)p withEvent:(UIPressesEvent *)e { [self key:p down:1]; }
- (void)pressesEnded:(NSSet *)p withEvent:(UIPressesEvent *)e { [self key:p down:0]; }
- (void)pressesCancelled:(NSSet *)p withEvent:(UIPressesEvent *)e { [self key:p down:0]; }
@end

// controllers (Xbox, PlayStation, MFi): buttons -> Android key codes, sticks / triggers / d-pad -> Android axes
static void (^g_capture)(int code, int down);      // the Controls screen's "press a key or button" (nil: to the game)
static int g_padheld[256];
static signed char g_capaxis[64];
static void pad_button(int code, BOOL pressed) {
    if (g_padheld[code] == (int)pressed) return;
    g_padheld[code] = pressed;
    if (g_capture) g_capture(code, pressed); else input_code(code, pressed);
}
static void pad_axis(int axis, float v) {                  // a stick / trigger direction past 0.6 counts as a button
    if (!g_capture) { input_axis(axis, v); return; }
    int s = v > 0.6f ? 1 : v < -0.6f ? -1 : 0;
    if (s == g_capaxis[axis]) return;
    if (g_capaxis[axis]) g_capture(1000 + axis * 2 + (g_capaxis[axis] > 0), 0);
    g_capaxis[axis] = (signed char)s;
    if (s) g_capture(1000 + axis * 2 + (s > 0), 1);
}
static void pad_attach(GCController *c) {
    GCExtendedGamepad *g = c.extendedGamepad;
    if (!g) return;
    g.valueChangedHandler = ^(GCExtendedGamepad *p, GCControllerElement *el) {
        pad_button(96, p.buttonA.pressed); pad_button(97, p.buttonB.pressed);          // A, B
        pad_button(99, p.buttonX.pressed); pad_button(100, p.buttonY.pressed);         // X, Y
        pad_button(102, p.leftShoulder.pressed); pad_button(103, p.rightShoulder.pressed);
        pad_button(108, p.buttonMenu.pressed);                                           // Start / Options
        if (@available(iOS 13.0, *)) pad_button(109, p.buttonOptions.pressed);           // Select / Create
        pad_button(106, p.leftThumbstickButton.pressed); pad_button(107, p.rightThumbstickButton.pressed);
        float lx = p.leftThumbstick.xAxis.value, ly = -p.leftThumbstick.yAxis.value;      // Android: y down = +
        float rx = p.rightThumbstick.xAxis.value, ry = -p.rightThumbstick.yAxis.value;
        if (!g_capture) input_sticks(lx, ly, ry);
        pad_axis(0, lx); pad_axis(1, ly); pad_axis(11, rx); pad_axis(14, ry);
        pad_axis(15, p.dpad.xAxis.value); pad_axis(16, -p.dpad.yAxis.value);             // d-pad as the hat
        pad_axis(17, p.leftTrigger.value); pad_axis(18, p.rightTrigger.value);
    };
}

// ---- the game --------------------------------------------------------------------------------------------------
static void *game_thread(void *p) {
    (void)p;
    int r = ck_main(g_game_dir_s, g_image_dir_s, g_args);
    NSLog(@"game exited with %d", r);
    _exit(r);
    return 0;
}

@interface GameVC : UIViewController
@end
@implementation GameVC
- (void)loadView { self.view = [[GameView alloc] initWithFrame:UIScreen.mainScreen.bounds]; }
- (void)viewDidAppear:(BOOL)a {
    [super viewDidAppear:a];
    [self.view becomeFirstResponder];
    [self.view layoutIfNeeded];
    pthread_attr_t at;
    pthread_attr_init(&at);
    pthread_attr_setstacksize(&at, 64u << 20);            // recompiled code nests deeply
    pthread_t t;
    pthread_create(&t, &at, game_thread, 0);
}
- (BOOL)prefersStatusBarHidden { return YES; }
- (BOOL)prefersHomeIndicatorAutoHidden { return YES; }
- (UIRectEdge)preferredScreenEdgesDeferringSystemGestures { return UIRectEdgeAll; }   // no accidental home swipes in a race
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
@end

// ---- web panels (8 Nov 2026, the user: "i want it to run on mobile also"): ckweb.exe's job on PC, as Android's
// WebPanels.java (keep the three in step; ck2server/ckweb/ckweb.cs is the reference). hle_user32.c reports a
// CkWebHelpClass window whose title names a game-folder page; a WKWebView goes over it (invisible and untouchable until
// the game shows the panel, so the page has drawn by then). The page talks through the window.chrome.webview object
// WebView2 gives it on PC: ranked / find / cancel -> GET <api>/launcher/ranked[?do=..] with the sign-in; ready ->
// GetPropA "ckready"; close -> WM_CLOSE; board -> the Leaderboard popup (board.html + the site over its content area).
void web_ready(uint32_t hwnd);
void web_close(uint32_t hwnd);
static NSString *g_web_api, *g_web_user, *g_web_key, *g_web_lang = @"en", *g_web_game;   // set at sign-in (go)
static NSString *const WEB_SHIM = @"(function(){var L=[];window.chrome=window.chrome||{};window.chrome.webview={"
    "postMessage:function(m){window.webkit.messageHandlers.ck.postMessage(JSON.stringify(m));},"
    "addEventListener:function(t,f){if(t==='message')L.push(f);},"
    "removeEventListener:function(t,f){var i=L.indexOf(f);if(i>=0)L.splice(i,1);}};"
    "window.__ckweb=function(d){for(var i=0;i<L.length;i++){try{L[i]({data:d});}catch(e){}}};})();";
static NSString *const BOARD_SITE = @"https://crazykartlegacy.com/";

// game client pixels -> fractions of the game view (to_game backwards)
static void to_screen(int gx, int gy, float *fx, float *fy) {
    int ww = g_pw, wh = g_ph, bw, bh, gw, rw, gox;
    if (ww <= 0 || wh <= 0) { *fx = *fy = 0; return; }
    gpu_backbuffer_size(&bw, &bh);
    gpu_wide(&gw, &rw, &gox);
    if (bw <= 0 || bh <= 0) { bw = 1024; bh = 768; }
    if (rw > bw) bw = rw; else gox = 0;
    float scale = (float)ww / bw < (float)wh / bh ? (float)ww / bw : (float)wh / bh;
    float ox = (ww - bw * scale) / 2, oy = (wh - bh * scale) / 2;
    *fx = ((gx + gox) * scale + ox) / ww;
    *fy = (gy * scale + oy) / wh;
}

static WKWebView *web_new(id<WKScriptMessageHandler> handler) {
    WKWebViewConfiguration *cfg = [[WKWebViewConfiguration alloc] init];
    if (handler) {
        [cfg.userContentController addUserScript:[[WKUserScript alloc] initWithSource:WEB_SHIM
            injectionTime:WKUserScriptInjectionTimeAtDocumentStart forMainFrameOnly:YES]];
        [cfg.userContentController addScriptMessageHandler:handler name:@"ck"];
    }
    WKWebView *w = [[WKWebView alloc] initWithFrame:CGRectZero configuration:cfg];
    w.opaque = NO;
    w.backgroundColor = [UIColor colorWithRed:0x26 / 255.0 green:0x29 / 255.0 blue:0x2d / 255.0 alpha:1];
    w.scrollView.scrollEnabled = NO;
    w.scrollView.bounces = NO;
    w.scrollView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
    return w;
}
static void web_load_local(WKWebView *w, NSString *page) {      // "web/ranked/index.html?a=.." (query kept)
    NSRange q = [page rangeOfString:@"?"];
    NSString *path = [(q.location == NSNotFound ? page : [page substringToIndex:q.location]) stringByReplacingOccurrencesOfString:@"\\" withString:@"/"];
    NSURL *file = [NSURL fileURLWithPath:[g_web_game stringByAppendingPathComponent:path]];
    NSURL *url = q.location == NSNotFound ? file : [NSURL URLWithString:[file.absoluteString stringByAppendingString:[page substringFromIndex:q.location]]];
    [w loadFileURL:url ?: file allowingReadAccessToURL:[NSURL fileURLWithPath:g_web_game isDirectory:YES]];
}
static NSString *web_ini_css(void) {             // [Web] Css= in the game folder's ckweb.ini (as ckweb.exe reads it)
    NSString *ini = [NSString stringWithContentsOfFile:[g_web_game stringByAppendingPathComponent:@"ckweb.ini"] encoding:NSUTF8StringEncoding error:nil];
    BOOL web = NO;
    for (NSString *line in [ini componentsSeparatedByCharactersInSet:NSCharacterSet.newlineCharacterSet]) {
        NSString *t = [line stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        if ([t hasPrefix:@"["]) web = [t caseInsensitiveCompare:@"[Web]"] == NSOrderedSame;
        NSRange eq = [t rangeOfString:@"="];
        if (web && eq.location != NSNotFound && [[[t substringToIndex:eq.location] stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet]
                                                    caseInsensitiveCompare:@"Css"] == NSOrderedSame)
            return [[t substringFromIndex:eq.location + 1] stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
    }
    return @"";
}

@interface CKWebPanel : NSObject <WKScriptMessageHandler, WKNavigationDelegate>
@property (nonatomic) uint32_t hwnd;
@property (nonatomic, strong) WKWebView *web;
@property (nonatomic, copy) NSString *page;
@property (nonatomic) BOOL ready, shown;
@end
static NSMutableDictionary<NSNumber *, CKWebPanel *> *g_panels;
static UIView *g_board;                          // the Leaderboard popup (frame + site)
static WKWebView *g_board_site;
static uint32_t g_board_owner;
static NSString *g_board_url;
static id g_board_handler;

@interface CKBoardHandler : NSObject <WKScriptMessageHandler, WKNavigationDelegate>
@end
static void board_close(void) {
    if (!g_board) return;
    for (UIView *v in g_board.subviews)
        if ([v isKindOfClass:WKWebView.class]) [((WKWebView *)v).configuration.userContentController removeScriptMessageHandlerForName:@"ck"];
    [g_board removeFromSuperview];
    g_board = nil; g_board_site = nil; g_board_handler = nil;
}
@implementation CKBoardHandler
- (void)userContentController:(WKUserContentController *)uc didReceiveScriptMessage:(WKScriptMessage *)msg {
    NSString *json = [msg.body isKindOfClass:NSString.class] ? msg.body : @"";
    if ([json containsString:@"\"close\""]) board_close();
    else if ([json containsString:@"\"home\""] && g_board_site) [g_board_site loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:g_board_url]]];
}
- (void)webView:(WKWebView *)w didFinishNavigation:(WKNavigation *)nav {      // the site: ckweb.ini Css (hides its header)
    NSString *css = web_ini_css();
    if (!css.length || ![w.URL.scheme hasPrefix:@"http"]) return;
    NSData *q = [NSJSONSerialization dataWithJSONObject:@[css] options:0 error:nil];
    NSString *lit = [[NSString alloc] initWithData:q encoding:NSUTF8StringEncoding];       // ["..."]
    [w evaluateJavaScript:[NSString stringWithFormat:@"(function(){var s=document.createElement('style');s.textContent=%@[0];"
                                                      "(document.head||document.documentElement).appendChild(s);})()", lit] completionHandler:nil];
}
@end

static void board_open(uint32_t owner, NSString *url) {
    if (g_board || !g_game_view) return;
    CGSize S = g_game_view.bounds.size;
    CGFloat w = floor(S.width * 0.72), h = floor(S.height * 0.82);
    double k = MAX(1.0, MIN(2.5, h / 420.0));                         // points = CSS pixels
    CGFloat x = 9 * k + 0.05 * w, y = 46 * k + 0.05 * h, bottom = 9 * k + 0.05 * h;
    CKBoardHandler *hd = [[CKBoardHandler alloc] init];
    UIView *box = [[UIView alloc] initWithFrame:CGRectMake((S.width - w) / 2, (S.height - h) / 2, w, h)];
    WKWebView *frame = web_new(hd);
    frame.frame = box.bounds;
    [box addSubview:frame];
    WKWebView *site = web_new(nil);
    site.scrollView.scrollEnabled = YES;
    site.backgroundColor = [UIColor colorWithRed:0x15 / 255.0 green:0x17 / 255.0 blue:0x1a / 255.0 alpha:1];
    site.navigationDelegate = hd;
    site.frame = CGRectMake(x + 1, y + 1, MAX(1, w - 2 * x - 2), MAX(1, h - y - bottom - 2));
    [box addSubview:site];
    [g_game_view addSubview:box];
    NSHTTPCookie *ck = [NSHTTPCookie cookieWithProperties:@{NSHTTPCookieDomain: @"crazykartlegacy.com", NSHTTPCookiePath: @"/",
                                                           NSHTTPCookieName: @"ck_lang", NSHTTPCookieValue: g_web_lang,
                                                           NSHTTPCookieExpires: [NSDate dateWithTimeIntervalSinceNow:365 * 86400.0]}];
    [site.configuration.websiteDataStore.httpCookieStore setCookie:ck completionHandler:^{
        [site loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:url]]];
    }];
    web_load_local(frame, [NSString stringWithFormat:@"web/ranked/board.html?k=%.2f%@", k, [g_web_lang isEqualToString:@"zh"] ? @"&lang=zh" : @""]);
    g_board = box; g_board_site = site; g_board_owner = owner; g_board_url = url; g_board_handler = hd;
}

static void web_reply(CKWebPanel *p, long long rid, long status, NSString *data) {
    NSString *js = [NSString stringWithFormat:@"window.__ckweb&&window.__ckweb({\"id\":%lld,\"status\":%ld,\"lang\":\"%@\",\"data\":%@})",
                    rid, status, g_web_lang, data];
    dispatch_async(dispatch_get_main_queue(), ^{ if (g_panels[@(p.hwnd)] == p) [p.web evaluateJavaScript:js completionHandler:nil]; });
}
static void web_ask(CKWebPanel *p, long long rid, NSString *path) {
    if (!g_web_api || !g_web_user || !g_web_key) { web_reply(p, rid, 1, @"null"); return; }      // 1: not signed in
    NSMutableURLRequest *rq = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:[g_web_api stringByAppendingString:path]]];
    rq.timeoutInterval = 8;
    [rq setValue:[@"Bearer " stringByAppendingString:g_web_key] forHTTPHeaderField:@"Authorization"];
    [rq setValue:g_web_user forHTTPHeaderField:@"X-CK-User"];
    [rq setValue:[g_web_lang isEqualToString:@"zh"] ? @"cn" : @"en" forHTTPHeaderField:@"X-CK-Lang"];
    [[NSURLSession.sharedSession dataTaskWithRequest:rq completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) {
        long status = [r isKindOfClass:NSHTTPURLResponse.class] ? (long)((NSHTTPURLResponse *)r).statusCode : 0;
        NSString *body = @"null";
        if (status && status < 400 && d.length && [NSJSONSerialization JSONObjectWithData:d options:NSJSONReadingFragmentsAllowed error:nil])
            body = [[NSString alloc] initWithData:d encoding:NSUTF8StringEncoding] ?: @"null";     // only JSON goes into the page
        web_reply(p, rid, status, body);
    }] resume];
}

@implementation CKWebPanel
- (void)reveal {
    if (self.ready || g_panels[@(self.hwnd)] != self) return;
    self.ready = YES;
    web_ready(self.hwnd);
}
- (void)userContentController:(WKUserContentController *)uc didReceiveScriptMessage:(WKScriptMessage *)msg {
    NSData *d = [msg.body isKindOfClass:NSString.class] ? [(NSString *)msg.body dataUsingEncoding:NSUTF8StringEncoding] : nil;
    NSDictionary *m = d ? [NSJSONSerialization JSONObjectWithData:d options:0 error:nil] : nil;
    if (![m isKindOfClass:NSDictionary.class]) return;
    long long rid = [m[@"id"] respondsToSelector:@selector(longLongValue)] ? [m[@"id"] longLongValue] : 0;
    NSString *op = [m[@"op"] isKindOfClass:NSString.class] ? m[@"op"] : @"";
    if ([op isEqualToString:@"ready"]) [self reveal];
    else if ([op isEqualToString:@"close"]) web_close(self.hwnd);
    else if ([op isEqualToString:@"board"]) {
        NSString *url = [m[@"url"] isKindOfClass:NSString.class] ? m[@"url"] : @"";
        if ([url hasPrefix:BOARD_SITE]) board_open(self.hwnd, url); else NSLog(@"leaderboard: refused url %@", url);
    }
    else if ([op isEqualToString:@"ranked"]) web_ask(self, rid, @"/launcher/ranked");
    else if ([op isEqualToString:@"find"]) web_ask(self, rid, @"/launcher/ranked?do=find");
    else if ([op isEqualToString:@"cancel"]) web_ask(self, rid, @"/launcher/ranked?do=cancel");
    else web_reply(self, rid, 400, @"null");
}
@end

static void web_remove(CKWebPanel *p) {
    [g_panels removeObjectForKey:@(p.hwnd)];
    if (g_board && g_board_owner == p.hwnd) board_close();            // the board goes with its panel
    [p.web.configuration.userContentController removeScriptMessageHandlerForName:@"ck"];
    [p.web removeFromSuperview];
}

void plat_web_panel(uint32_t hwnd, const char *page, int x, int y, int w, int h, int visible) {      // game thread
    float x0, y0, x1, y1;
    to_screen(x, y, &x0, &y0);
    to_screen(x + w, y + h, &x1, &y1);
    NSString *pg = [NSString stringWithUTF8String:page ? page : ""] ?: @"";
    dispatch_async(dispatch_get_main_queue(), ^{
        if (!g_panels) g_panels = [NSMutableDictionary dictionary];
        CKWebPanel *p = g_panels[@(hwnd)];
        if (!pg.length) { if (p) web_remove(p); return; }
        if (!g_game_view || !g_web_game) return;
        if (!p) {
            p = [[CKWebPanel alloc] init];
            p.hwnd = hwnd;
            p.web = web_new(p);
            p.web.alpha = 0;
            p.web.userInteractionEnabled = NO;
            [g_game_view addSubview:p.web];
            g_panels[@(hwnd)] = p;
        }
        if (![pg isEqualToString:p.page ?: @""]) {
            p.page = pg; p.ready = NO;
            web_load_local(p.web, pg);
            CKWebPanel *pp = p;
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{ [pp reveal]; });   // ckweb's fallback
        }
        CGSize S = g_game_view.bounds.size;
        p.web.frame = CGRectMake(x0 * S.width, y0 * S.height, MAX(1, (x1 - x0) * S.width), MAX(1, (y1 - y0) * S.height));
        p.web.alpha = visible ? 1 : 0;
        p.web.userInteractionEnabled = visible != 0;
        if (g_board) [g_game_view bringSubviewToFront:g_board];
    });
}

// ---- server-asked popups (9 Nov 2026, the user: "renaming should open that rename we did"): ckweb --popup <name> on PC,
// WebPanels.openPopup on Android. The server asks through the launcher's voice poll ("popup"), which is also the voice
// switchboard (voice_state). web/<name>/index.html centred at ckweb's size for
// it, shown at "ready" (or after 2.5 s); "state" / "submit" {name} ask the popup's API, "close" closes it. ----
@interface CKPopup : NSObject <WKScriptMessageHandler>
@property (nonatomic, copy) NSString *api;
@property (nonatomic, strong) WKWebView *web;
@end
static CKPopup *g_popup;                         // one at a time

static void popup_close(void) {
    if (!g_popup) return;
    [g_popup.web.configuration.userContentController removeScriptMessageHandlerForName:@"ck"];
    [g_popup.web removeFromSuperview];
    g_popup = nil;
}
static void popup_reply(CKPopup *p, long long rid, long status, NSString *data) {
    NSString *js = [NSString stringWithFormat:@"window.__ckweb&&window.__ckweb({\"id\":%lld,\"status\":%ld,\"lang\":\"%@\",\"data\":%@})",
                    rid, status, g_web_lang, data];
    dispatch_async(dispatch_get_main_queue(), ^{ if (g_popup == p) [p.web evaluateJavaScript:js completionHandler:nil]; });
}
static void popup_ask(CKPopup *p, long long rid, NSString *path) {
    if (!g_web_api || !g_web_user || !g_web_key) { popup_reply(p, rid, 1, @"null"); return; }
    NSMutableURLRequest *rq = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:[g_web_api stringByAppendingString:path]]];
    rq.timeoutInterval = 8;
    [rq setValue:[@"Bearer " stringByAppendingString:g_web_key] forHTTPHeaderField:@"Authorization"];
    [rq setValue:g_web_user forHTTPHeaderField:@"X-CK-User"];
    [rq setValue:[g_web_lang isEqualToString:@"zh"] ? @"cn" : @"en" forHTTPHeaderField:@"X-CK-Lang"];
    [[NSURLSession.sharedSession dataTaskWithRequest:rq completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) {
        long status = [r isKindOfClass:NSHTTPURLResponse.class] ? (long)((NSHTTPURLResponse *)r).statusCode : 0;
        NSString *body = @"null";
        if (status && status < 400 && d.length && [NSJSONSerialization JSONObjectWithData:d options:NSJSONReadingFragmentsAllowed error:nil])
            body = [[NSString alloc] initWithData:d encoding:NSUTF8StringEncoding] ?: @"null";
        popup_reply(p, rid, status, body);
    }] resume];
}
@implementation CKPopup
- (void)userContentController:(WKUserContentController *)uc didReceiveScriptMessage:(WKScriptMessage *)msg {
    NSData *d = [msg.body isKindOfClass:NSString.class] ? [(NSString *)msg.body dataUsingEncoding:NSUTF8StringEncoding] : nil;
    NSDictionary *m = d ? [NSJSONSerialization JSONObjectWithData:d options:0 error:nil] : nil;
    if (![m isKindOfClass:NSDictionary.class] || g_popup != self) return;
    long long rid = [m[@"id"] respondsToSelector:@selector(longLongValue)] ? [m[@"id"] longLongValue] : 0;
    NSString *op = [m[@"op"] isKindOfClass:NSString.class] ? m[@"op"] : @"";
    NSString *arg = [m[@"name"] isKindOfClass:NSString.class] ? m[@"name"] : nil;
    if ([op isEqualToString:@"ready"]) self.web.alpha = 1;
    else if ([op isEqualToString:@"close"]) popup_close();
    else if ([op isEqualToString:@"state"]) popup_ask(self, rid, self.api);
    else if ([op isEqualToString:@"submit"] && arg && arg.length <= 40)
        popup_ask(self, rid, [self.api stringByAppendingFormat:@"?name=%@",
                              [arg stringByAddingPercentEncodingWithAllowedCharacters:NSCharacterSet.alphanumericCharacterSet]]);
    else popup_reply(self, rid, 400, @"null");
}
@end

static void popup_open(NSString *name) {        // main thread
    NSDictionary *api = @{@"rename": @"/launcher/rename", @"mapvote": @"/launcher/mapvote"};
    NSDictionary *size = @{@"rename": @[@0.60, @0.24], @"mapvote": @[@0.70, @0.80]};      // as ckweb.cs / WebPanels.java
    if (!api[name] || g_popup || !g_game_view || !g_web_game) return;
    if (![NSFileManager.defaultManager fileExistsAtPath:[g_web_game stringByAppendingFormat:@"/web/%@/index.html", name]]) return;
    CKPopup *p = [[CKPopup alloc] init];
    p.api = api[name];
    p.web = web_new(p);
    p.web.alpha = 0;
    CGSize S = g_game_view.bounds.size;
    CGFloat w = floor(S.width * [size[name][0] doubleValue]), h = floor(S.height * [size[name][1] doubleValue]);
    p.web.frame = CGRectMake((S.width - w) / 2, (S.height - h) / 2, w, h);
    [g_game_view addSubview:p.web];
    g_popup = p;
    web_load_local(p.web, [NSString stringWithFormat:@"web/%@/index.html%@", name, [g_web_lang isEqualToString:@"zh"] ? @"?lang=zh" : @""]);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{ if (g_popup == p) p.web.alpha = 1; });
}

// ---- room voice chat (12 Nov 2026, the user: "no microphone voice on ios, fix it"): Android's VoiceChat.java -- the
// launcher's voice-page.js (image/voice-page.js, the APK asset) in a hidden WKWebView does the WebRTC peer audio; the
// server poll below is the switchboard (room, who has voice on, connection setup messages). The microphone is asked
// when the page first needs it (voice switched on in a room); refused = still hears the room.
// shortcut: STUN only like the launcher, no TURN relay -- players behind blocking NATs hear nobody
static NSString *const VOICE_ICE = @"[{\"urls\":[\"stun:stun.cloudflare.com:3478\",\"stun:stun.l.google.com:19302\"]},{\"urls\":\"stun:stun.miwifi.com:3478\"}]";
static NSString *const VOICE_BRIDGE = @"window.voice={onState:function(f){window.__ckState=f;},"
    "signal:function(to,data){window.webkit.messageHandlers.ckvoice.postMessage(JSON.stringify({op:'signal',body:JSON.stringify({to:to,data:data})}));return Promise.resolve(true);},"
    "status:function(t){window.webkit.messageHandlers.ckvoice.postMessage(JSON.stringify({op:'status',body:String(t)}));},"
    "speak:function(on){window.webkit.messageHandlers.ckvoice.postMessage(JSON.stringify({op:'speak',body:on?'{\"on\":true}':'{\"on\":false}'}));}};";
@interface CKVoice : NSObject <WKScriptMessageHandler, WKUIDelegate>
@property (nonatomic, strong) WKWebView *web;
@end
static CKVoice *g_voice;
static dispatch_queue_t g_voice_posts;           // setup messages in order
static void voice_post(NSString *path, NSString *body) {
    if (!g_web_api || !g_web_user || !g_web_key) return;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ g_voice_posts = dispatch_queue_create("ck2voice.posts", DISPATCH_QUEUE_SERIAL); });
    dispatch_async(g_voice_posts, ^{
        NSMutableURLRequest *rq = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:[g_web_api stringByAppendingString:path]]];
        rq.HTTPMethod = @"POST";
        rq.timeoutInterval = 8;
        rq.HTTPBody = [body dataUsingEncoding:NSUTF8StringEncoding];
        [rq setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
        [rq setValue:[@"Bearer " stringByAppendingString:g_web_key] forHTTPHeaderField:@"Authorization"];
        [rq setValue:g_web_user forHTTPHeaderField:@"X-CK-User"];
        dispatch_semaphore_t done = dispatch_semaphore_create(0);
        [[NSURLSession.sharedSession dataTaskWithRequest:rq completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) { dispatch_semaphore_signal(done); }] resume];
        dispatch_semaphore_wait(done, dispatch_time(DISPATCH_TIME_NOW, (int64_t)10 * NSEC_PER_SEC));
    });
}
@implementation CKVoice
- (void)userContentController:(WKUserContentController *)uc didReceiveScriptMessage:(WKScriptMessage *)msg {
    NSData *d = [msg.body isKindOfClass:NSString.class] ? [(NSString *)msg.body dataUsingEncoding:NSUTF8StringEncoding] : nil;
    NSDictionary *m = d ? [NSJSONSerialization JSONObjectWithData:d options:0 error:nil] : nil;
    if (![m isKindOfClass:NSDictionary.class] || ![m[@"op"] isKindOfClass:NSString.class] || ![m[@"body"] isKindOfClass:NSString.class]) return;
    NSString *op = m[@"op"], *body = m[@"body"];
    if ([op isEqualToString:@"signal"]) voice_post(@"/launcher/voice/signal", body);
    else if ([op isEqualToString:@"speak"]) voice_post(@"/launcher/voice/speak", body);
    else if ([op isEqualToString:@"status"] && body.length) fprintf(stderr, "ck2voice: %s\n", body.UTF8String);
}
// iOS 15+: the page's microphone request gets no second (WebKit) prompt; iOS asks once itself (NSMicrophoneUsageDescription)
- (void)webView:(WKWebView *)w requestMediaCapturePermissionForOrigin:(WKSecurityOrigin *)o initiatedByFrame:(WKFrameInfo *)f
           type:(WKMediaCaptureType)type decisionHandler:(void (^)(WKPermissionDecision))decide API_AVAILABLE(ios(15.0)) {
    decide(type == WKMediaCaptureTypeMicrophone ? WKPermissionDecisionGrant : WKPermissionDecisionDeny);
}
@end
static void voice_mic_session(void) {            // main thread, once voice is on: record + play, game sound stays on the speaker
    static BOOL done;
    if (done) return;
    done = YES;
    NSError *e = nil;
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayAndRecord
        withOptions:AVAudioSessionCategoryOptionDefaultToSpeaker | AVAudioSessionCategoryOptionMixWithOthers |
                    AVAudioSessionCategoryOptionAllowBluetooth | AVAudioSessionCategoryOptionAllowBluetoothA2DP error:&e];
    [[AVAudioSession sharedInstance] setActive:YES error:nil];
    if (e) fprintf(stderr, "ck2voice: audio session: %s\n", e.localizedDescription.UTF8String);
}
static void voice_state(NSDictionary *st) {      // main thread: the poll's answer to the page
    if (!g_game_view) return;
    if (!g_voice) {
        NSString *page = [NSString stringWithContentsOfFile:[NSBundle.mainBundle.bundlePath stringByAppendingPathComponent:@"image/voice-page.js"]
                                                   encoding:NSUTF8StringEncoding error:nil];
        if (!page) return;
        CKVoice *v = [[CKVoice alloc] init];
        WKWebViewConfiguration *cfg = [[WKWebViewConfiguration alloc] init];
        cfg.allowsInlineMediaPlayback = YES;
        cfg.mediaTypesRequiringUserActionForPlayback = WKAudiovisualMediaTypeNone;
        [cfg.userContentController addUserScript:[[WKUserScript alloc] initWithSource:VOICE_BRIDGE
            injectionTime:WKUserScriptInjectionTimeAtDocumentStart forMainFrameOnly:YES]];
        [cfg.userContentController addScriptMessageHandler:v name:@"ckvoice"];
        v.web = [[WKWebView alloc] initWithFrame:CGRectMake(0, 0, 2, 2) configuration:cfg];
        v.web.UIDelegate = v;
        v.web.alpha = 0.02;                      // in the window (an off-window view gets its timers / media paused), not seen
        v.web.userInteractionEnabled = NO;
        [g_game_view addSubview:v.web];
        // an https origin: getUserMedia needs a secure context
        [v.web loadHTMLString:[NSString stringWithFormat:@"<!doctype html><html><head><meta charset=\"utf-8\"></head><body><script>%@</script></body></html>", page]
                      baseURL:[NSURL URLWithString:@"https://voice.ck2.local/"]];
        g_voice = v;
    }
    if ([st[@"on"] respondsToSelector:@selector(boolValue)] && [st[@"on"] boolValue]) voice_mic_session();
    NSMutableDictionary *m = [st mutableCopy];
    m[@"ice"] = [NSJSONSerialization JSONObjectWithData:[VOICE_ICE dataUsingEncoding:NSUTF8StringEncoding] options:0 error:nil];
    m[@"audio"] = @{@"noise": @"standard", @"voiceVolume": @100, @"micVolume": @100};   // no RNNoise files in the app
    NSData *j = [NSJSONSerialization dataWithJSONObject:m options:0 error:nil];
    if (!j) return;
    NSString *js = [NSString stringWithFormat:@"window.__ckState&&window.__ckState(%@)", [[NSString alloc] initWithData:j encoding:NSUTF8StringEncoding]];
    [g_voice.web evaluateJavaScript:js completionHandler:nil];
}

static void popup_poll(void) {                   // its own thread, for the whole game
    NSString *rev = @"";
    for (;;) {
        if (!g_web_api || !g_web_user || !g_web_key) { sleep(5); continue; }
        NSString *q = [rev stringByAddingPercentEncodingWithAllowedCharacters:NSCharacterSet.alphanumericCharacterSet] ?: @"";
        NSMutableURLRequest *rq = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:[g_web_api stringByAppendingFormat:@"/launcher/voice?since=%@", q]]];
        rq.timeoutInterval = 45;                 // the server answers within 25 s
        [rq setValue:[@"Bearer " stringByAppendingString:g_web_key] forHTTPHeaderField:@"Authorization"];
        [rq setValue:g_web_user forHTTPHeaderField:@"X-CK-User"];
        [rq setValue:[g_web_lang isEqualToString:@"zh"] ? @"cn" : @"en" forHTTPHeaderField:@"X-CK-Lang"];
        NSUserDefaults *ud = NSUserDefaults.standardUserDefaults;        // Settings > Game (the server reads them from this poll)
        [rq setValue:[ud stringForKey:@"ping"] ?: @"room,race" forHTTPHeaderField:@"X-CK-Ping"];
        [rq setValue:([ud objectForKey:@"accessories"] ? [ud boolForKey:@"accessories"] : YES) ? @"on" : @"off" forHTTPHeaderField:@"X-CK-Accessories"];
        dispatch_semaphore_t done = dispatch_semaphore_create(0);
        __block long status = 0;
        __block NSData *body = nil;
        [[NSURLSession.sharedSession dataTaskWithRequest:rq completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) {
            status = [r isKindOfClass:NSHTTPURLResponse.class] ? (long)((NSHTTPURLResponse *)r).statusCode : 0;
            body = d;
            dispatch_semaphore_signal(done);
        }] resume];
        dispatch_semaphore_wait(done, DISPATCH_TIME_FOREVER);
        if (status == 401) { sleep(30); continue; }            // sign in again
        if (status == 404) { sleep(60); continue; }            // a server without the poll
        NSDictionary *st = status == 200 && body ? [NSJSONSerialization JSONObjectWithData:body options:0 error:nil] : nil;
        if (![st isKindOfClass:NSDictionary.class]) { sleep(3); continue; }      // restarting, connection lost
        if ([st[@"rev"] isKindOfClass:NSString.class]) rev = st[@"rev"];
        NSString *name = [st[@"popup"] isKindOfClass:NSString.class] ? st[@"popup"] : nil;
        if (name.length) dispatch_async(dispatch_get_main_queue(), ^{ popup_open(name); });
        dispatch_async(dispatch_get_main_queue(), ^{ voice_state(st); });
    }
}
static void popup_poll_start(void) {
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        [[[NSThread alloc] initWithBlock:^{ popup_poll(); }] start];
    });
}

// ---- the launcher: sign-in like the PC launcher (Launcher/login.js, LoginActivity.java) -------------------------------
static NSString *const HOSTS[] = {@"201.18.200.6", @"8.210.188.242"};
static NSString *const API[] = {@"https://api-in.crazykartlegacy.com", @"https://api-hk.crazykartlegacy.com"};
static unsigned char DEC[256], ENC[256];
static void wire_init(void) {
    for (int b = 0; b < 256; b++) { int x = (b ^ 0x5e) & 0xff, p = ((x << 2) | (x >> 6)) & 0xff; DEC[b] = (unsigned char)p; ENC[p] = (unsigned char)b; }
}
static int read_full(int fd, unsigned char *b, int n) {
    int o = 0;
    while (o < n) { ssize_t r = recv(fd, b + o, (size_t)(n - o), 0); if (r <= 0) return 0; o += (int)r; }
    return 1;
}
// op 0x6F01 account + password -> 30-day launcher key; 0x6F03 account + key -> one-time game pass. nil + *err on failure.
static NSDictionary *wire_request(NSString *host, NSString *account, NSString *secret, int op, NSString **err) {
    NSMutableData *body = [NSMutableData data];
    unsigned char hdr[11] = {(unsigned char)(op & 0xff), (unsigned char)(op >> 8)};
    [body appendBytes:hdr length:11];
    NSString *hw = [NSString stringWithFormat:@"ios-%@|", UIDevice.currentDevice.identifierForVendor.UUIDString ?: @"unknown"];
    for (NSString *s in @[account, secret, hw]) {
        NSData *d = s == account ? [s dataUsingEncoding:NSUTF8StringEncoding] : [s dataUsingEncoding:NSISOLatin1StringEncoding];
        [body appendData:d ?: [NSData data]];
        unsigned char z = 0; [body appendBytes:&z length:1];
    }
    int n = (int)body.length + 2;
    unsigned char *frame = malloc((size_t)n);
    frame[0] = (unsigned char)(n & 0xff); frame[1] = (unsigned char)(n >> 8);
    for (int i = 0; i < (int)body.length; i++) frame[2 + i] = ENC[((const unsigned char *)body.bytes)[i]];
    struct addrinfo hints = {0}, *ai = 0;
    hints.ai_family = AF_INET; hints.ai_socktype = SOCK_STREAM;
    int fd = -1;
    if (getaddrinfo(host.UTF8String, "6910", &hints, &ai) == 0) {
        fd = socket(ai->ai_family, ai->ai_socktype, 0);
        struct timeval tv = {8, 0};
        setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof tv); setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof tv);
        if (connect(fd, ai->ai_addr, ai->ai_addrlen) != 0) { close(fd); fd = -1; }
        freeaddrinfo(ai);
    }
    if (fd < 0) { free(frame); *err = @"Cannot reach the server."; return nil; }
    send(fd, frame, (size_t)n, 0);
    free(frame);
    unsigned char h2[2];
    NSDictionary *out = nil;
    if (read_full(fd, h2, 2)) {
        int len = h2[0] | (h2[1] << 8);
        if (len >= 12) {
            unsigned char *p = malloc((size_t)len);
            if (read_full(fd, p, len - 2)) {
                int m = len - 2;
                for (int i = 0; i < m; i++) p[i] = DEC[p[i]];
                int rop = p[0] | (p[1] << 8), res = p[2] | (p[3] << 8);
                if (rop != 0x6f02) *err = @"Unexpected answer from the game server.";
                else if (res != 0) *err = res == 2 ? @"Wrong account or password." : res == 3 ? @"Enter your account and password."
                    : res == 12 ? @"This account is banned for cheating." : [NSString stringWithFormat:@"Sign-in refused (code %d).", res];
                else {
                    int a = 10; while (a < m && p[a]) a++;
                    int b = a + 1; while (b < m && p[b]) b++;
                    unsigned long long k = 0;
                    if (b + 9 <= m) for (int i = 7; i >= 0; i--) k = (k << 8) | p[b + 1 + i];
                    out = @{@"pass": [[NSString alloc] initWithBytes:p + 10 length:(NSUInteger)(a - 10) encoding:NSUTF8StringEncoding] ?: @"",
                            @"nick": (b <= m ? [[NSString alloc] initWithBytes:p + a + 1 length:(NSUInteger)(b - a - 1) encoding:NSUTF8StringEncoding] : nil) ?: @"",
                            @"key": [NSString stringWithFormat:@"%llu", k]};
                }
            }
            free(p);
        } else *err = @"Unexpected answer from the game server.";
    } else *err = @"No answer from the game server.";
    close(fd);
    return out;
}

static NSString *docs(void) { return NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject; }
static NSString *bundle_image(void) { return [NSBundle.mainBundle.resourcePath stringByAppendingPathComponent:@"image"]; }

// CrazyKart.ini [Option] key=value (the game's own settings file)
static NSString *ini_set(NSString *ini, NSString *key, int v) {
    NSString *line = [NSString stringWithFormat:@"%@=%d", key, v];
    NSRegularExpression *re = [NSRegularExpression regularExpressionWithPattern:[NSString stringWithFormat:@"(?m)^%@=.*$", key] options:0 error:nil];
    if ([re firstMatchInString:ini options:0 range:NSMakeRange(0, ini.length)])
        return [re stringByReplacingMatchesInString:ini options:0 range:NSMakeRange(0, ini.length) withTemplate:line];
    NSRange r = [ini rangeOfString:@"[Option]"];
    if (r.location == NSNotFound) return [ini stringByAppendingFormat:@"\r\n[Option]\r\n%@\r\n", line];
    NSRange eol = [ini rangeOfString:@"\n" options:0 range:NSMakeRange(r.location, ini.length - r.location)];
    if (eol.location == NSNotFound) return [ini stringByAppendingFormat:@"\r\n%@", line];
    return [NSString stringWithFormat:@"%@%@\r\n%@", [ini substringToIndex:eol.location + 1], line, [ini substringFromIndex:eol.location + 1]];
}

// the dashboard's shop (ShopSync.java / Launcher/shop-sync.js): data/config + CN/data/config shopconfig.xml
static BOOL is_shop(NSData *d) {
    if (d.length < 64 || d.length > (16u << 20)) return NO;
    NSString *head = [[NSString alloc] initWithBytes:d.bytes length:16 encoding:NSISOLatin1StringEncoding];
    return [head containsString:@"<?xml"] && [d rangeOfData:[@"<AllCars" dataUsingEncoding:NSASCIIStringEncoding] options:0 range:NSMakeRange(0, d.length)].location != NSNotFound
        && [d rangeOfData:[@"</AllCarProps>" dataUsingEncoding:NSASCIIStringEncoding] options:0 range:NSMakeRange(0, d.length)].location != NSNotFound;
}
static void shop_sync(NSString *game, NSString *api) {
    NSArray *shops = @[@[@"data/config/shopconfig.xml", @""], @[@"CN/data/config/shopconfig.xml", @"?lang=cn"]];
    for (NSUInteger i = 0; i < shops.count; i++) {
        NSString *cached = [docs() stringByAppendingPathComponent:[NSString stringWithFormat:@"shop-%lu-%@.xml", (unsigned long)[api hash], i ? @"cn" : @"en"]];
        NSString *etagf = [cached stringByAppendingString:@".etag"];
        NSData *old = [NSData dataWithContentsOfFile:cached], *body = nil;
        NSMutableURLRequest *rq = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:[api stringByAppendingFormat:@"/launcher/shopconfig%@", shops[i][1]]]];
        rq.timeoutInterval = 8;
        NSString *et = [NSString stringWithContentsOfFile:etagf encoding:NSISOLatin1StringEncoding error:nil];
        if (et && is_shop(old)) [rq setValue:et forHTTPHeaderField:@"If-None-Match"];
        dispatch_semaphore_t sem = dispatch_semaphore_create(0);
        __block NSData *got = nil; __block NSHTTPURLResponse *resp = nil;
        [[NSURLSession.sharedSession dataTaskWithRequest:rq completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) {
            got = d; resp = (NSHTTPURLResponse *)r; dispatch_semaphore_signal(sem); }] resume];
        dispatch_semaphore_wait(sem, dispatch_time(DISPATCH_TIME_NOW, 12 * NSEC_PER_SEC));
        if (resp.statusCode == 304 && is_shop(old)) body = old;
        else if (resp.statusCode == 200 && is_shop(got)) {
            body = got;
            [[NSFileManager defaultManager] removeItemAtPath:etagf error:nil];
            [got writeToFile:cached atomically:YES];
            NSString *tag = resp.allHeaderFields[@"Etag"] ?: resp.allHeaderFields[@"ETag"];
            if (tag.length) [tag writeToFile:etagf atomically:YES encoding:NSISOLatin1StringEncoding error:nil];
        } else if (is_shop(old)) body = old;                        // offline: the last good copy
        NSString *target = [game stringByAppendingPathComponent:shops[i][0]];
        if (body && [[NSFileManager defaultManager] fileExistsAtPath:target]) [body writeToFile:target atomically:YES];
    }
}

// ---- keyboards and controllers: bindings + chat macros (Controls.java on Android, same prefs names and file). Each game
// action has one keyboard key and one controller button (or stick / trigger direction); each of the 9 chat macros
// a key or a two-button combination. Codes: Android key codes; a stick / d-pad / trigger direction is
// 1000 + axis * 2 + (1 if positive). Written to <Documents>/controls.txt at every Play (input.c reads it).
#define CT_N 9
#define CT_MACROS 9
static NSString *const CT_ID[CT_N] = {@"throttle", @"reverse", @"left", @"right", @"item", @"switch", @"drift", @"chat", @"menu"};
static NSString *const CT_EN[CT_N] = {@"Accelerate", @"Brake / reverse", @"Steer left", @"Steer right", @"Use item", @"Switch item", @"Drift", @"Chat", @"Menu (Esc)"};
static NSString *const CT_ZH[CT_N] = {@"加速", @"刹车 / 倒车", @"左转", @"右转", @"使用道具", @"切换道具", @"漂移", @"聊天", @"菜单 (Esc)"};
static const int CT_VK[CT_N] = {0x26, 0x28, 0x25, 0x27, 0x11, 0x20, 0x10, 0x0d, 0x1b};
static const int CT_KB[CT_N] = {19, 20, 21, 22, 113, 62, 59, 66, 111};             // arrows, Ctrl, Space, Shift, Enter, Esc
static const int CT_PAD[CT_N] = {96, 97, 1000, 1001, 99, 100, 103, 109, 108};       // A, B, L stick, X, Y, RB, Select, Start
// always on besides the player's choice: d-pad steers, the triggers drive (any controller works out of the box)
static const int CT_EXTRA[][2] = {{1037, 0}, {1045, 0}, {1035, 1}, {1047, 1}, {1030, 2}, {1031, 3}, {1032, 0}, {1033, 1}};

static int ct_kb(int i) { id v = [NSUserDefaults.standardUserDefaults objectForKey:[@"kb_" stringByAppendingString:CT_ID[i]]]; return v ? [v intValue] : CT_KB[i]; }
static int ct_pad(int i) { id v = [NSUserDefaults.standardUserDefaults objectForKey:[@"pad_" stringByAppendingString:CT_ID[i]]]; return v ? [v intValue] : CT_PAD[i]; }
static NSArray<NSNumber *> *ct_macro(int slot) {
    NSString *s = [NSUserDefaults.standardUserDefaults stringForKey:[NSString stringWithFormat:@"macro_%d", slot]];
    NSMutableArray *r = [NSMutableArray array];
    for (NSString *f in [s componentsSeparatedByString:@"+"]) if (f.intValue > 0 && r.count < 2) [r addObject:@(f.intValue)];
    return r;
}

static void write_controls(NSString *dir) {
    NSMutableString *b = [NSMutableString stringWithString:@"# Controls (plat_ios.m ControlsVC)\n"];
    for (int i = 0; i < CT_N; i++) {
        if (ct_kb(i) > 0) [b appendFormat:@"bind %d %d\n", ct_kb(i), CT_VK[i]];
        if (ct_pad(i) > 0) [b appendFormat:@"bind %d %d\n", ct_pad(i), i == 7 ? -1 : CT_VK[i]];   // chat on a controller: + text box
    }
    for (unsigned i = 0; i < sizeof CT_EXTRA / sizeof CT_EXTRA[0]; i++) [b appendFormat:@"bind %d %d\n", CT_EXTRA[i][0], CT_VK[CT_EXTRA[i][1]]];
    for (int s = 0; s < CT_MACROS; s++) {
        NSArray *m = ct_macro(s);
        if (!m.count) continue;
        [b appendFormat:@"macro %d", s];
        for (NSNumber *c in m) [b appendFormat:@" %d", c.intValue];
        [b appendString:@"\n"];
    }
    [b writeToFile:[dir stringByAppendingPathComponent:@"controls.txt"] atomically:YES encoding:NSUTF8StringEncoding error:nil];
}

static NSString *ct_name(int code, BOOL zh) {
    if (code <= 0) return zh ? @"无" : @"None";
    if (code >= 1000) {
        int a = (code - 1000) / 2; BOOL pos = code & 1;
        switch (a) {
        case 0: return [(zh ? @"左摇杆 " : @"L stick ") stringByAppendingString:pos ? @"→" : @"←"];
        case 1: return [(zh ? @"左摇杆 " : @"L stick ") stringByAppendingString:pos ? @"↓" : @"↑"];
        case 11: return [(zh ? @"右摇杆 " : @"R stick ") stringByAppendingString:pos ? @"→" : @"←"];
        case 14: return [(zh ? @"右摇杆 " : @"R stick ") stringByAppendingString:pos ? @"↓" : @"↑"];
        case 15: return [(zh ? @"方向键 " : @"D-pad ") stringByAppendingString:pos ? @"→" : @"←"];
        case 16: return [(zh ? @"方向键 " : @"D-pad ") stringByAppendingString:pos ? @"↓" : @"↑"];
        case 17: case 23: return @"LT";
        case 18: case 22: return @"RT";
        }
        return [NSString stringWithFormat:@"Axis %d%@", a, pos ? @"+" : @"-"];
    }
    if (code >= 29 && code <= 54) return [NSString stringWithFormat:@"%c", 'A' + code - 29];
    if (code >= 7 && code <= 16) return [NSString stringWithFormat:@"%c", '0' + code - 7];
    if (code >= 131 && code <= 142) return [NSString stringWithFormat:@"F%d", code - 130];
    switch (code) {
    case 19: return @"↑"; case 20: return @"↓"; case 21: return @"←"; case 22: return @"→";
    case 96: return @"Ⓐ"; case 97: return @"Ⓑ"; case 99: return @"Ⓧ"; case 100: return @"Ⓨ";
    case 102: return @"LB"; case 103: return @"RB"; case 104: return @"LT"; case 105: return @"RT";
    case 106: return @"L3"; case 107: return @"R3"; case 108: return @"Start"; case 109: return @"Select";
    case 113: case 114: return @"Ctrl"; case 59: case 60: return @"Shift"; case 111: return @"Esc";
    case 66: return @"Enter"; case 62: return @"Space"; case 67: return @"Backspace"; case 61: return @"Tab";
    }
    return [NSString stringWithFormat:@"Key %d", code];
}
static NSString *ct_combo(NSArray<NSNumber *> *c, BOOL zh) {
    if (!c.count) return zh ? @"无按键" : @"No key";
    NSMutableArray *n = [NSMutableArray array];
    for (NSNumber *x in c) [n addObject:ct_name(x.intValue, zh)];
    return [n componentsJoinedByString:@" + "];
}


static UIColor *rgb(unsigned v) { return [UIColor colorWithRed:((v >> 16) & 255) / 255.0 green:((v >> 8) & 255) / 255.0 blue:(v & 255) / 255.0 alpha:1]; }
// ---- race HUD layout editor (HudEditorActivity.java on Android): every HUD element and touch button on a plain screen,
// drawn with the game's own pictures (<game>/hudshots/<name>.rgba, taken by the game in the first race, hud.c; touch
// buttons: image/touch_<name>.png). Tap an item, then slide it; two fingers or the Size slider resize it.
// Elements: image/hud_elements.txt (shared with hud.c). Result: <game>/hud_layout.txt "name x y scale" (1280x720 pixels).
static const CGFloat HGW = 1280, HGH = 720;

@interface HudElem : NSObject
@property (copy) NSString *name, *label;
@property CGFloat sx, sy, sw, sh, x, y, s;
@property BOOL touch;
@property (strong) UIImage *pic;
@end
@implementation HudElem
@end

// <u32 w><u32 h> premultiplied RGBA rows (hud.c shot_save)
static UIImage *hud_rgba(NSData *d) {
    if (d.length < 8) return nil;
    const uint32_t *h = d.bytes;
    size_t w = h[0], ht = h[1];
    if (!w || !ht || w > 4096 || ht > 4096 || d.length < 8 + w * ht * 4) return nil;
    CGColorSpaceRef cs = CGColorSpaceCreateDeviceRGB();
    CGDataProviderRef dp = CGDataProviderCreateWithCFData((__bridge CFDataRef)[d subdataWithRange:NSMakeRange(8, w * ht * 4)]);
    CGImageRef img = CGImageCreate(w, ht, 8, 32, w * 4, cs, (CGBitmapInfo)kCGImageAlphaPremultipliedLast, dp, NULL, YES, kCGRenderingIntentDefault);
    UIImage *u = img ? [UIImage imageWithCGImage:img] : nil;
    if (img) CGImageRelease(img);
    CGDataProviderRelease(dp); CGColorSpaceRelease(cs);
    return u;
}

// ---- the launcher design's building blocks (12 Nov 2026, the Claude design canvas "CrazyKart Legacy Mobile Launcher"),
// shared by the launcher, Settings and the HUD editor: buttons / sliders that run a block, the design's faces (the system's
// rounded face stands in for Baloo 2), its line icons and the "step" shadow under buttons (box-shadow: 0 Npt 0)
#define C_SLAB 0x0E1F5C
#define C_INK 0x131A2E
#define C_YELLOW 0xF5C21B
#define C_DEEP 0xC98F00
#define C_MUTED 0xB7C4E8
#define C_ERROR 0xFFAB8F
#define C_PAPER 0xF2F8FC
#define C_LINE 0xCFDEEA
#define C_RAIL 0xE3EEF6
#define C_SUB 0x4A5870
#define C_EDGE 0x7A8EA3
#define C_BLUE 0x1A4FD6
#define C_PILL_ON 0xFFF4CC
#define C_GOLD 0xD4A72C
#define C_NIGHT 0x0A1436

@interface CKButton : UIButton
@property (copy) void (^tap)(CKButton *b);
@end
@implementation CKButton
- (void)fire { if (self.tap) self.tap(self); }
@end
static CKButton *ck_button(void (^tap)(CKButton *)) {
    CKButton *b = [CKButton buttonWithType:UIButtonTypeCustom];
    b.tap = tap;
    [b addTarget:b action:@selector(fire) forControlEvents:UIControlEventTouchUpInside];
    return b;
}
@interface CKSlider : UISlider
@property (copy) void (^moved)(CKSlider *s);
@end
@implementation CKSlider
- (void)fire { if (self.moved) self.moved(self); }
@end
static CKSlider *ck_slider(float lo, float hi, float v, unsigned tint, void (^moved)(CKSlider *)) {
    CKSlider *s = [[CKSlider alloc] init];
    s.minimumValue = lo; s.maximumValue = hi; s.value = v; s.minimumTrackTintColor = rgb(tint);
    s.moved = moved;
    [s addTarget:s action:@selector(fire) forControlEvents:UIControlEventValueChanged];
    return s;
}
static UIFont *f_disp(CGFloat s, UIFontWeight w) {
    UIFont *f = [UIFont systemFontOfSize:s weight:w];
    UIFontDescriptor *d = [f.fontDescriptor fontDescriptorWithDesign:UIFontDescriptorSystemDesignRounded];
    return d ? [UIFont fontWithDescriptor:d size:s] : f;
}
static UIFont *f_body(CGFloat s, UIFontWeight w) { return [UIFont systemFontOfSize:s weight:w]; }
static UILabel *ck_label(NSString *t, UIFont *f, unsigned c) {
    UILabel *l = [[UILabel alloc] init];
    l.text = t; l.font = f; l.textColor = rgb(c);
    return l;
}
static unsigned mixu(unsigned a, unsigned b, CGFloat k) {
    unsigned r = 0;
    for (int s = 0; s <= 16; s += 8) {
        CGFloat x = (CGFloat)((a >> s) & 255) + ((CGFloat)((b >> s) & 255) - (CGFloat)((a >> s) & 255)) * k;
        r |= (unsigned)lround(x) << s;
    }
    return r;
}
static void step_shadow(UIView *v, unsigned c, CGFloat h) {
    v.layer.shadowColor = rgb(c).CGColor; v.layer.shadowOffset = CGSizeMake(0, h); v.layer.shadowRadius = 0; v.layer.shadowOpacity = 1;
}
static void ck_box(UIView *v, UIColor *fill, UIColor *border, CGFloat bw, CGFloat radius) {
    v.backgroundColor = fill; v.layer.cornerRadius = radius;
    v.layer.borderWidth = border ? bw : 0; v.layer.borderColor = border.CGColor;
}
static void fix_h(UIView *v, CGFloat h) { [v.heightAnchor constraintEqualToConstant:h].active = YES; }
static void fix_w(UIView *v, CGFloat w) { [v.widthAnchor constraintEqualToConstant:w].active = YES; }
static UIStackView *hstack(NSArray *views, CGFloat sp) {
    UIStackView *s = [[UIStackView alloc] initWithArrangedSubviews:views];
    s.spacing = sp; s.alignment = UIStackViewAlignmentCenter;
    return s;
}
static UIStackView *vstack(NSArray *views, CGFloat sp) {
    UIStackView *s = [[UIStackView alloc] initWithArrangedSubviews:views];
    s.axis = UILayoutConstraintAxisVertical; s.spacing = sp;
    return s;
}
// a labelled pill button: text (+ icon) centred, the given fill / border / step shadow; radius = half the height
static CKButton *ck_pill(NSString *t, UIFont *f, unsigned fg, UIColor *fill, UIColor *border, CGFloat h, void (^tap)(CKButton *)) {
    CKButton *b = ck_button(tap);
    [b setTitle:t forState:UIControlStateNormal];
    b.titleLabel.font = f;
    [b setTitleColor:rgb(fg) forState:UIControlStateNormal];
    ck_box(b, fill, border, 1, h / 2);
    b.contentEdgeInsets = UIEdgeInsetsMake(0, 16, 0, 16);
    fix_h(b, h);
    return b;
}
static CKButton *ck_yellow(NSString *t, CGFloat size, CGFloat h, void (^tap)(CKButton *)) {
    CKButton *b = ck_pill(t, f_disp(size, UIFontWeightHeavy), C_INK, rgb(C_YELLOW), nil, h, tap);
    step_shadow(b, C_DEEP, 4);
    return b;
}
static CKButton *ck_light(NSString *t, void (^tap)(CKButton *)) {
    CKButton *b = ck_pill(t, f_disp(15, UIFontWeightBold), C_INK, UIColor.whiteColor, rgb(C_EDGE), 44, tap);
    step_shadow(b, C_LINE, 3);
    return b;
}
// diagonal stripes on a ground colour (the design's repeating-linear-gradient), as a pattern colour
static UIColor *stripes(unsigned bg, UIColor *ink, CGFloat period) {
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:CGSizeMake(period, period)];
    UIImage *tile = [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        [rgb(bg) setFill]; UIRectFill(CGRectMake(0, 0, period, period));
        [ink setStroke];
        for (int i = -1; i <= 1; i++) {
            UIBezierPath *p = [UIBezierPath bezierPath];
            p.lineWidth = period / 2.0 / 1.41421356;
            [p moveToPoint:CGPointMake(i * period, period)]; [p addLineToPoint:CGPointMake(i * period + period, 0)];
            [p stroke];
        }
    }];
    return [UIColor colorWithPatternImage:tile];
}
// the launcher's checker strip: ink and white squares
static UIColor *checker(CGFloat sq) {
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:CGSizeMake(sq * 2, sq * 2)];
    UIImage *tile = [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        [rgb(C_INK) setFill]; UIRectFill(CGRectMake(0, 0, sq * 2, sq * 2));
        [UIColor.whiteColor setFill]; UIRectFill(CGRectMake(sq, 0, sq, sq)); UIRectFill(CGRectMake(0, sq, sq, sq));
    }];
    return [UIColor colorWithPatternImage:tile];
}
enum { IC_PLAY, IC_CHEV_UP, IC_CHEV_DOWN, IC_CHECK, IC_SERVER, IC_GEAR, IC_EYE, IC_EYE_OFF, IC_CLOSE, IC_PAD, IC_KEYBOARD, IC_MOVE, IC_GALLERY, IC_GLOBE };
// the design's line icons, drawn on a 24-unit grid
static UIImage *ck_icon(int kind, unsigned colour, CGFloat size) {
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:CGSizeMake(size, size)];
    return [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        CGContextScaleCTM(ctx.CGContext, size / 24, size / 24);
        [rgb(colour) setStroke]; [rgb(colour) setFill];
        UIBezierPath *p = [UIBezierPath bezierPath];
        p.lineWidth = 2; p.lineCapStyle = kCGLineCapRound; p.lineJoinStyle = kCGLineJoinRound;
        #define M(x, y) [p moveToPoint:CGPointMake(x, y)]
        #define L(x, y) [p addLineToPoint:CGPointMake(x, y)]
        switch (kind) {
        case IC_PLAY: M(7, 4.5); L(7, 19.5); L(19, 12); [p closePath]; [p fill]; return;
        case IC_CHEV_UP: p.lineWidth = 2.4; M(6, 15); L(12, 9); L(18, 15); break;
        case IC_CHEV_DOWN: p.lineWidth = 3; M(6, 9); L(12, 15); L(18, 9); break;
        case IC_CHECK: p.lineWidth = 2.6; M(5, 12.5); L(9.5, 17); L(19, 7.5); break;
        case IC_SERVER:
            [p appendPath:[UIBezierPath bezierPathWithRoundedRect:CGRectMake(4, 4, 16, 6) cornerRadius:2]];
            [p appendPath:[UIBezierPath bezierPathWithRoundedRect:CGRectMake(4, 14, 16, 6) cornerRadius:2]];
            M(8, 7); L(8.01, 7); M(8, 17); L(8.01, 17); break;
        case IC_GEAR:
            [p appendPath:[UIBezierPath bezierPathWithOvalInRect:CGRectMake(9, 9, 6, 6)]];
            [p appendPath:[UIBezierPath bezierPathWithOvalInRect:CGRectMake(5, 5, 14, 14)]];
            [p stroke];
            p = [UIBezierPath bezierPath]; p.lineWidth = 2.6; p.lineCapStyle = kCGLineCapRound;
            for (int i = 0; i < 8; i++) { double a = M_PI / 4 * i; M(12 + cos(a) * 7.5, 12 + sin(a) * 7.5); L(12 + cos(a) * 9.8, 12 + sin(a) * 9.8); }
            break;
        case IC_EYE: case IC_EYE_OFF:
            M(2, 12); [p addQuadCurveToPoint:CGPointMake(22, 12) controlPoint:CGPointMake(12, 0.5)];
            [p addQuadCurveToPoint:CGPointMake(2, 12) controlPoint:CGPointMake(12, 23.5)];
            [p appendPath:[UIBezierPath bezierPathWithOvalInRect:CGRectMake(9, 9, 6, 6)]];
            if (kind == IC_EYE_OFF) { M(3, 3); L(21, 21); }
            break;
        case IC_CLOSE: p.lineWidth = 2.4; M(6, 6); L(18, 18); M(18, 6); L(6, 18); break;
        case IC_PAD:
            p.lineWidth = 1.6;
            [p appendPath:[UIBezierPath bezierPathWithRoundedRect:CGRectMake(2, 7, 20, 10.5) cornerRadius:5]];
            M(7, 10); L(7, 13); M(5.5, 11.5); L(8.5, 11.5);
            [p stroke];
            [[UIBezierPath bezierPathWithOvalInRect:CGRectMake(15.2, 9.7, 1.6, 1.6)] fill];
            [[UIBezierPath bezierPathWithOvalInRect:CGRectMake(17.2, 11.7, 1.6, 1.6)] fill];
            return;
        case IC_KEYBOARD:
            p.lineWidth = 1.6;
            [p appendPath:[UIBezierPath bezierPathWithRoundedRect:CGRectMake(2, 6, 20, 12) cornerRadius:2.5]];
            for (int x = 6; x <= 18; x += 4) { M(x, 10); L(x + 0.01, 10); }
            M(7, 14); L(17, 14); break;
        case IC_MOVE:
            M(2, 12); L(22, 12); M(12, 2); L(12, 22);
            M(5, 9); L(2, 12); L(5, 15); M(9, 5); L(12, 2); L(15, 5); M(15, 19); L(12, 22); L(9, 19); M(19, 9); L(22, 12); L(19, 15); break;
        case IC_GALLERY:
            [p appendPath:[UIBezierPath bezierPathWithRoundedRect:CGRectMake(3, 4, 18, 16) cornerRadius:3]];
            [p appendPath:[UIBezierPath bezierPathWithOvalInRect:CGRectMake(7, 8, 4, 4)]];
            M(21, 16); L(16, 11); L(7, 20); break;
        case IC_GLOBE:
            p.lineWidth = 1.8;
            [p appendPath:[UIBezierPath bezierPathWithOvalInRect:CGRectMake(3, 3, 18, 18)]];
            M(3, 12); L(21, 12);
            [p appendPath:[UIBezierPath bezierPathWithOvalInRect:CGRectMake(8.2, 3, 7.6, 18)]];
            break;
        }
        #undef M
        #undef L
        [p stroke];
    }];
}
static UIImageView *ck_icon_view(int kind, unsigned colour, CGFloat size) {
    UIImageView *v = [[UIImageView alloc] initWithImage:ck_icon(kind, colour, size)];
    v.contentMode = UIViewContentModeCenter;
    fix_w(v, size); fix_h(v, size);
    return v;
}

// the player's own button pictures (HUD editor > Choose from gallery): <game>/touch_icons/<name>.png for the editor and
// <name>.rgba for the runtime (touch_ui.c own_art: <u32 w><u32 h> + 160 x 160 straight-alpha RGBA, already round)
#define ICON_ART 160
static NSString *icon_path(NSString *name, NSString *ext) {
    return [[[docs() stringByAppendingPathComponent:@"game/touch_icons"] stringByAppendingPathComponent:name] stringByAppendingString:ext];
}
static void icon_save(NSString *name, UIImage *img) {
    NSString *png = icon_path(name, @".png"), *raw = icon_path(name, @".rgba");
    NSFileManager *fm = NSFileManager.defaultManager;
    if (!img) { [fm removeItemAtPath:png error:nil]; [fm removeItemAtPath:raw error:nil]; return; }
    [fm createDirectoryAtPath:[png stringByDeletingLastPathComponent] withIntermediateDirectories:YES attributes:nil error:nil];
    [UIImagePNGRepresentation(img) writeToFile:png atomically:YES];
    NSMutableData *d = [NSMutableData dataWithLength:8 + ICON_ART * ICON_ART * 4];
    uint32_t *h = d.mutableBytes; h[0] = ICON_ART; h[1] = ICON_ART;
    uint8_t *px = (uint8_t *)d.mutableBytes + 8;
    CGColorSpaceRef cs = CGColorSpaceCreateDeviceRGB();
    CGContextRef g = CGBitmapContextCreate(px, ICON_ART, ICON_ART, 8, ICON_ART * 4, cs, (CGBitmapInfo)kCGImageAlphaPremultipliedLast);
    CGContextDrawImage(g, CGRectMake(0, 0, ICON_ART, ICON_ART), img.CGImage);
    CGContextRelease(g); CGColorSpaceRelease(cs);
    for (int i = 0; i < ICON_ART * ICON_ART * 4; i += 4) {               // premultiplied -> straight alpha
        int a = px[i + 3];
        if (a == 0 || a == 255) continue;
        for (int k = 0; k < 3; k++) px[i + k] = (uint8_t)MIN(255, px[i + k] * 255 / a);
    }
    [d writeToFile:raw atomically:YES];
}
// the middle square of a picture, cut round, with the design's light ring
static UIImage *icon_cut(UIImage *src) {
    CGSize s = src.size;
    CGFloat side = MIN(s.width, s.height);
    UIGraphicsImageRendererFormat *fm = [UIGraphicsImageRendererFormat defaultFormat];
    fm.scale = 1;
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:CGSizeMake(ICON_ART, ICON_ART) format:fm];
    return [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        [[UIBezierPath bezierPathWithOvalInRect:CGRectMake(1, 1, ICON_ART - 2, ICON_ART - 2)] addClip];
        CGFloat k = ICON_ART / side;
        [src drawInRect:CGRectMake(-(s.width - side) / 2 * k, -(s.height - side) / 2 * k, s.width * k, s.height * k)];
        UIBezierPath *ring = [UIBezierPath bezierPathWithOvalInRect:CGRectMake(4, 4, ICON_ART - 8, ICON_ART - 8)];
        ring.lineWidth = 6; [rgb(0xE6EBF2) setStroke]; [ring stroke];
    }];
}

@class HudEditorVC;
@interface HudCanvas : UIView
@property (weak) HudEditorVC *vc;
@end

@interface HudEditorVC : UIViewController <PHPickerViewControllerDelegate>
@property (strong) NSMutableArray<HudElem *> *elems;
@property (strong) NSMutableArray<HudElem *> *kept;     // not arranged in this session, saved as they were
@property (copy) NSString *mode;                        // the control type it is opened for (nil = the saved one)
@property BOOL first;                                   // the first start's step 3: Skip, not Back
@property BOOL zh;
@property CGFloat opacity;
@property (strong) HudElem *active;
@property (strong) HudCanvas *canvas;
@property (strong) UILabel *info;
@property (strong) UISlider *size;
@property (strong) UIStackView *iconBar;
@property (strong) UIImageView *iconPreview;
@property (strong) UIButton *iconDefault;
@property (strong) NSMutableDictionary *icons;          // name -> picture, or NSNull = back to the default (written at Save)
- (void)showInfo;
@end

@implementation HudCanvas {
    HudElem *_tapped;
    BOOL _dragging;
    CGPoint _last, _down;
    CGFloat _startDist, _startScale;
    NSMutableArray<UITouch *> *_live;           // fingers down, in order
}
- (instancetype)initWithFrame:(CGRect)f {
    if ((self = [super initWithFrame:f])) { self.multipleTouchEnabled = YES; self.backgroundColor = rgb(0x0A0E18); _live = [NSMutableArray array]; }
    return self;
}
- (CGFloat)scale { return MIN(self.bounds.size.width / HGW, self.bounds.size.height / HGH); }
- (CGPoint)origin { CGFloat k = self.scale; return CGPointMake((self.bounds.size.width - HGW * k) / 2, (self.bounds.size.height - HGH * k) / 2); }
- (CGRect)rect:(HudElem *)e {
    CGFloat k = self.scale; CGPoint o = self.origin;
    return CGRectMake(o.x + e.x * k, o.y + e.y * k, e.sw * e.s * k, e.sh * e.s * k);
}
- (void)drawRect:(CGRect)dirty {
    CGFloat k = self.scale; CGPoint o = self.origin;
    CGRect screen = CGRectMake(o.x, o.y, HGW * k, HGH * k);
    [rgb(0x111827) setFill]; UIRectFill(screen);                  // the race screen: plain
    [rgb(0x2A3A6E) setStroke]; UIRectFrame(screen);
    NSShadow *sh = [[NSShadow alloc] init]; sh.shadowColor = UIColor.blackColor; sh.shadowBlurRadius = 2; sh.shadowOffset = CGSizeMake(0, 1);
    NSDictionary *ta = @{NSFontAttributeName: f_body(10, UIFontWeightHeavy), NSForegroundColorAttributeName: UIColor.whiteColor, NSShadowAttributeName: sh};
    HudEditorVC *vc = self.vc;
    for (HudElem *e in vc.elems) {
        CGRect r = [self rect:e];
        UIBezierPath *shape = e.touch ? [UIBezierPath bezierPathWithOvalInRect:r] : [UIBezierPath bezierPathWithRoundedRect:r cornerRadius:4];
        if (e.pic) [e.pic drawInRect:r blendMode:kCGBlendModeNormal alpha:e.touch ? MIN(1, vc.opacity / 0.6 * 0.8) : 1];
        else { [[UIColor colorWithWhite:1 alpha:0.08] setFill]; [shape fill]; }
        if (e == vc.active) { [rgb(C_YELLOW) setStroke]; shape.lineWidth = 3; [shape stroke]; }
        else if (!e.touch || vc.opacity < 0.05) {                  // HUD boxes, and invisible buttons: a dashed outline
            [[UIColor colorWithWhite:1 alpha:0.3] setStroke];
            CGFloat dash[] = {5, 4}; [shape setLineDash:dash count:2 phase:0]; shape.lineWidth = 1; [shape stroke];
        }
        if (!e.touch) [e.label drawAtPoint:CGPointMake(r.origin.x + 4, r.origin.y + 2) withAttributes:ta];     // HUD boxes: their name
        else if ([e.name isEqualToString:@"touch_autogas"]) {   // the switch: a tag under
            NSString *tag = vc.zh ? @"自动油门" : @"AUTO GAS";
            CGSize ts = [tag sizeWithAttributes:ta];
            [tag drawAtPoint:CGPointMake(CGRectGetMidX(r) - ts.width / 2, CGRectGetMaxY(r) + 2) withAttributes:ta];
        }
    }
}
- (HudElem *)hit:(CGPoint)p {
    HudElem *best = nil; CGFloat area = CGFLOAT_MAX;
    for (HudElem *e in self.vc.elems) {
        CGRect r = CGRectInset([self rect:e], -8, -8);
        if (CGRectContainsPoint(r, p) && r.size.width * r.size.height < area) { best = e; area = r.size.width * r.size.height; }
    }
    return best;
}
- (CGFloat)pinch { CGPoint a = [_live[0] locationInView:self], b = [_live[1] locationInView:self]; return hypot(a.x - b.x, a.y - b.y); }
// Tap to pick an item, then slide it: a drag only moves the item already picked (no accidental drags of the wrong
// item); a tap elsewhere picks another, on nothing drops the pick.
- (void)touchesBegan:(NSSet *)ts withEvent:(UIEvent *)ev {
    for (UITouch *t in ts) {
        [_live addObject:t];
        if (_live.count == 1) {
            _down = _last = [t locationInView:self];
            _tapped = [self hit:_down];
            _dragging = _tapped && _tapped == self.vc.active;
        } else if (_live.count == 2 && self.vc.active) { _startDist = self.pinch; _startScale = self.vc.active.s; _dragging = YES; }
    }
}
- (void)touchesMoved:(NSSet *)ts withEvent:(UIEvent *)ev {
    HudElem *a = self.vc.active;
    if (!a || !_dragging || !_live.count) return;
    CGPoint p = [_live[0] locationInView:self];
    if (_live.count >= 2 && _startDist > 0) {
        CGFloat cx = a.x + a.sw * a.s / 2, cy = a.y + a.sh * a.s / 2;
        a.s = MAX(0.4, MIN(3, _startScale * self.pinch / _startDist));
        a.x = cx - a.sw * a.s / 2; a.y = cy - a.sh * a.s / 2;      // grow around the centre
    } else {
        a.x += (p.x - _last.x) / self.scale; a.y += (p.y - _last.y) / self.scale;
    }
    a.x = MAX(-a.sw * a.s / 2, MIN(HGW - a.sw * a.s / 2, a.x));
    a.y = MAX(-a.sh * a.s / 2, MIN(HGH - a.sh * a.s / 2, a.y));
    _last = p;
    [self.vc showInfo];
    [self setNeedsDisplay];
}
- (void)touchesEnded:(NSSet *)ts withEvent:(UIEvent *)ev {
    for (UITouch *t in ts) [_live removeObject:t];
    if (_live.count) {                                             // keep dragging with the finger that stays
        _startDist = 0;
        _last = [_live[0] locationInView:self];
        return;
    }
    CGPoint p = [ts.anyObject locationInView:self];
    if (!_dragging && hypot(p.x - _down.x, p.y - _down.y) < 12) { self.vc.active = _tapped; [self.vc showInfo]; [self setNeedsDisplay]; }
    _dragging = NO;
}
- (void)touchesCancelled:(NSSet *)ts withEvent:(UIEvent *)ev { for (UITouch *t in ts) [_live removeObject:t]; if (!_live.count) _dragging = NO; }
@end

// hud_elements.txt has English labels; the launcher's Chinese ones (the design)
static NSDictionary *hud_zh(void) {
    return @{@"items": @"道具栏", @"itemcount": @"道具数量", @"place": @"名次", @"ranking": @"排名", @"time": @"比赛时间", @"minimap": @"小地图",
             @"speedo": @"速度表", @"touch_left": @"左转", @"touch_right": @"右转", @"touch_gas": @"油门", @"touch_brake": @"刹车", @"touch_drift": @"漂移",
             @"touch_item": @"道具", @"touch_swap": @"切换道具", @"touch_esc": @"菜单", @"touch_chat": @"聊天", @"chat": @"比赛聊天", @"announce": @"公告",
             @"touch_autogas": @"自动油门"};
}

@implementation HudEditorVC
- (NSString *)t:(NSString *)en zh:(NSString *)zh { return self.zh ? zh : en; }
- (NSString *)layoutPath { return [[docs() stringByAppendingPathComponent:@"game"] stringByAppendingPathComponent:@"hud_layout.txt"]; }
- (UIImage *)bundlePic:(NSString *)name { return [UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:[name stringByAppendingString:@".png"]]]; }
- (void)load {
    self.elems = [NSMutableArray array];
    self.icons = [NSMutableDictionary dictionary];
    self.opacity = 0.6;
    NSDictionary *zhNames = hud_zh();
    NSString *list = [NSString stringWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"hud_elements.txt"] encoding:NSUTF8StringEncoding error:nil];
    for (NSString *raw in [list componentsSeparatedByString:@"\n"]) {
        NSString *line = [raw stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceAndNewlineCharacterSet];
        if (!line.length || [line hasPrefix:@"#"]) continue;
        NSScanner *sc = [NSScanner scannerWithString:line];
        NSString *name; double v[4];
        if (![sc scanUpToCharactersFromSet:NSCharacterSet.whitespaceCharacterSet intoString:&name]) continue;
        if (![sc scanDouble:&v[0]] || ![sc scanDouble:&v[1]] || ![sc scanDouble:&v[2]] || ![sc scanDouble:&v[3]]) continue;
        HudElem *e = [[HudElem alloc] init];
        e.name = name; e.sx = e.x = v[0]; e.sy = e.y = v[1]; e.sw = v[2]; e.sh = v[3]; e.s = 1;
        e.label = [[line substringFromIndex:sc.scanLocation] stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        if (self.zh && zhNames[name]) e.label = zhNames[name];
        e.touch = [name hasPrefix:@"touch_"];
        NSString *shot = [[[docs() stringByAppendingPathComponent:@"game/hudshots"] stringByAppendingPathComponent:name] stringByAppendingString:@".rgba"];
        e.pic = e.touch ? ([UIImage imageWithContentsOfFile:icon_path(name, @".png")] ?: [self bundlePic:name]) : hud_rgba([NSData dataWithContentsOfFile:shot]);
        [self.elems addObject:e];
    }
    NSString *saved = [NSString stringWithContentsOfFile:self.layoutPath encoding:NSUTF8StringEncoding error:nil];
    for (NSString *line in [saved componentsSeparatedByString:@"\n"]) {
        NSArray *p = [[line stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet] componentsSeparatedByCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        if (p.count == 2 && [p[0] isEqualToString:@"touch_opacity"]) { self.opacity = [p[1] doubleValue]; continue; }
        if (p.count < 4) continue;
        for (HudElem *e in self.elems) if ([e.name isEqualToString:p[0]]) { e.x = [p[1] doubleValue]; e.y = [p[2] doubleValue]; e.s = [p[3] doubleValue]; }
    }
    // what this player arranges (the launcher design, 12 Nov 2026), as Android: every HUD element and on-screen button;
    // the AUTO GAS switch only with Mobile controls
    self.kept = [NSMutableArray array];
    BOOL mobileOn = self.mode ? [self.mode isEqualToString:@"mobile"] : [NSUserDefaults.standardUserDefaults boolForKey:@"touchmobile"];
    for (NSInteger i = (NSInteger)self.elems.count - 1; i >= 0; i--) {
        HudElem *e = self.elems[(NSUInteger)i];
        BOOL sw = [e.name isEqualToString:@"touch_autogas"];
        // auto gas (touch_ui.c touch_mobile.txt, on unless "autogas=0"): no gas button in the race
        BOOL gas = [e.name isEqualToString:@"touch_gas"] && mobileOn && ![[NSString stringWithContentsOfFile:[docs() stringByAppendingPathComponent:@"game/touch_mobile.txt"]
                                                                         encoding:NSUTF8StringEncoding error:nil] ?: @"" containsString:@"autogas=0"];
        if ((sw && !mobileOn) || gas) { [self.kept addObject:e]; [self.elems removeObjectAtIndex:(NSUInteger)i]; }
    }
}
- (UILabel *)label:(NSString *)t color:(unsigned)c { return ck_label(t, f_body(13, UIFontWeightHeavy), c); }
- (CKButton *)button:(NSString *)t primary:(BOOL)pri tap:(void (^)(CKButton *))tap {
    CKButton *b = ck_pill(t, f_body(13, UIFontWeightHeavy), pri ? C_INK : 0xFFFFFF, rgb(pri ? C_YELLOW : C_SLAB), nil, 36, tap);
    b.contentEdgeInsets = UIEdgeInsetsMake(0, 12, 0, 12);
    [b.widthAnchor constraintGreaterThanOrEqualToConstant:60].active = YES;
    return b;
}
- (UIStackView *)bar:(NSArray *)views {
    UIStackView *bar = hstack(views, 6);
    bar.layoutMargins = UIEdgeInsetsMake(4, 8, 4, 8); bar.layoutMarginsRelativeArrangement = YES;
    bar.backgroundColor = [rgb(C_INK) colorWithAlphaComponent:0.92]; bar.layer.cornerRadius = 14;
    bar.layer.borderWidth = 1; bar.layer.borderColor = rgb(0x2A3A6E).CGColor;
    bar.translatesAutoresizingMaskIntoConstraints = NO;
    return bar;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.zh = [[NSUserDefaults.standardUserDefaults stringForKey:@"lang"] isEqualToString:@"zh"];
    [self load];
    __weak HudEditorVC *w = self;
    self.canvas = [[HudCanvas alloc] initWithFrame:self.view.bounds];
    self.canvas.vc = self;
    self.canvas.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.canvas.contentMode = UIViewContentModeRedraw;
    [self.view addSubview:self.canvas];
    self.info = [self label:@"" color:0xFFFFFF];
    [self.info.widthAnchor constraintGreaterThanOrEqualToConstant:128].active = YES;
    self.size = ck_slider(0.4, 3, 1, C_YELLOW, ^(CKSlider *s) { [w sizeChanged]; });
    fix_w(self.size, 90);
    self.size.enabled = NO;
    CKSlider *ob = ck_slider(0, 1, self.opacity, C_YELLOW, ^(CKSlider *s) { w.opacity = s.value; [w.canvas setNeedsDisplay]; });
    fix_w(ob, 80);
    UIStackView *bar = [self bar:@[self.info, [self label:[self t:@"Size" zh:@"大小"] color:C_MUTED], self.size,
        [self label:[self t:@"Buttons" zh:@"按键"] color:C_MUTED], ob,
        [self button:[self t:@"Reset" zh:@"重置"] primary:NO tap:^(CKButton *b) { [w reset]; }],
        [self button:self.first ? [self t:@"Skip" zh:@"跳过"] : [self t:@"Back" zh:@"返回"] primary:NO tap:^(CKButton *b) { [w close]; }],
        [self button:[self t:@"Save" zh:@"保存"] primary:YES tap:^(CKButton *b) { [w save]; }]]];
    [self.view addSubview:bar];
    // a touch button picked: its picture from the gallery (round, with a light ring), or back to the default
    self.iconPreview = [[UIImageView alloc] init];
    fix_w(self.iconPreview, 32); fix_h(self.iconPreview, 32);
    CKButton *gallery = [self button:[self t:@"Choose from gallery" zh:@"从相册选择"] primary:NO tap:^(CKButton *b) { [w pickIcon]; }];
    gallery.backgroundColor = rgb(C_BLUE);
    self.iconDefault = [self button:[self t:@"Default icon" zh:@"恢复默认图标"] primary:NO tap:^(CKButton *b) {
        HudElem *e = w.active;
        if (!e) return;
        w.icons[e.name] = NSNull.null;
        e.pic = [w bundlePic:e.name];
        [w showInfo]; [w.canvas setNeedsDisplay];
    }];
    self.iconBar = [self bar:@[self.iconPreview, gallery, self.iconDefault, [self label:[self t:@"Square images work best" zh:@"建议使用正方形图片"] color:C_MUTED]]];
    self.iconBar.hidden = YES;
    [self.view addSubview:self.iconBar];
    UILayoutGuide *g = self.view.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[                         // bottom centre: the race HUD has nothing there
        [bar.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [bar.bottomAnchor constraintEqualToAnchor:g.bottomAnchor constant:-6],
        [self.iconBar.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [self.iconBar.bottomAnchor constraintEqualToAnchor:bar.topAnchor constant:-6]]];
    if (self.first) {                                                  // the first start: which step this is
        BOOL mobile = [self.mode isEqualToString:@"mobile"];
        UILabel *title = ck_label(mobile ? [self t:@"Step 3 of 3 · Arrange your HUD · Mobile controls" zh:@"第 3 步，共 3 步 · 调整 HUD · 手游操作"]
                                         : [self t:@"Step 3 of 3 · Arrange your HUD · Classic controls" zh:@"第 3 步，共 3 步 · 调整 HUD · 经典操作"],
                                  f_disp(13, UIFontWeightBold), 0xFFFFFF);
        title.textAlignment = NSTextAlignmentCenter;
        title.backgroundColor = [rgb(C_INK) colorWithAlphaComponent:0.9];
        title.layer.cornerRadius = 14; title.layer.masksToBounds = YES;
        title.layer.borderWidth = 1; title.layer.borderColor = rgb(0x2A3A6E).CGColor;
        title.translatesAutoresizingMaskIntoConstraints = NO;
        [self.view addSubview:title];
        [NSLayoutConstraint activateConstraints:@[[title.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
            [title.topAnchor constraintEqualToAnchor:self.view.topAnchor constant:UIScreen.mainScreen.bounds.size.height * 0.236],
            [title.heightAnchor constraintEqualToConstant:28]]];
        [title.widthAnchor constraintEqualToConstant:[title.text sizeWithAttributes:@{NSFontAttributeName: title.font}].width + 28].active = YES;
    }
    [self showInfo];
}
- (void)showInfo {
    HudElem *e = self.active;
    self.info.text = e ? [NSString stringWithFormat:@"%@  %.0f%%", e.label, e.s * 100] : [self t:@"Tap an item, then slide it" zh:@"点击一个元素，然后拖动"];
    self.size.enabled = e != nil;
    if (e) self.size.value = e.s;
    self.iconBar.hidden = !(e && e.touch);
    if (e && e.touch) {
        self.iconPreview.image = e.pic;
        id own = self.icons[e.name];
        self.iconDefault.hidden = own ? own == NSNull.null : ![NSFileManager.defaultManager fileExistsAtPath:icon_path(e.name, @".png")];
    }
}
// the system photo picker (works in a landscape-only app, needs no photo permission)
- (void)pickIcon {
    PHPickerConfiguration *c = [[PHPickerConfiguration alloc] init];
    c.filter = [PHPickerFilter imagesFilter];
    c.selectionLimit = 1;
    PHPickerViewController *p = [[PHPickerViewController alloc] initWithConfiguration:c];
    p.delegate = self;
    [self presentViewController:p animated:YES completion:nil];
}
- (void)picker:(PHPickerViewController *)p didFinishPicking:(NSArray<PHPickerResult *> *)results {
    [p dismissViewControllerAnimated:YES completion:nil];
    HudElem *e = self.active;
    NSItemProvider *ip = results.firstObject.itemProvider;
    if (!e || !e.touch || ![ip canLoadObjectOfClass:UIImage.class]) return;
    __weak HudEditorVC *w = self;
    [ip loadObjectOfClass:UIImage.class completionHandler:^(id<NSItemProviderReading> obj, NSError *err) {
        if (![(NSObject *)obj isKindOfClass:UIImage.class]) return;
        UIImage *cut = icon_cut((UIImage *)obj);
        dispatch_async(dispatch_get_main_queue(), ^{
            w.icons[e.name] = cut;
            e.pic = cut;
            [w showInfo]; [w.canvas setNeedsDisplay];
        });
    }];
}
- (void)sizeChanged {
    HudElem *e = self.active;
    if (!e) return;
    CGFloat cx = e.x + e.sw * e.s / 2, cy = e.y + e.sh * e.s / 2;
    e.s = self.size.value;
    e.x = cx - e.sw * e.s / 2; e.y = cy - e.sh * e.s / 2;
    [self showInfo]; [self.canvas setNeedsDisplay];
}
- (void)reset {
    for (HudElem *e in self.elems) { e.x = e.sx; e.y = e.sy; e.s = 1; }
    self.opacity = 0.6;
    [self showInfo]; [self.canvas setNeedsDisplay];
}
- (void)save {
    NSMutableString *t = [NSMutableString stringWithString:@"# HUD layout from the editor: name x y scale (game pixels 1280x720, top-left)\n"];
    for (HudElem *e in [self.elems arrayByAddingObjectsFromArray:self.kept ?: @[]])
        if (e.x != e.sx || e.y != e.sy || e.s != 1) [t appendFormat:@"%@ %.1f %.1f %.3f\n", e.name, e.x, e.y, e.s];
    [t appendFormat:@"touch_opacity %.2f\n", self.opacity];
    [NSFileManager.defaultManager createDirectoryAtPath:[self.layoutPath stringByDeletingLastPathComponent] withIntermediateDirectories:YES attributes:nil error:nil];
    [t writeToFile:self.layoutPath atomically:YES encoding:NSUTF8StringEncoding error:nil];
    for (NSString *name in self.icons) icon_save(name, self.icons[name] == NSNull.null ? nil : self.icons[name]);
    [self close];
}
- (void)close { [self dismissViewControllerAnimated:YES completion:nil]; }
- (BOOL)prefersStatusBarHidden { return YES; }
- (BOOL)prefersHomeIndicatorAutoHidden { return YES; }
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
@end

// ---- "Press a key or button": keyboards, controllers, sticks and triggers; combo = up to two held together ----------
@interface CaptureVC : UIViewController
@property BOOL combo, zh;
@property (copy) void (^got)(NSArray<NSNumber *> *codes);       // empty = cleared; not called on Cancel
@end
@implementation CaptureVC {
    NSMutableOrderedSet<NSNumber *> *_held, *_seen;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    _held = [NSMutableOrderedSet orderedSet]; _seen = [NSMutableOrderedSet orderedSet];
    self.view.backgroundColor = [UIColor colorWithWhite:0 alpha:0.55];
    UILabel *t = [[UILabel alloc] init];
    t.text = self.combo ? (self.zh ? @"按下一个键，或同时按下两个键" : @"Press a key or button, or two together")
                        : (self.zh ? @"按下一个键或手柄按钮（或推动摇杆）" : @"Press a key or controller button (or move a stick)");
    t.textColor = UIColor.whiteColor; t.font = [UIFont boldSystemFontOfSize:17]; t.numberOfLines = 0; t.textAlignment = NSTextAlignmentCenter;
    UIButton *clear = [UIButton buttonWithType:UIButtonTypeSystem], *cancel = [UIButton buttonWithType:UIButtonTypeSystem];
    [clear setTitle:self.zh ? @"清除" : @"Clear" forState:UIControlStateNormal];
    [cancel setTitle:self.zh ? @"取消" : @"Cancel" forState:UIControlStateNormal];
    for (UIButton *b in @[clear, cancel]) { [b setTitleColor:UIColor.whiteColor forState:UIControlStateNormal]; b.titleLabel.font = [UIFont boldSystemFontOfSize:15]; }
    [clear addTarget:self action:@selector(clear) forControlEvents:UIControlEventTouchUpInside];
    [cancel addTarget:self action:@selector(close) forControlEvents:UIControlEventTouchUpInside];
    UIStackView *row = [[UIStackView alloc] initWithArrangedSubviews:@[clear, cancel]];
    row.spacing = 40;
    UIStackView *card = [[UIStackView alloc] initWithArrangedSubviews:@[t, row]];
    card.axis = UILayoutConstraintAxisVertical; card.alignment = UIStackViewAlignmentCenter; card.spacing = 18;
    card.layoutMargins = UIEdgeInsetsMake(24, 30, 16, 30); card.layoutMarginsRelativeArrangement = YES;
    card.backgroundColor = [rgb(0x131A2E) colorWithAlphaComponent:0.95]; card.layer.cornerRadius = 20;
    card.layer.borderWidth = 1; card.layer.borderColor = rgb(0xF5C21B).CGColor;
    card.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:card];
    [NSLayoutConstraint activateConstraints:@[[card.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [card.centerYAnchor constraintEqualToAnchor:self.view.centerYAnchor], [card.widthAnchor constraintLessThanOrEqualToConstant:460]]];
}
- (void)viewDidAppear:(BOOL)a {
    [super viewDidAppear:a];
    [self becomeFirstResponder];
    __weak CaptureVC *me = self;
    g_capture = ^(int code, int down) { [me code:code down:down]; };
}
- (void)viewWillDisappear:(BOOL)a { [super viewWillDisappear:a]; g_capture = nil; }
- (BOOL)canBecomeFirstResponder { return YES; }
- (void)code:(int)c down:(int)down {
    if (down) { [_held addObject:@(c)]; [_seen addObject:@(c)]; return; }
    [_held removeObject:@(c)];
    if (_held.count || !_seen.count) return;
    NSUInteger n = MIN(self.combo ? 2 : 1, _seen.count);
    NSArray *r = [_seen.array subarrayWithRange:NSMakeRange(0, n)];
    void (^got)(NSArray *) = self.got;
    [self close];
    got(r);
}
- (void)keys:(NSSet<UIPress *> *)presses down:(int)down {
    for (UIPress *p in presses) {
        if (@available(iOS 13.4, *)) { int c = hid_to_android(p.key.keyCode); if (c) [self code:c down:down]; }
    }
}
- (void)pressesBegan:(NSSet<UIPress *> *)p withEvent:(UIPressesEvent *)e { [self keys:p down:1]; }
- (void)pressesEnded:(NSSet<UIPress *> *)p withEvent:(UIPressesEvent *)e { [self keys:p down:0]; }
- (void)clear { void (^got)(NSArray *) = self.got; [self close]; got(@[]); }
- (void)close { g_capture = nil; [self dismissViewControllerAnimated:NO completion:nil]; }
@end

// ---- hud_layout.txt touch_opacity (the HUD editor keeps the positions; only this line changes here) ------------------
static NSString *hud_layout_path(void) { return [docs() stringByAppendingPathComponent:@"game/hud_layout.txt"]; }
static float hud_opacity_get(void) {
    NSString *t = [NSString stringWithContentsOfFile:hud_layout_path() encoding:NSUTF8StringEncoding error:nil];
    for (NSString *line in [t componentsSeparatedByString:@"\n"]) {
        NSArray *p = [[line stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet] componentsSeparatedByCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        if (p.count == 2 && [p[0] isEqualToString:@"touch_opacity"]) return MAX(0, MIN(1, [p[1] floatValue]));
    }
    return [[NSUserDefaults.standardUserDefaults stringForKey:@"controltype"] isEqualToString:@"keyboard"] ? 0 : 0.6f;
}
static void hud_opacity_set(float a) {
    NSString *path = hud_layout_path();
    NSMutableString *t = [NSMutableString string];
    NSString *old = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil] ?: @"";
    for (NSString *line in [old componentsSeparatedByString:@"\n"]) {
        NSString *l = [line stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceAndNewlineCharacterSet];
        if (l.length && ![l hasPrefix:@"touch_opacity"]) [t appendFormat:@"%@\n", l];
    }
    [t appendFormat:@"touch_opacity %.2f\n", a];
    [NSFileManager.defaultManager createDirectoryAtPath:[path stringByDeletingLastPathComponent] withIntermediateDirectories:YES attributes:nil error:nil];
    [t writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:nil];
}
static void pill_look(UIButton *b, BOOL on) {
    b.backgroundColor = rgb(on ? C_PILL_ON : 0xFFFFFF);
    b.layer.borderColor = rgb(on ? C_DEEP : C_LINE).CGColor;
    b.selected = on;
}
// an 18 pt checkbox picture: filled with a tick when on
static UIImage *check_img(BOOL on, unsigned onFill, unsigned offFill, CGFloat offAlpha, unsigned offStroke, unsigned tick) {
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:CGSizeMake(18, 18)];
    return [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        UIBezierPath *b = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(0.75, 0.75, 16.5, 16.5) cornerRadius:5];
        [(on ? rgb(onFill) : [rgb(offFill) colorWithAlphaComponent:offAlpha]) setFill]; [b fill];
        b.lineWidth = 1.5; [rgb(on ? onFill : offStroke) setStroke]; [b stroke];
        if (!on) return;
        UIBezierPath *t = [UIBezierPath bezierPath];
        [t moveToPoint:CGPointMake(4.9, 9.4)]; [t addLineToPoint:CGPointMake(7.9, 12.2)]; [t addLineToPoint:CGPointMake(13.3, 5.9)];
        t.lineWidth = 2; t.lineCapStyle = kCGLineCapRound; t.lineJoinStyle = kCGLineJoinRound;
        [rgb(tick) setStroke]; [t stroke];
    }];
}
// the gamma preview: brightness(gamma^0.6), as the design draws it
static UIImage *gamma_img(UIImage *src, float g) {
    CGFloat k = pow(g, 0.6);
    CGSize s = CGSizeMake(320, 160);
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:s];
    return [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        CGFloat sc = MAX(s.width / src.size.width, s.height / src.size.height);
        CGRect at = CGRectMake((s.width - src.size.width * sc) / 2, (s.height - src.size.height * sc) / 2, src.size.width * sc, src.size.height * sc);
        [src drawInRect:at];
        if (k < 1) { [[UIColor colorWithWhite:0 alpha:1 - k] setFill]; UIRectFillUsingBlendMode(CGRectMake(0, 0, s.width, s.height), kCGBlendModeNormal); }
        else if (k > 1) [src drawInRect:at blendMode:kCGBlendModePlusLighter alpha:MIN(1, k - 1)];
    }];
}

// ---- Settings: full-screen light panel, tabs on the left (the design): Display, Game, Sound, Controls, HUD, Chat macros,
// Gamma; Restore defaults / Repair game files / Cancel / Save. Saved in NSUserDefaults (same keys as Android) and applied at
// Play (LoginVC go): wide / fps / scale -> CK_WIDE / CK_VSYNC / CK_SCALE + CrazyKart.ini; detail / gamma / music / effects
// volumes -> UserSetting.bin; accessories / ping -> the server poll's X-CK-Accessories / X-CK-Ping. No voice chat on iOS:
// no voice rows. Bindings + chat macro keys apply at once (CaptureVC), chat macro texts and the rest at Save.
@interface SettingsVC : UIViewController <UITextFieldDelegate>
@property BOOL zh;
@property (strong) NSMutableDictionary *o;              // the values being edited
@property (copy) NSString *tab;
@property (strong) UIStackView *content;
@property (strong) NSMutableData *us;                   // UserSetting.bin (the chat macro texts)
@property (strong) NSMutableArray<NSString *> *macros;
@property (copy) void (^closed)(BOOL saved);
@end
@implementation SettingsVC
- (NSString *)t:(NSString *)en zh:(NSString *)zh { return self.zh ? zh : en; }
- (NSString *)usPath { return [docs() stringByAppendingPathComponent:@"game/UserSetting.bin"]; }
- (NSString *)macroText:(int)slot {
    NSUInteger o = 0x58 + slot * 0x400, n = 0;
    if (self.us.length < o + 0x400) return @"";
    const uint8_t *b = (const uint8_t *)self.us.bytes + o;
    while (n < 0x3fe && (b[n] || b[n + 1])) n += 2;
    return [[NSString alloc] initWithBytes:b length:n encoding:NSUTF16LittleEndianStringEncoding] ?: @"";
}
+ (NSDictionary *)defaults {
    return @{@"wide": @YES, @"scale": @100, @"detail": @0, @"effects": @YES, @"lean": @NO, @"etc2": @NO, @"fps": @0, @"accessories": @YES,
             @"ping": @"room,race", @"music": @YES, @"musicVol": @7, @"sfx": @YES, @"sfxVol": @7, @"gamma": @1.0};
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = rgb(C_PAPER);
    NSUserDefaults *d = NSUserDefaults.standardUserDefaults;
    self.o = [NSMutableDictionary dictionary];
    NSDictionary *def = SettingsVC.defaults;
    for (NSString *k in def) self.o[k] = [d objectForKey:k] ?: def[k];
    self.o[@"controltype"] = [d stringForKey:@"controltype"] ?: ([d boolForKey:@"touchmobile"] ? @"mobile" : @"classic");
    self.o[@"opacity"] = @(hud_opacity_get());
    self.o[@"lang"] = @(self.zh);
    self.us = [NSMutableData dataWithContentsOfFile:self.usPath] ?: [NSMutableData dataWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"UserSetting.bin"]];
    self.macros = [NSMutableArray array];
    for (int s = 0; s < CT_MACROS; s++) [self.macros addObject:[self macroText:s]];
    self.tab = @"display";
    [self build];
}
- (void)viewWillAppear:(BOOL)a {                         // back from the HUD editor: its opacity
    [super viewWillAppear:a];
    if (!self.o) return;
    self.o[@"opacity"] = @(hud_opacity_get());
    if ([self.tab isEqualToString:@"hud"]) [self fillTab];
}
- (void)build {
    for (UIView *v in self.view.subviews) [v removeFromSuperview];
    __weak SettingsVC *w = self;
    UILabel *title = ck_label([self t:@"Game settings" zh:@"游戏设置"], f_disp(24, UIFontWeightHeavy), C_INK);
    CKButton *lang = ck_pill(self.zh ? @"中文" : @"English", f_body(15, UIFontWeightBold), C_INK, UIColor.whiteColor, rgb(C_EDGE), 44, nil);
    [lang setImage:ck_icon(IC_GLOBE, C_INK, 18) forState:UIControlStateNormal];
    lang.titleEdgeInsets = UIEdgeInsetsMake(0, 8, 0, -8);
    lang.contentEdgeInsets = UIEdgeInsetsMake(0, 12, 0, 20);
    step_shadow(lang, C_LINE, 3);
    lang.accessibilityLabel = @"Language / 语言";
    lang.menu = [UIMenu menuWithChildren:@[
        [UIAction actionWithTitle:@"English" image:nil identifier:nil handler:^(UIAction *a) { if (w.zh) { w.zh = NO; [w build]; } }],
        [UIAction actionWithTitle:@"中文" image:nil identifier:nil handler:^(UIAction *a) { if (!w.zh) { w.zh = YES; [w build]; } }]]];
    lang.showsMenuAsPrimaryAction = YES;
    CKButton *x = ck_button(^(CKButton *b) { [w close:NO]; });
    [x setImage:ck_icon(IC_CLOSE, C_INK, 18) forState:UIControlStateNormal];
    ck_box(x, UIColor.whiteColor, nil, 0, 22); step_shadow(x, C_LINE, 3);
    fix_w(x, 44); fix_h(x, 44);
    x.accessibilityLabel = [self t:@"Close settings" zh:@"关闭设置"];
    UIStackView *head = hstack(@[title, lang, x], 12);
    [title setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];

    UIStackView *tabs = vstack(@[], 3);
    tabs.layoutMargins = UIEdgeInsetsMake(4, 4, 4, 4); tabs.layoutMarginsRelativeArrangement = YES;
    tabs.backgroundColor = rgb(C_RAIL); tabs.layer.cornerRadius = 22;
    NSArray *all = @[@[@"display", [self t:@"Display" zh:@"画面"]], @[@"game", [self t:@"Game" zh:@"游戏"]], @[@"sound", [self t:@"Sound" zh:@"声音"]],
                     @[@"controls", [self t:@"Controls" zh:@"按键"]], @[@"hud", @"HUD"], @[@"chat", [self t:@"Chat macros" zh:@"快捷聊天"]], @[@"gamma", @"Gamma"]];
    for (NSArray *tb in all) {
        BOOL on = [tb[0] isEqualToString:self.tab];
        NSString *key = tb[0];
        CKButton *b = ck_pill(tb[1], f_disp(15, UIFontWeightBold), on ? C_INK : C_SUB, on ? UIColor.whiteColor : UIColor.clearColor, nil, 40,
                              ^(CKButton *bb) { w.tab = key; [w build]; });
        if (on) step_shadow(b, C_LINE, 2);
        b.accessibilityTraits |= on ? UIAccessibilityTraitSelected : 0;
        [tabs addArrangedSubview:b];
    }
    UIScrollView *rail = [[UIScrollView alloc] init];
    rail.showsVerticalScrollIndicator = NO;
    tabs.translatesAutoresizingMaskIntoConstraints = NO;
    [rail addSubview:tabs];
    UIView *card = [[UIView alloc] init];
    ck_box(card, UIColor.whiteColor, rgb(C_LINE), 1, 16); step_shadow(card, C_LINE, 3);
    UIScrollView *sc = [[UIScrollView alloc] init];
    sc.layer.cornerRadius = 16;
    sc.keyboardDismissMode = UIScrollViewKeyboardDismissModeOnDrag;
    self.content = vstack(@[], 0);
    self.content.layoutMargins = UIEdgeInsetsMake(4, 18, 12, 18); self.content.layoutMarginsRelativeArrangement = YES;
    for (UIView *v in @[sc, self.content]) v.translatesAutoresizingMaskIntoConstraints = NO;
    [card addSubview:sc]; [sc addSubview:self.content];
    UIStackView *body = hstack(@[rail, card], 14);
    body.alignment = UIStackViewAlignmentFill;
    fix_w(rail, 150);

    CKButton *restore = ck_light([self t:@"Restore defaults" zh:@"恢复默认设置"], ^(CKButton *b) {
        [w.o addEntriesFromDictionary:SettingsVC.defaults];      // display, game, sound, gamma; controls / HUD / macros stay
        [w fillTab];
    });
    CKButton *repair = ck_light([self t:@"Repair game files" zh:@"修复游戏文件"], ^(CKButton *b) { [w askRepair]; });
    CKButton *cancel = ck_light([self t:@"Cancel" zh:@"取消"], ^(CKButton *b) { [w close:NO]; });
    CKButton *save = ck_yellow([self t:@"Save" zh:@"确定"], 16, 44, ^(CKButton *b) { [w close:YES]; });
    [save.widthAnchor constraintGreaterThanOrEqualToConstant:110].active = YES;
    UIView *gap = [[UIView alloc] init];
    [gap setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];
    UIStackView *foot = hstack(@[restore, repair, gap, cancel, save], 10);

    UIStackView *page = vstack(@[head, body, foot], 8);
    page.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:page];
    UILayoutGuide *g = self.view.safeAreaLayoutGuide;
    NSLayoutYAxisAnchor *kb = g.bottomAnchor;                      // iOS 15+: stop above the keyboard (macro texts)
    if (@available(iOS 15.0, *)) kb = self.view.keyboardLayoutGuide.topAnchor;
    [NSLayoutConstraint activateConstraints:@[
        [page.leadingAnchor constraintEqualToAnchor:g.leadingAnchor constant:16], [page.trailingAnchor constraintEqualToAnchor:g.trailingAnchor constant:-16],
        [page.topAnchor constraintEqualToAnchor:g.topAnchor constant:10], [page.bottomAnchor constraintEqualToAnchor:kb constant:-10],
        [tabs.topAnchor constraintEqualToAnchor:rail.contentLayoutGuide.topAnchor], [tabs.bottomAnchor constraintEqualToAnchor:rail.contentLayoutGuide.bottomAnchor],
        [tabs.leadingAnchor constraintEqualToAnchor:rail.contentLayoutGuide.leadingAnchor], [tabs.widthAnchor constraintEqualToAnchor:rail.frameLayoutGuide.widthAnchor],
        [sc.leadingAnchor constraintEqualToAnchor:card.leadingAnchor], [sc.trailingAnchor constraintEqualToAnchor:card.trailingAnchor],
        [sc.topAnchor constraintEqualToAnchor:card.topAnchor], [sc.bottomAnchor constraintEqualToAnchor:card.bottomAnchor constant:-1],
        [self.content.topAnchor constraintEqualToAnchor:sc.contentLayoutGuide.topAnchor], [self.content.bottomAnchor constraintEqualToAnchor:sc.contentLayoutGuide.bottomAnchor],
        [self.content.leadingAnchor constraintEqualToAnchor:sc.contentLayoutGuide.leadingAnchor], [self.content.widthAnchor constraintEqualToAnchor:sc.frameLayoutGuide.widthAnchor]]];
    [self fillTab];
}
- (void)row:(NSString *)label control:(UIView *)c {
    UILabel *l = ck_label(label, f_disp(15, UIFontWeightBold), C_INK);
    l.numberOfLines = 2; l.adjustsFontSizeToFitWidth = YES;
    fix_w(l, 170);
    UIStackView *r = hstack(@[l, c], 14);
    r.layoutMargins = UIEdgeInsetsMake(8, 0, 8, 0); r.layoutMarginsRelativeArrangement = YES;
    [self.content addArrangedSubview:r];
    UIView *line = [[UIView alloc] init];
    line.backgroundColor = rgb(C_RAIL); fix_h(line, 1);
    [self.content addArrangedSubview:line];
}
- (void)hint:(NSString *)s {
    UILabel *h = ck_label(s, f_body(14, UIFontWeightSemibold), C_SUB);
    h.numberOfLines = 0;
    UIStackView *wrap = vstack(@[h], 0);
    wrap.layoutMargins = UIEdgeInsetsMake(8, 0, 6, 0); wrap.layoutMarginsRelativeArrangement = YES;
    [self.content addArrangedSubview:wrap];
}
- (UIStackView *)pills:(NSArray<NSString *> *)labels key:(NSString *)key values:(NSArray *)values {
    UIStackView *g = hstack(@[], 6);
    __weak SettingsVC *w = self;
    __weak UIStackView *wg = g;
    for (NSUInteger i = 0; i < labels.count; i++) {
        id v = values[i];
        CKButton *b = ck_pill(labels[i], f_body(14, UIFontWeightBold), C_INK, UIColor.whiteColor, rgb(C_LINE), 40, ^(CKButton *x) {
            for (UIView *o in wg.arrangedSubviews) if ([o isKindOfClass:UIButton.class]) pill_look((UIButton *)o, o == x);   // the last one is a spacer
            [w picked:key value:v];
        });
        b.contentEdgeInsets = UIEdgeInsetsMake(0, 14, 0, 14);
        b.titleLabel.adjustsFontSizeToFitWidth = YES; b.titleLabel.minimumScaleFactor = 0.7;
        [b.widthAnchor constraintGreaterThanOrEqualToConstant:52].active = YES;
        pill_look(b, [self.o[key] isEqual:v]);
        [g addArrangedSubview:b];
    }
    [g addArrangedSubview:[[UIView alloc] init]];
    return g;
}
- (void)picked:(NSString *)key value:(id)v {
    if ([key isEqualToString:@"controltype"]) {                     // keyboard / controller: on-screen buttons invisible
        if ([v isEqualToString:@"keyboard"]) self.o[@"opacity"] = @0;
        else if ([self.o[@"opacity"] floatValue] == 0) self.o[@"opacity"] = @0.6;
    }
    self.o[key] = v;
}
- (UIView *)slider:(float)lo hi:(float)hi step:(float)step key:(NSString *)key low:(NSString *)low high:(NSString *)high fmt:(NSString *(^)(float v))fmt {
    UILabel *out = ck_label(fmt([self.o[key] floatValue]), f_disp(17, UIFontWeightHeavy), C_INK);
    out.textAlignment = NSTextAlignmentRight;
    [out.widthAnchor constraintGreaterThanOrEqualToConstant:48].active = YES;
    __weak SettingsVC *w = self;
    CKSlider *s = ck_slider(lo, hi, [self.o[key] floatValue], C_BLUE, ^(CKSlider *sl) {
        float v = roundf(sl.value / step) * step;
        w.o[key] = @(v);
        out.text = fmt(v);
    });
    NSMutableArray *v = [NSMutableArray array];
    if (low) [v addObject:ck_label(low, f_body(13, UIFontWeightSemibold), C_SUB)];
    [v addObject:s];
    if (high) [v addObject:ck_label(high, f_body(13, UIFontWeightSemibold), C_SUB)];
    [v addObject:out];
    UIStackView *r = hstack(v, 12);
    [s setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];
    return r;
}
- (UIView *)onOff:(NSString *)key {
    __weak SettingsVC *w = self;
    CKButton *b = ck_button(^(CKButton *x) {
        BOOL on = ![w.o[key] boolValue];
        w.o[key] = @(on);
        [x setImage:check_img(on, C_BLUE, 0xFFFFFF, 1, C_EDGE, 0xFFFFFF) forState:UIControlStateNormal];
    });
    [b setImage:check_img([self.o[key] boolValue], C_BLUE, 0xFFFFFF, 1, C_EDGE, 0xFFFFFF) forState:UIControlStateNormal];
    [b setTitle:[self t:@"On" zh:@"开"] forState:UIControlStateNormal];
    [b setTitleColor:rgb(C_INK) forState:UIControlStateNormal];
    b.titleLabel.font = f_body(14, UIFontWeightSemibold);
    b.titleEdgeInsets = UIEdgeInsetsMake(0, 10, 0, -10);
    b.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    fix_h(b, 40);
    return b;
}
- (CKButton *)keyButton:(NSString *)t tap:(void (^)(CKButton *))tap {
    CKButton *b = ck_pill(t, f_body(14, UIFontWeightBold), C_INK, UIColor.whiteColor, rgb(C_EDGE), 40, tap);
    b.layer.cornerRadius = 10;
    b.titleLabel.adjustsFontSizeToFitWidth = YES;
    b.contentEdgeInsets = UIEdgeInsetsMake(0, 4, 0, 4);
    return b;
}
- (void)capture:(BOOL)combo got:(void (^)(NSArray<NSNumber *> *))got {
    [self.view endEditing:YES];
    CaptureVC *c = [[CaptureVC alloc] init];
    c.combo = combo; c.zh = self.zh; c.got = got;
    c.modalPresentationStyle = UIModalPresentationOverFullScreen;
    [self presentViewController:c animated:NO completion:nil];
}
- (void)fillTab {
    for (UIView *v in self.content.arrangedSubviews) [v removeFromSuperview];
    __weak SettingsVC *w = self;
    NSString *tab = self.tab;
    if ([tab isEqualToString:@"display"]) {
        [self row:[self t:@"Screen" zh:@"画面"] control:[self pills:@[[self t:@"Fill screen" zh:@"全屏"], [self t:@"16:9 with bars" zh:@"16:9 黑边"]] key:@"wide" values:@[@YES, @NO]]];
        [self row:[self t:@"Render quality" zh:@"渲染质量"] control:[self slider:50 hi:100 step:5 key:@"scale" low:nil high:nil fmt:^NSString *(float v) {
            return [NSString stringWithFormat:@"%d%%%@", (int)v, (int)v == 100 ? [w t:@"  (full)" zh:@"  （原画）"] : @""]; }]];
        [self row:[self t:@"Graphics detail" zh:@"画质"] control:[self pills:@[[self t:@"High" zh:@"高"], [self t:@"Middle" zh:@"中"]] key:@"detail" values:@[@0, @1]]];
        [self row:[self t:@"Effects" zh:@"特效"] control:[self pills:@[[self t:@"All" zh:@"全部"], [self t:@"Fewer" zh:@"精简"]] key:@"effects" values:@[@YES, @NO]]];
        [self row:[self t:@"Compact 3D data" zh:@"精简3D数据"] control:[self pills:@[[self t:@"On" zh:@"开"], [self t:@"Off" zh:@"关"]] key:@"lean" values:@[@YES, @NO]]];
        [self row:[self t:@"Compressed textures" zh:@"纹理压缩"] control:[self pills:@[[self t:@"On" zh:@"开"], [self t:@"Off" zh:@"关"]] key:@"etc2" values:@[@YES, @NO]]];
        [self row:[self t:@"Frame rate cap" zh:@"帧率上限"] control:[self pills:@[[self t:@"Auto" zh:@"自动"], @"30", @"60", @"90", @"120"] key:@"fps" values:@[@0, @30, @60, @90, @120]]];
    } else if ([tab isEqualToString:@"game"]) {
        [self row:[self t:@"Other players' accessories" zh:@"其他玩家的赛车配件"] control:[self pills:@[[self t:@"Show" zh:@"显示"], [self t:@"Hide" zh:@"隐藏"]] key:@"accessories" values:@[@YES, @NO]]];
        [self row:[self t:@"Show ping" zh:@"显示延迟"] control:[self pills:@[[self t:@"In the room" zh:@"房间内"], [self t:@"In races" zh:@"比赛中"], [self t:@"Both" zh:@"两者"]] key:@"ping" values:@[@"room", @"race", @"room,race"]]];
        [self hint:[self t:@"Hiding other players' accessories can make races smoother on slower phones. Your own kart and what others see stay the same. Changes apply within half a minute, accessories from the next room you join."
                        zh:@"隐藏其他玩家的配件可以让配置较低的手机比赛更流畅。你自己的赛车和别人看到的都不会改变。更改会在半分钟内生效，配件从下一个进入的房间开始。"]];
    } else if ([tab isEqualToString:@"sound"]) {
        NSString *(^num)(float) = ^NSString *(float v) { return [NSString stringWithFormat:@"%d", (int)v]; };
        [self row:[self t:@"Music" zh:@"音乐"] control:[self onOff:@"music"]];
        [self row:[self t:@"Music volume" zh:@"音乐音量"] control:[self slider:0 hi:10 step:1 key:@"musicVol" low:[self t:@"Low" zh:@"低"] high:[self t:@"High" zh:@"高"] fmt:num]];
        [self row:[self t:@"Sound effects" zh:@"音效"] control:[self onOff:@"sfx"]];
        [self row:[self t:@"Effects volume" zh:@"音效音量"] control:[self slider:0 hi:10 step:1 key:@"sfxVol" low:[self t:@"Low" zh:@"低"] high:[self t:@"High" zh:@"高"] fmt:num]];
    } else if ([tab isEqualToString:@"controls"]) {
        [self row:[self t:@"Touch controls" zh:@"触屏操作"] control:[self pills:@[[self t:@"Classic" zh:@"经典"], [self t:@"Mobile" zh:@"手游"], [self t:@"Keyboard / controller" zh:@"键盘 / 手柄"]]
                                                                         key:@"controltype" values:@[@"classic", @"mobile", @"keyboard"]]];
        UILabel *a = ck_label([self t:@"ACTION" zh:@"操作"], f_disp(13, UIFontWeightBold), C_SUB), *k = ck_label([self t:@"KEYBOARD" zh:@"键盘"], f_disp(13, UIFontWeightBold), C_SUB),
                *p = ck_label([self t:@"CONTROLLER" zh:@"手柄"], f_disp(13, UIFontWeightBold), C_SUB);
        fix_w(a, 170);
        UIStackView *hd = hstack(@[a, k, p], 10);
        [k.widthAnchor constraintEqualToAnchor:p.widthAnchor].active = YES;
        hd.layoutMargins = UIEdgeInsetsMake(12, 0, 4, 0); hd.layoutMarginsRelativeArrangement = YES;
        [self.content addArrangedSubview:hd];
        for (int i = 0; i < CT_N; i++) {
            UILabel *name = ck_label(self.zh ? CT_ZH[i] : CT_EN[i], f_disp(15, UIFontWeightBold), C_INK);
            fix_w(name, 170);
            NSString *kbKey = [@"kb_" stringByAppendingString:CT_ID[i]], *padKey = [@"pad_" stringByAppendingString:CT_ID[i]];
            CKButton *kb = [self keyButton:ct_name(ct_kb(i), self.zh) tap:^(CKButton *b) {
                [w capture:NO got:^(NSArray<NSNumber *> *c) {
                    int code = c.count ? c[0].intValue : 0;
                    [NSUserDefaults.standardUserDefaults setInteger:code forKey:kbKey];
                    [b setTitle:ct_name(code, w.zh) forState:UIControlStateNormal];
                }];
            }];
            CKButton *pad = [self keyButton:ct_name(ct_pad(i), self.zh) tap:^(CKButton *b) {
                [w capture:NO got:^(NSArray<NSNumber *> *c) {
                    int code = c.count ? c[0].intValue : 0;
                    [NSUserDefaults.standardUserDefaults setInteger:code forKey:padKey];
                    [b setTitle:ct_name(code, w.zh) forState:UIControlStateNormal];
                }];
            }];
            UIStackView *r = hstack(@[name, kb, pad], 10);
            [kb.widthAnchor constraintEqualToAnchor:pad.widthAnchor].active = YES;
            r.layoutMargins = UIEdgeInsetsMake(3, 0, 3, 0); r.layoutMarginsRelativeArrangement = YES;
            [self.content addArrangedSubview:r];
        }
        CKButton *reset = ck_light([self t:@"Reset controls" zh:@"恢复默认按键"], ^(CKButton *b) {
            for (int i = 0; i < CT_N; i++) {
                [NSUserDefaults.standardUserDefaults removeObjectForKey:[@"kb_" stringByAppendingString:CT_ID[i]]];
                [NSUserDefaults.standardUserDefaults removeObjectForKey:[@"pad_" stringByAppendingString:CT_ID[i]]];
            }
            [w fillTab];
        });
        UIStackView *rw = hstack(@[reset, [[UIView alloc] init]], 0);
        rw.layoutMargins = UIEdgeInsetsMake(10, 0, 0, 0); rw.layoutMarginsRelativeArrangement = YES;
        [self.content addArrangedSubview:rw];
    } else if ([tab isEqualToString:@"hud"]) {
        NSString *ct = self.o[@"controltype"];
        CKButton *edit = ck_pill([self t:@"Edit HUD layout" zh:@"编辑 HUD 布局"], f_disp(15, UIFontWeightBold), 0xFFFFFF, rgb(C_BLUE), nil, 44, ^(CKButton *b) {
            hud_opacity_set([w.o[@"opacity"] floatValue]);           // the editor starts from the opacity chosen here
            HudEditorVC *vc = [[HudEditorVC alloc] init];
            vc.mode = w.o[@"controltype"];
            vc.modalPresentationStyle = UIModalPresentationFullScreen;
            [w presentViewController:vc animated:YES completion:nil];
        });
        [edit setImage:ck_icon(IC_MOVE, 0xFFFFFF, 18) forState:UIControlStateNormal];
        edit.titleEdgeInsets = UIEdgeInsetsMake(0, 8, 0, -8);
        edit.contentEdgeInsets = UIEdgeInsetsMake(0, 14, 0, 26);
        step_shadow(edit, C_SLAB, 4);
        UILabel *scope = ck_label([ct isEqualToString:@"mobile"] ? [self t:@"Every HUD element and on-screen button, plus the Auto gas switch." zh:@"全部 HUD 元素和屏幕按键，以及自动油门开关。"]
                                  : [ct isEqualToString:@"keyboard"] ? [self t:@"On-screen buttons are hidden; the race HUD can still be moved." zh:@"屏幕按键已隐藏；比赛 HUD 仍可移动。"]
                                  : [self t:@"Every HUD element and on-screen button." zh:@"全部 HUD 元素和屏幕按键。"], f_body(13, UIFontWeightSemibold), C_SUB);
        scope.numberOfLines = 0;
        UIStackView *hc = vstack(@[hstack(@[edit, [[UIView alloc] init]], 0), scope], 4);
        [self row:[self t:@"HUD layout" zh:@"HUD 布局"] control:hc];
        [self row:[self t:@"On-screen buttons" zh:@"屏幕按键透明度"] control:[self slider:0 hi:1 step:0.05 key:@"opacity" low:nil high:nil fmt:^NSString *(float v) {
            return [NSString stringWithFormat:@"%d%%", (int)lroundf(v * 100)]; }]];
        [self hint:[self t:@"In the editor, tap an item to move it or change its size. Tap an on-screen button to also pick its icon from your gallery."
                        zh:@"在编辑器中点击元素可以移动或调整大小。点击屏幕按键还可以从相册选择图标。"]];
    } else if ([tab isEqualToString:@"chat"]) {
        [self hint:[self t:@"The game’s 9 quick-chat lines, each with a key or two-button combination that sends it." zh:@"游戏的 9 条快捷聊天，每条可设置一个按键或组合键来发送。"]];
        for (int s = 0; s < CT_MACROS; s++) {
            UILabel *num = ck_label([NSString stringWithFormat:@"%d", s + 1], f_disp(15, UIFontWeightHeavy), C_SUB);
            num.textAlignment = NSTextAlignmentRight; fix_w(num, 20);
            UITextField *f = [[UITextField alloc] init];
            f.text = self.macros[s]; f.textColor = rgb(C_INK); f.font = f_body(15, UIFontWeightSemibold);
            ck_box(f, UIColor.whiteColor, rgb(C_EDGE), 1, 10);
            f.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 12, 1)]; f.leftViewMode = UITextFieldViewModeAlways;
            f.returnKeyType = UIReturnKeyDone; f.delegate = self; f.autocorrectionType = UITextAutocorrectionTypeNo;
            f.tag = s;
            f.accessibilityLabel = [NSString stringWithFormat:@"%@ %d", [self t:@"Quick chat line" zh:@"快捷聊天"], s + 1];
            [f addTarget:self action:@selector(macroEdited:) forControlEvents:UIControlEventEditingChanged];
            fix_h(f, 40);
            NSString *mk = [NSString stringWithFormat:@"macro_%d", s];
            CKButton *combo = [self keyButton:ct_combo(ct_macro(s), self.zh) tap:^(CKButton *b) {
                [w capture:YES got:^(NSArray<NSNumber *> *c) {
                    [NSUserDefaults.standardUserDefaults setObject:[c componentsJoinedByString:@"+"] forKey:mk];
                    [b setTitle:ct_combo(c, w.zh) forState:UIControlStateNormal];
                }];
            }];
            [combo setTitleColor:rgb(C_SUB) forState:UIControlStateNormal];
            UIStackView *r = hstack(@[num, f, combo], 10);
            [f.widthAnchor constraintEqualToAnchor:combo.widthAnchor multiplier:2.2 / 1.2].active = YES;
            r.layoutMargins = UIEdgeInsetsMake(3, 0, 3, 0); r.layoutMarginsRelativeArrangement = YES;
            [self.content addArrangedSubview:r];
        }
    } else if ([tab isEqualToString:@"gamma"]) {
        UIImage *art = [UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"launcher_keyart.png"]];
        UIImageView *before = [[UIImageView alloc] initWithImage:art ? gamma_img(art, 1) : nil], *after = [[UIImageView alloc] initWithImage:art ? gamma_img(art, [self.o[@"gamma"] floatValue]) : nil];
        UIView *sl = [self slider:0.5 hi:3 step:0.1 key:@"gamma" low:nil high:nil fmt:^NSString *(float v) {
            if (art) after.image = gamma_img(art, v);
            return [NSString stringWithFormat:@"%.1f", v]; }];
        CKButton *def = ck_light([self t:@"Default gamma" zh:@"默认亮度"], ^(CKButton *b) { w.o[@"gamma"] = @1.0; [w fillTab]; });
        [self row:@"Gamma" control:hstack(@[sl, def], 10)];
        [sl setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];
        NSMutableArray *figs = [NSMutableArray array];
        for (UIImageView *iv in @[before, after]) {
            iv.contentMode = UIViewContentModeScaleAspectFill; iv.clipsToBounds = YES; iv.layer.cornerRadius = 10;
            fix_h(iv, 96);
            [figs addObject:vstack(@[iv, ck_label(iv == before ? [self t:@"Original" zh:@"原图"] : [self t:@"Corrected" zh:@"校正"], f_body(13, UIFontWeightSemibold), C_SUB)], 4)];
        }
        UIStackView *two = hstack(figs, 12);
        two.distribution = UIStackViewDistributionFillEqually; two.alignment = UIStackViewAlignmentTop;
        two.layoutMargins = UIEdgeInsetsMake(4, 0, 4, 0); two.layoutMarginsRelativeArrangement = YES;
        [self.content addArrangedSubview:two];
    }
}
- (void)macroEdited:(UITextField *)f { if (f.tag >= 0 && f.tag < (NSInteger)self.macros.count) self.macros[(NSUInteger)f.tag] = f.text ?: @""; }
- (BOOL)textFieldShouldReturn:(UITextField *)f { [f resignFirstResponder]; return NO; }
- (void)askRepair {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:nil
        message:[self t:@"Copy every game file again from the app? It runs at the next Play." zh:@"从应用中重新复制所有游戏文件？会在下次开始游戏时进行。"]
        preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:[self t:@"Cancel" zh:@"取消"] style:UIAlertActionStyleCancel handler:nil]];
    [a addAction:[UIAlertAction actionWithTitle:[self t:@"Repair" zh:@"修复"] style:UIAlertActionStyleDefault handler:^(UIAlertAction *x) {
        // no data folder: the next Play copies the game files out of the app again (LoginVC go); hud_layout.txt stays
        [NSFileManager.defaultManager removeItemAtPath:[docs() stringByAppendingPathComponent:@"game/data"] error:nil];
    }]];
    [self presentViewController:a animated:YES completion:nil];
}
- (void)close:(BOOL)saved {
    [self.view endEditing:YES];
    if (saved) {
        NSUserDefaults *d = NSUserDefaults.standardUserDefaults;
        for (NSString *k in SettingsVC.defaults) [d setObject:self.o[k] forKey:k];
        NSString *ct = self.o[@"controltype"];
        [d setObject:ct forKey:@"controltype"];
        [d setBool:[ct isEqualToString:@"mobile"] forKey:@"touchmobile"];
        [d setObject:self.zh ? @"zh" : @"en" forKey:@"lang"];
        hud_opacity_set([self.o[@"opacity"] floatValue]);
        BOOL changed = NO;
        for (int s = 0; s < CT_MACROS && self.us.length >= 0x58 + (s + 1) * 0x400; s++) {     // UTF-16LE, zero padded, 511 chars at most
            NSString *m = self.macros[s];
            if ([m isEqualToString:[self macroText:s]]) continue;
            if (m.length > 511) m = [m substringToIndex:511];
            NSData *u = [m dataUsingEncoding:NSUTF16LittleEndianStringEncoding] ?: [NSData data];
            NSUInteger o = 0x58 + s * 0x400;
            [self.us resetBytesInRange:NSMakeRange(o, 0x400)];
            [self.us replaceBytesInRange:NSMakeRange(o, MIN(u.length, 0x3fe)) withBytes:u.bytes];
            changed = YES;
        }
        if (changed) {
            [NSFileManager.defaultManager createDirectoryAtPath:[self.usPath stringByDeletingLastPathComponent] withIntermediateDirectories:YES attributes:nil error:nil];
            [self.us writeToFile:self.usPath atomically:YES];
        }
    }
    void (^closed)(BOOL) = self.closed;
    [self dismissViewControllerAnimated:YES completion:^{ if (closed) closed(saved); }];
}
- (BOOL)prefersStatusBarHidden { return YES; }
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
@end

// ---- the launcher (the design): logo + server + Play on the left, the sign-in card or the racer's profile card (site
// profile look) on the right; first start: language -> control type -> HUD editor (keyboard / controller: a note)
@interface LoginVC : UIViewController <UITextFieldDelegate>
@property (strong) NSUserDefaults *prefs;
@property BOOL zh;
@property int srv;
@property (copy) NSString *sessionKey;                  // signed in without "Remember": this run only
@property int sessionSrv;
@property unsigned base, accent;                        // the racer's site profile theme
@property BOOL rememberOn;
@property (copy) NSString *skinFor;                     // the user whose look is loading / shown
@property (strong) UITextField *user, *pass;
@property (strong) UILabel *formError, *signInFirst, *status, *verText, *serverName, *playText, *cardName;
@property (strong) UIProgressView *bar;
@property (strong) UIView *formCard, *profile, *overlay, *note, *serverList;
@property (strong) CKButton *serverPill, *playBtn, *signInBtn, *signOutBtn, *rememberBtn;
@property (strong) UIImageView *playIcon, *cover, *avatar;
@end
@implementation LoginVC
- (NSString *)t:(NSString *)en zh:(NSString *)zh { return self.zh ? zh : en; }
- (NSString *)name:(int)i { return self.zh ? (i ? @"香港" : @"印度") : (i ? @"Hong Kong" : @"India"); }
static NSArray *theme_colours(NSString *theme) {        // accent, band (the launcher's profile-theme-* colours)
    if ([theme isEqualToString:@"sunset"]) return @[@0xE2551B, @0xFFB38A];
    if ([theme isEqualToString:@"mint"]) return @[@0x10917D, @0x8FE0CF];
    if ([theme isEqualToString:@"grape"]) return @[@0x7A3FD1, @0xC9B0F2];
    if ([theme isEqualToString:@"gold"]) return @[@0xC98F00, @0xF5C21B];
    return @[@0x1A4FD6, @0x8FD3F2];                         // sky (the site's default)
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.prefs = NSUserDefaults.standardUserDefaults;
    self.zh = [[self.prefs stringForKey:@"lang"] isEqualToString:@"zh"];
    self.srv = (int)MAX(0, MIN(1, [self.prefs integerForKey:@"server"]));
    self.sessionKey = @""; self.sessionSrv = -1;
    self.rememberOn = [self.prefs objectForKey:@"remember"] ? [self.prefs boolForKey:@"remember"] : YES;
    NSArray *th = theme_colours([self.prefs stringForKey:@"theme"] ?: @"sky");
    self.base = [th[0] unsignedIntValue]; self.accent = [th[1] unsignedIntValue];
    [self build];
}
- (void)build {
    for (UIView *v in self.view.subviews) [v removeFromSuperview];
    self.overlay = nil; self.note = nil; self.serverList = nil;
    __weak LoginVC *w = self;
    UIImageView *logo = [[UIImageView alloc] initWithImage:[UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"launcher_logo.png"]]];
    logo.contentMode = UIViewContentModeScaleAspectFit;
    logo.accessibilityLabel = @"CrazyKart Legacy";
    fix_h(logo, 100);

    // server: a pill that opens the list above it (signed in and out: the sign-in goes to the picked server)
    self.serverPill = ck_button(^(CKButton *b) { [w pickServer]; });
    self.serverName = ck_label(@"", f_disp(17, UIFontWeightHeavy), 0xFFFFFF);
    UIStackView *sp = hstack(@[ck_icon_view(IC_SERVER, 0xA9BDB0, 20), self.serverName, ck_icon_view(IC_CHEV_UP, 0xCFDCD3, 20)], 12);
    [self.serverName setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];
    sp.userInteractionEnabled = NO;
    sp.translatesAutoresizingMaskIntoConstraints = NO;
    [self.serverPill addSubview:sp];
    [NSLayoutConstraint activateConstraints:@[[sp.leadingAnchor constraintEqualToAnchor:self.serverPill.leadingAnchor constant:16],
        [sp.trailingAnchor constraintEqualToAnchor:self.serverPill.trailingAnchor constant:-14], [sp.centerYAnchor constraintEqualToAnchor:self.serverPill.centerYAnchor]]];
    fix_h(self.serverPill, 48);
    self.serverPill.layer.cornerRadius = 24;

    self.playBtn = ck_button(^(CKButton *b) { [w go]; });
    self.playIcon = ck_icon_view(IC_PLAY, C_INK, 22);
    self.playText = ck_label([self t:@"Play" zh:@"开始游戏"], f_disp(24, UIFontWeightHeavy), C_INK);
    UIStackView *pc = hstack(@[self.playIcon, self.playText], 10);
    pc.userInteractionEnabled = NO;
    pc.translatesAutoresizingMaskIntoConstraints = NO;
    [self.playBtn addSubview:pc];
    [NSLayoutConstraint activateConstraints:@[[pc.centerXAnchor constraintEqualToAnchor:self.playBtn.centerXAnchor], [pc.centerYAnchor constraintEqualToAnchor:self.playBtn.centerYAnchor]]];
    fix_h(self.playBtn, 56);
    self.playBtn.layer.cornerRadius = 28;
    self.signInFirst = ck_label(@"", f_body(13, UIFontWeightBold), C_MUTED);
    self.signInFirst.textAlignment = NSTextAlignmentCenter;
    self.status = ck_label(@"", f_body(13, UIFontWeightSemibold), C_MUTED);
    self.status.textAlignment = NSTextAlignmentCenter; self.status.numberOfLines = 0; self.status.hidden = YES;
    self.bar = [[UIProgressView alloc] init];
    self.bar.progressTintColor = rgb(C_YELLOW); self.bar.hidden = YES;

    CKButton *set = ck_pill([self t:@"Settings" zh:@"设置"], f_disp(15, UIFontWeightBold), 0xFFFFFF, [UIColor colorWithWhite:0 alpha:0.25], [UIColor colorWithWhite:1 alpha:0.16], 44,
                            ^(CKButton *b) { [w openSettings]; });
    [set setImage:ck_icon(IC_GEAR, 0xFFFFFF, 20) forState:UIControlStateNormal];
    set.titleEdgeInsets = UIEdgeInsetsMake(0, 8, 0, -8);
    set.contentEdgeInsets = UIEdgeInsetsMake(0, 12, 0, 24);
    NSString *ver = [NSBundle.mainBundle objectForInfoDictionaryKey:@"CFBundleShortVersionString"] ?: @"";
    self.verText = ck_label([[self t:@"Launcher " zh:@"启动器 "] stringByAppendingString:ver], f_body(12, UIFontWeightSemibold), C_MUTED);
    self.verText.textAlignment = NSTextAlignmentRight;
    UIStackView *tools = hstack(@[set, self.verText], 8);
    [self.verText setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];

    UIStackView *left = vstack(@[logo, self.serverPill, self.playBtn, self.signInFirst, self.status, self.bar, tools], 10);
    [left setCustomSpacing:16 afterView:logo];
    [left setCustomSpacing:4 afterView:self.playBtn];
    fix_w(left, 330);

    self.formCard = [self signInCard];
    self.profile = [self profileCard];
    UIStackView *cards = vstack(@[self.formCard, self.profile], 0);
    UIView *right = [[UIView alloc] init];
    cards.translatesAutoresizingMaskIntoConstraints = NO;
    [right addSubview:cards];
    NSLayoutYAxisAnchor *kb = right.bottomAnchor;                    // iOS 15+: the card moves up over the keyboard
    if (@available(iOS 15.0, *)) kb = self.view.keyboardLayoutGuide.topAnchor;
    NSLayoutConstraint *mid = [cards.centerYAnchor constraintEqualToAnchor:right.centerYAnchor];
    mid.priority = UILayoutPriorityDefaultLow;

    UIStackView *main = hstack(@[left, right], 28);
    main.alignment = UIStackViewAlignmentCenter;
    main.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:main];
    UILayoutGuide *g = self.view.safeAreaLayoutGuide;
    // only now: the keyboard guide belongs to self.view, and a constraint to a view outside its tree throws (the 12 Nov
    // design-test IPA closed at launch: the card was activated against the guide before main was added)
    [NSLayoutConstraint activateConstraints:@[mid, [cards.leadingAnchor constraintEqualToAnchor:right.leadingAnchor], [cards.trailingAnchor constraintEqualToAnchor:right.trailingAnchor],
        [cards.topAnchor constraintGreaterThanOrEqualToAnchor:right.topAnchor], [cards.bottomAnchor constraintLessThanOrEqualToAnchor:kb constant:-8]]];
    [NSLayoutConstraint activateConstraints:@[
        [main.leadingAnchor constraintEqualToAnchor:g.leadingAnchor constant:16], [main.trailingAnchor constraintEqualToAnchor:g.trailingAnchor constant:-16],
        [main.topAnchor constraintEqualToAnchor:g.topAnchor constant:12], [main.bottomAnchor constraintEqualToAnchor:g.bottomAnchor constant:-12],
        [right.heightAnchor constraintEqualToAnchor:main.heightAnchor]]];
    [self showSignedIn];
}
- (UIView *)fieldLabel:(NSString *)s {
    UILabel *l = ck_label(s, f_disp(13, UIFontWeightBold), C_MUTED);
    return l;
}
- (UITextField *)field:(BOOL)secret {
    UITextField *f = [[UITextField alloc] init];
    f.secureTextEntry = secret; f.textColor = UIColor.whiteColor; f.font = f_body(16, UIFontWeightSemibold);
    ck_box(f, [UIColor colorWithWhite:0 alpha:0.25], [UIColor colorWithWhite:1 alpha:0.14], 1, 12);
    f.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 12, 1)]; f.leftViewMode = UITextFieldViewModeAlways;
    f.delegate = self; f.returnKeyType = secret ? UIReturnKeyGo : UIReturnKeyNext;
    f.autocapitalizationType = UITextAutocapitalizationTypeNone; f.autocorrectionType = UITextAutocorrectionTypeNo;
    fix_h(f, 44);
    return f;
}
- (UIView *)signInCard {
    __weak LoginVC *w = self;
    self.user = [self field:NO];
    self.user.text = [self.prefs stringForKey:@"user"];
    self.user.textContentType = UITextContentTypeUsername;
    self.pass = [self field:YES];
    self.pass.textContentType = UITextContentTypePassword;
    CKButton *eye = ck_button(^(CKButton *b) {
        w.pass.secureTextEntry = !w.pass.secureTextEntry;
        BOOL shown = !w.pass.secureTextEntry;
        [b setImage:ck_icon(shown ? IC_EYE_OFF : IC_EYE, shown ? C_YELLOW : C_MUTED, 19) forState:UIControlStateNormal];
        b.accessibilityLabel = shown ? [w t:@"Hide password" zh:@"隐藏密码"] : [w t:@"Show password" zh:@"显示密码"];
    });
    [eye setImage:ck_icon(IC_EYE, C_MUTED, 19) forState:UIControlStateNormal];
    eye.frame = CGRectMake(0, 0, 44, 44);
    eye.accessibilityLabel = [self t:@"Show password" zh:@"显示密码"];
    self.pass.rightView = eye; self.pass.rightViewMode = UITextFieldViewModeAlways;
    UIStackView *c1 = vstack(@[[self fieldLabel:[self t:@"Username" zh:@"账号"]], self.user], 4), *c2 = vstack(@[[self fieldLabel:[self t:@"Password" zh:@"密码"]], self.pass], 4);
    UIStackView *grid = hstack(@[c1, c2], 10);
    grid.distribution = UIStackViewDistributionFillEqually; grid.alignment = UIStackViewAlignmentFill;
    self.rememberBtn = ck_button(^(CKButton *b) {
        w.rememberOn = !w.rememberOn;
        [b setImage:check_img(w.rememberOn, C_YELLOW, 0x000000, 0.25, 0x707070, C_INK) forState:UIControlStateNormal];
    });
    [self.rememberBtn setImage:check_img(self.rememberOn, C_YELLOW, 0x000000, 0.25, 0x707070, C_INK) forState:UIControlStateNormal];
    NSMutableAttributedString *rt = [[NSMutableAttributedString alloc] initWithString:[self t:@"Remember this device" zh:@"在此设备上记住我"]
                                                                          attributes:@{NSForegroundColorAttributeName: UIColor.whiteColor, NSFontAttributeName: f_body(14, UIFontWeightSemibold)}];
    [rt appendAttributedString:[[NSAttributedString alloc] initWithString:[self t:@" (30 days)" zh:@"（30天）"]
                                                               attributes:@{NSForegroundColorAttributeName: [UIColor colorWithWhite:1 alpha:0.6], NSFontAttributeName: f_body(13, UIFontWeightSemibold)}]];
    [self.rememberBtn setAttributedTitle:rt forState:UIControlStateNormal];
    self.rememberBtn.titleEdgeInsets = UIEdgeInsetsMake(0, 10, 0, -10);
    self.rememberBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    fix_h(self.rememberBtn, 36);
    self.formError = ck_label(@"", f_body(13, UIFontWeightBold), C_ERROR);
    self.formError.numberOfLines = 0; self.formError.hidden = YES;
    self.signInBtn = ck_yellow([self t:@"Sign in" zh:@"登录"], 21, 50, ^(CKButton *b) { [w signIn]; });
    UIStackView *on = vstack(@[grid, self.rememberBtn, self.formError, self.signInBtn], 10);
    on.layoutMargins = UIEdgeInsetsMake(16, 18, 16, 18); on.layoutMarginsRelativeArrangement = YES;
    UIView *chk = [[UIView alloc] init];
    chk.backgroundColor = checker(5); fix_h(chk, 10);
    UIStackView *c = vstack(@[on, chk], 0);
    UIView *box = [[UIView alloc] init];
    ck_box(box, [UIColor colorWithWhite:0 alpha:0.25], [UIColor colorWithWhite:1 alpha:0.14], 1, 16);
    box.clipsToBounds = YES;
    c.translatesAutoresizingMaskIntoConstraints = NO;
    [box addSubview:c];
    [NSLayoutConstraint activateConstraints:@[[c.leadingAnchor constraintEqualToAnchor:box.leadingAnchor], [c.trailingAnchor constraintEqualToAnchor:box.trailingAnchor],
        [c.topAnchor constraintEqualToAnchor:box.topAnchor], [c.bottomAnchor constraintEqualToAnchor:box.bottomAnchor]]];
    return box;
}
- (UIView *)profileCard {
    __weak LoginVC *w = self;
    UIView *gold = [[UIView alloc] init];
    gold.backgroundColor = rgb(C_GOLD); fix_h(gold, 5);
    self.cover = [[UIImageView alloc] init];
    self.cover.contentMode = UIViewContentModeScaleAspectFill; self.cover.clipsToBounds = YES;
    self.cover.backgroundColor = stripes(0x151515, [UIColor colorWithWhite:1 alpha:0.045], 20);
    fix_h(self.cover, 150);
    self.avatar = [[UIImageView alloc] initWithImage:[UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"launcher_avatar.png"]]];
    self.avatar.contentMode = UIViewContentModeScaleAspectFill; self.avatar.clipsToBounds = YES;
    self.avatar.layer.cornerRadius = 12; self.avatar.layer.borderWidth = 2; self.avatar.layer.borderColor = rgb(C_GOLD).CGColor;
    fix_w(self.avatar, 60); fix_h(self.avatar, 60);
    self.cardName = ck_label(@"", f_disp(22, UIFontWeightHeavy), self.accent);
    self.cardName.lineBreakMode = NSLineBreakByTruncatingTail;
    UIView *dot = [[UIView alloc] init];
    dot.backgroundColor = rgb(0x8F9AA3); dot.layer.cornerRadius = 4.5; fix_w(dot, 9); fix_h(dot, 9);
    UIStackView *idle = hstack(@[dot, ck_label([self t:@"Idle" zh:@"空闲"], f_body(14, UIFontWeightBold), 0xB5C2BA)], 7);
    UIStackView *who = vstack(@[self.cardName, idle], 2);
    who.alignment = UIStackViewAlignmentLeading;
    self.signOutBtn = ck_pill([self t:@"Sign out" zh:@"退出登录"], f_body(14, UIFontWeightHeavy), 0xE6EFE9, UIColor.clearColor, nil, 44, ^(CKButton *b) { [w signOut]; });
    UIStackView *row = hstack(@[self.avatar, who, self.signOutBtn], 12);
    [who setContentHuggingPriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];
    [who setContentCompressionResistancePriority:UILayoutPriorityDefaultLow forAxis:UILayoutConstraintAxisHorizontal];
    row.layoutMargins = UIEdgeInsetsMake(14, 14, 18, 14); row.layoutMarginsRelativeArrangement = YES;
    UIStackView *c = vstack(@[gold, self.cover, row], 0);
    UIView *box = [[UIView alloc] init];
    box.clipsToBounds = YES;
    c.translatesAutoresizingMaskIntoConstraints = NO;
    [box addSubview:c];
    [NSLayoutConstraint activateConstraints:@[[c.leadingAnchor constraintEqualToAnchor:box.leadingAnchor], [c.trailingAnchor constraintEqualToAnchor:box.trailingAnchor],
        [c.topAnchor constraintEqualToAnchor:box.topAnchor], [c.bottomAnchor constraintEqualToAnchor:box.bottomAnchor]]];
    return box;
}
// card or form: signed in = a launcher key for the server that is picked now
- (NSString *)currentKey {
    NSString *k = [self.prefs stringForKey:@"key"];
    if (k.length && [self.prefs integerForKey:@"keyServer"] == self.srv) return k;
    return self.sessionSrv == self.srv ? self.sessionKey : @"";
}
- (void)showSignedIn {
    BOOL on = self.currentKey.length > 0;
    self.serverName.text = [self name:self.srv];
    self.formCard.hidden = on; self.profile.hidden = !on;
    self.signInFirst.hidden = on;
    self.signInFirst.text = !on && [self.prefs stringForKey:@"key"].length ? [self t:@"Sign in to this server first." zh:@"请先登录此服务器。"] : [self t:@"Sign in first." zh:@"请先登录。"];
    self.playBtn.enabled = on;
    self.playBtn.alpha = on ? 1 : 0.6;
    self.playBtn.backgroundColor = on ? rgb(C_YELLOW) : [UIColor colorWithWhite:1 alpha:0.1];
    if (on) step_shadow(self.playBtn, C_DEEP, 4); else self.playBtn.layer.shadowOpacity = 0;
    self.playText.textColor = rgb(on ? C_INK : C_MUTED);
    self.playIcon.image = ck_icon(IC_PLAY, on ? C_INK : C_MUTED, 22);
    if (on) {
        NSString *user = [self.prefs stringForKey:@"user"] ?: @"";
        self.cardName.text = [self.prefs stringForKey:@"nick"].length ? [self.prefs stringForKey:@"nick"] : user;
        [self loadSkin:user];
    }
    [self applyLook:on];
}
// signed in: the screen wears the racer's profile theme (the design's "account style"); signed out: the slab
- (void)applyLook:(BOOL)on {
    unsigned line = mixu(self.base, 0, 0.6);
    self.view.backgroundColor = on ? stripes(mixu(self.base, 0, 0.86), [UIColor colorWithWhite:1 alpha:0.028], 28) : rgb(C_SLAB);
    self.verText.textColor = rgb(on ? mixu(self.accent, 0x6B7280, 0.55) : C_MUTED);
    ck_box(self.serverPill, [UIColor colorWithWhite:0 alpha:0.3], on ? rgb(line) : [UIColor colorWithWhite:1 alpha:0.16], 2, 24);
    ck_box(self.profile, rgb(mixu(self.base, 0, 0.8)), rgb(self.accent), 2, 18);
    self.cardName.textColor = rgb(self.accent);
    ck_box(self.signOutBtn, rgb(mixu(self.base, 0, 0.72)), rgb(mixu(self.base, 0, 0.5)), 1.5, 22);
    self.avatar.backgroundColor = rgb(self.accent);
}
- (void)pickServer {
    if (self.serverList) { [self.serverList removeFromSuperview]; self.serverList = nil; return; }
    __weak LoginVC *w = self;
    BOOL on = self.currentKey.length > 0;
    CKButton *shade = ck_button(^(CKButton *b) { [w.serverList removeFromSuperview]; w.serverList = nil; });   // a tap outside closes it
    shade.frame = self.view.bounds;
    shade.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    UIStackView *list = vstack(@[], 0);
    ck_box(list, on ? rgb(mixu(self.base, 0, 0.8)) : rgb(C_INK), on ? rgb(mixu(self.base, 0, 0.6)) : [UIColor colorWithWhite:1 alpha:0.16], 2, 16);
    list.clipsToBounds = YES;
    for (int i = 0; i < 2; i++) {
        BOOL sel = i == self.srv;
        CKButton *r = ck_button(^(CKButton *b) {
            [w.serverList removeFromSuperview]; w.serverList = nil;
            if (i == w.srv) return;
            w.srv = i;
            [w.prefs setInteger:i forKey:@"server"];
            w.status.hidden = YES;
            [w showSignedIn];
        });
        UIStackView *rc = hstack(@[ck_label([self name:i], f_body(16, UIFontWeightHeavy), 0xFFFFFF)], 8);
        if (sel) [rc addArrangedSubview:ck_icon_view(IC_CHECK, on ? self.accent : C_YELLOW, 20)];
        rc.userInteractionEnabled = NO;
        rc.translatesAutoresizingMaskIntoConstraints = NO;
        [r addSubview:rc];
        [NSLayoutConstraint activateConstraints:@[[rc.leadingAnchor constraintEqualToAnchor:r.leadingAnchor constant:16],
            [rc.trailingAnchor constraintEqualToAnchor:r.trailingAnchor constant:-16], [rc.centerYAnchor constraintEqualToAnchor:r.centerYAnchor]]];
        r.backgroundColor = sel ? (on ? rgb(mixu(self.base, 0, 0.7)) : [UIColor colorWithWhite:1 alpha:0.1]) : UIColor.clearColor;
        fix_h(r, 46);
        [list addArrangedSubview:r];
    }
    CGRect pill = [self.serverPill convertRect:self.serverPill.bounds toView:self.view];
    list.frame = CGRectMake(pill.origin.x, pill.origin.y - 8 - 92, pill.size.width, 92);
    [shade addSubview:list];
    [self.view addSubview:shade];
    self.serverList = shade;
}
- (void)formErr:(NSString *)m { self.formError.text = m; self.formError.hidden = NO; }
- (void)signIn {
    NSString *account = [[self.user.text stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet] lowercaseString] ?: @"";
    NSString *password = self.pass.text ?: @"";
    self.user.layer.borderColor = (account.length ? [UIColor colorWithWhite:1 alpha:0.14] : rgb(C_ERROR)).CGColor;
    self.pass.layer.borderColor = (password.length ? [UIColor colorWithWhite:1 alpha:0.14] : rgb(C_ERROR)).CGColor;
    if (!account.length || !password.length) { [self formErr:[self t:@"Enter your username and password." zh:@"请输入账号和密码。"]]; return; }
    self.formError.hidden = YES;
    self.signInBtn.enabled = NO;
    [self.signInBtn setTitle:[self t:@"Signing in..." zh:@"正在登录..."] forState:UIControlStateNormal];
    [self.view endEditing:YES];
    int s = self.srv;
    BOOL rem = self.rememberOn;
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSString *err = nil, *err2 = nil;
        NSDictionary *r = wire_request(HOSTS[s], account, password, 0x6f01, &err);
        NSDictionary *p = r ? wire_request(HOSTS[s], account, r[@"key"], 0x6f03, &err2) : nil;     // only for the nickname (the card's name)
        dispatch_async(dispatch_get_main_queue(), ^{
            self.signInBtn.enabled = YES;
            [self.signInBtn setTitle:[self t:@"Sign in" zh:@"登录"] forState:UIControlStateNormal];
            if (!r) { [self formErr:err ?: [self t:@"Cannot reach the server." zh:@"无法连接服务器。"]]; return; }
            [self.prefs setObject:account forKey:@"user"]; [self.prefs setInteger:s forKey:@"server"]; [self.prefs setBool:rem forKey:@"remember"];
            if ([p[@"nick"] length]) [self.prefs setObject:p[@"nick"] forKey:@"nick"]; else [self.prefs removeObjectForKey:@"nick"];
            if (rem) { [self.prefs setObject:r[@"key"] forKey:@"key"]; [self.prefs setInteger:s forKey:@"keyServer"]; }
            else { [self.prefs removeObjectForKey:@"key"]; self.sessionKey = r[@"key"]; self.sessionSrv = s; }
            self.pass.text = @"";
            self.skinFor = nil;
            [self showSignedIn];
        });
    });
}
- (void)signOut {                                        // the key goes; the username stays filled in
    [self.prefs removeObjectForKey:@"key"]; [self.prefs removeObjectForKey:@"nick"];
    self.sessionKey = @""; self.sessionSrv = -1; self.skinFor = nil;
    self.cover.image = nil;
    self.avatar.image = [UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"launcher_avatar.png"]];
    [self showSignedIn];
}
static UIImage *url_image(id u) {                        // SVG frames / backgrounds: UIImage cannot draw them -> nil
    if (![u isKindOfClass:NSString.class] || ![u length]) return nil;
    NSData *d = [NSData dataWithContentsOfURL:[NSURL URLWithString:u]];
    return d ? [UIImage imageWithData:d] : nil;
}
- (void)loadSkin:(NSString *)name {                     // the site profile's look: theme colours, cover, avatar
    if (!name.length || [name isEqualToString:self.skinFor]) return;
    self.skinFor = name;
    NSString *url = [@"https://crazykartlegacy.com/api/launcher/skin/" stringByAppendingString:
                     [name stringByAddingPercentEncodingWithAllowedCharacters:NSCharacterSet.URLPathAllowedCharacterSet]];
    NSURLRequest *rq = [NSURLRequest requestWithURL:[NSURL URLWithString:url] cachePolicy:NSURLRequestReloadIgnoringLocalCacheData timeoutInterval:8];
    __weak LoginVC *w = self;
    [[NSURLSession.sharedSession dataTaskWithRequest:rq completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) {
        NSDictionary *s = d ? [NSJSONSerialization JSONObjectWithData:d options:0 error:nil] : nil;
        if (![s isKindOfClass:NSDictionary.class] || ![s[@"ok"] boolValue]) return;    // offline: the plain card
        NSString *theme = [s[@"theme"] isKindOfClass:NSString.class] ? s[@"theme"] : @"sky";
        UIImage *cover = [s[@"cover"] isKindOfClass:NSDictionary.class] ? url_image(s[@"cover"][@"url"]) : nil;
        UIImage *avatar = url_image(s[@"avatar"]);
        dispatch_async(dispatch_get_main_queue(), ^{
            LoginVC *me = w;
            if (!me || ![name isEqualToString:me.skinFor]) return;   // signed out / switched while it loaded
            [me.prefs setObject:theme forKey:@"theme"];
            NSArray *th = theme_colours(theme);
            me.base = [th[0] unsignedIntValue]; me.accent = [th[1] unsignedIntValue];
            if (cover) me.cover.image = cover;
            if (avatar) me.avatar.image = avatar;
            [me applyLook:me.currentKey.length > 0];
        });
    }] resume];
}
- (void)openSettings {
    SettingsVC *vc = [[SettingsVC alloc] init];
    vc.zh = self.zh;
    __weak LoginVC *w = self;
    vc.closed = ^(BOOL saved) {
        BOOL zh = [[w.prefs stringForKey:@"lang"] isEqualToString:@"zh"];
        if (saved && zh != w.zh) { w.zh = zh; [w build]; }      // the launcher comes back in the new language
    };
    vc.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:vc animated:YES completion:nil];
}
- (BOOL)textFieldShouldReturn:(UITextField *)f {        // Return: username -> password, password -> keyboard down + Sign in
    if (f == self.user) { [self.pass becomeFirstResponder]; return NO; }
    [f resignFirstResponder];
    if (self.signInBtn.enabled) [self signIn];
    return NO;
}
- (void)viewDidAppear:(BOOL)a {
    [super viewDidAppear:a];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self.view action:@selector(endEditing:)];
    tap.cancelsTouchesInView = NO;                           // a tap outside the fields closes the keyboard; buttons still work
    if (!self.view.gestureRecognizers.count) [self.view addGestureRecognizer:tap];
    if (self.overlay || self.presentedViewController) return;
    if (![self.prefs objectForKey:@"lang"]) [self showLanguage];
    else if (![self.prefs objectForKey:@"controltype"]) [self showControlType];
}

// ---- first start (the design): a light dialog on the night blue
- (UIStackView *)dialog:(CGFloat)width {
    UIView *f = [[UIView alloc] initWithFrame:self.view.bounds];
    f.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    f.backgroundColor = rgb(C_NIGHT);
    UIStackView *d = vstack(@[], 12);
    d.alignment = UIStackViewAlignmentCenter;
    d.backgroundColor = rgb(C_PAPER); d.layer.cornerRadius = 16; step_shadow(d, C_LINE, 4);
    d.layoutMarginsRelativeArrangement = YES;
    d.translatesAutoresizingMaskIntoConstraints = NO;
    [f addSubview:d];
    [NSLayoutConstraint activateConstraints:@[[d.centerXAnchor constraintEqualToAnchor:f.centerXAnchor], [d.centerYAnchor constraintEqualToAnchor:f.centerYAnchor],
        [d.widthAnchor constraintLessThanOrEqualToAnchor:f.widthAnchor constant:-32]]];
    NSLayoutConstraint *wc = [d.widthAnchor constraintEqualToConstant:width];
    wc.priority = UILayoutPriorityDefaultHigh; wc.active = YES;
    [self.overlay removeFromSuperview];
    [self.view addSubview:f];
    self.overlay = f;
    return d;
}
- (void)closeOverlay { [self.overlay removeFromSuperview]; self.overlay = nil; }
- (void)showLanguage {
    UIStackView *d = [self dialog:540];
    d.layoutMargins = UIEdgeInsetsMake(22, 32, 20, 32);
    UIImageView *logo = [[UIImageView alloc] initWithImage:[UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"launcher_logo.png"]]];
    logo.contentMode = UIViewContentModeScaleAspectFit; fix_h(logo, 76);
    NSMutableAttributedString *t = [[NSMutableAttributedString alloc] initWithString:@"选择语言 · Choose your language"
                                                                         attributes:@{NSFontAttributeName: f_disp(24, UIFontWeightHeavy), NSForegroundColorAttributeName: rgb(C_INK)}];
    [t addAttribute:NSForegroundColorAttributeName value:rgb(C_EDGE) range:NSMakeRange(5, 1)];
    UILabel *h = [[UILabel alloc] init]; h.attributedText = t; h.adjustsFontSizeToFitWidth = YES;
    __weak LoginVC *w = self;
    NSMutableArray *cards = [NSMutableArray array];
    for (int i = 0; i < 2; i++) {
        CKButton *b = ck_button(^(CKButton *x) { [w setLanguage:i == 0]; });
        ck_box(b, UIColor.whiteColor, rgb(C_LINE), 2, 16); step_shadow(b, C_LINE, 4);
        UIStackView *s = vstack(@[ck_label(i == 0 ? @"中文" : @"English", f_disp(32, UIFontWeightHeavy), C_INK),
                                  ck_label(i == 0 ? @"简体中文" : @"English", f_body(13, UIFontWeightSemibold), C_SUB)], 2);
        s.alignment = UIStackViewAlignmentCenter; s.userInteractionEnabled = NO;
        s.translatesAutoresizingMaskIntoConstraints = NO;
        [b addSubview:s];
        [NSLayoutConstraint activateConstraints:@[[s.centerXAnchor constraintEqualToAnchor:b.centerXAnchor], [s.centerYAnchor constraintEqualToAnchor:b.centerYAnchor]]];
        fix_h(b, 100);
        [cards addObject:b];
    }
    UIStackView *two = hstack(cards, 16);
    two.distribution = UIStackViewDistributionFillEqually;
    for (UIView *v in @[logo, h, two, ck_label(@"以后可以在 设置 中更改。   You can change this later in Settings.", f_body(13, UIFontWeightSemibold), C_SUB)]) [d addArrangedSubview:v];
    [two.widthAnchor constraintEqualToAnchor:d.layoutMarginsGuide.widthAnchor].active = YES;
}
- (void)setLanguage:(BOOL)cn {
    [self.prefs setObject:cn ? @"zh" : @"en" forKey:@"lang"];
    if (cn != self.zh) { self.zh = cn; [self build]; }
    if (![self.prefs objectForKey:@"controltype"]) [self showControlType]; else [self closeOverlay];
}
// control type (the user, 12 Nov 2026): Classic -> the HUD editor; Mobile -> Mobile touch controls on (AUTO GAS)
// + the editor; Keyboard / controller -> on-screen controls at opacity 0 (hud_layout.txt touch_opacity)
- (UIImageView *)pic:(NSString *)name {
    UIImageView *v = [[UIImageView alloc] initWithImage:[UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:[name stringByAppendingString:@".png"]]]];
    v.translatesAutoresizingMaskIntoConstraints = NO;
    return v;
}
- (void)place:(UIView *)v into:(UIView *)box x:(CGFloat)x y:(CGFloat)y w:(CGFloat)wd h:(CGFloat)ht right:(BOOL)r {
    v.translatesAutoresizingMaskIntoConstraints = NO;
    [box addSubview:v];
    [NSLayoutConstraint activateConstraints:@[r ? [v.trailingAnchor constraintEqualToAnchor:box.trailingAnchor constant:-x] : [v.leadingAnchor constraintEqualToAnchor:box.leadingAnchor constant:x],
        [v.topAnchor constraintEqualToAnchor:box.topAnchor constant:y], [v.widthAnchor constraintEqualToConstant:wd], [v.heightAnchor constraintEqualToConstant:ht]]];
}
- (UIView *)typeCard:(int)k {
    __weak LoginVC *w = self;
    CKButton *b = ck_button(^(CKButton *x) { [w setControls:k]; });
    ck_box(b, UIColor.whiteColor, rgb(C_LINE), 2, 16); step_shadow(b, C_LINE, 4);
    UIView *pv = [[UIView alloc] init];
    pv.backgroundColor = rgb(0x111827); pv.layer.cornerRadius = 10; pv.clipsToBounds = YES;
    fix_h(pv, 120);
    if (k == 2) {
        UIStackView *ic = hstack(@[ck_icon_view(IC_PAD, C_YELLOW, 64), ck_icon_view(IC_KEYBOARD, C_MUTED, 56)], 14);
        ic.translatesAutoresizingMaskIntoConstraints = NO;
        [pv addSubview:ic];
        [NSLayoutConstraint activateConstraints:@[[ic.centerXAnchor constraintEqualToAnchor:pv.centerXAnchor], [ic.centerYAnchor constraintEqualToAnchor:pv.centerYAnchor]]];
    } else {
        for (int i = 0; i < 2; i++) {                                   // the race HUD's dashed boxes
            UIView *d = [[UIView alloc] init];
            CAShapeLayer *sl = [CAShapeLayer layer];
            sl.strokeColor = [UIColor colorWithWhite:1 alpha:0.35].CGColor; sl.fillColor = UIColor.clearColor.CGColor;
            sl.lineDashPattern = @[@3, @2];
            CGSize s = i ? CGSizeMake(34, 30) : CGSizeMake(46, 16);
            sl.path = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(0.5, 0.5, s.width - 1, s.height - 1) cornerRadius:4].CGPath;
            [d.layer addSublayer:sl];
            [self place:d into:pv x:(i ? 8 : 6) y:6 w:s.width h:s.height right:(i == 1)];
        }
        if (k == 1) {
            [self place:[self pic:@"touch_autogas"] into:pv x:8 y:60 w:18 h:18 right:NO];
            UIView *ring = [[UIView alloc] init];
            ring.layer.borderWidth = 2; ring.layer.borderColor = rgb(C_YELLOW).CGColor; ring.layer.cornerRadius = 8;
            [self place:ring into:pv x:4 y:56 w:26 h:26 right:NO];
        }
        [self place:[self pic:@"touch_left"] into:pv x:5 y:84 w:28 h:28 right:NO];
        [self place:[self pic:@"touch_right"] into:pv x:38 y:84 w:28 h:28 right:NO];
        if (k != 1) [self place:[self pic:@"touch_gas"] into:pv x:5 y:84 w:28 h:28 right:YES];   // Mobile: auto gas, no gas button
        [self place:[self pic:@"touch_brake"] into:pv x:38 y:90 w:21 h:21 right:YES];
        [self place:[self pic:@"touch_drift"] into:pv x:6 y:54 w:25 h:25 right:YES];
        [self place:[self pic:@"touch_item"] into:pv x:37 y:62 w:22 h:22 right:YES];
    }
    NSArray *names = @[[self t:@"Classic" zh:@"经典"], [self t:@"Mobile" zh:@"手游"], [self t:@"Keyboard / controller" zh:@"键盘 / 手柄"]];
    NSArray *subs = @[[self t:@"Touch buttons, hold to drive. Arrange your HUD and buttons next." zh:@"触屏按键，按住油门。下一步调整 HUD 和按键。"],
                      [self t:@"Auto gas: no gas button, a switch above the steering turns it off. Arrange your HUD and buttons next." zh:@"自动油门：没有油门键，方向键上方的开关可以关闭。下一步调整 HUD 和按键。"],
                      [self t:@"On-screen controls hidden (0% opacity)." zh:@"隐藏屏幕按键（透明度 0%）。"]];
    UILabel *sub = ck_label(subs[k], f_body(13, UIFontWeightSemibold), C_SUB);
    sub.numberOfLines = 0;
    UIStackView *s = vstack(@[pv, ck_label(names[k], f_disp(20, UIFontWeightHeavy), C_INK), sub], 8);
    s.userInteractionEnabled = NO;
    s.translatesAutoresizingMaskIntoConstraints = NO;
    [b addSubview:s];
    [NSLayoutConstraint activateConstraints:@[[s.leadingAnchor constraintEqualToAnchor:b.leadingAnchor constant:10], [s.trailingAnchor constraintEqualToAnchor:b.trailingAnchor constant:-10],
        [s.topAnchor constraintEqualToAnchor:b.topAnchor constant:10], [s.bottomAnchor constraintLessThanOrEqualToAnchor:b.bottomAnchor constant:-12]]];
    return b;
}
- (void)showControlType {
    UIStackView *d = [self dialog:760];
    d.layoutMargins = UIEdgeInsetsMake(18, 24, 16, 24);
    UIStackView *head = vstack(@[ck_label([self t:@"STEP 2 OF 3" zh:@"第 2 步，共 3 步"], f_disp(13, UIFontWeightBold), C_SUB),
                                 ck_label([self t:@"How do you want to play?" zh:@"选择操作方式"], f_disp(26, UIFontWeightHeavy), C_INK)], 2);
    head.alignment = UIStackViewAlignmentCenter;
    UIStackView *three = hstack(@[[self typeCard:0], [self typeCard:1], [self typeCard:2]], 14);
    three.distribution = UIStackViewDistributionFillEqually; three.alignment = UIStackViewAlignmentFill;
    for (UIView *v in @[head, three, ck_label([self t:@"You can change this later in Settings › Controls." zh:@"以后可以在 设置 › 按键 中更改。"], f_body(13, UIFontWeightSemibold), C_SUB)])
        [d addArrangedSubview:v];
    [three.widthAnchor constraintEqualToAnchor:d.layoutMarginsGuide.widthAnchor].active = YES;
    [three.heightAnchor constraintGreaterThanOrEqualToConstant:210].active = YES;
}
- (void)setControls:(int)k {
    NSString *type = k == 1 ? @"mobile" : k == 2 ? @"keyboard" : @"classic";
    [self.prefs setObject:type forKey:@"controltype"];
    [self.prefs setBool:k == 1 forKey:@"touchmobile"];
    [self closeOverlay];
    hud_opacity_set(k == 2 ? 0 : 0.6f);
    if (k == 2) { [self showKeyboardNote]; return; }
    HudEditorVC *vc = [[HudEditorVC alloc] init];
    vc.mode = type; vc.first = YES;
    vc.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:vc animated:YES completion:nil];
}
- (void)showKeyboardNote {
    __weak LoginVC *w = self;
    UILabel *m = ck_label([self t:@"On-screen controls are hidden for keyboard / controller. Change it in Settings › Controls."
                               zh:@"已为键盘 / 手柄隐藏屏幕按键。可以在 设置 › 按键 中更改。"], f_body(14, UIFontWeightBold), 0xFFFFFF);
    m.numberOfLines = 0;
    CKButton *x = ck_button(^(CKButton *b) { [w.note removeFromSuperview]; w.note = nil; });
    [x setImage:ck_icon(IC_CLOSE, 0xFFFFFF, 16) forState:UIControlStateNormal];
    x.backgroundColor = [UIColor colorWithWhite:1 alpha:0.08]; x.layer.cornerRadius = 20;
    fix_w(x, 40); fix_h(x, 40);
    x.accessibilityLabel = [self t:@"Dismiss" zh:@"关闭"];
    UIStackView *n = hstack(@[ck_icon_view(IC_PAD, C_YELLOW, 22), m, x], 12);
    n.layoutMargins = UIEdgeInsetsMake(8, 16, 8, 8); n.layoutMarginsRelativeArrangement = YES;
    ck_box(n, rgb(C_INK), [UIColor colorWithWhite:1 alpha:0.16], 1, 16);
    n.translatesAutoresizingMaskIntoConstraints = NO;
    [self.note removeFromSuperview];
    [self.view addSubview:n];
    self.note = n;
    [NSLayoutConstraint activateConstraints:@[[n.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [n.topAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.topAnchor constant:10],
        [n.widthAnchor constraintLessThanOrEqualToConstant:560], [n.widthAnchor constraintLessThanOrEqualToAnchor:self.view.widthAnchor constant:-32]]];
}
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
- (BOOL)prefersStatusBarHidden { return YES; }
- (void)say:(NSString *)t error:(BOOL)err {
    dispatch_async(dispatch_get_main_queue(), ^{
        self.status.text = t; self.status.textColor = err ? rgb(C_ERROR) : rgb(C_MUTED);
        self.status.hidden = !t.length;
    });
}
- (void)fail:(NSString *)t badLogin:(BOOL)bad {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (bad) { [self.prefs removeObjectForKey:@"key"]; self.sessionKey = @""; self.sessionSrv = -1; }   // a refused key signs the player out
        [self showSignedIn];
        if (bad) { [self formErr:t]; self.status.hidden = YES; }     // the card gives way to the form
    });
    if (!bad) [self say:t error:YES];
}
- (void)go {
    NSString *key = self.currentKey;
    if (!key.length) { [self showSignedIn]; return; }
    NSString *account = [self.prefs stringForKey:@"user"] ?: @"";
    int srv = self.srv;
    BOOL zh = self.zh;
    self.playBtn.enabled = NO;
    self.playBtn.alpha = 0.7;
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSFileManager *fm = NSFileManager.defaultManager;
        NSString *game = [docs() stringByAppendingPathComponent:@"game"];
        // the game files ship inside the app: copied once (APFS clones them: instant, no extra space)
        if (![fm fileExistsAtPath:[game stringByAppendingPathComponent:@"data"]]) {
            [self say:@"Preparing the game files (first start only)..." error:NO];
            NSString *src = [NSBundle.mainBundle.resourcePath stringByAppendingPathComponent:@"gamedata"];
            NSError *e = nil;
            [fm createDirectoryAtPath:game withIntermediateDirectories:YES attributes:nil error:nil];
            for (NSString *item in [fm contentsOfDirectoryAtPath:src error:nil]) {     // item by item: a saved hud_layout.txt stays
                NSString *to = [game stringByAppendingPathComponent:item];
                [fm removeItemAtPath:to error:nil];
                if (![fm copyItemAtPath:[src stringByAppendingPathComponent:item] toPath:to error:&e]) {
                    [self fail:[NSString stringWithFormat:@"Could not prepare the game files (%@).", e.localizedDescription] badLogin:NO]; return;
                }
            }
        }
        // the phone's settings file (the patch leaves UserSetting.bin out): windowed 1280x720 (0x04 = 0, 0x10 = 4)
        NSString *usf = [game stringByAppendingPathComponent:@"UserSetting.bin"];
        NSMutableData *us = [NSMutableData dataWithContentsOfFile:usf] ?: [NSMutableData dataWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"UserSetting.bin"]];
        NSUserDefaults *gd = NSUserDefaults.standardUserDefaults;        // the Settings screen (SettingsVC)
        if (us.length >= 0x30) {
            uint32_t win = 0, res = 4;
            [us replaceBytesInRange:NSMakeRange(0x04, 4) withBytes:&win];
            [us replaceBytesInRange:NSMakeRange(0x10, 4) withBytes:&res];
            if ([gd objectForKey:@"detail"]) { uint32_t det = (uint32_t)MIN(1, MAX(0, [gd integerForKey:@"detail"])); [us replaceBytesInRange:NSMakeRange(0x18, 4) withBytes:&det]; }
            if ([gd objectForKey:@"gamma"]) { float gm = MIN(3.0f, MAX(0.5f, [gd floatForKey:@"gamma"])); [us replaceBytesInRange:NSMakeRange(0x1c, 4) withBytes:&gm]; }
            // Settings > Sound: 0x20 u8 music on, 0x24 u32 music volume 0-10, 0x28 u8 effects on, 0x2c u32 effects volume
            if ([gd objectForKey:@"music"]) { uint8_t on = [gd boolForKey:@"music"]; [us replaceBytesInRange:NSMakeRange(0x20, 1) withBytes:&on]; }
            if ([gd objectForKey:@"musicVol"]) { uint32_t v = (uint32_t)MIN(10, MAX(0, [gd integerForKey:@"musicVol"])); [us replaceBytesInRange:NSMakeRange(0x24, 4) withBytes:&v]; }
            if ([gd objectForKey:@"sfx"]) { uint8_t on = [gd boolForKey:@"sfx"]; [us replaceBytesInRange:NSMakeRange(0x28, 1) withBytes:&on]; }
            if ([gd objectForKey:@"sfxVol"]) { uint32_t v = (uint32_t)MIN(10, MAX(0, [gd integerForKey:@"sfxVol"])); [us replaceBytesInRange:NSMakeRange(0x2c, 4) withBytes:&v]; }
            [us writeToFile:usf atomically:YES];
        }
        NSString *inif = [game stringByAppendingPathComponent:@"CrazyKart.ini"];
        NSString *ini = [NSString stringWithContentsOfFile:inif encoding:NSUTF8StringEncoding error:nil] ?: @"";
        int capfps = (int)[gd integerForKey:@"fps"];                     // 0 = Auto (VSync)
        if ([gd objectForKey:@"fps"]) { ini = ini_set(ini, @"VSync", capfps == 0); ini = ini_set(ini, @"MaxFps", capfps); ini = ini_set(ini, @"HighRefresh", 1); }
        else if (![ini containsString:@"VSync="]) { ini = ini_set(ini, @"VSync", 1); ini = ini_set(ini, @"MaxFps", 0); ini = ini_set(ini, @"HighRefresh", 1); }
        ini = ini_set(ini, @"Language", zh ? 1 : 0);
        [ini writeToFile:inif atomically:YES encoding:NSUTF8StringEncoding error:nil];
        [self say:@"Loading the shop..." error:NO];
        shop_sync(game, API[srv]);
        [self say:@"Signing in..." error:NO];
        NSString *err = nil;
        NSDictionary *p = wire_request(HOSTS[srv], account, key, 0x6f03, &err);     // fresh one-time pass, like the launcher's Play
        if (!p) { [self fail:err badLogin:[err hasPrefix:@"Wrong"] || [err hasPrefix:@"Sign-in refused"]]; return; }
        [self.prefs setInteger:srv forKey:@"server"];
        if ([p[@"nick"] length]) [self.prefs setObject:p[@"nick"] forKey:@"nick"];   // the account card's name
        snprintf(g_args, sizeof g_args, "-u %s -password %s -ad %s -port 6910 -wnd 1", account.UTF8String, [p[@"pass"] UTF8String], HOSTS[srv].UTF8String);
        snprintf(g_game_dir_s, sizeof g_game_dir_s, "%s", game.UTF8String);
        g_web_api = API[srv]; g_web_user = account; g_web_key = key; g_web_lang = zh ? @"zh" : @"en"; g_web_game = game;   // web panels
        snprintf(g_image_dir_s, sizeof g_image_dir_s, "%s", bundle_image().UTF8String);
        snprintf(g_files_s, sizeof g_files_s, "%s", docs().UTF8String);
        write_controls(docs());
        input_controls_load(g_files_s);
        setenv("CK_VSYNC", capfps == 0 ? "1" : "0", 1);
        setenv("CK_WIDE", ([gd objectForKey:@"wide"] ? [gd boolForKey:@"wide"] : YES) ? "1" : "0", 1);
        char scale_s[8];
        snprintf(scale_s, sizeof scale_s, "%d", [gd objectForKey:@"scale"] ? (int)MIN(100, MAX(50, [gd integerForKey:@"scale"])) : 100);
        setenv("CK_SCALE", scale_s, 1);
        setenv("CK_LEAN", [gd boolForKey:@"lean"] ? "1" : "0", 1);       // Compact 3D data
        setenv("CK_ETC2", [gd boolForKey:@"etc2"] ? "1" : "0", 1);       // Compressed textures
        setenv("CK_EFFECTS", ([gd objectForKey:@"effects"] ? [gd boolForKey:@"effects"] : YES) ? "1" : "0", 1);   // Effects
        setenv("CK_TOUCH", [gd boolForKey:@"touchmobile"] ? "mobile" : "classic", 1);                            // Touch controls
        g_screen_hz = (int)UIScreen.mainScreen.maximumFramesPerSecond;
        freopen([game stringByAppendingPathComponent:@"stderr.txt"].UTF8String, "w", stderr);
        popup_poll_start();                                       // server-asked popups (Rename Card, ranked map vote)
        dispatch_async(dispatch_get_main_queue(), ^{
            GameVC *vc = [[GameVC alloc] init];
            vc.modalPresentationStyle = UIModalPresentationFullScreen;
            [self presentViewController:vc animated:NO completion:nil];
        });
    });
}
@end

@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@end
@implementation AppDelegate
- (BOOL)application:(UIApplication *)app didFinishLaunchingWithOptions:(NSDictionary *)opts {
    wire_init();
    self.window = [[UIWindow alloc] initWithFrame:UIScreen.mainScreen.bounds];
    self.window.rootViewController = [[LoginVC alloc] init];
    [self.window makeKeyAndVisible];
    for (GCController *c in GCController.controllers) pad_attach(c);
    [NSNotificationCenter.defaultCenter addObserverForName:GCControllerDidConnectNotification object:nil queue:NSOperationQueue.mainQueue
                                                usingBlock:^(NSNotification *n) { pad_attach(n.object); }];
    // Home / app switcher: keep running (see g_bg): the window goes, the audio keeps the app awake, silently
    [NSNotificationCenter.defaultCenter addObserverForName:UIApplicationDidEnterBackgroundNotification object:nil queue:NSOperationQueue.mainQueue
                                                usingBlock:^(NSNotification *n) { g_bg = 1; bg_audio(1); NSLog(@"app: background (keeps running)"); }];
    [NSNotificationCenter.defaultCenter addObserverForName:UIApplicationWillEnterForegroundNotification object:nil queue:NSOperationQueue.mainQueue
                                                usingBlock:^(NSNotification *n) { bg_audio(0); g_bg = 0; NSLog(@"app: foreground"); }];
    return YES;
}
- (UIInterfaceOrientationMask)application:(UIApplication *)a supportedInterfaceOrientationsForWindow:(UIWindow *)w { return UIInterfaceOrientationMaskLandscape; }
@end

int main(int argc, char *argv[]) {
    signal(SIGPIPE, SIG_IGN);             // a closed socket: send() fails instead of killing the app (no MSG_NOSIGNAL here)
    @autoreleasepool { return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class])); }
}
