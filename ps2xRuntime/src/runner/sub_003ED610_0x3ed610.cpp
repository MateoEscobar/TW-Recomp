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

// Function: sub_003ED610
// Address: 0x3ed610 - 0x3ed718
void sub_003ED610_0x3ed610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED610_0x3ed610");
#endif

    switch (ctx->pc) {
        case 0x3ed610u: goto label_3ed610;
        case 0x3ed614u: goto label_3ed614;
        case 0x3ed618u: goto label_3ed618;
        case 0x3ed61cu: goto label_3ed61c;
        case 0x3ed620u: goto label_3ed620;
        case 0x3ed624u: goto label_3ed624;
        case 0x3ed628u: goto label_3ed628;
        case 0x3ed62cu: goto label_3ed62c;
        case 0x3ed630u: goto label_3ed630;
        case 0x3ed634u: goto label_3ed634;
        case 0x3ed638u: goto label_3ed638;
        case 0x3ed63cu: goto label_3ed63c;
        case 0x3ed640u: goto label_3ed640;
        case 0x3ed644u: goto label_3ed644;
        case 0x3ed648u: goto label_3ed648;
        case 0x3ed64cu: goto label_3ed64c;
        case 0x3ed650u: goto label_3ed650;
        case 0x3ed654u: goto label_3ed654;
        case 0x3ed658u: goto label_3ed658;
        case 0x3ed65cu: goto label_3ed65c;
        case 0x3ed660u: goto label_3ed660;
        case 0x3ed664u: goto label_3ed664;
        case 0x3ed668u: goto label_3ed668;
        case 0x3ed66cu: goto label_3ed66c;
        case 0x3ed670u: goto label_3ed670;
        case 0x3ed674u: goto label_3ed674;
        case 0x3ed678u: goto label_3ed678;
        case 0x3ed67cu: goto label_3ed67c;
        case 0x3ed680u: goto label_3ed680;
        case 0x3ed684u: goto label_3ed684;
        case 0x3ed688u: goto label_3ed688;
        case 0x3ed68cu: goto label_3ed68c;
        case 0x3ed690u: goto label_3ed690;
        case 0x3ed694u: goto label_3ed694;
        case 0x3ed698u: goto label_3ed698;
        case 0x3ed69cu: goto label_3ed69c;
        case 0x3ed6a0u: goto label_3ed6a0;
        case 0x3ed6a4u: goto label_3ed6a4;
        case 0x3ed6a8u: goto label_3ed6a8;
        case 0x3ed6acu: goto label_3ed6ac;
        case 0x3ed6b0u: goto label_3ed6b0;
        case 0x3ed6b4u: goto label_3ed6b4;
        case 0x3ed6b8u: goto label_3ed6b8;
        case 0x3ed6bcu: goto label_3ed6bc;
        case 0x3ed6c0u: goto label_3ed6c0;
        case 0x3ed6c4u: goto label_3ed6c4;
        case 0x3ed6c8u: goto label_3ed6c8;
        case 0x3ed6ccu: goto label_3ed6cc;
        case 0x3ed6d0u: goto label_3ed6d0;
        case 0x3ed6d4u: goto label_3ed6d4;
        case 0x3ed6d8u: goto label_3ed6d8;
        case 0x3ed6dcu: goto label_3ed6dc;
        case 0x3ed6e0u: goto label_3ed6e0;
        case 0x3ed6e4u: goto label_3ed6e4;
        case 0x3ed6e8u: goto label_3ed6e8;
        case 0x3ed6ecu: goto label_3ed6ec;
        case 0x3ed6f0u: goto label_3ed6f0;
        case 0x3ed6f4u: goto label_3ed6f4;
        case 0x3ed6f8u: goto label_3ed6f8;
        case 0x3ed6fcu: goto label_3ed6fc;
        case 0x3ed700u: goto label_3ed700;
        case 0x3ed704u: goto label_3ed704;
        case 0x3ed708u: goto label_3ed708;
        case 0x3ed70cu: goto label_3ed70c;
        case 0x3ed710u: goto label_3ed710;
        case 0x3ed714u: goto label_3ed714;
        default: break;
    }

    ctx->pc = 0x3ed610u;

label_3ed610:
    // 0x3ed610: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3ed610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3ed614:
    // 0x3ed614: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x3ed614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
