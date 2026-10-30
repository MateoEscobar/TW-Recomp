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

// Function: sub_0014C620
// Address: 0x14c620 - 0x14c8b8
void sub_0014C620_0x14c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C620_0x14c620");
#endif

    switch (ctx->pc) {
        case 0x14c620u: goto label_14c620;
        case 0x14c624u: goto label_14c624;
        case 0x14c628u: goto label_14c628;
        case 0x14c62cu: goto label_14c62c;
        case 0x14c630u: goto label_14c630;
        case 0x14c634u: goto label_14c634;
        case 0x14c638u: goto label_14c638;
        case 0x14c63cu: goto label_14c63c;
        case 0x14c640u: goto label_14c640;
        case 0x14c644u: goto label_14c644;
        case 0x14c648u: goto label_14c648;
        case 0x14c64cu: goto label_14c64c;
        case 0x14c650u: goto label_14c650;
        case 0x14c654u: goto label_14c654;
        case 0x14c658u: goto label_14c658;
        case 0x14c65cu: goto label_14c65c;
        case 0x14c660u: goto label_14c660;
        case 0x14c664u: goto label_14c664;
        case 0x14c668u: goto label_14c668;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c670u: goto label_14c670;
        case 0x14c674u: goto label_14c674;
        case 0x14c678u: goto label_14c678;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c680u: goto label_14c680;
        case 0x14c684u: goto label_14c684;
        case 0x14c688u: goto label_14c688;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c690u: goto label_14c690;
        case 0x14c694u: goto label_14c694;
        case 0x14c698u: goto label_14c698;
        case 0x14c69cu: goto label_14c69c;
        case 0x14c6a0u: goto label_14c6a0;
        case 0x14c6a4u: goto label_14c6a4;
        case 0x14c6a8u: goto label_14c6a8;
        case 0x14c6acu: goto label_14c6ac;
        case 0x14c6b0u: goto label_14c6b0;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c6bcu: goto label_14c6bc;
        case 0x14c6c0u: goto label_14c6c0;
        case 0x14c6c4u: goto label_14c6c4;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6ccu: goto label_14c6cc;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c6dcu: goto label_14c6dc;
        case 0x14c6e0u: goto label_14c6e0;
        case 0x14c6e4u: goto label_14c6e4;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c6ecu: goto label_14c6ec;
        case 0x14c6f0u: goto label_14c6f0;
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6f8u: goto label_14c6f8;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c700u: goto label_14c700;
        case 0x14c704u: goto label_14c704;
        case 0x14c708u: goto label_14c708;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c710u: goto label_14c710;
        case 0x14c714u: goto label_14c714;
        case 0x14c718u: goto label_14c718;
        case 0x14c71cu: goto label_14c71c;
        case 0x14c720u: goto label_14c720;
        case 0x14c724u: goto label_14c724;
        case 0x14c728u: goto label_14c728;
        case 0x14c72cu: goto label_14c72c;
        case 0x14c730u: goto label_14c730;
        case 0x14c734u: goto label_14c734;
        case 0x14c738u: goto label_14c738;
        case 0x14c73cu: goto label_14c73c;
        case 0x14c740u: goto label_14c740;
        case 0x14c744u: goto label_14c744;
        case 0x14c748u: goto label_14c748;
        case 0x14c74cu: goto label_14c74c;
        case 0x14c750u: goto label_14c750;
        case 0x14c754u: goto label_14c754;
        case 0x14c758u: goto label_14c758;
        case 0x14c75cu: goto label_14c75c;
        case 0x14c760u: goto label_14c760;
        case 0x14c764u: goto label_14c764;
        case 0x14c768u: goto label_14c768;
        case 0x14c76cu: goto label_14c76c;
        case 0x14c770u: goto label_14c770;
        case 0x14c774u: goto label_14c774;
        case 0x14c778u: goto label_14c778;
        case 0x14c77cu: goto label_14c77c;
        case 0x14c780u: goto label_14c780;
        case 0x14c784u: goto label_14c784;
        case 0x14c788u: goto label_14c788;
        case 0x14c78cu: goto label_14c78c;
        case 0x14c790u: goto label_14c790;
        case 0x14c794u: goto label_14c794;
        case 0x14c798u: goto label_14c798;
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7a4u: goto label_14c7a4;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7b0u: goto label_14c7b0;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7bcu: goto label_14c7bc;
        case 0x14c7c0u: goto label_14c7c0;
        case 0x14c7c4u: goto label_14c7c4;
        case 0x14c7c8u: goto label_14c7c8;
        case 0x14c7ccu: goto label_14c7cc;
        case 0x14c7d0u: goto label_14c7d0;
        case 0x14c7d4u: goto label_14c7d4;
        case 0x14c7d8u: goto label_14c7d8;
        case 0x14c7dcu: goto label_14c7dc;
        case 0x14c7e0u: goto label_14c7e0;
        case 0x14c7e4u: goto label_14c7e4;
        case 0x14c7e8u: goto label_14c7e8;
        case 0x14c7ecu: goto label_14c7ec;
        case 0x14c7f0u: goto label_14c7f0;
        case 0x14c7f4u: goto label_14c7f4;
        case 0x14c7f8u: goto label_14c7f8;
        case 0x14c7fcu: goto label_14c7fc;
        case 0x14c800u: goto label_14c800;
        case 0x14c804u: goto label_14c804;
        case 0x14c808u: goto label_14c808;
        case 0x14c80cu: goto label_14c80c;
        case 0x14c810u: goto label_14c810;
        case 0x14c814u: goto label_14c814;
        case 0x14c818u: goto label_14c818;
        case 0x14c81cu: goto label_14c81c;
        case 0x14c820u: goto label_14c820;
        case 0x14c824u: goto label_14c824;
        case 0x14c828u: goto label_14c828;
        case 0x14c82cu: goto label_14c82c;
        case 0x14c830u: goto label_14c830;
        case 0x14c834u: goto label_14c834;
        case 0x14c838u: goto label_14c838;
        case 0x14c83cu: goto label_14c83c;
        case 0x14c840u: goto label_14c840;
        case 0x14c844u: goto label_14c844;
        case 0x14c848u: goto label_14c848;
        case 0x14c84cu: goto label_14c84c;
        case 0x14c850u: goto label_14c850;
        case 0x14c854u: goto label_14c854;
        case 0x14c858u: goto label_14c858;
        case 0x14c85cu: goto label_14c85c;
        case 0x14c860u: goto label_14c860;
        case 0x14c864u: goto label_14c864;
        case 0x14c868u: goto label_14c868;
        case 0x14c86cu: goto label_14c86c;
        case 0x14c870u: goto label_14c870;
        case 0x14c874u: goto label_14c874;
        case 0x14c878u: goto label_14c878;
        case 0x14c87cu: goto label_14c87c;
        case 0x14c880u: goto label_14c880;
        case 0x14c884u: goto label_14c884;
        case 0x14c888u: goto label_14c888;
        case 0x14c88cu: goto label_14c88c;
        case 0x14c890u: goto label_14c890;
        case 0x14c894u: goto label_14c894;
        case 0x14c898u: goto label_14c898;
        case 0x14c89cu: goto label_14c89c;
        case 0x14c8a0u: goto label_14c8a0;
        case 0x14c8a4u: goto label_14c8a4;
        case 0x14c8a8u: goto label_14c8a8;
        case 0x14c8acu: goto label_14c8ac;
        case 0x14c8b0u: goto label_14c8b0;
        case 0x14c8b4u: goto label_14c8b4;
        default: break;
    }

    ctx->pc = 0x14c620u;

