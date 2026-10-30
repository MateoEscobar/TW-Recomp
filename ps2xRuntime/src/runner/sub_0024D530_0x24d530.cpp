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

// Function: sub_0024D530
// Address: 0x24d530 - 0x24d810
void sub_0024D530_0x24d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D530_0x24d530");
#endif

    switch (ctx->pc) {
        case 0x24d530u: goto label_24d530;
        case 0x24d534u: goto label_24d534;
        case 0x24d538u: goto label_24d538;
        case 0x24d53cu: goto label_24d53c;
        case 0x24d540u: goto label_24d540;
        case 0x24d544u: goto label_24d544;
        case 0x24d548u: goto label_24d548;
        case 0x24d54cu: goto label_24d54c;
        case 0x24d550u: goto label_24d550;
        case 0x24d554u: goto label_24d554;
        case 0x24d558u: goto label_24d558;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d560u: goto label_24d560;
        case 0x24d564u: goto label_24d564;
        case 0x24d568u: goto label_24d568;
        case 0x24d56cu: goto label_24d56c;
        case 0x24d570u: goto label_24d570;
        case 0x24d574u: goto label_24d574;
        case 0x24d578u: goto label_24d578;
        case 0x24d57cu: goto label_24d57c;
        case 0x24d580u: goto label_24d580;
        case 0x24d584u: goto label_24d584;
        case 0x24d588u: goto label_24d588;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d590u: goto label_24d590;
        case 0x24d594u: goto label_24d594;
        case 0x24d598u: goto label_24d598;
        case 0x24d59cu: goto label_24d59c;
        case 0x24d5a0u: goto label_24d5a0;
        case 0x24d5a4u: goto label_24d5a4;
        case 0x24d5a8u: goto label_24d5a8;
        case 0x24d5acu: goto label_24d5ac;
        case 0x24d5b0u: goto label_24d5b0;
        case 0x24d5b4u: goto label_24d5b4;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5bcu: goto label_24d5bc;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5c4u: goto label_24d5c4;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5ccu: goto label_24d5cc;
        case 0x24d5d0u: goto label_24d5d0;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5dcu: goto label_24d5dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d5e4u: goto label_24d5e4;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5ecu: goto label_24d5ec;
        case 0x24d5f0u: goto label_24d5f0;
        case 0x24d5f4u: goto label_24d5f4;
        case 0x24d5f8u: goto label_24d5f8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d600u: goto label_24d600;
        case 0x24d604u: goto label_24d604;
        case 0x24d608u: goto label_24d608;
        case 0x24d60cu: goto label_24d60c;
        case 0x24d610u: goto label_24d610;
        case 0x24d614u: goto label_24d614;
        case 0x24d618u: goto label_24d618;
        case 0x24d61cu: goto label_24d61c;
        case 0x24d620u: goto label_24d620;
        case 0x24d624u: goto label_24d624;
        case 0x24d628u: goto label_24d628;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d630u: goto label_24d630;
        case 0x24d634u: goto label_24d634;
        case 0x24d638u: goto label_24d638;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d640u: goto label_24d640;
        case 0x24d644u: goto label_24d644;
        case 0x24d648u: goto label_24d648;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d650u: goto label_24d650;
        case 0x24d654u: goto label_24d654;
        case 0x24d658u: goto label_24d658;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d660u: goto label_24d660;
        case 0x24d664u: goto label_24d664;
        case 0x24d668u: goto label_24d668;
        case 0x24d66cu: goto label_24d66c;
        case 0x24d670u: goto label_24d670;
        case 0x24d674u: goto label_24d674;
        case 0x24d678u: goto label_24d678;
        case 0x24d67cu: goto label_24d67c;
        case 0x24d680u: goto label_24d680;
        case 0x24d684u: goto label_24d684;
        case 0x24d688u: goto label_24d688;
        case 0x24d68cu: goto label_24d68c;
        case 0x24d690u: goto label_24d690;
        case 0x24d694u: goto label_24d694;
        case 0x24d698u: goto label_24d698;
        case 0x24d69cu: goto label_24d69c;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6a4u: goto label_24d6a4;
        case 0x24d6a8u: goto label_24d6a8;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d6b4u: goto label_24d6b4;
        case 0x24d6b8u: goto label_24d6b8;
        case 0x24d6bcu: goto label_24d6bc;
        case 0x24d6c0u: goto label_24d6c0;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6d0u: goto label_24d6d0;
        case 0x24d6d4u: goto label_24d6d4;
        case 0x24d6d8u: goto label_24d6d8;
        case 0x24d6dcu: goto label_24d6dc;
        case 0x24d6e0u: goto label_24d6e0;
        case 0x24d6e4u: goto label_24d6e4;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d6ecu: goto label_24d6ec;
        case 0x24d6f0u: goto label_24d6f0;
        case 0x24d6f4u: goto label_24d6f4;
        case 0x24d6f8u: goto label_24d6f8;
        case 0x24d6fcu: goto label_24d6fc;
        case 0x24d700u: goto label_24d700;
        case 0x24d704u: goto label_24d704;
        case 0x24d708u: goto label_24d708;
        case 0x24d70cu: goto label_24d70c;
        case 0x24d710u: goto label_24d710;
        case 0x24d714u: goto label_24d714;
        case 0x24d718u: goto label_24d718;
        case 0x24d71cu: goto label_24d71c;
        case 0x24d720u: goto label_24d720;
        case 0x24d724u: goto label_24d724;
        case 0x24d728u: goto label_24d728;
        case 0x24d72cu: goto label_24d72c;
        case 0x24d730u: goto label_24d730;
        case 0x24d734u: goto label_24d734;
        case 0x24d738u: goto label_24d738;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d740u: goto label_24d740;
        case 0x24d744u: goto label_24d744;
        case 0x24d748u: goto label_24d748;
        case 0x24d74cu: goto label_24d74c;
        case 0x24d750u: goto label_24d750;
        case 0x24d754u: goto label_24d754;
        case 0x24d758u: goto label_24d758;
        case 0x24d75cu: goto label_24d75c;
        case 0x24d760u: goto label_24d760;
        case 0x24d764u: goto label_24d764;
        case 0x24d768u: goto label_24d768;
        case 0x24d76cu: goto label_24d76c;
        case 0x24d770u: goto label_24d770;
        case 0x24d774u: goto label_24d774;
        case 0x24d778u: goto label_24d778;
        case 0x24d77cu: goto label_24d77c;
        case 0x24d780u: goto label_24d780;
        case 0x24d784u: goto label_24d784;
        case 0x24d788u: goto label_24d788;
        case 0x24d78cu: goto label_24d78c;
        case 0x24d790u: goto label_24d790;
        case 0x24d794u: goto label_24d794;
        case 0x24d798u: goto label_24d798;
        case 0x24d79cu: goto label_24d79c;
        case 0x24d7a0u: goto label_24d7a0;
        case 0x24d7a4u: goto label_24d7a4;
        case 0x24d7a8u: goto label_24d7a8;
        case 0x24d7acu: goto label_24d7ac;
        case 0x24d7b0u: goto label_24d7b0;
        case 0x24d7b4u: goto label_24d7b4;
        case 0x24d7b8u: goto label_24d7b8;
        case 0x24d7bcu: goto label_24d7bc;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d7c4u: goto label_24d7c4;
        case 0x24d7c8u: goto label_24d7c8;
        case 0x24d7ccu: goto label_24d7cc;
        case 0x24d7d0u: goto label_24d7d0;
        case 0x24d7d4u: goto label_24d7d4;
        case 0x24d7d8u: goto label_24d7d8;
        case 0x24d7dcu: goto label_24d7dc;
        case 0x24d7e0u: goto label_24d7e0;
        case 0x24d7e4u: goto label_24d7e4;
        case 0x24d7e8u: goto label_24d7e8;
        case 0x24d7ecu: goto label_24d7ec;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d7f8u: goto label_24d7f8;
        case 0x24d7fcu: goto label_24d7fc;
        case 0x24d800u: goto label_24d800;
        case 0x24d804u: goto label_24d804;
        case 0x24d808u: goto label_24d808;
        case 0x24d80cu: goto label_24d80c;
        default: break;
    }

    ctx->pc = 0x24d530u;

