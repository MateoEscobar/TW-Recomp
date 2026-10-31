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

// Function: sub_004E9290
// Address: 0x4e9290 - 0x4e92a0
void sub_004E9290_0x4e9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9290_0x4e9290");
#endif

    ctx->pc = 0x4e9290u;

    // 0x4e9290: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9290u;
        // 0x4e9294: 0xac850100  sw          $a1, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9298u;
    // 0x4e9298: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x4e9298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x4e929c: 0x0  nop
    ctx->pc = 0x4e929cu;
    // NOP
    ctx->pc = 0x4e92a0u;
}