label_14c620:
    // 0x14c620: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x14c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_14c624:
    // 0x14c624: 0x7fb102d0  sq          $s1, 0x2D0($sp)
    ctx->pc = 0x14c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 17));
label_14c628:
    // 0x14c628: 0x7fb70270  sq          $s7, 0x270($sp)
    ctx->pc = 0x14c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 23));
label_14c62c:
    // 0x14c62c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c630:
    // 0x14c630: 0x7fb202c0  sq          $s2, 0x2C0($sp)
    ctx->pc = 0x14c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 18));
label_14c634:
    // 0x14c634: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x14c634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14c638:
    // 0x14c638: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x14c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
label_14c63c:
    // 0x14c63c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14c63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14c640:
    // 0x14c640: 0x7fb60280  sq          $s6, 0x280($sp)
    ctx->pc = 0x14c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 22));
label_14c644:
    // 0x14c644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c648:
    // 0x14c648: 0x7fbe0260  sq          $fp, 0x260($sp)
    ctx->pc = 0x14c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 30));
label_14c64c:
    // 0x14c64c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14c64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14c650:
    // 0x14c650: 0x7fb302b0  sq          $s3, 0x2B0($sp)
    ctx->pc = 0x14c650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 19));
label_14c654:
    // 0x14c654: 0x7fb402a0  sq          $s4, 0x2A0($sp)
    ctx->pc = 0x14c654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 20));
label_14c658:
    // 0x14c658: 0x7fb50290  sq          $s5, 0x290($sp)
    ctx->pc = 0x14c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 21));
label_14c65c:
    // 0x14c65c: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x14c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_14c660:
    // 0x14c660: 0xc05420e  jal         func_150838
