// FMOD Ex replacement: the subset the client imports (C++ API: stdcall methods, `this` first on the stack).
// Sounds are Ogg Vorbis (data\sound\*.ogg), decoded with stb_vorbis (cached per file, incrementally) and mixed
// here; the platform layer pulls float stereo frames (Android: AAudio). FMOD's END channel callbacks fire from
// System::update on the game thread, as FMOD Ex does.
#include "rt.h"
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STB_VORBIS_NO_STDIO
#define STB_VORBIS_NO_PUSHDATA_API
#include "../../third_party/stb/stb_vorbis.c"

int plat_audio_start(void (*mix)(float *out, int frames), int *rate);   // 0 = no audio output on this platform

#define FMOD_ERR_INVALID_HANDLE 36u
#define MODE_LOOP_NORMAL 0x2u
#define MODE_LOOP_BIDI 0x4u
#define MODE_3D 0x10u
#define MODE_OPENMEMORY 0x800u
#define MODE_OPENMEMORY_POINT 0x10000000u
#define SND_MAGIC 0x444e5346u        // guest handle tags
#define CHN_MAGIC 0x4e484346u

// Decoded audio, shared by every Sound made from the same file (the game creates sounds again and again;
// decoding each time cost ~12% of the game thread). Decoding is incremental: the audio thread decodes just ahead
// of the furthest playing position, so a long track never stalls a frame. Unreferenced entries stay cached up to
// PCM_CACHE_MAX bytes.
typedef struct {
    char key[200];               // lowercase host path ("" = from memory, never shared)
    s16 *pcm; int total, decoded, ch, rate, refs;
    stb_vorbis *v; u8 *file;     // decoder (freed once fully decoded)
    size_t bytes; u32 last_use;
} Pcm;
typedef struct { int pcm; u32 mode; int used, ch, rate; } Snd;
#define NPCM 1024
#define PCM_CACHE_MAX (160u << 20)
static Pcm g_pcm[NPCM];
static size_t g_pcm_bytes;
static u32 g_pcm_clock;
typedef struct {
    int active, paused, ended, snd, loops, is3d;
    double pos;
    float vol, freq, p[3];
    u32 mode, cb, cbtype, cmd, handle, gen, age;
} Chan;
#define NSND 4096
#define NCH 256          // FMOD virtual channels: paused loops (skid, nitro... per kart) must keep their handles
static Snd g_snd[NSND];
static Chan g_ch[NCH];
static pthread_mutex_t g_amu = PTHREAD_MUTEX_INITIALIZER;
static float g_lpos[3], g_lfwd[3] = {0, 0, 1}, g_lup[3] = {0, 1, 0}, g_distf = 1, g_rolloff = 1;
static int g_rate = 48000, g_started;
static u32 g_order;                     // allocation order, to steal the oldest channel when all are busy

static float fl(u32 v) { float f; memcpy(&f, &v, 4); return f; }
static Chan *chan_of(u32 h) {
    if (!h || M32(h) != CHN_MAGIC) return 0;
    u32 s = M32(h + 8);
    return s < NCH && g_ch[s].gen == M32(h + 12) && (g_ch[s].active || g_ch[s].ended) ? &g_ch[s] : 0;
}
static int snd_of(u32 h) { return h && M32(h) == SND_MAGIC && M32(h + 8) < NSND && g_snd[M32(h + 8)].used ? (int)M32(h + 8) : -1; }