label_3ed618:
    // 0x3ed618: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x3ed618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
label_3ed61c:
    // 0x3ed61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed620:
    // 0x3ed620: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x3ed620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
label_3ed624:
    // 0x3ed624: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3ed624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3ed628:
    // 0x3ed628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ed628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed62c:
    // 0x3ed62c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed630:
    // 0x3ed630: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed634:
    // 0x3ed634: 0x40f809  jalr        $v0
label_3ed638:
    if (ctx->pc == 0x3ED638u) {
        ctx->pc = 0x3ED638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED634u;
        // 0x3ed638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED63Cu;
        goto label_3ed63c;
    }
    ctx->pc = 0x3ED634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED63Cu);
        ctx->pc = 0x3ED638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED634u;
        // 0x3ed638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED634u, 0x3ED63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED63Cu;
label_3ed63c:
    // 0x3ed63c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ed63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed640:
    // 0x3ed640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ed640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ed644:
    // 0x3ed644: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ed644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ed648:
    // 0x3ed648: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ed648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ed64c:
    // 0x3ed64c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ed64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ed650:
    // 0x3ed650: 0x0  nop
    ctx->pc = 0x3ed650u;
    // NOP
label_3ed654:
    // 0x3ed654: 0x0  nop
    ctx->pc = 0x3ed654u;
    // NOP
label_3ed658:
    // 0x3ed658: 0x0  nop
    ctx->pc = 0x3ed658u;
    // NOP
label_3ed65c:
    // 0x3ed65c: 0x0  nop
    ctx->pc = 0x3ed65cu;
    // NOP
label_3ed660:
    // 0x3ed660: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ed664:
    if (ctx->pc == 0x3ED664u) {
        ctx->pc = 0x3ED664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED660u;
        // 0x3ed664: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED668u;
        goto label_3ed668;
    }
    ctx->pc = 0x3ED660u;
    {
        const bool branch_taken_0x3ed660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3ED664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED660u;
        // 0x3ed664: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed660) {
            ctx->pc = 0x3ED650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed650;
        }
    }
    ctx->pc = 0x3ED668u;
label_3ed668:
    // 0x3ed668: 0xc138ddc  jal         func_4E3770
label_3ed66c:
    if (ctx->pc == 0x3ED66Cu) {
        ctx->pc = 0x3ED670u;
        goto label_3ed670;
    }
    ctx->pc = 0x3ED668u;
    SET_GPR_U32(ctx, 31, 0x3ED670u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3ED668u, 0x3ED670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED670u;
label_3ed670:
    // 0x3ed670: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ed670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed674:
    // 0x3ed674: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3ed678:
    if (ctx->pc == 0x3ED678u) {
        ctx->pc = 0x3ED678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED674u;
        // 0x3ed678: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED67Cu;
        goto label_3ed67c;
    }
    ctx->pc = 0x3ED674u;
    {
        const bool branch_taken_0x3ed674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED674u;
        // 0x3ed678: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed674) {
            ctx->pc = 0x3ED6B4u;
            goto label_3ed6b4;
        }
    }
    ctx->pc = 0x3ED67Cu;
label_3ed67c:
    // 0x3ed67c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ed67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ed680:
    // 0x3ed680: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x3ed680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3ed684:
    // 0x3ed684: 0xc0cd4ee  jal         func_3353B8
label_3ed688:
    if (ctx->pc == 0x3ED688u) {
        ctx->pc = 0x3ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED684u;
        // 0x3ed688: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED68Cu;
        goto label_3ed68c;
    }
    ctx->pc = 0x3ED684u;
    SET_GPR_U32(ctx, 31, 0x3ED68Cu);
    ctx->pc = 0x3ED688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED684u;
    // 0x3ed688: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3ED684u, 0x3ED68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED68Cu;
label_3ed68c:
    // 0x3ed68c: 0x24450032  addiu       $a1, $v0, 0x32
    ctx->pc = 0x3ed68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_3ed690:
    // 0x3ed690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ed690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ed694:
    // 0x3ed694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ed694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ed698:
    // 0x3ed698: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3ed698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ed69c:
    // 0x3ed69c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ed69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ed6a0:
    // 0x3ed6a0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3ed6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ed6a4:
    // 0x3ed6a4: 0xc0ea16a  jal         func_3A85A8