label_24d530:
    // 0x24d530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_24d534:
    // 0x24d534: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x24d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_24d538:
    // 0x24d538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24d538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d53c:
    // 0x24d53c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x24d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_24d540:
    // 0x24d540: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x24d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_24d544:
    // 0x24d544: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x24d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_24d548:
    // 0x24d548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_24d54c:
    // 0x24d54c: 0xc087502  jal         func_21D408
label_24d550:
    if (ctx->pc == 0x24D550u) {
        ctx->pc = 0x24D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D54Cu;
        // 0x24d550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D554u;
        goto label_24d554;
    }
    ctx->pc = 0x24D54Cu;
    SET_GPR_U32(ctx, 31, 0x24D554u);
    ctx->pc = 0x24D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D54Cu;
    // 0x24d550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x24D54Cu, 0x24D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D554u;
label_24d554:
    // 0x24d554: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24d558:
    // 0x24d558: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24d55c:
    if (ctx->pc == 0x24D55Cu) {
        ctx->pc = 0x24D560u;
        goto label_24d560;
    }
    ctx->pc = 0x24D558u;
    {
        const bool branch_taken_0x24d558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d558) {
            ctx->pc = 0x24D56Cu;
            goto label_24d56c;
        }
    }
    ctx->pc = 0x24D560u;
