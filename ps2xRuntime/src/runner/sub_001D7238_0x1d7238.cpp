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

// Function: sub_001D7238
// Address: 0x1d7238 - 0x1d7248
void sub_001D7238_0x1d7238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7238_0x1d7238");
#endif

    ctx->pc = 0x1d7238u;

    // 0x1d7238: 0xc4800630  lwc1        $f0, 0x630($a0)
    ctx->pc = 0x1d7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d723c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D723Cu;
        // 0x1d7240: 0xe4800634  swc1        $f0, 0x634($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7244u;
    // 0x1d7244: 0x0  nop
    ctx->pc = 0x1d7244u;
    // NOP
    ctx->pc = 0x1d7248u;
}
