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

// Function: sub_0047E610
// Address: 0x47e610 - 0x47e820
void sub_0047E610_0x47e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E610_0x47e610");
#endif

    switch (ctx->pc) {
        case 0x47e610u: goto label_47e610;
        case 0x47e614u: goto label_47e614;
        case 0x47e618u: goto label_47e618;
        case 0x47e61cu: goto label_47e61c;
        case 0x47e620u: goto label_47e620;
        case 0x47e624u: goto label_47e624;
        case 0x47e628u: goto label_47e628;
        case 0x47e62cu: goto label_47e62c;
        case 0x47e630u: goto label_47e630;
        case 0x47e634u: goto label_47e634;
        case 0x47e638u: goto label_47e638;
        case 0x47e63cu: goto label_47e63c;
        case 0x47e640u: goto label_47e640;
        case 0x47e644u: goto label_47e644;
        case 0x47e648u: goto label_47e648;
        case 0x47e64cu: goto label_47e64c;
        case 0x47e650u: goto label_47e650;
        case 0x47e654u: goto label_47e654;
        case 0x47e658u: goto label_47e658;
        case 0x47e65cu: goto label_47e65c;
        case 0x47e660u: goto label_47e660;
        case 0x47e664u: goto label_47e664;
        case 0x47e668u: goto label_47e668;
        case 0x47e66cu: goto label_47e66c;
        case 0x47e670u: goto label_47e670;
        case 0x47e674u: goto label_47e674;
        case 0x47e678u: goto label_47e678;
        case 0x47e67cu: goto label_47e67c;
        case 0x47e680u: goto label_47e680;
        case 0x47e684u: goto label_47e684;
        case 0x47e688u: goto label_47e688;
        case 0x47e68cu: goto label_47e68c;
        case 0x47e690u: goto label_47e690;
        case 0x47e694u: goto label_47e694;
        case 0x47e698u: goto label_47e698;
        case 0x47e69cu: goto label_47e69c;
        case 0x47e6a0u: goto label_47e6a0;
        case 0x47e6a4u: goto label_47e6a4;
        case 0x47e6a8u: goto label_47e6a8;
        case 0x47e6acu: goto label_47e6ac;
        case 0x47e6b0u: goto label_47e6b0;
        case 0x47e6b4u: goto label_47e6b4;
        case 0x47e6b8u: goto label_47e6b8;
        case 0x47e6bcu: goto label_47e6bc;
        case 0x47e6c0u: goto label_47e6c0;
        case 0x47e6c4u: goto label_47e6c4;
        case 0x47e6c8u: goto label_47e6c8;
        case 0x47e6ccu: goto label_47e6cc;
        case 0x47e6d0u: goto label_47e6d0;
        case 0x47e6d4u: goto label_47e6d4;
        case 0x47e6d8u: goto label_47e6d8;
        case 0x47e6dcu: goto label_47e6dc;
        case 0x47e6e0u: goto label_47e6e0;
        case 0x47e6e4u: goto label_47e6e4;
        case 0x47e6e8u: goto label_47e6e8;
        case 0x47e6ecu: goto label_47e6ec;
        case 0x47e6f0u: goto label_47e6f0;
        case 0x47e6f4u: goto label_47e6f4;
        case 0x47e6f8u: goto label_47e6f8;
        case 0x47e6fcu: goto label_47e6fc;
        case 0x47e700u: goto label_47e700;
        case 0x47e704u: goto label_47e704;
        case 0x47e708u: goto label_47e708;
        case 0x47e70cu: goto label_47e70c;
        case 0x47e710u: goto label_47e710;
        case 0x47e714u: goto label_47e714;
        case 0x47e718u: goto label_47e718;
        case 0x47e71cu: goto label_47e71c;
        case 0x47e720u: goto label_47e720;
        case 0x47e724u: goto label_47e724;
        case 0x47e728u: goto label_47e728;
        case 0x47e72cu: goto label_47e72c;
        case 0x47e730u: goto label_47e730;
        case 0x47e734u: goto label_47e734;
        case 0x47e738u: goto label_47e738;
        case 0x47e73cu: goto label_47e73c;
        case 0x47e740u: goto label_47e740;
        case 0x47e744u: goto label_47e744;
        case 0x47e748u: goto label_47e748;
        case 0x47e74cu: goto label_47e74c;
        case 0x47e750u: goto label_47e750;
        case 0x47e754u: goto label_47e754;
        case 0x47e758u: goto label_47e758;
        case 0x47e75cu: goto label_47e75c;
        case 0x47e760u: goto label_47e760;
        case 0x47e764u: goto label_47e764;
        case 0x47e768u: goto label_47e768;
        case 0x47e76cu: goto label_47e76c;
        case 0x47e770u: goto label_47e770;
        case 0x47e774u: goto label_47e774;
        case 0x47e778u: goto label_47e778;
        case 0x47e77cu: goto label_47e77c;
        case 0x47e780u: goto label_47e780;
        case 0x47e784u: goto label_47e784;
        case 0x47e788u: goto label_47e788;
        case 0x47e78cu: goto label_47e78c;
        case 0x47e790u: goto label_47e790;
        case 0x47e794u: goto label_47e794;
        case 0x47e798u: goto label_47e798;
        case 0x47e79cu: goto label_47e79c;
        case 0x47e7a0u: goto label_47e7a0;
        case 0x47e7a4u: goto label_47e7a4;
        case 0x47e7a8u: goto label_47e7a8;
        case 0x47e7acu: goto label_47e7ac;
        case 0x47e7b0u: goto label_47e7b0;
        case 0x47e7b4u: goto label_47e7b4;
        case 0x47e7b8u: goto label_47e7b8;
        case 0x47e7bcu: goto label_47e7bc;
        case 0x47e7c0u: goto label_47e7c0;
        case 0x47e7c4u: goto label_47e7c4;
        case 0x47e7c8u: goto label_47e7c8;
        case 0x47e7ccu: goto label_47e7cc;
        case 0x47e7d0u: goto label_47e7d0;
        case 0x47e7d4u: goto label_47e7d4;
        case 0x47e7d8u: goto label_47e7d8;
        case 0x47e7dcu: goto label_47e7dc;
        case 0x47e7e0u: goto label_47e7e0;
        case 0x47e7e4u: goto label_47e7e4;
        case 0x47e7e8u: goto label_47e7e8;
        case 0x47e7ecu: goto label_47e7ec;
        case 0x47e7f0u: goto label_47e7f0;
        case 0x47e7f4u: goto label_47e7f4;
        case 0x47e7f8u: goto label_47e7f8;
        case 0x47e7fcu: goto label_47e7fc;
        case 0x47e800u: goto label_47e800;
        case 0x47e804u: goto label_47e804;
        case 0x47e808u: goto label_47e808;
        case 0x47e80cu: goto label_47e80c;
        case 0x47e810u: goto label_47e810;
        case 0x47e814u: goto label_47e814;
        case 0x47e818u: goto label_47e818;
        case 0x47e81cu: goto label_47e81c;
        default: break;
    }

    ctx->pc = 0x47e610u;