label_24d560:
    // 0x24d560: 0xc089c18  jal         func_227060
label_24d564:
    if (ctx->pc == 0x24D564u) {
        ctx->pc = 0x24D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D560u;
        // 0x24d564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D568u;
        goto label_24d568;
    }
    ctx->pc = 0x24D560u;
    SET_GPR_U32(ctx, 31, 0x24D568u);
    ctx->pc = 0x24D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D560u;
    // 0x24d564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x24D560u, 0x24D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D568u;
label_24d568:
    // 0x24d568: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x24d568u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24d56c:
    // 0x24d56c: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_24d570:
    if (ctx->pc == 0x24D570u) {
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D574u;
        goto label_24d574;
    }
    ctx->pc = 0x24D56Cu;
    {
        const bool branch_taken_0x24d56c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d56c) {
            ctx->pc = 0x24D570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D56Cu;
            // 0x24d570: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D58Cu;
            goto label_24d58c;
        }
    }
    ctx->pc = 0x24D574u;
label_24d574:
    // 0x24d574: 0xc089c18  jal         func_227060
label_24d578:
    if (ctx->pc == 0x24D578u) {
        ctx->pc = 0x24D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D574u;
        // 0x24d578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D57Cu;
        goto label_24d57c;
    }
    ctx->pc = 0x24D574u;
    SET_GPR_U32(ctx, 31, 0x24D57Cu);
    ctx->pc = 0x24D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D574u;
    // 0x24d578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x24D574u, 0x24D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D57Cu;
label_24d57c:
    // 0x24d57c: 0xc0e57ce  jal         func_395F38
label_24d580:
    if (ctx->pc == 0x24D580u) {
        ctx->pc = 0x24D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D57Cu;
        // 0x24d580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D584u;
        goto label_24d584;
    }
    ctx->pc = 0x24D57Cu;
    SET_GPR_U32(ctx, 31, 0x24D584u);
    ctx->pc = 0x24D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D57Cu;
    // 0x24d580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D57Cu, 0x24D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D584u;
label_24d584:
    // 0x24d584: 0x10000095  b           . + 4 + (0x95 << 2)
label_24d588:
    if (ctx->pc == 0x24D588u) {
        ctx->pc = 0x24D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D584u;
        // 0x24d588: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D58Cu;
        goto label_24d58c;
    }
    ctx->pc = 0x24D584u;
    {
        const bool branch_taken_0x24d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D584u;
        // 0x24d588: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d584) {
            ctx->pc = 0x24D7DCu;
            goto label_24d7dc;
        }
    }
    ctx->pc = 0x24D58Cu;
label_24d58c:
    // 0x24d58c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24d58cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24d590:
    // 0x24d590: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_24d594:
    if (ctx->pc == 0x24D594u) {
        ctx->pc = 0x24D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D590u;
        // 0x24d594: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D598u;
        goto label_24d598;
    }
    ctx->pc = 0x24D590u;
    {
        const bool branch_taken_0x24d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D590u;
        // 0x24d594: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d590) {
            ctx->pc = 0x24D7DCu;
            goto label_24d7dc;
        }
    }
    ctx->pc = 0x24D598u;
label_24d598:
    // 0x24d598: 0x8e250660  lw          $a1, 0x660($s1)
    ctx->pc = 0x24d598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_24d59c:
    // 0x24d59c: 0x10a00090  beqz        $a1, . + 4 + (0x90 << 2)
label_24d5a0:
    if (ctx->pc == 0x24D5A0u) {
        ctx->pc = 0x24D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D59Cu;
        // 0x24d5a0: 0x8c4309a0  lw          $v1, 0x9A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5A4u;
        goto label_24d5a4;
    }
    ctx->pc = 0x24D59Cu;
    {
        const bool branch_taken_0x24d59c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D59Cu;
        // 0x24d5a0: 0x8c4309a0  lw          $v1, 0x9A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d59c) {
            ctx->pc = 0x24D7E0u;
            goto label_24d7e0;
        }
    }
    ctx->pc = 0x24D5A4u;
label_24d5a4:
    // 0x24d5a4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x24d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_24d5a8:
    // 0x24d5a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_24d5ac:
    if (ctx->pc == 0x24D5ACu) {
        ctx->pc = 0x24D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A8u;
        // 0x24d5ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5B0u;
        goto label_24d5b0;
    }
    ctx->pc = 0x24D5A8u;
    {
        const bool branch_taken_0x24d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d5a8) {
            ctx->pc = 0x24D5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D5A8u;
            // 0x24d5ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D5C0u;
            goto label_24d5c0;
        }
    }
    ctx->pc = 0x24D5B0u;
label_24d5b0:
    // 0x24d5b0: 0x50510003  beql        $v0, $s1, . + 4 + (0x3 << 2)
