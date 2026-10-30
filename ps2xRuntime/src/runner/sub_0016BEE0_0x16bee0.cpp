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

// Function: sub_0016BEE0
// Address: 0x16bee0 - 0x16bf78
void sub_0016BEE0_0x16bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BEE0_0x16bee0");
#endif

    switch (ctx->pc) {
        case 0x16bf10u: goto label_16bf10;
        case 0x16bf28u: goto label_16bf28;
        case 0x16bf30u: goto label_16bf30;
        case 0x16bf38u: goto label_16bf38;
        case 0x16bf48u: goto label_16bf48;
        default: break;
    }

    ctx->pc = 0x16bee0u;

    // 0x16bee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bee4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bee8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16bee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16beec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16beecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bef0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16bef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16bef4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16bef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16befc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bf00: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16BF00u;
    {
        const bool branch_taken_0x16bf00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF00u;
        // 0x16bf04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf00) {
            ctx->pc = 0x16BF5Cu;
            goto label_16bf5c;
        }
    }
    ctx->pc = 0x16BF08u;
    // 0x16bf08: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BF08u;
    SET_GPR_U32(ctx, 31, 0x16BF10u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BF08u, 0x16BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF10u;
label_16bf10:
    // 0x16bf10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf14: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16bf18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16BF18u;
    {
        const bool branch_taken_0x16bf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF18u;
        // 0x16bf1c: 0x24910048  addiu       $s1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf18) {
            ctx->pc = 0x16BF5Cu;
            goto label_16bf5c;
        }
    }
    ctx->pc = 0x16BF20u;
    // 0x16bf20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf28:
    // 0x16bf28: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BF28u;
    SET_GPR_U32(ctx, 31, 0x16BF30u);
    ctx->pc = 0x16BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF28u;
    // 0x16bf2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BF28u, 0x16BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF30u;
label_16bf30:
    // 0x16bf30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BF30u;
    SET_GPR_U32(ctx, 31, 0x16BF38u);
    ctx->pc = 0x16BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF30u;
    // 0x16bf34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BF30u, 0x16BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF38u;
label_16bf38:
    // 0x16bf38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BF38u;
    {
        const bool branch_taken_0x16bf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf38) {
            ctx->pc = 0x16BF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BF38u;
            // 0x16bf3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BF40u;
    // 0x16bf40: 0xc087502  jal         func_21D408
    ctx->pc = 0x16BF40u;
    SET_GPR_U32(ctx, 31, 0x16BF48u);
    ctx->pc = 0x16BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF40u;
    // 0x16bf44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16BF40u, 0x16BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF48u;
label_16bf48:
    // 0x16bf48: 0xa0520267  sb          $s2, 0x267($v0)
    ctx->pc = 0x16bf48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 615), (uint8_t)GPR_U32(ctx, 18));
    // 0x16bf4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16bf50:
    // 0x16bf50: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16bf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16bf54: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16BF54u;
    {
        const bool branch_taken_0x16bf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bf54) {
            ctx->pc = 0x16BF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BF54u;
            // 0x16bf58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bf28;
        }
    }
    ctx->pc = 0x16BF5Cu;
label_16bf5c:
    // 0x16bf5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16bf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bf60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16bf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bf64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16bf64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF6Cu;
        // 0x16bf70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF74u;
    // 0x16bf74: 0x0  nop
    ctx->pc = 0x16bf74u;
    // NOP
    ctx->pc = 0x16bf78u;
}
