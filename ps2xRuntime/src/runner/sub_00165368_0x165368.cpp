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

// Function: sub_00165368
// Address: 0x165368 - 0x165430
void sub_00165368_0x165368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165368_0x165368");
#endif

    switch (ctx->pc) {
        case 0x1653a8u: goto label_1653a8;
        case 0x1653b0u: goto label_1653b0;
        case 0x1653b8u: goto label_1653b8;
        case 0x1653d0u: goto label_1653d0;
        case 0x1653e0u: goto label_1653e0;
        case 0x1653f0u: goto label_1653f0;
        default: break;
    }

    ctx->pc = 0x165368u;

    // 0x165368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16536c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x165370: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x165370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x165374: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x165374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165378: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x165378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16537c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x165380: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x165380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x165384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165388: 0x8e62017c  lw          $v0, 0x17C($s3)
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x16538c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16538Cu;
    {
        const bool branch_taken_0x16538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16538Cu;
        // 0x165390: 0x24b40048  addiu       $s4, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16538c) {
            ctx->pc = 0x16539Cu;
            goto label_16539c;
        }
    }
    ctx->pc = 0x165394u;
    // 0x165394: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x165394u;
    {
        const bool branch_taken_0x165394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165394u;
        // 0x165398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165394) {
            ctx->pc = 0x16540Cu;
            goto label_16540c;
        }
    }
    ctx->pc = 0x16539Cu;
label_16539c:
    // 0x16539c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16539cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1653a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653a4: 0x0  nop
    ctx->pc = 0x1653a4u;
    // NOP
label_1653a8:
    // 0x1653a8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x1653A8u;
    SET_GPR_U32(ctx, 31, 0x1653B0u);
    ctx->pc = 0x1653ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653A8u;
    // 0x1653ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x1653A8u, 0x1653B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B0u;
label_1653b0:
    // 0x1653b0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1653B0u;
    SET_GPR_U32(ctx, 31, 0x1653B8u);
    ctx->pc = 0x1653B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653B0u;
    // 0x1653b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1653B0u, 0x1653B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B8u;
label_1653b8:
    // 0x1653b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1653b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653bc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1653BCu;
    {
        const bool branch_taken_0x1653bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653bc) {
            ctx->pc = 0x1653C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653BCu;
            // 0x1653c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653FCu;
            goto label_1653fc;
        }
    }
    ctx->pc = 0x1653C4u;
    // 0x1653c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653c8: 0xc088edc  jal         func_223B70
    ctx->pc = 0x1653C8u;
    SET_GPR_U32(ctx, 31, 0x1653D0u);
    ctx->pc = 0x1653CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653C8u;
    // 0x1653cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1653C8u, 0x1653D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653D0u;
label_1653d0:
    // 0x1653d0: 0x5051000a  beql        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1653D0u;
    {
        const bool branch_taken_0x1653d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1653d0) {
            ctx->pc = 0x1653D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653D0u;
            // 0x1653d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653FCu;
            goto label_1653fc;
        }
    }
    ctx->pc = 0x1653D8u;
    // 0x1653d8: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x1653D8u;
    SET_GPR_U32(ctx, 31, 0x1653E0u);
    ctx->pc = 0x1653DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653D8u;
    // 0x1653dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1653D8u, 0x1653E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653E0u;
label_1653e0:
    // 0x1653e0: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1653E0u;
    {
        const bool branch_taken_0x1653e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1653E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653E0u;
        // 0x1653e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653e0) {
            ctx->pc = 0x1653F8u;
            goto label_1653f8;
        }
    }
    ctx->pc = 0x1653E8u;
    // 0x1653e8: 0xc0594a8  jal         func_1652A0
    ctx->pc = 0x1653E8u;
    SET_GPR_U32(ctx, 31, 0x1653F0u);
    ctx->pc = 0x1653ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653E8u;
    // 0x1653ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652A0u, 0x1653E8u, 0x1653F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653F0u;
label_1653f0:
    // 0x1653f0: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1653F0u;
    {
        const bool branch_taken_0x1653f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653f0) {
            ctx->pc = 0x16540Cu;
            goto label_16540c;
        }
    }
    ctx->pc = 0x1653F8u;
label_1653f8:
    // 0x1653f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1653f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1653fc:
    // 0x1653fc: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1653fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165400: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x165400u;
    {
        const bool branch_taken_0x165400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165400) {
            ctx->pc = 0x165404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165400u;
            // 0x165404: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1653a8;
        }
    }
    ctx->pc = 0x165408u;
    // 0x165408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16540c:
    // 0x16540c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16540cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165410: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x165410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165414: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x165414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165418: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x165418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16541c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16541cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165424: 0x3e00008  jr          $ra
    ctx->pc = 0x165424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165424u;
        // 0x165428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16542Cu;
    // 0x16542c: 0x0  nop
    ctx->pc = 0x16542cu;
    // NOP
    ctx->pc = 0x165430u;
}
