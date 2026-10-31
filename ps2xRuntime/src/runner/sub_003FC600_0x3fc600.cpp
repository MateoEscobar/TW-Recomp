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

// Function: sub_003FC600
// Address: 0x3fc600 - 0x3fc8d8
void sub_003FC600_0x3fc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC600_0x3fc600");
#endif

    switch (ctx->pc) {
        case 0x3fc600u: goto label_3fc600;
        case 0x3fc604u: goto label_3fc604;
        case 0x3fc608u: goto label_3fc608;
        case 0x3fc60cu: goto label_3fc60c;
        case 0x3fc610u: goto label_3fc610;
        case 0x3fc614u: goto label_3fc614;
        case 0x3fc618u: goto label_3fc618;
        case 0x3fc61cu: goto label_3fc61c;
        case 0x3fc620u: goto label_3fc620;
        case 0x3fc624u: goto label_3fc624;
        case 0x3fc628u: goto label_3fc628;
        case 0x3fc62cu: goto label_3fc62c;
        case 0x3fc630u: goto label_3fc630;
        case 0x3fc634u: goto label_3fc634;
        case 0x3fc638u: goto label_3fc638;
        case 0x3fc63cu: goto label_3fc63c;
        case 0x3fc640u: goto label_3fc640;
        case 0x3fc644u: goto label_3fc644;
        case 0x3fc648u: goto label_3fc648;
        case 0x3fc64cu: goto label_3fc64c;
        case 0x3fc650u: goto label_3fc650;
        case 0x3fc654u: goto label_3fc654;
        case 0x3fc658u: goto label_3fc658;
        case 0x3fc65cu: goto label_3fc65c;
        case 0x3fc660u: goto label_3fc660;
        case 0x3fc664u: goto label_3fc664;
        case 0x3fc668u: goto label_3fc668;
        case 0x3fc66cu: goto label_3fc66c;
        case 0x3fc670u: goto label_3fc670;
        case 0x3fc674u: goto label_3fc674;
        case 0x3fc678u: goto label_3fc678;
        case 0x3fc67cu: goto label_3fc67c;
        case 0x3fc680u: goto label_3fc680;
        case 0x3fc684u: goto label_3fc684;
        case 0x3fc688u: goto label_3fc688;
        case 0x3fc68cu: goto label_3fc68c;
        case 0x3fc690u: goto label_3fc690;
        case 0x3fc694u: goto label_3fc694;
        case 0x3fc698u: goto label_3fc698;
        case 0x3fc69cu: goto label_3fc69c;
        case 0x3fc6a0u: goto label_3fc6a0;
        case 0x3fc6a4u: goto label_3fc6a4;
        case 0x3fc6a8u: goto label_3fc6a8;
        case 0x3fc6acu: goto label_3fc6ac;
        case 0x3fc6b0u: goto label_3fc6b0;
        case 0x3fc6b4u: goto label_3fc6b4;
        case 0x3fc6b8u: goto label_3fc6b8;
        case 0x3fc6bcu: goto label_3fc6bc;
        case 0x3fc6c0u: goto label_3fc6c0;
        case 0x3fc6c4u: goto label_3fc6c4;
        case 0x3fc6c8u: goto label_3fc6c8;
        case 0x3fc6ccu: goto label_3fc6cc;
        case 0x3fc6d0u: goto label_3fc6d0;
        case 0x3fc6d4u: goto label_3fc6d4;
        case 0x3fc6d8u: goto label_3fc6d8;
        case 0x3fc6dcu: goto label_3fc6dc;
        case 0x3fc6e0u: goto label_3fc6e0;
        case 0x3fc6e4u: goto label_3fc6e4;
        case 0x3fc6e8u: goto label_3fc6e8;
        case 0x3fc6ecu: goto label_3fc6ec;
        case 0x3fc6f0u: goto label_3fc6f0;
        case 0x3fc6f4u: goto label_3fc6f4;
        case 0x3fc6f8u: goto label_3fc6f8;
        case 0x3fc6fcu: goto label_3fc6fc;
        case 0x3fc700u: goto label_3fc700;
        case 0x3fc704u: goto label_3fc704;
        case 0x3fc708u: goto label_3fc708;
        case 0x3fc70cu: goto label_3fc70c;
        case 0x3fc710u: goto label_3fc710;
        case 0x3fc714u: goto label_3fc714;
        case 0x3fc718u: goto label_3fc718;
        case 0x3fc71cu: goto label_3fc71c;
        case 0x3fc720u: goto label_3fc720;
        case 0x3fc724u: goto label_3fc724;
        case 0x3fc728u: goto label_3fc728;
        case 0x3fc72cu: goto label_3fc72c;
        case 0x3fc730u: goto label_3fc730;
        case 0x3fc734u: goto label_3fc734;
        case 0x3fc738u: goto label_3fc738;
        case 0x3fc73cu: goto label_3fc73c;
        case 0x3fc740u: goto label_3fc740;
        case 0x3fc744u: goto label_3fc744;
        case 0x3fc748u: goto label_3fc748;
        case 0x3fc74cu: goto label_3fc74c;
        case 0x3fc750u: goto label_3fc750;
        case 0x3fc754u: goto label_3fc754;
        case 0x3fc758u: goto label_3fc758;
        case 0x3fc75cu: goto label_3fc75c;
        case 0x3fc760u: goto label_3fc760;
        case 0x3fc764u: goto label_3fc764;
        case 0x3fc768u: goto label_3fc768;
        case 0x3fc76cu: goto label_3fc76c;
        case 0x3fc770u: goto label_3fc770;
        case 0x3fc774u: goto label_3fc774;
        case 0x3fc778u: goto label_3fc778;
        case 0x3fc77cu: goto label_3fc77c;
        case 0x3fc780u: goto label_3fc780;
        case 0x3fc784u: goto label_3fc784;
        case 0x3fc788u: goto label_3fc788;
        case 0x3fc78cu: goto label_3fc78c;
        case 0x3fc790u: goto label_3fc790;
        case 0x3fc794u: goto label_3fc794;
        case 0x3fc798u: goto label_3fc798;
        case 0x3fc79cu: goto label_3fc79c;
        case 0x3fc7a0u: goto label_3fc7a0;
        case 0x3fc7a4u: goto label_3fc7a4;
        case 0x3fc7a8u: goto label_3fc7a8;
        case 0x3fc7acu: goto label_3fc7ac;
        case 0x3fc7b0u: goto label_3fc7b0;
        case 0x3fc7b4u: goto label_3fc7b4;
        case 0x3fc7b8u: goto label_3fc7b8;
        case 0x3fc7bcu: goto label_3fc7bc;
        case 0x3fc7c0u: goto label_3fc7c0;
        case 0x3fc7c4u: goto label_3fc7c4;
        case 0x3fc7c8u: goto label_3fc7c8;
        case 0x3fc7ccu: goto label_3fc7cc;
        case 0x3fc7d0u: goto label_3fc7d0;
        case 0x3fc7d4u: goto label_3fc7d4;
        case 0x3fc7d8u: goto label_3fc7d8;
        case 0x3fc7dcu: goto label_3fc7dc;
        case 0x3fc7e0u: goto label_3fc7e0;
        case 0x3fc7e4u: goto label_3fc7e4;
        case 0x3fc7e8u: goto label_3fc7e8;
        case 0x3fc7ecu: goto label_3fc7ec;
        case 0x3fc7f0u: goto label_3fc7f0;
        case 0x3fc7f4u: goto label_3fc7f4;
        case 0x3fc7f8u: goto label_3fc7f8;
        case 0x3fc7fcu: goto label_3fc7fc;
        case 0x3fc800u: goto label_3fc800;
        case 0x3fc804u: goto label_3fc804;
        case 0x3fc808u: goto label_3fc808;
        case 0x3fc80cu: goto label_3fc80c;
        case 0x3fc810u: goto label_3fc810;
        case 0x3fc814u: goto label_3fc814;
        case 0x3fc818u: goto label_3fc818;
        case 0x3fc81cu: goto label_3fc81c;
        case 0x3fc820u: goto label_3fc820;
        case 0x3fc824u: goto label_3fc824;
        case 0x3fc828u: goto label_3fc828;
        case 0x3fc82cu: goto label_3fc82c;
        case 0x3fc830u: goto label_3fc830;
        case 0x3fc834u: goto label_3fc834;
        case 0x3fc838u: goto label_3fc838;
        case 0x3fc83cu: goto label_3fc83c;
        case 0x3fc840u: goto label_3fc840;
        case 0x3fc844u: goto label_3fc844;
        case 0x3fc848u: goto label_3fc848;
        case 0x3fc84cu: goto label_3fc84c;
        case 0x3fc850u: goto label_3fc850;
        case 0x3fc854u: goto label_3fc854;
        case 0x3fc858u: goto label_3fc858;
        case 0x3fc85cu: goto label_3fc85c;
        case 0x3fc860u: goto label_3fc860;
        case 0x3fc864u: goto label_3fc864;
        case 0x3fc868u: goto label_3fc868;
        case 0x3fc86cu: goto label_3fc86c;
        case 0x3fc870u: goto label_3fc870;
        case 0x3fc874u: goto label_3fc874;
        case 0x3fc878u: goto label_3fc878;
        case 0x3fc87cu: goto label_3fc87c;
        case 0x3fc880u: goto label_3fc880;
        case 0x3fc884u: goto label_3fc884;
        case 0x3fc888u: goto label_3fc888;
        case 0x3fc88cu: goto label_3fc88c;
        case 0x3fc890u: goto label_3fc890;
        case 0x3fc894u: goto label_3fc894;
        case 0x3fc898u: goto label_3fc898;
        case 0x3fc89cu: goto label_3fc89c;
        case 0x3fc8a0u: goto label_3fc8a0;
        case 0x3fc8a4u: goto label_3fc8a4;
        case 0x3fc8a8u: goto label_3fc8a8;
        case 0x3fc8acu: goto label_3fc8ac;
        case 0x3fc8b0u: goto label_3fc8b0;
        case 0x3fc8b4u: goto label_3fc8b4;
        case 0x3fc8b8u: goto label_3fc8b8;
        case 0x3fc8bcu: goto label_3fc8bc;
        case 0x3fc8c0u: goto label_3fc8c0;
        case 0x3fc8c4u: goto label_3fc8c4;
        case 0x3fc8c8u: goto label_3fc8c8;
        case 0x3fc8ccu: goto label_3fc8cc;
        case 0x3fc8d0u: goto label_3fc8d0;
        case 0x3fc8d4u: goto label_3fc8d4;
        default: break;
    }

    ctx->pc = 0x3fc600u;

