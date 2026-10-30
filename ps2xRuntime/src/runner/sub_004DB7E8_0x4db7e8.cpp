#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DB7E8
// Address: 0x4db7e8 - 0x4db800
void sub_004DB7E8_0x4db7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB7E8_0x4db7e8");
#endif

    ctx->pc = 0x4db7e8u;

    // 0x4db7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB7E8u;
        // 0x4db7ec: 0xc4800308  lwc1        $f0, 0x308($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB7F0u;
    // 0x4db7f0: 0xe48c0310  swc1        $f12, 0x310($a0)
    ctx->pc = 0x4db7f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 784), bits); }
    // 0x4db7f4: 0x0  nop
    ctx->pc = 0x4db7f4u;
    // NOP
    // 0x4db7f8: 0x0  nop
    ctx->pc = 0x4db7f8u;
    // NOP
    // 0x4db7fc: 0x0  nop
    ctx->pc = 0x4db7fcu;
    // NOP
    ctx->pc = 0x4db800u;
}
