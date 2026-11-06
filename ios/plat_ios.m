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
}
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
static int g_padheld[256];
static void pad_button(int code, BOOL pressed) {
    if (g_padheld[code] == (int)pressed) return;
    g_padheld[code] = pressed;
    input_code(code, pressed);
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
        input_sticks(lx, ly, ry);
        input_axis(0, lx); input_axis(1, ly); input_axis(11, rx); input_axis(14, ry);
        input_axis(15, p.dpad.xAxis.value); input_axis(16, -p.dpad.yAxis.value);         // d-pad as the hat
        input_axis(17, p.leftTrigger.value); input_axis(18, p.rightTrigger.value);
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

// default keyboard + controller bindings (Controls.java defaults; a Settings panel comes later)
static void write_controls(NSString *dir) {
    NSString *t = @"bind 19 38\nbind 20 40\nbind 21 37\nbind 22 39\nbind 113 17\nbind 62 32\nbind 59 16\nbind 66 13\nbind 111 27\n"
                   "bind 96 38\nbind 97 40\nbind 1000 37\nbind 1001 39\nbind 99 17\nbind 100 32\nbind 103 16\nbind 109 -1\nbind 108 27\n"
                   "bind 1037 38\nbind 1045 38\nbind 1035 40\nbind 1047 40\nbind 1030 37\nbind 1031 39\nbind 1032 38\nbind 1033 40\n";
    [t writeToFile:[dir stringByAppendingPathComponent:@"controls.txt"] atomically:YES encoding:NSUTF8StringEncoding error:nil];
}

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
static UIColor *rgb(unsigned v) { return [UIColor colorWithRed:((v >> 16) & 255) / 255.0 green:((v >> 8) & 255) / 255.0 blue:(v & 255) / 255.0 alpha:1]; }
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
            [fm removeItemAtPath:game error:nil];
            if (![fm copyItemAtPath:src toPath:game error:&e]) { [self fail:[NSString stringWithFormat:@"Could not prepare the game files (%@).", e.localizedDescription] badLogin:NO]; return; }
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
