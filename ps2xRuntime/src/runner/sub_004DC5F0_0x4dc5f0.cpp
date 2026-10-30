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

// Function: sub_004DC5F0
// Address: 0x4dc5f0 - 0x4dc608
void sub_004DC5F0_0x4dc5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC5F0_0x4dc5f0");
#endif

    ctx->pc = 0x4dc5f0u;

    // 0x4dc5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC5F0u;
        // 0x4dc5f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC5F8u;
    // 0x4dc5f8: 0x0  nop
    ctx->pc = 0x4dc5f8u;
    // NOP
    // 0x4dc5fc: 0x0  nop
    ctx->pc = 0x4dc5fcu;
    // NOP
    // 0x4dc600: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4dc600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4dc604: 0x0  nop
    ctx->pc = 0x4dc604u;
    // NOP
    ctx->pc = 0x4dc608u;
}
