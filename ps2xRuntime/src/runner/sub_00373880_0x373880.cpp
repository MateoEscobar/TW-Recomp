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

// Function: sub_00373880
// Address: 0x373880 - 0x373930
void sub_00373880_0x373880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373880_0x373880");
#endif

    switch (ctx->pc) {
        case 0x3738acu: goto label_3738ac;
        case 0x3738b4u: goto label_3738b4;
        case 0x3738ccu: goto label_3738cc;
        case 0x3738d4u: goto label_3738d4;
        case 0x3738e8u: goto label_3738e8;
        case 0x3738fcu: goto label_3738fc;
        case 0x373910u: goto label_373910;
        default: break;
    }

    ctx->pc = 0x373880u;

    // 0x373880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x373880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x373884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373888: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x373888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37388c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x373894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x373898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37389c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3738a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3738a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3738a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3738A4u;
    SET_GPR_U32(ctx, 31, 0x3738ACu);
    ctx->pc = 0x3738A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738A4u;
    // 0x3738a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3738A4u, 0x3738ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738ACu;
label_3738ac:
    // 0x3738ac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3738ACu;
    SET_GPR_U32(ctx, 31, 0x3738B4u);
    ctx->pc = 0x3738B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738ACu;
    // 0x3738b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3738ACu, 0x3738B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738B4u;
label_3738b4:
    // 0x3738b4: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3738b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3738b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3738b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738bc: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3738bcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3738c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3738c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3738c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3738C4u;
    SET_GPR_U32(ctx, 31, 0x3738CCu);
    ctx->pc = 0x3738C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738C4u;
    // 0x3738c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3738C4u, 0x3738CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738CCu;
label_3738cc:
    // 0x3738cc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3738CCu;
    SET_GPR_U32(ctx, 31, 0x3738D4u);
    ctx->pc = 0x3738D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738CCu;
    // 0x3738d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3738CCu, 0x3738D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738D4u;
label_3738d4:
    // 0x3738d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3738d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3738d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3738dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3738e0: 0xc102488  jal         func_409220
    ctx->pc = 0x3738E0u;
    SET_GPR_U32(ctx, 31, 0x3738E8u);
    ctx->pc = 0x3738E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738E0u;
    // 0x3738e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3738E0u, 0x3738E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738E8u;
label_3738e8:
    // 0x3738e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3738e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3738ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3738f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3738f4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3738F4u;
    SET_GPR_U32(ctx, 31, 0x3738FCu);
    ctx->pc = 0x3738F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738F4u;
    // 0x3738f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3738F4u, 0x3738FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738FCu;
label_3738fc:
    // 0x3738fc: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x3738fcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x373900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x373904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373908: 0xc05a99c  jal         func_16A670
    ctx->pc = 0x373908u;
    SET_GPR_U32(ctx, 31, 0x373910u);
    ctx->pc = 0x37390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373908u;
    // 0x37390c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A670u, 0x373908u, 0x373910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373910u;
label_373910:
    // 0x373910: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x373910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373918: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x373918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37391c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37391cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373920: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x373920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373928: 0x3e00008  jr          $ra
    ctx->pc = 0x373928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373928u;
        // 0x37392c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373930u;
}
