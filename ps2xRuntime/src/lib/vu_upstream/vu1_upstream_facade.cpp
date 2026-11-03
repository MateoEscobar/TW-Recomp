// [TWR-27 decision 20] Facade implementation. Compiled inside target ps2_vu1_upstream with the
// renaming macros (see CMakeLists.txt): VU1Interpreter/VU1State/GS/PS2Memory/GifPathId here are the
// upstream ones under Up* names.
#include "runtime/ps2_vu1.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_upstream.h"

#include <cstdlib>
#include <cstring>

namespace ps2x::vu1up
{
    struct Engine::Impl
    {
        VU1Interpreter vu{VU1Interpreter::Unit::VU1};
        GS gs;
        PS2Memory mem;
    };

    Engine::Engine() : m(std::make_unique<Impl>())
    {
        m->vu.reset();
        // [TWR-27 decision 22] As god-of-war-recomp: VF/VI/ACC are written when the instruction runs instead of
        // being queued with their latency. A reader still stalls until the register is ready, so the program
        // result is the same; only the intermediate state seen by a cycle-budget cut differs.
        // PS2X_VU1_QUEUES=1 restores the queued model.
        const char *queues = std::getenv("PS2X_VU1_QUEUES");
        m->vu.setDirectRegisterWrites(!(queues && queues[0] == '1'));
    }
    Engine::~Engine() = default;

    void Engine::reset() { m->vu.reset(); }

    RunResult Engine::execute(uint8_t *code, uint32_t codeSize, uint8_t *data, uint32_t dataSize,
                              uint64_t codeGeneration, KickSink &sink,
                              uint32_t startPc, uint32_t top, uint32_t itop, uint32_t maxCycles)
    {
        m->gs.sink = &sink;
        m->mem.sink = &sink;
        m->mem.vu1Code = code;
        m->mem.vu1Gen = codeGeneration;
        const uint64_t before = m->vu.state().cycles;
        m->vu.execute(code, codeSize, data, dataSize, m->gs, &m->mem, startPc, top, itop, maxCycles);
        RunResult r;
        r.cycles = m->vu.state().cycles - before;
        r.ended = r.cycles < maxCycles || m->vu.state().stoppedByD || m->vu.state().stoppedByT;
        return r;
    }

    RunResult Engine::resume(uint8_t *code, uint32_t codeSize, uint8_t *data, uint32_t dataSize,
                             uint64_t codeGeneration, KickSink &sink,
                             uint32_t top, uint32_t itop, uint32_t maxCycles)
    {
        m->gs.sink = &sink;
        m->mem.sink = &sink;
        m->mem.vu1Code = code;
        m->mem.vu1Gen = codeGeneration;
        const uint64_t before = m->vu.state().cycles;
        m->vu.resume(code, codeSize, data, dataSize, m->gs, &m->mem, top, itop, maxCycles);
        RunResult r;
        r.cycles = m->vu.state().cycles - before;
        r.ended = r.cycles < maxCycles || m->vu.state().stoppedByD || m->vu.state().stoppedByT;
        return r;
    }

    void Engine::getRegs(Regs &out) const
    {
        const auto &s = m->vu.state();
        std::memcpy(out.vf, s.vf, sizeof out.vf);
        std::memcpy(out.vi, s.vi, sizeof out.vi);
        std::memcpy(out.acc, s.acc, sizeof out.acc);
        out.q = s.q; out.p = s.p; out.i = s.i;
        out.pc = s.pc; out.mac = s.mac; out.clip = s.clip; out.status = s.status;
    }

    void Engine::setRegs(const Regs &in)
    {
        auto &s = m->vu.state();
        std::memcpy(s.vf, in.vf, sizeof s.vf);
        std::memcpy(s.vi, in.vi, sizeof s.vi);
        std::memcpy(s.acc, in.acc, sizeof s.acc);
        s.q = in.q; s.p = in.p; s.i = in.i;
        s.pc = in.pc; s.mac = in.mac; s.clip = in.clip; s.status = in.status;
    }
}
