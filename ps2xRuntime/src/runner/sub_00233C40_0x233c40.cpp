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

// Function: sub_00233C40
// Address: 0x233c40 - 0x233c50
void sub_00233C40_0x233c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233C40_0x233c40");
#endif

    ctx->pc = 0x233c40u;

    // 0x233c40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x233c44: 0x3e00008  jr          $ra
    ctx->pc = 0x233C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C44u;
        // 0x233c48: 0xac440228  sw          $a0, 0x228($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C4Cu;
    // 0x233c4c: 0x0  nop
    ctx->pc = 0x233c4cu;
    // NOP
    ctx->pc = 0x233c50u;
}
