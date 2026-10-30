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

// Function: sub_002BADA8
// Address: 0x2bada8 - 0x2bae38
void sub_002BADA8_0x2bada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BADA8_0x2bada8");
#endif

    switch (ctx->pc) {
        case 0x2badd4u: goto label_2badd4;
        case 0x2baddcu: goto label_2baddc;
        case 0x2badecu: goto label_2badec;
        case 0x2badf4u: goto label_2badf4;
        case 0x2bae10u: goto label_2bae10;
        case 0x2bae1cu: goto label_2bae1c;
        default: break;
    }

    ctx->pc = 0x2bada8u;

    // 0x2bada8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2badac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2badacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2badb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2badb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2badb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2badb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2badb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2badbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2badbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2badc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2badc4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2badc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2badc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2badc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2badcc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2BADCCu;
    SET_GPR_U32(ctx, 31, 0x2BADD4u);
    ctx->pc = 0x2BADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADCCu;
    // 0x2badd0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2BADCCu, 0x2BADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADD4u;
label_2badd4:
    // 0x2badd4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2BADD4u;
    SET_GPR_U32(ctx, 31, 0x2BADDCu);
    ctx->pc = 0x2BADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADD4u;
    // 0x2badd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2BADD4u, 0x2BADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADDCu;
label_2baddc:
    // 0x2baddc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BADDCu;
    {
        const bool branch_taken_0x2baddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADDCu;
        // 0x2bade0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baddc) {
            ctx->pc = 0x2BAE20u;
            goto label_2bae20;
        }
    }
    ctx->pc = 0x2BADE4u;
    // 0x2bade4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BADE4u;
    SET_GPR_U32(ctx, 31, 0x2BADECu);
    ctx->pc = 0x2BADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADE4u;
    // 0x2bade8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BADE4u, 0x2BADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADECu;
label_2badec:
    // 0x2badec: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2BADECu;
    SET_GPR_U32(ctx, 31, 0x2BADF4u);
    ctx->pc = 0x2BADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADECu;
    // 0x2badf0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BADECu, 0x2BADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADF4u;
label_2badf4:
    // 0x2badf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2badf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badf8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BADF8u;
    {
        const bool branch_taken_0x2badf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADF8u;
        // 0x2badfc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badf8) {
            ctx->pc = 0x2BAE10u;
            goto label_2bae10;
        }
    }
    ctx->pc = 0x2BAE00u;
    // 0x2bae00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2bae00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae08: 0xc0aeb8e  jal         func_2BAE38
    ctx->pc = 0x2BAE08u;
    SET_GPR_U32(ctx, 31, 0x2BAE10u);
    ctx->pc = 0x2BAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE08u;
    // 0x2bae0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE38u, 0x2BAE08u, 0x2BAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE10u;
label_2bae10:
    // 0x2bae10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae14: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2BAE14u;
    SET_GPR_U32(ctx, 31, 0x2BAE1Cu);
    ctx->pc = 0x2BAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE14u;
    // 0x2bae18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BAE14u, 0x2BAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE1Cu;
label_2bae1c:
    // 0x2bae1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2bae1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bae20:
    // 0x2bae20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2bae20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bae24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bae24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bae28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2bae28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bae2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bae2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bae30: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE30u;
        // 0x2bae34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE38u;
}
