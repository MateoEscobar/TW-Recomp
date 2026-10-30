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

// Function: sub_0032C2F0
// Address: 0x32c2f0 - 0x32c398
void sub_0032C2F0_0x32c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C2F0_0x32c2f0");
#endif

    switch (ctx->pc) {
        case 0x32c318u: goto label_32c318;
        case 0x32c328u: goto label_32c328;
        case 0x32c338u: goto label_32c338;
        case 0x32c340u: goto label_32c340;
        case 0x32c350u: goto label_32c350;
        case 0x32c370u: goto label_32c370;
        default: break;
    }

    ctx->pc = 0x32c2f0u;

    // 0x32c2f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32c2f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32c2f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32c2f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32c300: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32c304: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x32c308: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32c30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c310: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x32C310u;
    SET_GPR_U32(ctx, 31, 0x32C318u);
    ctx->pc = 0x32C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C310u;
    // 0x32c314: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x32C310u, 0x32C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C318u;
label_32c318:
    // 0x32c318: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c31c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c320: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C320u;
    SET_GPR_U32(ctx, 31, 0x32C328u);
    ctx->pc = 0x32C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C320u;
    // 0x32c324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C320u, 0x32C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C328u;
label_32c328:
    // 0x32c328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32c328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c32c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x32c32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32c330: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32C330u;
    {
        const bool branch_taken_0x32c330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C330u;
        // 0x32c334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c330) {
            ctx->pc = 0x32C368u;
            goto label_32c368;
        }
    }
    ctx->pc = 0x32C338u;
label_32c338:
    // 0x32c338: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C338u;
    SET_GPR_U32(ctx, 31, 0x32C340u);
    ctx->pc = 0x32C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C338u;
    // 0x32c33c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C338u, 0x32C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C340u;
label_32c340:
    // 0x32c340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32c340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32c344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c348: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x32C348u;
    SET_GPR_U32(ctx, 31, 0x32C350u);
    ctx->pc = 0x32C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C348u;
    // 0x32c34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x32C348u, 0x32C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C350u;
label_32c350:
    // 0x32c350: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C350u;
    {
        const bool branch_taken_0x32c350 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32c350) {
            ctx->pc = 0x32C354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C350u;
            // 0x32c354: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C358u;
            goto label_32c358;
        }
    }
    ctx->pc = 0x32C358u;
label_32c358:
    // 0x32c358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32c358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32c35c: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x32c35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x32c360: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32C360u;
    {
        const bool branch_taken_0x32c360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C360u;
        // 0x32c364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c360) {
            ctx->pc = 0x32C338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c338;
        }
    }
    ctx->pc = 0x32C368u;
label_32c368:
    // 0x32c368: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C368u;
    SET_GPR_U32(ctx, 31, 0x32C370u);
    ctx->pc = 0x32C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C368u;
    // 0x32c36c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C368u, 0x32C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C370u;
label_32c370:
    // 0x32c370: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32c370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32c374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c378: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32c378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32c37c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32c37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c380: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32c380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c384: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32c384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c38c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C38Cu;
        // 0x32c390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C394u;
    // 0x32c394: 0x0  nop
    ctx->pc = 0x32c394u;
    // NOP
    ctx->pc = 0x32c398u;
}
