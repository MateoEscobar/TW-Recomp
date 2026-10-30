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

// Function: sub_0047FE08
// Address: 0x47fe08 - 0x47fe38
void sub_0047FE08_0x47fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FE08_0x47fe08");
#endif

    switch (ctx->pc) {
        case 0x47fe18u: goto label_47fe18;
        default: break;
    }

    ctx->pc = 0x47fe08u;

    // 0x47fe08: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x47fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x47fe0c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x47FE0Cu;
    {
        const bool branch_taken_0x47fe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fe0c) {
            ctx->pc = 0x47FE30u;
            goto label_47fe30;
        }
    }
    ctx->pc = 0x47FE14u;
    // 0x47fe14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_47fe18:
    // 0x47fe18: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47FE18u;
    {
        const bool branch_taken_0x47fe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x47fe18) {
            ctx->pc = 0x47FE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FE18u;
            // 0x47fe1c: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FE28u;
            goto label_47fe28;
        }
    }
    ctx->pc = 0x47FE20u;
    // 0x47fe20: 0x3e00008  jr          $ra
    ctx->pc = 0x47FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE20u;
        // 0x47fe24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47FE28u;
label_47fe28:
    // 0x47fe28: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x47FE28u;
    {
        const bool branch_taken_0x47fe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fe28) {
            ctx->pc = 0x47FE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FE28u;
            // 0x47fe2c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fe18;
        }
    }
    ctx->pc = 0x47FE30u;
label_47fe30:
    // 0x47fe30: 0x3e00008  jr          $ra
    ctx->pc = 0x47FE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FE30u;
        // 0x47fe34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47FE38u;
}
