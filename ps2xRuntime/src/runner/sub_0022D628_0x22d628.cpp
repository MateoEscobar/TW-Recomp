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

// Function: sub_0022D628
// Address: 0x22d628 - 0x22d790
void sub_0022D628_0x22d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D628_0x22d628");
#endif

    switch (ctx->pc) {
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        case 0x22d698u: goto label_22d698;
        case 0x22d69cu: goto label_22d69c;
        case 0x22d6a0u: goto label_22d6a0;
        case 0x22d6a4u: goto label_22d6a4;
        case 0x22d6a8u: goto label_22d6a8;
        case 0x22d6acu: goto label_22d6ac;
        case 0x22d6b0u: goto label_22d6b0;
        case 0x22d6b4u: goto label_22d6b4;
        case 0x22d6b8u: goto label_22d6b8;
        case 0x22d6bcu: goto label_22d6bc;
        case 0x22d6c0u: goto label_22d6c0;
        case 0x22d6c4u: goto label_22d6c4;
        case 0x22d6c8u: goto label_22d6c8;
        case 0x22d6ccu: goto label_22d6cc;
        case 0x22d6d0u: goto label_22d6d0;
        case 0x22d6d4u: goto label_22d6d4;
        case 0x22d6d8u: goto label_22d6d8;
        case 0x22d6dcu: goto label_22d6dc;
        case 0x22d6e0u: goto label_22d6e0;
        case 0x22d6e4u: goto label_22d6e4;
        case 0x22d6e8u: goto label_22d6e8;
        case 0x22d6ecu: goto label_22d6ec;
        case 0x22d6f0u: goto label_22d6f0;
        case 0x22d6f4u: goto label_22d6f4;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d6fcu: goto label_22d6fc;
        case 0x22d700u: goto label_22d700;
        case 0x22d704u: goto label_22d704;
        case 0x22d708u: goto label_22d708;
        case 0x22d70cu: goto label_22d70c;
        case 0x22d710u: goto label_22d710;
        case 0x22d714u: goto label_22d714;
        case 0x22d718u: goto label_22d718;
        case 0x22d71cu: goto label_22d71c;
        case 0x22d720u: goto label_22d720;
        case 0x22d724u: goto label_22d724;
        case 0x22d728u: goto label_22d728;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d730u: goto label_22d730;
        case 0x22d734u: goto label_22d734;
        case 0x22d738u: goto label_22d738;
        case 0x22d73cu: goto label_22d73c;
        case 0x22d740u: goto label_22d740;
        case 0x22d744u: goto label_22d744;
        case 0x22d748u: goto label_22d748;
        case 0x22d74cu: goto label_22d74c;
        case 0x22d750u: goto label_22d750;
        case 0x22d754u: goto label_22d754;
        case 0x22d758u: goto label_22d758;
        case 0x22d75cu: goto label_22d75c;
        case 0x22d760u: goto label_22d760;
        case 0x22d764u: goto label_22d764;
        case 0x22d768u: goto label_22d768;
        case 0x22d76cu: goto label_22d76c;
        case 0x22d770u: goto label_22d770;
        case 0x22d774u: goto label_22d774;
        case 0x22d778u: goto label_22d778;
        case 0x22d77cu: goto label_22d77c;
        case 0x22d780u: goto label_22d780;
        case 0x22d784u: goto label_22d784;
        case 0x22d788u: goto label_22d788;
        case 0x22d78cu: goto label_22d78c;
        default: break;
    }

    ctx->pc = 0x22d628u;

label_22d628:
    // 0x22d628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d62c:
    // 0x22d62c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22d630:
    // 0x22d630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d634:
    // 0x22d634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d638:
    // 0x22d638: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22d638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22d63c:
    // 0x22d63c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22d63cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22d640:
    // 0x22d640: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_22d644:
    if (ctx->pc == 0x22D644u) {
        ctx->pc = 0x22D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D640u;
        // 0x22d644: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D648u;
        goto label_22d648;
    }
    ctx->pc = 0x22D640u;
    {
        const bool branch_taken_0x22d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d640) {
            ctx->pc = 0x22D644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D640u;
            // 0x22d644: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D780u;
            goto label_22d780;
        }
    }
    ctx->pc = 0x22D648u;
label_22d648:
    // 0x22d648: 0xc088ac6  jal         func_222B18
label_22d64c:
    if (ctx->pc == 0x22D64Cu) {
        ctx->pc = 0x22D650u;
        goto label_22d650;
    }
    ctx->pc = 0x22D648u;
    SET_GPR_U32(ctx, 31, 0x22D650u);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D648u, 0x22D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D650u;