label_3fc600:
    // 0x3fc600: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3fc600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3fc604:
    // 0x3fc604: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3fc604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3fc608:
    // 0x3fc608: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3fc608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3fc60c:
    // 0x3fc60c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fc60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc610:
    // 0x3fc610: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3fc610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3fc614:
    // 0x3fc614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fc614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc618:
    // 0x3fc618: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3fc618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3fc61c:
    // 0x3fc61c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3fc61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3fc620:
    // 0x3fc620: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3fc620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3fc624:
    // 0x3fc624: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3fc624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3fc628:
    // 0x3fc628: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3fc628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3fc62c:
    // 0x3fc62c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fc630:
    // 0x3fc630: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fc630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fc634:
    // 0x3fc634: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fc634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fc638:
    // 0x3fc638: 0x40f809  jalr        $v0
label_3fc63c:
    if (ctx->pc == 0x3FC63Cu) {
        ctx->pc = 0x3FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC638u;
        // 0x3fc63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC640u;
        goto label_3fc640;
    }
    ctx->pc = 0x3FC638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FC640u);
        ctx->pc = 0x3FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC638u;
        // 0x3fc63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC638u, 0x3FC640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC640u;
label_3fc640:
    // 0x3fc640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fc640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc644:
    // 0x3fc644: 0xc0ea14c  jal         func_3A8530
