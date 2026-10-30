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

// Function: sub_003FB5F8
// Address: 0x3fb5f8 - 0x3fb8d0
void sub_003FB5F8_0x3fb5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB5F8_0x3fb5f8");
#endif

    switch (ctx->pc) {
        case 0x3fb5f8u: goto label_3fb5f8;
        case 0x3fb5fcu: goto label_3fb5fc;
        case 0x3fb600u: goto label_3fb600;
        case 0x3fb604u: goto label_3fb604;
        case 0x3fb608u: goto label_3fb608;
        case 0x3fb60cu: goto label_3fb60c;
        case 0x3fb610u: goto label_3fb610;
        case 0x3fb614u: goto label_3fb614;
        case 0x3fb618u: goto label_3fb618;
        case 0x3fb61cu: goto label_3fb61c;
        case 0x3fb620u: goto label_3fb620;
        case 0x3fb624u: goto label_3fb624;
        case 0x3fb628u: goto label_3fb628;
        case 0x3fb62cu: goto label_3fb62c;
        case 0x3fb630u: goto label_3fb630;
        case 0x3fb634u: goto label_3fb634;
        case 0x3fb638u: goto label_3fb638;
        case 0x3fb63cu: goto label_3fb63c;
        case 0x3fb640u: goto label_3fb640;
        case 0x3fb644u: goto label_3fb644;
        case 0x3fb648u: goto label_3fb648;
        case 0x3fb64cu: goto label_3fb64c;
        case 0x3fb650u: goto label_3fb650;
        case 0x3fb654u: goto label_3fb654;
        case 0x3fb658u: goto label_3fb658;
        case 0x3fb65cu: goto label_3fb65c;
        case 0x3fb660u: goto label_3fb660;
        case 0x3fb664u: goto label_3fb664;
        case 0x3fb668u: goto label_3fb668;
        case 0x3fb66cu: goto label_3fb66c;
        case 0x3fb670u: goto label_3fb670;
        case 0x3fb674u: goto label_3fb674;
        case 0x3fb678u: goto label_3fb678;
        case 0x3fb67cu: goto label_3fb67c;
        case 0x3fb680u: goto label_3fb680;
        case 0x3fb684u: goto label_3fb684;
        case 0x3fb688u: goto label_3fb688;
        case 0x3fb68cu: goto label_3fb68c;
        case 0x3fb690u: goto label_3fb690;
        case 0x3fb694u: goto label_3fb694;
        case 0x3fb698u: goto label_3fb698;
        case 0x3fb69cu: goto label_3fb69c;
        case 0x3fb6a0u: goto label_3fb6a0;
        case 0x3fb6a4u: goto label_3fb6a4;
        case 0x3fb6a8u: goto label_3fb6a8;
        case 0x3fb6acu: goto label_3fb6ac;
        case 0x3fb6b0u: goto label_3fb6b0;
        case 0x3fb6b4u: goto label_3fb6b4;
        case 0x3fb6b8u: goto label_3fb6b8;
        case 0x3fb6bcu: goto label_3fb6bc;
        case 0x3fb6c0u: goto label_3fb6c0;
        case 0x3fb6c4u: goto label_3fb6c4;
        case 0x3fb6c8u: goto label_3fb6c8;
        case 0x3fb6ccu: goto label_3fb6cc;
        case 0x3fb6d0u: goto label_3fb6d0;
        case 0x3fb6d4u: goto label_3fb6d4;
        case 0x3fb6d8u: goto label_3fb6d8;
        case 0x3fb6dcu: goto label_3fb6dc;
        case 0x3fb6e0u: goto label_3fb6e0;
        case 0x3fb6e4u: goto label_3fb6e4;
        case 0x3fb6e8u: goto label_3fb6e8;
        case 0x3fb6ecu: goto label_3fb6ec;
        case 0x3fb6f0u: goto label_3fb6f0;
        case 0x3fb6f4u: goto label_3fb6f4;
        case 0x3fb6f8u: goto label_3fb6f8;
        case 0x3fb6fcu: goto label_3fb6fc;
        case 0x3fb700u: goto label_3fb700;
        case 0x3fb704u: goto label_3fb704;
        case 0x3fb708u: goto label_3fb708;
        case 0x3fb70cu: goto label_3fb70c;
        case 0x3fb710u: goto label_3fb710;
        case 0x3fb714u: goto label_3fb714;
        case 0x3fb718u: goto label_3fb718;
        case 0x3fb71cu: goto label_3fb71c;
        case 0x3fb720u: goto label_3fb720;
        case 0x3fb724u: goto label_3fb724;
        case 0x3fb728u: goto label_3fb728;
        case 0x3fb72cu: goto label_3fb72c;
        case 0x3fb730u: goto label_3fb730;
        case 0x3fb734u: goto label_3fb734;
        case 0x3fb738u: goto label_3fb738;
        case 0x3fb73cu: goto label_3fb73c;
        case 0x3fb740u: goto label_3fb740;
        case 0x3fb744u: goto label_3fb744;
        case 0x3fb748u: goto label_3fb748;
        case 0x3fb74cu: goto label_3fb74c;
        case 0x3fb750u: goto label_3fb750;
        case 0x3fb754u: goto label_3fb754;
        case 0x3fb758u: goto label_3fb758;
        case 0x3fb75cu: goto label_3fb75c;
        case 0x3fb760u: goto label_3fb760;
        case 0x3fb764u: goto label_3fb764;
        case 0x3fb768u: goto label_3fb768;
        case 0x3fb76cu: goto label_3fb76c;
        case 0x3fb770u: goto label_3fb770;
        case 0x3fb774u: goto label_3fb774;
        case 0x3fb778u: goto label_3fb778;
        case 0x3fb77cu: goto label_3fb77c;
        case 0x3fb780u: goto label_3fb780;
        case 0x3fb784u: goto label_3fb784;
        case 0x3fb788u: goto label_3fb788;
        case 0x3fb78cu: goto label_3fb78c;
        case 0x3fb790u: goto label_3fb790;
        case 0x3fb794u: goto label_3fb794;
        case 0x3fb798u: goto label_3fb798;
        case 0x3fb79cu: goto label_3fb79c;
        case 0x3fb7a0u: goto label_3fb7a0;
        case 0x3fb7a4u: goto label_3fb7a4;
        case 0x3fb7a8u: goto label_3fb7a8;
        case 0x3fb7acu: goto label_3fb7ac;
        case 0x3fb7b0u: goto label_3fb7b0;
        case 0x3fb7b4u: goto label_3fb7b4;
        case 0x3fb7b8u: goto label_3fb7b8;
        case 0x3fb7bcu: goto label_3fb7bc;
        case 0x3fb7c0u: goto label_3fb7c0;
        case 0x3fb7c4u: goto label_3fb7c4;
        case 0x3fb7c8u: goto label_3fb7c8;
        case 0x3fb7ccu: goto label_3fb7cc;
        case 0x3fb7d0u: goto label_3fb7d0;
        case 0x3fb7d4u: goto label_3fb7d4;
        case 0x3fb7d8u: goto label_3fb7d8;
        case 0x3fb7dcu: goto label_3fb7dc;
        case 0x3fb7e0u: goto label_3fb7e0;
        case 0x3fb7e4u: goto label_3fb7e4;
        case 0x3fb7e8u: goto label_3fb7e8;
        case 0x3fb7ecu: goto label_3fb7ec;
        case 0x3fb7f0u: goto label_3fb7f0;
        case 0x3fb7f4u: goto label_3fb7f4;
        case 0x3fb7f8u: goto label_3fb7f8;
        case 0x3fb7fcu: goto label_3fb7fc;
        case 0x3fb800u: goto label_3fb800;
        case 0x3fb804u: goto label_3fb804;
        case 0x3fb808u: goto label_3fb808;
        case 0x3fb80cu: goto label_3fb80c;
        case 0x3fb810u: goto label_3fb810;
        case 0x3fb814u: goto label_3fb814;
        case 0x3fb818u: goto label_3fb818;
        case 0x3fb81cu: goto label_3fb81c;
        case 0x3fb820u: goto label_3fb820;
        case 0x3fb824u: goto label_3fb824;
        case 0x3fb828u: goto label_3fb828;
        case 0x3fb82cu: goto label_3fb82c;
        case 0x3fb830u: goto label_3fb830;
        case 0x3fb834u: goto label_3fb834;
        case 0x3fb838u: goto label_3fb838;
        case 0x3fb83cu: goto label_3fb83c;
        case 0x3fb840u: goto label_3fb840;
        case 0x3fb844u: goto label_3fb844;
        case 0x3fb848u: goto label_3fb848;
        case 0x3fb84cu: goto label_3fb84c;
        case 0x3fb850u: goto label_3fb850;
        case 0x3fb854u: goto label_3fb854;
        case 0x3fb858u: goto label_3fb858;
        case 0x3fb85cu: goto label_3fb85c;
        case 0x3fb860u: goto label_3fb860;
        case 0x3fb864u: goto label_3fb864;
        case 0x3fb868u: goto label_3fb868;
        case 0x3fb86cu: goto label_3fb86c;
        case 0x3fb870u: goto label_3fb870;
        case 0x3fb874u: goto label_3fb874;
        case 0x3fb878u: goto label_3fb878;
        case 0x3fb87cu: goto label_3fb87c;
        case 0x3fb880u: goto label_3fb880;
        case 0x3fb884u: goto label_3fb884;
        case 0x3fb888u: goto label_3fb888;
        case 0x3fb88cu: goto label_3fb88c;
        case 0x3fb890u: goto label_3fb890;
        case 0x3fb894u: goto label_3fb894;
        case 0x3fb898u: goto label_3fb898;
        case 0x3fb89cu: goto label_3fb89c;
        case 0x3fb8a0u: goto label_3fb8a0;
        case 0x3fb8a4u: goto label_3fb8a4;
        case 0x3fb8a8u: goto label_3fb8a8;
        case 0x3fb8acu: goto label_3fb8ac;
        case 0x3fb8b0u: goto label_3fb8b0;
        case 0x3fb8b4u: goto label_3fb8b4;
        case 0x3fb8b8u: goto label_3fb8b8;
        case 0x3fb8bcu: goto label_3fb8bc;
        case 0x3fb8c0u: goto label_3fb8c0;
        case 0x3fb8c4u: goto label_3fb8c4;
        case 0x3fb8c8u: goto label_3fb8c8;
        case 0x3fb8ccu: goto label_3fb8cc;
        default: break;
    }

    ctx->pc = 0x3fb5f8u;