label_14c664:
    if (ctx->pc == 0x14C664u) {
        ctx->pc = 0x14C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C660u;
        // 0x14c664: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C668u;
        goto label_14c668;
    }
    ctx->pc = 0x14C660u;
    SET_GPR_U32(ctx, 31, 0x14C668u);
    ctx->pc = 0x14C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C660u;
    // 0x14c664: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C660u, 0x14C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C668u;
label_14c668:
    // 0x14c668: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x14c668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_14c66c:
    // 0x14c66c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14c670:
    // 0x14c670: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_14c674:
    if (ctx->pc == 0x14C674u) {
        ctx->pc = 0x14C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C670u;
        // 0x14c674: 0x27b60150  addiu       $s6, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C678u;
        goto label_14c678;
    }
    ctx->pc = 0x14C670u;
    {
        const bool branch_taken_0x14c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C670u;
        // 0x14c674: 0x27b60150  addiu       $s6, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c670) {
            ctx->pc = 0x14C6B4u;
            goto label_14c6b4;
        }
    }
    ctx->pc = 0x14C678u;
label_14c678:
    // 0x14c678: 0xc12aa7c  jal         func_4AA9F0
label_14c67c:
    if (ctx->pc == 0x14C67Cu) {
        ctx->pc = 0x14C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C678u;
        // 0x14c67c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C680u;
        goto label_14c680;
    }
    ctx->pc = 0x14C678u;
    SET_GPR_U32(ctx, 31, 0x14C680u);
    ctx->pc = 0x14C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C678u;
    // 0x14c67c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA9F0u, 0x14C678u, 0x14C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C680u;
label_14c680:
    // 0x14c680: 0xc053094  jal         func_14C250
label_14c684:
    if (ctx->pc == 0x14C684u) {
        ctx->pc = 0x14C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C680u;
        // 0x14c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C688u;
        goto label_14c688;
    }
    ctx->pc = 0x14C680u;
    SET_GPR_U32(ctx, 31, 0x14C688u);
    ctx->pc = 0x14C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C680u;
    // 0x14c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C250u, 0x14C680u, 0x14C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C688u;
label_14c688:
    // 0x14c688: 0xc05464c  jal         func_151930
label_14c68c:
    if (ctx->pc == 0x14C68Cu) {
        ctx->pc = 0x14C690u;
        goto label_14c690;
    }
    ctx->pc = 0x14C688u;
    SET_GPR_U32(ctx, 31, 0x14C690u);
    ctx->pc = 0x151930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151930u, 0x14C688u, 0x14C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C690u;
label_14c690:
    // 0x14c690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c694:
    // 0x14c694: 0xc0539f4  jal         func_14E7D0
label_14c698:
    if (ctx->pc == 0x14C698u) {
        ctx->pc = 0x14C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C694u;
        // 0x14c698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C69Cu;
        goto label_14c69c;
    }
    ctx->pc = 0x14C694u;
    SET_GPR_U32(ctx, 31, 0x14C69Cu);
    ctx->pc = 0x14C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C694u;
    // 0x14c698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14C694u, 0x14C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C69Cu;
label_14c69c:
    // 0x14c69c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c6a0:
    // 0x14c6a0: 0xc05420e  jal         func_150838
label_14c6a4:
    if (ctx->pc == 0x14C6A4u) {
        ctx->pc = 0x14C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6A0u;
        // 0x14c6a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6A8u;
        goto label_14c6a8;
    }
    ctx->pc = 0x14C6A0u;
    SET_GPR_U32(ctx, 31, 0x14C6A8u);
    ctx->pc = 0x14C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6A0u;
    // 0x14c6a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C6A0u, 0x14C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6A8u;
label_14c6a8:
    // 0x14c6a8: 0x93a30011  lbu         $v1, 0x11($sp)
    ctx->pc = 0x14c6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_14c6ac:
    // 0x14c6ac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_14c6b0:
    if (ctx->pc == 0x14C6B0u) {
        ctx->pc = 0x14C6B4u;
        goto label_14c6b4;
    }
    ctx->pc = 0x14C6ACu;
    {
        const bool branch_taken_0x14c6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c6ac) {
            ctx->pc = 0x14C678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c678;
        }
    }
    ctx->pc = 0x14C6B4u;
label_14c6b4:
    // 0x14c6b4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_14c6b8:
    // 0x14c6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c6bc:
    // 0x14c6bc: 0x24a5b6a0  addiu       $a1, $a1, -0x4960
    ctx->pc = 0x14c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948512));
label_14c6c0:
    // 0x14c6c0: 0xc10ca28  jal         func_4328A0
