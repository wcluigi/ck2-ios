// WS2_32 replacement: real TCP sockets; WSAAsyncSelect emulated by a poller thread posting window messages.
#include "rt.h"
#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
typedef SOCKET sock_t;
#define SOCKERR() WSAGetLastError()
#define S_WOULDBLOCK WSAEWOULDBLOCK
#define S_INPROGRESS WSAEWOULDBLOCK
#define CLOSESOCK closesocket
// Desktop bench only: WSAPoll misses refused connects; select() reports them in the exception set.
static int poll(struct pollfd *pf, unsigned n, int ms) {
    fd_set r, w, x;
    FD_ZERO(&r); FD_ZERO(&w); FD_ZERO(&x);
    for (unsigned i = 0; i < n; i++) {
        if (pf[i].events & POLLIN) FD_SET(pf[i].fd, &r);
        if (pf[i].events & POLLOUT) { FD_SET(pf[i].fd, &w); FD_SET(pf[i].fd, &x); }
        pf[i].revents = 0;
    }
    struct timeval tv = {0, ms * 1000};
    int k = select(0, &r, &w, &x, &tv);
    if (k <= 0) return k;
    int c = 0;
    for (unsigned i = 0; i < n; i++) {
        if (FD_ISSET(pf[i].fd, &r)) pf[i].revents |= POLLIN;
        if (FD_ISSET(pf[i].fd, &w)) pf[i].revents |= POLLOUT;
        if (FD_ISSET(pf[i].fd, &x)) pf[i].revents |= POLLERR;
        if (pf[i].revents) c++;
    }
    return c;
}
#else
#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <poll.h>
#include <sys/socket.h>
#include <unistd.h>
typedef int sock_t;
#define SOCKERR() errno
#define S_WOULDBLOCK EWOULDBLOCK
#define S_INPROGRESS EINPROGRESS
#define CLOSESOCK close
#endif

void user32_post(u32 hwnd, u32 msg, u32 wp, u32 lp);
#define FD_READ 1
#define FD_WRITE 2
#define FD_CONNECT 0x10
#define FD_CLOSE 0x20

typedef struct { sock_t fd; u32 hwnd, msg, events; int connecting, read_armed, write_armed, closed, async; } Sock;
static pthread_mutex_t g_smu = PTHREAD_MUTEX_INITIALIZER;
static pthread_t g_poller;
static int g_poller_on;

static u32 wsa_err(int e) {
#ifdef _WIN32
    return (u32)e;
#else
    switch (e) {
    case EWOULDBLOCK: return 10035;
    case EINPROGRESS: return 10036;
    case ECONNREFUSED: return 10061;
    case ETIMEDOUT: return 10060;
    case ENETUNREACH: return 10051;
    case EHOSTUNREACH: return 10065;
    case ECONNRESET: return 10054;
    case ECONNABORTED: return 10053;
    case ENOTCONN: return 10057;
    case EPIPE: return 10058;
    case EISCONN: return 10056;
    case EALREADY: return 10037;
    default: return 10050 + (u32)(e & 0xff) % 10;
    }
#endif
}
static void set_nonblock(sock_t fd) {
#ifdef _WIN32
    u_long one = 1; ioctlsocket(fd, FIONBIO, &one);
#else
    fcntl(fd, F_SETFL, fcntl(fd, F_GETFL) | O_NONBLOCK);
#endif
}
static Sock *sock_of(u32 h) { HObj *o = handle_get(h); return o && o->type == H_SOCKET ? o->obj : 0; }

