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

// Function: sub_0031E620
// Address: 0x31e620 - 0x31e770
void sub_0031E620_0x31e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E620_0x31e620");
#endif

    switch (ctx->pc) {
        case 0x31e620u: goto label_31e620;
        case 0x31e624u: goto label_31e624;
        case 0x31e628u: goto label_31e628;
        case 0x31e62cu: goto label_31e62c;
        case 0x31e630u: goto label_31e630;
        case 0x31e634u: goto label_31e634;
        case 0x31e638u: goto label_31e638;
        case 0x31e63cu: goto label_31e63c;
        case 0x31e640u: goto label_31e640;
        case 0x31e644u: goto label_31e644;
        case 0x31e648u: goto label_31e648;
        case 0x31e64cu: goto label_31e64c;
        case 0x31e650u: goto label_31e650;
        case 0x31e654u: goto label_31e654;
        case 0x31e658u: goto label_31e658;
        case 0x31e65cu: goto label_31e65c;
        case 0x31e660u: goto label_31e660;
        case 0x31e664u: goto label_31e664;
        case 0x31e668u: goto label_31e668;
        case 0x31e66cu: goto label_31e66c;
        case 0x31e670u: goto label_31e670;
        case 0x31e674u: goto label_31e674;
        case 0x31e678u: goto label_31e678;
        case 0x31e67cu: goto label_31e67c;
        case 0x31e680u: goto label_31e680;
        case 0x31e684u: goto label_31e684;
        case 0x31e688u: goto label_31e688;
        case 0x31e68cu: goto label_31e68c;
        case 0x31e690u: goto label_31e690;
        case 0x31e694u: goto label_31e694;
        case 0x31e698u: goto label_31e698;
        case 0x31e69cu: goto label_31e69c;
        case 0x31e6a0u: goto label_31e6a0;
        case 0x31e6a4u: goto label_31e6a4;
        case 0x31e6a8u: goto label_31e6a8;
        case 0x31e6acu: goto label_31e6ac;
        case 0x31e6b0u: goto label_31e6b0;
        case 0x31e6b4u: goto label_31e6b4;
        case 0x31e6b8u: goto label_31e6b8;
        case 0x31e6bcu: goto label_31e6bc;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e6c4u: goto label_31e6c4;
        case 0x31e6c8u: goto label_31e6c8;
        case 0x31e6ccu: goto label_31e6cc;
        case 0x31e6d0u: goto label_31e6d0;
        case 0x31e6d4u: goto label_31e6d4;
        case 0x31e6d8u: goto label_31e6d8;
        case 0x31e6dcu: goto label_31e6dc;
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        case 0x31e718u: goto label_31e718;
        case 0x31e71cu: goto label_31e71c;
        case 0x31e720u: goto label_31e720;
        case 0x31e724u: goto label_31e724;
        case 0x31e728u: goto label_31e728;
        case 0x31e72cu: goto label_31e72c;
        case 0x31e730u: goto label_31e730;
        case 0x31e734u: goto label_31e734;
        case 0x31e738u: goto label_31e738;
        case 0x31e73cu: goto label_31e73c;
        case 0x31e740u: goto label_31e740;
        case 0x31e744u: goto label_31e744;
        case 0x31e748u: goto label_31e748;
        case 0x31e74cu: goto label_31e74c;
        case 0x31e750u: goto label_31e750;
        case 0x31e754u: goto label_31e754;
        case 0x31e758u: goto label_31e758;
        case 0x31e75cu: goto label_31e75c;
        case 0x31e760u: goto label_31e760;
        case 0x31e764u: goto label_31e764;
        case 0x31e768u: goto label_31e768;
        case 0x31e76cu: goto label_31e76c;
        default: break;
    }

    ctx->pc = 0x31e620u;

label_31e620:
    // 0x31e620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31e624:
    // 0x31e624: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_31e628:
    // 0x31e628: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_31e62c:
    // 0x31e62c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31e62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e630:
    // 0x31e630: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_31e634:
    // 0x31e634: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31e638:
    // 0x31e638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e63c:
    // 0x31e63c: 0xc08a61a  jal         func_229868
label_31e640:
    if (ctx->pc == 0x31E640u) {
        ctx->pc = 0x31E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E63Cu;
        // 0x31e640: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E644u;
        goto label_31e644;
    }
    ctx->pc = 0x31E63Cu;
    SET_GPR_U32(ctx, 31, 0x31E644u);
    ctx->pc = 0x31E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E63Cu;
    // 0x31e640: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31E63Cu, 0x31E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E644u;
