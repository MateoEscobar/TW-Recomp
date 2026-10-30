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

// Function: sub_00465300
// Address: 0x465300 - 0x465310
void sub_00465300_0x465300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465300_0x465300");
#endif

    ctx->pc = 0x465300u;

    // 0x465300: 0xaf84849c  sw          $a0, -0x7B64($gp)
    ctx->pc = 0x465300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935708), GPR_U32(ctx, 4));
    // 0x465304: 0x3e00008  jr          $ra
    ctx->pc = 0x465304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465304u;
        // 0x465308: 0xaf8584a0  sw          $a1, -0x7B60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46530Cu;
    // 0x46530c: 0x0  nop
    ctx->pc = 0x46530cu;
    // NOP
    ctx->pc = 0x465310u;
}
