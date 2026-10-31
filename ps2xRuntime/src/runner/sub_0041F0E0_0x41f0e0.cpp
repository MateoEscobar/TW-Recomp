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

// Function: sub_0041F0E0
// Address: 0x41f0e0 - 0x41f118
void sub_0041F0E0_0x41f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F0E0_0x41f0e0");
#endif

    switch (ctx->pc) {
        case 0x41f0f0u: goto label_41f0f0;
        default: break;
    }

    ctx->pc = 0x41f0e0u;

    // 0x41f0e0: 0xac804204  sw          $zero, 0x4204($a0)
    ctx->pc = 0x41f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16900), GPR_U32(ctx, 0));
    // 0x41f0e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f0e8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x41f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x41f0ec: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x41f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_41f0f0:
    // 0x41f0f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x41f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41f0f4: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x41F0F4u;
    {
        const bool branch_taken_0x41f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x41F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0F4u;
        // 0x41f0f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0f4) {
            ctx->pc = 0x41F108u;
            goto label_41f108;
        }
    }
    ctx->pc = 0x41F0FCu;
    // 0x41f0fc: 0x8c824204  lw          $v0, 0x4204($a0)
    ctx->pc = 0x41f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16900)));
    // 0x41f100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x41f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41f104: 0xac824204  sw          $v0, 0x4204($a0)
    ctx->pc = 0x41f104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16900), GPR_U32(ctx, 2));
label_41f108:
    // 0x41f108: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x41F108u;
    {
        const bool branch_taken_0x41f108 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x41F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F108u;
        // 0x41f10c: 0x24630084  addiu       $v1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f108) {
            ctx->pc = 0x41F0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f0f0;
        }
    }
    ctx->pc = 0x41F110u;
    // 0x41f110: 0x3e00008  jr          $ra
    ctx->pc = 0x41F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F118u;
}