label_22d650:
    // 0x22d650: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22d650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_22d654:
    // 0x22d654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d658:
    // 0x22d658: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_22d65c:
    if (ctx->pc == 0x22D65Cu) {
        ctx->pc = 0x22D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D658u;
        // 0x22d65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D660u;
        goto label_22d660;
    }
    ctx->pc = 0x22D658u;
    {
        const bool branch_taken_0x22d658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D658u;
        // 0x22d65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d658) {
            ctx->pc = 0x22D670u;
            goto label_22d670;
        }
    }
    ctx->pc = 0x22D660u;
label_22d660:
    // 0x22d660: 0xc08b642  jal         func_22D908
label_22d664:
    if (ctx->pc == 0x22D664u) {
        ctx->pc = 0x22D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D660u;
        // 0x22d664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D668u;
        goto label_22d668;
    }
    ctx->pc = 0x22D660u;
    SET_GPR_U32(ctx, 31, 0x22D668u);
    ctx->pc = 0x22D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D660u;
    // 0x22d664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D908u, 0x22D660u, 0x22D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D668u;
label_22d668:
    // 0x22d668: 0x10000045  b           . + 4 + (0x45 << 2)
label_22d66c:
    if (ctx->pc == 0x22D66Cu) {
        ctx->pc = 0x22D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D668u;
        // 0x22d66c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D670u;
        goto label_22d670;
    }
    ctx->pc = 0x22D668u;
    {
        const bool branch_taken_0x22d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D668u;
        // 0x22d66c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d668) {
            ctx->pc = 0x22D780u;
            goto label_22d780;
        }
    }
    ctx->pc = 0x22D670u;
label_22d670:
    // 0x22d670: 0xc088ac6  jal         func_222B18
label_22d674:
    if (ctx->pc == 0x22D674u) {
        ctx->pc = 0x22D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D670u;
        // 0x22d674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D678u;
        goto label_22d678;
    }
    ctx->pc = 0x22D670u;
    SET_GPR_U32(ctx, 31, 0x22D678u);
    ctx->pc = 0x22D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D670u;
    // 0x22d674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D670u, 0x22D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D678u;
label_22d678:
    // 0x22d678: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x22d678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_22d67c:
    // 0x22d67c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d680:
    // 0x22d680: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_22d684:
    if (ctx->pc == 0x22D684u) {
        ctx->pc = 0x22D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D680u;
        // 0x22d684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D688u;
        goto label_22d688;
    }
    ctx->pc = 0x22D680u;
    {
        const bool branch_taken_0x22d680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D680u;
        // 0x22d684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d680) {
            ctx->pc = 0x22D698u;
            goto label_22d698;
        }
    }
    ctx->pc = 0x22D688u;
label_22d688:
    // 0x22d688: 0xc08b808  jal         func_22E020
label_22d68c:
    if (ctx->pc == 0x22D68Cu) {
        ctx->pc = 0x22D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D688u;
        // 0x22d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D690u;
        goto label_22d690;
    }
    ctx->pc = 0x22D688u;
    SET_GPR_U32(ctx, 31, 0x22D690u);
    ctx->pc = 0x22D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D688u;
    // 0x22d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E020u, 0x22D688u, 0x22D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D690u;
label_22d690:
    // 0x22d690: 0x1000003b  b           . + 4 + (0x3B << 2)
label_22d694:
    if (ctx->pc == 0x22D694u) {
        ctx->pc = 0x22D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D690u;
        // 0x22d694: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D698u;
        goto label_22d698;
    }
    ctx->pc = 0x22D690u;
    {
        const bool branch_taken_0x22d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D690u;
        // 0x22d694: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d690) {
            ctx->pc = 0x22D780u;
            goto label_22d780;
        }
    }
    ctx->pc = 0x22D698u;
label_22d698:
    // 0x22d698: 0xc090222  jal         func_240888
label_22d69c:
    if (ctx->pc == 0x22D69Cu) {
        ctx->pc = 0x22D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D698u;
        // 0x22d69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6A0u;
        goto label_22d6a0;
    }
    ctx->pc = 0x22D698u;
    SET_GPR_U32(ctx, 31, 0x22D6A0u);
    ctx->pc = 0x22D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D698u;
    // 0x22d69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22D698u, 0x22D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6A0u;
label_22d6a0:
    // 0x22d6a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22d6a4:
    if (ctx->pc == 0x22D6A4u) {
        ctx->pc = 0x22D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6A0u;
        // 0x22d6a4: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6A8u;
        goto label_22d6a8;
    }
    ctx->pc = 0x22D6A0u;
    {
        const bool branch_taken_0x22d6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6A0u;
        // 0x22d6a4: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6a0) {
            ctx->pc = 0x22D6CCu;
            goto label_22d6cc;
        }
    }
    ctx->pc = 0x22D6A8u;
