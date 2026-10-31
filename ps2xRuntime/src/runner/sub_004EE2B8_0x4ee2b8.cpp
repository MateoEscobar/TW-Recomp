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

// Function: sub_004EE2B8
// Address: 0x4ee2b8 - 0x4ee2c8
void sub_004EE2B8_0x4ee2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE2B8_0x4ee2b8");
#endif

    ctx->pc = 0x4ee2b8u;

    // 0x4ee2b8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE2BCu;
        // 0x4ee2c0: 0x24423808  addiu       $v0, $v0, 0x3808 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE2C4u;
    // 0x4ee2c4: 0x0  nop
    ctx->pc = 0x4ee2c4u;
    // NOP
    ctx->pc = 0x4ee2c8u;
}