// decode until `need` frames are available (or the end); caller holds g_amu
static void pcm_decode_to(Pcm *p, int need) {
    if (need > p->total) need = p->total;
    while (p->v && p->decoded < need) {
        int n = stb_vorbis_get_samples_short_interleaved(p->v, p->ch, p->pcm + (size_t)p->decoded * p->ch, (p->total - p->decoded) * p->ch);
        if (n <= 0) { p->total = p->decoded; break; }       // shorter than its header said
        p->decoded += n;
    }
    if (p->v && p->decoded >= p->total) { stb_vorbis_close(p->v); p->v = 0; free(p->file); p->file = 0; }
}
static void pcm_free(Pcm *p) {
    if (p->v) stb_vorbis_close(p->v);
    free(p->file); free(p->pcm);
    g_pcm_bytes -= p->bytes;
    memset(p, 0, sizeof *p);
}
static void pcm_trim(void) {       // drop least recently used unreferenced entries over the budget (holds g_amu)
    while (g_pcm_bytes > PCM_CACHE_MAX) {
        int lru = -1;
        for (int i = 0; i < NPCM; i++) if (g_pcm[i].pcm && !g_pcm[i].refs && (lru < 0 || g_pcm[i].last_use < g_pcm[lru].last_use)) lru = i;
        if (lru < 0) break;
        pcm_free(&g_pcm[lru]);
    }
}

// ---- mixer (audio thread) --------------------------------------------------------------------------
// FMOD Ex pans a mono sound constant-power: centred = 0.707 in each speaker; stereo stays 1.0 per side. Measured on the
// PC fmodex.dll (12 Nov 2026): 0.5 mono in -> 0.354 L/R, 0.5 stereo in -> 0.5. Effects are mono, music stereo.
static void gains(const Chan *c, int mono, float *l, float *r) {
    float g = c->vol, k = mono ? 1.0f : 1.41421356f;
    if (!c->is3d) { *l = *r = g * k * 0.70710678f; return; }
    float d[3] = {c->p[0] - g_lpos[0], c->p[1] - g_lpos[1], c->p[2] - g_lpos[2]};
    float dist = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]), mind = 1.0f * g_distf;
    if (dist > mind) g *= mind / (mind + g_rolloff * (dist - mind));        // FMOD's default inverse rolloff
    // right = up x forward (FMOD's left-handed default)
    float rt[3] = {g_lup[1] * g_lfwd[2] - g_lup[2] * g_lfwd[1], g_lup[2] * g_lfwd[0] - g_lup[0] * g_lfwd[2], g_lup[0] * g_lfwd[1] - g_lup[1] * g_lfwd[0]};
    float rn = sqrtf(rt[0] * rt[0] + rt[1] * rt[1] + rt[2] * rt[2]);
    float pan = dist > 1e-4f && rn > 1e-6f ? (d[0] * rt[0] + d[1] * rt[1] + d[2] * rt[2]) / (dist * rn) * 0.8f : 0;
    float a = (pan + 1) * 0.78539816f;          // constant power
    *l = g * cosf(a) * k; *r = g * sinf(a) * k;
}
static void mix(float *out, int frames) {
    memset(out, 0, sizeof(float) * 2 * (size_t)frames);
    pthread_mutex_lock(&g_amu);
    for (int k = 0; k < NCH; k++) {
        Chan *c = &g_ch[k];
        if (!c->active || c->paused) continue;
        Pcm *s = &g_pcm[g_snd[c->snd].pcm];
        double step = c->freq / g_rate;
        pcm_decode_to(s, (int)(c->pos + step * frames) + 2);
        if (!s->pcm || s->total < 1) { c->active = 0; c->ended = 1; continue; }
        float gl, gr;
        gains(c, s->ch == 1, &gl, &gr);
        for (int i = 0; i < frames; i++) {
            int i0 = (int)c->pos;
            if (i0 >= s->total) {
                if ((c->mode & (MODE_LOOP_NORMAL | MODE_LOOP_BIDI)) && c->loops != 0) {
                    c->pos -= s->total; i0 = (int)c->pos;
                    if (c->loops > 0) c->loops--;
                } else { c->active = 0; c->ended = 1; break; }
            }
            if (i0 >= s->decoded) break;                    // decoder fell behind (not expected): skip the rest
            float t = (float)(c->pos - i0);
            int i1 = i0 + 1 < s->decoded ? i0 + 1 : i0;
            float l, r;
            if (s->ch == 1) { l = r = (s->pcm[i0] + (s->pcm[i1] - s->pcm[i0]) * t) * (1.0f / 32768); }
            else {
                l = (s->pcm[i0 * s->ch] + (s->pcm[i1 * s->ch] - s->pcm[i0 * s->ch]) * t) * (1.0f / 32768);
                r = (s->pcm[i0 * s->ch + 1] + (s->pcm[i1 * s->ch + 1] - s->pcm[i0 * s->ch + 1]) * t) * (1.0f / 32768);
            }
            out[2 * i] += l * gl; out[2 * i + 1] += r * gr;
            c->pos += step;
        }
    }
    pthread_mutex_unlock(&g_amu);
    for (int i = 0; i < 2 * frames; i++) { float v = out[i]; out[i] = v > 1 ? 1 : v < -1 ? -1 : v; }
}