label_14c6c4:
    if (ctx->pc == 0x14C6C4u) {
        ctx->pc = 0x14C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6C0u;
        // 0x14c6c4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6C8u;
        goto label_14c6c8;
    }
    ctx->pc = 0x14C6C0u;
    SET_GPR_U32(ctx, 31, 0x14C6C8u);
    ctx->pc = 0x14C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6C0u;
    // 0x14c6c4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x14C6C0u, 0x14C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6C8u;
label_14c6c8:
    // 0x14c6c8: 0x8fc447a4  lw          $a0, 0x47A4($fp)
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18340)));
label_14c6cc:
    // 0x14c6cc: 0xc10318a  jal         func_40C628
label_14c6d0:
    if (ctx->pc == 0x14C6D0u) {
        ctx->pc = 0x14C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6CCu;
        // 0x14c6d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6D4u;
        goto label_14c6d4;
    }
    ctx->pc = 0x14C6CCu;
    SET_GPR_U32(ctx, 31, 0x14C6D4u);
    ctx->pc = 0x14C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6CCu;
    // 0x14c6d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C628u, 0x14C6CCu, 0x14C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6D4u;
label_14c6d4:
    // 0x14c6d4: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_14c6d8:
    if (ctx->pc == 0x14C6D8u) {
        ctx->pc = 0x14C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D4u;
        // 0x14c6d8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6DCu;
        goto label_14c6dc;
    }
    ctx->pc = 0x14C6D4u;
    {
        const bool branch_taken_0x14c6d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6d4) {
            ctx->pc = 0x14C6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C6D4u;
            // 0x14c6d8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C6F4u;
            goto label_14c6f4;
        }
    }
    ctx->pc = 0x14C6DCu;
label_14c6dc:
    // 0x14c6dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14c6e0:
    // 0x14c6e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c6e4:
    // 0x14c6e4: 0xc05406a  jal         func_1501A8
label_14c6e8:
    if (ctx->pc == 0x14C6E8u) {
        ctx->pc = 0x14C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6E4u;
        // 0x14c6e8: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6ECu;
        goto label_14c6ec;
    }
    ctx->pc = 0x14C6E4u;
    SET_GPR_U32(ctx, 31, 0x14C6ECu);
    ctx->pc = 0x14C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6E4u;
    // 0x14c6e8: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14C6E4u, 0x14C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6ECu;
label_14c6ec:
    // 0x14c6ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_14c6f0:
    if (ctx->pc == 0x14C6F0u) {
        ctx->pc = 0x14C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6ECu;
        // 0x14c6f0: 0x8e270844  lw          $a3, 0x844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6F4u;
        goto label_14c6f4;
    }
    ctx->pc = 0x14C6ECu;
    {
        const bool branch_taken_0x14c6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6ECu;
        // 0x14c6f0: 0x8e270844  lw          $a3, 0x844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6ec) {
            ctx->pc = 0x14C704u;
            goto label_14c704;
        }
    }
    ctx->pc = 0x14C6F4u;
label_14c6f4:
    // 0x14c6f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c6f8:
    // 0x14c6f8: 0xc05406a  jal         func_1501A8
label_14c6fc:
    if (ctx->pc == 0x14C6FCu) {
        ctx->pc = 0x14C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6F8u;
        // 0x14c6fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C700u;
        goto label_14c700;
    }
    ctx->pc = 0x14C6F8u;
    SET_GPR_U32(ctx, 31, 0x14C700u);
    ctx->pc = 0x14C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6F8u;
    // 0x14c6fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14C6F8u, 0x14C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C700u;
label_14c700:
    // 0x14c700: 0x8e270844  lw          $a3, 0x844($s1)
    ctx->pc = 0x14c700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
label_14c704:
    // 0x14c704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c708:
    // 0x14c708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c70c:
    // 0x14c70c: 0xc053852  jal         func_14E148
label_14c710:
    if (ctx->pc == 0x14C710u) {
        ctx->pc = 0x14C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C70Cu;
        // 0x14c710: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C714u;
        goto label_14c714;
    }
    ctx->pc = 0x14C70Cu;
    SET_GPR_U32(ctx, 31, 0x14C714u);
    ctx->pc = 0x14C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C70Cu;
    // 0x14c710: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E148u, 0x14C70Cu, 0x14C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C714u;
label_14c714:
    // 0x14c714: 0xc053eb2  jal         func_14FAC8
label_14c718:
    if (ctx->pc == 0x14C718u) {
        ctx->pc = 0x14C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C714u;
        // 0x14c718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C71Cu;
        goto label_14c71c;
    }
    ctx->pc = 0x14C714u;
    SET_GPR_U32(ctx, 31, 0x14C71Cu);
    ctx->pc = 0x14C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C714u;
    // 0x14c718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14C714u, 0x14C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C71Cu;
