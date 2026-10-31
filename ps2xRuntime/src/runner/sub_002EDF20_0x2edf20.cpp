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

// Function: sub_002EDF20
// Address: 0x2edf20 - 0x2edff8
void sub_002EDF20_0x2edf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDF20_0x2edf20");
#endif

    switch (ctx->pc) {
        case 0x2edf6cu: goto label_2edf6c;
        case 0x2edf74u: goto label_2edf74;
        case 0x2edf84u: goto label_2edf84;
        case 0x2edf8cu: goto label_2edf8c;
        case 0x2edfc0u: goto label_2edfc0;
        case 0x2edfccu: goto label_2edfcc;
        default: break;
    }

    ctx->pc = 0x2edf20u;

    // 0x2edf20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2edf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2edf24: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2edf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2edf28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2edf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2edf2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2edf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2edf30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2edf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2edf34: 0x30f2ffff  andi        $s2, $a3, 0xFFFF
    ctx->pc = 0x2edf34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2edf38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2edf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2edf3c: 0x3113ffff  andi        $s3, $t0, 0xFFFF
    ctx->pc = 0x2edf3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2edf40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2edf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2edf44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2edf44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf48: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2edf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2edf4c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2edf4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf50: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2edf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2edf54: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2edf54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf58: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2edf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2edf5c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2edf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2edf60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2edf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2edf64: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2EDF64u;
    SET_GPR_U32(ctx, 31, 0x2EDF6Cu);
    ctx->pc = 0x2EDF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF64u;
    // 0x2edf68: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2EDF64u, 0x2EDF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF6Cu;
label_2edf6c:
    // 0x2edf6c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2EDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF74u);
    ctx->pc = 0x2EDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF6Cu;
    // 0x2edf70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2EDF6Cu, 0x2EDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF74u;
label_2edf74:
    // 0x2edf74: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EDF74u;
    {
        const bool branch_taken_0x2edf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF74u;
        // 0x2edf78: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf74) {
            ctx->pc = 0x2EDFD0u;
            goto label_2edfd0;
        }
    }
    ctx->pc = 0x2EDF7Cu;
    // 0x2edf7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2EDF7Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF84u);
    ctx->pc = 0x2EDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF7Cu;
    // 0x2edf80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EDF7Cu, 0x2EDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF84u;
label_2edf84:
    // 0x2edf84: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2EDF84u;
    SET_GPR_U32(ctx, 31, 0x2EDF8Cu);
    ctx->pc = 0x2EDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF84u;
    // 0x2edf88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2EDF84u, 0x2EDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF8Cu;
label_2edf8c:
    // 0x2edf8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2edf8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf90: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDF90u;
    {
        const bool branch_taken_0x2edf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF90u;
        // 0x2edf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf90) {
            ctx->pc = 0x2EDFC0u;
            goto label_2edfc0;
        }
    }
    ctx->pc = 0x2EDF98u;
    // 0x2edf98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2edf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2edf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2edfa0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2edfa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfa4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2edfa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfa8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2edfa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfac: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2edfacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfb0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2edfb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfb8: 0xc0bb7fe  jal         func_2EDFF8
    ctx->pc = 0x2EDFB8u;
    SET_GPR_U32(ctx, 31, 0x2EDFC0u);
    ctx->pc = 0x2EDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFB8u;
    // 0x2edfbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDFF8u, 0x2EDFB8u, 0x2EDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFC0u;
label_2edfc0:
    // 0x2edfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2edfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfc4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2EDFC4u;
    SET_GPR_U32(ctx, 31, 0x2EDFCCu);
    ctx->pc = 0x2EDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFC4u;
    // 0x2edfc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2EDFC4u, 0x2EDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFCCu;
label_2edfcc:
    // 0x2edfcc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2edfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2edfd0:
    // 0x2edfd0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2edfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2edfd4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2edfd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2edfd8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2edfd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2edfdc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2edfdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2edfe0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2edfe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2edfe4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2edfe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2edfe8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2edfe8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2edfec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2edfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFF0u;
        // 0x2edff4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDFF8u;
}
