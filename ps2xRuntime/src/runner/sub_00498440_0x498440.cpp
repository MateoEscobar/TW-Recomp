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

// Function: sub_00498440
// Address: 0x498440 - 0x498450
void sub_00498440_0x498440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498440_0x498440");
#endif

    ctx->pc = 0x498440u;

    // 0x498440: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x498440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x498444: 0x3e00008  jr          $ra
    ctx->pc = 0x498444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498444u;
        // 0x498448: 0x2442f618  addiu       $v0, $v0, -0x9E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964760));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49844Cu;
    // 0x49844c: 0x0  nop
    ctx->pc = 0x49844cu;
    // NOP
    ctx->pc = 0x498450u;
}