// Poller: delivers FD_* notifications like Windows does (READ re-armed by recv, WRITE after connect/blocked send).
static void *poller(void *p) {
    (void)p;
    for (;;) {
        struct pollfd pf[256];
        u32 hs[256];
        int n = 0;
        pthread_mutex_lock(&g_smu);
        for (u32 h = 0x1000; h < 0x1000 + 8192 * 4 && n < 256; h += 4) {
            Sock *s = sock_of(h);
            if (!s || !s->async || s->closed) continue;
            pf[n].fd = s->fd;
            pf[n].events = (short)((s->connecting || s->write_armed ? POLLOUT : 0) | (s->read_armed || (s->events & FD_CLOSE) ? POLLIN : 0));
            pf[n].revents = 0;
            hs[n++] = h;
        }
        pthread_mutex_unlock(&g_smu);
        if (!n) { struct timespec ts = {0, 10000000}; nanosleep(&ts, 0); continue; }
        int pr = poll(pf, (unsigned)n, 10);
        if (pr <= 0) continue;
        pthread_mutex_lock(&g_smu);
        for (int i = 0; i < n; i++) {
            Sock *s = sock_of(hs[i]);
            if (!s || !pf[i].revents) continue;
            if (s->connecting && (pf[i].revents & (POLLOUT | POLLERR | POLLHUP))) {
                int err = 0;                 // reading SO_ERROR clears it: read it exactly once
                socklen_t len = sizeof err;
                getsockopt(s->fd, SOL_SOCKET, SO_ERROR, (char *)&err, &len);
                s->connecting = 0;
                rt_log("socket %08x connect finished, error %d\n", hs[i], err);
                if (s->events & FD_CONNECT) user32_post(s->hwnd, s->msg, hs[i], (err ? wsa_err(err) << 16 : 0) | FD_CONNECT);
                if (err) { s->closed = 1; continue; }
                if (s->events & FD_WRITE) user32_post(s->hwnd, s->msg, hs[i], FD_WRITE);
                continue;
            }
            if ((pf[i].revents & POLLOUT) && s->write_armed) { s->write_armed = 0; if (s->events & FD_WRITE) user32_post(s->hwnd, s->msg, hs[i], FD_WRITE); }
            if (pf[i].revents & (POLLIN | POLLHUP | POLLERR)) {
                char ch;
                long r = recv(s->fd, &ch, 1, MSG_PEEK);
                if (r == 0 || (r < 0 && SOCKERR() != S_WOULDBLOCK)) {
                    s->closed = 1;
                    if (s->events & FD_CLOSE) user32_post(s->hwnd, s->msg, hs[i], FD_CLOSE);
                } else if (r > 0 && s->read_armed) {
                    s->read_armed = 0;
                    if (s->events & FD_READ) user32_post(s->hwnd, s->msg, hs[i], FD_READ);
                }
            }
        }
        pthread_mutex_unlock(&g_smu);
    }
    return 0;
}

