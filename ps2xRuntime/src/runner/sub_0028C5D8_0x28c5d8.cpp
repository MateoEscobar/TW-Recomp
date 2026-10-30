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

// Function: sub_0028C5D8
// Address: 0x28c5d8 - 0x28c6a8
void sub_0028C5D8_0x28c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C5D8_0x28c5d8");
#endif

    switch (ctx->pc) {
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6a4u: goto label_28c6a4;
        default: break;
    }

    ctx->pc = 0x28c5d8u;

label_28c5d8:
    // 0x28c5d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28c5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28c5dc:
    // 0x28c5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c5e0:
    // 0x28c5e0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_28c5e4:
    // 0x28c5e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_28c5e8:
    // 0x28c5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c5ec:
    // 0x28c5ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_28c5f0:
    // 0x28c5f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c5f4:
    // 0x28c5f4: 0x16420016  bne         $s2, $v0, . + 4 + (0x16 << 2)
label_28c5f8:
    if (ctx->pc == 0x28C5F8u) {
        ctx->pc = 0x28C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F4u;
        // 0x28c5f8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5FCu;
        goto label_28c5fc;
    }
    ctx->pc = 0x28C5F4u;
    {
        const bool branch_taken_0x28c5f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F4u;
        // 0x28c5f8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5f4) {
            ctx->pc = 0x28C650u;
            goto label_28c650;
        }
    }
    ctx->pc = 0x28C5FCu;
label_28c5fc:
    // 0x28c5fc: 0xc0a36c8  jal         func_28DB20
label_28c600:
    if (ctx->pc == 0x28C600u) {
        ctx->pc = 0x28C604u;
        goto label_28c604;
    }
    ctx->pc = 0x28C5FCu;
    SET_GPR_U32(ctx, 31, 0x28C604u);
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28C5FCu, 0x28C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C604u;
label_28c604:
    // 0x28c604: 0xc089bdc  jal         func_226F70
label_28c608:
    if (ctx->pc == 0x28C608u) {
        ctx->pc = 0x28C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C604u;
        // 0x28c608: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C60Cu;
        goto label_28c60c;
    }
    ctx->pc = 0x28C604u;
    SET_GPR_U32(ctx, 31, 0x28C60Cu);
    ctx->pc = 0x28C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C604u;
    // 0x28c608: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x28C604u, 0x28C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C60Cu;
label_28c60c:
    // 0x28c60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c610:
    // 0x28c610: 0xc0a3658  jal         func_28D960
label_28c614:
    if (ctx->pc == 0x28C614u) {
        ctx->pc = 0x28C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C610u;
        // 0x28c614: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C618u;
        goto label_28c618;
    }
    ctx->pc = 0x28C610u;
    SET_GPR_U32(ctx, 31, 0x28C618u);
    ctx->pc = 0x28C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C610u;
    // 0x28c614: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28C610u, 0x28C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C618u;
label_28c618:
    // 0x28c618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c61c:
    // 0x28c61c: 0x622000d  bltzl       $s1, . + 4 + (0xD << 2)
label_28c620:
    if (ctx->pc == 0x28C620u) {
        ctx->pc = 0x28C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C61Cu;
        // 0x28c620: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C624u;
        goto label_28c624;
    }
    ctx->pc = 0x28C61Cu;
    {
        const bool branch_taken_0x28c61c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x28c61c) {
            ctx->pc = 0x28C620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C61Cu;
            // 0x28c620: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C654u;
            goto label_28c654;
        }
    }
    ctx->pc = 0x28C624u;
label_28c624:
    // 0x28c624: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28c628:
    // 0x28c628: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x28c628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28c62c:
    // 0x28c62c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_28c630:
    if (ctx->pc == 0x28C630u) {
        ctx->pc = 0x28C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C62Cu;
        // 0x28c630: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C634u;
        goto label_28c634;
    }
    ctx->pc = 0x28C62Cu;
    {
        const bool branch_taken_0x28c62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c62c) {
            ctx->pc = 0x28C630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C62Cu;
            // 0x28c630: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C654u;
            goto label_28c654;
        }
    }
    ctx->pc = 0x28C634u;
label_28c634:
    // 0x28c634: 0x0  nop
    ctx->pc = 0x28c634u;
    // NOP
label_28c638:
    // 0x28c638: 0xc0a35f6  jal         func_28D7D8
label_28c63c:
    if (ctx->pc == 0x28C63Cu) {
        ctx->pc = 0x28C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C638u;
        // 0x28c63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C640u;
        goto label_28c640;
    }
    ctx->pc = 0x28C638u;
    SET_GPR_U32(ctx, 31, 0x28C640u);
    ctx->pc = 0x28C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C638u;
    // 0x28c63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28C638u, 0x28C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C640u;
label_28c640:
    // 0x28c640: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28c644:
    // 0x28c644: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x28c644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28c648:
    // 0x28c648: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_28c64c:
    if (ctx->pc == 0x28C64Cu) {
        ctx->pc = 0x28C650u;
        goto label_28c650;
    }
    ctx->pc = 0x28C648u;
    {
        const bool branch_taken_0x28c648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c648) {
            ctx->pc = 0x28C638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c638;
        }
    }
    ctx->pc = 0x28C650u;
label_28c650:
    // 0x28c650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c654:
    // 0x28c654: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x28c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_28c658:
    // 0x28c658: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28c65c:
    // 0x28c65c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c660:
    // 0x28c660: 0xc089a76  jal         func_2269D8
label_28c664:
    if (ctx->pc == 0x28C664u) {
        ctx->pc = 0x28C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C660u;
        // 0x28c664: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C668u;
        goto label_28c668;
    }
    ctx->pc = 0x28C660u;
    SET_GPR_U32(ctx, 31, 0x28C668u);
    ctx->pc = 0x28C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C660u;
    // 0x28c664: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x28C660u, 0x28C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C668u;
label_28c668:
    // 0x28c668: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x28c668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_28c66c:
    // 0x28c66c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c670:
    // 0x28c670: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28c670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28c674:
    // 0x28c674: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c678:
    // 0x28c678: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28c67c:
    // 0x28c67c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28c67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28c680:
    // 0x28c680: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28c684:
    // 0x28c684: 0x40f809  jalr        $v0
label_28c688:
    if (ctx->pc == 0x28C688u) {
        ctx->pc = 0x28C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C684u;
        // 0x28c688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C68Cu;
        goto label_28c68c;
    }
    ctx->pc = 0x28C684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C68Cu);
        ctx->pc = 0x28C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C684u;
        // 0x28c688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C684u, 0x28C68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C68Cu;
label_28c68c:
    // 0x28c68c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28c68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c690:
    // 0x28c690: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28c690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c694:
    // 0x28c694: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28c694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c698:
    // 0x28c698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28c69c:
    // 0x28c69c: 0x3e00008  jr          $ra
label_28c6a0:
    if (ctx->pc == 0x28C6A0u) {
        ctx->pc = 0x28C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C69Cu;
        // 0x28c6a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6A4u;
        goto label_28c6a4;
    }
    ctx->pc = 0x28C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C69Cu;
        // 0x28c6a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C6A4u;
label_28c6a4:
    // 0x28c6a4: 0x0  nop
    ctx->pc = 0x28c6a4u;
    // NOP
    ctx->pc = 0x28c6a8u;
}