label_3fc648:
    if (ctx->pc == 0x3FC648u) {
        ctx->pc = 0x3FC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC644u;
        // 0x3fc648: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC64Cu;
        goto label_3fc64c;
    }
    ctx->pc = 0x3FC644u;
    SET_GPR_U32(ctx, 31, 0x3FC64Cu);
    ctx->pc = 0x3FC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC644u;
    // 0x3fc648: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FC644u, 0x3FC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC64Cu;
label_3fc64c:
    // 0x3fc64c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fc64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fc650:
    // 0x3fc650: 0xc0ea12a  jal         func_3A84A8
label_3fc654:
    if (ctx->pc == 0x3FC654u) {
        ctx->pc = 0x3FC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC650u;
        // 0x3fc654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC658u;
        goto label_3fc658;
    }
    ctx->pc = 0x3FC650u;
    SET_GPR_U32(ctx, 31, 0x3FC658u);
    ctx->pc = 0x3FC654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC650u;
    // 0x3fc654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FC650u, 0x3FC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC658u;
label_3fc658:
    // 0x3fc658: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fc658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc65c:
    // 0x3fc65c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fc65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc660:
    // 0x3fc660: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fc660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fc664:
    // 0x3fc664: 0xc0ea12a  jal         func_3A84A8
label_3fc668:
    if (ctx->pc == 0x3FC668u) {
        ctx->pc = 0x3FC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC664u;
        // 0x3fc668: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC66Cu;
        goto label_3fc66c;
    }
    ctx->pc = 0x3FC664u;
    SET_GPR_U32(ctx, 31, 0x3FC66Cu);
    ctx->pc = 0x3FC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC664u;
    // 0x3fc668: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FC664u, 0x3FC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC66Cu;
