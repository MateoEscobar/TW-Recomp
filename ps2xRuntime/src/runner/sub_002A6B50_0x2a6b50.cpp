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

// Function: sub_002A6B50
// Address: 0x2a6b50 - 0x2a6be8
void sub_002A6B50_0x2a6b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6B50_0x2a6b50");
#endif

    switch (ctx->pc) {
        case 0x2a6b88u: goto label_2a6b88;
        case 0x2a6b90u: goto label_2a6b90;
        case 0x2a6b98u: goto label_2a6b98;
        case 0x2a6bb8u: goto label_2a6bb8;
        case 0x2a6bc4u: goto label_2a6bc4;
        default: break;
    }

    ctx->pc = 0x2a6b50u;

    // 0x2a6b50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a6b54: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a6b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a6b58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a6b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a6b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a6b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a6b60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a6b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b64: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a6b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2a6b68: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a6b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a6b70: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x2a6b70u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a6b74: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2a6b78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a6b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2a6b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6b80: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A6B80u;
    SET_GPR_U32(ctx, 31, 0x2A6B88u);
    ctx->pc = 0x2A6B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B80u;
    // 0x2a6b84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A6B80u, 0x2A6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B88u;
label_2a6b88:
    // 0x2a6b88: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A6B88u;
    SET_GPR_U32(ctx, 31, 0x2A6B90u);
    ctx->pc = 0x2A6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B88u;
    // 0x2a6b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A6B88u, 0x2A6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B90u;
label_2a6b90:
    // 0x2a6b90: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A6B90u;
    SET_GPR_U32(ctx, 31, 0x2A6B98u);
    ctx->pc = 0x2A6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B90u;
    // 0x2a6b94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A6B90u, 0x2A6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B98u;
label_2a6b98:
    // 0x2a6b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b9c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6B9Cu;
    {
        const bool branch_taken_0x2a6b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B9Cu;
        // 0x2a6ba0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b9c) {
            ctx->pc = 0x2A6BB8u;
            goto label_2a6bb8;
        }
    }
    ctx->pc = 0x2A6BA4u;
    // 0x2a6ba4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a6ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ba8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a6ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bb0: 0xc0a9afa  jal         func_2A6BE8
    ctx->pc = 0x2A6BB0u;
    SET_GPR_U32(ctx, 31, 0x2A6BB8u);
    ctx->pc = 0x2A6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BB0u;
    // 0x2a6bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6BE8u, 0x2A6BB0u, 0x2A6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BB8u;
label_2a6bb8:
    // 0x2a6bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bbc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A6BBCu;
    SET_GPR_U32(ctx, 31, 0x2A6BC4u);
    ctx->pc = 0x2A6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BBCu;
    // 0x2a6bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A6BBCu, 0x2A6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BC4u;
label_2a6bc4:
    // 0x2a6bc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a6bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a6bc8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a6bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6bcc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a6bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a6bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6bd4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a6bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BDCu;
        // 0x2a6be0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6BE4u;
    // 0x2a6be4: 0x0  nop
    ctx->pc = 0x2a6be4u;
    // NOP
    ctx->pc = 0x2a6be8u;
}
