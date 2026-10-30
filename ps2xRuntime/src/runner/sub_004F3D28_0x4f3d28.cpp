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

// Function: sub_004F3D28
// Address: 0x4f3d28 - 0x4f3d38
void sub_004F3D28_0x4f3d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3D28_0x4f3d28");
#endif

    ctx->pc = 0x4f3d28u;

    // 0x4f3d28: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x4f3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x4f3d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3D2Cu;
        // 0x4f3d30: 0x244210b0  addiu       $v0, $v0, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3D34u;
    // 0x4f3d34: 0x0  nop
    ctx->pc = 0x4f3d34u;
    // NOP
    ctx->pc = 0x4f3d38u;
}
