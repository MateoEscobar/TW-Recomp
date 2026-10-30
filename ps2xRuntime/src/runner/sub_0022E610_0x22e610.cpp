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

// Function: sub_0022E610
// Address: 0x22e610 - 0x22e848
void sub_0022E610_0x22e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E610_0x22e610");
#endif

    switch (ctx->pc) {
        case 0x22e610u: goto label_22e610;
        case 0x22e614u: goto label_22e614;
        case 0x22e618u: goto label_22e618;
        case 0x22e61cu: goto label_22e61c;
        case 0x22e620u: goto label_22e620;
        case 0x22e624u: goto label_22e624;
        case 0x22e628u: goto label_22e628;
        case 0x22e62cu: goto label_22e62c;
        case 0x22e630u: goto label_22e630;
        case 0x22e634u: goto label_22e634;
        case 0x22e638u: goto label_22e638;
        case 0x22e63cu: goto label_22e63c;
        case 0x22e640u: goto label_22e640;
        case 0x22e644u: goto label_22e644;
        case 0x22e648u: goto label_22e648;
        case 0x22e64cu: goto label_22e64c;
        case 0x22e650u: goto label_22e650;
        case 0x22e654u: goto label_22e654;
        case 0x22e658u: goto label_22e658;
        case 0x22e65cu: goto label_22e65c;
        case 0x22e660u: goto label_22e660;
        case 0x22e664u: goto label_22e664;
        case 0x22e668u: goto label_22e668;
        case 0x22e66cu: goto label_22e66c;
        case 0x22e670u: goto label_22e670;
        case 0x22e674u: goto label_22e674;
        case 0x22e678u: goto label_22e678;
        case 0x22e67cu: goto label_22e67c;
        case 0x22e680u: goto label_22e680;
        case 0x22e684u: goto label_22e684;
        case 0x22e688u: goto label_22e688;
        case 0x22e68cu: goto label_22e68c;
        case 0x22e690u: goto label_22e690;
        case 0x22e694u: goto label_22e694;
        case 0x22e698u: goto label_22e698;
        case 0x22e69cu: goto label_22e69c;
        case 0x22e6a0u: goto label_22e6a0;
        case 0x22e6a4u: goto label_22e6a4;
        case 0x22e6a8u: goto label_22e6a8;
        case 0x22e6acu: goto label_22e6ac;
        case 0x22e6b0u: goto label_22e6b0;
        case 0x22e6b4u: goto label_22e6b4;
        case 0x22e6b8u: goto label_22e6b8;
        case 0x22e6bcu: goto label_22e6bc;
        case 0x22e6c0u: goto label_22e6c0;
        case 0x22e6c4u: goto label_22e6c4;
        case 0x22e6c8u: goto label_22e6c8;
        case 0x22e6ccu: goto label_22e6cc;
        case 0x22e6d0u: goto label_22e6d0;
        case 0x22e6d4u: goto label_22e6d4;
        case 0x22e6d8u: goto label_22e6d8;
        case 0x22e6dcu: goto label_22e6dc;
        case 0x22e6e0u: goto label_22e6e0;
        case 0x22e6e4u: goto label_22e6e4;
        case 0x22e6e8u: goto label_22e6e8;
        case 0x22e6ecu: goto label_22e6ec;
        case 0x22e6f0u: goto label_22e6f0;
        case 0x22e6f4u: goto label_22e6f4;
        case 0x22e6f8u: goto label_22e6f8;
        case 0x22e6fcu: goto label_22e6fc;
        case 0x22e700u: goto label_22e700;
        case 0x22e704u: goto label_22e704;
        case 0x22e708u: goto label_22e708;
        case 0x22e70cu: goto label_22e70c;
        case 0x22e710u: goto label_22e710;
        case 0x22e714u: goto label_22e714;
        case 0x22e718u: goto label_22e718;
        case 0x22e71cu: goto label_22e71c;
        case 0x22e720u: goto label_22e720;
        case 0x22e724u: goto label_22e724;
        case 0x22e728u: goto label_22e728;
        case 0x22e72cu: goto label_22e72c;
        case 0x22e730u: goto label_22e730;
        case 0x22e734u: goto label_22e734;
        case 0x22e738u: goto label_22e738;
        case 0x22e73cu: goto label_22e73c;
        case 0x22e740u: goto label_22e740;
        case 0x22e744u: goto label_22e744;
        case 0x22e748u: goto label_22e748;
        case 0x22e74cu: goto label_22e74c;
        case 0x22e750u: goto label_22e750;
        case 0x22e754u: goto label_22e754;
        case 0x22e758u: goto label_22e758;
        case 0x22e75cu: goto label_22e75c;
        case 0x22e760u: goto label_22e760;
        case 0x22e764u: goto label_22e764;
        case 0x22e768u: goto label_22e768;
        case 0x22e76cu: goto label_22e76c;
        case 0x22e770u: goto label_22e770;
        case 0x22e774u: goto label_22e774;
        case 0x22e778u: goto label_22e778;
        case 0x22e77cu: goto label_22e77c;
        case 0x22e780u: goto label_22e780;
        case 0x22e784u: goto label_22e784;
        case 0x22e788u: goto label_22e788;
        case 0x22e78cu: goto label_22e78c;
        case 0x22e790u: goto label_22e790;
        case 0x22e794u: goto label_22e794;
        case 0x22e798u: goto label_22e798;
        case 0x22e79cu: goto label_22e79c;
        case 0x22e7a0u: goto label_22e7a0;
        case 0x22e7a4u: goto label_22e7a4;
        case 0x22e7a8u: goto label_22e7a8;
        case 0x22e7acu: goto label_22e7ac;
        case 0x22e7b0u: goto label_22e7b0;
        case 0x22e7b4u: goto label_22e7b4;
        case 0x22e7b8u: goto label_22e7b8;
        case 0x22e7bcu: goto label_22e7bc;
        case 0x22e7c0u: goto label_22e7c0;
        case 0x22e7c4u: goto label_22e7c4;
        case 0x22e7c8u: goto label_22e7c8;
        case 0x22e7ccu: goto label_22e7cc;
        case 0x22e7d0u: goto label_22e7d0;
        case 0x22e7d4u: goto label_22e7d4;
        case 0x22e7d8u: goto label_22e7d8;
        case 0x22e7dcu: goto label_22e7dc;
        case 0x22e7e0u: goto label_22e7e0;
        case 0x22e7e4u: goto label_22e7e4;
        case 0x22e7e8u: goto label_22e7e8;
        case 0x22e7ecu: goto label_22e7ec;
        case 0x22e7f0u: goto label_22e7f0;
        case 0x22e7f4u: goto label_22e7f4;
        case 0x22e7f8u: goto label_22e7f8;
        case 0x22e7fcu: goto label_22e7fc;
        case 0x22e800u: goto label_22e800;
        case 0x22e804u: goto label_22e804;
        case 0x22e808u: goto label_22e808;
        case 0x22e80cu: goto label_22e80c;
        case 0x22e810u: goto label_22e810;
        case 0x22e814u: goto label_22e814;
        case 0x22e818u: goto label_22e818;
        case 0x22e81cu: goto label_22e81c;
        case 0x22e820u: goto label_22e820;
        case 0x22e824u: goto label_22e824;
        case 0x22e828u: goto label_22e828;
        case 0x22e82cu: goto label_22e82c;
        case 0x22e830u: goto label_22e830;
        case 0x22e834u: goto label_22e834;
        case 0x22e838u: goto label_22e838;
        case 0x22e83cu: goto label_22e83c;
        case 0x22e840u: goto label_22e840;
        case 0x22e844u: goto label_22e844;
        default: break;
    }

    ctx->pc = 0x22e610u;

