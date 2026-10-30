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

// Function: sub_0023A970
// Address: 0x23a970 - 0x23a980
void sub_0023A970_0x23a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A970_0x23a970");
#endif

    ctx->pc = 0x23a970u;

    // 0x23a970: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a974: 0x3e00008  jr          $ra
    ctx->pc = 0x23A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A974u;
        // 0x23a978: 0xac44099c  sw          $a0, 0x99C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2460), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A97Cu;
    // 0x23a97c: 0x0  nop
    ctx->pc = 0x23a97cu;
    // NOP
    ctx->pc = 0x23a980u;
}