// ---- System -----------------------------------------------------------------------------------------
static u32 obj(u32 magic, u32 idx, u32 gen) { u32 o = gstatic(16); M32(o) = magic; M32(o + 4) = 0; M32(o + 8) = idx; M32(o + 12) = gen; return o; }
HLE(fm_ok) { return 0; }
HLE(fm_System_Create) { M32(ARG(0)) = obj(0x53595346u, 0, 0); return 0; }
HLE(fm_init) {
    rt_log("fmod: System::init maxchannels %d flags %x\n", (int)ARG(1), ARG(2));
    if (!g_started) {
        g_started = 1;
        int rate = 48000;
        if (plat_audio_start(mix, &rate)) { g_rate = rate; rt_log("fmod: audio out %d Hz\n", rate); }
        else rt_log("fmod: no audio output on this platform\n");
    }
    return 0;
}
HLE(fm_getVersion) { M32(ARG(1)) = 0x00041000; return 0; }
HLE(fm_zero_out) { M32(ARG(1)) = 0; return 0; }
// open (or find cached) decoded audio for a file / memory block; returns a g_pcm index or -1 (holds g_amu)
static int pcm_open(const char *key, u8 *file, int len) {
    if (key[0]) for (int i = 0; i < NPCM; i++) if (g_pcm[i].pcm && !strcmp(g_pcm[i].key, key)) { free(file); return i; }
    int err = 0;
    stb_vorbis *v = file && len > 0 ? stb_vorbis_open_memory(file, len, &err, 0) : 0;
    if (!v) { free(file); return -1; }
    stb_vorbis_info vi = stb_vorbis_get_info(v);
    int total = (int)stb_vorbis_stream_length_in_samples(v);
    if (total <= 0 || vi.channels < 1 || vi.channels > 2) { stb_vorbis_close(v); free(file); return -1; }
    int idx = -1;
    for (int i = 0; i < NPCM; i++) if (!g_pcm[i].pcm) { idx = i; break; }
    if (idx < 0) { pcm_trim(); for (int i = 0; i < NPCM; i++) if (!g_pcm[i].pcm) { idx = i; break; } }
    if (idx < 0) { stb_vorbis_close(v); free(file); return -1; }
    Pcm *p = &g_pcm[idx];
    snprintf(p->key, sizeof p->key, "%s", key);
    p->bytes = (size_t)total * (size_t)vi.channels * 2;
    p->pcm = malloc(p->bytes);
    p->total = total; p->decoded = 0; p->ch = vi.channels; p->rate = (int)vi.sample_rate; p->v = v; p->file = file;
    g_pcm_bytes += p->bytes;
    pcm_decode_to(p, total < 2048 ? total : 2048);             // the start right away: short sounds are ready at once
    return idx;
}
HLE(fm_createSound) {
    u32 name = ARG(1), mode = ARG(2), ex = ARG(3);
    u8 *file = 0; int len = 0;
    char hp[1024], key[200] = "";
    if (mode & (MODE_OPENMEMORY | MODE_OPENMEMORY_POINT)) {            // copied: _POINT data may go away
        len = ex ? (int)M32(ex + 4) : 0;
        if (len > 0) { file = malloc((size_t)len); memcpy(file, HP(name), (size_t)len); }
    } else {
        host_path(GS(name), hp, sizeof hp);
        snprintf(key, sizeof key, "%s", hp);
        for (char *q = key; *q; q++) if (*q >= 'A' && *q <= 'Z') *q += 32;
        pthread_mutex_lock(&g_amu);
        int cached = -1;
        for (int i = 0; i < NPCM; i++) if (g_pcm[i].pcm && !strcmp(g_pcm[i].key, key)) { cached = i; break; }
        pthread_mutex_unlock(&g_amu);
        if (cached < 0) {                                              // read outside the lock
            FILE *f = fopen(hp, "rb");
            if (f) {
                fseek(f, 0, SEEK_END); len = (int)ftell(f); fseek(f, 0, SEEK_SET);
                file = malloc((size_t)(len > 0 ? len : 1));
                if (fread(file, 1, (size_t)len, f) != (size_t)len) len = 0;
                fclose(f);
            } else { static int n; if (n++ < 20) rt_log("fmod: cannot open %s\n", GS(name)); }
        }
    }
    pthread_mutex_lock(&g_amu);
    int pi = pcm_open(key, file, len);
    int idx = -1;
    if (pi >= 0) for (int i = 0; i < NSND; i++) if (!g_snd[i].used) { idx = i; break; }
    if (idx >= 0) {
        Pcm *p = &g_pcm[pi];
        p->refs++; p->last_use = ++g_pcm_clock;
        g_snd[idx] = (Snd){pi, mode, 1, p->ch, p->rate};
    }
    pthread_mutex_unlock(&g_amu);
    if (idx < 0) {
        static int n;
        if (n++ < 20) rt_log("fmod: cannot load %s (mode %x)\n", (mode & (MODE_OPENMEMORY | MODE_OPENMEMORY_POINT)) ? "<memory>" : GS(name), mode);
        M32(ARG(4)) = 0;
        return 25;                                                      // FMOD_ERR_FORMAT
    }
    M32(ARG(4)) = obj(SND_MAGIC, (u32)idx, 0);
    return 0;
}
HLE(fm_Sound_release) {
    int s = snd_of(ARG(0));
    if (s < 0) return FMOD_ERR_INVALID_HANDLE;
    pthread_mutex_lock(&g_amu);
    for (int k = 0; k < NCH; k++) if ((g_ch[k].active || g_ch[k].ended) && g_ch[k].snd == s) { g_ch[k].active = 0; g_ch[k].ended = 0; }
    Pcm *p = &g_pcm[g_snd[s].pcm];
    if (p->refs > 0) p->refs--;
    if (!p->refs && !p->key[0]) pcm_free(p);                           // memory sounds are never shared
    memset(&g_snd[s], 0, sizeof g_snd[s]);
    pcm_trim();
    pthread_mutex_unlock(&g_amu);
    M32(ARG(0)) = 0;
    return 0;
}
HLE(fm_Sound_setMode) { int s = snd_of(ARG(0)); if (s < 0) return FMOD_ERR_INVALID_HANDLE; g_snd[s].mode = ARG(1); return 0; }
static void dbg_chan(const Chan *ch, const char *why);
HLE(fm_playSound) {
    s32 id = (s32)ARG(1);
    int s = snd_of(ARG(2));
    u32 out = ARG(4);
    if (s < 0) return FMOD_ERR_INVALID_HANDLE;
    pthread_mutex_lock(&g_amu);
    int k = -1;
    if (id == -2 && out) { Chan *old = chan_of(M32(out)); if (old) k = (int)(old - g_ch); }      // FMOD_CHANNEL_REUSE
    if (k < 0) for (int i = 0; i < NCH; i++) if (!g_ch[i].active && !g_ch[i].ended) { k = i; break; }
    if (k < 0) {               // all busy: steal the oldest
        static int ns; if (ns++ < 20) rt_log("fmod: all %d channels busy, stealing the oldest\n", NCH);
        u32 best = 0xffffffffu;
        for (int i = 0; i < NCH; i++) if (!g_ch[i].ended && g_ch[i].age < best) { best = g_ch[i].age; k = i; }
        if (k < 0) k = 0;
    }
    Chan *ch = &g_ch[k];
    u32 gen = ch->gen + 1;
    Snd *sd = &g_snd[s];
    *ch = (Chan){0};
    ch->gen = gen; ch->snd = s; ch->paused = ARG(3) & 0xff; ch->vol = 1; ch->freq = (float)sd->rate; ch->mode = sd->mode;
    ch->loops = (sd->mode & (MODE_LOOP_NORMAL | MODE_LOOP_BIDI)) ? -1 : 0; ch->is3d = (sd->mode & MODE_3D) != 0;
    ch->p[0] = g_lpos[0]; ch->p[1] = g_lpos[1]; ch->p[2] = g_lpos[2];
    ch->age = ++g_order;
    ch->handle = obj(CHN_MAGIC, (u32)k, gen);
    ch->active = 1;
    pthread_mutex_unlock(&g_amu);
    dbg_chan(ch, ch->paused ? "play-paused" : (id == -2 ? "play-reuse" : "play"));
    if (out) M32(out) = ch->handle;
    return 0;
}
HLE(fm_update) {
    // END callbacks for channels that finished since the last update (game thread, like FMOD Ex)
    // The channel stays valid while its callback runs: the client's END callback (0x5300f0) reads the channel's
    // user data (its sound slot) and loop count, and frees the slot only when the loop count reads 0. Clearing
    // `ended` first made those calls fail, the slot leaked, and after 15 sounds (skids, nitro, items) none played.
    for (int k = 0; k < NCH; k++) {
        pthread_mutex_lock(&g_amu);
        Chan *ch = &g_ch[k];
        int fire = ch->ended && ch->cb && ch->cbtype == 0;          // FMOD_CHANNEL_CALLBACKTYPE_END
        u32 cb = ch->cb, h = ch->handle, cmd = ch->cmd, gen = ch->gen;
        if (ch->ended) ch->loops = 0;                               // a finished channel has no loops left
        if (!fire) ch->ended = 0;
        pthread_mutex_unlock(&g_amu);
        if (!fire) continue;
        // callback(FMOD_CHANNEL *channel, type, int command, commanddata1, commanddata2), stdcall
        u32 a[5] = {h, 0, cmd, 0, 0};
        guest_callv(c, cb, 5, a);
        pthread_mutex_lock(&g_amu);
        if (ch->gen == gen) ch->ended = 0;                          // not reused by the callback
        pthread_mutex_unlock(&g_amu);
    }
    return 0;
}
HLE(fm_close) {
    pthread_mutex_lock(&g_amu);
    for (int k = 0; k < NCH; k++) g_ch[k].active = g_ch[k].ended = 0;
    pthread_mutex_unlock(&g_amu);
    return 0;
}
HLE(fm_set3DSettings) {
    g_distf = fl(ARG(2)) > 0 ? fl(ARG(2)) : 1; g_rolloff = fl(ARG(3)) >= 0 ? fl(ARG(3)) : 1;
    rt_log("fmod: 3D settings doppler %.3f distance factor %.3f rolloff %.3f\n", fl(ARG(1)), fl(ARG(2)), fl(ARG(3)));
    return 0;
}
// debug: what starts playing (file, 3D distance, volume, rate) -- to find sounds that end up inaudible
static void dbg_chan(const Chan *ch, const char *why) {
    static int n;
    if (n >= 20000) return;                       // ~2 MB: enough to reach mid-race items (1500 ended before the first thunder)
    n++;
    const Pcm *p = &g_pcm[g_snd[ch->snd].pcm];
    const char *nm = strrchr(p->key, '/');
    float d[3] = {ch->p[0] - g_lpos[0], ch->p[1] - g_lpos[1], ch->p[2] - g_lpos[2]};
    float gl, gr;
    gains(ch, p->ch == 1, &gl, &gr);
    rt_log("fmod: %s %s mode %x 3d %d dist %.1f vol %.2f gain %.3f/%.3f freq %.0f loops %d\n", why, nm ? nm + 1 : p->key[0] ? p->key : "<memory>",
           ch->mode, ch->is3d, sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]), ch->vol, gl, gr, ch->freq, ch->loops);
}
HLE(fm_set3DListener) {
    if (ARG(1) != 0) return 0;
    pthread_mutex_lock(&g_amu);
    if (ARG(2)) for (int i = 0; i < 3; i++) g_lpos[i] = fl(M32(ARG(2) + 4 * (u32)i));
    if (ARG(4)) for (int i = 0; i < 3; i++) g_lfwd[i] = fl(M32(ARG(4) + 4 * (u32)i));
    if (ARG(5)) for (int i = 0; i < 3; i++) g_lup[i] = fl(M32(ARG(5) + 4 * (u32)i));
    pthread_mutex_unlock(&g_amu);
    return 0;
}