label_24d5b4:
    if (ctx->pc == 0x24D5B4u) {
        ctx->pc = 0x24D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B0u;
        // 0x24d5b4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5B8u;
        goto label_24d5b8;
    }
    ctx->pc = 0x24D5B0u;
    {
        const bool branch_taken_0x24d5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x24d5b0) {
            ctx->pc = 0x24D5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D5B0u;
            // 0x24d5b4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D5C0u;
            goto label_24d5c0;
        }
    }
    ctx->pc = 0x24D5B8u;
label_24d5b8:
    // 0x24d5b8: 0x10000087  b           . + 4 + (0x87 << 2)
label_24d5bc:
    if (ctx->pc == 0x24D5BCu) {
        ctx->pc = 0x24D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B8u;
        // 0x24d5bc: 0xae200660  sw          $zero, 0x660($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5C0u;
        goto label_24d5c0;
    }
    ctx->pc = 0x24D5B8u;
    {
        const bool branch_taken_0x24d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B8u;
        // 0x24d5bc: 0xae200660  sw          $zero, 0x660($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5b8) {
            ctx->pc = 0x24D7D8u;
            goto label_24d7d8;
        }
    }
    ctx->pc = 0x24D5C0u;
label_24d5c0:
    // 0x24d5c0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x24d5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_24d5c4:
    // 0x24d5c4: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_24d5c8:
    if (ctx->pc == 0x24D5C8u) {
        ctx->pc = 0x24D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C4u;
        // 0x24d5c8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5CCu;
        goto label_24d5cc;
    }
    ctx->pc = 0x24D5C4u;
    {
        const bool branch_taken_0x24d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C4u;
        // 0x24d5c8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5c4) {
            ctx->pc = 0x24D79Cu;
            goto label_24d79c;
        }
    }
    ctx->pc = 0x24D5CCu;
label_24d5cc:
    // 0x24d5cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24d5d0:
    // 0x24d5d0: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x24d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_24d5d4:
    // 0x24d5d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24d5d8:
    // 0x24d5d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24d5dc:
    // 0x24d5dc: 0x800008  jr          $a0
label_24d5e0:
    if (ctx->pc == 0x24D5E0u) {
        ctx->pc = 0x24D5E4u;
        goto label_24d5e4;
    }
    ctx->pc = 0x24D5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D5E4u: goto label_24d5e4;
            case 0x24D6E0u: goto label_24d6e0;
            case 0x24D764u: goto label_24d764;
            case 0x24D79Cu: goto label_24d79c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D5DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D5E4u;
label_24d5e4:
    // 0x24d5e4: 0xc08a61a  jal         func_229868
label_24d5e8:
    if (ctx->pc == 0x24D5E8u) {
        ctx->pc = 0x24D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5E4u;
        // 0x24d5e8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5ECu;
        goto label_24d5ec;
    }
    ctx->pc = 0x24D5E4u;
    SET_GPR_U32(ctx, 31, 0x24D5ECu);
    ctx->pc = 0x24D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5E4u;
    // 0x24d5e8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x24D5E4u, 0x24D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5ECu;
label_24d5ec:
    // 0x24d5ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24d5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d5f0:
    // 0x24d5f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_24d5f4:
    // 0x24d5f4: 0xc089998  jal         func_226660
label_24d5f8:
    if (ctx->pc == 0x24D5F8u) {
        ctx->pc = 0x24D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5F4u;
        // 0x24d5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5FCu;
        goto label_24d5fc;
    }
    ctx->pc = 0x24D5F4u;
    SET_GPR_U32(ctx, 31, 0x24D5FCu);
    ctx->pc = 0x24D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5F4u;
    // 0x24d5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x24D5F4u, 0x24D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5FCu;
label_24d5fc:
    // 0x24d5fc: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_24d600:
    if (ctx->pc == 0x24D600u) {
        ctx->pc = 0x24D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5FCu;
        // 0x24d600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D604u;
        goto label_24d604;
    }
    ctx->pc = 0x24D5FCu;
    {
        const bool branch_taken_0x24d5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5FCu;
        // 0x24d600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5fc) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D604u;
label_24d604:
    // 0x24d604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d608:
    // 0x24d608: 0xc08702a  jal         func_21C0A8
label_24d60c:
    if (ctx->pc == 0x24D60Cu) {
        ctx->pc = 0x24D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D608u;
        // 0x24d60c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D610u;
        goto label_24d610;
    }
    ctx->pc = 0x24D608u;
    SET_GPR_U32(ctx, 31, 0x24D610u);
    ctx->pc = 0x24D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D608u;
    // 0x24d60c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x24D608u, 0x24D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D610u;
label_24d610:
    // 0x24d610: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_24d614:
    if (ctx->pc == 0x24D614u) {
        ctx->pc = 0x24D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D610u;
        // 0x24d614: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D618u;
        goto label_24d618;
    }
    ctx->pc = 0x24D610u;
    {
        const bool branch_taken_0x24d610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D610u;
        // 0x24d614: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d610) {
            ctx->pc = 0x24D734u;
            goto label_24d734;
        }
    }
    ctx->pc = 0x24D618u;