label_3fc66c:
    // 0x3fc66c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3fc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3fc670:
    // 0x3fc670: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3fc670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc674:
    // 0x3fc674: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3fc674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3fc678:
    // 0x3fc678: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3fc678u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc67c:
    // 0x3fc67c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3fc67cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc680:
    // 0x3fc680: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3fc680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3fc684:
    // 0x3fc684: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fc684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fc688:
    // 0x3fc688: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3fc688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3fc68c:
    // 0x3fc68c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3fc68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3fc690:
    // 0x3fc690: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc694:
    // 0x3fc694: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3fc694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3fc698:
    // 0x3fc698: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3fc698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fc69c:
    // 0x3fc69c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3fc69cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fc6a0:
    // 0x3fc6a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3fc6a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fc6a4:
    // 0x3fc6a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fc6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fc6a8:
    // 0x3fc6a8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3fc6a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fc6ac:
    // 0x3fc6ac: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3fc6acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fc6b0:
    // 0x3fc6b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fc6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fc6b4:
    // 0x3fc6b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3fc6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3fc6b8:
    // 0x3fc6b8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3fc6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fc6bc:
    // 0x3fc6bc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3fc6bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fc6c0:
    // 0x3fc6c0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3fc6c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3fc6c4:
    // 0x3fc6c4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3fc6c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fc6c8:
    // 0x3fc6c8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3fc6c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fc6cc:
    // 0x3fc6cc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3fc6ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3fc6d0:
    // 0x3fc6d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3fc6d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3fc6d4:
    // 0x3fc6d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fc6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fc6d8:
    // 0x3fc6d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fc6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fc6dc:
    // 0x3fc6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc6e0:
    // 0x3fc6e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3fc6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3fc6e4:
    // 0x3fc6e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3fc6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fc6e8:
    // 0x3fc6e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3fc6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3fc6ec:
    // 0x3fc6ec: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x3fc6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3fc6f0:
    // 0x3fc6f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3fc6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3fc6f4:
    // 0x3fc6f4: 0xc0e858c  jal         func_3A1630
