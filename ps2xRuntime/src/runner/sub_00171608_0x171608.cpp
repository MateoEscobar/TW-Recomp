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

// Function: sub_00171608
// Address: 0x171608 - 0x171908
void sub_00171608_0x171608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171608_0x171608");
#endif

    switch (ctx->pc) {
        case 0x171608u: goto label_171608;
        case 0x17160cu: goto label_17160c;
        case 0x171610u: goto label_171610;
        case 0x171614u: goto label_171614;
        case 0x171618u: goto label_171618;
        case 0x17161cu: goto label_17161c;
        case 0x171620u: goto label_171620;
        case 0x171624u: goto label_171624;
        case 0x171628u: goto label_171628;
        case 0x17162cu: goto label_17162c;
        case 0x171630u: goto label_171630;
        case 0x171634u: goto label_171634;
        case 0x171638u: goto label_171638;
        case 0x17163cu: goto label_17163c;
        case 0x171640u: goto label_171640;
        case 0x171644u: goto label_171644;
        case 0x171648u: goto label_171648;
        case 0x17164cu: goto label_17164c;
        case 0x171650u: goto label_171650;
        case 0x171654u: goto label_171654;
        case 0x171658u: goto label_171658;
        case 0x17165cu: goto label_17165c;
        case 0x171660u: goto label_171660;
        case 0x171664u: goto label_171664;
        case 0x171668u: goto label_171668;
        case 0x17166cu: goto label_17166c;
        case 0x171670u: goto label_171670;
        case 0x171674u: goto label_171674;
        case 0x171678u: goto label_171678;
        case 0x17167cu: goto label_17167c;
        case 0x171680u: goto label_171680;
        case 0x171684u: goto label_171684;
        case 0x171688u: goto label_171688;
        case 0x17168cu: goto label_17168c;
        case 0x171690u: goto label_171690;
        case 0x171694u: goto label_171694;
        case 0x171698u: goto label_171698;
        case 0x17169cu: goto label_17169c;
        case 0x1716a0u: goto label_1716a0;
        case 0x1716a4u: goto label_1716a4;
        case 0x1716a8u: goto label_1716a8;
        case 0x1716acu: goto label_1716ac;
        case 0x1716b0u: goto label_1716b0;
        case 0x1716b4u: goto label_1716b4;
        case 0x1716b8u: goto label_1716b8;
        case 0x1716bcu: goto label_1716bc;
        case 0x1716c0u: goto label_1716c0;
        case 0x1716c4u: goto label_1716c4;
        case 0x1716c8u: goto label_1716c8;
        case 0x1716ccu: goto label_1716cc;
        case 0x1716d0u: goto label_1716d0;
        case 0x1716d4u: goto label_1716d4;
        case 0x1716d8u: goto label_1716d8;
        case 0x1716dcu: goto label_1716dc;
        case 0x1716e0u: goto label_1716e0;
        case 0x1716e4u: goto label_1716e4;
        case 0x1716e8u: goto label_1716e8;
        case 0x1716ecu: goto label_1716ec;
        case 0x1716f0u: goto label_1716f0;
        case 0x1716f4u: goto label_1716f4;
        case 0x1716f8u: goto label_1716f8;
        case 0x1716fcu: goto label_1716fc;
        case 0x171700u: goto label_171700;
        case 0x171704u: goto label_171704;
        case 0x171708u: goto label_171708;
        case 0x17170cu: goto label_17170c;
        case 0x171710u: goto label_171710;
        case 0x171714u: goto label_171714;
        case 0x171718u: goto label_171718;
        case 0x17171cu: goto label_17171c;
        case 0x171720u: goto label_171720;
        case 0x171724u: goto label_171724;
        case 0x171728u: goto label_171728;
        case 0x17172cu: goto label_17172c;
        case 0x171730u: goto label_171730;
        case 0x171734u: goto label_171734;
        case 0x171738u: goto label_171738;
        case 0x17173cu: goto label_17173c;
        case 0x171740u: goto label_171740;
        case 0x171744u: goto label_171744;
        case 0x171748u: goto label_171748;
        case 0x17174cu: goto label_17174c;
        case 0x171750u: goto label_171750;
        case 0x171754u: goto label_171754;
        case 0x171758u: goto label_171758;
        case 0x17175cu: goto label_17175c;
        case 0x171760u: goto label_171760;
        case 0x171764u: goto label_171764;
        case 0x171768u: goto label_171768;
        case 0x17176cu: goto label_17176c;
        case 0x171770u: goto label_171770;
        case 0x171774u: goto label_171774;
        case 0x171778u: goto label_171778;
        case 0x17177cu: goto label_17177c;
        case 0x171780u: goto label_171780;
        case 0x171784u: goto label_171784;
        case 0x171788u: goto label_171788;
        case 0x17178cu: goto label_17178c;
        case 0x171790u: goto label_171790;
        case 0x171794u: goto label_171794;
        case 0x171798u: goto label_171798;
        case 0x17179cu: goto label_17179c;
        case 0x1717a0u: goto label_1717a0;
        case 0x1717a4u: goto label_1717a4;
        case 0x1717a8u: goto label_1717a8;
        case 0x1717acu: goto label_1717ac;
        case 0x1717b0u: goto label_1717b0;
        case 0x1717b4u: goto label_1717b4;
        case 0x1717b8u: goto label_1717b8;
        case 0x1717bcu: goto label_1717bc;
        case 0x1717c0u: goto label_1717c0;
        case 0x1717c4u: goto label_1717c4;
        case 0x1717c8u: goto label_1717c8;
        case 0x1717ccu: goto label_1717cc;
        case 0x1717d0u: goto label_1717d0;
        case 0x1717d4u: goto label_1717d4;
        case 0x1717d8u: goto label_1717d8;
        case 0x1717dcu: goto label_1717dc;
        case 0x1717e0u: goto label_1717e0;
        case 0x1717e4u: goto label_1717e4;
        case 0x1717e8u: goto label_1717e8;
        case 0x1717ecu: goto label_1717ec;
        case 0x1717f0u: goto label_1717f0;
        case 0x1717f4u: goto label_1717f4;
        case 0x1717f8u: goto label_1717f8;
        case 0x1717fcu: goto label_1717fc;
        case 0x171800u: goto label_171800;
        case 0x171804u: goto label_171804;
        case 0x171808u: goto label_171808;
        case 0x17180cu: goto label_17180c;
        case 0x171810u: goto label_171810;
        case 0x171814u: goto label_171814;
        case 0x171818u: goto label_171818;
        case 0x17181cu: goto label_17181c;
        case 0x171820u: goto label_171820;
        case 0x171824u: goto label_171824;
        case 0x171828u: goto label_171828;
        case 0x17182cu: goto label_17182c;
        case 0x171830u: goto label_171830;
        case 0x171834u: goto label_171834;
        case 0x171838u: goto label_171838;
        case 0x17183cu: goto label_17183c;
        case 0x171840u: goto label_171840;
        case 0x171844u: goto label_171844;
        case 0x171848u: goto label_171848;
        case 0x17184cu: goto label_17184c;
        case 0x171850u: goto label_171850;
        case 0x171854u: goto label_171854;
        case 0x171858u: goto label_171858;
        case 0x17185cu: goto label_17185c;
        case 0x171860u: goto label_171860;
        case 0x171864u: goto label_171864;
        case 0x171868u: goto label_171868;
        case 0x17186cu: goto label_17186c;
        case 0x171870u: goto label_171870;
        case 0x171874u: goto label_171874;
        case 0x171878u: goto label_171878;
        case 0x17187cu: goto label_17187c;
        case 0x171880u: goto label_171880;
        case 0x171884u: goto label_171884;
        case 0x171888u: goto label_171888;
        case 0x17188cu: goto label_17188c;
        case 0x171890u: goto label_171890;
        case 0x171894u: goto label_171894;
        case 0x171898u: goto label_171898;
        case 0x17189cu: goto label_17189c;
        case 0x1718a0u: goto label_1718a0;
        case 0x1718a4u: goto label_1718a4;
        case 0x1718a8u: goto label_1718a8;
        case 0x1718acu: goto label_1718ac;
        case 0x1718b0u: goto label_1718b0;
        case 0x1718b4u: goto label_1718b4;
        case 0x1718b8u: goto label_1718b8;
        case 0x1718bcu: goto label_1718bc;
        case 0x1718c0u: goto label_1718c0;
        case 0x1718c4u: goto label_1718c4;
        case 0x1718c8u: goto label_1718c8;
        case 0x1718ccu: goto label_1718cc;
        case 0x1718d0u: goto label_1718d0;
        case 0x1718d4u: goto label_1718d4;
        case 0x1718d8u: goto label_1718d8;
        case 0x1718dcu: goto label_1718dc;
        case 0x1718e0u: goto label_1718e0;
        case 0x1718e4u: goto label_1718e4;
        case 0x1718e8u: goto label_1718e8;
        case 0x1718ecu: goto label_1718ec;
        case 0x1718f0u: goto label_1718f0;
        case 0x1718f4u: goto label_1718f4;
        case 0x1718f8u: goto label_1718f8;
        case 0x1718fcu: goto label_1718fc;
        case 0x171900u: goto label_171900;
        case 0x171904u: goto label_171904;
        default: break;
    }

    ctx->pc = 0x171608u;