label_31e644:
    // 0x31e644: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31e644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e648:
    // 0x31e648: 0x52600042  beql        $s3, $zero, . + 4 + (0x42 << 2)
label_31e64c:
    if (ctx->pc == 0x31E64Cu) {
        ctx->pc = 0x31E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E648u;
        // 0x31e64c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E650u;
        goto label_31e650;
    }
    ctx->pc = 0x31E648u;
    {
        const bool branch_taken_0x31e648 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e648) {
            ctx->pc = 0x31E64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E648u;
            // 0x31e64c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E754u;
            goto label_31e754;
        }
    }
    ctx->pc = 0x31E650u;
label_31e650:
    // 0x31e650: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x31e650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_31e654:
    // 0x31e654: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_31e658:
    if (ctx->pc == 0x31E658u) {
        ctx->pc = 0x31E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E654u;
        // 0x31e658: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E65Cu;
        goto label_31e65c;
    }
    ctx->pc = 0x31E654u;
    {
        const bool branch_taken_0x31e654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e654) {
            ctx->pc = 0x31E658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E654u;
            // 0x31e658: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E754u;
            goto label_31e754;
        }
    }
    ctx->pc = 0x31E65Cu;
label_31e65c:
    // 0x31e65c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x31e65cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31e660:
    // 0x31e660: 0xc087502  jal         func_21D408
label_31e664:
    if (ctx->pc == 0x31E664u) {
        ctx->pc = 0x31E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E660u;
        // 0x31e664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E668u;
        goto label_31e668;
    }
    ctx->pc = 0x31E660u;
    SET_GPR_U32(ctx, 31, 0x31E668u);
    ctx->pc = 0x31E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E660u;
    // 0x31e664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E660u, 0x31E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E668u;
label_31e668:
    // 0x31e668: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31e668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e66c:
    // 0x31e66c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e670:
    // 0x31e670: 0xc087502  jal         func_21D408
label_31e674:
    if (ctx->pc == 0x31E674u) {
        ctx->pc = 0x31E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E670u;
        // 0x31e674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E678u;
        goto label_31e678;
    }
    ctx->pc = 0x31E670u;
    SET_GPR_U32(ctx, 31, 0x31E678u);
    ctx->pc = 0x31E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E670u;
    // 0x31e674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E670u, 0x31E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E678u;
label_31e678:
    // 0x31e678: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e67c:
    // 0x31e67c: 0xc0a408c  jal         func_290230
label_31e680:
    if (ctx->pc == 0x31E680u) {
        ctx->pc = 0x31E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E67Cu;
        // 0x31e680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E684u;
        goto label_31e684;
    }
    ctx->pc = 0x31E67Cu;
    SET_GPR_U32(ctx, 31, 0x31E684u);
    ctx->pc = 0x31E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E67Cu;
    // 0x31e680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x31E67Cu, 0x31E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E684u;
label_31e684:
    // 0x31e684: 0x50500033  beql        $v0, $s0, . + 4 + (0x33 << 2)
label_31e688:
    if (ctx->pc == 0x31E688u) {
        ctx->pc = 0x31E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E684u;
        // 0x31e688: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E68Cu;
        goto label_31e68c;
    }
    ctx->pc = 0x31E684u;
    {
        const bool branch_taken_0x31e684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31e684) {
            ctx->pc = 0x31E688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E684u;
            // 0x31e688: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E754u;
            goto label_31e754;
        }
    }
    ctx->pc = 0x31E68Cu;
label_31e68c:
    // 0x31e68c: 0xc0a40d2  jal         func_290348
label_31e690:
    if (ctx->pc == 0x31E690u) {
        ctx->pc = 0x31E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E68Cu;
        // 0x31e690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E694u;
        goto label_31e694;
    }
    ctx->pc = 0x31E68Cu;
    SET_GPR_U32(ctx, 31, 0x31E694u);
    ctx->pc = 0x31E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E68Cu;
    // 0x31e690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x31E68Cu, 0x31E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E694u;
label_31e694:
    // 0x31e694: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_31e698:
    if (ctx->pc == 0x31E698u) {
        ctx->pc = 0x31E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E694u;
        // 0x31e698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E69Cu;
        goto label_31e69c;
    }
    ctx->pc = 0x31E694u;
    {
        const bool branch_taken_0x31e694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x31E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E694u;
        // 0x31e698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e694) {
            ctx->pc = 0x31E6BCu;
            goto label_31e6bc;
        }
    }
    ctx->pc = 0x31E69Cu;