HLE(n_WSAStartup) {
    u32 d = ARG(1);
    memset(HP(d), 0, 400);
    M16(d) = 0x0202; M16(d + 2) = 0x0202;
    snprintf(GS(d + 4), 257, "WinSock 2.0");
    snprintf(GS(d + 261), 129, "Running");
    M16(d + 390) = 32767; M16(d + 392) = 65467;
#ifdef _WIN32
    WSADATA w; WSAStartup(0x202, &w);
#endif
    pthread_mutex_lock(&g_smu);
    if (!g_poller_on) { g_poller_on = 1; pthread_create(&g_poller, 0, poller, 0); }
    pthread_mutex_unlock(&g_smu);
    return 0;
}
HLE(n_WSACleanup) { return 0; }
HLE(n_WSAGetLastError) { return cur_thread()->last_error; }
HLE(n_socket) {
    sock_t fd = socket((int)ARG(0), (int)ARG(1), (int)ARG(2));
#ifdef _WIN32
    if (fd == INVALID_SOCKET) { set_last_error(wsa_err(SOCKERR())); return 0xffffffffu; }
#else
    if (fd < 0) { rt_log("socket failed, errno %d\n", errno); set_last_error(wsa_err(SOCKERR())); return 0xffffffffu; }
#endif
    Sock *s = calloc(1, sizeof *s);
    s->fd = fd;
    return handle_new(H_SOCKET, s);
}
HLE(n_closesocket) {
    pthread_mutex_lock(&g_smu);
    Sock *s = sock_of(ARG(0));
    if (s) { CLOSESOCK(s->fd); handle_free(ARG(0)); free(s); }
    pthread_mutex_unlock(&g_smu);
    return s ? 0 : 0xffffffffu;
}
HLE(n_WSAAsyncSelect) {
    pthread_mutex_lock(&g_smu);
    Sock *s = sock_of(ARG(0));
    if (s) {
        s->hwnd = ARG(1); s->msg = ARG(2); s->events = ARG(3); s->async = ARG(3) != 0;
        s->read_armed = 1;
        set_nonblock(s->fd);
    }
    pthread_mutex_unlock(&g_smu);
    return s ? 0 : 0xffffffffu;
}
HLE(n_connect) {
    Sock *s = sock_of(ARG(0));
    if (!s) { set_last_error(10038); return 0xffffffffu; }
    struct sockaddr_in a;
    memset(&a, 0, sizeof a);
    a.sin_family = AF_INET;
    a.sin_port = M16(ARG(1) + 2);
    a.sin_addr.s_addr = M32(ARG(1) + 4);
    rt_log("connect %s:%u\n", inet_ntoa(a.sin_addr), ntohs(a.sin_port));
    pthread_mutex_lock(&g_smu);
    int r = connect(s->fd, (struct sockaddr *)&a, sizeof a);
    if (r < 0) {
        int e = SOCKERR();
        if (s->async && (e == S_INPROGRESS || e == S_WOULDBLOCK)) { s->connecting = 1; set_last_error(10035); }
        else set_last_error(wsa_err(e));
        pthread_mutex_unlock(&g_smu);
        return 0xffffffffu;
    }
    if (s->async && (s->events & FD_CONNECT)) user32_post(s->hwnd, s->msg, ARG(0), FD_CONNECT);
    pthread_mutex_unlock(&g_smu);
    return 0;
}
HLE(n_send) {
    Sock *s = sock_of(ARG(0));
    if (!s) { set_last_error(10038); return 0xffffffffu; }
#ifdef MSG_NOSIGNAL
    long r = send(s->fd, HP(ARG(1)), (int)ARG(2), MSG_NOSIGNAL);
#else
    long r = send(s->fd, HP(ARG(1)), (int)ARG(2), 0);
#endif
    if (r < 0) {
        int e = SOCKERR();
        set_last_error(wsa_err(e));
        if (e == S_WOULDBLOCK) { pthread_mutex_lock(&g_smu); s->write_armed = 1; pthread_mutex_unlock(&g_smu); }
        return 0xffffffffu;
    }
    return (u32)r;
}
HLE(n_recv) {
    Sock *s = sock_of(ARG(0));
    if (!s) { set_last_error(10038); return 0xffffffffu; }
    long r = recv(s->fd, HP(ARG(1)), (int)ARG(2), 0);
    pthread_mutex_lock(&g_smu);
    s->read_armed = 1;              // Windows re-enables FD_READ on every recv
    pthread_mutex_unlock(&g_smu);
    if (r < 0) { set_last_error(wsa_err(SOCKERR())); return 0xffffffffu; }
    return (u32)r;
}
HLE(n_setsockopt) {
    Sock *s = sock_of(ARG(0));
    if (!s) return 0xffffffffu;
    int level = (int)ARG(1), opt = (int)ARG(2);
    if (level == 0xffff) {              // SOL_SOCKET numbers differ from Linux
        level = SOL_SOCKET;
        switch (opt) {
        case 0x1001: opt = SO_SNDBUF; break;
        case 0x1002: opt = SO_RCVBUF; break;
        case 0x0008: opt = SO_KEEPALIVE; break;
        case 0x0004: opt = SO_REUSEADDR; break;
        case 0x0080: opt = SO_LINGER; break;
        default: return 0;
        }
    } else if (level == 6 && opt == 1) { level = IPPROTO_TCP; opt = TCP_NODELAY; }
    else return 0;
    setsockopt(s->fd, level, opt, HP(ARG(3)), (socklen_t)ARG(4));
    return 0;
}
HLE(n_htons) { return (u16)(((ARG(0) & 0xff) << 8) | ((ARG(0) >> 8) & 0xff)); }
HLE(n_htonl) { return __builtin_bswap32(ARG(0)); }
HLE(n_inet_addr) {
    unsigned a, b, cc, d;
    if (sscanf(GS(ARG(0)), "%u.%u.%u.%u", &a, &b, &cc, &d) != 4) return 0xffffffffu;
    return a | (b << 8) | (cc << 16) | (d << 24);
}
HLE(n_inet_ntoa) {
    static u32 buf;
    if (!buf) buf = gstatic(32);
    u32 v = ARG(0);
    snprintf(GS(buf), 32, "%u.%u.%u.%u", v & 255, (v >> 8) & 255, (v >> 16) & 255, v >> 24);
    return buf;
}

#define N(n, f, a) DEF("ws2_32", n, f, a)
static const HleDef defs[] = {
    N("WSAStartup", n_WSAStartup, 2), N("WSACleanup", n_WSACleanup, 0), N("WSAGetLastError", n_WSAGetLastError, 0), N("socket", n_socket, 3),
    N("closesocket", n_closesocket, 1), N("WSAAsyncSelect", n_WSAAsyncSelect, 4), N("connect", n_connect, 3), N("send", n_send, 4),
    N("recv", n_recv, 4), N("setsockopt", n_setsockopt, 5), N("htons", n_htons, 1), N("ntohs", n_htons, 1), N("htonl", n_htonl, 1),
    N("ntohl", n_htonl, 1), N("inet_addr", n_inet_addr, 1), N("inet_ntoa", n_inet_ntoa, 1),
    // by-ordinal imports used by the game DLLs
    N("#3", n_closesocket, 1), N("#4", n_connect, 3), N("#8", n_htonl, 1), N("#9", n_htons, 1), N("#11", n_inet_addr, 1), N("#12", n_inet_ntoa, 1),
    N("#14", n_htonl, 1), N("#15", n_htons, 1), N("#16", n_recv, 4), N("#19", n_send, 4), N("#21", n_setsockopt, 5), N("#23", n_socket, 3),
    N("#101", n_WSAAsyncSelect, 4), N("#111", n_WSAGetLastError, 0), N("#115", n_WSAStartup, 2), N("#116", n_WSACleanup, 0),
};
void hle_ws2_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