label_3fb5f8:
    // 0x3fb5f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3fb5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3fb5fc:
    // 0x3fb5fc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3fb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3fb600:
    // 0x3fb600: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3fb600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3fb604:
    // 0x3fb604: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3fb604u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3fb608:
    // 0x3fb608: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3fb608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3fb60c:
    // 0x3fb60c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3fb60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3fb610:
    // 0x3fb610: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3fb610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3fb614:
    // 0x3fb614: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fb614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb618:
    // 0x3fb618: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3fb618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3fb61c:
    // 0x3fb61c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3fb61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fb620:
    // 0x3fb620: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3fb620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3fb624:
    // 0x3fb624: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3fb624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3fb628:
    // 0x3fb628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fb628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fb62c:
    // 0x3fb62c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3fb62cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fb630:
    // 0x3fb630: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fb634:
    // 0x3fb634: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fb634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fb638:
    // 0x3fb638: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fb638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fb63c:
    // 0x3fb63c: 0x40f809  jalr        $v0
label_3fb640:
    if (ctx->pc == 0x3FB640u) {
        ctx->pc = 0x3FB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB63Cu;
        // 0x3fb640: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB644u;
        goto label_3fb644;
    }
    ctx->pc = 0x3FB63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FB644u);
        ctx->pc = 0x3FB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB63Cu;
        // 0x3fb640: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB63Cu, 0x3FB644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB644u;
