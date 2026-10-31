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

// Function: sub_0031C698
// Address: 0x31c698 - 0x31c740
void sub_0031C698_0x31c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C698_0x31c698");
#endif

    switch (ctx->pc) {
        case 0x31c6c8u: goto label_31c6c8;
        case 0x31c6d0u: goto label_31c6d0;
        case 0x31c6e0u: goto label_31c6e0;
        case 0x31c6f4u: goto label_31c6f4;
        case 0x31c704u: goto label_31c704;
        case 0x31c714u: goto label_31c714;
        default: break;
    }

    ctx->pc = 0x31c698u;

    // 0x31c698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31c69c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31c69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31c6a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31c6a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31c6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31c6ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31c6acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31c6b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31c6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c6bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31c6c0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x31c6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31c6c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31c6c8:
    // 0x31c6c8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31C6C8u;
    SET_GPR_U32(ctx, 31, 0x31C6D0u);
    ctx->pc = 0x31C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6C8u;
    // 0x31c6cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31C6C8u, 0x31C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6D0u;
label_31c6d0:
    // 0x31c6d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31c6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31c6d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31c6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6d8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31C6D8u;
    SET_GPR_U32(ctx, 31, 0x31C6E0u);
    ctx->pc = 0x31C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6D8u;
    // 0x31c6dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31C6D8u, 0x31C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6E0u;
label_31c6e0:
    // 0x31c6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6e4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C6E4u;
    {
        const bool branch_taken_0x31c6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6E4u;
        // 0x31c6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6e4) {
            ctx->pc = 0x31C714u;
            goto label_31c714;
        }
    }
    ctx->pc = 0x31C6ECu;
    // 0x31c6ec: 0xc089f98  jal         func_227E60
    ctx->pc = 0x31C6ECu;
    SET_GPR_U32(ctx, 31, 0x31C6F4u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31C6ECu, 0x31C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6F4u;
label_31c6f4:
    // 0x31c6f4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C6F4u;
    {
        const bool branch_taken_0x31c6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x31C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6F4u;
        // 0x31c6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6f4) {
            ctx->pc = 0x31C714u;
            goto label_31c714;
        }
    }
    ctx->pc = 0x31C6FCu;
    // 0x31c6fc: 0xc088edc  jal         func_223B70
    ctx->pc = 0x31C6FCu;
    SET_GPR_U32(ctx, 31, 0x31C704u);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31C6FCu, 0x31C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C704u;
label_31c704:
    // 0x31c704: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C704u;
    {
        const bool branch_taken_0x31c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x31C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C704u;
        // 0x31c708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c704) {
            ctx->pc = 0x31C714u;
            goto label_31c714;
        }
    }
    ctx->pc = 0x31C70Cu;
    // 0x31c70c: 0xc0c71d0  jal         func_31C740
    ctx->pc = 0x31C70Cu;
    SET_GPR_U32(ctx, 31, 0x31C714u);
    ctx->pc = 0x31C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C70Cu;
    // 0x31c710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C740u, 0x31C70Cu, 0x31C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C714u;
label_31c714:
    // 0x31c714: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31c714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31c718: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x31C718u;
    {
        const bool branch_taken_0x31c718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C718u;
        // 0x31c71c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c718) {
            ctx->pc = 0x31C6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c6c8;
        }
    }
    ctx->pc = 0x31C720u;
    // 0x31c720: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31c720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c724: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31c724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c728: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31c728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c72c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31c72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c730: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31c730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c738: 0x3e00008  jr          $ra
    ctx->pc = 0x31C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C738u;
        // 0x31c73c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C740u;
}
