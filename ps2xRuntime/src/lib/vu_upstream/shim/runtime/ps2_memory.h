#pragma once
// [TWR-27] shim for the upstream VU1 build: "PS2Memory" is renamed by macro to UpVu1MemSink. Gives the
// interpreter what it uses -- the PATH1 submit and the micro memory identity + generation, which
// enable its decoded-pair cache.
#include <cstddef>
#include <cstdint>
#include "runtime/gs/ps2_gif_arbiter.h"
#include "runtime/ps2_vu1_upstream.h"
// [TWR-27 decision 22] Sizes the GoW/Waffle VU1 stack (native blocks, capture) takes from the real header.
constexpr uint32_t PS2_VU1_CODE_SIZE = 16u * 1024u;
constexpr uint32_t PS2_VU1_DATA_SIZE = 16u * 1024u;
bool ps2xVu1CodeWritesSince(uint64_t from, uint64_t to, uint64_t *gens, uint32_t *los, uint32_t *his, size_t &count);
class PS2Memory
{
public:
    ps2x::vu1up::KickSink *sink = nullptr;
    uint8_t *vu1Code = nullptr;
    uint64_t vu1Gen = 0;
    void submitGifPacket(GifPathId, const uint8_t *data, uint32_t size) { if (sink) sink->kick(data, size); }
    uint8_t *getVU1Code() { return vu1Code; }
    uint8_t *getVU0Code() { return nullptr; }
    uint64_t getVU1CodeGeneration() const { return vu1Gen; }
    uint64_t getVU0CodeGeneration() const { return 0; }
    // [TWR-27 decision 22] Range log of the micro memory writes (ps2_vu1.cpp, filled by the VIF1 MPG writer).
    struct Vu1CodeWrite { uint64_t generation; uint32_t lo, hi; };
    static constexpr size_t kVu1CodeLog = 64;
    bool vu1CodeWritesSince(uint64_t from, uint64_t to, Vu1CodeWrite *out, size_t &count) const
    {
        uint64_t gens[kVu1CodeLog]; uint32_t los[kVu1CodeLog], his[kVu1CodeLog];
        size_t n = count < kVu1CodeLog ? count : kVu1CodeLog;
        if (!ps2xVu1CodeWritesSince(from, to, gens, los, his, n))
            return false;
        for (size_t k = 0; k < n; ++k)
            out[k] = Vu1CodeWrite{gens[k], los[k], his[k]};
        count = n;
        return true;
    }
};
