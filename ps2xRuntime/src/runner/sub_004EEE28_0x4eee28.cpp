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

// Function: sub_004EEE28
// Address: 0x4eee28 - 0x4eee38
void sub_004EEE28_0x4eee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEE28_0x4eee28");
#endif

    ctx->pc = 0x4eee28u;

    // 0x4eee28: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE2Cu;
        // 0x4eee30: 0x24427328  addiu       $v0, $v0, 0x7328 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEE34u;
    // 0x4eee34: 0x0  nop
    ctx->pc = 0x4eee34u;
    // NOP
    ctx->pc = 0x4eee38u;
}
