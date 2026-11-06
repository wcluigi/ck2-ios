// Room voice (voice.js): one RTCPeerConnection per other player in the room with voice on. The lower
// in-game key makes the offer, so two launchers never offer to each other at once. Setup messages go
// through the game server; they can arrive out of order (one POST each), so ICE candidates wait for the
// remote description, and messages from a peer the last poll did not list yet wait up to 10 s.
const pcs = new Map();                                    // peer key -> { pc, audio, pending, chain }
let early = [];
let me = null;
let room = null;
let list = [];
let ice = [];
let micP = null;
let noMic = false;
let devices = {};                                         // Settings > Sound: { speaker, mic } by name, '' = default

// A device by the name Windows shows ('' when not chosen or not connected: the default is used).
async function deviceId(kind, label) {
  if (!label) return '';
  const d = (await navigator.mediaDevices.enumerateDevices()).find((x) => x.kind === kind && x.label === label);
  return d ? d.deviceId : '';
}

// The microphone as sent: the chosen device, through AI noise removal (Settings > Noise suppression), then a
// gain stage (Settings > Microphone volume, 0-200 %).
let ctx = null;
let gain = null;

// Noise suppression (the user: "only catch voice, like Krisp"): 'ai' = RNNoise, a small neural net that keeps
// voice and drops keyboard, clicks, fans (assets/voice, ~1 % of a core, ~20 ms); 'standard' = Chromium's own
// filter (steady hum only); 'off'. AI falls back to standard when the model can't load.
let rnnP = null;
function rnnoise() {
  rnnP = rnnP || Promise.all([
    fetch(WebAssembly.validate(new Uint8Array([0, 97, 115, 109, 1, 0, 0, 0, 1, 5, 1, 96, 0, 1, 123, 3, 2, 1, 0, 10, 10, 1, 8, 0, 65, 0, 253, 15, 253, 98, 11]))
      ? 'assets/voice/rnnoise_simd.wasm' : 'assets/voice/rnnoise.wasm').then((r) => r.arrayBuffer()),   // SIMD check, as the package does
    ctx.audioWorklet.addModule('assets/voice/rnnoise-worklet.js'),
  ]).then(([wasm]) => wasm);
  rnnP.catch(() => { rnnP = null; });                    // try again with the next microphone
  return rnnP;
}

function mic() {
  if (!micP) {
    ctx = ctx || new AudioContext({ sampleRate: 48000 }); // RNNoise works at 48 kHz only
    const mode = devices.noise || 'ai';
    micP = (mode === 'ai' ? rnnoise().catch(() => null) : Promise.resolve(null)).then(async (wasm) => {
      const opts = { echoCancellation: true, noiseSuppression: mode === 'standard' || (mode === 'ai' && !wasm), autoGainControl: true };
      const id = await deviceId('audioinput', devices.mic);
      const raw = await navigator.mediaDevices.getUserMedia({ audio: id ? { ...opts, deviceId: { exact: id } } : opts })
        .catch(() => navigator.mediaDevices.getUserMedia({ audio: opts }));   // the chosen one failed: the default
      gain = ctx.createGain();
      gain.gain.value = (devices.micVolume ?? 100) / 100;
      const out = ctx.createMediaStreamDestination();
      const src = ctx.createMediaStreamSource(raw);
      const nr = wasm && new AudioWorkletNode(ctx, '@sapphi-red/web-noise-suppressor/rnnoise', { processorOptions: { maxChannels: 1, wasmBinary: wasm } });
      (nr ? src.connect(nr) : src).connect(gain).connect(out);
      meter = ctx.createAnalyser();                                             // the talking meter (below)
      meter.fftSize = 512;
      gain.connect(meter);
      out.stream.raw = raw;                                                     // stopped with it (stopMic)
      out.stream.nr = nr;
      return out.stream;
    });
    micP.then(() => { noMic = false; report(); }, () => { noMic = true; report(); });
  }
  return micP;
}

// Talking: the level of what is sent, checked every 100 ms -- on after 2 loud checks, off after 6 quiet ones.
// Only this player's own talking goes to the server, which shows the speaker icon to the room.
let meter = null;
let talking = false;
let loud = 0;
let quiet = 0;
const samples = new Float32Array(512);
function tell(on) {
  if (talking !== on) { talking = on; window.voice.speak(on); }
}
setInterval(() => {
  if (!meter || !pcs.size) { loud = quiet = 0; tell(false); return; }
  meter.getFloatTimeDomainData(samples);
  let sum = 0;
  for (const v of samples) sum += v * v;
  if (Math.sqrt(sum / samples.length) > 0.02) { loud++; quiet = 0; } else { quiet++; loud = 0; }
  if (loud >= 2) tell(true);
  else if (quiet >= 6) tell(false);
}, 100);

function route(el) {
  el.volume = (devices.voiceVolume ?? 100) / 100;
  deviceId('audiooutput', devices.speaker).then((id) => el.setSinkId(id)).catch(() => {});
}

function stopMic(p) {
  p.then((s) => {
    [...s.getTracks(), ...s.raw.getTracks()].forEach((t) => t.stop());
    if (s.nr) { s.nr.disconnect(); s.nr.port.postMessage('destroy'); }    // else the worklet runs on forever
  }, () => {});
}