label_24d618:
    // 0x24d618: 0x8e220660  lw          $v0, 0x660($s1)
    ctx->pc = 0x24d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_24d61c:
    // 0x24d61c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x24d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_24d620:
    // 0x24d620: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x24d620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24d624:
    // 0x24d624: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x24d624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
label_24d628:
    // 0x24d628: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24d628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24d62c:
    // 0x24d62c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x24d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_24d630:
    // 0x24d630: 0xc1078f6  jal         func_41E3D8
label_24d634:
    if (ctx->pc == 0x24D634u) {
        ctx->pc = 0x24D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D630u;
        // 0x24d634: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D638u;
        goto label_24d638;
    }
    ctx->pc = 0x24D630u;
    SET_GPR_U32(ctx, 31, 0x24D638u);
    ctx->pc = 0x24D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D630u;
    // 0x24d634: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x24D630u, 0x24D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D638u;
label_24d638:
    // 0x24d638: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_24d63c:
    if (ctx->pc == 0x24D63Cu) {
        ctx->pc = 0x24D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D638u;
        // 0x24d63c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D640u;
        goto label_24d640;
    }
    ctx->pc = 0x24D638u;
    {
        const bool branch_taken_0x24d638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D638u;
        // 0x24d63c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d638) {
            ctx->pc = 0x24D65Cu;
            goto label_24d65c;
        }
    }
    ctx->pc = 0x24D640u;
label_24d640:
    // 0x24d640: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x24d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_24d644:
    // 0x24d644: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24d644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24d648:
    // 0x24d648: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x24d648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_24d64c:
    // 0x24d64c: 0xc1078f6  jal         func_41E3D8
label_24d650:
    if (ctx->pc == 0x24D650u) {
        ctx->pc = 0x24D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D64Cu;
        // 0x24d650: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D654u;
        goto label_24d654;
    }
    ctx->pc = 0x24D64Cu;
    SET_GPR_U32(ctx, 31, 0x24D654u);
    ctx->pc = 0x24D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D64Cu;
    // 0x24d650: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x24D64Cu, 0x24D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D654u;
label_24d654:
    // 0x24d654: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_24d658:
    if (ctx->pc == 0x24D658u) {
        ctx->pc = 0x24D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D654u;
        // 0x24d658: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D65Cu;
        goto label_24d65c;
    }
    ctx->pc = 0x24D654u;
    {
        const bool branch_taken_0x24d654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D654u;
        // 0x24d658: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d654) {
            ctx->pc = 0x24D6CCu;
            goto label_24d6cc;
        }
    }
    ctx->pc = 0x24D65Cu;
label_24d65c:
    // 0x24d65c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x24d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24d660:
    // 0x24d660: 0xc04444c  jal         func_111130
label_24d664:
    if (ctx->pc == 0x24D664u) {
        ctx->pc = 0x24D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D660u;
        // 0x24d664: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D668u;
        goto label_24d668;
    }
    ctx->pc = 0x24D660u;
    SET_GPR_U32(ctx, 31, 0x24D668u);
    ctx->pc = 0x24D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D660u;
    // 0x24d664: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x24D660u, 0x24D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D668u;
label_24d668:
    // 0x24d668: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x24d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_24d66c:
    // 0x24d66c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24d66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d670:
    // 0x24d670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d674:
    // 0x24d674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d678:
    // 0x24d678: 0xc043f36  jal         func_10FCD8
label_24d67c:
    if (ctx->pc == 0x24D67Cu) {
        ctx->pc = 0x24D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D678u;
        // 0x24d67c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D680u;
        goto label_24d680;
    }
    ctx->pc = 0x24D678u;
    SET_GPR_U32(ctx, 31, 0x24D680u);
    ctx->pc = 0x24D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D678u;
    // 0x24d67c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x24D678u, 0x24D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D680u;
label_24d680:
    // 0x24d680: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x24d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_24d684:
    // 0x24d684: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24d684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24d688:
    // 0x24d688: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x24d688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_24d68c:
    // 0x24d68c: 0xc1078f6  jal         func_41E3D8
label_24d690:
    if (ctx->pc == 0x24D690u) {
        ctx->pc = 0x24D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D68Cu;
        // 0x24d690: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D694u;
        goto label_24d694;
    }
    ctx->pc = 0x24D68Cu;
    SET_GPR_U32(ctx, 31, 0x24D694u);
    ctx->pc = 0x24D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D68Cu;
    // 0x24d690: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x24D68Cu, 0x24D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D694u;
