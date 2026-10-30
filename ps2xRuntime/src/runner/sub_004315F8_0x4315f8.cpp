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

// Function: sub_004315F8
// Address: 0x4315f8 - 0x431708
void sub_004315F8_0x4315f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004315F8_0x4315f8");
#endif

    switch (ctx->pc) {
        case 0x4315f8u: goto label_4315f8;
        case 0x4315fcu: goto label_4315fc;
        case 0x431600u: goto label_431600;
        case 0x431604u: goto label_431604;
        case 0x431608u: goto label_431608;
        case 0x43160cu: goto label_43160c;
        case 0x431610u: goto label_431610;
        case 0x431614u: goto label_431614;
        case 0x431618u: goto label_431618;
        case 0x43161cu: goto label_43161c;
        case 0x431620u: goto label_431620;
        case 0x431624u: goto label_431624;
        case 0x431628u: goto label_431628;
        case 0x43162cu: goto label_43162c;
        case 0x431630u: goto label_431630;
        case 0x431634u: goto label_431634;
        case 0x431638u: goto label_431638;
        case 0x43163cu: goto label_43163c;
        case 0x431640u: goto label_431640;
        case 0x431644u: goto label_431644;
        case 0x431648u: goto label_431648;
        case 0x43164cu: goto label_43164c;
        case 0x431650u: goto label_431650;
        case 0x431654u: goto label_431654;
        case 0x431658u: goto label_431658;
        case 0x43165cu: goto label_43165c;
        case 0x431660u: goto label_431660;
        case 0x431664u: goto label_431664;
        case 0x431668u: goto label_431668;
        case 0x43166cu: goto label_43166c;
        case 0x431670u: goto label_431670;
        case 0x431674u: goto label_431674;
        case 0x431678u: goto label_431678;
        case 0x43167cu: goto label_43167c;
        case 0x431680u: goto label_431680;
        case 0x431684u: goto label_431684;
        case 0x431688u: goto label_431688;
        case 0x43168cu: goto label_43168c;
        case 0x431690u: goto label_431690;
        case 0x431694u: goto label_431694;
        case 0x431698u: goto label_431698;
        case 0x43169cu: goto label_43169c;
        case 0x4316a0u: goto label_4316a0;
        case 0x4316a4u: goto label_4316a4;
        case 0x4316a8u: goto label_4316a8;
        case 0x4316acu: goto label_4316ac;
        case 0x4316b0u: goto label_4316b0;
        case 0x4316b4u: goto label_4316b4;
        case 0x4316b8u: goto label_4316b8;
        case 0x4316bcu: goto label_4316bc;
        case 0x4316c0u: goto label_4316c0;
        case 0x4316c4u: goto label_4316c4;
        case 0x4316c8u: goto label_4316c8;
        case 0x4316ccu: goto label_4316cc;
        case 0x4316d0u: goto label_4316d0;
        case 0x4316d4u: goto label_4316d4;
        case 0x4316d8u: goto label_4316d8;
        case 0x4316dcu: goto label_4316dc;
        case 0x4316e0u: goto label_4316e0;
        case 0x4316e4u: goto label_4316e4;
        case 0x4316e8u: goto label_4316e8;
        case 0x4316ecu: goto label_4316ec;
        case 0x4316f0u: goto label_4316f0;
        case 0x4316f4u: goto label_4316f4;
        case 0x4316f8u: goto label_4316f8;
        case 0x4316fcu: goto label_4316fc;
        case 0x431700u: goto label_431700;
        case 0x431704u: goto label_431704;
        default: break;
    }

    ctx->pc = 0x4315f8u;

label_4315f8:
    // 0x4315f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4315f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4315fc:
    // 0x4315fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4315fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_431600:
    // 0x431600: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x431600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_431604:
    // 0x431604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431608:
    // 0x431608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x431608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_43160c:
    // 0x43160c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_431610:
    if (ctx->pc == 0x431610u) {
        ctx->pc = 0x431610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43160Cu;
        // 0x431610: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431614u;
        goto label_431614;
    }
    ctx->pc = 0x43160Cu;
    {
        const bool branch_taken_0x43160c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x431610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43160Cu;
        // 0x431610: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43160c) {
            ctx->pc = 0x431630u;
            goto label_431630;
        }
    }
    ctx->pc = 0x431614u;
label_431614:
    // 0x431614: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x431614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_431618:
    // 0x431618: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x431618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_43161c:
    // 0x43161c: 0x8c4469ec  lw          $a0, 0x69EC($v0)
    ctx->pc = 0x43161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