label_22e610:
    // 0x22e610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22e614:
    // 0x22e614: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22e614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_22e618:
    // 0x22e618: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x22e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_22e61c:
    // 0x22e61c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e620:
    // 0x22e620: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x22e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_22e624:
    // 0x22e624: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e628:
    // 0x22e628: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x22e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_22e62c:
    // 0x22e62c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22e62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22e630:
    // 0x22e630: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22e634:
    // 0x22e634: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22e638:
    // 0x22e638: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x22e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_22e63c:
    // 0x22e63c: 0xc0e4060  jal         func_390180
label_22e640:
    if (ctx->pc == 0x22E640u) {
        ctx->pc = 0x22E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E63Cu;
        // 0x22e640: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E644u;
        goto label_22e644;
    }
    ctx->pc = 0x22E63Cu;
    SET_GPR_U32(ctx, 31, 0x22E644u);
    ctx->pc = 0x22E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E63Cu;
    // 0x22e640: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22E63Cu, 0x22E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E644u;
label_22e644:
    // 0x22e644: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22e648:
    if (ctx->pc == 0x22E648u) {
        ctx->pc = 0x22E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E644u;
        // 0x22e648: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E64Cu;
        goto label_22e64c;
    }
    ctx->pc = 0x22E644u;
    {
        const bool branch_taken_0x22e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e644) {
            ctx->pc = 0x22E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E644u;
            // 0x22e648: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E65Cu;
            goto label_22e65c;
        }
    }
    ctx->pc = 0x22E64Cu;
