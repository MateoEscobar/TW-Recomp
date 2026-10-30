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

// Function: sub_0031BE88
// Address: 0x31be88 - 0x31bf40
void sub_0031BE88_0x31be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BE88_0x31be88");
#endif

    switch (ctx->pc) {
        case 0x31beb8u: goto label_31beb8;
        case 0x31bec0u: goto label_31bec0;
        case 0x31bec8u: goto label_31bec8;
        case 0x31beecu: goto label_31beec;
        case 0x31befcu: goto label_31befc;
        case 0x31bf20u: goto label_31bf20;
        default: break;
    }

    ctx->pc = 0x31be88u;

    // 0x31be88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31be8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31be90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31be94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31be94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31be9c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31bea0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31bea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bea4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31bea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31beac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31beb0: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x31beb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31beb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31beb8:
    // 0x31beb8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31BEB8u;
    SET_GPR_U32(ctx, 31, 0x31BEC0u);
    ctx->pc = 0x31BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEB8u;
    // 0x31bebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31BEB8u, 0x31BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEC0u;
label_31bec0:
    // 0x31bec0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31BEC0u;
    SET_GPR_U32(ctx, 31, 0x31BEC8u);
    ctx->pc = 0x31BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEC0u;
    // 0x31bec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31BEC0u, 0x31BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEC8u;
label_31bec8:
    // 0x31bec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31becc: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x31BECCu;
    {
        const bool branch_taken_0x31becc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31becc) {
            ctx->pc = 0x31BED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BECCu;
            // 0x31bed0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BF04u;
            goto label_31bf04;
        }
    }
    ctx->pc = 0x31BED4u;
    // 0x31bed4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31bed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x31bed8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31bed8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31bedc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BEDCu;
    {
        const bool branch_taken_0x31bedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEDCu;
        // 0x31bee0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bedc) {
            ctx->pc = 0x31BF00u;
            goto label_31bf00;
        }
    }
    ctx->pc = 0x31BEE4u;
    // 0x31bee4: 0xc089f98  jal         func_227E60
    ctx->pc = 0x31BEE4u;
    SET_GPR_U32(ctx, 31, 0x31BEECu);
    ctx->pc = 0x31BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEE4u;
    // 0x31bee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31BEE4u, 0x31BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEECu;
label_31beec:
    // 0x31beec: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BEECu;
    {
        const bool branch_taken_0x31beec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31beec) {
            ctx->pc = 0x31BEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BEECu;
            // 0x31bef0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BF04u;
            goto label_31bf04;
        }
    }
    ctx->pc = 0x31BEF4u;
    // 0x31bef4: 0xc087502  jal         func_21D408
    ctx->pc = 0x31BEF4u;
    SET_GPR_U32(ctx, 31, 0x31BEFCu);
    ctx->pc = 0x31BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BEF4u;
    // 0x31bef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31BEF4u, 0x31BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEFCu;
label_31befc:
    // 0x31befc: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x31befcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
label_31bf00:
    // 0x31bf00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31bf00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31bf04:
    // 0x31bf04: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31bf04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31bf08: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x31BF08u;
    {
        const bool branch_taken_0x31bf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bf08) {
            ctx->pc = 0x31BF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BF08u;
            // 0x31bf0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31beb8;
        }
    }
    ctx->pc = 0x31BF10u;
    // 0x31bf10: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x31bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31bf14: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31bf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31bf18: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31BF18u;
    SET_GPR_U32(ctx, 31, 0x31BF20u);
    ctx->pc = 0x31BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF18u;
    // 0x31bf1c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31BF18u, 0x31BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF20u;
label_31bf20:
    // 0x31bf20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31bf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31bf24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31bf24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31bf28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31bf28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bf2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31bf2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bf30: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31bf30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bf38: 0x3e00008  jr          $ra
    ctx->pc = 0x31BF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF38u;
        // 0x31bf3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BF40u;
}
