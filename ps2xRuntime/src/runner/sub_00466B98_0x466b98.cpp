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

// Function: sub_00466B98
// Address: 0x466b98 - 0x466bb0
void sub_00466B98_0x466b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466B98_0x466b98");
#endif

    ctx->pc = 0x466b98u;

    // 0x466b98: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466b9c: 0x8c43e684  lw          $v1, -0x197C($v0)
    ctx->pc = 0x466b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E684u));
    // 0x466ba0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x466ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x466BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466BA4u;
        // 0x466ba8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466BACu;
    // 0x466bac: 0x0  nop
    ctx->pc = 0x466bacu;
    // NOP
    ctx->pc = 0x466bb0u;
}