label_47e610:
    // 0x47e610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47e614:
    // 0x47e614: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47e614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47e618:
    // 0x47e618: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x47e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_47e61c:
    // 0x47e61c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x47e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_47e620:
    // 0x47e620: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x47e620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47e624:
    // 0x47e624: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x47e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_47e628:
    // 0x47e628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47e628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47e62c:
    // 0x47e62c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47e630:
    // 0x47e630: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x47e630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47e634:
    // 0x47e634: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x47e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_47e638:
    // 0x47e638: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x47e638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e63c:
    // 0x47e63c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x47e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_47e640:
    // 0x47e640: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x47e640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_47e644:
    // 0x47e644: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x47e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_47e648:
    // 0x47e648: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x47e648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e64c:
    // 0x47e64c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47e650:
    // 0x47e650: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e654:
    // 0x47e654: 0x0  nop
    ctx->pc = 0x47e654u;
    // NOP
label_47e658:
    // 0x47e658: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x47e658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_47e65c:
    // 0x47e65c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47e660:
    // 0x47e660: 0xc120154  jal         func_480550
label_47e664:
    if (ctx->pc == 0x47E664u) {
        ctx->pc = 0x47E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E660u;
        // 0x47e664: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E668u;
        goto label_47e668;
    }
    ctx->pc = 0x47E660u;
    SET_GPR_U32(ctx, 31, 0x47E668u);
    ctx->pc = 0x47E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E660u;
    // 0x47e664: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480550u, 0x47E660u, 0x47E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E668u;