label_31e69c:
    // 0x31e69c: 0xc0a354e  jal         func_28D538
label_31e6a0:
    if (ctx->pc == 0x31E6A0u) {
        ctx->pc = 0x31E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E69Cu;
        // 0x31e6a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6A4u;
        goto label_31e6a4;
    }
    ctx->pc = 0x31E69Cu;
    SET_GPR_U32(ctx, 31, 0x31E6A4u);
    ctx->pc = 0x31E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E69Cu;
    // 0x31e6a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x31E69Cu, 0x31E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6A4u;
label_31e6a4:
    // 0x31e6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e6a8:
    // 0x31e6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e6ac:
    // 0x31e6ac: 0xc0a33f8  jal         func_28CFE0
label_31e6b0:
    if (ctx->pc == 0x31E6B0u) {
        ctx->pc = 0x31E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6ACu;
        // 0x31e6b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6B4u;
        goto label_31e6b4;
    }
    ctx->pc = 0x31E6ACu;
    SET_GPR_U32(ctx, 31, 0x31E6B4u);
    ctx->pc = 0x31E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E6ACu;
    // 0x31e6b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x31E6ACu, 0x31E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6B4u;
label_31e6b4:
    // 0x31e6b4: 0x10000027  b           . + 4 + (0x27 << 2)
label_31e6b8:
    if (ctx->pc == 0x31E6B8u) {
        ctx->pc = 0x31E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6B4u;
        // 0x31e6b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6BCu;
        goto label_31e6bc;
    }
    ctx->pc = 0x31E6B4u;
    {
        const bool branch_taken_0x31e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6B4u;
        // 0x31e6b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6b4) {
            ctx->pc = 0x31E754u;
            goto label_31e754;
        }
    }
    ctx->pc = 0x31E6BCu;
label_31e6bc:
    // 0x31e6bc: 0xc0a3658  jal         func_28D960
label_31e6c0:
    if (ctx->pc == 0x31E6C0u) {
        ctx->pc = 0x31E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6BCu;
        // 0x31e6c0: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6C4u;
        goto label_31e6c4;
    }
    ctx->pc = 0x31E6BCu;
    SET_GPR_U32(ctx, 31, 0x31E6C4u);
    ctx->pc = 0x31E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E6BCu;
    // 0x31e6c0: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31E6BCu, 0x31E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6C4u;
label_31e6c4:
    // 0x31e6c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e6c8:
    // 0x31e6c8: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_31e6cc:
    if (ctx->pc == 0x31E6CCu) {
        ctx->pc = 0x31E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6C8u;
        // 0x31e6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6D0u;
        goto label_31e6d0;
    }
    ctx->pc = 0x31E6C8u;
    {
        const bool branch_taken_0x31e6c8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x31E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6C8u;
        // 0x31e6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6c8) {
            ctx->pc = 0x31E6F8u;
            goto label_31e6f8;
        }
    }
    ctx->pc = 0x31E6D0u;
label_31e6d0:
    // 0x31e6d0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31e6d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31e6d4:
    // 0x31e6d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31e6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31e6d8:
    // 0x31e6d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31e6dc:
    if (ctx->pc == 0x31E6DCu) {
        ctx->pc = 0x31E6E0u;
        goto label_31e6e0;
    }
    ctx->pc = 0x31E6D8u;
    {
        const bool branch_taken_0x31e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e6d8) {
            ctx->pc = 0x31E6F8u;
            goto label_31e6f8;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0xc0a35f6  jal         func_28D7D8
label_31e6e4:
    if (ctx->pc == 0x31E6E4u) {
        ctx->pc = 0x31E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6E0u;
        // 0x31e6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6E8u;
        goto label_31e6e8;
    }
    ctx->pc = 0x31E6E0u;
    SET_GPR_U32(ctx, 31, 0x31E6E8u);
    ctx->pc = 0x31E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E6E0u;
    // 0x31e6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x31E6E0u, 0x31E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6E8u;
label_31e6e8:
    // 0x31e6e8: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x31e6e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31e6ec:
    // 0x31e6ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x31e6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_31e6f0:
    // 0x31e6f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_31e6f4:
    if (ctx->pc == 0x31E6F4u) {
        ctx->pc = 0x31E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F0u;
        // 0x31e6f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6F8u;
        goto label_31e6f8;
    }
    ctx->pc = 0x31E6F0u;
    {
        const bool branch_taken_0x31e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F0u;
        // 0x31e6f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6f0) {
            ctx->pc = 0x31E6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e6e0;
        }
    }
    ctx->pc = 0x31E6F8u;