label_22d6a8:
    // 0x22d6a8: 0xc090222  jal         func_240888
label_22d6ac:
    if (ctx->pc == 0x22D6ACu) {
        ctx->pc = 0x22D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6A8u;
        // 0x22d6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6B0u;
        goto label_22d6b0;
    }
    ctx->pc = 0x22D6A8u;
    SET_GPR_U32(ctx, 31, 0x22D6B0u);
    ctx->pc = 0x22D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6A8u;
    // 0x22d6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22D6A8u, 0x22D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6B0u;
label_22d6b0:
    // 0x22d6b0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22d6b4:
    // 0x22d6b4: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
label_22d6b8:
    if (ctx->pc == 0x22D6B8u) {
        ctx->pc = 0x22D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6B4u;
        // 0x22d6b8: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6BCu;
        goto label_22d6bc;
    }
    ctx->pc = 0x22D6B4u;
    {
        const bool branch_taken_0x22d6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x22d6b4) {
            ctx->pc = 0x22D6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D6B4u;
            // 0x22d6b8: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D6CCu;
            goto label_22d6cc;
        }
    }
    ctx->pc = 0x22D6BCu;
label_22d6bc:
    // 0x22d6bc: 0xc090222  jal         func_240888
label_22d6c0:
    if (ctx->pc == 0x22D6C0u) {
        ctx->pc = 0x22D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6BCu;
        // 0x22d6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6C4u;
        goto label_22d6c4;
    }
    ctx->pc = 0x22D6BCu;
    SET_GPR_U32(ctx, 31, 0x22D6C4u);
    ctx->pc = 0x22D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6BCu;
    // 0x22d6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22D6BCu, 0x22D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6C4u;
label_22d6c4:
    // 0x22d6c4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x22d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_22d6c8:
    // 0x22d6c8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22d6cc:
    // 0x22d6cc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x22d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_22d6d0:
    // 0x22d6d0: 0xc0739c6  jal         func_1CE718
label_22d6d4:
    if (ctx->pc == 0x22D6D4u) {
        ctx->pc = 0x22D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6D0u;
        // 0x22d6d4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6D8u;
        goto label_22d6d8;
    }
    ctx->pc = 0x22D6D0u;
    SET_GPR_U32(ctx, 31, 0x22D6D8u);
    ctx->pc = 0x22D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6D0u;
    // 0x22d6d4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x22D6D0u, 0x22D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6D8u;
label_22d6d8:
    // 0x22d6d8: 0xc088ac6  jal         func_222B18
label_22d6dc:
    if (ctx->pc == 0x22D6DCu) {
        ctx->pc = 0x22D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6D8u;
        // 0x22d6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6E0u;
        goto label_22d6e0;
    }
    ctx->pc = 0x22D6D8u;
    SET_GPR_U32(ctx, 31, 0x22D6E0u);
    ctx->pc = 0x22D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6D8u;
    // 0x22d6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D6D8u, 0x22D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6E0u;
label_22d6e0:
    // 0x22d6e0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x22d6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_22d6e4:
    // 0x22d6e4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22d6e8:
    // 0x22d6e8: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x22d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_22d6ec:
    // 0x22d6ec: 0xc06ceea  jal         func_1B3BA8
label_22d6f0:
    if (ctx->pc == 0x22D6F0u) {
        ctx->pc = 0x22D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6ECu;
        // 0x22d6f0: 0x8e050380  lw          $a1, 0x380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6F4u;
        goto label_22d6f4;
    }
    ctx->pc = 0x22D6ECu;
    SET_GPR_U32(ctx, 31, 0x22D6F4u);
    ctx->pc = 0x22D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6ECu;
    // 0x22d6f0: 0x8e050380  lw          $a1, 0x380($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3BA8u, 0x22D6ECu, 0x22D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6F4u;
label_22d6f4:
    // 0x22d6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d6f8:
    // 0x22d6f8: 0xc089988  jal         func_226620
label_22d6fc:
    if (ctx->pc == 0x22D6FCu) {
        ctx->pc = 0x22D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6F8u;
        // 0x22d6fc: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D700u;
        goto label_22d700;
    }
    ctx->pc = 0x22D6F8u;
    SET_GPR_U32(ctx, 31, 0x22D700u);
    ctx->pc = 0x22D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6F8u;
    // 0x22d6fc: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D6F8u, 0x22D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D700u;
label_22d700:
    // 0x22d700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22d700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d704:
    // 0x22d704: 0xc0899aa  jal         func_2266A8
