// Mobile runtime: replaces Windows underneath the recompiled client.
// Guest memory is a 4 GB block (g_mem); guest pointers are u32 offsets into it.
#pragma once
#include "cpu.h"
#include <stdarg.h>
#ifdef _WIN32
#include <time.h>
#define localtime_r(t, tm) localtime_s((tm), (t))
#define gmtime_r(t, tm) gmtime_s((tm), (t))
#endif

// ---- guest memory -----------------------------------------------------------
extern u8 *g_mem;
#define GP(a) ((void *)HP(a))                 // host pointer for a guest address
#define GS(a) ((char *)HP(a))                 // guest C string
#define GW(a) ((u16 *)HP(a))                  // guest UTF-16 string
static inline u32 GA(const void *p) { return (u32)((const u8 *)p - g_mem); }   // host -> guest address

// Fixed guest layout
#define GUEST_IMAGE_LO   0x00400000u          // exe image
#define GUEST_DLL_LO     0x10000000u          // recompiled game DLLs (rebased at lift time)
#define GUEST_HEAP_LO    0x20000000u
#define GUEST_HEAP_HI    0xE0000000u
#define GUEST_STATIC_LO  0xE0000000u          // runtime-owned guest structures (TEBs, fake modules, tables)
#define THUNK_BASE       0xFFF00000u          // import thunks: THUNK_BASE + 4*index
#define THUNK_MAX        0x3FFFu

// ---- import replacements ------------------------------------------------------
// A replacement reads its arguments with ARG(n) and returns eax. The dispatcher pops the return
// address plus nargs*4 bytes (stdcall); nargs = CDECL pops only the return address.
#define CDECL (-1)
#define DATA (-2)          // variable import: fn(NULL) returns the guest address placed in the import slot
#define ARG(n) M32(c->esp + 4 + 4 * (n))
#define ARGF(n) (*(float *)HP(c->esp + 4 + 4 * (n)))
typedef u32 (*HleFn)(CPU *c);
typedef struct { const char *dll, *name; HleFn fn; int nargs; } HleDef;
void hle_add(const HleDef *defs, int n);
u32 hle_thunk(const char *dll, const char *name);     // thunk address for dll!name (traps when called if unknown)
u32 hle_thunk_fn(const char *what, HleFn fn, int nargs);   // thunk for a runtime function (COM methods)
#define HLE(name) static u32 name(CPU *c)
#define DEF(dll, name, fn, n) { dll, name, fn, n }

// ---- calling guest code ---------------------------------------------------------
u32 guest_call(CPU *c, u32 fn, int nargs, ...);        // works for cdecl and stdcall callees
u32 guest_callv(CPU *c, u32 fn, int nargs, const u32 *args);

// ---- guest heap -------------------------------------------------------------------
u32 galloc(u32 size);
u32 gcalloc(u32 size);
void gfree(u32 p);
u32 grealloc(u32 p, u32 size);
u32 gmsize(u32 p);
u32 gpages(u32 size);          // page-aligned (64 KB aligned) zeroed block, for VirtualAlloc
void gpages_free(u32 p);
u32 gstrdup(const char *s);
u32 gstatic(u32 size);         // permanent zeroed runtime-owned guest memory

// ---- threads -------------------------------------------------------------------------
typedef struct GThread {
    CPU cpu;
    u32 teb, stack_lo, stack_hi;
    u32 last_error;
    u32 tls[128];
    u32 handle;
    struct MsgQueue *mq;
    u32 crt_block;          // guest per-thread C runtime data: +0 errno
    u32 strtok_p, holdrand;
} GThread;
GThread *cur_thread(void);
#define CUR_CPU (&cur_thread()->cpu)
u32 thread_create(u32 start, u32 arg, u32 stack_size, int suspended, u32 *tid);   // returns handle
void set_last_error(u32 e);

// ---- handles -----------------------------------------------------------------------------
enum { H_FREE, H_FILE, H_FIND, H_THREAD, H_EVENT, H_MUTEX, H_SEM, H_MODULE, H_SOCKET, H_OTHER };
typedef struct { int type; void *obj; u32 aux; } HObj;
u32 handle_new(int type, void *obj);
HObj *handle_get(u32 h);
void handle_free(u32 h);

// ---- modules (exe + recompiled DLLs + replaced system DLLs) ---------------------------------
u32 module_load(const char *name);                // LoadLibraryA
u32 module_proc(u32 mod, const char *name);        // GetProcAddress
u32 module_handle(const char *name);               // GetModuleHandleA (NULL -> exe)
const char *module_path(u32 mod);

// ---- files -------------------------------------------------------------------------------
// Windows paths (backslashes, any case, "C:\..." under the fake game dir) -> host path.
int host_path(const char *winpath, char *out, int outsz);
const char *plat_overlay_root(void);               // phone UI overlay (<image dir>/mobile, tools/mobile_ui.py) or 0
extern char g_game_dir[512];                      // host directory holding the game data
extern const char *g_fake_dir;                     // what the game sees as its install dir

// ---- text --------------------------------------------------------------------------------
int gbk_to_utf16(const u8 *s, int n, u16 *out, int outmax);
int utf16_to_gbk(const u16 *s, int n, u8 *out, int outmax);

// ---- misc --------------------------------------------------------------------------------
void rt_log(const char *fmt, ...);
void rt_fatal(const char *fmt, ...);
u32 ms_now(void);
u64 us_now(void);
int guest_vsnprintf(char *out, int outsz, const char *fmt, u32 argp, int wide);
extern int g_argc; extern char g_cmdline[1024];
// per-frame cost counters for the slow-frame log (d3d9 Present): what the game loaded mid-race
typedef struct { u32 pipes, texs, files, draws, passes; u64 pipe_us, file_us, read_us, up_us; char last[2][96]; } PerfFrame;
extern PerfFrame g_perf;
void perf_file(const char *name, u64 us);
