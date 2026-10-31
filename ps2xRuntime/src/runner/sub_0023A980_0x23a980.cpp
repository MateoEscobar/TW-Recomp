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

// Function: sub_0023A980
// Address: 0x23a980 - 0x23a990
void sub_0023A980_0x23a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A980_0x23a980");
#endif

    ctx->pc = 0x23a980u;

    // 0x23a980: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a984: 0x3e00008  jr          $ra
    ctx->pc = 0x23A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A984u;
        // 0x23a988: 0xac4409a0  sw          $a0, 0x9A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2464), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A98Cu;
    // 0x23a98c: 0x0  nop
    ctx->pc = 0x23a98cu;
    // NOP
    ctx->pc = 0x23a990u;
}