label_47e668:
    // 0x47e668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47e668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e66c:
    // 0x47e66c: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_47e670:
    if (ctx->pc == 0x47E670u) {
        ctx->pc = 0x47E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E66Cu;
        // 0x47e670: 0x8f828938  lw          $v0, -0x76C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E674u;
        goto label_47e674;
    }
    ctx->pc = 0x47E66Cu;
    {
        const bool branch_taken_0x47e66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E66Cu;
        // 0x47e670: 0x8f828938  lw          $v0, -0x76C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e66c) {
            ctx->pc = 0x47E6ECu;
            goto label_47e6ec;
        }
    }
    ctx->pc = 0x47E674u;
label_47e674:
    // 0x47e674: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47e678:
    // 0x47e678: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x47e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_47e67c:
    // 0x47e67c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e680:
    // 0x47e680: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x47e680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_47e684:
    // 0x47e684: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e688:
    // 0x47e688: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47e68c:
    // 0x47e68c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x47e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_47e690:
    // 0x47e690: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x47e690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_47e694:
    // 0x47e694: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e698:
    // 0x47e698: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47e69c:
    // 0x47e69c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x47e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_47e6a0:
    // 0x47e6a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47e6a4:
    // 0x47e6a4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x47e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_47e6a8:
    // 0x47e6a8: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e6ac:
    // 0x47e6ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47e6b0:
    // 0x47e6b0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x47e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_47e6b4:
    // 0x47e6b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x47e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_47e6b8:
    // 0x47e6b8: 0xacb6000c  sw          $s6, 0xC($a1)
    ctx->pc = 0x47e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 22));
label_47e6bc:
    // 0x47e6bc: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x47e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
label_47e6c0:
    // 0x47e6c0: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x47e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
label_47e6c4:
    // 0x47e6c4: 0xacb30010  sw          $s3, 0x10($a1)
    ctx->pc = 0x47e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 19));
label_47e6c8:
    // 0x47e6c8: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e6cc:
    // 0x47e6cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_47e6d0:
    // 0x47e6d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x47e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47e6d4:
    // 0x47e6d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x47e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_47e6d8:
    // 0x47e6d8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_47e6dc:
    if (ctx->pc == 0x47E6DCu) {
        ctx->pc = 0x47E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E6D8u;
        // 0x47e6dc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E6E0u;
        goto label_47e6e0;
    }
    ctx->pc = 0x47E6D8u;
    {
        const bool branch_taken_0x47e6d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E6D8u;
        // 0x47e6dc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e6d8) {
            ctx->pc = 0x47E6E4u;
            goto label_47e6e4;
        }
    }
    ctx->pc = 0x47E6E0u;
label_47e6e0:
    // 0x47e6e0: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x47e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_47e6e4:
    // 0x47e6e4: 0x10000044  b           . + 4 + (0x44 << 2)
label_47e6e8:
    if (ctx->pc == 0x47E6E8u) {
        ctx->pc = 0x47E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E6E4u;
        // 0x47e6e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E6ECu;
        goto label_47e6ec;
    }
    ctx->pc = 0x47E6E4u;
    {
        const bool branch_taken_0x47e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E6E4u;
        // 0x47e6e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e6e4) {
            ctx->pc = 0x47E7F8u;
            goto label_47e7f8;
        }
    }
    ctx->pc = 0x47E6ECu;