label_3fb644:
    // 0x3fb644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fb644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb648:
    // 0x3fb648: 0xc0ea146  jal         func_3A8518
label_3fb64c:
    if (ctx->pc == 0x3FB64Cu) {
        ctx->pc = 0x3FB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB648u;
        // 0x3fb64c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB650u;
        goto label_3fb650;
    }
    ctx->pc = 0x3FB648u;
    SET_GPR_U32(ctx, 31, 0x3FB650u);
    ctx->pc = 0x3FB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB648u;
    // 0x3fb64c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB648u, 0x3FB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB650u;
label_3fb650:
    // 0x3fb650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fb650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb654:
    // 0x3fb654: 0xc0ea146  jal         func_3A8518
label_3fb658:
    if (ctx->pc == 0x3FB658u) {
        ctx->pc = 0x3FB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB654u;
        // 0x3fb658: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB65Cu;
        goto label_3fb65c;
    }
    ctx->pc = 0x3FB654u;
    SET_GPR_U32(ctx, 31, 0x3FB65Cu);
    ctx->pc = 0x3FB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB654u;
    // 0x3fb658: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB654u, 0x3FB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB65Cu;
label_3fb65c:
    // 0x3fb65c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3fb65cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb660:
    // 0x3fb660: 0xc0ea146  jal         func_3A8518
label_3fb664:
    if (ctx->pc == 0x3FB664u) {
        ctx->pc = 0x3FB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB660u;
        // 0x3fb664: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB668u;
        goto label_3fb668;
    }
    ctx->pc = 0x3FB660u;
    SET_GPR_U32(ctx, 31, 0x3FB668u);
    ctx->pc = 0x3FB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB660u;
    // 0x3fb664: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB660u, 0x3FB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB668u;
label_3fb668:
    // 0x3fb668: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb66c:
    // 0x3fb66c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3fb66cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb670:
    // 0x3fb670: 0xc0ea12a  jal         func_3A84A8
label_3fb674:
    if (ctx->pc == 0x3FB674u) {
        ctx->pc = 0x3FB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB670u;
        // 0x3fb674: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB678u;
        goto label_3fb678;
    }
    ctx->pc = 0x3FB670u;
    SET_GPR_U32(ctx, 31, 0x3FB678u);
    ctx->pc = 0x3FB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB670u;
    // 0x3fb674: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB670u, 0x3FB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB678u;
label_3fb678:
    // 0x3fb678: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb67c:
    // 0x3fb67c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fb67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fb680:
    // 0x3fb680: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3fb680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fb684:
    // 0x3fb684: 0xc0ea12a  jal         func_3A84A8