function dropMic() {
  if (micP) stopMic(micP);
  micP = null;
  meter = null;
}

// Opus tuned for voice, in both directions (each side's description sets what the other side's encoder
// sends): mono, at most 24 kbit/s, nothing while silent (DTX), loss recovery in-band (FEC). The codec
// itself stays Opus, the best free voice codec and WebRTC's own.
function tune(desc) {
  const opus = (desc.sdp.match(/a=rtpmap:(\d+) opus\//i) || [])[1];
  if (!opus) return desc;
  const want = { useinbandfec: 1, usedtx: 1, stereo: 0, 'sprop-stereo': 0, maxaveragebitrate: 24000 };
  const sdp = desc.sdp.replace(new RegExp(`a=fmtp:${opus} ([^\\r\\n]*)`), (_m, params) => {
    const keep = params.split(';').filter((p) => p && !(p.split('=')[0].trim() in want));
    return `a=fmtp:${opus} ${[...keep, ...Object.entries(want).map(([k, v]) => `${k}=${v}`)].join(';')}`;
  });
  return { type: desc.type, sdp };
}

function report() {
  const live = [...pcs.values()].filter((p) => p.pc.connectionState === 'connected').length;
  window.voice.status(room === null ? '' : `voice: room ${room}, ${live}/${pcs.size} connected${noMic ? ', no microphone' : ''}`);
}

function close(id) {
  const p = pcs.get(id);
  if (!p) return;
  pcs.delete(id);
  p.pc.close();
  p.audio.srcObject = null;
  p.audio.remove();
}

function open(id) {
  const pc = new RTCPeerConnection({ iceServers: ice });
  const audio = document.body.appendChild(document.createElement('audio'));
  audio.autoplay = true;
  route(audio);
  const entry = { pc, audio, pending: [] };
  pcs.set(id, entry);                                     // before any await: this poll's signals find it
  pc.onicecandidate = (e) => { if (e.candidate) window.voice.signal(id, { ice: e.candidate.toJSON() }); };
  pc.ontrack = (e) => { audio.srcObject = e.streams[0] || new MediaStream([e.track]); };
  pc.onconnectionstatechange = () => {
    report();
    if (pc.connectionState === 'failed' && pcs.get(id) === entry) { close(id); setTimeout(sync, 3000); }   // fresh try
  };
  // Without a microphone you still hear the room.
  entry.chain = mic().then((s) => s.getTracks().forEach((t) => pc.addTrack(t, s)), () => pc.addTransceiver('audio', { direction: 'recvonly' }))
    .then(async () => {
      if (me < id && pcs.get(id) === entry) {
        await pc.setLocalDescription(tune(await pc.createOffer()));
        window.voice.signal(id, { sdp: pc.localDescription.toJSON() });
      }
    }).catch(() => {});
}

function onSignal(from, data) {
  const entry = pcs.get(from);
  if (!entry) return false;
  entry.chain = entry.chain.then(async () => {
    const { pc } = entry;
    if (data.sdp) {
      await pc.setRemoteDescription(data.sdp);
      for (const c of entry.pending.splice(0)) await pc.addIceCandidate(c).catch(() => {});
      if (data.sdp.type === 'offer') {
        await pc.setLocalDescription(tune(await pc.createAnswer()));
        window.voice.signal(from, { sdp: pc.localDescription.toJSON() });
      }
    } else if (data.ice) {
      if (pc.remoteDescription) await pc.addIceCandidate(data.ice).catch(() => {});
      else entry.pending.push(data.ice);
    }
  }).catch(() => {});
  return true;
}

// Connect to whoever the server lists, drop whoever left (or everyone, out of a room / voice off).
function sync() {
  const want = new Set(room === null ? [] : list.map((p) => p.id));
  for (const id of [...pcs.keys()]) if (!want.has(id)) close(id);
  for (const id of want) if (!pcs.has(id)) open(id);
  if (!pcs.size) dropMic();
  const now = Date.now();
  early = early.filter((s) => now - s.at < 10000 && !onSignal(s.from, s.data));
  report();
}

// A new speaker / microphone / volume in Settings: re-route the voices, set the gain, swap the mic track
// in place (no reconnect).
function applyDevices(d) {
  const speaker = d.speaker !== devices.speaker || d.voiceVolume !== devices.voiceVolume;
  const micChanged = (d.mic !== devices.mic || d.noise !== devices.noise) && micP;
  devices = d;
  if (speaker) for (const p of pcs.values()) route(p.audio);
  if (gain) gain.gain.value = (devices.micVolume ?? 100) / 100;
  if (micChanged) {
    const old = micP;
    micP = null;
    mic().then((s) => {
      const track = s.getAudioTracks()[0];
      for (const p of pcs.values()) for (const snd of p.pc.getSenders()) if (snd.track && snd.track.kind === 'audio') snd.replaceTrack(track);
      stopMic(old);
    }, () => {});
  }
}

window.voice.onState((st) => {
  applyDevices(st.audio || {});
  me = st.me;
  room = st.on ? st.room : null;
  list = st.peers || [];
  ice = st.ice || ice;
  sync();
  for (const s of st.signals || []) if (!onSignal(s.from, s.data)) early.push({ ...s, at: Date.now() });
});