// ---- Channel ----------------------------------------------------------------------------------------
static u32 bad_handle(CPU *c, const char *fn) {     // debug: why a channel call failed
    static int n;
    u32 h = ARG(0);
    if (n++ < 40) {
        const char *why = !h ? "null" : M32(h) != CHN_MAGIC ? "not a channel" : M32(h + 8) >= NCH ? "bad slot"
                        : g_ch[M32(h + 8)].gen != M32(h + 12) ? "slot reused" : "channel ended";
        rt_log("fmod: %s on invalid channel %08x (%s)\n", fn, h, why);
    }
    return FMOD_ERR_INVALID_HANDLE;
}
#define CHAN_OR_FAIL Chan *ch = chan_of(ARG(0)); if (!ch) return bad_handle(c, __func__)
HLE(fm_setVolume) { CHAN_OR_FAIL; float v = fl(ARG(1)); ch->vol = v < 0 ? 0 : v > 1 ? 1 : v; return 0; }
HLE(fm_setFrequency) { CHAN_OR_FAIL; float f = fl(ARG(1)); if (f > 0) ch->freq = f; return 0; }
HLE(fm_setPaused) { CHAN_OR_FAIL; if (ch->paused != (ARG(1) & 0xff)) dbg_chan(ch, (ARG(1) & 0xff) ? "pause" : "start"); ch->paused = ARG(1) & 0xff; return 0; }
HLE(fm_setLoopCount) { CHAN_OR_FAIL; ch->loops = (s32)ARG(1); dbg_chan(ch, "loopcount"); return 0; }
HLE(fm_getLoopCount) { CHAN_OR_FAIL; M32(ARG(1)) = (u32)ch->loops; return 0; }
HLE(fm_stop) {
    Chan *ch = chan_of(ARG(0));
    if (!ch) return FMOD_ERR_INVALID_HANDLE;
    dbg_chan(ch, "stop");
    pthread_mutex_lock(&g_amu);
    ch->active = 0; ch->ended = 0;
    pthread_mutex_unlock(&g_amu);
    return 0;
}
HLE(fm_set3DAttributes) {
    CHAN_OR_FAIL;
    if (ARG(1)) { pthread_mutex_lock(&g_amu); for (int i = 0; i < 3; i++) ch->p[i] = fl(M32(ARG(1) + 4 * (u32)i)); pthread_mutex_unlock(&g_amu); }
    return 0;
}
HLE(fm_setCallback) { CHAN_OR_FAIL; ch->cbtype = ARG(1); ch->cb = ARG(2); ch->cmd = ARG(3); return 0; }
// user data lives in the guest handle (+4), valid after the channel ended too
HLE(fm_getUserData) { M32(ARG(1)) = ARG(0) ? M32(ARG(0) + 4) : 0; return 0; }
HLE(fm_setUserData) { if (ARG(0)) M32(ARG(0) + 4) = ARG(1); return 0; }

