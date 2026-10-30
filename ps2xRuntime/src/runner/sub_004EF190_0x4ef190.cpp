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

// Function: sub_004EF190
// Address: 0x4ef190 - 0x4ef1a0
void sub_004EF190_0x4ef190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF190_0x4ef190");
#endif

    ctx->pc = 0x4ef190u;

    // 0x4ef190: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef194: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF194u;
        // 0x4ef198: 0x24428798  addiu       $v0, $v0, -0x7868 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF19Cu;
    // 0x4ef19c: 0x0  nop
    ctx->pc = 0x4ef19cu;
    // NOP
    ctx->pc = 0x4ef1a0u;
}