label_47e6ec:
    // 0x47e6ec: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x47e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47e6f0:
    // 0x47e6f0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x47e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_47e6f4:
    // 0x47e6f4: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x47e6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47e6f8:
    // 0x47e6f8: 0x5203000e  beql        $s0, $v1, . + 4 + (0xE << 2)
label_47e6fc:
    if (ctx->pc == 0x47E6FCu) {
        ctx->pc = 0x47E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E6F8u;
        // 0x47e6fc: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E700u;
        goto label_47e700;
    }
    ctx->pc = 0x47E6F8u;
    {
        const bool branch_taken_0x47e6f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x47e6f8) {
            ctx->pc = 0x47E6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E6F8u;
            // 0x47e6fc: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E734u;
            goto label_47e734;
        }
    }
    ctx->pc = 0x47E700u;
label_47e700:
    // 0x47e700: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47e704:
    // 0x47e704: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_47e708:
    if (ctx->pc == 0x47E708u) {
        ctx->pc = 0x47E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E704u;
        // 0x47e708: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E70Cu;
        goto label_47e70c;
    }
    ctx->pc = 0x47E704u;
    {
        const bool branch_taken_0x47e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e704) {
            ctx->pc = 0x47E708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E704u;
            // 0x47e708: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E718u;
            goto label_47e718;
        }
    }
    ctx->pc = 0x47E70Cu;
label_47e70c:
    // 0x47e70c: 0x40f809  jalr        $v0
label_47e710:
    if (ctx->pc == 0x47E710u) {
        ctx->pc = 0x47E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E70Cu;
        // 0x47e710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E714u;
        goto label_47e714;
    }
    ctx->pc = 0x47E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E714u);
        ctx->pc = 0x47E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E70Cu;
        // 0x47e710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E70Cu, 0x47E714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E714u;
label_47e714:
    // 0x47e714: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e718:
    // 0x47e718: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_47e71c:
    if (ctx->pc == 0x47E71Cu) {
        ctx->pc = 0x47E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E718u;
        // 0x47e71c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E720u;
        goto label_47e720;
    }
    ctx->pc = 0x47E718u;
    {
        const bool branch_taken_0x47e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e718) {
            ctx->pc = 0x47E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E718u;
            // 0x47e71c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E720u;
            goto label_47e720;
        }
    }
    ctx->pc = 0x47E720u;
label_47e720:
    // 0x47e720: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e724:
    // 0x47e724: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_47e728:
    if (ctx->pc == 0x47E728u) {
        ctx->pc = 0x47E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E724u;
        // 0x47e728: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E72Cu;
        goto label_47e72c;
    }
    ctx->pc = 0x47E724u;
    {
        const bool branch_taken_0x47e724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e724) {
            ctx->pc = 0x47E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E724u;
            // 0x47e728: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E780u;
            goto label_47e780;
        }
    }
    ctx->pc = 0x47E72Cu;
label_47e72c:
    // 0x47e72c: 0x10000022  b           . + 4 + (0x22 << 2)
label_47e730:
    if (ctx->pc == 0x47E730u) {
        ctx->pc = 0x47E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E72Cu;
        // 0x47e730: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E734u;
        goto label_47e734;
    }
    ctx->pc = 0x47E72Cu;
    {
        const bool branch_taken_0x47e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E72Cu;
        // 0x47e730: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e72c) {
            ctx->pc = 0x47E7B8u;
            goto label_47e7b8;
        }
    }
    ctx->pc = 0x47E734u;
label_47e734:
    // 0x47e734: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x47e734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47e738:
    // 0x47e738: 0x52020021  beql        $s0, $v0, . + 4 + (0x21 << 2)
label_47e73c:
    if (ctx->pc == 0x47E73Cu) {
        ctx->pc = 0x47E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E738u;
        // 0x47e73c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E740u;
        goto label_47e740;
    }
    ctx->pc = 0x47E738u;
    {
        const bool branch_taken_0x47e738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x47e738) {
            ctx->pc = 0x47E73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E738u;
            // 0x47e73c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E7C0u;
            goto label_47e7c0;
        }
    }
    ctx->pc = 0x47E740u;