label_24d694:
    // 0x24d694: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_24d698:
    if (ctx->pc == 0x24D698u) {
        ctx->pc = 0x24D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D694u;
        // 0x24d698: 0x8e450380  lw          $a1, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D69Cu;
        goto label_24d69c;
    }
    ctx->pc = 0x24D694u;
    {
        const bool branch_taken_0x24d694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d694) {
            ctx->pc = 0x24D698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D694u;
            // 0x24d698: 0x8e450380  lw          $a1, 0x380($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D6A0u;
            goto label_24d6a0;
        }
    }
    ctx->pc = 0x24D69Cu;
label_24d69c:
    // 0x24d69c: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x24d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_24d6a0:
    // 0x24d6a0: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x24d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_24d6a4:
    // 0x24d6a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24d6a8:
    // 0x24d6a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x24d6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24d6ac:
    // 0x24d6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24d6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d6b0:
    // 0x24d6b0: 0xc10796c  jal         func_41E5B0
label_24d6b4:
    if (ctx->pc == 0x24D6B4u) {
        ctx->pc = 0x24D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6B0u;
        // 0x24d6b4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6B8u;
        goto label_24d6b8;
    }
    ctx->pc = 0x24D6B0u;
    SET_GPR_U32(ctx, 31, 0x24D6B8u);
    ctx->pc = 0x24D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6B0u;
    // 0x24d6b4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x24D6B0u, 0x24D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6B8u;
label_24d6b8:
    // 0x24d6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d6bc:
    // 0x24d6bc: 0xc0983f4  jal         func_260FD0
label_24d6c0:
    if (ctx->pc == 0x24D6C0u) {
        ctx->pc = 0x24D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6BCu;
        // 0x24d6c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6C4u;
        goto label_24d6c4;
    }
    ctx->pc = 0x24D6BCu;
    SET_GPR_U32(ctx, 31, 0x24D6C4u);
    ctx->pc = 0x24D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6BCu;
    // 0x24d6c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260FD0u, 0x24D6BCu, 0x24D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6C4u;
label_24d6c4:
    // 0x24d6c4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_24d6c8:
    if (ctx->pc == 0x24D6C8u) {
        ctx->pc = 0x24D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6C4u;
        // 0x24d6c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6CCu;
        goto label_24d6cc;
    }
    ctx->pc = 0x24D6C4u;
    {
        const bool branch_taken_0x24d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6C4u;
        // 0x24d6c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6c4) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D6CCu;
label_24d6cc:
    // 0x24d6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d6d0:
    // 0x24d6d0: 0xc09832a  jal         func_260CA8
label_24d6d4:
    if (ctx->pc == 0x24D6D4u) {
        ctx->pc = 0x24D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D0u;
        // 0x24d6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6D8u;
        goto label_24d6d8;
    }
    ctx->pc = 0x24D6D0u;
    SET_GPR_U32(ctx, 31, 0x24D6D8u);
    ctx->pc = 0x24D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6D0u;
    // 0x24d6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CA8u, 0x24D6D0u, 0x24D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6D8u;
label_24d6d8:
    // 0x24d6d8: 0x10000045  b           . + 4 + (0x45 << 2)
label_24d6dc:
    if (ctx->pc == 0x24D6DCu) {
        ctx->pc = 0x24D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D8u;
        // 0x24d6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6E0u;
        goto label_24d6e0;
    }
    ctx->pc = 0x24D6D8u;
    {
        const bool branch_taken_0x24d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D8u;
        // 0x24d6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6d8) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D6E0u;
label_24d6e0:
    // 0x24d6e0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x24d6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24d6e4:
    // 0x24d6e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x24d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_24d6e8:
    // 0x24d6e8: 0x86300092  lh          $s0, 0x92($s1)
    ctx->pc = 0x24d6e8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_24d6ec:
    // 0x24d6ec: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x24d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24d6f0:
    // 0x24d6f0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x24d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_24d6f4:
    // 0x24d6f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d6f8:
    // 0x24d6f8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x24d6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_24d6fc:
    // 0x24d6fc: 0x84c500a0  lh          $a1, 0xA0($a2)
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
label_24d700:
    // 0x24d700: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24d700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24d704:
    // 0x24d704: 0x8cc300a4  lw          $v1, 0xA4($a2)
    ctx->pc = 0x24d704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_24d708:
    // 0x24d708: 0x60f809  jalr        $v1
label_24d70c:
    if (ctx->pc == 0x24D70Cu) {
        ctx->pc = 0x24D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D708u;
        // 0x24d70c: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D710u;
        goto label_24d710;
    }
    ctx->pc = 0x24D708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24D710u);
        ctx->pc = 0x24D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D708u;
        // 0x24d70c: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D708u, 0x24D710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D710u;
label_24d710:
    // 0x24d710: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x24d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24d714:
    // 0x24d714: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x24d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24d718:
    // 0x24d718: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24d71c:
    // 0x24d71c: 0x0  nop
    ctx->pc = 0x24d71cu;
    // NOP
label_24d720:
    // 0x24d720: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_24d724:
    if (ctx->pc == 0x24D724u) {
        ctx->pc = 0x24D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D720u;
        // 0x24d724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D728u;
        goto label_24d728;
    }
    ctx->pc = 0x24D720u;
    {
        const bool branch_taken_0x24d720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D720u;
        // 0x24d724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d720) {
            ctx->pc = 0x24D72Cu;
            goto label_24d72c;
        }
    }
    ctx->pc = 0x24D728u;