label_14c71c:
    // 0x14c71c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c720:
    // 0x14c720: 0xc05420e  jal         func_150838
label_14c724:
    if (ctx->pc == 0x14C724u) {
        ctx->pc = 0x14C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C720u;
        // 0x14c724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C728u;
        goto label_14c728;
    }
    ctx->pc = 0x14C720u;
    SET_GPR_U32(ctx, 31, 0x14C728u);
    ctx->pc = 0x14C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C720u;
    // 0x14c724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C720u, 0x14C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C728u;
label_14c728:
    // 0x14c728: 0x93a30011  lbu         $v1, 0x11($sp)
    ctx->pc = 0x14c728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_14c72c:
    // 0x14c72c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_14c730:
    if (ctx->pc == 0x14C730u) {
        ctx->pc = 0x14C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C72Cu;
        // 0x14c730: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C734u;
        goto label_14c734;
    }
    ctx->pc = 0x14C72Cu;
    {
        const bool branch_taken_0x14c72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C72Cu;
        // 0x14c730: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c72c) {
            ctx->pc = 0x14C7E4u;
            goto label_14c7e4;
        }
    }
    ctx->pc = 0x14C734u;
label_14c734:
    // 0x14c734: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x14c734u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_14c738:
    // 0x14c738: 0x2653b728  addiu       $s3, $s2, -0x48D8
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948648));
label_14c73c:
    // 0x14c73c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x14c73cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_14c740:
    // 0x14c740: 0xc12aa7c  jal         func_4AA9F0
label_14c744:
    if (ctx->pc == 0x14C744u) {
        ctx->pc = 0x14C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C740u;
        // 0x14c744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C748u;
        goto label_14c748;
    }
    ctx->pc = 0x14C740u;
    SET_GPR_U32(ctx, 31, 0x14C748u);
    ctx->pc = 0x14C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C740u;
    // 0x14c744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA9F0u, 0x14C740u, 0x14C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0xc053094  jal         func_14C250
label_14c74c:
    if (ctx->pc == 0x14C74Cu) {
        ctx->pc = 0x14C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C748u;
        // 0x14c74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C750u;
        goto label_14c750;
    }
    ctx->pc = 0x14C748u;
    SET_GPR_U32(ctx, 31, 0x14C750u);
    ctx->pc = 0x14C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C748u;
    // 0x14c74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C250u, 0x14C748u, 0x14C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C750u;
label_14c750:
    // 0x14c750: 0xc05464c  jal         func_151930
label_14c754:
    if (ctx->pc == 0x14C754u) {
        ctx->pc = 0x14C758u;
        goto label_14c758;
    }
    ctx->pc = 0x14C750u;
    SET_GPR_U32(ctx, 31, 0x14C758u);
    ctx->pc = 0x151930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151930u, 0x14C750u, 0x14C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C758u;
label_14c758:
    // 0x14c758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c75c:
    // 0x14c75c: 0xc0539f4  jal         func_14E7D0
label_14c760:
    if (ctx->pc == 0x14C760u) {
        ctx->pc = 0x14C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C75Cu;
        // 0x14c760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C764u;
        goto label_14c764;
    }
    ctx->pc = 0x14C75Cu;
    SET_GPR_U32(ctx, 31, 0x14C764u);
    ctx->pc = 0x14C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C75Cu;
    // 0x14c760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14C75Cu, 0x14C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C764u;
label_14c764:
    // 0x14c764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c768:
    // 0x14c768: 0xc05420e  jal         func_150838
label_14c76c:
    if (ctx->pc == 0x14C76Cu) {
        ctx->pc = 0x14C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C768u;
        // 0x14c76c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C770u;
        goto label_14c770;
    }
    ctx->pc = 0x14C768u;
    SET_GPR_U32(ctx, 31, 0x14C770u);
    ctx->pc = 0x14C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C768u;
    // 0x14c76c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C768u, 0x14C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C770u;
label_14c770:
    // 0x14c770: 0x8e43b728  lw          $v1, -0x48D8($s2)
    ctx->pc = 0x14c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948648)));
label_14c774:
    // 0x14c774: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_14c778:
    if (ctx->pc == 0x14C778u) {
        ctx->pc = 0x14C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C774u;
        // 0x14c778: 0x8ea2bcf4  lw          $v0, -0x430C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C77Cu;
        goto label_14c77c;
    }
    ctx->pc = 0x14C774u;
    {
        const bool branch_taken_0x14c774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C774u;
        // 0x14c778: 0x8ea2bcf4  lw          $v0, -0x430C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c774) {
            ctx->pc = 0x14C7D8u;
            goto label_14c7d8;
        }
    }
    ctx->pc = 0x14C77Cu;