label_431620:
    // 0x431620: 0xc10c91e  jal         func_432478
label_431624:
    if (ctx->pc == 0x431624u) {
        ctx->pc = 0x431624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431620u;
        // 0x431624: 0x24a515f8  addiu       $a1, $a1, 0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431628u;
        goto label_431628;
    }
    ctx->pc = 0x431620u;
    SET_GPR_U32(ctx, 31, 0x431628u);
    ctx->pc = 0x431624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431620u;
    // 0x431624: 0x24a515f8  addiu       $a1, $a1, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432478u, 0x431620u, 0x431628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431628u;
label_431628:
    // 0x431628: 0x10000031  b           . + 4 + (0x31 << 2)
label_43162c:
    if (ctx->pc == 0x43162Cu) {
        ctx->pc = 0x43162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431628u;
        // 0x43162c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431630u;
        goto label_431630;
    }
    ctx->pc = 0x431628u;
    {
        const bool branch_taken_0x431628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431628u;
        // 0x43162c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431628) {
            ctx->pc = 0x4316F0u;
            goto label_4316f0;
        }
    }
    ctx->pc = 0x431630u;
label_431630:
    // 0x431630: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x431630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_431634:
    // 0x431634: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_431638:
    if (ctx->pc == 0x431638u) {
        ctx->pc = 0x431638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431634u;
        // 0x431638: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43163Cu;
        goto label_43163c;
    }
    ctx->pc = 0x431634u;
    {
        const bool branch_taken_0x431634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431634) {
            ctx->pc = 0x431638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431634u;
            // 0x431638: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431650u;
            goto label_431650;
        }
    }
    ctx->pc = 0x43163Cu;
label_43163c:
    // 0x43163c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_431640:
    // 0x431640: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x431640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
label_431644:
    // 0x431644: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x431644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_431648:
    // 0x431648: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x431648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_43164c:
    // 0x43164c: 0x0  nop
    ctx->pc = 0x43164cu;
    // NOP
label_431650:
    // 0x431650: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x431650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_431654:
    // 0x431654: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_431658:
    if (ctx->pc == 0x431658u) {
        ctx->pc = 0x431658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431654u;
        // 0x431658: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43165Cu;
        goto label_43165c;
    }
    ctx->pc = 0x431654u;
    {
        const bool branch_taken_0x431654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431654) {
            ctx->pc = 0x431658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431654u;
            // 0x431658: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431668u;
            goto label_431668;
        }
    }
    ctx->pc = 0x43165Cu;
label_43165c:
    // 0x43165c: 0xc10c63e  jal         func_4318F8
label_431660:
    if (ctx->pc == 0x431660u) {
        ctx->pc = 0x431664u;
        goto label_431664;
    }
    ctx->pc = 0x43165Cu;
    SET_GPR_U32(ctx, 31, 0x431664u);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x43165Cu, 0x431664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431664u;
label_431664:
    // 0x431664: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x431664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_431668:
    // 0x431668: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x431668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_43166c:
    // 0x43166c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_431670:
    if (ctx->pc == 0x431670u) {
        ctx->pc = 0x431670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43166Cu;
        // 0x431670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431674u;
        goto label_431674;
    }
    ctx->pc = 0x43166Cu;
    {
        const bool branch_taken_0x43166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43166Cu;
        // 0x431670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43166c) {
            ctx->pc = 0x4316ECu;
            goto label_4316ec;
        }
    }
    ctx->pc = 0x431674u;
label_431674:
    // 0x431674: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x431674u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_431678:
    // 0x431678: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_43167c:
    if (ctx->pc == 0x43167Cu) {
        ctx->pc = 0x43167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431678u;
        // 0x43167c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431680u;
        goto label_431680;
    }
    ctx->pc = 0x431678u;
    {
        const bool branch_taken_0x431678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x431678) {
            ctx->pc = 0x43167Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431678u;
            // 0x43167c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43169Cu;
            goto label_43169c;
        }
    }
    ctx->pc = 0x431680u;
label_431680:
    // 0x431680: 0x1000001b  b           . + 4 + (0x1B << 2)
label_431684:
    if (ctx->pc == 0x431684u) {
        ctx->pc = 0x431684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431680u;
        // 0x431684: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431688u;
        goto label_431688;
    }
    ctx->pc = 0x431680u;
    {
        const bool branch_taken_0x431680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431680u;
        // 0x431684: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431680) {
            ctx->pc = 0x4316F0u;
            goto label_4316f0;
        }
    }
    ctx->pc = 0x431688u;