label_22e64c:
    // 0x22e64c: 0xc089c18  jal         func_227060
label_22e650:
    if (ctx->pc == 0x22E650u) {
        ctx->pc = 0x22E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E64Cu;
        // 0x22e650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E654u;
        goto label_22e654;
    }
    ctx->pc = 0x22E64Cu;
    SET_GPR_U32(ctx, 31, 0x22E654u);
    ctx->pc = 0x22E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E64Cu;
    // 0x22e650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x22E64Cu, 0x22E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E654u;
label_22e654:
    // 0x22e654: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_22e658:
    if (ctx->pc == 0x22E658u) {
        ctx->pc = 0x22E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E654u;
        // 0x22e658: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E65Cu;
        goto label_22e65c;
    }
    ctx->pc = 0x22E654u;
    {
        const bool branch_taken_0x22e654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e654) {
            ctx->pc = 0x22E658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E654u;
            // 0x22e658: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E65Cu;
            goto label_22e65c;
        }
    }
    ctx->pc = 0x22E65Cu;
label_22e65c:
    // 0x22e65c: 0x16000074  bnez        $s0, . + 4 + (0x74 << 2)
label_22e660:
    if (ctx->pc == 0x22E660u) {
        ctx->pc = 0x22E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E65Cu;
        // 0x22e660: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E664u;
        goto label_22e664;
    }
    ctx->pc = 0x22E65Cu;
    {
        const bool branch_taken_0x22e65c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E65Cu;
        // 0x22e660: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e65c) {
            ctx->pc = 0x22E830u;
            goto label_22e830;
        }
    }
    ctx->pc = 0x22E664u;
label_22e664:
    // 0x22e664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e668:
    // 0x22e668: 0xc089988  jal         func_226620
label_22e66c:
    if (ctx->pc == 0x22E66Cu) {
        ctx->pc = 0x22E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E668u;
        // 0x22e66c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E670u;
        goto label_22e670;
    }
    ctx->pc = 0x22E668u;
    SET_GPR_U32(ctx, 31, 0x22E670u);
    ctx->pc = 0x22E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E668u;
    // 0x22e66c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22E668u, 0x22E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E670u;
label_22e670:
    // 0x22e670: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22e670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22e674:
    // 0x22e674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e678:
    // 0x22e678: 0xc089974  jal         func_2265D0
label_22e67c:
    if (ctx->pc == 0x22E67Cu) {
        ctx->pc = 0x22E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E678u;
        // 0x22e67c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E680u;
        goto label_22e680;
    }
    ctx->pc = 0x22E678u;
    SET_GPR_U32(ctx, 31, 0x22E680u);
    ctx->pc = 0x22E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E678u;
    // 0x22e67c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22E678u, 0x22E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E680u;
label_22e680:
    // 0x22e680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e684:
    // 0x22e684: 0xc0899aa  jal         func_2266A8
label_22e688:
    if (ctx->pc == 0x22E688u) {
        ctx->pc = 0x22E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E684u;
        // 0x22e688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E68Cu;
        goto label_22e68c;
    }
    ctx->pc = 0x22E684u;
    SET_GPR_U32(ctx, 31, 0x22E68Cu);
    ctx->pc = 0x22E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E684u;
    // 0x22e688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x22E684u, 0x22E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E68Cu;
label_22e68c:
    // 0x22e68c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22e690:
    // 0x22e690: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22e694:
    // 0x22e694: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22e698:
    // 0x22e698: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22e698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22e69c:
    // 0x22e69c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e6a0:
    // 0x22e6a0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22e6a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22e6a4:
    // 0x22e6a4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22e6a8:
    // 0x22e6a8: 0x40f809  jalr        $v0