label_14c77c:
    // 0x14c77c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_14c780:
    if (ctx->pc == 0x14C780u) {
        ctx->pc = 0x14C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C77Cu;
        // 0x14c780: 0x93a20011  lbu         $v0, 0x11($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C784u;
        goto label_14c784;
    }
    ctx->pc = 0x14C77Cu;
    {
        const bool branch_taken_0x14c77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C77Cu;
        // 0x14c780: 0x93a20011  lbu         $v0, 0x11($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c77c) {
            ctx->pc = 0x14C7DCu;
            goto label_14c7dc;
        }
    }
    ctx->pc = 0x14C784u;
label_14c784:
    // 0x14c784: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14c784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_14c788:
    // 0x14c788: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x14c788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_14c78c:
    // 0x14c78c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14c790:
    // 0x14c790: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_14c794:
    // 0x14c794: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_14c798:
    // 0x14c798: 0x40f809  jalr        $v0
label_14c79c:
    if (ctx->pc == 0x14C79Cu) {
        ctx->pc = 0x14C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C798u;
        // 0x14c79c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7A0u;
        goto label_14c7a0;
    }
    ctx->pc = 0x14C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C7A0u);
        ctx->pc = 0x14C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C798u;
        // 0x14c79c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C798u, 0x14C7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C7A0u;
label_14c7a0:
    // 0x14c7a0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c7a4:
    // 0x14c7a4: 0x8e84b720  lw          $a0, -0x48E0($s4)
    ctx->pc = 0x14c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948640)));
label_14c7a8:
    // 0x14c7a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c7ac:
    // 0x14c7ac: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x14c7acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14c7b0:
    // 0x14c7b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_14c7b4:
    if (ctx->pc == 0x14C7B4u) {
        ctx->pc = 0x14C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7B0u;
        // 0x14c7b4: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7B8u;
        goto label_14c7b8;
    }
    ctx->pc = 0x14C7B0u;
    {
        const bool branch_taken_0x14c7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7B0u;
        // 0x14c7b4: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7b0) {
            ctx->pc = 0x14C7D8u;
            goto label_14c7d8;
        }
    }
    ctx->pc = 0x14C7B8u;
label_14c7b8:
    // 0x14c7b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14c7bc:
    // 0x14c7bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x14c7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_14c7c0:
    // 0x14c7c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_14c7c4:
    // 0x14c7c4: 0x40f809  jalr        $v0
label_14c7c8:
    if (ctx->pc == 0x14C7C8u) {
        ctx->pc = 0x14C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7C4u;
        // 0x14c7c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7CCu;
        goto label_14c7cc;
    }
    ctx->pc = 0x14C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C7CCu);
        ctx->pc = 0x14C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7C4u;
        // 0x14c7c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7C4u, 0x14C7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C7CCu;
label_14c7cc:
    // 0x14c7cc: 0x8e43b728  lw          $v1, -0x48D8($s2)
    ctx->pc = 0x14c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948648)));
label_14c7d0:
    // 0x14c7d0: 0x60f809  jalr        $v1
label_14c7d4:
    if (ctx->pc == 0x14C7D4u) {
        ctx->pc = 0x14C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7D0u;
        // 0x14c7d4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7D8u;
        goto label_14c7d8;
    }
    ctx->pc = 0x14C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C7D8u);
        ctx->pc = 0x14C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7D0u;
        // 0x14c7d4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7D0u, 0x14C7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C7D8u;
label_14c7d8:
    // 0x14c7d8: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x14c7d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_14c7dc:
    // 0x14c7dc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_14c7e0:
    if (ctx->pc == 0x14C7E0u) {
        ctx->pc = 0x14C7E4u;
        goto label_14c7e4;
    }
    ctx->pc = 0x14C7DCu;
    {
        const bool branch_taken_0x14c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c7dc) {
            ctx->pc = 0x14C740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c740;
        }
    }
    ctx->pc = 0x14C7E4u;
label_14c7e4:
    // 0x14c7e4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_14c7e8:
    // 0x14c7e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x14c7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_14c7ec:
    // 0x14c7ec: 0x24a5b6b8  addiu       $a1, $a1, -0x4948
    ctx->pc = 0x14c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948536));
label_14c7f0:
    // 0x14c7f0: 0xc10ca28  jal         func_4328A0
label_14c7f4:
    if (ctx->pc == 0x14C7F4u) {
        ctx->pc = 0x14C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7F0u;
        // 0x14c7f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7F8u;
        goto label_14c7f8;
    }
    ctx->pc = 0x14C7F0u;
    SET_GPR_U32(ctx, 31, 0x14C7F8u);
    ctx->pc = 0x14C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7F0u;
    // 0x14c7f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x14C7F0u, 0x14C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7F8u;
