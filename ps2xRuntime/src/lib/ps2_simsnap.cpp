// [TWR-27] In-memory snapshot of the emulated machine (rollback / state sync), moved out of
// game_overrides.cpp (ADR TWR-27 D1, cube B). Only the game-independent part is kept: guest RAM,
// scratchpad, IOP RAM, VU0/VU1 memories and state, GS VRAM and privileged registers, the frame
// counter and the libc rand state. The BT3 sound-HLE bookkeeping (IOP sinks, SE voices, CD
// device latches) the original carried belonged to the BT3 override layer, which no longer runs
// for Warriors. The serialised form is only read back by the same binary ('SIM2').
#include "ps2_runtime.h"
#include "runtime/ps2_memory.h"
#include "runtime/ps2_statesync.h"

#include <atomic>
#include <cstring>
#include <vector>

extern std::atomic<uint64_t> g_warriorsFrameCount;   // ps2_frame_state.cpp

namespace ps2_stubs
{
    uint32_t ps2RandCallCount();
    uint64_t ps2RandState();
    void ps2RandRestore(uint64_t state, uint32_t calls);
}

namespace
{
    // GSRegisters holds csr as an atomic, so it is packed field by field.
    struct GsRegSer { uint64_t v[19]; };
    void gsRegPack(const GSRegisters &g, GsRegSer &o)
    {
        o.v[0] = g.pmode;   o.v[1] = g.smode1;   o.v[2] = g.smode2;   o.v[3] = g.srfsh;
        o.v[4] = g.synch1;  o.v[5] = g.synch2;   o.v[6] = g.syncv;
        o.v[7] = g.dispfb1; o.v[8] = g.display1; o.v[9] = g.dispfb2;  o.v[10] = g.display2;
        o.v[11] = g.extbuf; o.v[12] = g.extdata; o.v[13] = g.extwrite; o.v[14] = g.bgcolor;
        o.v[15] = g.csr.load(std::memory_order_relaxed);
        o.v[16] = g.imr;    o.v[17] = g.busdir;  o.v[18] = g.siglblid;
    }
    void gsRegUnpack(const GsRegSer &o, GSRegisters &g)
    {
        g.pmode = o.v[0];   g.smode1 = o.v[1];   g.smode2 = o.v[2];   g.srfsh = o.v[3];
        g.synch1 = o.v[4];  g.synch2 = o.v[5];   g.syncv = o.v[6];
        g.dispfb1 = o.v[7]; g.display1 = o.v[8]; g.dispfb2 = o.v[9];  g.display2 = o.v[10];
        g.extbuf = o.v[11]; g.extdata = o.v[12]; g.extwrite = o.v[13]; g.bgcolor = o.v[14];
        // csr is NOT restored: the vsync worker and the GIF own its live bits.
        g.imr = o.v[16];    g.busdir = o.v[17];  g.siglblid = o.v[18];
    }

    struct SimSnap
    {
        uint64_t frame = 0, rand64 = 0;
        uint32_t randCalls = 0;
        std::vector<uint8_t> ram, sp, iop, vu0d, vu1d, vram, vu0c, vu1c;
        VU1State v0{}, v1{};
        GsRegSer gs{};
    };

    void snapCopy(std::vector<uint8_t> &dst, const uint8_t *src, size_t n)
    {
        dst.resize(n);
        if (n) std::memcpy(dst.data(), src, n);
    }
    void snapPut(uint8_t *dst, const std::vector<uint8_t> &src, size_t n)
    {
        if (dst && src.size() == n && n) std::memcpy(dst, src.data(), n);
    }

    constexpr size_t kIopRamSize = 2u * 1024u * 1024u;
    constexpr uint32_t kMagic = 0x53494d32u;   // 'SIM2'
    constexpr uint32_t kEnd = 0x53494d45u;     // 'SIME'
}

extern "C" void *ps2xSimSnapCapture(PS2Runtime *runtime, uint8_t *rdram)
{
    SimSnap *s = new SimSnap();
    PS2Memory &mem = runtime->memory();
    s->frame = g_warriorsFrameCount.load(std::memory_order_relaxed);
    s->rand64 = ps2_stubs::ps2RandState();
    s->randCalls = ps2_stubs::ps2RandCallCount();
    snapCopy(s->ram, rdram, PS2_RAM_SIZE);
    if (uint8_t *sp = ps2GetScratchpadHostPtr()) snapCopy(s->sp, sp, PS2_SCRATCHPAD_SIZE);
    snapCopy(s->iop, mem.getIOPRAM(), kIopRamSize);
    snapCopy(s->vu0d, mem.getVU0Data(), PS2_VU0_DATA_SIZE);
    snapCopy(s->vu1d, mem.getVU1Data(), PS2_VU1_DATA_SIZE);
    snapCopy(s->vram, mem.getGSVRAM(), PS2_GS_VRAM_SIZE);
    snapCopy(s->vu0c, mem.getVU0Code(), PS2_VU0_CODE_SIZE);
    snapCopy(s->vu1c, mem.getVU1Code(), PS2_VU1_CODE_SIZE);
    s->v0 = runtime->vu0().state();
    s->v1 = runtime->vu1().state();
    gsRegPack(mem.gs(), s->gs);
    return s;
}

