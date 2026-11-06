// Loads the lifted image (image.bin / imports.txt / modules.txt written by recomp/lift.py) into guest memory,
// binds every import slot and provides LoadLibrary/GetProcAddress/GetModuleHandle.
#include "rt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

typedef struct { char name[64]; u32 base, size, entry; int exe, lifted, inited; int nexp; struct { u32 ord, addr; char *name; } *exp; } Mod;
static Mod g_mods[64];
static int g_nmods;

static Mod *find_mod(const char *name) {
    const char *b = name;
    for (const char *p = name; *p; p++) if (*p == '\\' || *p == '/') b = p + 1;
    char want[64];
    snprintf(want, sizeof want, "%s", b);
    if (!strchr(want, '.')) strncat(want, ".dll", sizeof want - strlen(want) - 1);
    for (int i = 0; i < g_nmods; i++) if (!strcasecmp(g_mods[i].name, want)) return &g_mods[i];
    return 0;
}
static Mod *mod_by_base(u32 base) {
    for (int i = 0; i < g_nmods; i++) if (g_mods[i].base == base) return &g_mods[i];
    return 0;
}

static char *slurp(const char *path, long *len) {
    FILE *f = fopen(path, "rb");
    if (!f) return 0;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    char *b = malloc(n + 1);
    if (fread(b, 1, n, f) != (size_t)n) { fclose(f); free(b); return 0; }
    fclose(f);
    b[n] = 0;
    if (len) *len = n;
    return b;
}

// Replaced system DLLs get a fake module record so GetModuleHandle/GetProcAddress work.
static Mod *fake_mod(const char *name) {
    Mod *m = find_mod(name);
    if (m) return m;
    if (g_nmods >= 64) rt_fatal("too many modules");
    m = &g_mods[g_nmods++];
    const char *b = name;
    for (const char *p = name; *p; p++) if (*p == '\\' || *p == '/') b = p + 1;
    snprintf(m->name, sizeof m->name, "%s", b);
    if (!strchr(m->name, '.')) strncat(m->name, ".dll", sizeof m->name - strlen(m->name) - 1);
    m->base = gstatic(0x1000);               // a tiny fake image: "MZ" so the game's checks pass
    M16(m->base) = 0x5a4d;
    return m;
}

static u32 resolve(const char *dll, const char *name) {
    Mod *m = find_mod(dll);
    if (m && m->lifted) {
        if (name[0] == '#') {
            u32 ord = (u32)atoi(name + 1);
            for (int i = 0; i < m->nexp; i++) if (m->exp[i].ord == ord) return m->exp[i].addr;
        } else
            for (int i = 0; i < m->nexp; i++) if (m->exp[i].name && !strcmp(m->exp[i].name, name)) return m->exp[i].addr;
        rt_log("unresolved export %s!%s\n", dll, name);
        return 0;
    }
    return hle_thunk(dll, name);
}

void loader_load(const char *dir) {
    char p[700];
    long n;
    snprintf(p, sizeof p, "%s/image.bin", dir);
    u8 *img = (u8 *)slurp(p, &n);
    if (!img || memcmp(img, "CKIMG1", 6)) rt_fatal("missing or bad %s", p);
    u32 cnt = *(u32 *)(img + 8), off = 12;
    for (u32 i = 0; i < cnt; i++) {
        u32 va = *(u32 *)(img + off), sz = *(u32 *)(img + off + 4);
        memcpy(HP(va), img + off + 8, sz);
        off += 8 + sz;
    }
    free(img);
    snprintf(p, sizeof p, "%s/modules.txt", dir);
    char *mt = slurp(p, 0);
    if (!mt) rt_fatal("missing %s", p);
    Mod *cur = 0;
    for (char *line = strtok(mt, "\n"); line; line = strtok(0, "\n")) {
        char a[128], b2[128];
        u32 x, y, z;
        int e;
        if (sscanf(line, "module %127s %x %x %x %d", a, &x, &y, &z, &e) == 5) {
            cur = &g_mods[g_nmods++];
            snprintf(cur->name, sizeof cur->name, "%s", e ? "CrazyKartClient.dat" : a);
            cur->base = x; cur->size = y; cur->entry = z; cur->exe = e; cur->lifted = 1;
            cur->exp = 0; cur->nexp = 0;
        } else if (cur && sscanf(line, "export %u %x %127s", &x, &y, b2) == 3) {
            cur->exp = realloc(cur->exp, sizeof *cur->exp * (cur->nexp + 1));
            cur->exp[cur->nexp].ord = x; cur->exp[cur->nexp].addr = y;
            cur->exp[cur->nexp].name = strcmp(b2, "-") ? strdup(b2) : 0;
            cur->nexp++;
        }
    }
    free(mt);
    snprintf(p, sizeof p, "%s/imports.txt", dir);
    char *it = slurp(p, 0);
    if (!it) rt_fatal("missing %s", p);
    int nimp = 0;
    for (char *line = strtok(it, "\n"); line; line = strtok(0, "\n")) {
        u32 slot;
        char dll[128], name[256];
        if (sscanf(line, "%x %127s %255s", &slot, dll, name) != 3) continue;
        M32(slot) = resolve(dll, name);
        nimp++;
    }
    free(it);
    rt_log("loader: %u sections, %d modules, %d import slots bound\n", cnt, g_nmods, nimp);
}

// DllMain of a recompiled DLL runs the first time the game loads it.
static void init_mod(Mod *m) {
    if (m->inited || m->exe || !m->lifted) return;
    m->inited = 1;
    if (m->entry) {
        u32 ok = guest_call(CUR_CPU, m->entry, 3, m->base, 1u /*DLL_PROCESS_ATTACH*/, 0u);
        rt_log("DllMain %s -> %u\n", m->name, ok);
    }
}

u32 module_load(const char *name) {
    Mod *m = find_mod(name);
    if (m && m->lifted) { init_mod(m); return m->base; }
    if (m) return m->base;
    // Windows system DLLs are replaced; anything else the game probes for is reported missing.
    static const char *sys[] = {"kernel32", "user32", "gdi32", "gdiplus", "advapi32", "ws2_32", "winmm", "ole32", "oleaut32",
                                "shell32", "shlwapi", "imm32", "d3d9", "dinput8", "fmodex", "msvcr71", "msvcp71", "wininet",
                                "urlmon", "version", "ntdll", "comctl32", "dsound", "icmp", "iphlpapi", 0};
    const char *b = name;
    for (const char *q = name; *q; q++) if (*q == '\\' || *q == '/') b = q + 1;
    for (int i = 0; sys[i]; i++)
        if (!strncasecmp(b, sys[i], strlen(sys[i])) && (b[strlen(sys[i])] == '.' || !b[strlen(sys[i])]))
            return fake_mod(b)->base;
    rt_log("LoadLibrary(%s): not available on this platform\n", name);
    return 0;
}
u32 module_handle(const char *name) {
    if (!name) return GUEST_IMAGE_LO;
    Mod *m = find_mod(name);
    if (m) return m->base;
    return module_load(name);
}
u32 module_proc(u32 base, const char *name) {
    Mod *m = mod_by_base(base);
    if (!m) return 0;
    if (m->lifted) return resolve(m->name, name);
    return hle_thunk(m->name, name);
}
const char *module_path(u32 base) {
    static char b[64][300];
    Mod *m = mod_by_base(base ? base : GUEST_IMAGE_LO);
    if (!m) return 0;
    int i = (int)(m - g_mods);
    snprintf(b[i], sizeof b[i], "%s\\%s", g_fake_dir, m->name);
    return b[i];
}