label_47e740:
    // 0x47e740: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x47e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_47e744:
    // 0x47e744: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x47e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47e748:
    // 0x47e748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47e74c:
    // 0x47e74c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x47e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_47e750:
    // 0x47e750: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47e754:
    // 0x47e754: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_47e758:
    if (ctx->pc == 0x47E758u) {
        ctx->pc = 0x47E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E754u;
        // 0x47e758: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E75Cu;
        goto label_47e75c;
    }
    ctx->pc = 0x47E754u;
    {
        const bool branch_taken_0x47e754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e754) {
            ctx->pc = 0x47E758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E754u;
            // 0x47e758: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E768u;
            goto label_47e768;
        }
    }
    ctx->pc = 0x47E75Cu;
label_47e75c:
    // 0x47e75c: 0x40f809  jalr        $v0
label_47e760:
    if (ctx->pc == 0x47E760u) {
        ctx->pc = 0x47E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E75Cu;
        // 0x47e760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E764u;
        goto label_47e764;
    }
    ctx->pc = 0x47E75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E764u);
        ctx->pc = 0x47E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E75Cu;
        // 0x47e760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E75Cu, 0x47E764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E764u;
label_47e764:
    // 0x47e764: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e768:
    // 0x47e768: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_47e76c:
    if (ctx->pc == 0x47E76Cu) {
        ctx->pc = 0x47E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E768u;
        // 0x47e76c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E770u;
        goto label_47e770;
    }
    ctx->pc = 0x47E768u;
    {
        const bool branch_taken_0x47e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e768) {
            ctx->pc = 0x47E76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E768u;
            // 0x47e76c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E770u;
            goto label_47e770;
        }
    }
    ctx->pc = 0x47E770u;
label_47e770:
    // 0x47e770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e774:
    // 0x47e774: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_47e778:
    if (ctx->pc == 0x47E778u) {
        ctx->pc = 0x47E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E774u;
        // 0x47e778: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E77Cu;
        goto label_47e77c;
    }
    ctx->pc = 0x47E774u;
    {
        const bool branch_taken_0x47e774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e774) {
            ctx->pc = 0x47E778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E774u;
            // 0x47e778: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E7B8u;
            goto label_47e7b8;
        }
    }
    ctx->pc = 0x47E77Cu;
label_47e77c:
    // 0x47e77c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e780:
    // 0x47e780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e784:
    // 0x47e784: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x47e784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_47e788:
    // 0x47e788: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47e788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e78c:
    // 0x47e78c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e790:
    // 0x47e790: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47e790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47e794:
    // 0x47e794: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e798:
    // 0x47e798: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x47e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47e79c:
    // 0x47e79c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_47e7a0:
    // 0x47e7a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x47e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47e7a4:
    // 0x47e7a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x47e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47e7a8:
    // 0x47e7a8: 0xc1201bc  jal         func_4806F0
label_47e7ac:
    if (ctx->pc == 0x47E7ACu) {
        ctx->pc = 0x47E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7A8u;
        // 0x47e7ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E7B0u;
        goto label_47e7b0;
    }
    ctx->pc = 0x47E7A8u;
    SET_GPR_U32(ctx, 31, 0x47E7B0u);
    ctx->pc = 0x47E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E7A8u;
    // 0x47e7ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4806F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4806F0u, 0x47E7A8u, 0x47E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E7B0u;
label_47e7b0:
    // 0x47e7b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_47e7b4:
    if (ctx->pc == 0x47E7B4u) {
        ctx->pc = 0x47E7B8u;
        goto label_47e7b8;
    }
    ctx->pc = 0x47E7B0u;
    {
        const bool branch_taken_0x47e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e7b0) {
            ctx->pc = 0x47E7C0u;
            goto label_47e7c0;
        }
    }
    ctx->pc = 0x47E7B8u;
label_47e7b8:
    // 0x47e7b8: 0x40f809  jalr        $v0