extern "C" bool ps2xSimSnapRestore(void *h, PS2Runtime *runtime, uint8_t *rdram)
{
    const SimSnap *s = static_cast<const SimSnap *>(h);
    if (!s || s->ram.size() != PS2_RAM_SIZE) return false;
    PS2Memory &mem = runtime->memory();
    std::memcpy(rdram, s->ram.data(), PS2_RAM_SIZE);
    snapPut(ps2GetScratchpadHostPtr(), s->sp, PS2_SCRATCHPAD_SIZE);
    snapPut(mem.getIOPRAM(), s->iop, kIopRamSize);
    snapPut(mem.getVU0Data(), s->vu0d, PS2_VU0_DATA_SIZE);
    snapPut(mem.getVU1Data(), s->vu1d, PS2_VU1_DATA_SIZE);
    snapPut(mem.getGSVRAM(), s->vram, PS2_GS_VRAM_SIZE);
    snapPut(mem.getVU0Code(), s->vu0c, PS2_VU0_CODE_SIZE);
    snapPut(mem.getVU1Code(), s->vu1c, PS2_VU1_CODE_SIZE);
    runtime->vu0().state() = s->v0;
    runtime->vu1().state() = s->v1;
    gsRegUnpack(s->gs, mem.gs());
    g_warriorsFrameCount.store(s->frame, std::memory_order_relaxed);
    ps2_stubs::ps2RandRestore(s->rand64, s->randCalls);
    return true;
}

extern "C" void ps2xSimSnapFree(void *h) { delete static_cast<SimSnap *>(h); }

extern "C" bool ps2xSimSnapSerialize(const void *h, std::vector<uint8_t> &out)
{
    const SimSnap *s = static_cast<const SimSnap *>(h);
    if (!s) return false;
    Ps2xByteW w(out);
    w.u32(kMagic);
    w.u64(s->frame); w.u64(s->rand64); w.u32(s->randCalls);
    w.bytes(s->ram); w.bytes(s->sp); w.bytes(s->iop); w.bytes(s->vu0d); w.bytes(s->vu1d);
    w.bytes(s->vram); w.bytes(s->vu0c); w.bytes(s->vu1c);
    w.pod(s->v0); w.pod(s->v1);
    w.pod(s->gs);
    w.u32(kEnd);
    return true;
}

extern "C" void *ps2xSimSnapDeserialize(const uint8_t *data, size_t n, size_t *used)
{
    Ps2xByteR r(data, n);
    if (r.u32() != kMagic) return nullptr;
    SimSnap *s = new SimSnap();
    s->frame = r.u64(); s->rand64 = r.u64(); s->randCalls = r.u32();
    r.bytes(s->ram); r.bytes(s->sp); r.bytes(s->iop); r.bytes(s->vu0d); r.bytes(s->vu1d);
    r.bytes(s->vram); r.bytes(s->vu0c); r.bytes(s->vu1c);
    s->v0 = r.pod<VU1State>(); s->v1 = r.pod<VU1State>();
    s->gs = r.pod<GsRegSer>();
    if (r.u32() != kEnd || !r.ok || s->ram.size() != PS2_RAM_SIZE) { delete s; return nullptr; }
    if (used) *used = (size_t)(r.p - data);
    return s;
}

extern "C" const uint8_t *ps2xSimSnapRam(const void *h)
{
    const SimSnap *s = static_cast<const SimSnap *>(h);
    return s && s->ram.size() == PS2_RAM_SIZE ? s->ram.data() : nullptr;
}

extern "C" uint64_t ps2xSimSnapFrame(const void *h)
{
    const SimSnap *s = static_cast<const SimSnap *>(h);
    return s ? s->frame : 0u;
}

extern "C" uint64_t ps2xRamHash(const uint8_t *rdram, uint32_t skipLo, uint32_t skipHi)
{   // 64-bit FNV-1a over 8-byte words (~10 ms for 32 MB), optionally skipping [skipLo, skipHi)
    uint64_t h = 1469598103934665603ull;
    const uint64_t *w = reinterpret_cast<const uint64_t *>(rdram);
    const size_t lo = skipLo / 8u, hi = skipHi / 8u;
    for (size_t i = 0; i < PS2_RAM_SIZE / 8u; ++i)
    {
        if (i >= lo && i < hi) continue;
        h ^= w[i];
        h *= 1099511628211ull;
    }
    return h;
}
