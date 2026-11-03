#pragma once
// [TWR-27] shim for the upstream VU1 build: "GS" is renamed by macro to UpVu1GsSink. Upstream only calls
// processGIFPacket on it when no memory object is given; the facade always gives one.
#include <cstdint>
#include "runtime/ps2_vu1_upstream.h"
class GS
{
public:
    ps2x::vu1up::KickSink *sink = nullptr;
    void processGIFPacket(const uint8_t *data, uint32_t size) { if (sink) sink->kick(data, size); }
};
