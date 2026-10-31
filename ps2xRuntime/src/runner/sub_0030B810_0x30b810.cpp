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

// Function: sub_0030B810
// Address: 0x30b810 - 0x30b8b8
void sub_0030B810_0x30b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B810_0x30b810");
#endif

    switch (ctx->pc) {
        case 0x30b840u: goto label_30b840;
        case 0x30b848u: goto label_30b848;
        case 0x30b858u: goto label_30b858;
        case 0x30b86cu: goto label_30b86c;
        case 0x30b87cu: goto label_30b87c;
        case 0x30b88cu: goto label_30b88c;
        default: break;
    }

    ctx->pc = 0x30b810u;

    // 0x30b810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30b814: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30b818: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30b81c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30b81cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b820: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30b824: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b828: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30b82c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30b830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b834: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30b838: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30b838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30b83c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30b83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b840:
    // 0x30b840: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30B840u;
    SET_GPR_U32(ctx, 31, 0x30B848u);
    ctx->pc = 0x30B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B840u;
    // 0x30b844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30B840u, 0x30B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B848u;
label_30b848:
    // 0x30b848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30b848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30b84c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b850: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30B850u;
    SET_GPR_U32(ctx, 31, 0x30B858u);
    ctx->pc = 0x30B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B850u;
    // 0x30b854: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30B850u, 0x30B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B858u;
label_30b858:
    // 0x30b858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b85c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30B85Cu;
    {
        const bool branch_taken_0x30b85c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B85Cu;
        // 0x30b860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b85c) {
            ctx->pc = 0x30B88Cu;
            goto label_30b88c;
        }
    }
    ctx->pc = 0x30B864u;
    // 0x30b864: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x30B864u;
    SET_GPR_U32(ctx, 31, 0x30B86Cu);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30B864u, 0x30B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B86Cu;
label_30b86c:
    // 0x30b86c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B86Cu;
    {
        const bool branch_taken_0x30b86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B86Cu;
        // 0x30b870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b86c) {
            ctx->pc = 0x30B88Cu;
            goto label_30b88c;
        }
    }
    ctx->pc = 0x30B874u;
    // 0x30b874: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30B874u;
    SET_GPR_U32(ctx, 31, 0x30B87Cu);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30B874u, 0x30B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B87Cu;
label_30b87c:
    // 0x30b87c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B87Cu;
    {
        const bool branch_taken_0x30b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B87Cu;
        // 0x30b880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b87c) {
            ctx->pc = 0x30B88Cu;
            goto label_30b88c;
        }
    }
    ctx->pc = 0x30B884u;
    // 0x30b884: 0xc0c2e52  jal         func_30B948
    ctx->pc = 0x30B884u;
    SET_GPR_U32(ctx, 31, 0x30B88Cu);
    ctx->pc = 0x30B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B884u;
    // 0x30b888: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B948u, 0x30B884u, 0x30B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B88Cu;
label_30b88c:
    // 0x30b88c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30b88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30b890: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30B890u;
    {
        const bool branch_taken_0x30b890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B890u;
        // 0x30b894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b890) {
            ctx->pc = 0x30B840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b840;
        }
    }
    ctx->pc = 0x30B898u;
    // 0x30b898: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30b898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30b89c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30b89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b8a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30b8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b8a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30b8a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b8a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30b8a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30B8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8B0u;
        // 0x30b8b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B8B8u;
}