label_3fb688:
    if (ctx->pc == 0x3FB688u) {
        ctx->pc = 0x3FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB684u;
        // 0x3fb688: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB68Cu;
        goto label_3fb68c;
    }
    ctx->pc = 0x3FB684u;
    SET_GPR_U32(ctx, 31, 0x3FB68Cu);
    ctx->pc = 0x3FB688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB684u;
    // 0x3fb688: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FB684u, 0x3FB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB68Cu;
label_3fb68c:
    // 0x3fb68c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fb68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb690:
    // 0x3fb690: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3fb690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3fb694:
    // 0x3fb694: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb698:
    // 0x3fb698: 0xc0e858c  jal         func_3A1630
label_3fb69c:
    if (ctx->pc == 0x3FB69Cu) {
        ctx->pc = 0x3FB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB698u;
        // 0x3fb69c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB6A0u;
        goto label_3fb6a0;
    }
    ctx->pc = 0x3FB698u;
    SET_GPR_U32(ctx, 31, 0x3FB6A0u);
    ctx->pc = 0x3FB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB698u;
    // 0x3fb69c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FB698u, 0x3FB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB6A0u;
label_3fb6a0:
    // 0x3fb6a0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3fb6a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fb6a4:
    // 0x3fb6a4: 0x24050405  addiu       $a1, $zero, 0x405
    ctx->pc = 0x3fb6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
label_3fb6a8:
    // 0x3fb6a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3fb6a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb6ac:
    // 0x3fb6ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fb6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fb6b0:
    // 0x3fb6b0: 0xae7100e0  sw          $s1, 0xE0($s3)
    ctx->pc = 0x3fb6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 17));
label_3fb6b4:
    // 0x3fb6b4: 0xae6000c4  sw          $zero, 0xC4($s3)
    ctx->pc = 0x3fb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
label_3fb6b8:
    // 0x3fb6b8: 0xae7500d8  sw          $s5, 0xD8($s3)
    ctx->pc = 0x3fb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 21));
label_3fb6bc:
    // 0x3fb6bc: 0xae7600dc  sw          $s6, 0xDC($s3)
    ctx->pc = 0x3fb6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 22));
label_3fb6c0:
    // 0x3fb6c0: 0xae650054  sw          $a1, 0x54($s3)
    ctx->pc = 0x3fb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 5));
label_3fb6c4:
    // 0x3fb6c4: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3fb6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3fb6c8:
    // 0x3fb6c8: 0xc0e91da  jal         func_3A4768
label_3fb6cc:
    if (ctx->pc == 0x3FB6CCu) {
        ctx->pc = 0x3FB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB6C8u;
        // 0x3fb6cc: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB6D0u;
        goto label_3fb6d0;
    }
    ctx->pc = 0x3FB6C8u;
    SET_GPR_U32(ctx, 31, 0x3FB6D0u);
    ctx->pc = 0x3FB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB6C8u;
    // 0x3fb6cc: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3FB6C8u, 0x3FB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB6D0u;
label_3fb6d0:
    // 0x3fb6d0: 0xc0e91da  jal         func_3A4768
label_3fb6d4:
    if (ctx->pc == 0x3FB6D4u) {
        ctx->pc = 0x3FB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB6D0u;
        // 0x3fb6d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB6D8u;
        goto label_3fb6d8;
    }
    ctx->pc = 0x3FB6D0u;
    SET_GPR_U32(ctx, 31, 0x3FB6D8u);
    ctx->pc = 0x3FB6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB6D0u;
    // 0x3fb6d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3FB6D0u, 0x3FB6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB6D8u;
label_3fb6d8:
    // 0x3fb6d8: 0x8e03bd30  lw          $v1, -0x42D0($s0)
    ctx->pc = 0x3fb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_3fb6dc:
    // 0x3fb6dc: 0x3c02ecc3  lui         $v0, 0xECC3
    ctx->pc = 0x3fb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60611 << 16));
label_3fb6e0:
    // 0x3fb6e0: 0x3c06b70e  lui         $a2, 0xB70E
    ctx->pc = 0x3fb6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46862 << 16));
label_3fb6e4:
    // 0x3fb6e4: 0x3442ab3c  ori         $v0, $v0, 0xAB3C
    ctx->pc = 0x3fb6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43836);
label_3fb6e8:
    // 0x3fb6e8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3fb6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_3fb6ec:
    // 0x3fb6ec: 0x34c63ee2  ori         $a2, $a2, 0x3EE2
    ctx->pc = 0x3fb6ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16098);
label_3fb6f0:
    // 0x3fb6f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3fb6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fb6f4:
    // 0x3fb6f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb6f8:
    // 0x3fb6f8: 0x8e03bd30  lw          $v1, -0x42D0($s0)
    ctx->pc = 0x3fb6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_3fb6fc:
    // 0x3fb6fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb700:
    // 0x3fb700: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3fb700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3fb704:
    // 0x3fb704: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3fb704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3fb708:
    // 0x3fb708: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3fb708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3fb70c:
    // 0x3fb70c: 0xa2400029  sb          $zero, 0x29($s2)
    ctx->pc = 0x3fb70cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