label_171608:
    // 0x171608: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x171608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_17160c:
    // 0x17160c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x17160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_171610:
    // 0x171610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x171610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171614:
    // 0x171614: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x171614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_171618:
    // 0x171618: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x171618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_17161c:
    // 0x17161c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17161cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171620:
    // 0x171620: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x171620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_171624:
    // 0x171624: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x171624u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_171628:
    // 0x171628: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x171628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_17162c:
    // 0x17162c: 0xc047e6c  jal         func_11F9B0
label_171630:
    if (ctx->pc == 0x171630u) {
        ctx->pc = 0x171630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17162Cu;
        // 0x171630: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171634u;
        goto label_171634;
    }
    ctx->pc = 0x17162Cu;
    SET_GPR_U32(ctx, 31, 0x171634u);
    ctx->pc = 0x171630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17162Cu;
    // 0x171630: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x17162Cu, 0x171634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171634u;
label_171634:
    // 0x171634: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_171638:
    if (ctx->pc == 0x171638u) {
        ctx->pc = 0x171638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171634u;
        // 0x171638: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17163Cu;
        goto label_17163c;
    }
    ctx->pc = 0x171634u;
    {
        const bool branch_taken_0x171634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171634u;
        // 0x171638: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171634) {
            ctx->pc = 0x171660u;
            goto label_171660;
        }
    }
    ctx->pc = 0x17163Cu;
