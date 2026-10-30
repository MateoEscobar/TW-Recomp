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

// Function: sub_001C5158
// Address: 0x1c5158 - 0x1c5188
void sub_001C5158_0x1c5158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5158_0x1c5158");
#endif

    switch (ctx->pc) {
        case 0x1c5160u: goto label_1c5160;
        default: break;
    }

    ctx->pc = 0x1c5158u;

    // 0x1c5158: 0x24840951  addiu       $a0, $a0, 0x951
    ctx->pc = 0x1c5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2385));
    // 0x1c515c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c515cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5160:
    // 0x1c5160: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c5160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5164: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5164u;
    {
        const bool branch_taken_0x1c5164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5164) {
            ctx->pc = 0x1C5168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5164u;
            // 0x1c5168: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5174u;
            goto label_1c5174;
        }
    }
    ctx->pc = 0x1C516Cu;
    // 0x1c516c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C516Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C516Cu;
        // 0x1c5170: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C516Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5174u;
label_1c5174:
    // 0x1c5174: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1c5174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1c5178: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C5178u;
    {
        const bool branch_taken_0x1c5178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5178u;
        // 0x1c517c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5178) {
            ctx->pc = 0x1C5160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5160;
        }
    }
    ctx->pc = 0x1C5180u;
    // 0x1c5180: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5180u;
        // 0x1c5184: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5188u;
}