label_31e6f8:
    // 0x31e6f8: 0xc0a354e  jal         func_28D538
label_31e6fc:
    if (ctx->pc == 0x31E6FCu) {
        ctx->pc = 0x31E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F8u;
        // 0x31e6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E700u;
        goto label_31e700;
    }
    ctx->pc = 0x31E6F8u;
    SET_GPR_U32(ctx, 31, 0x31E700u);
    ctx->pc = 0x31E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E6F8u;
    // 0x31e6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x31E6F8u, 0x31E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E700u;
label_31e700:
    // 0x31e700: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31e704:
    // 0x31e704: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31e704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31e708:
    // 0x31e708: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31e70c:
    // 0x31e70c: 0x40f809  jalr        $v0
label_31e710:
    if (ctx->pc == 0x31E710u) {
        ctx->pc = 0x31E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E70Cu;
        // 0x31e710: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E714u;
        goto label_31e714;
    }
    ctx->pc = 0x31E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E714u);
        ctx->pc = 0x31E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E70Cu;
        // 0x31e710: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E70Cu, 0x31E714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E714u;
label_31e714:
    // 0x31e714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e718:
    // 0x31e718: 0xc0ab742  jal         func_2ADD08
label_31e71c:
    if (ctx->pc == 0x31E71Cu) {
        ctx->pc = 0x31E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E718u;
        // 0x31e71c: 0x24051f40  addiu       $a1, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E720u;
        goto label_31e720;
    }
    ctx->pc = 0x31E718u;
    SET_GPR_U32(ctx, 31, 0x31E720u);
    ctx->pc = 0x31E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E718u;
    // 0x31e71c: 0x24051f40  addiu       $a1, $zero, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x31E718u, 0x31E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E720u;
label_31e720:
    // 0x31e720: 0xc0a4e54  jal         func_293950
label_31e724:
    if (ctx->pc == 0x31E724u) {
        ctx->pc = 0x31E728u;
        goto label_31e728;
    }
    ctx->pc = 0x31E720u;
    SET_GPR_U32(ctx, 31, 0x31E728u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31E720u, 0x31E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E728u;
label_31e728:
    // 0x31e728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e72c:
    // 0x31e72c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_31e730:
    if (ctx->pc == 0x31E730u) {
        ctx->pc = 0x31E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E72Cu;
        // 0x31e730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E734u;
        goto label_31e734;
    }
    ctx->pc = 0x31E72Cu;
    {
        const bool branch_taken_0x31e72c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E72Cu;
        // 0x31e730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e72c) {
            ctx->pc = 0x31E744u;
            goto label_31e744;
        }
    }
    ctx->pc = 0x31E734u;
label_31e734:
    // 0x31e734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e738:
    // 0x31e738: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x31e738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_31e73c:
    // 0x31e73c: 0xc0acb08  jal         func_2B2C20
label_31e740:
    if (ctx->pc == 0x31E740u) {
        ctx->pc = 0x31E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E73Cu;
        // 0x31e740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E744u;
        goto label_31e744;
    }
    ctx->pc = 0x31E73Cu;
    SET_GPR_U32(ctx, 31, 0x31E744u);
    ctx->pc = 0x31E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E73Cu;
    // 0x31e740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x31E73Cu, 0x31E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E744u;
label_31e744:
    // 0x31e744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e748:
    // 0x31e748: 0xc0a35d6  jal         func_28D758
label_31e74c:
    if (ctx->pc == 0x31E74Cu) {
        ctx->pc = 0x31E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E748u;
        // 0x31e74c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E750u;
        goto label_31e750;
    }
    ctx->pc = 0x31E748u;
    SET_GPR_U32(ctx, 31, 0x31E750u);
    ctx->pc = 0x31E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E748u;
    // 0x31e74c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31E748u, 0x31E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E750u;
label_31e750:
    // 0x31e750: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31e750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e754:
    // 0x31e754: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31e754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e758:
    // 0x31e758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31e758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e75c:
    // 0x31e75c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31e75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31e760:
    // 0x31e760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e764:
    // 0x31e764: 0x3e00008  jr          $ra
label_31e768:
    if (ctx->pc == 0x31E768u) {
        ctx->pc = 0x31E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E764u;
        // 0x31e768: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E76Cu;
        goto label_31e76c;
    }
    ctx->pc = 0x31E764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E764u;
        // 0x31e768: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E76Cu;
label_31e76c:
    // 0x31e76c: 0x0  nop
    ctx->pc = 0x31e76cu;
    // NOP
    ctx->pc = 0x31e770u;
}