label_17163c:
    // 0x17163c: 0xc047e6c  jal         func_11F9B0
label_171640:
    if (ctx->pc == 0x171640u) {
        ctx->pc = 0x171640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17163Cu;
        // 0x171640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171644u;
        goto label_171644;
    }
    ctx->pc = 0x17163Cu;
    SET_GPR_U32(ctx, 31, 0x171644u);
    ctx->pc = 0x171640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17163Cu;
    // 0x171640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x17163Cu, 0x171644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171644u;
label_171644:
    // 0x171644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x171644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171648:
    // 0x171648: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x171648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_17164c:
    // 0x17164c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x17164cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_171650:
    // 0x171650: 0xa0f809  jalr        $a1
label_171654:
    if (ctx->pc == 0x171654u) {
        ctx->pc = 0x171654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171650u;
        // 0x171654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171658u;
        goto label_171658;
    }
    ctx->pc = 0x171650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x171658u);
        ctx->pc = 0x171654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171650u;
        // 0x171654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171650u, 0x171658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171658u;
label_171658:
    // 0x171658: 0x10000003  b           . + 4 + (0x3 << 2)
label_17165c:
    if (ctx->pc == 0x17165Cu) {
        ctx->pc = 0x17165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171658u;
        // 0x17165c: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171660u;
        goto label_171660;
    }
    ctx->pc = 0x171658u;
    {
        const bool branch_taken_0x171658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171658u;
        // 0x17165c: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171658) {
            ctx->pc = 0x171668u;
            goto label_171668;
        }
    }
    ctx->pc = 0x171660u;
label_171660:
    // 0x171660: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x171660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_171664:
    // 0x171664: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_171668:
    // 0x171668: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x171668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_17166c:
    // 0x17166c: 0x92430055  lbu         $v1, 0x55($s2)
    ctx->pc = 0x17166cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 85)));
label_171670:
    // 0x171670: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_171674:
    // 0x171674: 0x92440056  lbu         $a0, 0x56($s2)
    ctx->pc = 0x171674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 86)));
label_171678:
    // 0x171678: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_17167c:
    // 0x17167c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_171680:
    // 0x171680: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x171680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_171684:
    // 0x171684: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_171688:
    // 0x171688: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x171688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17168c:
    // 0x17168c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x17168cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_171690:
    // 0x171690: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x171690u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_171694:
    // 0x171694: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x171694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_171698:
    // 0x171698: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x171698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_17169c:
    // 0x17169c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1716a0:
    // 0x1716a0: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1716a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1716a4:
    // 0x1716a4: 0x25491740  addiu       $t1, $t2, 0x1740
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 5952));
label_1716a8:
    // 0x1716a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1716a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1716ac:
    // 0x1716ac: 0x0  nop
    ctx->pc = 0x1716acu;
    // NOP