label_431688:
    // 0x431688: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x431688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_43168c:
    // 0x43168c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_431690:
    // 0x431690: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x431690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_431694:
    // 0x431694: 0x10000015  b           . + 4 + (0x15 << 2)
label_431698:
    if (ctx->pc == 0x431698u) {
        ctx->pc = 0x431698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431694u;
        // 0x431698: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43169Cu;
        goto label_43169c;
    }
    ctx->pc = 0x431694u;
    {
        const bool branch_taken_0x431694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431694u;
        // 0x431698: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431694) {
            ctx->pc = 0x4316ECu;
            goto label_4316ec;
        }
    }
    ctx->pc = 0x43169Cu;
label_43169c:
    // 0x43169c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x43169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4316a0:
    // 0x4316a0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x4316a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_4316a4:
    // 0x4316a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4316a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4316a8:
    // 0x4316a8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_4316ac:
    if (ctx->pc == 0x4316ACu) {
        ctx->pc = 0x4316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316A8u;
        // 0x4316ac: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4316B0u;
        goto label_4316b0;
    }
    ctx->pc = 0x4316A8u;
    {
        const bool branch_taken_0x4316a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316A8u;
        // 0x4316ac: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4316a8) {
            ctx->pc = 0x4316B4u;
            goto label_4316b4;
        }
    }
    ctx->pc = 0x4316B0u;
label_4316b0:
    // 0x4316b0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4316b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4316b4:
    // 0x4316b4: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
label_4316b8:
    if (ctx->pc == 0x4316B8u) {
        ctx->pc = 0x4316B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316B4u;
        // 0x4316b8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4316BCu;
        goto label_4316bc;
    }
    ctx->pc = 0x4316B4u;
    {
        const bool branch_taken_0x4316b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4316B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316B4u;
        // 0x4316b8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4316b4) {
            ctx->pc = 0x4316E8u;
            goto label_4316e8;
        }
    }
    ctx->pc = 0x4316BCu;
label_4316bc:
    // 0x4316bc: 0x0  nop
    ctx->pc = 0x4316bcu;
    // NOP
label_4316c0:
    // 0x4316c0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4316c4:
    // 0x4316c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4316c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4316c8:
    // 0x4316c8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x4316c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4316cc:
    // 0x4316cc: 0x40f809  jalr        $v0
label_4316d0:
    if (ctx->pc == 0x4316D0u) {
        ctx->pc = 0x4316D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316CCu;
        // 0x4316d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4316D4u;
        goto label_4316d4;
    }
    ctx->pc = 0x4316CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4316D4u);
        ctx->pc = 0x4316D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316CCu;
        // 0x4316d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4316CCu, 0x4316D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4316D4u;
label_4316d4:
    // 0x4316d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4316d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4316d8:
    // 0x4316d8: 0x1860ffeb  blez        $v1, . + 4 + (-0x15 << 2)
label_4316dc:
    if (ctx->pc == 0x4316DCu) {
        ctx->pc = 0x4316DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316D8u;
        // 0x4316dc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4316E0u;
        goto label_4316e0;
    }
    ctx->pc = 0x4316D8u;
    {
        const bool branch_taken_0x4316d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4316DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316D8u;
        // 0x4316dc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4316d8) {
            ctx->pc = 0x431688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431688;
        }
    }
    ctx->pc = 0x4316E0u;
label_4316e0:
    // 0x4316e0: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_4316e4:
    if (ctx->pc == 0x4316E4u) {
        ctx->pc = 0x4316E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316E0u;
        // 0x4316e4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4316E8u;
        goto label_4316e8;
    }
    ctx->pc = 0x4316E0u;
    {
        const bool branch_taken_0x4316e0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x4316E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316E0u;
        // 0x4316e4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4316e0) {
            ctx->pc = 0x4316C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4316c0;
        }
    }
    ctx->pc = 0x4316E8u;
label_4316e8:
    // 0x4316e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4316e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4316ec:
    // 0x4316ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4316ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4316f0:
    // 0x4316f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4316f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4316f4:
    // 0x4316f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4316f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4316f8:
    // 0x4316f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4316f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4316fc:
    // 0x4316fc: 0x3e00008  jr          $ra
label_431700:
    if (ctx->pc == 0x431700u) {
        ctx->pc = 0x431700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316FCu;
        // 0x431700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431704u;
        goto label_431704;
    }
    ctx->pc = 0x4316FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316FCu;
        // 0x431700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4316FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431704u;
label_431704:
    // 0x431704: 0x0  nop
    ctx->pc = 0x431704u;
    // NOP
    ctx->pc = 0x431708u;
}