label_22e6ac:
    if (ctx->pc == 0x22E6ACu) {
        ctx->pc = 0x22E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6A8u;
        // 0x22e6ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6B0u;
        goto label_22e6b0;
    }
    ctx->pc = 0x22E6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E6B0u);
        ctx->pc = 0x22E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6A8u;
        // 0x22e6ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E6A8u, 0x22E6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E6B0u;
label_22e6b0:
    // 0x22e6b0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22e6b4:
    // 0x22e6b4: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22e6b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22e6b8:
    // 0x22e6b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22e6bc:
    if (ctx->pc == 0x22E6BCu) {
        ctx->pc = 0x22E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6B8u;
        // 0x22e6bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6C0u;
        goto label_22e6c0;
    }
    ctx->pc = 0x22E6B8u;
    {
        const bool branch_taken_0x22e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6B8u;
        // 0x22e6bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6b8) {
            ctx->pc = 0x22E6CCu;
            goto label_22e6cc;
        }
    }
    ctx->pc = 0x22E6C0u;
label_22e6c0:
    // 0x22e6c0: 0xc107444  jal         func_41D110
label_22e6c4:
    if (ctx->pc == 0x22E6C4u) {
        ctx->pc = 0x22E6C8u;
        goto label_22e6c8;
    }
    ctx->pc = 0x22E6C0u;
    SET_GPR_U32(ctx, 31, 0x22E6C8u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22E6C0u, 0x22E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6C8u;
label_22e6c8:
    // 0x22e6c8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22e6c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e6cc:
    // 0x22e6cc: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_22e6d0:
    if (ctx->pc == 0x22E6D0u) {
        ctx->pc = 0x22E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6CCu;
        // 0x22e6d0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6D4u;
        goto label_22e6d4;
    }
    ctx->pc = 0x22E6CCu;
    {
        const bool branch_taken_0x22e6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e6cc) {
            ctx->pc = 0x22E6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E6CCu;
            // 0x22e6d0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E744u;
            goto label_22e744;
        }
    }
    ctx->pc = 0x22E6D4u;
label_22e6d4:
    // 0x22e6d4: 0xc073a8e  jal         func_1CEA38
label_22e6d8:
    if (ctx->pc == 0x22E6D8u) {
        ctx->pc = 0x22E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6D4u;
        // 0x22e6d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6DCu;
        goto label_22e6dc;
    }
    ctx->pc = 0x22E6D4u;
    SET_GPR_U32(ctx, 31, 0x22E6DCu);
    ctx->pc = 0x22E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6D4u;
    // 0x22e6d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22E6D4u, 0x22E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6DCu;
label_22e6dc:
    // 0x22e6dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_22e6e0:
    if (ctx->pc == 0x22E6E0u) {
        ctx->pc = 0x22E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6DCu;
        // 0x22e6e0: 0x8e11489c  lw          $s1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6E4u;
        goto label_22e6e4;
    }
    ctx->pc = 0x22E6DCu;
    {
        const bool branch_taken_0x22e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6DCu;
        // 0x22e6e0: 0x8e11489c  lw          $s1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6dc) {
            ctx->pc = 0x22E740u;
            goto label_22e740;
        }
    }
    ctx->pc = 0x22E6E4u;
label_22e6e4:
    // 0x22e6e4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x22e6e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_22e6e8:
    // 0x22e6e8: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x22e6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
label_22e6ec:
    // 0x22e6ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22e6ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22e6f0:
    // 0x22e6f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22e6f4:
    // 0x22e6f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22e6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22e6f8:
    // 0x22e6f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22e6fc:
    if (ctx->pc == 0x22E6FCu) {
        ctx->pc = 0x22E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6F8u;
        // 0x22e6fc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E700u;
        goto label_22e700;
    }
    ctx->pc = 0x22E6F8u;
    {
        const bool branch_taken_0x22e6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6F8u;
        // 0x22e6fc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6f8) {
            ctx->pc = 0x22E744u;
            goto label_22e744;
        }
    }
    ctx->pc = 0x22E700u;
label_22e700:
    // 0x22e700: 0xc136ad6  jal         func_4DAB58