label_22d708:
    if (ctx->pc == 0x22D708u) {
        ctx->pc = 0x22D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D704u;
        // 0x22d708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D70Cu;
        goto label_22d70c;
    }
    ctx->pc = 0x22D704u;
    SET_GPR_U32(ctx, 31, 0x22D70Cu);
    ctx->pc = 0x22D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D704u;
    // 0x22d708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x22D704u, 0x22D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D70Cu;
label_22d70c:
    // 0x22d70c: 0xc089a5e  jal         func_226978
label_22d710:
    if (ctx->pc == 0x22D710u) {
        ctx->pc = 0x22D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D70Cu;
        // 0x22d710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D714u;
        goto label_22d714;
    }
    ctx->pc = 0x22D70Cu;
    SET_GPR_U32(ctx, 31, 0x22D714u);
    ctx->pc = 0x22D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D70Cu;
    // 0x22d710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226978u, 0x22D70Cu, 0x22D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D714u;
label_22d714:
    // 0x22d714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d718:
    // 0x22d718: 0xc089c20  jal         func_227080
label_22d71c:
    if (ctx->pc == 0x22D71Cu) {
        ctx->pc = 0x22D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D718u;
        // 0x22d71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D720u;
        goto label_22d720;
    }
    ctx->pc = 0x22D718u;
    SET_GPR_U32(ctx, 31, 0x22D720u);
    ctx->pc = 0x22D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D718u;
    // 0x22d71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22D718u, 0x22D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D720u;
label_22d720:
    // 0x22d720: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d724:
    // 0x22d724: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d728:
    // 0x22d728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22d72c:
    // 0x22d72c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22d72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22d730:
    // 0x22d730: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22d730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22d734:
    // 0x22d734: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22d738:
    // 0x22d738: 0xc0f809  jalr        $a2
label_22d73c:
    if (ctx->pc == 0x22D73Cu) {
        ctx->pc = 0x22D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D738u;
        // 0x22d73c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D740u;
        goto label_22d740;
    }
    ctx->pc = 0x22D738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x22D740u);
        ctx->pc = 0x22D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D738u;
        // 0x22d73c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D738u, 0x22D740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D740u;
label_22d740:
    // 0x22d740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d744:
    // 0x22d744: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22d744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22d748:
    // 0x22d748: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22d74c:
    // 0x22d74c: 0x40f809  jalr        $v0
label_22d750:
    if (ctx->pc == 0x22D750u) {
        ctx->pc = 0x22D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D74Cu;
        // 0x22d750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D754u;
        goto label_22d754;
    }
    ctx->pc = 0x22D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D754u);
        ctx->pc = 0x22D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D74Cu;
        // 0x22d750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D74Cu, 0x22D754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D754u;
label_22d754:
    // 0x22d754: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22d758:
    if (ctx->pc == 0x22D758u) {
        ctx->pc = 0x22D75Cu;
        goto label_22d75c;
    }
    ctx->pc = 0x22D754u;
    {
        const bool branch_taken_0x22d754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d754) {
            ctx->pc = 0x22D774u;
            goto label_22d774;
        }
    }
    ctx->pc = 0x22D75Cu;
label_22d75c:
    // 0x22d75c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d760:
    // 0x22d760: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22d760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22d764:
    // 0x22d764: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22d768:
    // 0x22d768: 0x40f809  jalr        $v0
label_22d76c:
    if (ctx->pc == 0x22D76Cu) {
        ctx->pc = 0x22D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D768u;
        // 0x22d76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D770u;
        goto label_22d770;
    }
    ctx->pc = 0x22D768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D770u);
        ctx->pc = 0x22D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D768u;
        // 0x22d76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D768u, 0x22D770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D770u;
label_22d770:
    // 0x22d770: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22d770u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22d774:
    // 0x22d774: 0xc09ef32  jal         func_27BCC8
label_22d778:
    if (ctx->pc == 0x22D778u) {
        ctx->pc = 0x22D77Cu;
        goto label_22d77c;
    }
    ctx->pc = 0x22D774u;
    SET_GPR_U32(ctx, 31, 0x22D77Cu);
    ctx->pc = 0x27BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BCC8u, 0x22D774u, 0x22D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D77Cu;
label_22d77c:
    // 0x22d77c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d780:
    // 0x22d780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d784:
    // 0x22d784: 0x3e00008  jr          $ra
label_22d788:
    if (ctx->pc == 0x22D788u) {
        ctx->pc = 0x22D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D784u;
        // 0x22d788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D78Cu;
        goto label_22d78c;
    }
    ctx->pc = 0x22D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D784u;
        // 0x22d788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D78Cu;
label_22d78c:
    // 0x22d78c: 0x0  nop
    ctx->pc = 0x22d78cu;
    // NOP
    ctx->pc = 0x22d790u;
}
