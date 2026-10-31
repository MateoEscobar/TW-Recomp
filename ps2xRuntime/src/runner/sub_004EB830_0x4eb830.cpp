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

// Function: sub_004EB830
// Address: 0x4eb830 - 0x4eb880
void sub_004EB830_0x4eb830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB830_0x4eb830");
#endif

    switch (ctx->pc) {
        case 0x4eb850u: goto label_4eb850;
        case 0x4eb860u: goto label_4eb860;
        default: break;
    }

    ctx->pc = 0x4eb830u;

    // 0x4eb830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eb830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4eb834: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4eb834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4eb838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eb838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4eb83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eb840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb844: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EB844u;
    {
        const bool branch_taken_0x4eb844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB844u;
        // 0x4eb848: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb844) {
            ctx->pc = 0x4EB868u;
            goto label_4eb868;
        }
    }
    ctx->pc = 0x4EB84Cu;
    // 0x4eb84c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4eb84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eb850:
    // 0x4eb850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eb854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb858: 0xc13adca  jal         func_4EB728
    ctx->pc = 0x4EB858u;
    SET_GPR_U32(ctx, 31, 0x4EB860u);
    ctx->pc = 0x4EB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB858u;
    // 0x4eb85c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB728u, 0x4EB858u, 0x4EB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB860u;
label_4eb860:
    // 0x4eb860: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EB860u;
    {
        const bool branch_taken_0x4eb860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x4eb860) {
            ctx->pc = 0x4EB864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB860u;
            // 0x4eb864: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb850;
        }
    }
    ctx->pc = 0x4EB868u;
label_4eb868:
    // 0x4eb868: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4eb868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eb86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb874: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB874u;
        // 0x4eb878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB87Cu;
    // 0x4eb87c: 0x0  nop
    ctx->pc = 0x4eb87cu;
    // NOP
    ctx->pc = 0x4eb880u;
}
