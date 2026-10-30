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

// Function: sub_0014B7F8
// Address: 0x14b7f8 - 0x14b880
void sub_0014B7F8_0x14b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B7F8_0x14b7f8");
#endif

    switch (ctx->pc) {
        case 0x14b830u: goto label_14b830;
        case 0x14b83cu: goto label_14b83c;
        default: break;
    }

    ctx->pc = 0x14b7f8u;

    // 0x14b7f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b7fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14b800: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14b804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b808: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b80c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14b80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b810: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14b814: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14b814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b818: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14b81c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b824: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x14b824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b828: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14b82c: 0x0  nop
    ctx->pc = 0x14b82cu;
    // NOP
label_14b830:
    // 0x14b830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b834: 0xc111532  jal         func_4454C8
    ctx->pc = 0x14B834u;
    SET_GPR_U32(ctx, 31, 0x14B83Cu);
    ctx->pc = 0x14B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B834u;
    // 0x14b838: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x14B834u, 0x14B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B83Cu;
label_14b83c:
    // 0x14b83c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b840: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x14b840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B844u;
    {
        const bool branch_taken_0x14b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B844u;
        // 0x14b848: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b844) {
            ctx->pc = 0x14B858u;
            goto label_14b858;
        }
    }
    ctx->pc = 0x14B84Cu;
    // 0x14b84c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b850: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14B850u;
    {
        const bool branch_taken_0x14b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b850) {
            ctx->pc = 0x14B854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B850u;
            // 0x14b854: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b830;
        }
    }
    ctx->pc = 0x14B858u;
label_14b858:
    // 0x14b858: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b85c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14b85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b860: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14b860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b864: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b868: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14b868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b86c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14b86cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b874: 0x3e00008  jr          $ra
    ctx->pc = 0x14B874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B874u;
        // 0x14b878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B87Cu;
    // 0x14b87c: 0x0  nop
    ctx->pc = 0x14b87cu;
    // NOP
    ctx->pc = 0x14b880u;
}