label_24d728:
    // 0x24d728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d72c:
    // 0x24d72c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_24d730:
    if (ctx->pc == 0x24D730u) {
        ctx->pc = 0x24D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D72Cu;
        // 0x24d730: 0x8e220660  lw          $v0, 0x660($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D734u;
        goto label_24d734;
    }
    ctx->pc = 0x24D72Cu;
    {
        const bool branch_taken_0x24d72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d72c) {
            ctx->pc = 0x24D730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D72Cu;
            // 0x24d730: 0x8e220660  lw          $v0, 0x660($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D73Cu;
            goto label_24d73c;
        }
    }
    ctx->pc = 0x24D734u;
label_24d734:
    // 0x24d734: 0x1000002e  b           . + 4 + (0x2E << 2)
label_24d738:
    if (ctx->pc == 0x24D738u) {
        ctx->pc = 0x24D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D734u;
        // 0x24d738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D73Cu;
        goto label_24d73c;
    }
    ctx->pc = 0x24D734u;
    {
        const bool branch_taken_0x24d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D734u;
        // 0x24d738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d734) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D73Cu;
label_24d73c:
    // 0x24d73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d740:
    // 0x24d740: 0xc089c20  jal         func_227080
label_24d744:
    if (ctx->pc == 0x24D744u) {
        ctx->pc = 0x24D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D740u;
        // 0x24d744: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D748u;
        goto label_24d748;
    }
    ctx->pc = 0x24D740u;
    SET_GPR_U32(ctx, 31, 0x24D748u);
    ctx->pc = 0x24D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D740u;
    // 0x24d744: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x24D740u, 0x24D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D748u;
label_24d748:
    // 0x24d748: 0xc088ac6  jal         func_222B18
label_24d74c:
    if (ctx->pc == 0x24D74Cu) {
        ctx->pc = 0x24D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D748u;
        // 0x24d74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D750u;
        goto label_24d750;
    }
    ctx->pc = 0x24D748u;
    SET_GPR_U32(ctx, 31, 0x24D750u);
    ctx->pc = 0x24D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D748u;
    // 0x24d74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x24D748u, 0x24D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D750u;
label_24d750:
    // 0x24d750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d754:
    // 0x24d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d758:
    // 0x24d758: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x24d758u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_24d75c:
    // 0x24d75c: 0x1000000a  b           . + 4 + (0xA << 2)
label_24d760:
    if (ctx->pc == 0x24D760u) {
        ctx->pc = 0x24D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D75Cu;
        // 0x24d760: 0x240502ab  addiu       $a1, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D764u;
        goto label_24d764;
    }
    ctx->pc = 0x24D75Cu;
    {
        const bool branch_taken_0x24d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D75Cu;
        // 0x24d760: 0x240502ab  addiu       $a1, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d75c) {
            ctx->pc = 0x24D788u;
            goto label_24d788;
        }
    }
    ctx->pc = 0x24D764u;
label_24d764:
    // 0x24d764: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x24d764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24d768:
    // 0x24d768: 0xc089c20  jal         func_227080
label_24d76c:
    if (ctx->pc == 0x24D76Cu) {
        ctx->pc = 0x24D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D768u;
        // 0x24d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D770u;
        goto label_24d770;
    }
    ctx->pc = 0x24D768u;
    SET_GPR_U32(ctx, 31, 0x24D770u);
    ctx->pc = 0x24D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D768u;
    // 0x24d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x24D768u, 0x24D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D770u;
label_24d770:
    // 0x24d770: 0xc088ac6  jal         func_222B18
label_24d774:
    if (ctx->pc == 0x24D774u) {
        ctx->pc = 0x24D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D770u;
        // 0x24d774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D778u;
        goto label_24d778;
    }
    ctx->pc = 0x24D770u;
    SET_GPR_U32(ctx, 31, 0x24D778u);
    ctx->pc = 0x24D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D770u;
    // 0x24d774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x24D770u, 0x24D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D778u;
label_24d778:
    // 0x24d778: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24d77c:
    // 0x24d77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d780:
    // 0x24d780: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x24d780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_24d784:
    // 0x24d784: 0x240502af  addiu       $a1, $zero, 0x2AF
    ctx->pc = 0x24d784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 687));