label_22e704:
    if (ctx->pc == 0x22E704u) {
        ctx->pc = 0x22E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E700u;
        // 0x22e704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E708u;
        goto label_22e708;
    }
    ctx->pc = 0x22E700u;
    SET_GPR_U32(ctx, 31, 0x22E708u);
    ctx->pc = 0x22E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E700u;
    // 0x22e704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x22E700u, 0x22E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E708u;
label_22e708:
    // 0x22e708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e70c:
    // 0x22e70c: 0xc136ad4  jal         func_4DAB50
label_22e710:
    if (ctx->pc == 0x22E710u) {
        ctx->pc = 0x22E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E70Cu;
        // 0x22e710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E714u;
        goto label_22e714;
    }
    ctx->pc = 0x22E70Cu;
    SET_GPR_U32(ctx, 31, 0x22E714u);
    ctx->pc = 0x22E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E70Cu;
    // 0x22e710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22E70Cu, 0x22E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E714u;
label_22e714:
    // 0x22e714: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_22e718:
    // 0x22e718: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x22e718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_22e71c:
    // 0x22e71c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22e71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22e720:
    // 0x22e720: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22e720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22e724:
    // 0x22e724: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22e728:
    // 0x22e728: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_22e72c:
    if (ctx->pc == 0x22E72Cu) {
        ctx->pc = 0x22E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E728u;
        // 0x22e72c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E730u;
        goto label_22e730;
    }
    ctx->pc = 0x22E728u;
    {
        const bool branch_taken_0x22e728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E728u;
        // 0x22e72c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e728) {
            ctx->pc = 0x22E744u;
            goto label_22e744;
        }
    }
    ctx->pc = 0x22E730u;
label_22e730:
    // 0x22e730: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22e730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22e734:
    // 0x22e734: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x22e734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22e738:
    // 0x22e738: 0xc07387a  jal         func_1CE1E8
label_22e73c:
    if (ctx->pc == 0x22E73Cu) {
        ctx->pc = 0x22E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E738u;
        // 0x22e73c: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E740u;
        goto label_22e740;
    }
    ctx->pc = 0x22E738u;
    SET_GPR_U32(ctx, 31, 0x22E740u);
    ctx->pc = 0x22E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E738u;
    // 0x22e73c: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22E738u, 0x22E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E740u;
label_22e740:
    // 0x22e740: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22e740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22e744:
    // 0x22e744: 0xc0e8b48  jal         func_3A2D20
label_22e748:
    if (ctx->pc == 0x22E748u) {
        ctx->pc = 0x22E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E744u;
        // 0x22e748: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E74Cu;
        goto label_22e74c;
    }
    ctx->pc = 0x22E744u;
    SET_GPR_U32(ctx, 31, 0x22E74Cu);
    ctx->pc = 0x22E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E744u;
    // 0x22e748: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x22E744u, 0x22E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E74Cu;
label_22e74c:
    // 0x22e74c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e750:
    // 0x22e750: 0xc0e8b70  jal         func_3A2DC0
label_22e754:
    if (ctx->pc == 0x22E754u) {
        ctx->pc = 0x22E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E750u;
        // 0x22e754: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E758u;
        goto label_22e758;
    }
    ctx->pc = 0x22E750u;
    SET_GPR_U32(ctx, 31, 0x22E758u);
    ctx->pc = 0x22E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E750u;
    // 0x22e754: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x22E750u, 0x22E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E758u;
label_22e758:
    // 0x22e758: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e75c:
    // 0x22e75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e760:
    // 0x22e760: 0xc0e8b80  jal         func_3A2E00
label_22e764:
    if (ctx->pc == 0x22E764u) {
        ctx->pc = 0x22E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E760u;
        // 0x22e764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E768u;
        goto label_22e768;
    }
    ctx->pc = 0x22E760u;
    SET_GPR_U32(ctx, 31, 0x22E768u);
    ctx->pc = 0x22E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E760u;
    // 0x22e764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x22E760u, 0x22E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E768u;
label_22e768:
    // 0x22e768: 0xc0e8b50  jal         func_3A2D40