label_3fc6f8:
    if (ctx->pc == 0x3FC6F8u) {
        ctx->pc = 0x3FC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC6F4u;
        // 0x3fc6f8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC6FCu;
        goto label_3fc6fc;
    }
    ctx->pc = 0x3FC6F4u;
    SET_GPR_U32(ctx, 31, 0x3FC6FCu);
    ctx->pc = 0x3FC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC6F4u;
    // 0x3fc6f8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FC6F4u, 0x3FC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC6FCu;
label_3fc6fc:
    // 0x3fc6fc: 0x3c15bf80  lui         $s5, 0xBF80
    ctx->pc = 0x3fc6fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49024 << 16));
label_3fc700:
    // 0x3fc700: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fc700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc704:
    // 0x3fc704: 0x3c060050  lui         $a2, 0x50
    ctx->pc = 0x3fc704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)80 << 16));
label_3fc708:
    // 0x3fc708: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x3fc708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3fc70c:
    // 0x3fc70c: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x3fc70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
label_3fc710:
    // 0x3fc710: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc714:
    // 0x3fc714: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fc714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fc718:
    // 0x3fc718: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3fc718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3fc71c:
    // 0x3fc71c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fc71cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3fc720:
    // 0x3fc720: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x3fc720u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc724:
    // 0x3fc724: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3fc724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fc728:
    // 0x3fc728: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3fc728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fc72c:
    // 0x3fc72c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fc72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fc730:
    // 0x3fc730: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fc730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fc734:
    // 0x3fc734: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fc734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc738:
    // 0x3fc738: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3fc738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fc73c:
    // 0x3fc73c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3fc73cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fc740:
    // 0x3fc740: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3fc740u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3fc744:
    // 0x3fc744: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fc744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fc748:
    // 0x3fc748: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3fc748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fc74c:
    // 0x3fc74c: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3fc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3fc750:
    // 0x3fc750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fc750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc754:
    // 0x3fc754: 0xae260054  sw          $a2, 0x54($s1)
    ctx->pc = 0x3fc754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
label_3fc758:
    // 0x3fc758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fc758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc75c:
    // 0x3fc75c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fc760:
    // 0x3fc760: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fc760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc764:
    // 0x3fc764: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fc764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3fc768:
    // 0x3fc768: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3fc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3fc76c:
    // 0x3fc76c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3fc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3fc770:
    // 0x3fc770: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3fc770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3fc774:
    // 0x3fc774: 0x7e870010  sq          $a3, 0x10($s4)
    ctx->pc = 0x3fc774u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 7));
label_3fc778:
    // 0x3fc778: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x3fc778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
label_3fc77c:
    // 0x3fc77c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fc77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fc780:
    // 0x3fc780: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3fc780u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3fc784:
    // 0x3fc784: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fc784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc788:
    // 0x3fc788: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc78c:
    // 0x3fc78c: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x3fc78cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
label_3fc790:
    // 0x3fc790: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3fc790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3fc794:
    // 0x3fc794: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fc794u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3fc798:
    // 0x3fc798: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3fc798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3fc79c:
    // 0x3fc79c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fc79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fc7a0:
    // 0x3fc7a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fc7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fc7a4:
    // 0x3fc7a4: 0xc0e8db8  jal         func_3A36E0
