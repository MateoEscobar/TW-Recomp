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

// Function: sub_0029BEC8
// Address: 0x29bec8 - 0x29bf60
void sub_0029BEC8_0x29bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BEC8_0x29bec8");
#endif

    switch (ctx->pc) {
        case 0x29bef4u: goto label_29bef4;
        case 0x29bf04u: goto label_29bf04;
        case 0x29bf34u: goto label_29bf34;
        default: break;
    }

    ctx->pc = 0x29bec8u;

    // 0x29bec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29becc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29bed0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29bed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bed8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29bed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bedc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29bee0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29bee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29bee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29beec: 0xc087502  jal         func_21D408
    ctx->pc = 0x29BEECu;
    SET_GPR_U32(ctx, 31, 0x29BEF4u);
    ctx->pc = 0x29BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEECu;
    // 0x29bef0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29BEECu, 0x29BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEF4u;
label_29bef4:
    // 0x29bef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29bef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29befc: 0xc0a6f96  jal         func_29BE58
    ctx->pc = 0x29BEFCu;
    SET_GPR_U32(ctx, 31, 0x29BF04u);
    ctx->pc = 0x29BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEFCu;
    // 0x29bf00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BE58u, 0x29BEFCu, 0x29BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF04u;
label_29bf04:
    // 0x29bf04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29BF04u;
    {
        const bool branch_taken_0x29bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF04u;
        // 0x29bf08: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf04) {
            ctx->pc = 0x29BF44u;
            goto label_29bf44;
        }
    }
    ctx->pc = 0x29BF0Cu;
    // 0x29bf0c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x29bf0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x29bf10: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29bf10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29bf14: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29BF14u;
    {
        const bool branch_taken_0x29bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf14) {
            ctx->pc = 0x29BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BF14u;
            // 0x29bf18: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BF40u;
            goto label_29bf40;
        }
    }
    ctx->pc = 0x29BF1Cu;
    // 0x29bf1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29bf20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29bf24: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BF24u;
    {
        const bool branch_taken_0x29bf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bf24) {
            ctx->pc = 0x29BF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BF24u;
            // 0x29bf28: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BF40u;
            goto label_29bf40;
        }
    }
    ctx->pc = 0x29BF2Cu;
    // 0x29bf2c: 0xc0a4138  jal         func_2904E0
    ctx->pc = 0x29BF2Cu;
    SET_GPR_U32(ctx, 31, 0x29BF34u);
    ctx->pc = 0x29BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF2Cu;
    // 0x29bf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2904E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904E0u, 0x29BF2Cu, 0x29BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF34u;
label_29bf34:
    // 0x29bf34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BF34u;
    {
        const bool branch_taken_0x29bf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF34u;
        // 0x29bf38: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf34) {
            ctx->pc = 0x29BF44u;
            goto label_29bf44;
        }
    }
    ctx->pc = 0x29BF3Cu;
    // 0x29bf3c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29bf3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bf40:
    // 0x29bf40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29bf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29bf44:
    // 0x29bf44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29bf44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bf48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29bf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bf4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29bf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bf50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29bf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bf58: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF58u;
        // 0x29bf5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF60u;
}
