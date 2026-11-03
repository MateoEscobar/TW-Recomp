#pragma once
// [TWR-27] shim for the upstream VU1 build: "PS2Memory" is renamed by macro to UpVu1MemSink. Gives the
// interpreter what it uses -- the PATH1 submit and the micro memory identity + generation, which
// enable its decoded-pair cache.
#include <cstdint>
#include "runtime/gs/ps2_gif_arbiter.h"
#include "runtime/ps2_vu1_upstream.h"
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
};
