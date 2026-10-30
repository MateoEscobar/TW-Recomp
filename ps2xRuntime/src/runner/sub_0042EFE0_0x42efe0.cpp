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

// Function: sub_0042EFE0
// Address: 0x42efe0 - 0x42f000
void sub_0042EFE0_0x42efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EFE0_0x42efe0");
#endif

    ctx->pc = 0x42efe0u;

    // 0x42efe0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42EFE0u;
    {
        const bool branch_taken_0x42efe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EFE0u;
        // 0x42efe4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42efe0) {
            ctx->pc = 0x42EFF8u;
            goto label_42eff8;
        }
    }
    ctx->pc = 0x42EFE8u;
    // 0x42efe8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x42efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x42efec: 0x2442c298  addiu       $v0, $v0, -0x3D68
    ctx->pc = 0x42efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951576));
    // 0x42eff0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42eff4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_42eff8:
    // 0x42eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x42EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F000u;
}
