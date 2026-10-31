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

// Function: sub_00228680
// Address: 0x228680 - 0x2286a0
void sub_00228680_0x228680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228680_0x228680");
#endif

    ctx->pc = 0x228680u;

    // 0x228680: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x228680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x228684: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x228684u;
    {
        const bool branch_taken_0x228684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228684) {
            ctx->pc = 0x228688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228684u;
            // 0x228688: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228694u;
            goto label_228694;
        }
    }
    ctx->pc = 0x22868Cu;
    // 0x22868c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22868Cu;
    {
        const bool branch_taken_0x22868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22868Cu;
        // 0x228690: 0x244200d0  addiu       $v0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22868c) {
            ctx->pc = 0x228698u;
            goto label_228698;
        }
    }
    ctx->pc = 0x228694u;
label_228694:
    // 0x228694: 0x2442bd30  addiu       $v0, $v0, -0x42D0
    ctx->pc = 0x228694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950192));
label_228698:
    // 0x228698: 0x3e00008  jr          $ra
    ctx->pc = 0x228698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228698u;
        // 0x22869c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2286A0u;
}