label_24d788:
    // 0x24d788: 0x8e220660  lw          $v0, 0x660($s1)
    ctx->pc = 0x24d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_24d78c:
    // 0x24d78c: 0xc09e274  jal         func_2789D0
label_24d790:
    if (ctx->pc == 0x24D790u) {
        ctx->pc = 0x24D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D78Cu;
        // 0x24d790: 0xac510018  sw          $s1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D794u;
        goto label_24d794;
    }
    ctx->pc = 0x24D78Cu;
    SET_GPR_U32(ctx, 31, 0x24D794u);
    ctx->pc = 0x24D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D78Cu;
    // 0x24d790: 0xac510018  sw          $s1, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2789D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2789D0u, 0x24D78Cu, 0x24D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D794u;
label_24d794:
    // 0x24d794: 0x10000016  b           . + 4 + (0x16 << 2)
label_24d798:
    if (ctx->pc == 0x24D798u) {
        ctx->pc = 0x24D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D794u;
        // 0x24d798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D79Cu;
        goto label_24d79c;
    }
    ctx->pc = 0x24D794u;
    {
        const bool branch_taken_0x24d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D794u;
        // 0x24d798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d794) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D79Cu;
label_24d79c:
    // 0x24d79c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x24d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_24d7a0:
    // 0x24d7a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x24d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24d7a4:
    // 0x24d7a4: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x24d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
label_24d7a8:
    // 0x24d7a8: 0x8e240660  lw          $a0, 0x660($s1)
    ctx->pc = 0x24d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_24d7ac:
    // 0x24d7ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24d7b0:
    // 0x24d7b0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x24d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_24d7b4:
    // 0x24d7b4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x24d7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24d7b8:
    // 0x24d7b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24d7bc:
    // 0x24d7bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_24d7c0:
    // 0x24d7c0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_24d7c4:
    // 0x24d7c4: 0x40f809  jalr        $v0
label_24d7c8:
    if (ctx->pc == 0x24D7C8u) {
        ctx->pc = 0x24D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7C4u;
        // 0x24d7c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7CCu;
        goto label_24d7cc;
    }
    ctx->pc = 0x24D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D7CCu);
        ctx->pc = 0x24D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7C4u;
        // 0x24d7c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D7C4u, 0x24D7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D7CCu;
label_24d7cc:
    // 0x24d7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d7d0:
    // 0x24d7d0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_24d7d4:
    if (ctx->pc == 0x24D7D4u) {
        ctx->pc = 0x24D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7D0u;
        // 0x24d7d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7D8u;
        goto label_24d7d8;
    }
    ctx->pc = 0x24D7D0u;
    {
        const bool branch_taken_0x24d7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7D0u;
        // 0x24d7d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7d0) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D7D8u;
label_24d7d8:
    // 0x24d7d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24d7dc:
    // 0x24d7dc: 0x8c4309a0  lw          $v1, 0x9A0($v0)
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_24d7e0:
    // 0x24d7e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24d7e4:
    if (ctx->pc == 0x24D7E4u) {
        ctx->pc = 0x24D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E0u;
        // 0x24d7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7E8u;
        goto label_24d7e8;
    }
    ctx->pc = 0x24D7E0u;
    {
        const bool branch_taken_0x24d7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E0u;
        // 0x24d7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7e0) {
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D7E8u;
label_24d7e8:
    // 0x24d7e8: 0xc093604  jal         func_24D810
label_24d7ec:
    if (ctx->pc == 0x24D7ECu) {
        ctx->pc = 0x24D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E8u;
        // 0x24d7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7F0u;
        goto label_24d7f0;
    }
    ctx->pc = 0x24D7E8u;
    SET_GPR_U32(ctx, 31, 0x24D7F0u);
    ctx->pc = 0x24D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7E8u;
    // 0x24d7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D810u, 0x24D7E8u, 0x24D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D7F0u;
label_24d7f0:
    // 0x24d7f0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x24d7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24d7f4:
    // 0x24d7f4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x24d7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24d7f8:
    // 0x24d7f8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x24d7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24d7fc:
    // 0x24d7fc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x24d7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24d800:
    // 0x24d800: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24d800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24d804:
    // 0x24d804: 0x3e00008  jr          $ra
label_24d808:
    if (ctx->pc == 0x24D808u) {
        ctx->pc = 0x24D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D804u;
        // 0x24d808: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D80Cu;
        goto label_24d80c;
    }
    ctx->pc = 0x24D804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D804u;
        // 0x24d808: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D80Cu;
label_24d80c:
    // 0x24d80c: 0x0  nop
    ctx->pc = 0x24d80cu;
    // NOP
    ctx->pc = 0x24d810u;
}
