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

// Function: sub_00423638
// Address: 0x423638 - 0x423648
void sub_00423638_0x423638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423638_0x423638");
#endif

    ctx->pc = 0x423638u;

    // 0x423638: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x423638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x42363c: 0x8c43504c  lw          $v1, 0x504C($v0)
    ctx->pc = 0x42363cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51504Cu));
    // 0x423640: 0x3e00008  jr          $ra
    ctx->pc = 0x423640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423640u;
        // 0x423644: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423648u;
}
