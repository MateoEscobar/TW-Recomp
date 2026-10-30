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

// Function: sub_00290588
// Address: 0x290588 - 0x290698
void sub_00290588_0x290588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290588_0x290588");
#endif

    switch (ctx->pc) {
        case 0x2905b4u: goto label_2905b4;
        case 0x2905c0u: goto label_2905c0;
        case 0x290614u: goto label_290614;
        case 0x29062cu: goto label_29062c;
        case 0x29065cu: goto label_29065c;
        case 0x290668u: goto label_290668;
        default: break;
    }

    ctx->pc = 0x290588u;

    // 0x290588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29058c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x290590: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x290590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290594: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x290594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x290598: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x290598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29059c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2905a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2905a4: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2905A4u;
    {
        const bool branch_taken_0x2905a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905A4u;
        // 0x2905a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905a4) {
            ctx->pc = 0x290638u;
            goto label_290638;
        }
    }
    ctx->pc = 0x2905ACu;
    // 0x2905ac: 0xc087502  jal         func_21D408
    ctx->pc = 0x2905ACu;
    SET_GPR_U32(ctx, 31, 0x2905B4u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2905ACu, 0x2905B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905B4u;
label_2905b4:
    // 0x2905b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2905b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905b8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2905B8u;
    SET_GPR_U32(ctx, 31, 0x2905C0u);
    ctx->pc = 0x2905BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905B8u;
    // 0x2905bc: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2905B8u, 0x2905C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905C0u;
label_2905c0:
    // 0x2905c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2905c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2905c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2905c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2905c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2905cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2905ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2905d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2905D0u;
    {
        const bool branch_taken_0x2905d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905D0u;
        // 0x2905d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905d0) {
            ctx->pc = 0x2905E8u;
            goto label_2905e8;
        }
    }
    ctx->pc = 0x2905D8u;
    // 0x2905d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2905d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2905dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2905dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905e0: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2905e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x2905e4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2905e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2905e8:
    // 0x2905e8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2905E8u;
    {
        const bool branch_taken_0x2905e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905E8u;
        // 0x2905ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905e8) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x2905F0u;
    // 0x2905f0: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x2905f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x2905f4: 0x8c4305e8  lw          $v1, 0x5E8($v0)
    ctx->pc = 0x2905f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    // 0x2905f8: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x2905f8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2905fc: 0x56040010  bnel        $s0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2905FCu;
    {
        const bool branch_taken_0x2905fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x2905fc) {
            ctx->pc = 0x290600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2905FCu;
            // 0x290600: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290640u;
            goto label_290640;
        }
    }
    ctx->pc = 0x290604u;
    // 0x290604: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x290604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x290608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29060c: 0xc0a37a6  jal         func_28DE98
    ctx->pc = 0x29060Cu;
    SET_GPR_U32(ctx, 31, 0x290614u);
    ctx->pc = 0x290610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29060Cu;
    // 0x290610: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE98u, 0x29060Cu, 0x290614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290614u;
label_290614:
    // 0x290614: 0x10500018  beq         $v0, $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x290614u;
    {
        const bool branch_taken_0x290614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x290618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290614u;
        // 0x290618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290614) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x29061Cu;
    // 0x29061c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29061Cu;
    {
        const bool branch_taken_0x29061c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29061c) {
            ctx->pc = 0x290620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29061Cu;
            // 0x290620: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290640u;
            goto label_290640;
        }
    }
    ctx->pc = 0x290624u;
    // 0x290624: 0xc087502  jal         func_21D408
    ctx->pc = 0x290624u;
    SET_GPR_U32(ctx, 31, 0x29062Cu);
    ctx->pc = 0x290628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290624u;
    // 0x290628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290624u, 0x29062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29062Cu;
label_29062c:
    // 0x29062c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290630: 0x54700003  bnel        $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290630u;
    {
        const bool branch_taken_0x290630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x290630) {
            ctx->pc = 0x290634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290630u;
            // 0x290634: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290640u;
            goto label_290640;
        }
    }
    ctx->pc = 0x290638u;
label_290638:
    // 0x290638: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x290638u;
    {
        const bool branch_taken_0x290638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290638u;
        // 0x29063c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290638) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x290640u;
label_290640:
    // 0x290640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290644: 0x5602000d  bnel        $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290644u;
    {
        const bool branch_taken_0x290644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x290644) {
            ctx->pc = 0x290648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290644u;
            // 0x290648: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x29064Cu;
    // 0x29064c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29064Cu;
    {
        const bool branch_taken_0x29064c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29064c) {
            ctx->pc = 0x290650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29064Cu;
            // 0x290650: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x290654u;
    // 0x290654: 0xc087502  jal         func_21D408
    ctx->pc = 0x290654u;
    SET_GPR_U32(ctx, 31, 0x29065Cu);
    ctx->pc = 0x290658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290654u;
    // 0x290658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290654u, 0x29065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29065Cu;
label_29065c:
    // 0x29065c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290660: 0xc0a404e  jal         func_290138
    ctx->pc = 0x290660u;
    SET_GPR_U32(ctx, 31, 0x290668u);
    ctx->pc = 0x290664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290660u;
    // 0x290664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x290660u, 0x290668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290668u;
label_290668:
    // 0x290668: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29066c: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29066Cu;
    {
        const bool branch_taken_0x29066c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x290670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29066Cu;
        // 0x290670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29066c) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x290674u;
    // 0x290674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290678:
    // 0x290678: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x290678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29067c:
    // 0x29067c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29067cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290684: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x290684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29068c: 0x3e00008  jr          $ra
    ctx->pc = 0x29068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29068Cu;
        // 0x290690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290694u;
    // 0x290694: 0x0  nop
    ctx->pc = 0x290694u;
    // NOP
    ctx->pc = 0x290698u;
}
