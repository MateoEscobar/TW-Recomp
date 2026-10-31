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

// Function: sub_00106C38
// Address: 0x106c38 - 0x106c50
void sub_00106C38_0x106c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C38_0x106c38");
#endif

    ctx->pc = 0x106c38u;

    // 0x106c38: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x106c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x106c3c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x106c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x106c40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x106c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x106c44: 0x3e00008  jr          $ra
    ctx->pc = 0x106C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C44u;
        // 0x106c48: 0xa462001e  sh          $v0, 0x1E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C4Cu;
    // 0x106c4c: 0x0  nop
    ctx->pc = 0x106c4cu;
    // NOP
    ctx->pc = 0x106c50u;
}
