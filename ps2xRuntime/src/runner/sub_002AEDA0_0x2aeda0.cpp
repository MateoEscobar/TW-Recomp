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

// Function: sub_002AEDA0
// Address: 0x2aeda0 - 0x2aee48
void sub_002AEDA0_0x2aeda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEDA0_0x2aeda0");
#endif

    switch (ctx->pc) {
        case 0x2aedc8u: goto label_2aedc8;
        case 0x2aedd0u: goto label_2aedd0;
        case 0x2aede4u: goto label_2aede4;
        case 0x2aedecu: goto label_2aedec;
        case 0x2aedfcu: goto label_2aedfc;
        case 0x2aee04u: goto label_2aee04;
        case 0x2aee20u: goto label_2aee20;
        case 0x2aee2cu: goto label_2aee2c;
        default: break;
    }

    ctx->pc = 0x2aeda0u;

    // 0x2aeda0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aeda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2aeda4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aeda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aeda8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2aeda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2aedac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2aedacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2aedb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2aedb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2aedb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2aedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2aedbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aedbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aedc0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2AEDC0u;
    SET_GPR_U32(ctx, 31, 0x2AEDC8u);
    ctx->pc = 0x2AEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDC0u;
    // 0x2aedc4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2AEDC0u, 0x2AEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDC8u;
label_2aedc8:
    // 0x2aedc8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2AEDC8u;
    SET_GPR_U32(ctx, 31, 0x2AEDD0u);
    ctx->pc = 0x2AEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDC8u;
    // 0x2aedcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2AEDC8u, 0x2AEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDD0u;
label_2aedd0:
    // 0x2aedd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aedd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedd4: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AEDD4u;
    {
        const bool branch_taken_0x2aedd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aedd4) {
            ctx->pc = 0x2AEDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEDD4u;
            // 0x2aedd8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEE30u;
            goto label_2aee30;
        }
    }
    ctx->pc = 0x2AEDDCu;
    // 0x2aeddc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2AEDDCu;
    SET_GPR_U32(ctx, 31, 0x2AEDE4u);
    ctx->pc = 0x2AEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDDCu;
    // 0x2aede0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2AEDDCu, 0x2AEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDE4u;
label_2aede4:
    // 0x2aede4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2AEDE4u;
    SET_GPR_U32(ctx, 31, 0x2AEDECu);
    ctx->pc = 0x2AEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDE4u;
    // 0x2aede8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2AEDE4u, 0x2AEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDECu;
label_2aedec:
    // 0x2aedec: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AEDECu;
    {
        const bool branch_taken_0x2aedec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aedec) {
            ctx->pc = 0x2AEDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEDECu;
            // 0x2aedf0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEE30u;
            goto label_2aee30;
        }
    }
    ctx->pc = 0x2AEDF4u;
    // 0x2aedf4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AEDF4u;
    SET_GPR_U32(ctx, 31, 0x2AEDFCu);
    ctx->pc = 0x2AEDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDF4u;
    // 0x2aedf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AEDF4u, 0x2AEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDFCu;
label_2aedfc:
    // 0x2aedfc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2AEDFCu;
    SET_GPR_U32(ctx, 31, 0x2AEE04u);
    ctx->pc = 0x2AEE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDFCu;
    // 0x2aee00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AEDFCu, 0x2AEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE04u;
label_2aee04:
    // 0x2aee04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee08: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEE08u;
    {
        const bool branch_taken_0x2aee08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE08u;
        // 0x2aee0c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee08) {
            ctx->pc = 0x2AEE20u;
            goto label_2aee20;
        }
    }
    ctx->pc = 0x2AEE10u;
    // 0x2aee10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2aee10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee18: 0xc0abb92  jal         func_2AEE48
    ctx->pc = 0x2AEE18u;
    SET_GPR_U32(ctx, 31, 0x2AEE20u);
    ctx->pc = 0x2AEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE18u;
    // 0x2aee1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE48u, 0x2AEE18u, 0x2AEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE20u;
label_2aee20:
    // 0x2aee20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee24: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2AEE24u;
    SET_GPR_U32(ctx, 31, 0x2AEE2Cu);
    ctx->pc = 0x2AEE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE24u;
    // 0x2aee28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AEE24u, 0x2AEE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE2Cu;
label_2aee2c:
    // 0x2aee2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2aee2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2aee30:
    // 0x2aee30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2aee30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aee34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aee34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aee38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE3Cu;
        // 0x2aee40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE44u;
    // 0x2aee44: 0x0  nop
    ctx->pc = 0x2aee44u;
    // NOP
    ctx->pc = 0x2aee48u;
}