label_3fb710:
    // 0x3fb710: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3fb710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3fb714:
    // 0x3fb714: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3fb714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3fb718:
    // 0x3fb718: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3fb718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3fb71c:
    // 0x3fb71c: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x3fb71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_3fb720:
    // 0x3fb720: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3fb720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3fb724:
    // 0x3fb724: 0xae460010  sw          $a2, 0x10($s2)
    ctx->pc = 0x3fb724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 6));
label_3fb728:
    // 0x3fb728: 0xc0fe03c  jal         func_3F80F0
label_3fb72c:
    if (ctx->pc == 0x3FB72Cu) {
        ctx->pc = 0x3FB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB728u;
        // 0x3fb72c: 0xa2470028  sb          $a3, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB730u;
        goto label_3fb730;
    }
    ctx->pc = 0x3FB728u;
    SET_GPR_U32(ctx, 31, 0x3FB730u);
    ctx->pc = 0x3FB72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB728u;
    // 0x3fb72c: 0xa2470028  sb          $a3, 0x28($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F80F0u, 0x3FB728u, 0x3FB730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB730u;
label_3fb730:
    // 0x3fb730: 0xc0e4080  jal         func_390200
label_3fb734:
    if (ctx->pc == 0x3FB734u) {
        ctx->pc = 0x3FB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB730u;
        // 0x3fb734: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB738u;
        goto label_3fb738;
    }
    ctx->pc = 0x3FB730u;
    SET_GPR_U32(ctx, 31, 0x3FB738u);
    ctx->pc = 0x3FB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB730u;
    // 0x3fb734: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3FB730u, 0x3FB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB738u;
label_3fb738:
    // 0x3fb738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fb738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb73c:
    // 0x3fb73c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fb740:
    // 0x3fb740: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x3fb740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_3fb744:
    // 0x3fb744: 0x8e03bd30  lw          $v1, -0x42D0($s0)
    ctx->pc = 0x3fb744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_3fb748:
    // 0x3fb748: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3fb748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3fb74c:
    // 0x3fb74c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_3fb750:
    if (ctx->pc == 0x3FB750u) {
        ctx->pc = 0x3FB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB74Cu;
        // 0x3fb750: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB754u;
        goto label_3fb754;
    }
    ctx->pc = 0x3FB74Cu;
    {
        const bool branch_taken_0x3fb74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB74Cu;
        // 0x3fb750: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb74c) {
            ctx->pc = 0x3FB768u;
            goto label_3fb768;
        }
    }
    ctx->pc = 0x3FB754u;
label_3fb754:
    // 0x3fb754: 0xc0e4080  jal         func_390200
label_3fb758:
    if (ctx->pc == 0x3FB758u) {
        ctx->pc = 0x3FB75Cu;
        goto label_3fb75c;
    }
    ctx->pc = 0x3FB754u;
    SET_GPR_U32(ctx, 31, 0x3FB75Cu);
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3FB754u, 0x3FB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB75Cu;
label_3fb75c:
    // 0x3fb75c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3fb75cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb760:
    // 0x3fb760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3fb760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fb764:
    // 0x3fb764: 0xaee20124  sw          $v0, 0x124($s7)
    ctx->pc = 0x3fb764u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 292), GPR_U32(ctx, 2));
label_3fb768:
    // 0x3fb768: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3fb768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3fb76c:
    // 0x3fb76c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb770:
    // 0x3fb770: 0x8e022c7c  lw          $v0, 0x2C7C($s0)
    ctx->pc = 0x3fb770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3fb774:
    // 0x3fb774: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fb774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb778:
    // 0x3fb778: 0xc0e637e  jal         func_398DF8
label_3fb77c:
    if (ctx->pc == 0x3FB77Cu) {
        ctx->pc = 0x3FB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB778u;
        // 0x3fb77c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB780u;
        goto label_3fb780;
    }
    ctx->pc = 0x3FB778u;
    SET_GPR_U32(ctx, 31, 0x3FB780u);
    ctx->pc = 0x3FB77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB778u;
    // 0x3fb77c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3FB778u, 0x3FB780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB780u;
label_3fb780:
    // 0x3fb780: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_3fb784:
    if (ctx->pc == 0x3FB784u) {
        ctx->pc = 0x3FB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB780u;
        // 0x3fb784: 0x8e022c7c  lw          $v0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB788u;
        goto label_3fb788;
    }
    ctx->pc = 0x3FB780u;
    {
        const bool branch_taken_0x3fb780 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB780u;
        // 0x3fb784: 0x8e022c7c  lw          $v0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb780) {
            ctx->pc = 0x3FB798u;
            goto label_3fb798;
        }
    }
    ctx->pc = 0x3FB788u;
label_3fb788:
    // 0x3fb788: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3fb788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fb78c:
    // 0x3fb78c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fb78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb790:
    // 0x3fb790: 0xc0e637e  jal         func_398DF8
