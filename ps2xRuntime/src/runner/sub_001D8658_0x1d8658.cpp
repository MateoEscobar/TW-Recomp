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

// Function: sub_001D8658
// Address: 0x1d8658 - 0x1d86a0
void sub_001D8658_0x1d8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8658_0x1d8658");
#endif

    switch (ctx->pc) {
        case 0x1d8670u: goto label_1d8670;
        case 0x1d867cu: goto label_1d867c;
        default: break;
    }

    ctx->pc = 0x1d8658u;

    // 0x1d8658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d865c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d8660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8664: 0x24901530  addiu       $s0, $a0, 0x1530
    ctx->pc = 0x1d8664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
    // 0x1d8668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d866c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d866cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8670:
    // 0x1d8670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8674: 0xc0756cc  jal         func_1D5B30
    ctx->pc = 0x1D8674u;
    SET_GPR_U32(ctx, 31, 0x1D867Cu);
    ctx->pc = 0x1D8678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8674u;
    // 0x1d8678: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B30u, 0x1D8674u, 0x1D867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D867Cu;
label_1d867c:
    // 0x1d867c: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1d867cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d8680: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8680u;
    {
        const bool branch_taken_0x1d8680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8680u;
        // 0x1d8684: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8680) {
            ctx->pc = 0x1D8670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8670;
        }
    }
    ctx->pc = 0x1D8688u;
    // 0x1d8688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d8688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d868c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d868cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8694: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8694u;
        // 0x1d8698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D869Cu;
    // 0x1d869c: 0x0  nop
    ctx->pc = 0x1d869cu;
    // NOP
    ctx->pc = 0x1d86a0u;
}
