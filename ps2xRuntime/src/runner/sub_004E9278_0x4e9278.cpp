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

// Function: sub_004E9278
// Address: 0x4e9278 - 0x4e9288
void sub_004E9278_0x4e9278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9278_0x4e9278");
#endif

    ctx->pc = 0x4e9278u;

    // 0x4e9278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e927c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E927Cu;
        // 0x4e9280: 0xac8200e4  sw          $v0, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9284u;
    // 0x4e9284: 0x0  nop
    ctx->pc = 0x4e9284u;
    // NOP
    ctx->pc = 0x4e9288u;
}