label_3fb794:
    if (ctx->pc == 0x3FB794u) {
        ctx->pc = 0x3FB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB790u;
        // 0x3fb794: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB798u;
        goto label_3fb798;
    }
    ctx->pc = 0x3FB790u;
    SET_GPR_U32(ctx, 31, 0x3FB798u);
    ctx->pc = 0x3FB794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB790u;
    // 0x3fb794: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3FB790u, 0x3FB798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB798u;
label_3fb798:
    // 0x3fb798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fb798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb79c:
    // 0x3fb79c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb7a0:
    // 0x3fb7a0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3fb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3fb7a4:
    // 0x3fb7a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb7a8:
    // 0x3fb7a8: 0xc0fe4da  jal         func_3F9368
label_3fb7ac:
    if (ctx->pc == 0x3FB7ACu) {
        ctx->pc = 0x3FB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7A8u;
        // 0x3fb7ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7B0u;
        goto label_3fb7b0;
    }
    ctx->pc = 0x3FB7A8u;
    SET_GPR_U32(ctx, 31, 0x3FB7B0u);
    ctx->pc = 0x3FB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB7A8u;
    // 0x3fb7ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9368u, 0x3FB7A8u, 0x3FB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB7B0u;
label_3fb7b0:
    // 0x3fb7b0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3fb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3fb7b4:
    // 0x3fb7b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3fb7b8:
    if (ctx->pc == 0x3FB7B8u) {
        ctx->pc = 0x3FB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7B4u;
        // 0x3fb7b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7BCu;
        goto label_3fb7bc;
    }
    ctx->pc = 0x3FB7B4u;
    {
        const bool branch_taken_0x3fb7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7B4u;
        // 0x3fb7b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb7b4) {
            ctx->pc = 0x3FB7D4u;
            goto label_3fb7d4;
        }
    }
    ctx->pc = 0x3FB7BCu;
label_3fb7bc:
    // 0x3fb7bc: 0xc0ea16a  jal         func_3A85A8
label_3fb7c0:
    if (ctx->pc == 0x3FB7C0u) {
        ctx->pc = 0x3FB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7BCu;
        // 0x3fb7c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7C4u;
        goto label_3fb7c4;
    }
    ctx->pc = 0x3FB7BCu;
    SET_GPR_U32(ctx, 31, 0x3FB7C4u);
    ctx->pc = 0x3FB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB7BCu;
    // 0x3fb7c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FB7BCu, 0x3FB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB7C4u;
label_3fb7c4:
    // 0x3fb7c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3fb7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fb7c8:
    // 0x3fb7c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb7cc:
    // 0x3fb7cc: 0xc0fe562  jal         func_3F9588
label_3fb7d0:
    if (ctx->pc == 0x3FB7D0u) {
        ctx->pc = 0x3FB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7CCu;
        // 0x3fb7d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7D4u;
        goto label_3fb7d4;
    }
    ctx->pc = 0x3FB7CCu;
    SET_GPR_U32(ctx, 31, 0x3FB7D4u);
    ctx->pc = 0x3FB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB7CCu;
    // 0x3fb7d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9588u, 0x3FB7CCu, 0x3FB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB7D4u;
label_3fb7d4:
    // 0x3fb7d4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3fb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3fb7d8:
    // 0x3fb7d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3fb7dc:
    if (ctx->pc == 0x3FB7DCu) {
        ctx->pc = 0x3FB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7D8u;
        // 0x3fb7dc: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7E0u;
        goto label_3fb7e0;
    }
    ctx->pc = 0x3FB7D8u;
    {
        const bool branch_taken_0x3fb7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb7d8) {
            ctx->pc = 0x3FB7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB7D8u;
            // 0x3fb7dc: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB7F4u;
            goto label_3fb7f4;
        }
    }
    ctx->pc = 0x3FB7E0u;
label_3fb7e0:
    // 0x3fb7e0: 0xc0e927a  jal         func_3A49E8
label_3fb7e4:
    if (ctx->pc == 0x3FB7E4u) {
        ctx->pc = 0x3FB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7E0u;
        // 0x3fb7e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7E8u;
        goto label_3fb7e8;
    }
    ctx->pc = 0x3FB7E0u;
    SET_GPR_U32(ctx, 31, 0x3FB7E8u);
    ctx->pc = 0x3FB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB7E0u;
    // 0x3fb7e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3FB7E0u, 0x3FB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB7E8u;
label_3fb7e8:
    // 0x3fb7e8: 0xc0e927a  jal         func_3A49E8
label_3fb7ec:
    if (ctx->pc == 0x3FB7ECu) {
        ctx->pc = 0x3FB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7E8u;
        // 0x3fb7ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB7F0u;
        goto label_3fb7f0;
    }
    ctx->pc = 0x3FB7E8u;
    SET_GPR_U32(ctx, 31, 0x3FB7F0u);
    ctx->pc = 0x3FB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB7E8u;
    // 0x3fb7ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3FB7E8u, 0x3FB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB7F0u;