label_14c7f8:
    // 0x14c7f8: 0x8fc447a4  lw          $a0, 0x47A4($fp)
    ctx->pc = 0x14c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18340)));
label_14c7fc:
    // 0x14c7fc: 0xc10318a  jal         func_40C628
label_14c800:
    if (ctx->pc == 0x14C800u) {
        ctx->pc = 0x14C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7FCu;
        // 0x14c800: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C804u;
        goto label_14c804;
    }
    ctx->pc = 0x14C7FCu;
    SET_GPR_U32(ctx, 31, 0x14C804u);
    ctx->pc = 0x14C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7FCu;
    // 0x14c800: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C628u, 0x14C7FCu, 0x14C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C804u;
label_14c804:
    // 0x14c804: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c808:
    // 0x14c808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c80c:
    // 0x14c80c: 0xc05406a  jal         func_1501A8
label_14c810:
    if (ctx->pc == 0x14C810u) {
        ctx->pc = 0x14C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C80Cu;
        // 0x14c810: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C814u;
        goto label_14c814;
    }
    ctx->pc = 0x14C80Cu;
    SET_GPR_U32(ctx, 31, 0x14C814u);
    ctx->pc = 0x14C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C80Cu;
    // 0x14c810: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14C80Cu, 0x14C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C814u;
label_14c814:
    // 0x14c814: 0x8e270884  lw          $a3, 0x884($s1)
    ctx->pc = 0x14c814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2180)));
label_14c818:
    // 0x14c818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c81c:
    // 0x14c81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c820:
    // 0x14c820: 0xc053852  jal         func_14E148
label_14c824:
    if (ctx->pc == 0x14C824u) {
        ctx->pc = 0x14C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C820u;
        // 0x14c824: 0x2404007d  addiu       $a0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C828u;
        goto label_14c828;
    }
    ctx->pc = 0x14C820u;
    SET_GPR_U32(ctx, 31, 0x14C828u);
    ctx->pc = 0x14C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C820u;
    // 0x14c824: 0x2404007d  addiu       $a0, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E148u, 0x14C820u, 0x14C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C828u;
label_14c828:
    // 0x14c828: 0xc053094  jal         func_14C250
label_14c82c:
    if (ctx->pc == 0x14C82Cu) {
        ctx->pc = 0x14C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C828u;
        // 0x14c82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C830u;
        goto label_14c830;
    }
    ctx->pc = 0x14C828u;
    SET_GPR_U32(ctx, 31, 0x14C830u);
    ctx->pc = 0x14C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C828u;
    // 0x14c82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C250u, 0x14C828u, 0x14C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C830u;
label_14c830:
    // 0x14c830: 0x1000000b  b           . + 4 + (0xB << 2)
label_14c834:
    if (ctx->pc == 0x14C834u) {
        ctx->pc = 0x14C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C830u;
        // 0x14c834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C838u;
        goto label_14c838;
    }
    ctx->pc = 0x14C830u;
    {
        const bool branch_taken_0x14c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C830u;
        // 0x14c834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c830) {
            ctx->pc = 0x14C860u;
            goto label_14c860;
        }
    }
    ctx->pc = 0x14C838u;
label_14c838:
    // 0x14c838: 0xc12aa7c  jal         func_4AA9F0
label_14c83c:
    if (ctx->pc == 0x14C83Cu) {
        ctx->pc = 0x14C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C838u;
        // 0x14c83c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C840u;
        goto label_14c840;
    }
    ctx->pc = 0x14C838u;
    SET_GPR_U32(ctx, 31, 0x14C840u);
    ctx->pc = 0x14C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C838u;
    // 0x14c83c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA9F0u, 0x14C838u, 0x14C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C840u;
label_14c840:
    // 0x14c840: 0xc053094  jal         func_14C250
label_14c844:
    if (ctx->pc == 0x14C844u) {
        ctx->pc = 0x14C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C840u;
        // 0x14c844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C848u;
        goto label_14c848;
    }
    ctx->pc = 0x14C840u;
    SET_GPR_U32(ctx, 31, 0x14C848u);
    ctx->pc = 0x14C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C840u;
    // 0x14c844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C250u, 0x14C840u, 0x14C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C848u;
label_14c848:
    // 0x14c848: 0xc05464c  jal         func_151930
label_14c84c:
    if (ctx->pc == 0x14C84Cu) {
        ctx->pc = 0x14C850u;
        goto label_14c850;
    }
    ctx->pc = 0x14C848u;
    SET_GPR_U32(ctx, 31, 0x14C850u);
    ctx->pc = 0x151930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151930u, 0x14C848u, 0x14C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C850u;
