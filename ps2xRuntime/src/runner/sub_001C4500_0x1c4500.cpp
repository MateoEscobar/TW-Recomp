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

// Function: sub_001C4500
// Address: 0x1c4500 - 0x1c4528
void sub_001C4500_0x1c4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4500_0x1c4500");
#endif

    ctx->pc = 0x1c4500u;

    // 0x1c4500: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1c4500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c4504: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4504u;
    {
        const bool branch_taken_0x1c4504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4504u;
        // 0x1c4508: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4504) {
            ctx->pc = 0x1C4520u;
            goto label_1c4520;
        }
    }
    ctx->pc = 0x1C450Cu;
    // 0x1c450c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1c450cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1c4510: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x1c4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x1c4514: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1c4514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1c4518: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1c4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1c451c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1c451cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_1c4520:
    // 0x1c4520: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4528u;
}