label_3fb7f0:
    // 0x3fb7f0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fb7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fb7f4:
    // 0x3fb7f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb7f8:
    // 0x3fb7f8: 0xc0e9666  jal         func_3A5998
label_3fb7fc:
    if (ctx->pc == 0x3FB7FCu) {
        ctx->pc = 0x3FB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7F8u;
        // 0x3fb7fc: 0x24a56960  addiu       $a1, $a1, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB800u;
        goto label_3fb800;
    }
    ctx->pc = 0x3FB7F8u;
    SET_GPR_U32(ctx, 31, 0x3FB800u);
    ctx->pc = 0x3FB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB7F8u;
    // 0x3fb7fc: 0x24a56960  addiu       $a1, $a1, 0x6960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FB7F8u, 0x3FB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB800u;
label_3fb800:
    // 0x3fb800: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3fb804:
    if (ctx->pc == 0x3FB804u) {
        ctx->pc = 0x3FB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB800u;
        // 0x3fb804: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB808u;
        goto label_3fb808;
    }
    ctx->pc = 0x3FB800u;
    {
        const bool branch_taken_0x3fb800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB800u;
        // 0x3fb804: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb800) {
            ctx->pc = 0x3FB838u;
            goto label_3fb838;
        }
    }
    ctx->pc = 0x3FB808u;
label_3fb808:
    // 0x3fb808: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fb808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fb80c:
    // 0x3fb80c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb810:
    // 0x3fb810: 0xc0e9666  jal         func_3A5998
label_3fb814:
    if (ctx->pc == 0x3FB814u) {
        ctx->pc = 0x3FB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB810u;
        // 0x3fb814: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB818u;
        goto label_3fb818;
    }
    ctx->pc = 0x3FB810u;
    SET_GPR_U32(ctx, 31, 0x3FB818u);
    ctx->pc = 0x3FB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB810u;
    // 0x3fb814: 0x24a56988  addiu       $a1, $a1, 0x6988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FB810u, 0x3FB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB818u;
label_3fb818:
    // 0x3fb818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3fb81c:
    if (ctx->pc == 0x3FB81Cu) {
        ctx->pc = 0x3FB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB818u;
        // 0x3fb81c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB820u;
        goto label_3fb820;
    }
    ctx->pc = 0x3FB818u;
    {
        const bool branch_taken_0x3fb818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB818u;
        // 0x3fb81c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb818) {
            ctx->pc = 0x3FB838u;
            goto label_3fb838;
        }
    }
    ctx->pc = 0x3FB820u;
label_3fb820:
    // 0x3fb820: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fb820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fb824:
    // 0x3fb824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb828:
    // 0x3fb828: 0xc0e9666  jal         func_3A5998
label_3fb82c:
    if (ctx->pc == 0x3FB82Cu) {
        ctx->pc = 0x3FB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB828u;
        // 0x3fb82c: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB830u;
        goto label_3fb830;
    }
    ctx->pc = 0x3FB828u;
    SET_GPR_U32(ctx, 31, 0x3FB830u);
    ctx->pc = 0x3FB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB828u;
    // 0x3fb82c: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FB828u, 0x3FB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB830u;
label_3fb830:
    // 0x3fb830: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3fb834:
    if (ctx->pc == 0x3FB834u) {
        ctx->pc = 0x3FB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB830u;
        // 0x3fb834: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB838u;
        goto label_3fb838;
    }
    ctx->pc = 0x3FB830u;
    {
        const bool branch_taken_0x3fb830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB830u;
        // 0x3fb834: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb830) {
            ctx->pc = 0x3FB860u;
            goto label_3fb860;
        }
    }
    ctx->pc = 0x3FB838u;
label_3fb838:
    // 0x3fb838: 0xc0e9290  jal         func_3A4A40
label_3fb83c:
    if (ctx->pc == 0x3FB83Cu) {
        ctx->pc = 0x3FB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB838u;
        // 0x3fb83c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB840u;
        goto label_3fb840;
    }
    ctx->pc = 0x3FB838u;
    SET_GPR_U32(ctx, 31, 0x3FB840u);
    ctx->pc = 0x3FB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB838u;
    // 0x3fb83c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3FB838u, 0x3FB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB840u;
label_3fb840:
    // 0x3fb840: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3fb844:
    // 0x3fb844: 0xc0e9290  jal         func_3A4A40
label_3fb848:
    if (ctx->pc == 0x3FB848u) {
        ctx->pc = 0x3FB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB844u;
        // 0x3fb848: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB84Cu;
        goto label_3fb84c;
    }
    ctx->pc = 0x3FB844u;
    SET_GPR_U32(ctx, 31, 0x3FB84Cu);
    ctx->pc = 0x3FB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB844u;
    // 0x3fb848: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3FB844u, 0x3FB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB84Cu;
