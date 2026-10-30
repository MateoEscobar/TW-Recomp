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

// Function: sub_0028D8A0
// Address: 0x28d8a0 - 0x28d8c0
void sub_0028D8A0_0x28d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D8A0_0x28d8a0");
#endif

    ctx->pc = 0x28d8a0u;

    // 0x28d8a0: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x28d8a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x28d8a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D8A4u;
    {
        const bool branch_taken_0x28d8a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8A4u;
        // 0x28d8a8: 0x9083002c  lbu         $v1, 0x2C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8a4) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28D8ACu;
    // 0x28d8ac: 0xa083002d  sb          $v1, 0x2D($a0)
    ctx->pc = 0x28d8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28D8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8B0u;
        // 0x28d8b4: 0x8082002c  lb          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D8B8u;
label_28d8b8:
    // 0x28d8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D8C0u;
}
