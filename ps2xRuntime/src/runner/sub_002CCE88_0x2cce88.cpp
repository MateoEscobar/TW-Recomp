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

// Function: sub_002CCE88
// Address: 0x2cce88 - 0x2ccf30
void sub_002CCE88_0x2cce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCE88_0x2cce88");
#endif

    switch (ctx->pc) {
        case 0x2ccebcu: goto label_2ccebc;
        case 0x2ccec4u: goto label_2ccec4;
        case 0x2cced4u: goto label_2cced4;
        case 0x2ccedcu: goto label_2ccedc;
        case 0x2ccf04u: goto label_2ccf04;
        case 0x2ccf10u: goto label_2ccf10;
        default: break;
    }

    ctx->pc = 0x2cce88u;

    // 0x2cce88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cce8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cce90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cce94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cce9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cce9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccea0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2ccea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2ccea4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ccea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccea8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ccea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cceac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cceb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cceb4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2CCEB4u;
    SET_GPR_U32(ctx, 31, 0x2CCEBCu);
    ctx->pc = 0x2CCEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEB4u;
    // 0x2cceb8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CCEB4u, 0x2CCEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEBCu;
label_2ccebc:
    // 0x2ccebc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2CCEBCu;
    SET_GPR_U32(ctx, 31, 0x2CCEC4u);
    ctx->pc = 0x2CCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEBCu;
    // 0x2ccec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2CCEBCu, 0x2CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEC4u;
label_2ccec4:
    // 0x2ccec4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CCEC4u;
    {
        const bool branch_taken_0x2ccec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEC4u;
        // 0x2ccec8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccec4) {
            ctx->pc = 0x2CCF14u;
            goto label_2ccf14;
        }
    }
    ctx->pc = 0x2CCECCu;
    // 0x2ccecc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2CCECCu;
    SET_GPR_U32(ctx, 31, 0x2CCED4u);
    ctx->pc = 0x2CCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCECCu;
    // 0x2cced0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CCECCu, 0x2CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCED4u;
label_2cced4:
    // 0x2cced4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2CCED4u;
    SET_GPR_U32(ctx, 31, 0x2CCEDCu);
    ctx->pc = 0x2CCED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCED4u;
    // 0x2cced8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CCED4u, 0x2CCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEDCu;
label_2ccedc:
    // 0x2ccedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccee0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCEE0u;
    {
        const bool branch_taken_0x2ccee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEE0u;
        // 0x2ccee4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccee0) {
            ctx->pc = 0x2CCF04u;
            goto label_2ccf04;
        }
    }
    ctx->pc = 0x2CCEE8u;
    // 0x2ccee8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ccee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cceec: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2cceecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2ccef0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ccef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccef4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ccef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccefc: 0xc0b33f8  jal         func_2CCFE0
    ctx->pc = 0x2CCEFCu;
    SET_GPR_U32(ctx, 31, 0x2CCF04u);
    ctx->pc = 0x2CCF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEFCu;
    // 0x2ccf00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFE0u, 0x2CCEFCu, 0x2CCF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF04u;
label_2ccf04:
    // 0x2ccf04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf08: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2CCF08u;
    SET_GPR_U32(ctx, 31, 0x2CCF10u);
    ctx->pc = 0x2CCF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF08u;
    // 0x2ccf0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CCF08u, 0x2CCF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF10u;
label_2ccf10:
    // 0x2ccf10: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ccf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ccf14:
    // 0x2ccf14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ccf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ccf18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ccf18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ccf1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ccf1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccf20: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2ccf20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccf24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ccf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccf28: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF28u;
        // 0x2ccf2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCF30u;
}