#define FM(n, f, a) DEF("fmodex", n, f, a)
static const HleDef defs[] = {
    FM("FMOD_System_Create", fm_System_Create, 1),
    FM("FMOD_System_GetNumDrivers", fm_zero_out, 2), FM("FMOD_System_GetDriverName", fm_ok, 4), FM("FMOD_System_SetDriver", fm_ok, 2),
    FM("?close@System@FMOD@@QAG?AW4FMOD_RESULT@@XZ", fm_close, 1),
    FM("?createSound@System@FMOD@@QAG?AW4FMOD_RESULT@@PBDIPAUFMOD_CREATESOUNDEXINFO@@PAPAVSound@2@@Z", fm_createSound, 5),
    FM("?createStream@System@FMOD@@QAG?AW4FMOD_RESULT@@PBDIPAUFMOD_CREATESOUNDEXINFO@@PAPAVSound@2@@Z", fm_createSound, 5),
    FM("?getLoopCount@Channel@FMOD@@QAG?AW4FMOD_RESULT@@PAH@Z", fm_getLoopCount, 2),
    FM("?getUserData@Channel@FMOD@@QAG?AW4FMOD_RESULT@@PAPAX@Z", fm_getUserData, 2),
    FM("?getVersion@System@FMOD@@QAG?AW4FMOD_RESULT@@PAI@Z", fm_getVersion, 2),
    FM("?init@System@FMOD@@QAG?AW4FMOD_RESULT@@HIPAX@Z", fm_init, 4),
    FM("?playSound@System@FMOD@@QAG?AW4FMOD_RESULT@@W4FMOD_CHANNELINDEX@@PAVSound@2@_NPAPAVChannel@2@@Z", fm_playSound, 5),
    FM("?release@Sound@FMOD@@QAG?AW4FMOD_RESULT@@XZ", fm_Sound_release, 1),
    FM("?release@System@FMOD@@QAG?AW4FMOD_RESULT@@XZ", fm_close, 1),
    FM("?set3DAttributes@Channel@FMOD@@QAG?AW4FMOD_RESULT@@PBUFMOD_VECTOR@@0@Z", fm_set3DAttributes, 3),
    FM("?set3DListenerAttributes@System@FMOD@@QAG?AW4FMOD_RESULT@@HPBUFMOD_VECTOR@@000@Z", fm_set3DListener, 6),
    FM("?set3DNumListeners@System@FMOD@@QAG?AW4FMOD_RESULT@@H@Z", fm_ok, 2),
    FM("?set3DSettings@System@FMOD@@QAG?AW4FMOD_RESULT@@MMM@Z", fm_set3DSettings, 4),
    FM("?setCallback@Channel@FMOD@@QAG?AW4FMOD_RESULT@@W4FMOD_CHANNEL_CALLBACKTYPE@@P6G?AW43@PAUFMOD_CHANNEL@@0HII@ZH@Z", fm_setCallback, 4),
    FM("?setFrequency@Channel@FMOD@@QAG?AW4FMOD_RESULT@@M@Z", fm_setFrequency, 2),
    FM("?setLoopCount@Channel@FMOD@@QAG?AW4FMOD_RESULT@@H@Z", fm_setLoopCount, 2),
    FM("?setMode@Sound@FMOD@@QAG?AW4FMOD_RESULT@@I@Z", fm_Sound_setMode, 2),
    FM("?setPaused@Channel@FMOD@@QAG?AW4FMOD_RESULT@@_N@Z", fm_setPaused, 2),
    FM("?setUserData@Channel@FMOD@@QAG?AW4FMOD_RESULT@@PAX@Z", fm_setUserData, 2),
    FM("?setVolume@Channel@FMOD@@QAG?AW4FMOD_RESULT@@M@Z", fm_setVolume, 2),
    FM("?stop@Channel@FMOD@@QAG?AW4FMOD_RESULT@@XZ", fm_stop, 1),
    FM("?update@System@FMOD@@QAG?AW4FMOD_RESULT@@XZ", fm_update, 1),
};
void hle_fmod_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