label_1716b0:
    // 0x1716b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1716b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1716b4:
    // 0x1716b4: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x1716b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1716b8:
    // 0x1716b8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1716b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1716bc:
    // 0x1716bc: 0x0  nop
    ctx->pc = 0x1716bcu;
    // NOP
label_1716c0:
    // 0x1716c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1716c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1716c4:
    // 0x1716c4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1716c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1716c8:
    // 0x1716c8: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_1716cc:
    // 0x1716cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1716d0:
    // 0x1716d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1716d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1716d4:
    // 0x1716d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1716d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1716d8:
    // 0x1716d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1716d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1716dc:
    // 0x1716dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1716dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1716e0:
    // 0x1716e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1716e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1716e4:
    // 0x1716e4: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x1716e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_1716e8:
    // 0x1716e8: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x1716e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_1716ec:
    // 0x1716ec: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x1716ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1716f0:
    // 0x1716f0: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x1716f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1716f4:
    // 0x1716f4: 0xc5401740  lwc1        $f0, 0x1740($t2)
    ctx->pc = 0x1716f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1716f8:
    // 0x1716f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1716f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1716fc:
    // 0x1716fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1716fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_171700:
    // 0x171700: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x171700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_171704:
    // 0x171704: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x171704u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_171708:
    // 0x171708: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x171708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_17170c:
    // 0x17170c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x17170cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_171710:
    // 0x171710: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x171710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_171714:
    // 0x171714: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x171714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_171718:
    // 0x171718: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x171718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_17171c:
    // 0x17171c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x17171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_171720:
    // 0x171720: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x171720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_171724:
    // 0x171724: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x171724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_171728:
    // 0x171728: 0xc1036e2  jal         func_40DB88
label_17172c:
    if (ctx->pc == 0x17172Cu) {
        ctx->pc = 0x17172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171728u;
        // 0x17172c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171730u;
        goto label_171730;
    }
    ctx->pc = 0x171728u;
    SET_GPR_U32(ctx, 31, 0x171730u);
    ctx->pc = 0x17172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171728u;
    // 0x17172c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x171728u, 0x171730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171730u;
label_171730:
    // 0x171730: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_171734:
    // 0x171734: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_171738:
    if (ctx->pc == 0x171738u) {
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171734u;
        // 0x171738: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17173Cu;
        goto label_17173c;
    }
    ctx->pc = 0x171734u;
    {
        const bool branch_taken_0x171734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171734u;
        // 0x171738: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171734) {
            ctx->pc = 0x17174Cu;
            goto label_17174c;
        }
    }
    ctx->pc = 0x17173Cu;
label_17173c:
    // 0x17173c: 0x92420058  lbu         $v0, 0x58($s2)
    ctx->pc = 0x17173cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_171740:
    // 0x171740: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_171744:
    // 0x171744: 0x10000066  b           . + 4 + (0x66 << 2)
label_171748:
    if (ctx->pc == 0x171748u) {
        ctx->pc = 0x171748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171744u;
        // 0x171748: 0xa2420058  sb          $v0, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17174Cu;
        goto label_17174c;
    }
    ctx->pc = 0x171744u;
    {
        const bool branch_taken_0x171744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171744u;
        // 0x171748: 0xa2420058  sb          $v0, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171744) {
            ctx->pc = 0x1718E0u;
            goto label_1718e0;
        }
    }
    ctx->pc = 0x17174Cu;
label_17174c:
    // 0x17174c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17174cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_171750:
    // 0x171750: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x171750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_171754:
    // 0x171754: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_171758:
    // 0x171758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17175c:
    // 0x17175c: 0x26111720  addiu       $s1, $s0, 0x1720
    ctx->pc = 0x17175cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5920));
label_171760:
    // 0x171760: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x171760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171764:
    // 0x171764: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_171768:
    // 0x171768: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x171768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_17176c:
    // 0x17176c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x17176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_171770:
    // 0x171770: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x171770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_171774:
    // 0x171774: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_171778:
    // 0x171778: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17177c:
    // 0x17177c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17177cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_171780:
    // 0x171780: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_171784:
    // 0x171784: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_171788:
    // 0x171788: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17178c:
    // 0x17178c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x17178cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_171790:
    // 0x171790: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x171790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_171794:
    // 0x171794: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x171794u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_171798:
    // 0x171798: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x171798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_17179c:
    // 0x17179c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x17179cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1717a0:
    // 0x1717a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1717a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1717a4:
    // 0x1717a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1717a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1717a8:
    // 0x1717a8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1717a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1717ac:
    // 0x1717ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1717acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1717b0:
    // 0x1717b0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1717b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1717b4:
    // 0x1717b4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1717b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1717b8:
    // 0x1717b8: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x1717b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