label_3fb84c:
    // 0x3fb84c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb850:
    // 0x3fb850: 0xc0e858c  jal         func_3A1630
label_3fb854:
    if (ctx->pc == 0x3FB854u) {
        ctx->pc = 0x3FB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB850u;
        // 0x3fb854: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB858u;
        goto label_3fb858;
    }
    ctx->pc = 0x3FB850u;
    SET_GPR_U32(ctx, 31, 0x3FB858u);
    ctx->pc = 0x3FB854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB850u;
    // 0x3fb854: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FB850u, 0x3FB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB858u;
label_3fb858:
    // 0x3fb858: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3fb858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fb85c:
    // 0x3fb85c: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x3fb85cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_3fb860:
    // 0x3fb860: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x3fb860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_3fb864:
    // 0x3fb864: 0xc0e9290  jal         func_3A4A40
label_3fb868:
    if (ctx->pc == 0x3FB868u) {
        ctx->pc = 0x3FB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB864u;
        // 0x3fb868: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB86Cu;
        goto label_3fb86c;
    }
    ctx->pc = 0x3FB864u;
    SET_GPR_U32(ctx, 31, 0x3FB86Cu);
    ctx->pc = 0x3FB868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB864u;
    // 0x3fb868: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3FB864u, 0x3FB86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB86Cu;
label_3fb86c:
    // 0x3fb86c: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x3fb86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3fb870:
    // 0x3fb870: 0xc0e9290  jal         func_3A4A40
label_3fb874:
    if (ctx->pc == 0x3FB874u) {
        ctx->pc = 0x3FB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB870u;
        // 0x3fb874: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB878u;
        goto label_3fb878;
    }
    ctx->pc = 0x3FB870u;
    SET_GPR_U32(ctx, 31, 0x3FB878u);
    ctx->pc = 0x3FB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB870u;
    // 0x3fb874: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3FB870u, 0x3FB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB878u;
label_3fb878:
    // 0x3fb878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fb87c:
    // 0x3fb87c: 0xc0e8dee  jal         func_3A37B8
label_3fb880:
    if (ctx->pc == 0x3FB880u) {
        ctx->pc = 0x3FB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB87Cu;
        // 0x3fb880: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB884u;
        goto label_3fb884;
    }
    ctx->pc = 0x3FB87Cu;
    SET_GPR_U32(ctx, 31, 0x3FB884u);
    ctx->pc = 0x3FB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB87Cu;
    // 0x3fb880: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FB87Cu, 0x3FB884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB884u;
label_3fb884:
    // 0x3fb884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fb884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb888:
    // 0x3fb888: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x3fb888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_3fb88c:
    // 0x3fb88c: 0xc0e92a6  jal         func_3A4A98
label_3fb890:
    if (ctx->pc == 0x3FB890u) {
        ctx->pc = 0x3FB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB88Cu;
        // 0x3fb890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB894u;
        goto label_3fb894;
    }
    ctx->pc = 0x3FB88Cu;
    SET_GPR_U32(ctx, 31, 0x3FB894u);
    ctx->pc = 0x3FB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB88Cu;
    // 0x3fb890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3FB88Cu, 0x3FB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB894u;
label_3fb894:
    // 0x3fb894: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x3fb894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3fb898:
    // 0x3fb898: 0xc0e92a6  jal         func_3A4A98
label_3fb89c:
    if (ctx->pc == 0x3FB89Cu) {
        ctx->pc = 0x3FB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB898u;
        // 0x3fb89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB8A0u;
        goto label_3fb8a0;
    }
    ctx->pc = 0x3FB898u;
    SET_GPR_U32(ctx, 31, 0x3FB8A0u);
    ctx->pc = 0x3FB89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB898u;
    // 0x3fb89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3FB898u, 0x3FB8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB8A0u;
label_3fb8a0:
    // 0x3fb8a0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3fb8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3fb8a4:
    // 0x3fb8a4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3fb8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fb8a8:
    // 0x3fb8a8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3fb8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fb8ac:
    // 0x3fb8ac: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3fb8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fb8b0:
    // 0x3fb8b0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3fb8b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb8b4:
    // 0x3fb8b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3fb8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fb8b8:
    // 0x3fb8b8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3fb8b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fb8bc:
    // 0x3fb8bc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3fb8bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fb8c0:
    // 0x3fb8c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fb8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb8c4:
    // 0x3fb8c4: 0x3e00008  jr          $ra
label_3fb8c8:
    if (ctx->pc == 0x3FB8C8u) {
        ctx->pc = 0x3FB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB8C4u;
        // 0x3fb8c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB8CCu;
        goto label_3fb8cc;
    }
    ctx->pc = 0x3FB8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB8C4u;
        // 0x3fb8c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB8CCu;
label_3fb8cc:
    // 0x3fb8cc: 0x0  nop
    ctx->pc = 0x3fb8ccu;
    // NOP
    ctx->pc = 0x3fb8d0u;
}
