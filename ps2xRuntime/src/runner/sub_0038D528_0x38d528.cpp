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

// Function: sub_0038D528
// Address: 0x38d528 - 0x38d538
void sub_0038D528_0x38d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D528_0x38d528");
#endif

    ctx->pc = 0x38d528u;

    // 0x38d528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d52c: 0xa08512e5  sb          $a1, 0x12E5($a0)
    ctx->pc = 0x38d52cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4837), (uint8_t)GPR_U32(ctx, 5));
    // 0x38d530: 0x3e00008  jr          $ra
    ctx->pc = 0x38D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D530u;
        // 0x38d534: 0xa08212e4  sb          $v0, 0x12E4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4836), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D538u;
}