label_1717bc:
    // 0x1717bc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1717bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1717c0:
    // 0x1717c0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1717c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1717c4:
    // 0x1717c4: 0xc12e310  jal         func_4B8C40
label_1717c8:
    if (ctx->pc == 0x1717C8u) {
        ctx->pc = 0x1717C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717C4u;
        // 0x1717c8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1717CCu;
        goto label_1717cc;
    }
    ctx->pc = 0x1717C4u;
    SET_GPR_U32(ctx, 31, 0x1717CCu);
    ctx->pc = 0x1717C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717C4u;
    // 0x1717c8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1717C4u, 0x1717CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717CCu;
label_1717cc:
    // 0x1717cc: 0xc6021720  lwc1        $f2, 0x1720($s0)
    ctx->pc = 0x1717ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1717d0:
    // 0x1717d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1717d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1717d4:
    // 0x1717d4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1717d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1717d8:
    // 0x1717d8: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1717d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1717dc:
    // 0x1717dc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1717dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1717e0:
    // 0x1717e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1717e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1717e4:
    // 0x1717e4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1717e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1717e8:
    // 0x1717e8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1717e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1717ec:
    // 0x1717ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1717ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1717f0:
    // 0x1717f0: 0xc12e29c  jal         func_4B8A70
label_1717f4:
    if (ctx->pc == 0x1717F4u) {
        ctx->pc = 0x1717F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717F0u;
        // 0x1717f4: 0xe6420008  swc1        $f2, 0x8($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1717F8u;
        goto label_1717f8;
    }
    ctx->pc = 0x1717F0u;
    SET_GPR_U32(ctx, 31, 0x1717F8u);
    ctx->pc = 0x1717F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717F0u;
    // 0x1717f4: 0xe6420008  swc1        $f2, 0x8($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1717F0u, 0x1717F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717F8u;
label_1717f8:
    // 0x1717f8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1717f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1717fc:
    // 0x1717fc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1717fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_171800:
    // 0x171800: 0xe7b50084  swc1        $f21, 0x84($sp)
    ctx->pc = 0x171800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_171804:
    // 0x171804: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x171804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_171808:
    // 0x171808: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x171808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_17180c:
    // 0x17180c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x17180cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_171810:
    // 0x171810: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x171810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_171814:
    // 0x171814: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x171814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_171818:
    // 0x171818: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x171818u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17181c:
    // 0x17181c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17181cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171820:
    // 0x171820: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x171820u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_171824:
    // 0x171824: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x171824u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_171828:
    // 0x171828: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x171828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17182c:
    // 0x17182c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x17182cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_171830:
    // 0x171830: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x171830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_171834:
    // 0x171834: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x171834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171838:
    // 0x171838: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x171838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_17183c:
    // 0x17183c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x17183cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_171840:
    // 0x171840: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x171840u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_171844:
    // 0x171844: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x171844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_171848:
    // 0x171848: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x171848u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_17184c:
    // 0x17184c: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x17184cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
label_171850:
    // 0x171850: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x171850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_171854:
    // 0x171854: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_171858:
    // 0x171858: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x171858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_17185c:
    // 0x17185c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x17185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_171860:
    // 0x171860: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x171860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
label_171864:
    // 0x171864: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x171864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_171868:
    // 0x171868: 0x34c6002c  ori         $a2, $a2, 0x2C
    ctx->pc = 0x171868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)44);
label_17186c:
    // 0x17186c: 0xc0cd4fc  jal         func_3353F0
label_171870:
    if (ctx->pc == 0x171870u) {
        ctx->pc = 0x171870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17186Cu;
        // 0x171870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171874u;
        goto label_171874;
    }
    ctx->pc = 0x17186Cu;
    SET_GPR_U32(ctx, 31, 0x171874u);
    ctx->pc = 0x171870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17186Cu;
    // 0x171870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x17186Cu, 0x171874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171874u;