label_47e7bc:
    if (ctx->pc == 0x47E7BCu) {
        ctx->pc = 0x47E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7B8u;
        // 0x47e7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E7C0u;
        goto label_47e7c0;
    }
    ctx->pc = 0x47E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E7C0u);
        ctx->pc = 0x47E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7B8u;
        // 0x47e7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E7B8u, 0x47E7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E7C0u;
label_47e7c0:
    // 0x47e7c0: 0x1280ffa5  beqz        $s4, . + 4 + (-0x5B << 2)
label_47e7c4:
    if (ctx->pc == 0x47E7C4u) {
        ctx->pc = 0x47E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7C0u;
        // 0x47e7c4: 0x8f828938  lw          $v0, -0x76C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E7C8u;
        goto label_47e7c8;
    }
    ctx->pc = 0x47E7C0u;
    {
        const bool branch_taken_0x47e7c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7C0u;
        // 0x47e7c4: 0x8f828938  lw          $v0, -0x76C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e7c0) {
            ctx->pc = 0x47E658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e658;
        }
    }
    ctx->pc = 0x47E7C8u;
label_47e7c8:
    // 0x47e7c8: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_47e7cc:
    if (ctx->pc == 0x47E7CCu) {
        ctx->pc = 0x47E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7C8u;
        // 0x47e7cc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E7D0u;
        goto label_47e7d0;
    }
    ctx->pc = 0x47E7C8u;
    {
        const bool branch_taken_0x47e7c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e7c8) {
            ctx->pc = 0x47E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E7C8u;
            // 0x47e7cc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E7D0u;
            goto label_47e7d0;
        }
    }
    ctx->pc = 0x47E7D0u;
label_47e7d0:
    // 0x47e7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e7d4:
    // 0x47e7d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47e7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47e7d8:
    // 0x47e7d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47e7dc:
    // 0x47e7dc: 0xc11eff2  jal         func_47BFC8
label_47e7e0:
    if (ctx->pc == 0x47E7E0u) {
        ctx->pc = 0x47E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7DCu;
        // 0x47e7e0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E7E4u;
        goto label_47e7e4;
    }
    ctx->pc = 0x47E7DCu;
    SET_GPR_U32(ctx, 31, 0x47E7E4u);
    ctx->pc = 0x47E7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E7DCu;
    // 0x47e7e0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47E7DCu, 0x47E7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E7E4u;
label_47e7e4:
    // 0x47e7e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47e7e8:
    // 0x47e7e8: 0xc11f024  jal         func_47C090
label_47e7ec:
    if (ctx->pc == 0x47E7ECu) {
        ctx->pc = 0x47E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E7E8u;
        // 0x47e7ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E7F0u;
        goto label_47e7f0;
    }
    ctx->pc = 0x47E7E8u;
    SET_GPR_U32(ctx, 31, 0x47E7F0u);
    ctx->pc = 0x47E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E7E8u;
    // 0x47e7ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47E7E8u, 0x47E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E7F0u;
label_47e7f0:
    // 0x47e7f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47e7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e7f4:
    // 0x47e7f4: 0x0  nop
    ctx->pc = 0x47e7f4u;
    // NOP
label_47e7f8:
    // 0x47e7f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x47e7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47e7fc:
    // 0x47e7fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x47e7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47e800:
    // 0x47e800: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x47e800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47e804:
    // 0x47e804: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x47e804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47e808:
    // 0x47e808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47e808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47e80c:
    // 0x47e80c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x47e80cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47e810:
    // 0x47e810: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x47e810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e814:
    // 0x47e814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47e814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47e818:
    // 0x47e818: 0x3e00008  jr          $ra
label_47e81c:
    if (ctx->pc == 0x47E81Cu) {
        ctx->pc = 0x47E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E818u;
        // 0x47e81c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E820u;
        goto label_fallthrough_0x47e818;
    }
    ctx->pc = 0x47E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E818u;
        // 0x47e81c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47e818:
    ctx->pc = 0x47E820u;
}
