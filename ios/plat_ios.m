// iOS platform layer + launcher (phase 1) for the recompiled client: the same runtime as Android (runtime/mobile/*,
// input.c), drawn through WebGPU on Metal. Built by ios/build_ios.sh on a macOS runner (.github/workflows/ios.yml) into
// an unsigned .ipa that Sideloadly / AltStore sign. Launcher: sign-in (Launcher/login.js protocol, as LoginActivity),
// the game data copied from the app on the first start, the phone's settings file, the server's shop (ShopSync).
// Not yet here (Android has them): updates from the patch servers, voice chat, HUD editor, Settings panel.
#import <UIKit/UIKit.h>
#import <QuartzCore/CAMetalLayer.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import <GameController/GameController.h>
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
static char g_game_dir_s[1024], g_image_dir_s[1024], g_files_s[1024], g_args[512];

void *plat_native_window(void) { return (__bridge void *)g_layer; }
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

// ---- chat: the game's Chat button / a controller's chat key -> a text box; the text comes back as typed characters
void plat_open_chat(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *a = [UIAlertController alertControllerWithTitle:@"Chat" message:nil preferredStyle:UIAlertControllerStyleAlert];
        [a addTextFieldWithConfigurationHandler:^(UITextField *t) { t.placeholder = @"Message"; t.returnKeyType = UIReturnKeySend; }];
        void (^send)(NSString *) = ^(NSString *s) {
            for (NSUInteger i = 0; i < s.length && i < 120; i++) input_push(4, [s characterAtIndex:i], 0, 0, 0);
            input_push(2, 0x0d, 1, 0, 0); input_push(2, 0x0d, 0, 0, 0);     // Enter: send (empty: just closes the line)
        };
        [a addAction:[UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:^(UIAlertAction *x) { send(@""); }]];
        [a addAction:[UIAlertAction actionWithTitle:@"Send" style:UIAlertActionStyleDefault handler:^(UIAlertAction *x) {
            send(a.textFields.firstObject.text ?: @""); }]];
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
    return noErr;
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

@class HudEditorVC;
@interface HudCanvas : UIView
@property (weak) HudEditorVC *vc;
@end

@interface HudEditorVC : UIViewController
@property (strong) NSMutableArray<HudElem *> *elems;
@property CGFloat opacity;
@property (strong) HudElem *active;
@property (strong) HudCanvas *canvas;
@property (strong) UILabel *info;
@property (strong) UISlider *size;
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
    NSShadow *sh = [[NSShadow alloc] init]; sh.shadowColor = UIColor.blackColor; sh.shadowBlurRadius = 2; sh.shadowOffset = CGSizeMake(0.5, 0.5);
    NSDictionary *ta = @{NSFontAttributeName: [UIFont boldSystemFontOfSize:13], NSForegroundColorAttributeName: UIColor.whiteColor, NSShadowAttributeName: sh};
    HudEditorVC *vc = self.vc;
    for (HudElem *e in vc.elems) {
        CGRect r = [self rect:e];
        UIBezierPath *shape = e.touch ? [UIBezierPath bezierPathWithOvalInRect:r] : [UIBezierPath bezierPathWithRoundedRect:r cornerRadius:4];
        if (e.pic) [e.pic drawInRect:r blendMode:kCGBlendModeNormal alpha:e.touch ? MIN(1, vc.opacity / 0.6 * 0.8) : 1];
        else {                                                     // no picture yet: a labelled box
            [[UIColor colorWithWhite:1 alpha:0.19] setFill]; [shape fill];
            [e.label drawAtPoint:CGPointMake(r.origin.x + 4, r.origin.y + 4) withAttributes:ta];
        }
        if (e == vc.active) {
            [rgb(0xF5C21B) setStroke]; shape.lineWidth = 2; [shape stroke];
            CGFloat ly = r.origin.y - 18 < o.y + 2 ? CGRectGetMaxY(r) + 2 : r.origin.y - 18;
            [e.label drawAtPoint:CGPointMake(r.origin.x, ly) withAttributes:ta];
        } else if (!e.touch) {
            [[UIColor colorWithWhite:1 alpha:0.25] setStroke];
            CGFloat dash[] = {5, 4}; [shape setLineDash:dash count:2 phase:0]; shape.lineWidth = 1; [shape stroke];
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

@implementation HudEditorVC
- (NSString *)layoutPath { return [[docs() stringByAppendingPathComponent:@"game"] stringByAppendingPathComponent:@"hud_layout.txt"]; }
- (void)load {
    self.elems = [NSMutableArray array];
    self.opacity = 0.6;
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
        e.touch = [name hasPrefix:@"touch_"];
        NSString *shot = [[[docs() stringByAppendingPathComponent:@"game/hudshots"] stringByAppendingPathComponent:name] stringByAppendingString:@".rgba"];
        e.pic = e.touch ? [UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:[name stringByAppendingString:@".png"]]]
                        : hud_rgba([NSData dataWithContentsOfFile:shot]);
        [self.elems addObject:e];
    }
    NSString *saved = [NSString stringWithContentsOfFile:self.layoutPath encoding:NSUTF8StringEncoding error:nil];
    for (NSString *line in [saved componentsSeparatedByString:@"\n"]) {
        NSArray *p = [[line stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet] componentsSeparatedByCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        if (p.count == 2 && [p[0] isEqualToString:@"touch_opacity"]) { self.opacity = [p[1] doubleValue]; continue; }
        if (p.count < 4) continue;
        for (HudElem *e in self.elems) if ([e.name isEqualToString:p[0]]) { e.x = [p[1] doubleValue]; e.y = [p[2] doubleValue]; e.s = [p[3] doubleValue]; }
    }
}
- (UILabel *)label:(NSString *)t color:(UIColor *)c {
    UILabel *l = [[UILabel alloc] init]; l.text = t; l.textColor = c; l.font = [UIFont boldSystemFontOfSize:13]; return l;
}
- (UIButton *)button:(NSString *)t primary:(BOOL)pri action:(SEL)a {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    [b setTitle:t forState:UIControlStateNormal];
    b.titleLabel.font = [UIFont boldSystemFontOfSize:13];
    [b setTitleColor:pri ? rgb(0x131A2E) : UIColor.whiteColor forState:UIControlStateNormal];
    b.backgroundColor = pri ? rgb(0xF5C21B) : rgb(0x0E1F5C); b.layer.cornerRadius = 18;
    b.contentEdgeInsets = UIEdgeInsetsMake(0, 14, 0, 14);
    [b.heightAnchor constraintEqualToConstant:36].active = YES;
    [b.widthAnchor constraintGreaterThanOrEqualToConstant:64].active = YES;
    [b addTarget:self action:a forControlEvents:UIControlEventTouchUpInside];
    return b;
}
- (UISlider *)slider:(float)lo hi:(float)hi value:(float)v action:(SEL)a width:(CGFloat)w {
    UISlider *s = [[UISlider alloc] init];
    s.minimumValue = lo; s.maximumValue = hi; s.value = v; s.minimumTrackTintColor = rgb(0xF5C21B);
    [s addTarget:self action:a forControlEvents:UIControlEventValueChanged];
    [s.widthAnchor constraintEqualToConstant:w].active = YES;
    return s;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self load];
    self.canvas = [[HudCanvas alloc] initWithFrame:self.view.bounds];
    self.canvas.vc = self;
    self.canvas.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.canvas.contentMode = UIViewContentModeRedraw;
    [self.view addSubview:self.canvas];
    self.info = [self label:@"Tap an item" color:UIColor.whiteColor];
    [self.info.widthAnchor constraintGreaterThanOrEqualToConstant:120].active = YES;
    self.size = [self slider:0.4 hi:3 value:1 action:@selector(sizeChanged) width:110];
    self.size.enabled = NO;
    UIStackView *bar = [[UIStackView alloc] initWithArrangedSubviews:@[
        self.info, [self label:@"Size" color:rgb(0xB7C4E8)], self.size,
        [self label:@"Buttons" color:rgb(0xB7C4E8)], [self slider:0.1 hi:1 value:self.opacity action:@selector(opacityChanged:) width:90],
        [self button:@"Reset" primary:NO action:@selector(reset)], [self button:@"Back" primary:NO action:@selector(close)],
        [self button:@"Save" primary:YES action:@selector(save)]]];
    bar.spacing = 8; bar.alignment = UIStackViewAlignmentCenter;
    bar.layoutMargins = UIEdgeInsetsMake(4, 10, 4, 10); bar.layoutMarginsRelativeArrangement = YES;
    bar.backgroundColor = [rgb(0x131A2E) colorWithAlphaComponent:0.9]; bar.layer.cornerRadius = 14;
    bar.layer.borderWidth = 1; bar.layer.borderColor = rgb(0x2A3A6E).CGColor;
    bar.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:bar];
    [NSLayoutConstraint activateConstraints:@[                         // bottom centre: the race HUD has nothing there
        [bar.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [bar.bottomAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.bottomAnchor constant:-6]]];
    [self showInfo];
}
- (void)showInfo {
    HudElem *e = self.active;
    self.info.text = e ? [NSString stringWithFormat:@"%@  %.0f%%", e.label, e.s * 100] : @"Tap an item, then slide it";
    self.size.enabled = e != nil;
    if (e) self.size.value = e.s;
}
- (void)sizeChanged {
    HudElem *e = self.active;
    if (!e) return;
    CGFloat cx = e.x + e.sw * e.s / 2, cy = e.y + e.sh * e.s / 2;
    e.s = self.size.value;
    e.x = cx - e.sw * e.s / 2; e.y = cy - e.sh * e.s / 2;
    [self showInfo]; [self.canvas setNeedsDisplay];
}
- (void)opacityChanged:(UISlider *)s { self.opacity = s.value; [self.canvas setNeedsDisplay]; }
- (void)reset {
    for (HudElem *e in self.elems) { e.x = e.sx; e.y = e.sy; e.s = 1; }
    self.opacity = 0.6;
    [self showInfo]; [self.canvas setNeedsDisplay];
}
- (void)save {
    NSMutableString *t = [NSMutableString stringWithString:@"# HUD layout from the editor: name x y scale (game pixels 1280x720, top-left)\n"];
    for (HudElem *e in self.elems)
        if (e.x != e.sx || e.y != e.sy || e.s != 1) [t appendFormat:@"%@ %.1f %.1f %.3f\n", e.name, e.x, e.y, e.s];
    [t appendFormat:@"touch_opacity %.2f\n", self.opacity];
    [NSFileManager.defaultManager createDirectoryAtPath:[self.layoutPath stringByDeletingLastPathComponent] withIntermediateDirectories:YES attributes:nil error:nil];
    [t writeToFile:self.layoutPath atomically:YES encoding:NSUTF8StringEncoding error:nil];
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

// ---- Controls screen: bindings + chat macros (the Settings > Controls / Chat macros sections on Android) --------------
@interface ControlsVC : UIViewController <UITextFieldDelegate>
@property BOOL zh;
@end
@implementation ControlsVC {
    UIButton *_kb[CT_N], *_pad[CT_N], *_combo[CT_MACROS];
    UITextField *_text[CT_MACROS];
    NSMutableData *_us;                    // UserSetting.bin: the chat macro texts (0x58 + slot * 0x400, UTF-16LE)
}
- (NSString *)t:(NSString *)en zh:(NSString *)zh { return self.zh ? zh : en; }
- (NSString *)usPath { return [docs() stringByAppendingPathComponent:@"game/UserSetting.bin"]; }
- (NSString *)macroText:(int)slot {
    NSUInteger o = 0x58 + slot * 0x400, n = 0;
    if (_us.length < o + 0x400) return @"";
    const uint8_t *b = (const uint8_t *)_us.bytes + o;
    while (n < 0x3fe && (b[n] || b[n + 1])) n += 2;
    return [[NSString alloc] initWithBytes:b length:n encoding:NSUTF16LittleEndianStringEncoding] ?: @"";
}
- (UIButton *)bindButton:(NSString *)title {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    [b setTitle:title forState:UIControlStateNormal];
    b.titleLabel.font = [UIFont boldSystemFontOfSize:13]; b.titleLabel.adjustsFontSizeToFitWidth = YES;
    [b setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
    b.backgroundColor = [UIColor colorWithWhite:1 alpha:0.08]; b.layer.cornerRadius = 10;
    b.layer.borderWidth = 1; b.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.12].CGColor;
    [b.heightAnchor constraintEqualToConstant:34].active = YES;
    return b;
}
- (UILabel *)label:(NSString *)t size:(CGFloat)s color:(UIColor *)c {
    UILabel *l = [[UILabel alloc] init]; l.text = t; l.textColor = c; l.font = [UIFont boldSystemFontOfSize:s]; return l;
}
- (UIStackView *)row:(NSArray *)views {
    UIStackView *r = [[UIStackView alloc] initWithArrangedSubviews:views];
    r.spacing = 6; r.alignment = UIStackViewAlignmentCenter;
    return r;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = rgb(0x0E1F5C);
    _us = [NSMutableData dataWithContentsOfFile:self.usPath] ?: [NSMutableData dataWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"UserSetting.bin"]];
    UIStackView *st = [[UIStackView alloc] init];
    st.axis = UILayoutConstraintAxisVertical; st.spacing = 6;
    UIButton *done = [UIButton buttonWithType:UIButtonTypeSystem];
    [done setTitle:[self t:@"Done" zh:@"完成"] forState:UIControlStateNormal];
    done.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightHeavy];
    [done setTitleColor:rgb(0x131A2E) forState:UIControlStateNormal];
    done.backgroundColor = rgb(0xF5C21B); done.layer.cornerRadius = 19;
    [done.widthAnchor constraintEqualToConstant:110].active = YES; [done.heightAnchor constraintEqualToConstant:38].active = YES;
    [done addTarget:self action:@selector(done) forControlEvents:UIControlEventTouchUpInside];
    UIView *gap = [[UIView alloc] init];
    [st addArrangedSubview:[self row:@[[self label:[self t:@"CONTROLS" zh:@"按键设置"] size:20 color:UIColor.whiteColor], gap, done]]];

    [st addArrangedSubview:[self label:[self t:@"Controls  (keyboard · controller)" zh:@"按键  （键盘 · 手柄）"] size:13 color:rgb(0xF5C21B)]];
    for (int i = 0; i < CT_N; i++) {
        UILabel *name = [self label:self.zh ? CT_ZH[i] : CT_EN[i] size:13 color:rgb(0xB7C4E8)];
        _kb[i] = [self bindButton:ct_name(ct_kb(i), self.zh)]; _kb[i].tag = i;
        _pad[i] = [self bindButton:ct_name(ct_pad(i), self.zh)]; _pad[i].tag = i;
        [_kb[i] addTarget:self action:@selector(bindKb:) forControlEvents:UIControlEventTouchUpInside];
        [_pad[i] addTarget:self action:@selector(bindPad:) forControlEvents:UIControlEventTouchUpInside];
        UIStackView *r = [self row:@[name, _kb[i], _pad[i]]];
        [name.widthAnchor constraintEqualToAnchor:_kb[i].widthAnchor multiplier:1.25].active = YES;
        [_pad[i].widthAnchor constraintEqualToAnchor:_kb[i].widthAnchor].active = YES;
        [st addArrangedSubview:r];
    }
    UIButton *reset = [self bindButton:[self t:@"Reset controls" zh:@"恢复默认按键"]];
    [reset addTarget:self action:@selector(resetControls) forControlEvents:UIControlEventTouchUpInside];
    [st addArrangedSubview:reset];

    // Chat macros: the game's 9 quick-chat lines (UserSetting.bin, as the PC launcher edits them) + a key or
    // two-button combination that sends each one
    UILabel *mh = [self label:[self t:@"Chat macros  (text · key or combo)" zh:@"快捷聊天  （内容 · 按键或组合键）"] size:13 color:rgb(0xF5C21B)];
    [st addArrangedSubview:mh];
    [st setCustomSpacing:14 afterView:reset];
    for (int s = 0; s < CT_MACROS; s++) {
        UILabel *num = [self label:[NSString stringWithFormat:@"%d", s + 1] size:14 color:rgb(0xB7C4E8)];
        [num.widthAnchor constraintEqualToConstant:18].active = YES;
        UITextField *f = [[UITextField alloc] init];
        f.text = [self macroText:s]; f.textColor = UIColor.whiteColor; f.font = [UIFont systemFontOfSize:13];
        f.backgroundColor = [UIColor colorWithWhite:0 alpha:0.25]; f.layer.cornerRadius = 10;
        f.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 8, 1)]; f.leftViewMode = UITextFieldViewModeAlways;
        f.returnKeyType = UIReturnKeyDone; f.delegate = self; f.autocorrectionType = UITextAutocorrectionTypeNo;
        [f.heightAnchor constraintEqualToConstant:34].active = YES;
        _text[s] = f;
        _combo[s] = [self bindButton:ct_combo(ct_macro(s), self.zh)]; _combo[s].tag = s;
        [_combo[s] addTarget:self action:@selector(bindMacro:) forControlEvents:UIControlEventTouchUpInside];
        [st addArrangedSubview:[self row:@[num, f, _combo[s]]]];
        [f.widthAnchor constraintEqualToAnchor:_combo[s].widthAnchor multiplier:2.2 / 1.2].active = YES;
    }
    UIScrollView *sc = [[UIScrollView alloc] init];
    sc.keyboardDismissMode = UIScrollViewKeyboardDismissModeOnDrag;
    for (UIView *v in @[sc, st]) v.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:sc]; [sc addSubview:st];
    UILayoutGuide *g = self.view.safeAreaLayoutGuide;
    NSLayoutYAxisAnchor *kb = g.bottomAnchor;                     // iOS 15+: stop above the keyboard (macro texts)
    if (@available(iOS 15.0, *)) kb = self.view.keyboardLayoutGuide.topAnchor;
    [NSLayoutConstraint activateConstraints:@[
        [sc.leadingAnchor constraintEqualToAnchor:g.leadingAnchor], [sc.trailingAnchor constraintEqualToAnchor:g.trailingAnchor],
        [sc.topAnchor constraintEqualToAnchor:g.topAnchor], [sc.bottomAnchor constraintEqualToAnchor:kb],
        [st.topAnchor constraintEqualToAnchor:sc.topAnchor constant:12], [st.bottomAnchor constraintEqualToAnchor:sc.bottomAnchor constant:-16],
        [st.centerXAnchor constraintEqualToAnchor:sc.centerXAnchor], [st.widthAnchor constraintLessThanOrEqualToConstant:620],
        [st.widthAnchor constraintLessThanOrEqualToAnchor:sc.widthAnchor constant:-32]]];
    NSLayoutConstraint *wide = [st.widthAnchor constraintEqualToConstant:620];
    wide.priority = UILayoutPriorityDefaultHigh; wide.active = YES;
}
- (void)capture:(BOOL)combo got:(void (^)(NSArray<NSNumber *> *))got {
    [self.view endEditing:YES];
    CaptureVC *c = [[CaptureVC alloc] init];
    c.combo = combo; c.zh = self.zh; c.got = got;
    c.modalPresentationStyle = UIModalPresentationOverFullScreen;
    [self presentViewController:c animated:NO completion:nil];
}
- (void)bindKb:(UIButton *)b {
    int i = (int)b.tag;
    [self capture:NO got:^(NSArray<NSNumber *> *c) {
        int code = c.count ? c[0].intValue : 0;
        [NSUserDefaults.standardUserDefaults setInteger:code forKey:[@"kb_" stringByAppendingString:CT_ID[i]]];
        [b setTitle:ct_name(code, self.zh) forState:UIControlStateNormal];
    }];
}
- (void)bindPad:(UIButton *)b {
    int i = (int)b.tag;
    [self capture:NO got:^(NSArray<NSNumber *> *c) {
        int code = c.count ? c[0].intValue : 0;
        [NSUserDefaults.standardUserDefaults setInteger:code forKey:[@"pad_" stringByAppendingString:CT_ID[i]]];
        [b setTitle:ct_name(code, self.zh) forState:UIControlStateNormal];
    }];
}
- (void)bindMacro:(UIButton *)b {
    int s = (int)b.tag;
    [self capture:YES got:^(NSArray<NSNumber *> *c) {
        [NSUserDefaults.standardUserDefaults setObject:[c componentsJoinedByString:@"+"] forKey:[NSString stringWithFormat:@"macro_%d", s]];
        [b setTitle:ct_combo(c, self.zh) forState:UIControlStateNormal];
    }];
}
- (void)resetControls {
    for (int i = 0; i < CT_N; i++) {
        [NSUserDefaults.standardUserDefaults removeObjectForKey:[@"kb_" stringByAppendingString:CT_ID[i]]];
        [NSUserDefaults.standardUserDefaults removeObjectForKey:[@"pad_" stringByAppendingString:CT_ID[i]]];
        [_kb[i] setTitle:ct_name(CT_KB[i], self.zh) forState:UIControlStateNormal];
        [_pad[i] setTitle:ct_name(CT_PAD[i], self.zh) forState:UIControlStateNormal];
    }
}
- (BOOL)textFieldShouldReturn:(UITextField *)f { [f resignFirstResponder]; return NO; }
- (void)done {
    [self.view endEditing:YES];
    BOOL changed = NO;
    for (int s = 0; s < CT_MACROS && _us.length >= 0x58 + (s + 1) * 0x400; s++) {     // UTF-16LE, zero padded, 511 chars at most
        NSString *m = _text[s].text ?: @"";
        if ([m isEqualToString:[self macroText:s]]) continue;
        if (m.length > 511) m = [m substringToIndex:511];
        NSData *u = [m dataUsingEncoding:NSUTF16LittleEndianStringEncoding] ?: [NSData data];
        NSUInteger o = 0x58 + s * 0x400;
        [_us resetBytesInRange:NSMakeRange(o, 0x400)];
        [_us replaceBytesInRange:NSMakeRange(o, MIN(u.length, 0x3fe)) withBytes:u.bytes];
        changed = YES;
    }
    if (changed) {
        [NSFileManager.defaultManager createDirectoryAtPath:[self.usPath stringByDeletingLastPathComponent] withIntermediateDirectories:YES attributes:nil error:nil];
        [_us writeToFile:self.usPath atomically:YES];
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (BOOL)prefersStatusBarHidden { return YES; }
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
@end

@interface LoginVC : UIViewController <UITextFieldDelegate>
@end
@implementation LoginVC {
    UITextField *_user, *_pass;
    UISegmentedControl *_server, *_lang;
    UISwitch *_remember;
    UIButton *_play;
    UILabel *_status;
    NSUserDefaults *_prefs;
}
- (UITextField *)field:(NSString *)ph secure:(BOOL)sec {
    UITextField *f = [[UITextField alloc] init];
    f.placeholder = ph; f.secureTextEntry = sec; f.textColor = UIColor.whiteColor;
    f.attributedPlaceholder = [[NSAttributedString alloc] initWithString:ph attributes:@{NSForegroundColorAttributeName: rgb(0xB7C4E8)}];
    f.backgroundColor = [UIColor colorWithWhite:0 alpha:0.25]; f.layer.cornerRadius = 22; f.layer.borderWidth = 1;
    f.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.12].CGColor;
    f.leftView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 16, 1)]; f.leftViewMode = UITextFieldViewModeAlways;
    f.delegate = self; f.returnKeyType = sec ? UIReturnKeyGo : UIReturnKeyNext;
    f.autocapitalizationType = UITextAutocapitalizationTypeNone; f.autocorrectionType = UITextAutocorrectionTypeNo;
    [f.heightAnchor constraintEqualToConstant:44].active = YES;
    return f;
}
- (UILabel *)label:(NSString *)t {
    UILabel *l = [[UILabel alloc] init];
    l.text = t; l.textColor = rgb(0xB7C4E8); l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    return l;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    _prefs = NSUserDefaults.standardUserDefaults;
    self.view.backgroundColor = rgb(0x0E1F5C);
    UIImageView *art = [[UIImageView alloc] initWithImage:[UIImage imageWithContentsOfFile:[bundle_image() stringByAppendingPathComponent:@"launcher_keyart.png"]]];
    art.contentMode = UIViewContentModeScaleAspectFill; art.clipsToBounds = YES;
    UIView *side = [[UIView alloc] init];
    side.backgroundColor = rgb(0x131A2E);
    for (UIView *v in @[art, side]) { v.translatesAutoresizingMaskIntoConstraints = NO; [self.view addSubview:v]; }
    [NSLayoutConstraint activateConstraints:@[
        [art.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor], [art.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [art.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor], [art.trailingAnchor constraintEqualToAnchor:side.leadingAnchor],
        [side.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor], [side.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [side.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor], [side.widthAnchor constraintEqualToConstant:360]]];
    UIStackView *st = [[UIStackView alloc] init];
    st.axis = UILayoutConstraintAxisVertical; st.spacing = 8; st.translatesAutoresizingMaskIntoConstraints = NO;
    UIScrollView *sc = [[UIScrollView alloc] init];
    sc.translatesAutoresizingMaskIntoConstraints = NO;
    [side addSubview:sc]; [sc addSubview:st];
    UILayoutGuide *g = side.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[
        [sc.leadingAnchor constraintEqualToAnchor:g.leadingAnchor], [sc.trailingAnchor constraintEqualToAnchor:g.trailingAnchor],
        [sc.topAnchor constraintEqualToAnchor:g.topAnchor], [sc.bottomAnchor constraintEqualToAnchor:g.bottomAnchor],
        [st.leadingAnchor constraintEqualToAnchor:sc.leadingAnchor constant:22], [st.trailingAnchor constraintEqualToAnchor:sc.trailingAnchor constant:-22],
        [st.topAnchor constraintEqualToAnchor:sc.topAnchor constant:16], [st.bottomAnchor constraintEqualToAnchor:sc.bottomAnchor constant:-16],
        [st.widthAnchor constraintEqualToAnchor:sc.widthAnchor constant:-44]]];
    _user = [self field:@"Username" secure:NO];
    _user.text = [_prefs stringForKey:@"user"];
    _pass = [self field:[_prefs stringForKey:@"key"].length ? @"••••••••  saved" : @"Password" secure:YES];
    _server = [[UISegmentedControl alloc] initWithItems:@[@"India", @"Hong Kong"]];
    _server.selectedSegmentIndex = [_prefs integerForKey:@"server"];
    _lang = [[UISegmentedControl alloc] initWithItems:@[@"English", @"中文"]];
    _lang.selectedSegmentIndex = [[_prefs stringForKey:@"lang"] isEqualToString:@"zh"] ? 1 : 0;
    for (UISegmentedControl *s in @[_server, _lang]) {
        s.selectedSegmentTintColor = rgb(0xF5C21B);
        [s setTitleTextAttributes:@{NSForegroundColorAttributeName: rgb(0x131A2E)} forState:UIControlStateSelected];
        [s setTitleTextAttributes:@{NSForegroundColorAttributeName: rgb(0xB7C4E8)} forState:UIControlStateNormal];
    }
    _remember = [[UISwitch alloc] init];
    _remember.on = [_prefs objectForKey:@"remember"] ? [_prefs boolForKey:@"remember"] : YES;
    _remember.onTintColor = rgb(0xF5C21B);
    UIStackView *rem = [[UIStackView alloc] initWithArrangedSubviews:@[_remember, [self label:@"Remember this phone (30 days)"]]];
    rem.spacing = 10; rem.alignment = UIStackViewAlignmentCenter;
    _status = [self label:@""]; _status.numberOfLines = 0; _status.textColor = rgb(0xFFAB8F);
    _play = [UIButton buttonWithType:UIButtonTypeSystem];
    [_play setTitle:@"Play" forState:UIControlStateNormal];
    _play.titleLabel.font = [UIFont systemFontOfSize:22 weight:UIFontWeightHeavy];
    [_play setTitleColor:rgb(0x131A2E) forState:UIControlStateNormal];
    _play.backgroundColor = rgb(0xF5C21B); _play.layer.cornerRadius = 26;
    [_play.heightAnchor constraintEqualToConstant:52].active = YES;
    [_play addTarget:self action:@selector(go) forControlEvents:UIControlEventTouchUpInside];
    for (UIView *v in @[[self label:@"Username"], _user, [self label:@"Password"], _pass, [self label:@"Server"], _server,
                        [self label:@"Language"], _lang, rem, _status, _play]) [st addArrangedSubview:v];
    UIButton *hud = [UIButton buttonWithType:UIButtonTypeSystem];        // race HUD layout editor
    [hud setTitle:@"HUD layout" forState:UIControlStateNormal];
    hud.titleLabel.font = [UIFont systemFontOfSize:16 weight:UIFontWeightBold];
    [hud setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
    hud.backgroundColor = [UIColor colorWithWhite:1 alpha:0.08]; hud.layer.cornerRadius = 20;
    hud.layer.borderWidth = 1; hud.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.12].CGColor;
    [hud.heightAnchor constraintEqualToConstant:40].active = YES;
    [hud addTarget:self action:@selector(openHud) forControlEvents:UIControlEventTouchUpInside];
    UIButton *ctl = [UIButton buttonWithType:UIButtonTypeSystem];        // keyboards + controllers, chat macros
    [ctl setTitle:@"Controls" forState:UIControlStateNormal];
    ctl.titleLabel.font = hud.titleLabel.font;
    [ctl setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
    ctl.backgroundColor = hud.backgroundColor; ctl.layer.cornerRadius = 20;
    ctl.layer.borderWidth = 1; ctl.layer.borderColor = hud.layer.borderColor;
    [ctl.heightAnchor constraintEqualToConstant:40].active = YES;
    [ctl addTarget:self action:@selector(openControls) forControlEvents:UIControlEventTouchUpInside];
    UIStackView *tools = [[UIStackView alloc] initWithArrangedSubviews:@[hud, ctl]];
    tools.spacing = 8; tools.distribution = UIStackViewDistributionFillEqually;
    [st addArrangedSubview:tools];
}
- (void)openControls {
    ControlsVC *vc = [[ControlsVC alloc] init];
    vc.zh = _lang.selectedSegmentIndex == 1;
    vc.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:vc animated:YES completion:nil];
}
- (void)openHud {
    HudEditorVC *vc = [[HudEditorVC alloc] init];
    vc.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:vc animated:YES completion:nil];
}
- (BOOL)textFieldShouldReturn:(UITextField *)f {        // Return: username -> password, password -> keyboard down + Play
    if (f == _user) { [_pass becomeFirstResponder]; return NO; }
    [f resignFirstResponder];
    if (_play.enabled) [self go];
    return NO;
}
- (void)viewDidAppear:(BOOL)a {
    [super viewDidAppear:a];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self.view action:@selector(endEditing:)];
    tap.cancelsTouchesInView = NO;                           // a tap outside the fields closes the keyboard; buttons still work
    if (!self.view.gestureRecognizers.count) [self.view addGestureRecognizer:tap];
}
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
- (BOOL)prefersStatusBarHidden { return YES; }
- (void)say:(NSString *)t error:(BOOL)err {
    dispatch_async(dispatch_get_main_queue(), ^{ self->_status.text = t; self->_status.textColor = err ? rgb(0xFFAB8F) : rgb(0xB7C4E8); });
}
- (void)fail:(NSString *)t badLogin:(BOOL)bad {
    if (bad) [_prefs removeObjectForKey:@"key"];
    [self say:t error:YES];
    dispatch_async(dispatch_get_main_queue(), ^{ self->_play.enabled = YES; });
}
- (void)go {
    NSString *account = [[_user.text stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet] lowercaseString] ?: @"";
    NSString *password = _pass.text ?: @"";
    int srv = (int)_server.selectedSegmentIndex;
    BOOL zh = _lang.selectedSegmentIndex == 1, remember = _remember.on;
    NSString *savedKey = [_prefs stringForKey:@"key"] ?: @"";
    BOOL same = [account isEqualToString:[_prefs stringForKey:@"user"] ?: @""] && srv == [_prefs integerForKey:@"keyServer"];
    if (!account.length || (!password.length && (!savedKey.length || !same))) { [self say:@"Enter your account and password." error:YES]; return; }
    _play.enabled = NO;
    [self.view endEditing:YES];
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
        if (us.length >= 0x20) {
            uint32_t win = 0, res = 4;
            [us replaceBytesInRange:NSMakeRange(0x04, 4) withBytes:&win];
            [us replaceBytesInRange:NSMakeRange(0x10, 4) withBytes:&res];
            [us writeToFile:usf atomically:YES];
        }
        NSString *inif = [game stringByAppendingPathComponent:@"CrazyKart.ini"];
        NSString *ini = [NSString stringWithContentsOfFile:inif encoding:NSUTF8StringEncoding error:nil] ?: @"";
        if (![ini containsString:@"VSync="]) { ini = ini_set(ini, @"VSync", 1); ini = ini_set(ini, @"MaxFps", 0); ini = ini_set(ini, @"HighRefresh", 1); }
        ini = ini_set(ini, @"Language", zh ? 1 : 0);
        [ini writeToFile:inif atomically:YES encoding:NSUTF8StringEncoding error:nil];
        [self say:@"Loading the shop..." error:NO];
        shop_sync(game, API[srv]);
        [self say:@"Signing in..." error:NO];
        NSString *err = nil, *key = savedKey;
        if (password.length || !same) {
            NSDictionary *r = wire_request(HOSTS[srv], account, password, 0x6f01, &err);
            if (!r) { [self fail:err badLogin:[err hasPrefix:@"Wrong"]]; return; }
            key = r[@"key"];
        }
        NSDictionary *p = wire_request(HOSTS[srv], account, key, 0x6f03, &err);
        if (!p) { [self fail:err badLogin:[err hasPrefix:@"Wrong"] || [err hasPrefix:@"Sign-in refused"]]; return; }
        [self->_prefs setObject:account forKey:@"user"]; [self->_prefs setInteger:srv forKey:@"server"];
        [self->_prefs setBool:remember forKey:@"remember"]; [self->_prefs setObject:zh ? @"zh" : @"en" forKey:@"lang"];
        if (remember) { [self->_prefs setObject:key forKey:@"key"]; [self->_prefs setInteger:srv forKey:@"keyServer"]; }
        else [self->_prefs removeObjectForKey:@"key"];
        snprintf(g_args, sizeof g_args, "-u %s -password %s -ad %s -port 6910 -wnd 1", account.UTF8String, [p[@"pass"] UTF8String], HOSTS[srv].UTF8String);
        snprintf(g_game_dir_s, sizeof g_game_dir_s, "%s", game.UTF8String);
        snprintf(g_image_dir_s, sizeof g_image_dir_s, "%s", bundle_image().UTF8String);
        snprintf(g_files_s, sizeof g_files_s, "%s", docs().UTF8String);
        write_controls(docs());
        input_controls_load(g_files_s);
        setenv("CK_VSYNC", "1", 1); setenv("CK_WIDE", "1", 1);
        g_screen_hz = (int)UIScreen.mainScreen.maximumFramesPerSecond;
        freopen([game stringByAppendingPathComponent:@"stderr.txt"].UTF8String, "w", stderr);
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
    return YES;
}
- (UIInterfaceOrientationMask)application:(UIApplication *)a supportedInterfaceOrientationsForWindow:(UIWindow *)w { return UIInterfaceOrientationMaskLandscape; }
@end

int main(int argc, char *argv[]) {
    signal(SIGPIPE, SIG_IGN);             // a closed socket: send() fails instead of killing the app (no MSG_NOSIGNAL here)
    @autoreleasepool { return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class])); }
}
