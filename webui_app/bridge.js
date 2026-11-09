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
  window.__ckShown = on => { if (on) { last = ''; } };      // shown again: refresh at once
})();
