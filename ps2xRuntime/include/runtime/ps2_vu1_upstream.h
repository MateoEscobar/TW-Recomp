#pragma once
// [TWR-27 decision 20] Facade over the cycle-exact VU1 interpreter of upstream PS2Recomp
// (ps2xRecomp/ps2xRuntime/src/lib/vu), the one god-of-war-recomp keeps as its reference VU1.
// The upstream sources are compiled in their own target (ps2_vu1_upstream) with their class names
// renamed, so they coexist with the VU1 interpreter inherited from BT3-Recomp. This header uses only
// plain types: it is included from both sides.
#include <cstdint>
#include <memory>

namespace ps2x::vu1up
{
    // Receives every PATH1 packet (XGKICK) the program emits, already complete.
    struct KickSink
    {
        virtual ~KickSink() = default;
        virtual void kick(const uint8_t *data, uint32_t sizeBytes) = 0;
    };

    struct Regs
    {
        float vf[32][4];
        int32_t vi[16];
        float acc[4];
        float q, p, i;
        uint32_t pc, mac, clip, status;
    };

    struct RunResult
    {
        bool ended = false;     // E bit (or D/T halt) reached
        uint64_t cycles = 0;    // VU cycles consumed by this call
    };

    class Engine
    {
    public:
        Engine();
        ~Engine();
        Engine(const Engine &) = delete;
        Engine &operator=(const Engine &) = delete;

        void reset();
        // codeGeneration must change whenever the micro memory changes (MPG / direct writes):
        // the upstream interpreter caches decoded pairs per generation.
        RunResult execute(uint8_t *code, uint32_t codeSize, uint8_t *data, uint32_t dataSize,
                          uint64_t codeGeneration, KickSink &sink,
                          uint32_t startPc, uint32_t top, uint32_t itop, uint32_t maxCycles);
        RunResult resume(uint8_t *code, uint32_t codeSize, uint8_t *data, uint32_t dataSize,
                         uint64_t codeGeneration, KickSink &sink,
                         uint32_t top, uint32_t itop, uint32_t maxCycles);
        void getRegs(Regs &out) const;
        void setRegs(const Regs &in);

    private:
        struct Impl;
        std::unique_ptr<Impl> m;
    };
}
