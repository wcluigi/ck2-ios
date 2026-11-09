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
        ROOM = 'ChatBarFrame+ChatFrame+GameChannelFrame+WaitingRoomFrame',
        CREATE = 'ChatBarFrame+ChatFrame+GameChannelFrame+frmNewCreateRoom',
        CHANNEL = 'ChooseChannelDesktop+InfoFrame';
  const SCREENS = [LOBBY, ROOM, CREATE, CHANNEL];
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
  S.chan = '';                                   // the game does not say which channel group is picked
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
    if (cr.open && crClick(d, e)) return;
    if (S.view === 'channel') {
      const g = CHG.find(x => x[0] === d.chan);
      if (g) { S.chan = g[0]; (CH.zonesUp ? press('NewComerBackBtn') : Promise.resolve()).then(() => press(g[1])); render(); }
      else if (d.zone != null) game = 'Ser' + d.zone + 'Btn';
      else if (d.act === 'chquick') game = 'QuickEnterBtn';
      else if (d.act === 'chpage') game = d.dir < 0 ? 'SerLBtn' : 'SerRBtn';
      else if (d.act === 'back') game = CH.zonesUp ? 'NewComerBackBtn' : 'BackBtn';
      if (!g && game === null) return;
      e.preventDefault(); e.stopImmediatePropagation();
      if (game) press(game);
      return;
    }
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
    if (fr) gameBoxes(fr.m);
    if (f === ROOM) {
      if (S.view !== 'room') { hist.length = 0; hist.push('rooms'); S.view = 'room'; rlast = ''; RM.players = []; roomData(); }
      await pollRoom();
    } else if (f === LOBBY) {
      if (S.view === 'room') { S.ranked = false; go('rooms', false); }
      if (S.view === 'channel') { hist.length = 0; go('hub', false); }    // a zone entered: the lobby's hub
      await pollLobby();
    } else if (f === CHANNEL) {
      if (S.view !== 'channel') { hist.length = 0; S.view = 'channel'; chlast = ''; }
      await pollChannel();
    } else if (f === CREATE) {
      if (S.view === 'room') go('rooms', false);
      if (!cr.open) { cr.open = true; cr.set = false; S.crMode = S.crMode || 'si'; createSheet(); }
      else if (!document.querySelector('.modal.on') && !cr.busy) { cr.open = false; press('btnCancel'); }   // sheet closed: Cancel
    }
    if (f && f !== CREATE && cr.open) { cr.open = false; if (document.querySelector('.modal.on')) closeAll(); }
    setTimeout(poll, 350);
  }

  // ---- channel pick: the game's group buttons (labels are pictures; matched by their place on the game's panel) and
  // its zone list (Ser1Btn..Ser11Btn) ----
  const CHG = [['Practise', 'BeginnerChannelBtn'], ['Beginner', 'NewComerBtn'], ['Semi-Pro', 'FreeChannelBtn'],
    ['Pro', 'ZhongJiChannelBtn'], ['Channel VIP', 'AdvanceChannelBtn'], ['General', 'VIPChannelBtn'], ['Tournament', 'EventChannelBtn']];
  const CH = {zonesUp: false, zones: [], page: ''};
  const chnames = ['NewComerFrame', 'serverPage', 'SerLBtn', 'SerRBtn'];
  for (let i = 1; i <= 11; i++) chnames.push('Ser' + i + 'Btn', 'Ser' + i + 'Btn/TextButtonTextBox');
  let chlast = '';
  async function pollChannel() {
    const st = await api('state', 'n=' + chnames.join(','));
    if (!st || !st.c) return;
    const c = st.c, on = n => !!(c[n] && c[n].v), txt = n => (c[n] && c[n].t) || '';
    const zones = [];
    for (let i = 1; i <= 11; i++) {
      const nm = txt('Ser' + i + 'Btn/TextButtonTextBox');
      if (on('Ser' + i + 'Btn') && nm.trim()) zones.push({i, n: nm});
    }
    const up = on('NewComerFrame'), key = JSON.stringify([up, zones, txt('serverPage')]);
    if (key === chlast) return;
    chlast = key;
    CH.zonesUp = up; CH.zones = up ? zones : []; CH.page = up ? txt('serverPage') : '';
    if (S.view === 'channel' && !document.querySelector('.scrim.on,.modal.on')) render();
  }
  V.channel = () => `<div class="split">
   <div class="vtabs scroll">${CHG.map(g => `<button class="vtab ${S.chan === g[0] ? 'on' : ''}" data-chan="${g[0]}" style="height:44px;justify-content:center">${g[0]}</button>`).join('')}</div>
   <div class="col" style="flex:1;min-width:0">
    <div class="chan scroll stag" style="flex:1">${CH.zones.map(z => `<button class="zone" data-zone="${z.i}" style="--z:var(--green)">
      <span class="row"><span class="disp">${esc(z.n)}</span><span class="sp"></span></span></button>`).join('') ||
      `<div class="cap" style="padding:24px;text-transform:none">${CH.zonesUp ? 'No zones open in this channel.' : 'Pick a channel.'}</div>`}</div>
    <div class="row" style="justify-content:flex-end;gap:12px">${CH.page && CH.page !== '1/1' ? `<button class="gbtn dark" data-act="chpage" data-dir="-1"><span>‹</span></button><span class="cap">${esc(CH.page)}</span><button class="gbtn dark" data-act="chpage" data-dir="1"><span>›</span></button><span class="sp"></span>` : ''}
     ${CH.zonesUp ? `<button class="gbtn red shine" style="min-width:230px;height:54px;font-size:18px" data-act="chquick"><span>Quick Join</span></button>` : ''}</div>
   </div></div>`;
  const top1 = topbar;
  topbar = function () {
    if (S.view !== 'channel') return top1.apply(this, arguments);
    return `<button class="back sm" data-act="back" aria-label="${t('back')}">${sk(chev(-1))}<span><span class="disp">${t('channel')}</span>${S.chan ? `<small>${esc(S.chan)}</small>` : ''}</span></button><span class="sp"></span>`;
  };

  // ---- the game's message boxes ("leave the channel?", errors ...) in the design's dialog; its buttons press the game's ----
  let boxKey = '[]', boxUp = false;
  function gameBoxes(m) {
    const k = JSON.stringify(m || []);
    if (k === boxKey) return;
    boxKey = k;
    if (!m || !m.length) { if (boxUp) { mbxClose(); boxUp = false; } return; }
    const b = m[m.length - 1];                             // the newest box is on top
    const label = n => /^DlgYes/i.test(n) ? 'Yes' : /^DlgNo/i.test(n) ? 'No' : /^DlgOK|^OK/i.test(n) ? 'OK' : n.replace(/\d+$/, '');
    const btns = (b.b.length ? b.b : ['']).map(n => [label(n) || 'OK', () => { boxUp = false; if (n) press(n); setTimeout(() => { boxKey = ''; }, 1500); }, /^DlgNo/i.test(n) ? 'ghost' : 'red']);
    boxUp = true;
    mb0(esc(b.t).replace(/\n/g, '<br>'), btns, '');
  }

  // ---- create room: the design's Create room / Room Setting sheets over the game's frmNewCreateRoom ----
  const cr = {open: false, set: false, busy: false};
  const CRMODE = {si: 'btnCreateSiItem', ss: 'btnCreateSiSpeed', ti: 'btnCreateTeItem', ts: 'btnCreateTeSpeed', boss: 'btnCreateBoss'};
  const enc = encodeURIComponent;
  // what the game has picked: its selection image sits on the picked button
  async function crRead() {
    const opts = {crSize: [2, 3, 4, 5, 6, 7, 8].map(n => ['btnSize' + n, n]), crScore: [['btnAccOpen', 1], ['btnAccClose', 0]],
      crWager: [['btnWagerClose', 0], ['btnWager1000', 1000], ['btnWager5000', 5000], ['btnWager10000', 10000], ['btnWager20000', 20000]],
      boost: [['btnBoostOn', 1], ['btnBoostOff', 0]]};
    const sel = {crSize: 'imgSelSize', crScore: 'imgSelAcc', crWager: 'imgSelWager', boost: 'imgSelBoost'};
    const n = Object.values(sel).concat(...Object.values(opts).map(o => o.map(x => x[0])));
    const st = await api('state', 'n=' + n.join(','));
    if (!st || !st.c) return;
    const c = st.c;
    for (const k in sel) {
      const s = c[sel[k]];
      const hit = s && opts[k].find(([b]) => c[b] && Math.abs(c[b].r[0] - s.r[0]) < 5 && Math.abs(c[b].r[1] - s.r[1]) < 5);
      if (hit) S[k] = k === 'boost' ? !!hit[1] : hit[1];
    }
  }
  async function crSetOpen(keep) {
    cr.busy = true;
    await crRead();
    createSetSheet(keep);
    const nm = document.getElementById('crname');
    if (nm && !keep) { nm.value = ''; nm.placeholder = 'Room name'; }   // the game names the room when left empty
    cr.set = true; cr.busy = false;
  }
  async function crType(field, text) {                     // replace an edit field's text
    await press(field);
    for (let i = 0; i < 24; i++) await api('key', 'vk=8');
    if (text) await api('char', 's=' + enc(text));
  }
  async function crApply() {
    const name = document.getElementById('crname').value.trim(), pw = document.getElementById('crpw').value;
    cr.busy = true;
    if (name) await crType('editRoomName', name);
    await crType('editRoomPWD', pw);
    await press('btnSize' + S.crSize);
    if (S.crMode !== 'boss') {
      await press(S.crScore ? 'btnAccOpen' : 'btnAccClose');
      await press(S.crWager ? 'btnWager' + S.crWager : 'btnWagerClose');
    }
    await press(S.boost ? 'btnBoostOn' : 'btnBoostOff');
    await press('btnSubmit');                              // the game creates the room with these settings
    cr.set = false; cr.busy = false;
  }
  async function crCreate() {
    cr.busy = true;
    if (S.crMode === 'boss') {                             // Chase Battle: the game asks Easy / Normal / Hard
      await press('btnCreateBoss');
      await new Promise(r => setTimeout(r, 400));
      await press('btnChase' + (S.crBoss || 'Normal'));
    } else {
      await press(CRMODE[S.crMode] || 'btnCreateSiItem');
      await press('btnQuickCreate');
    }
    cr.busy = false;
  }
  // true = handled here
  function crClick(d, e) {
    const stop = () => { e.preventDefault(); e.stopImmediatePropagation(); return true; };
    if (d.act === 'crquick') { crCreate(); return stop(); }
    if (d.act === 'crset') { cr.busy = true; press(CRMODE[S.crMode] || 'btnCreateSiItem').then(() => press('btnRoomSet')).then(() => crSetOpen(false)); return stop(); }
    if (d.act === 'createroom' && cr.set) { cr.set = false; press('btnSetCancel'); createSheet(); return stop(); }   // Room Setting's Back
    if (d.act === 'crdefault') { press('btnDefault').then(() => crSetOpen(true)); return stop(); }
    if (d.act === 'close') { cr.busy = true; (cr.set ? press('btnSetCancel') : Promise.resolve()).then(() => press('btnCancel')).then(() => { cr.busy = false; }); return false; }
    return false;                                          // modes, boss level, chips, Mode Intro: the design's own
  }
  document.addEventListener('submit', e => {
    if (e.target.id !== 'crform' || !cr.open) return;
    e.preventDefault(); e.stopImmediatePropagation();
    crApply();
  }, true);
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
    RM.cap = d.capacity || 8;
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
      : `<div class="slot empty" aria-label="${i < (RM.cap || 8) ? 'Empty' : 'Closed'} slot ${i + 1}"${i < (RM.cap || 8) ? '' : ' style="opacity:.35"'}></div>`).join('')}</div>
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
