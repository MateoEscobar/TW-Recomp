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

// Function: sub_004EEFF8
// Address: 0x4eeff8 - 0x4ef010
void sub_004EEFF8_0x4eeff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEFF8_0x4eeff8");
#endif

    ctx->pc = 0x4eeff8u;

    // 0x4eeff8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4eeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4eeffc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEFFCu;
        // 0x4ef000: 0x24428540  addiu       $v0, $v0, -0x7AC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF004u;
    // 0x4ef004: 0x0  nop
    ctx->pc = 0x4ef004u;
    // NOP
    // 0x4ef008: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4ef008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4ef00c: 0x0  nop
    ctx->pc = 0x4ef00cu;
    // NOP
    ctx->pc = 0x4ef010u;
}