label_22e76c:
    if (ctx->pc == 0x22E76Cu) {
        ctx->pc = 0x22E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E768u;
        // 0x22e76c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E770u;
        goto label_22e770;
    }
    ctx->pc = 0x22E768u;
    SET_GPR_U32(ctx, 31, 0x22E770u);
    ctx->pc = 0x22E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E768u;
    // 0x22e76c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x22E768u, 0x22E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E770u;
label_22e770:
    // 0x22e770: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x22e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_22e774:
    // 0x22e774: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e778:
    // 0x22e778: 0x2447bfd8  addiu       $a3, $v0, -0x4028
    ctx->pc = 0x22e778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950872));
label_22e77c:
    // 0x22e77c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x22e77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_22e780:
    // 0x22e780: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x22e780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_22e784:
    // 0x22e784: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x22e784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_22e788:
    // 0x22e788: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x22e788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22e78c:
    // 0x22e78c: 0xc0e8b48  jal         func_3A2D20
label_22e790:
    if (ctx->pc == 0x22E790u) {
        ctx->pc = 0x22E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E78Cu;
        // 0x22e790: 0x2451bfd8  addiu       $s1, $v0, -0x4028 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E794u;
        goto label_22e794;
    }
    ctx->pc = 0x22E78Cu;
    SET_GPR_U32(ctx, 31, 0x22E794u);
    ctx->pc = 0x22E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E78Cu;
    // 0x22e790: 0x2451bfd8  addiu       $s1, $v0, -0x4028 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x22E78Cu, 0x22E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E794u;
label_22e794:
    // 0x22e794: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e798:
    // 0x22e798: 0xc0e8b68  jal         func_3A2DA0
label_22e79c:
    if (ctx->pc == 0x22E79Cu) {
        ctx->pc = 0x22E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E798u;
        // 0x22e79c: 0x8e450640  lw          $a1, 0x640($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7A0u;
        goto label_22e7a0;
    }
    ctx->pc = 0x22E798u;
    SET_GPR_U32(ctx, 31, 0x22E7A0u);
    ctx->pc = 0x22E79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E798u;
    // 0x22e79c: 0x8e450640  lw          $a1, 0x640($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x22E798u, 0x22E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7A0u;
label_22e7a0:
    // 0x22e7a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e7a4:
    // 0x22e7a4: 0xc0e8b70  jal         func_3A2DC0
label_22e7a8:
    if (ctx->pc == 0x22E7A8u) {
        ctx->pc = 0x22E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A4u;
        // 0x22e7a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7ACu;
        goto label_22e7ac;
    }
    ctx->pc = 0x22E7A4u;
    SET_GPR_U32(ctx, 31, 0x22E7ACu);
    ctx->pc = 0x22E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7A4u;
    // 0x22e7a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x22E7A4u, 0x22E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7ACu;
label_22e7ac:
    // 0x22e7ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e7b0:
    // 0x22e7b0: 0xc0e8b68  jal         func_3A2DA0
label_22e7b4:
    if (ctx->pc == 0x22E7B4u) {
        ctx->pc = 0x22E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7B0u;
        // 0x22e7b4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7B8u;
        goto label_22e7b8;
    }
    ctx->pc = 0x22E7B0u;
    SET_GPR_U32(ctx, 31, 0x22E7B8u);
    ctx->pc = 0x22E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7B0u;
    // 0x22e7b4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x22E7B0u, 0x22E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7B8u;
label_22e7b8:
    // 0x22e7b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x22e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_22e7bc:
    // 0x22e7bc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22e7c0:
    // 0x22e7c0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_22e7c4:
    // 0x22e7c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22e7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22e7c8:
    // 0x22e7c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x22e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_22e7cc:
    // 0x22e7cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22e7d0:
    // 0x22e7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e7d4:
    // 0x22e7d4: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x22e7d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_22e7d8:
    // 0x22e7d8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22e7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_22e7dc:
    // 0x22e7dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e7e0:
    // 0x22e7e0: 0xc0e8b58  jal         func_3A2D60
label_22e7e4:
    if (ctx->pc == 0x22E7E4u) {
        ctx->pc = 0x22E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7E0u;
        // 0x22e7e4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7E8u;
        goto label_22e7e8;
    }
    ctx->pc = 0x22E7E0u;
    SET_GPR_U32(ctx, 31, 0x22E7E8u);
    ctx->pc = 0x22E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7E0u;
    // 0x22e7e4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x22E7E0u, 0x22E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7E8u;
