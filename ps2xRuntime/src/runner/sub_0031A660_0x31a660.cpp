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

// Function: sub_0031A660
// Address: 0x31a660 - 0x31a728
void sub_0031A660_0x31a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A660_0x31a660");
#endif

    switch (ctx->pc) {
        case 0x31a688u: goto label_31a688;
        case 0x31a6a0u: goto label_31a6a0;
        case 0x31a6a8u: goto label_31a6a8;
        case 0x31a6b0u: goto label_31a6b0;
        case 0x31a6c8u: goto label_31a6c8;
        case 0x31a6d8u: goto label_31a6d8;
        case 0x31a6e8u: goto label_31a6e8;
        case 0x31a6f8u: goto label_31a6f8;
        default: break;
    }

    ctx->pc = 0x31a660u;

    // 0x31a660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31a664: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31a668: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31a66c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31a66cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a670: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31a674: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31a678: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31a678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31a67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a680: 0xc05959e  jal         func_165678
    ctx->pc = 0x31A680u;
    SET_GPR_U32(ctx, 31, 0x31A688u);
    ctx->pc = 0x31A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A680u;
    // 0x31a684: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31A680u, 0x31A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A688u;
label_31a688:
    // 0x31a688: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31A688u;
    {
        const bool branch_taken_0x31a688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A688u;
        // 0x31a68c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a688) {
            ctx->pc = 0x31A708u;
            goto label_31a708;
        }
    }
    ctx->pc = 0x31A690u;
    // 0x31a690: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31a694: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x31a694u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31a698: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31a698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a69c: 0x0  nop
    ctx->pc = 0x31a69cu;
    // NOP
label_31a6a0:
    // 0x31a6a0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31A6A0u;
    SET_GPR_U32(ctx, 31, 0x31A6A8u);
    ctx->pc = 0x31A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6A0u;
    // 0x31a6a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31A6A0u, 0x31A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6A8u;
label_31a6a8:
    // 0x31a6a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31A6A8u;
    SET_GPR_U32(ctx, 31, 0x31A6B0u);
    ctx->pc = 0x31A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6A8u;
    // 0x31a6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31A6A8u, 0x31A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6B0u;
label_31a6b0:
    // 0x31a6b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a6b4: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x31A6B4u;
    {
        const bool branch_taken_0x31a6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a6b4) {
            ctx->pc = 0x31A6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A6B4u;
            // 0x31a6b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A6FCu;
            goto label_31a6fc;
        }
    }
    ctx->pc = 0x31A6BCu;
    // 0x31a6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a6c0: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x31A6C0u;
    SET_GPR_U32(ctx, 31, 0x31A6C8u);
    ctx->pc = 0x31A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6C0u;
    // 0x31a6c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x31A6C0u, 0x31A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6C8u;
label_31a6c8:
    // 0x31a6c8: 0x5051000c  beql        $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x31A6C8u;
    {
        const bool branch_taken_0x31a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31a6c8) {
            ctx->pc = 0x31A6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A6C8u;
            // 0x31a6cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A6FCu;
            goto label_31a6fc;
        }
    }
    ctx->pc = 0x31A6D0u;
    // 0x31a6d0: 0xc088edc  jal         func_223B70
    ctx->pc = 0x31A6D0u;
    SET_GPR_U32(ctx, 31, 0x31A6D8u);
    ctx->pc = 0x31A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6D0u;
    // 0x31a6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31A6D0u, 0x31A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6D8u;
label_31a6d8:
    // 0x31a6d8: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A6D8u;
    {
        const bool branch_taken_0x31a6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31a6d8) {
            ctx->pc = 0x31A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A6D8u;
            // 0x31a6dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A6FCu;
            goto label_31a6fc;
        }
    }
    ctx->pc = 0x31A6E0u;
    // 0x31a6e0: 0xc089f98  jal         func_227E60
    ctx->pc = 0x31A6E0u;
    SET_GPR_U32(ctx, 31, 0x31A6E8u);
    ctx->pc = 0x31A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6E0u;
    // 0x31a6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31A6E0u, 0x31A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6E8u;
label_31a6e8:
    // 0x31a6e8: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A6E8u;
    {
        const bool branch_taken_0x31a6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x31A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A6E8u;
        // 0x31a6ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a6e8) {
            ctx->pc = 0x31A6F8u;
            goto label_31a6f8;
        }
    }
    ctx->pc = 0x31A6F0u;
    // 0x31a6f0: 0xc0c69ca  jal         func_31A728
    ctx->pc = 0x31A6F0u;
    SET_GPR_U32(ctx, 31, 0x31A6F8u);
    ctx->pc = 0x31A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6F0u;
    // 0x31a6f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A728u, 0x31A6F0u, 0x31A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6F8u;
label_31a6f8:
    // 0x31a6f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31a6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31a6fc:
    // 0x31a6fc: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31a6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31a700: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31A700u;
    {
        const bool branch_taken_0x31a700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a700) {
            ctx->pc = 0x31A704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A700u;
            // 0x31a704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a6a0;
        }
    }
    ctx->pc = 0x31A708u;
label_31a708:
    // 0x31a708: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31a708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a70c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31a70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a710: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31a710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a714: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31a714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a718: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31a718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a720: 0x3e00008  jr          $ra
    ctx->pc = 0x31A720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A720u;
        // 0x31a724: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A728u;
}
