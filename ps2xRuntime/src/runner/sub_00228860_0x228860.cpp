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

// Function: sub_00228860
// Address: 0x228860 - 0x228870
void sub_00228860_0x228860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228860_0x228860");
#endif

    ctx->pc = 0x228860u;

    // 0x228860: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x228860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x228864: 0x3e00008  jr          $ra
    ctx->pc = 0x228864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228864u;
        // 0x228868: 0x24426650  addiu       $v0, $v0, 0x6650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22886Cu;
    // 0x22886c: 0x0  nop
    ctx->pc = 0x22886cu;
    // NOP
    ctx->pc = 0x228870u;
}
