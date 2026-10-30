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

// Function: sub_0043DAC8
// Address: 0x43dac8 - 0x43dad8
void sub_0043DAC8_0x43dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DAC8_0x43dac8");
#endif

    ctx->pc = 0x43dac8u;

    // 0x43dac8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x43dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x43dacc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x43daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x43dad0: 0x3e00008  jr          $ra
    ctx->pc = 0x43DAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DAD0u;
        // 0x43dad4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DAD8u;
}