label_14c850:
    // 0x14c850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c854:
    // 0x14c854: 0xc0539f4  jal         func_14E7D0
label_14c858:
    if (ctx->pc == 0x14C858u) {
        ctx->pc = 0x14C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C854u;
        // 0x14c858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C85Cu;
        goto label_14c85c;
    }
    ctx->pc = 0x14C854u;
    SET_GPR_U32(ctx, 31, 0x14C85Cu);
    ctx->pc = 0x14C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C854u;
    // 0x14c858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14C854u, 0x14C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C85Cu;
label_14c85c:
    // 0x14c85c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c860:
    // 0x14c860: 0xc05420e  jal         func_150838
label_14c864:
    if (ctx->pc == 0x14C864u) {
        ctx->pc = 0x14C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C860u;
        // 0x14c864: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C868u;
        goto label_14c868;
    }
    ctx->pc = 0x14C860u;
    SET_GPR_U32(ctx, 31, 0x14C868u);
    ctx->pc = 0x14C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C860u;
    // 0x14c864: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C860u, 0x14C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C868u;
label_14c868:
    // 0x14c868: 0x93a30011  lbu         $v1, 0x11($sp)
    ctx->pc = 0x14c868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
label_14c86c:
    // 0x14c86c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_14c870:
    if (ctx->pc == 0x14C870u) {
        ctx->pc = 0x14C874u;
        goto label_14c874;
    }
    ctx->pc = 0x14C86Cu;
    {
        const bool branch_taken_0x14c86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c86c) {
            ctx->pc = 0x14C838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c838;
        }
    }
    ctx->pc = 0x14C874u;
label_14c874:
    // 0x14c874: 0x8e250844  lw          $a1, 0x844($s1)
    ctx->pc = 0x14c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
label_14c878:
    // 0x14c878: 0xc054770  jal         func_151DC0
label_14c87c:
    if (ctx->pc == 0x14C87Cu) {
        ctx->pc = 0x14C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C878u;
        // 0x14c87c: 0x8e240884  lw          $a0, 0x884($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C880u;
        goto label_14c880;
    }
    ctx->pc = 0x14C878u;
    SET_GPR_U32(ctx, 31, 0x14C880u);
    ctx->pc = 0x14C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C878u;
    // 0x14c87c: 0x8e240884  lw          $a0, 0x884($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151DC0u, 0x14C878u, 0x14C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C880u;
label_14c880:
    // 0x14c880: 0xc053eb2  jal         func_14FAC8
label_14c884:
    if (ctx->pc == 0x14C884u) {
        ctx->pc = 0x14C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C880u;
        // 0x14c884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C888u;
        goto label_14c888;
    }
    ctx->pc = 0x14C880u;
    SET_GPR_U32(ctx, 31, 0x14C888u);
    ctx->pc = 0x14C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C880u;
    // 0x14c884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14C880u, 0x14C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C888u;
label_14c888:
    // 0x14c888: 0x7bb002e0  lq          $s0, 0x2E0($sp)
    ctx->pc = 0x14c888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_14c88c:
    // 0x14c88c: 0x7bb102d0  lq          $s1, 0x2D0($sp)
    ctx->pc = 0x14c88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_14c890:
    // 0x14c890: 0x7bb202c0  lq          $s2, 0x2C0($sp)
    ctx->pc = 0x14c890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_14c894:
    // 0x14c894: 0x7bb302b0  lq          $s3, 0x2B0($sp)
    ctx->pc = 0x14c894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_14c898:
    // 0x14c898: 0x7bb402a0  lq          $s4, 0x2A0($sp)
    ctx->pc = 0x14c898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_14c89c:
    // 0x14c89c: 0x7bb50290  lq          $s5, 0x290($sp)
    ctx->pc = 0x14c89cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_14c8a0:
    // 0x14c8a0: 0x7bb60280  lq          $s6, 0x280($sp)
    ctx->pc = 0x14c8a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_14c8a4:
    // 0x14c8a4: 0x7bb70270  lq          $s7, 0x270($sp)
    ctx->pc = 0x14c8a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_14c8a8:
    // 0x14c8a8: 0x7bbe0260  lq          $fp, 0x260($sp)
    ctx->pc = 0x14c8a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_14c8ac:
    // 0x14c8ac: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x14c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_14c8b0:
    // 0x14c8b0: 0x3e00008  jr          $ra
label_14c8b4:
    if (ctx->pc == 0x14C8B4u) {
        ctx->pc = 0x14C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8B0u;
        // 0x14c8b4: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C8B8u;
        goto label_fallthrough_0x14c8b0;
    }
    ctx->pc = 0x14C8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8B0u;
        // 0x14c8b4: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c8b0:
    ctx->pc = 0x14C8B8u;
}