label_171874:
    // 0x171874: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x171874u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_171878:
    // 0x171878: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x171878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_17187c:
    // 0x17187c: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x17187cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_171880:
    // 0x171880: 0xc0cd508  jal         func_335420
label_171884:
    if (ctx->pc == 0x171884u) {
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171880u;
        // 0x171884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171888u;
        goto label_171888;
    }
    ctx->pc = 0x171880u;
    SET_GPR_U32(ctx, 31, 0x171888u);
    ctx->pc = 0x171884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171880u;
    // 0x171884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x171880u, 0x171888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171888u;
label_171888:
    // 0x171888: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x171888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_17188c:
    // 0x17188c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171890:
    // 0x171890: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_171894:
    // 0x171894: 0xc0cd4fc  jal         func_3353F0
label_171898:
    if (ctx->pc == 0x171898u) {
        ctx->pc = 0x171898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171894u;
        // 0x171898: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17189Cu;
        goto label_17189c;
    }
    ctx->pc = 0x171894u;
    SET_GPR_U32(ctx, 31, 0x17189Cu);
    ctx->pc = 0x171898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171894u;
    // 0x171898: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x171894u, 0x17189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17189Cu;
label_17189c:
    // 0x17189c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1718a0:
    // 0x1718a0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1718a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1718a4:
    // 0x1718a4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1718a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1718a8:
    // 0x1718a8: 0xc0cd4fc  jal         func_3353F0
label_1718ac:
    if (ctx->pc == 0x1718ACu) {
        ctx->pc = 0x1718ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718A8u;
        // 0x1718ac: 0xa2420054  sb          $v0, 0x54($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1718B0u;
        goto label_1718b0;
    }
    ctx->pc = 0x1718A8u;
    SET_GPR_U32(ctx, 31, 0x1718B0u);
    ctx->pc = 0x1718ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718A8u;
    // 0x1718ac: 0xa2420054  sb          $v0, 0x54($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1718A8u, 0x1718B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718B0u;
label_1718b0:
    // 0x1718b0: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x1718b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
label_1718b4:
    // 0x1718b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1718b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1718b8:
    // 0x1718b8: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x1718b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1718bc:
    // 0x1718bc: 0xc0cd4fc  jal         func_3353F0
label_1718c0:
    if (ctx->pc == 0x1718C0u) {
        ctx->pc = 0x1718C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718BCu;
        // 0x1718c0: 0x24060384  addiu       $a2, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1718C4u;
        goto label_1718c4;
    }
    ctx->pc = 0x1718BCu;
    SET_GPR_U32(ctx, 31, 0x1718C4u);
    ctx->pc = 0x1718C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718BCu;
    // 0x1718c0: 0x24060384  addiu       $a2, $zero, 0x384 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1718BCu, 0x1718C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718C4u;
label_1718c4:
    // 0x1718c4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x1718c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1718c8:
    // 0x1718c8: 0xa6420052  sh          $v0, 0x52($s2)
    ctx->pc = 0x1718c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 2));
label_1718cc:
    // 0x1718cc: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x1718ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_1718d0:
    // 0x1718d0: 0xa6400050  sh          $zero, 0x50($s2)
    ctx->pc = 0x1718d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 0));
label_1718d4:
    // 0x1718d4: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x1718d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_1718d8:
    // 0x1718d8: 0xa640004e  sh          $zero, 0x4E($s2)
    ctx->pc = 0x1718d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 78), (uint16_t)GPR_U32(ctx, 0));
label_1718dc:
    // 0x1718dc: 0xa640004c  sh          $zero, 0x4C($s2)
    ctx->pc = 0x1718dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 76), (uint16_t)GPR_U32(ctx, 0));
label_1718e0:
    // 0x1718e0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1718e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1718e4:
    // 0x1718e4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1718e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1718e8:
    // 0x1718e8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1718e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1718ec:
    // 0x1718ec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1718ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1718f0:
    // 0x1718f0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1718f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1718f4:
    // 0x1718f4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1718f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1718f8:
    // 0x1718f8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1718f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1718fc:
    // 0x1718fc: 0x3e00008  jr          $ra
label_171900:
    if (ctx->pc == 0x171900u) {
        ctx->pc = 0x171900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718FCu;
        // 0x171900: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171904u;
        goto label_171904;
    }
    ctx->pc = 0x1718FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718FCu;
        // 0x171900: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1718FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171904u;
label_171904:
    // 0x171904: 0x0  nop
    ctx->pc = 0x171904u;
    // NOP
    ctx->pc = 0x171908u;
}
