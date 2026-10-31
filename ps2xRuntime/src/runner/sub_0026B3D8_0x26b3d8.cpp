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

// Function: sub_0026B3D8
// Address: 0x26b3d8 - 0x26b3e8
void sub_0026B3D8_0x26b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B3D8_0x26b3d8");
#endif

    ctx->pc = 0x26b3d8u;

    // 0x26b3d8: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x26b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x26b3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26B3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3E0u;
        // 0x26b3e4: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B3E8u;
}