label_3fc7a8:
    if (ctx->pc == 0x3FC7A8u) {
        ctx->pc = 0x3FC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC7A4u;
        // 0x3fc7a8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC7ACu;
        goto label_3fc7ac;
    }
    ctx->pc = 0x3FC7A4u;
    SET_GPR_U32(ctx, 31, 0x3FC7ACu);
    ctx->pc = 0x3FC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC7A4u;
    // 0x3fc7a8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3FC7A4u, 0x3FC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC7ACu;
label_3fc7ac:
    // 0x3fc7ac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_3fc7b0:
    if (ctx->pc == 0x3FC7B0u) {
        ctx->pc = 0x3FC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC7ACu;
        // 0x3fc7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC7B4u;
        goto label_3fc7b4;
    }
    ctx->pc = 0x3FC7ACu;
    {
        const bool branch_taken_0x3fc7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC7ACu;
        // 0x3fc7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc7ac) {
            ctx->pc = 0x3FC858u;
            goto label_3fc858;
        }
    }
    ctx->pc = 0x3FC7B4u;
label_3fc7b4:
    // 0x3fc7b4: 0xc0e8f5c  jal         func_3A3D70
label_3fc7b8:
    if (ctx->pc == 0x3FC7B8u) {
        ctx->pc = 0x3FC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC7B4u;
        // 0x3fc7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC7BCu;
        goto label_3fc7bc;
    }
    ctx->pc = 0x3FC7B4u;
    SET_GPR_U32(ctx, 31, 0x3FC7BCu);
    ctx->pc = 0x3FC7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC7B4u;
    // 0x3fc7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3FC7B4u, 0x3FC7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC7BCu;
label_3fc7bc:
    // 0x3fc7bc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3fc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3fc7c0:
    // 0x3fc7c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fc7c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fc7c4:
    // 0x3fc7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fc7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fc7c8:
    // 0x3fc7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fc7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fc7cc:
    // 0x3fc7cc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3fc7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc7d0:
    // 0x3fc7d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3fc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fc7d4:
    // 0x3fc7d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3fc7d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3fc7d8:
    // 0x3fc7d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fc7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fc7dc:
    // 0x3fc7dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3fc7dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc7e0:
    // 0x3fc7e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3fc7e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3fc7e4:
    // 0x3fc7e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3fc7e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3fc7e8:
    // 0x3fc7e8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fc7e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fc7ec:
    // 0x3fc7ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc7ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc7f0:
    // 0x3fc7f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fc7f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fc7f4:
    // 0x3fc7f4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3fc7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fc7f8:
    // 0x3fc7f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3fc7f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fc7fc:
    // 0x3fc7fc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3fc7fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3fc800:
    // 0x3fc800: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3fc800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3fc804:
    // 0x3fc804: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3fc804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3fc808:
    // 0x3fc808: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3fc808u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3fc80c:
    // 0x3fc80c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fc80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fc810:
    // 0x3fc810: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fc810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fc814:
    // 0x3fc814: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3fc814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3fc818:
    // 0x3fc818: 0xc0e8f5c  jal         func_3A3D70
label_3fc81c:
    if (ctx->pc == 0x3FC81Cu) {
        ctx->pc = 0x3FC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC818u;
        // 0x3fc81c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC820u;
        goto label_3fc820;
    }
    ctx->pc = 0x3FC818u;
    SET_GPR_U32(ctx, 31, 0x3FC820u);
    ctx->pc = 0x3FC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC818u;
    // 0x3fc81c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3FC818u, 0x3FC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC820u;
label_3fc820:
    // 0x3fc820: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3fc820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fc824:
    // 0x3fc824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fc824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fc828:
    // 0x3fc828: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fc828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fc82c:
    // 0x3fc82c: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x3fc82cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
label_3fc830:
    // 0x3fc830: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3fc830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3fc834:
    // 0x3fc834: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fc834u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3fc838:
    // 0x3fc838: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3fc838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fc83c:
    // 0x3fc83c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3fc83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3fc840:
    // 0x3fc840: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fc840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fc844:
    // 0x3fc844: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fc844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fc848:
    // 0x3fc848: 0xc0e9364  jal         func_3A4D90