label_22e7e8:
    // 0x22e7e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e7ec:
    // 0x22e7ec: 0xc0e8b58  jal         func_3A2D60
label_22e7f0:
    if (ctx->pc == 0x22E7F0u) {
        ctx->pc = 0x22E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7ECu;
        // 0x22e7f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7F4u;
        goto label_22e7f4;
    }
    ctx->pc = 0x22E7ECu;
    SET_GPR_U32(ctx, 31, 0x22E7F4u);
    ctx->pc = 0x22E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7ECu;
    // 0x22e7f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x22E7ECu, 0x22E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7F4u;
label_22e7f4:
    // 0x22e7f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e7f8:
    // 0x22e7f8: 0xc0e8b68  jal         func_3A2DA0
label_22e7fc:
    if (ctx->pc == 0x22E7FCu) {
        ctx->pc = 0x22E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7F8u;
        // 0x22e7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E800u;
        goto label_22e800;
    }
    ctx->pc = 0x22E7F8u;
    SET_GPR_U32(ctx, 31, 0x22E800u);
    ctx->pc = 0x22E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7F8u;
    // 0x22e7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x22E7F8u, 0x22E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E800u;
label_22e800:
    // 0x22e800: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22e804:
    // 0x22e804: 0xc0e8b90  jal         func_3A2E40
label_22e808:
    if (ctx->pc == 0x22E808u) {
        ctx->pc = 0x22E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E804u;
        // 0x22e808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E80Cu;
        goto label_22e80c;
    }
    ctx->pc = 0x22E804u;
    SET_GPR_U32(ctx, 31, 0x22E80Cu);
    ctx->pc = 0x22E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E804u;
    // 0x22e808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x22E804u, 0x22E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E80Cu;
label_22e80c:
    // 0x22e80c: 0xc0e8b50  jal         func_3A2D40
label_22e810:
    if (ctx->pc == 0x22E810u) {
        ctx->pc = 0x22E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E80Cu;
        // 0x22e810: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E814u;
        goto label_22e814;
    }
    ctx->pc = 0x22E80Cu;
    SET_GPR_U32(ctx, 31, 0x22E814u);
    ctx->pc = 0x22E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E80Cu;
    // 0x22e810: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x22E80Cu, 0x22E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E814u;
label_22e814:
    // 0x22e814: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x22e814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_22e818:
    // 0x22e818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e81c:
    // 0x22e81c: 0xc087b94  jal         func_21EE50
label_22e820:
    if (ctx->pc == 0x22E820u) {
        ctx->pc = 0x22E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E81Cu;
        // 0x22e820: 0x24a5bfe0  addiu       $a1, $a1, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E824u;
        goto label_22e824;
    }
    ctx->pc = 0x22E81Cu;
    SET_GPR_U32(ctx, 31, 0x22E824u);
    ctx->pc = 0x22E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E81Cu;
    // 0x22e820: 0x24a5bfe0  addiu       $a1, $a1, -0x4020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EE50u, 0x22E81Cu, 0x22E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E824u;
label_22e824:
    // 0x22e824: 0xc08e3d4  jal         func_238F50
label_22e828:
    if (ctx->pc == 0x22E828u) {
        ctx->pc = 0x22E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E824u;
        // 0x22e828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E82Cu;
        goto label_22e82c;
    }
    ctx->pc = 0x22E824u;
    SET_GPR_U32(ctx, 31, 0x22E82Cu);
    ctx->pc = 0x22E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E824u;
    // 0x22e828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238F50u, 0x22E824u, 0x22E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E82Cu;
label_22e82c:
    // 0x22e82c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22e82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22e830:
    // 0x22e830: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x22e830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22e834:
    // 0x22e834: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x22e834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22e838:
    // 0x22e838: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x22e838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22e83c:
    // 0x22e83c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e840:
    // 0x22e840: 0x3e00008  jr          $ra
label_22e844:
    if (ctx->pc == 0x22E844u) {
        ctx->pc = 0x22E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E840u;
        // 0x22e844: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E848u;
        goto label_fallthrough_0x22e840;
    }
    ctx->pc = 0x22E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E840u;
        // 0x22e844: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e840:
    ctx->pc = 0x22E848u;
}
