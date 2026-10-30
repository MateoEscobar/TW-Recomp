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

// Function: sub_00278FA0
// Address: 0x278fa0 - 0x279050
void sub_00278FA0_0x278fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278FA0_0x278fa0");
#endif

    switch (ctx->pc) {
        case 0x278fbcu: goto label_278fbc;
        case 0x278fccu: goto label_278fcc;
        case 0x278fd8u: goto label_278fd8;
        case 0x278fecu: goto label_278fec;
        case 0x278ffcu: goto label_278ffc;
        case 0x27900cu: goto label_27900c;
        case 0x27901cu: goto label_27901c;
        default: break;
    }

    ctx->pc = 0x278fa0u;

    // 0x278fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278fa4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x278fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x278fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278fb4: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x278FB4u;
    SET_GPR_U32(ctx, 31, 0x278FBCu);
    ctx->pc = 0x278FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FB4u;
    // 0x278fb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x278FB4u, 0x278FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FBCu;
label_278fbc:
    // 0x278fbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x278FBCu;
    {
        const bool branch_taken_0x278fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278fbc) {
            ctx->pc = 0x278FE4u;
            goto label_278fe4;
        }
    }
    ctx->pc = 0x278FC4u;
    // 0x278fc4: 0xc087502  jal         func_21D408
    ctx->pc = 0x278FC4u;
    SET_GPR_U32(ctx, 31, 0x278FCCu);
    ctx->pc = 0x278FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FC4u;
    // 0x278fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x278FC4u, 0x278FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FCCu;
label_278fcc:
    // 0x278fcc: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x278fccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x278fd0: 0xc087502  jal         func_21D408
    ctx->pc = 0x278FD0u;
    SET_GPR_U32(ctx, 31, 0x278FD8u);
    ctx->pc = 0x278FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FD0u;
    // 0x278fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x278FD0u, 0x278FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FD8u;
label_278fd8:
    // 0x278fd8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x278fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x278fdc: 0x16030017  bne         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x278FDCu;
    {
        const bool branch_taken_0x278fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x278FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FDCu;
        // 0x278fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fdc) {
            ctx->pc = 0x27903Cu;
            goto label_27903c;
        }
    }
    ctx->pc = 0x278FE4u;
label_278fe4:
    // 0x278fe4: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x278FE4u;
    SET_GPR_U32(ctx, 31, 0x278FECu);
    ctx->pc = 0x278FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FE4u;
    // 0x278fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x278FE4u, 0x278FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FECu;
label_278fec:
    // 0x278fec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x278FECu;
    {
        const bool branch_taken_0x278fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FECu;
        // 0x278ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fec) {
            ctx->pc = 0x27903Cu;
            goto label_27903c;
        }
    }
    ctx->pc = 0x278FF4u;
    // 0x278ff4: 0xc088edc  jal         func_223B70
    ctx->pc = 0x278FF4u;
    SET_GPR_U32(ctx, 31, 0x278FFCu);
    ctx->pc = 0x278FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FF4u;
    // 0x278ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x278FF4u, 0x278FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FFCu;
label_278ffc:
    // 0x278ffc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278FFCu;
    {
        const bool branch_taken_0x278ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FFCu;
        // 0x279000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ffc) {
            ctx->pc = 0x27903Cu;
            goto label_27903c;
        }
    }
    ctx->pc = 0x279004u;
    // 0x279004: 0xc089f86  jal         func_227E18
    ctx->pc = 0x279004u;
    SET_GPR_U32(ctx, 31, 0x27900Cu);
    ctx->pc = 0x279008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279004u;
    // 0x279008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x279004u, 0x27900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27900Cu;
label_27900c:
    // 0x27900c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27900Cu;
    {
        const bool branch_taken_0x27900c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27900Cu;
        // 0x279010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27900c) {
            ctx->pc = 0x27903Cu;
            goto label_27903c;
        }
    }
    ctx->pc = 0x279014u;
    // 0x279014: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x279014u;
    SET_GPR_U32(ctx, 31, 0x27901Cu);
    ctx->pc = 0x279018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279014u;
    // 0x279018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x279014u, 0x27901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27901Cu;
label_27901c:
    // 0x27901c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27901Cu;
    {
        const bool branch_taken_0x27901c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27901Cu;
        // 0x279020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27901c) {
            ctx->pc = 0x27903Cu;
            goto label_27903c;
        }
    }
    ctx->pc = 0x279024u;
    // 0x279024: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x279024u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x279028: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x279028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x27902c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27902cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279030: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x279030u;
    {
        const bool branch_taken_0x279030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279030u;
        // 0x279034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279030) {
            ctx->pc = 0x27903Cu;
            goto label_27903c;
        }
    }
    ctx->pc = 0x279038u;
    // 0x279038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x279038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27903c:
    // 0x27903c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27903cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279048: 0x3e00008  jr          $ra
    ctx->pc = 0x279048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279048u;
        // 0x27904c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279050u;
}
