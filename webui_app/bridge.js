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

  // the screens this page draws: the lobby (the design's hub + room list over the game's GameRoomFrame) and the
  // waiting room (WaitingRoomFrame)
  const LOBBY = 'ChatBarFrame+ChatFrame+GameChannelFrame+GameRoomFrame',
        ROOM = 'ChatBarFrame+ChatFrame+GameChannelFrame+WaitingRoomFrame';
  const SCREENS = [LOBBY, ROOM];
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
  // the design's waiting room buttons -> the game's WaitingRoomFrame controls
  const RACT = {ready: 'GoBtn', roomset: 'RoomSettingBtn', team: 'ChangeTeamBtn', inv: 'MySpaceBtn', kartchg: 'btnToCarDlg',
    racshop: 'WaitRoomGotoShopBtn', maps: 'btnToMapDlg', voice: 'btnVoice', translate: 'btnTranslate', back: 'RacePrepareBackBtn'};
  let rowNo = [];                                // RoomBtn i -> its room number (from the game)
  const back0 = back;                            // leaving a room: straight out, no "are you sure" (the user)
  back = function () { if (S.view === 'room') return press('RacePrepareBackBtn'); return back0.apply(this, arguments); };

  document.addEventListener('click', e => {
    const b = e.target.closest('[data-go],[data-act],[data-room],[data-filter],[data-player]');
    if (!b) return;
    const d = b.dataset;
    let game = null;
    if (S.view === 'room') {
      if (d.act && RACT[d.act]) {
        game = RACT[d.act];
        if (d.act === 'voice' || d.act === 'translate') { RM[d.act] = !RM[d.act]; render(); setTimeout(roomData, 1500); }
      } else if (d.player != null) game = 'Player' + d.player + 'Btn';         // the game's player card menu
      if (game === null) return;
      e.preventDefault(); e.stopImmediatePropagation();
      press(game);
      return;
    }
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
    const fr = await api('frames'), f = fr && fr.f;
    if (f === ROOM) {
      if (S.view !== 'room') { hist.length = 0; hist.push('rooms'); S.view = 'room'; rlast = ''; RM.players = []; roomData(); }
      await pollRoom();
    } else if (f === LOBBY) {
      if (S.view === 'room') { S.ranked = false; go('rooms', false); }
      await pollLobby();
    }
    setTimeout(poll, 350);
  }
  async function pollLobby() {
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
  }

  // ---- the waiting room: slots and room details from the game's WaitingRoomFrame, what each racer has on from the
  // server (/launcher/room, matched by nickname) ----
  const RM = {players: [], slots: [], room: {}, voice: false, translate: true, map: '', mapPic: ''};
  const SLOT = i => [i + 'PlayerNameText', 'MastertLogoImage' + i, 'ReadyImage' + i, i + 'PlayerTeamFlag', i + 'PlayerTeamText',
    'Ping' + i + 'A', 'Ping' + i + 'B', 'Ping' + i + 'C', 'ChatTip' + i + 'Text', 'VipCard' + i];
  const rnames = ['WaitingRoomFrame/RoomIDText', 'RoomInfoTextBox', 'SpeedModeText', 'SceneLevel'];
  for (let i = 0; i < 8; i++) rnames.push(...SLOT(i));
  let rlast = '', rnames_seen = '', slotKart = null;     // slotKart: set with the picture fallback below
  async function pollRoom() {
    const st = await api('state', 'n=' + rnames.join(','));
    if (!st || !st.c) return;
    const c = st.c, txt = n => (c[n] && c[n].t) || '', on = n => !!(c[n] && c[n].v);
    const slots = [];
    for (let i = 0; i < 8; i++) {
      const nm = txt(i + 'PlayerNameText');
      if (!on(i + 'PlayerNameText') || !nm) { slots.push(null); continue; }
      const tt = txt(i + 'PlayerTeamText'), ping = ['A', 'B', 'C'].map(x => 'Ping' + i + x).find(on);
      slots.push({n: nm, host: on('MastertLogoImage' + i), r: on('ReadyImage' + i),
        team: on(i + 'PlayerTeamFlag') ? (/red|红/i.test(tt) ? 'red' : /blue|蓝/i.test(tt) ? 'blue' : '') : '',
        ping: ping ? parseInt(txt(ping)) : null, chat: on('ChatTip' + i + 'Text') ? txt('ChatTip' + i + 'Text') : '',
        vip: on('VipCard' + i)});
    }
    const room = {no: txt('WaitingRoomFrame/RoomIDText'), name: txt('RoomInfoTextBox'), mode: txt('SpeedModeText'), lv: txt('SceneLevel')};
    const who = slots.filter(Boolean).map(p => p.n).sort().join('|');
    if (who !== rnames_seen) { rnames_seen = who; roomData(); }         // someone came / went: their karts
    const key = JSON.stringify([slots, room]);
    if (key === rlast) return;
    rlast = key; RM.slots = slots; RM.room = room;
    if (S.view === 'room' && !document.querySelector('.scrim.on,.modal.on')) render();
  }
  async function roomData() {
    const d = await native('/launcher/room');
    if (!d) return;
    RM.players = d.players || []; RM.voice = !!d.voice; RM.translate = d.translate !== false; RM.map = d.map_name || '';
    RM.mapPic = d.map != null ? 'map' + d.map : '';
    if (RM.mapPic && !A[RM.mapPic]) A[RM.mapPic] = 'https://crazykartlegacy.com/game-icons/maps/' + d.map + '.webp';
    (RM.players).forEach(p => { pic(p.kart); pic(p.avatar); (p.accessories || []).forEach(pic); });
    if (S.view === 'room' && !document.querySelector('.scrim.on,.modal.on')) render();
  }
  setInterval(() => { if (S.view === 'room') roomData(); }, 10000);    // kart changes in the room
  const myName = () => S.me.name || (RM.players[0] && RM.players[0].name) || '';

  const top0 = topbar;
  topbar = function () {
    if (S.view !== 'room') return top0.apply(this, arguments);
    const R = RM.room;
    return `<button class="back sm" data-act="back" aria-label="${t('back')}">${sk(chev(-1))}<span><span class="disp">${t('room')}</span></span></button><div class="rhead glass toprh"><span class="rno"><small>No.</small>${esc(R.no || '')}</span>
     <span class="rh"><span>Room Name</span><b>${esc(R.name || '')}</b></span>
     <span class="rh"><span>Race Mode</span><b class="y">${esc(R.mode || '')}</b></span>
     <span class="rh"><span>Map Level</span><b style="color:var(--green)">${esc(R.lv || '')}</b></span></div>`;
  };
  V.room = () => {
    const srv = {};
    RM.players.forEach(p => { srv[p.name] = p; });
    const ps = RM.slots.map(s => {
      if (!s) return null;
      const p = srv[s.n] || {};
      return Object.assign({}, s, {k: p.kart ? key(p.kart) : '', av: p.avatar ? key(p.avatar) : '',
        c: p.accessories && p.accessories.length ? key(p.accessories[0]) : '', acc: p.accessories || [], sex: p.sex || ''});
    });
    while (ps.length < 8) ps.push(null);
    const racers0 = ps.filter(Boolean);
    const mine = ps.find(p => p && p.n === myName()) || (!myName() && racers0.length === 1 ? racers0[0] : {});   // alone: me
    const team = ps.some(p => p && p.team), host = !!mine.host;
    const racers = ps.filter(Boolean), ready = racers.filter(p => p.r || p.host).length;
    const go = mine.r ? 'background:linear-gradient(180deg,#8cff8a,#2ec24a 50%,#127a28);animation:none' : '';
    return `<div class="row" style="height:100%;align-items:stretch;gap:10px">
   <div class="col" style="flex:1;min-width:0;gap:8px">
    <div class="slots stag">${ps.map((p, i) => p ? `<button class="slot ${team ? p.team : ''}" data-player="${i}" aria-label="${esc(p.n)}${p.r ? ', ready' : ''}">
      ${p.k ? slotKart(p, 'left:0;top:6px;right:0;bottom:22px') : ''}
      <span class="sbad">${p.vip ? `<i class="vipb" title="VIP">${sico('<path d="M3 7l4 4 5-7 5 7 4-4-2 11H5z"/>', '#2d1600', 12)}</i>` : ''}</span>
      ${p.host ? `<span class="hostb" title="Host">${sico('<path d="M3 11l9-8 9 8v10H3z"/><path d="M9 21v-6h6v6"/>', '#fff', 13)}</span>` : ''}
      ${p.r && !p.host ? `<img class="stamp" src="${A.ready}" alt="Ready">` : ''}
      ${p.chat ? `<span class="sbub">${emoT(esc(p.chat))}</span>` : ''}${p.ping != null && !isNaN(p.ping) ? `<span class="ping" style="color:${p.ping > 120 ? '#ffb21a' : '#8ff5a6'}">${p.ping}ms</span>` : ''}<span class="np">${p.sex ? `<i class="sex ${p.sex}">${p.sex === 'f' ? '♀' : '♂'}</i>` : ''}<b style="${p.vip ? 'color:#ff6b6b' : ''}">${esc(p.n)}</b></span></button>`
      : `<div class="slot empty" aria-label="Empty slot ${i + 1}"></div>`).join('')}</div>
    <button class="rchat glass" data-act="roomchat" aria-label="Room chat">${sico('<path d="M4 5h16v11H9l-5 4z"/>', '#fff', 18)}<span class="ln">Say something to the room...</span><span class="cap">Room</span></button>
   </div>
   <div class="col rcol">
    <button class="mapcard" data-act="maps" aria-label="Change map" style="height:66px">${RM.mapPic ? img(RM.mapPic, esc(RM.map)) : ''}<span class="tx" style="text-align:left;padding:12px 10px 6px"><span class="disp" style="font-size:12.6px;display:block">${esc(RM.map)}</span><span class="cap" style="color:var(--ink2)">${host ? 'Tap to change map' : ''}</span></span></button>
    <div class="rbars">${[['roomset', 'Room Settings', 'set', 1], ['team', 'Switch Teams', 'team', team], ['inv', 'My Inventory', 'inv', 1], ['racshop', 'Race Shop', 'shop', 1]].map(x => `<button class="rect dark" data-act="${x[0]}" ${x[3] ? '' : 'disabled'}>${sico(RIC[x[2]], '#fff', 16)}<b>${x[1]}</b></button>`).join('')}</div>
    <div class="rtog">${[['maps', 'Change map', '<path d="M9 4L3 6v14l6-2 6 2 6-2V4l-6 2z"/><path d="M9 4v14M15 6v14"/>'], ['kartchg', 'Change kart', '<path d="M5 16l1.5-5h11L19 16"/><path d="M3 16h18v2H3z"/><circle cx="7" cy="19" r="2"/><circle cx="17" cy="19" r="2"/><path d="M9 11l1-3h4l1 3"/>'], ['voice', RM.voice ? 'Voice chat on' : 'Voice chat off', RM.voice ? '<rect x="9" y="3" width="6" height="11" rx="3"/><path d="M5 11a7 7 0 0014 0M12 18v3"/>' : '<rect x="9" y="3" width="6" height="11" rx="3"/><path d="M5 11a7 7 0 0014 0M12 18v3M3 3l18 18"/>'], ['translate', RM.translate ? 'Translate on' : 'Translate off', '<path d="M3 5h9M7.5 3v2M5 5c.8 3.5 3.2 6 7 7.5M10 5c-.8 3.5-3.2 6-6.5 7.5M12 21l4.5-10 4.5 10M13.6 17.5h5.8"/>']].map(x => `<button data-act="${x[0]}" class="${(x[0] === 'voice' && RM.voice) || (x[0] === 'translate' && RM.translate) ? 'on' : ''}" aria-label="${x[1]}" title="${x[1]}">${sico(x[2], 'currentColor', 24)}</button>`).join('')}</div>
    <button class="rect ${mine.r ? 'green' : 'red'} big startb" data-act="ready" style="${go}"><b>${host ? 'START GAME' : mine.r ? '✓ READY' : 'READY'}</b><small>${host ? `${ready} of ${racers.length} racers ready` : mine.r ? 'Waiting for host' : ''}</small></button>
   </div></div>`;
  };
  const esc = s => String(s == null ? '' : s).replace(/[&<>"']/g, ch => ({'&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;'}[ch]));

  poll();
  window.__ckShown = on => { if (on) { last = ''; rlast = ''; meNow(); if (S.view === 'room') roomData(); } };   // shown again: refresh at once

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
    const w = S.worn || {};
    return kartPics(k, a, (w.accessories || []).concat(w.items || []), st);
  };
  // a racer in a room slot: the design's 3D kart when it has the model, else the kart / avatar / accessory pictures
  slotKart = (p, st) => window.M3 && M3.karts && M3.karts[p.k] ? v3(p.k, p.av, p.c, st, 2.15, 1) : kartPics(p.k, p.av, p.acc, st);
  function kartPics(k, a, list, st) {
    const id = String(k).replace(/\D/g, '');
    const av = String(a || '').replace(/\D/g, '');
    const worn = (list || []).slice(0, 10).map(t =>
      `<img src="${ICON(t)}" alt="" style="width:40px;height:40px;object-fit:contain;border-radius:8px;background:rgba(0,0,0,.45);box-shadow:inset 0 0 0 1px rgba(255,255,255,.12)">`).join('');
    return `<div class="k3w" style="position:absolute;${st || ''};display:flex;flex-direction:column;align-items:center;justify-content:center;gap:8px">` +
      `<div style="position:relative;width:62%;height:62%;display:grid;place-items:center">` +
      `<img src="${ICON(id)}" alt="" style="max-width:100%;max-height:100%;object-fit:contain;filter:drop-shadow(0 14px 16px rgba(0,0,0,.8))">` +
      (av ? `<img src="${ICON(av)}" alt="" style="position:absolute;left:4%;bottom:0;height:46%;object-fit:contain;filter:drop-shadow(0 8px 10px rgba(0,0,0,.8))">` : '') +
      `</div>${worn ? `<div style="display:flex;gap:6px;flex-wrap:wrap;justify-content:center;max-width:80%">${worn}</div>` : ''}</div>`;
  }
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
