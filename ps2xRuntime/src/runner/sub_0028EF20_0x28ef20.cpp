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

// Function: sub_0028EF20
// Address: 0x28ef20 - 0x28ef30
void sub_0028EF20_0x28ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF20_0x28ef20");
#endif

    ctx->pc = 0x28ef20u;

    // 0x28ef20: 0x90820152  lbu         $v0, 0x152($a0)
    ctx->pc = 0x28ef20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x28ef24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28ef28: 0x3e00008  jr          $ra
    ctx->pc = 0x28EF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF28u;
        // 0x28ef2c: 0xa0820152  sb          $v0, 0x152($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 338), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EF30u;
}
