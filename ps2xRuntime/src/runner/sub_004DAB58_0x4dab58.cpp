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

// Function: sub_004DAB58
// Address: 0x4dab58 - 0x4dab68
void sub_004DAB58_0x4dab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAB58_0x4dab58");
#endif

    ctx->pc = 0x4dab58u;

    // 0x4dab58: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB58u;
        // 0x4dab5c: 0x248214d4  addiu       $v0, $a0, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAB60u;
    // 0x4dab60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4dab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4dab64: 0x0  nop
    ctx->pc = 0x4dab64u;
    // NOP
    ctx->pc = 0x4dab68u;
}