label_3ed6a8:
    if (ctx->pc == 0x3ED6A8u) {
        ctx->pc = 0x3ED6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6A4u;
        // 0x3ed6a8: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED6ACu;
        goto label_3ed6ac;
    }
    ctx->pc = 0x3ED6A4u;
    SET_GPR_U32(ctx, 31, 0x3ED6ACu);
    ctx->pc = 0x3ED6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED6A4u;
    // 0x3ed6a8: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3ED6A4u, 0x3ED6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED6ACu;
label_3ed6ac:
    // 0x3ed6ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ed6b0:
    if (ctx->pc == 0x3ED6B0u) {
        ctx->pc = 0x3ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6ACu;
        // 0x3ed6b0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED6B4u;
        goto label_3ed6b4;
    }
    ctx->pc = 0x3ED6ACu;
    {
        const bool branch_taken_0x3ed6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6ACu;
        // 0x3ed6b0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed6ac) {
            ctx->pc = 0x3ED6D4u;
            goto label_3ed6d4;
        }
    }
    ctx->pc = 0x3ED6B4u;
label_3ed6b4:
    // 0x3ed6b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ed6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ed6b8:
    // 0x3ed6b8: 0x3c05aa2b  lui         $a1, 0xAA2B
    ctx->pc = 0x3ed6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43563 << 16));
label_3ed6bc:
    // 0x3ed6bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ed6c0:
    // 0x3ed6c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ed6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ed6c4:
    // 0x3ed6c4: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3ed6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3ed6c8:
    // 0x3ed6c8: 0xc0ea16a  jal         func_3A85A8
label_3ed6cc:
    if (ctx->pc == 0x3ED6CCu) {
        ctx->pc = 0x3ED6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6C8u;
        // 0x3ed6cc: 0x34a52bff  ori         $a1, $a1, 0x2BFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11263);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED6D0u;
        goto label_3ed6d0;
    }
    ctx->pc = 0x3ED6C8u;
    SET_GPR_U32(ctx, 31, 0x3ED6D0u);
    ctx->pc = 0x3ED6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED6C8u;
    // 0x3ed6cc: 0x34a52bff  ori         $a1, $a1, 0x2BFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11263);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3ED6C8u, 0x3ED6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED6D0u;
label_3ed6d0:
    // 0x3ed6d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ed6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ed6d4:
    // 0x3ed6d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ed6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ed6d8:
    // 0x3ed6d8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3ed6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3ed6dc:
    // 0x3ed6dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ed6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ed6e0:
    // 0x3ed6e0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ed6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ed6e4:
    // 0x3ed6e4: 0x8c4700cc  lw          $a3, 0xCC($v0)
    ctx->pc = 0x3ed6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ed6e8:
    // 0x3ed6e8: 0xe0f809  jalr        $a3
label_3ed6ec:
    if (ctx->pc == 0x3ED6ECu) {
        ctx->pc = 0x3ED6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6E8u;
        // 0x3ed6ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED6F0u;
        goto label_3ed6f0;
    }
    ctx->pc = 0x3ED6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x3ED6F0u);
        ctx->pc = 0x3ED6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6E8u;
        // 0x3ed6ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED6E8u, 0x3ED6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED6F0u;
label_3ed6f0:
    // 0x3ed6f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ed6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed6f4:
    // 0x3ed6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ed6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ed6f8:
    // 0x3ed6f8: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x3ed6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ed6fc:
    // 0x3ed6fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3ed6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3ed700:
    // 0x3ed700: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x3ed700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ed704:
    // 0x3ed704: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ed704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3ed708:
    // 0x3ed708: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x3ed708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ed70c:
    // 0x3ed70c: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3ed70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ed710:
    // 0x3ed710: 0x3e00008  jr          $ra
label_3ed714:
    if (ctx->pc == 0x3ED714u) {
        ctx->pc = 0x3ED714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED710u;
        // 0x3ed714: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED718u;
        goto label_fallthrough_0x3ed710;
    }
    ctx->pc = 0x3ED710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED710u;
        // 0x3ed714: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed710:
    ctx->pc = 0x3ED718u;
}
