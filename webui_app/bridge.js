/* The Claude design as the real phone UI (9 Nov 2026, the user: "go html").
   index.html is the design page itself (webui/index.html) with this script added after it. The game stays in charge:
   this script feeds the design's state from the game (runtime/mobile/ui_bridge.c, /api/state) and turns the design's
   buttons into presses of the game's own controls (/api/click). The runtime shows this page only on the screens listed
   in SCREENS; everything else (create room, popups, shops not drawn yet, races) is the game's own screen.
   Nothing here invents game data: what the game does not show stays empty. */
(function () {
  'use strict';
  // script errors show on screen (testing on phones, where there is no console)
  window.addEventListener('error', e => {
    const d = document.createElement('div');
    d.style.cssText = 'position:fixed;left:0;right:0;bottom:0;z-index:99999;background:#a00;color:#fff;font:12px monospace;padding:6px;white-space:pre-wrap';
    d.textContent = 'JS error: ' + e.message + ' @ ' + (e.filename || '').split('/').pop() + ':' + e.lineno + ':' + e.colno;
    document.body.appendChild(d);
  });
  const T = new URLSearchParams(location.search).get('t') || '';
  const api = (p, q) => fetch('/api/' + p + '?t=' + T + (q ? '&' + q : '')).then(r => r.json()).catch(() => null);
  const press = n => api('click', 'n=' + encodeURIComponent(n));

  // the screens this page draws: the lobby (the design's hub + room list over the game's GameRoomFrame)
  const SCREENS = ['ChatBarFrame+ChatFrame+GameChannelFrame+GameRoomFrame'];
  api('support', 's=' + encodeURIComponent(SCREENS.join('|')));

  // the design's sample account and fake extras off: no made-up friends, wallet, popups or music
  S._frq = 1;                                    // the sample friend request ...
  const mb0 = msgBox;                            // ... is already queued by the design's first render: drop it there
  msgBox = function (text) { if (/wants to add you/.test(String(text))) return; return mb0.apply(this, arguments); };
  if (typeof mbxClose === 'function') mbxClose();
  S.me.exp = 0;
  FRIENDS.length = 0; ONLINE.length = 0;
  S.cfg.musicOn = false; S.cfg.sfxOn = false;    // the game plays its own sound
  S.me.name = ''; S.me.gm = false;
  chatLog.length = 0; chatLog.push({ch: 'all', u: '', t: ''});   // the sample chat (the game's chat is not read yet)
  NOTICES.length = 0;
  infobar = () => {};                                            // the sample notices / infobar
  const css = document.createElement('style');
  css.textContent = '.wallet,.coin{visibility:hidden}' +         // the lobby shows no money; the shop does
    '.dock .num,.ticker .num,.notice{display:none!important}';  // sample counts and notices
  document.head.appendChild(css);
  ROOMS = [];

  // the design's places -> the game's lobby controls
  const GO = {shop: 'QuickBuyCarBtn', kartshop: 'QuickBuyCarBtn', garage: 'MySpace1Btn', profile: 'MySpace1Btn',
    treasure: 'TreasureBtn', missions: 'TaskBtn', yard: 'GamblingBtn', ranked: 'ShoppingBtn', ranking: 'Ladder',
    club: 'TeamSpaceBtn', events: 'EventBtn'};
  const FILTER = {all: 'AllRoomChk', si: 'ItemModeChk', ss: 'SpeedModeChk', ti: 'TeamItemModeChk', ts: 'TeamSpeedModeChk',
    boss: 'BossModeChk', score: 'AccModeChk'};
  let rowNo = [];                                // RoomBtn i -> its room number (from the game)

  document.addEventListener('click', e => {
    const b = e.target.closest('[data-go],[data-act],[data-room],[data-filter]');
    if (!b) return;
    const d = b.dataset;
    let game = null;
    if (d.go && GO[d.go]) game = GO[d.go];
    else if (d.act === 'quick') game = 'QuickEnterBtn';
    else if (d.act === 'createroom') game = 'CreateRoomBtn';
    else if (d.act === 'rkfind') game = 'ShoppingBtn';
    else if (d.act === 'back' && S.view === 'hub') game = 'GameRoomBackBtn';      // the hub's back: the channel list
    else if (d.act === 'settings') game = '';                                     // phone settings live on sign-in
    else if (d.room != null) { const i = rowNo.indexOf(String(d.room)); game = i >= 0 ? 'RoomBtn' + i : ''; }
    else if (d.filter && FILTER[d.filter]) { press(FILTER[d.filter]); S.roomFilter = d.filter; render(); game = ''; }
    if (game === null) return;                   // the design's own navigation (hub <-> rooms, drawers)
    e.preventDefault(); e.stopImmediatePropagation();
    if (game) press(game);
  }, true);

  // chat: the design's chat box types into the game's chat field
  document.addEventListener('submit', e => {
    if (e.target.id !== 'chatform') return;
    e.preventDefault(); e.stopImmediatePropagation();
    const inp = document.getElementById('chatin'), v = inp.value.trim();
    if (!v) return;
    inp.value = '';
    press('ChatContentEdit').then(() => api('char', 's=' + encodeURIComponent(v))).then(() => api('key', 'vk=13'));
  }, true);

  // the game's lobby -> the design's state, ~3 times a second; re-render only when something changed
  const ROW = ['RoomIDText', 'RoomNameBox', 'RoomMasterText', 'InfoBox', 'PasswordImage', 'StateImage'];
  const names = ['ServerNameText', 'LevelText', 'txtAccLevel', 'ExperienceText'];
  for (let i = 0; i < 5; i++) { names.push('RoomBtn' + i); ROW.forEach(c => names.push('RoomBtn' + i + '/' + c)); }
  let last = '';
  async function poll() {
    const st = await api('state', 'n=' + names.join(','));
    if (st && st.c) {
      const c = st.c, txt = n => (c[n] && c[n].t) || '';
      const rooms = [];
      rowNo = [];
      for (let i = 0; i < 5; i++) {
        const p = 'RoomBtn' + i + '/', no = txt(p + 'RoomIDText'), nm = txt(p + 'RoomNameBox');
        rowNo.push(no);
        if (!(c['RoomBtn' + i] && c['RoomBtn' + i].v) || !nm) continue;
        const pm = /(\d+)\s*\/\s*(\d+)/.exec(txt(p + 'InfoBox')) || [];
        rooms.push({no: no || String(i + 1), n: nm, h: txt(p + 'RoomMasterText'), m: S.roomFilter === 'all' ? 'si' : S.roomFilter,
          p: +pm[1] || 0, max: +pm[2] || 8, st: 'wait',   // waiting / racing is a picture in the game: not read yet
          lock: !!(c[p + 'PasswordImage'] && c[p + 'PasswordImage'].v), t: 0, hide: true});
      }
      const zone = txt('ServerNameText');
      const key = JSON.stringify([zone, txt('LevelText'), txt('txtAccLevel'), rooms]);
      if (key !== last) {
        last = key;
        if (zone) S.channelName = zone;
        S.me.lv = +txt('LevelText') || S.me.lv;
        S.me.score = +txt('txtAccLevel') || 0;
        ROOMS = rooms;
        if ((S.view === 'hub' || S.view === 'rooms') && !document.querySelector('.scrim.on,.modal.on')) render();
      }
    }
    setTimeout(poll, 350);
  }
  poll();
  window.__ckShown = on => { if (on) { last = ''; meNow(); } };      // shown again: refresh at once

  // ---- the server's data for this player (/launcher/me through the app, which holds the launcher key) ----
  const ICON = id => 'https://crazykartlegacy.com/game-icons/items/' + id + '.webp';
  const pending = {};
  let rid = 0;
  window.__ckNative = (id, status, body) => { const f = pending[id]; delete pending[id]; if (f) f(status, body); };
  const native = path => new Promise(res => {
    if (!window.CKNative) return res(null);          // not in the app (desktop test): no server data
    const id = ++rid;
    pending[id] = (st, body) => res(st === 200 ? body : null);
    window.CKNative.get(path, id);
  });
  const key = id => 'i' + id;
  const pic = id => { const k = key(id); if (!A[k]) A[k] = ICON(id); return k; };      // the design's img() takes keys
  // the design's 3D hero only has a few models: a kart it does not have is shown as its real picture, never as
  // the sample kart
  const v3 = view3d;
  view3d = function (k, a, c, st) {
    if (window.M3 && M3.karts && M3.karts[k]) return v3.apply(this, arguments);
    const id = String(k).replace(/\D/g, ''), w = S.worn || {};
    const av = String(a || '').replace(/\D/g, '');
    const worn = (w.accessories || []).concat(w.items || []).slice(0, 10).map(t =>
      `<img src="${ICON(t)}" alt="" style="width:40px;height:40px;object-fit:contain;border-radius:8px;background:rgba(0,0,0,.45);box-shadow:inset 0 0 0 1px rgba(255,255,255,.12)">`).join('');
    return `<div class="k3w" style="position:absolute;${st || ''};display:flex;flex-direction:column;align-items:center;justify-content:center;gap:8px">` +
      `<div style="position:relative;width:62%;height:62%;display:grid;place-items:center">` +
      `<img src="${ICON(id)}" alt="" style="max-width:100%;max-height:100%;object-fit:contain;filter:drop-shadow(0 14px 16px rgba(0,0,0,.8))">` +
      (av ? `<img src="${ICON(av)}" alt="" style="position:absolute;left:4%;bottom:0;height:46%;object-fit:contain;filter:drop-shadow(0 8px 10px rgba(0,0,0,.8))">` : '') +
      `</div>${worn ? `<div style="display:flex;gap:6px;flex-wrap:wrap;justify-content:center;max-width:80%">${worn}</div>` : ''}</div>`;
  };
  const STATUS = {offline: 'off', online: 'lobby', 'in-lobby': 'room', 'in-race': 'race'};
  async function meNow() {
    let me = await native('/launcher/me');
    if (!me) {                                         // a server without /launcher/me yet: at least the friends
      const fr = await native('/launcher/friends');
      if (!fr) return;
      me = {friends: fr.friends || [], kart: null};
    }
    if (me.kart == null) {                             // friends only
      FRIENDS.length = 0;
      (me.friends || []).forEach(f => { const m = /#(\d+)/.exec(f.activity || '');
        FRIENDS.push({n: f.name, av: f.character ? pic(f.character) : '', st: STATUS[f.status] || 'off', room: m ? +m[1] : undefined, lv: f.level || ''}); });
      if ((S.view === 'hub' || S.view === 'rooms') && !document.querySelector('.scrim.on,.modal.on')) render();
      return;
    }
    S.me.name = me.nickname || S.me.name;
    S.me.lv = me.level || S.me.lv;
    S.cash = me.cash || 0; S.gold = me.gold || 0;
    S.kart = pic(me.kart); S.avatar = pic(me.avatar);
    (me.accessories || []).forEach(pic); (me.items || []).forEach(pic);
    S.acc = me.accessories && me.accessories.length ? key(me.accessories[0]) : '';
    S.worn = {kart: me.kart, avatar: me.avatar, accessories: me.accessories || [], items: me.items || []};
    FRIENDS.length = 0;
    (me.friends || []).forEach(f => {
      const m = /#(\d+)/.exec(f.activity || '');
      FRIENDS.push({n: f.name, av: f.character ? pic(f.character) : '', st: STATUS[f.status] || 'off',
        room: m ? +m[1] : undefined, lv: f.level || 1});
    });
    css.textContent = css.textContent.replace('.wallet,.coin{visibility:hidden}', '.wallet .coin:nth-child(3){visibility:hidden}');
    if ((S.view === 'hub' || S.view === 'rooms') && !document.querySelector('.scrim.on,.modal.on')) render();
  }
  meNow();
  setInterval(meNow, 15000);
})();