label_3fc84c:
    if (ctx->pc == 0x3FC84Cu) {
        ctx->pc = 0x3FC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC848u;
        // 0x3fc84c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC850u;
        goto label_3fc850;
    }
    ctx->pc = 0x3FC848u;
    SET_GPR_U32(ctx, 31, 0x3FC850u);
    ctx->pc = 0x3FC84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC848u;
    // 0x3fc84c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3FC848u, 0x3FC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC850u;
label_3fc850:
    // 0x3fc850: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3fc850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fc854:
    // 0x3fc854: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3fc854u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3fc858:
    // 0x3fc858: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3fc858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3fc85c:
    // 0x3fc85c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fc85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fc860:
    // 0x3fc860: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3fc860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_3fc864:
    // 0x3fc864: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x3fc864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_3fc868:
    // 0x3fc868: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3fc868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3fc86c:
    // 0x3fc86c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fc86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fc870:
    // 0x3fc870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fc870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc874:
    // 0x3fc874: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3fc874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3fc878:
    // 0x3fc878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc87c:
    // 0x3fc87c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x3fc87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_3fc880:
    // 0x3fc880: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x3fc880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3fc884:
    // 0x3fc884: 0xc0ff086  jal         func_3FC218
label_3fc888:
    if (ctx->pc == 0x3FC888u) {
        ctx->pc = 0x3FC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC884u;
        // 0x3fc888: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC88Cu;
        goto label_3fc88c;
    }
    ctx->pc = 0x3FC884u;
    SET_GPR_U32(ctx, 31, 0x3FC88Cu);
    ctx->pc = 0x3FC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC884u;
    // 0x3fc888: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC218u, 0x3FC884u, 0x3FC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC88Cu;
label_3fc88c:
    // 0x3fc88c: 0xe63400c0  swc1        $f20, 0xC0($s1)
    ctx->pc = 0x3fc88cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3fc890:
    // 0x3fc890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc894:
    // 0x3fc894: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3fc894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3fc898:
    // 0x3fc898: 0xc0e9636  jal         func_3A58D8
label_3fc89c:
    if (ctx->pc == 0x3FC89Cu) {
        ctx->pc = 0x3FC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC898u;
        // 0x3fc89c: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC8A0u;
        goto label_3fc8a0;
    }
    ctx->pc = 0x3FC898u;
    SET_GPR_U32(ctx, 31, 0x3FC8A0u);
    ctx->pc = 0x3FC89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC898u;
    // 0x3fc89c: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58D8u, 0x3FC898u, 0x3FC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC8A0u;
label_3fc8a0:
    // 0x3fc8a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3fc8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fc8a4:
    // 0x3fc8a4: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3fc8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3fc8a8:
    // 0x3fc8a8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3fc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_3fc8ac:
    // 0x3fc8ac: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3fc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3fc8b0:
    // 0x3fc8b0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3fc8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3fc8b4:
    // 0x3fc8b4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3fc8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3fc8b8:
    // 0x3fc8b8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3fc8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3fc8bc:
    // 0x3fc8bc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3fc8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3fc8c0:
    // 0x3fc8c0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3fc8c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3fc8c4:
    // 0x3fc8c4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3fc8c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3fc8c8:
    // 0x3fc8c8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3fc8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3fc8cc:
    // 0x3fc8cc: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3fc8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fc8d0:
    // 0x3fc8d0: 0x3e00008  jr          $ra
label_3fc8d4:
    if (ctx->pc == 0x3FC8D4u) {
        ctx->pc = 0x3FC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC8D0u;
        // 0x3fc8d4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC8D8u;
        goto label_fallthrough_0x3fc8d0;
    }
    ctx->pc = 0x3FC8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC8D0u;
        // 0x3fc8d4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fc8d0:
    ctx->pc = 0x3FC8D8u;
}
