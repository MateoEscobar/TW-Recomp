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

// Function: sub_002BFE00
// Address: 0x2bfe00 - 0x2bfe98
void sub_002BFE00_0x2bfe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFE00_0x2bfe00");
#endif

    switch (ctx->pc) {
        case 0x2bfe3cu: goto label_2bfe3c;
        case 0x2bfe44u: goto label_2bfe44;
        case 0x2bfe4cu: goto label_2bfe4c;
        case 0x2bfe6cu: goto label_2bfe6c;
        case 0x2bfe78u: goto label_2bfe78;
        default: break;
    }

    ctx->pc = 0x2bfe00u;

    // 0x2bfe00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bfe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bfe04: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2bfe04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2bfe08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2bfe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2bfe0c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2bfe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2bfe10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bfe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bfe14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bfe14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2bfe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2bfe1c: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x2bfe1cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2bfe20: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2bfe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2bfe24: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x2bfe24u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2bfe28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2bfe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2bfe2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2bfe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2bfe30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bfe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bfe34: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BFE34u;
    SET_GPR_U32(ctx, 31, 0x2BFE3Cu);
    ctx->pc = 0x2BFE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE34u;
    // 0x2bfe38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BFE34u, 0x2BFE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE3Cu;
label_2bfe3c:
    // 0x2bfe3c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BFE3Cu;
    SET_GPR_U32(ctx, 31, 0x2BFE44u);
    ctx->pc = 0x2BFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE3Cu;
    // 0x2bfe40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BFE3Cu, 0x2BFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE44u;
label_2bfe44:
    // 0x2bfe44: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2BFE44u;
    SET_GPR_U32(ctx, 31, 0x2BFE4Cu);
    ctx->pc = 0x2BFE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE44u;
    // 0x2bfe48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BFE44u, 0x2BFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE4Cu;
label_2bfe4c:
    // 0x2bfe4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfe4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe50: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFE50u;
    {
        const bool branch_taken_0x2bfe50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE50u;
        // 0x2bfe54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe50) {
            ctx->pc = 0x2BFE6Cu;
            goto label_2bfe6c;
        }
    }
    ctx->pc = 0x2BFE58u;
    // 0x2bfe58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2bfe58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe5c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2bfe5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe64: 0xc0affa6  jal         func_2BFE98
    ctx->pc = 0x2BFE64u;
    SET_GPR_U32(ctx, 31, 0x2BFE6Cu);
    ctx->pc = 0x2BFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE64u;
    // 0x2bfe68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFE98u, 0x2BFE64u, 0x2BFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE6Cu;
label_2bfe6c:
    // 0x2bfe6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bfe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe70: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2BFE70u;
    SET_GPR_U32(ctx, 31, 0x2BFE78u);
    ctx->pc = 0x2BFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE70u;
    // 0x2bfe74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BFE70u, 0x2BFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE78u;
label_2bfe78:
    // 0x2bfe78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2bfe78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfe7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2bfe7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfe80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2bfe80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfe84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bfe84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfe88: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2bfe88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfe8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfe90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE90u;
        // 0x2bfe94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFE98u;
}
