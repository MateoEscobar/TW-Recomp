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

// Function: sub_00162598
// Address: 0x162598 - 0x162688
void sub_00162598_0x162598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162598_0x162598");
#endif

    switch (ctx->pc) {
        case 0x162598u: goto label_162598;
        case 0x16259cu: goto label_16259c;
        case 0x1625a0u: goto label_1625a0;
        case 0x1625a4u: goto label_1625a4;
        case 0x1625a8u: goto label_1625a8;
        case 0x1625acu: goto label_1625ac;
        case 0x1625b0u: goto label_1625b0;
        case 0x1625b4u: goto label_1625b4;
        case 0x1625b8u: goto label_1625b8;
        case 0x1625bcu: goto label_1625bc;
        case 0x1625c0u: goto label_1625c0;
        case 0x1625c4u: goto label_1625c4;
        case 0x1625c8u: goto label_1625c8;
        case 0x1625ccu: goto label_1625cc;
        case 0x1625d0u: goto label_1625d0;
        case 0x1625d4u: goto label_1625d4;
        case 0x1625d8u: goto label_1625d8;
        case 0x1625dcu: goto label_1625dc;
        case 0x1625e0u: goto label_1625e0;
        case 0x1625e4u: goto label_1625e4;
        case 0x1625e8u: goto label_1625e8;
        case 0x1625ecu: goto label_1625ec;
        case 0x1625f0u: goto label_1625f0;
        case 0x1625f4u: goto label_1625f4;
        case 0x1625f8u: goto label_1625f8;
        case 0x1625fcu: goto label_1625fc;
        case 0x162600u: goto label_162600;
        case 0x162604u: goto label_162604;
        case 0x162608u: goto label_162608;
        case 0x16260cu: goto label_16260c;
        case 0x162610u: goto label_162610;
        case 0x162614u: goto label_162614;
        case 0x162618u: goto label_162618;
        case 0x16261cu: goto label_16261c;
        case 0x162620u: goto label_162620;
        case 0x162624u: goto label_162624;
        case 0x162628u: goto label_162628;
        case 0x16262cu: goto label_16262c;
        case 0x162630u: goto label_162630;
        case 0x162634u: goto label_162634;
        case 0x162638u: goto label_162638;
        case 0x16263cu: goto label_16263c;
        case 0x162640u: goto label_162640;
        case 0x162644u: goto label_162644;
        case 0x162648u: goto label_162648;
        case 0x16264cu: goto label_16264c;
        case 0x162650u: goto label_162650;
        case 0x162654u: goto label_162654;
        case 0x162658u: goto label_162658;
        case 0x16265cu: goto label_16265c;
        case 0x162660u: goto label_162660;
        case 0x162664u: goto label_162664;
        case 0x162668u: goto label_162668;
        case 0x16266cu: goto label_16266c;
        case 0x162670u: goto label_162670;
        case 0x162674u: goto label_162674;
        case 0x162678u: goto label_162678;
        case 0x16267cu: goto label_16267c;
        case 0x162680u: goto label_162680;
        case 0x162684u: goto label_162684;
        default: break;
    }

    ctx->pc = 0x162598u;

label_162598:
    // 0x162598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16259c:
    // 0x16259c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16259cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1625a0:
    // 0x1625a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1625a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1625a4:
    // 0x1625a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1625a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1625a8:
    // 0x1625a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1625a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1625ac:
    // 0x1625ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1625acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1625b0:
    // 0x1625b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1625b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1625b4:
    // 0x1625b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1625b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1625b8:
    // 0x1625b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1625b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1625bc:
    // 0x1625bc: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1625bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1625c0:
    // 0x1625c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1625c4:
    // 0x1625c4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1625c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1625c8:
    // 0x1625c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1625cc:
    // 0x1625cc: 0x40f809  jalr        $v0
label_1625d0:
    if (ctx->pc == 0x1625D0u) {
        ctx->pc = 0x1625D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625CCu;
        // 0x1625d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1625D4u;
        goto label_1625d4;
    }
    ctx->pc = 0x1625CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1625D4u);
        ctx->pc = 0x1625D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625CCu;
        // 0x1625d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1625CCu, 0x1625D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1625D4u;
label_1625d4:
    // 0x1625d4: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1625d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_1625d8:
    // 0x1625d8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1625d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1625dc:
    // 0x1625dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1625e0:
    if (ctx->pc == 0x1625E0u) {
        ctx->pc = 0x1625E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625DCu;
        // 0x1625e0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1625E4u;
        goto label_1625e4;
    }
    ctx->pc = 0x1625DCu;
    {
        const bool branch_taken_0x1625dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1625E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625DCu;
        // 0x1625e0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625dc) {
            ctx->pc = 0x1625F8u;
            goto label_1625f8;
        }
    }
    ctx->pc = 0x1625E4u;
label_1625e4:
    // 0x1625e4: 0x0  nop
    ctx->pc = 0x1625e4u;
    // NOP
label_1625e8:
    // 0x1625e8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1625e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1625ec:
    // 0x1625ec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1625ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1625f0:
    // 0x1625f0: 0x60f809  jalr        $v1
label_1625f4:
    if (ctx->pc == 0x1625F4u) {
        ctx->pc = 0x1625F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625F0u;
        // 0x1625f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1625F8u;
        goto label_1625f8;
    }
    ctx->pc = 0x1625F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1625F8u);
        ctx->pc = 0x1625F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625F0u;
        // 0x1625f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1625F0u, 0x1625F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1625F8u;
label_1625f8:
    // 0x1625f8: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x1625f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_1625fc:
    // 0x1625fc: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1625fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_162600:
    // 0x162600: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162604:
    // 0x162604: 0x2610ffe2  addiu       $s0, $s0, -0x1E
    ctx->pc = 0x162604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967266));
label_162608:
    // 0x162608: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16260c:
    // 0x16260c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162610:
    // 0x162610: 0x40f809  jalr        $v0
label_162614:
    if (ctx->pc == 0x162614u) {
        ctx->pc = 0x162614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162610u;
        // 0x162614: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162618u;
        goto label_162618;
    }
    ctx->pc = 0x162610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162618u);
        ctx->pc = 0x162614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162610u;
        // 0x162614: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162610u, 0x162618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162618u;
label_162618:
    // 0x162618: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x162618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_16261c:
    // 0x16261c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_162620:
    if (ctx->pc == 0x162620u) {
        ctx->pc = 0x162620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16261Cu;
        // 0x162620: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162624u;
        goto label_162624;
    }
    ctx->pc = 0x16261Cu;
    {
        const bool branch_taken_0x16261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16261c) {
            ctx->pc = 0x162620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16261Cu;
            // 0x162620: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1625E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1625e8;
        }
    }
    ctx->pc = 0x162624u;
label_162624:
    // 0x162624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162628:
    // 0x162628: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x162628u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_16262c:
    // 0x16262c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x16262cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_162630:
    // 0x162630: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x162630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_162634:
    // 0x162634: 0x0  nop
    ctx->pc = 0x162634u;
    // NOP
label_162638:
    // 0x162638: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16263c:
    // 0x16263c: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
label_162640:
    if (ctx->pc == 0x162640u) {
        ctx->pc = 0x162640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16263Cu;
        // 0x162640: 0x8e84cd4c  lw          $a0, -0x32B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162644u;
        goto label_162644;
    }
    ctx->pc = 0x16263Cu;
    {
        const bool branch_taken_0x16263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x162640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16263Cu;
        // 0x162640: 0x8e84cd4c  lw          $a0, -0x32B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16263c) {
            ctx->pc = 0x162650u;
            goto label_162650;
        }
    }
    ctx->pc = 0x162644u;
label_162644:
    // 0x162644: 0xc062be2  jal         func_18AF88
label_162648:
    if (ctx->pc == 0x162648u) {
        ctx->pc = 0x162648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162644u;
        // 0x162648: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16264Cu;
        goto label_16264c;
    }
    ctx->pc = 0x162644u;
    SET_GPR_U32(ctx, 31, 0x16264Cu);
    ctx->pc = 0x162648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162644u;
    // 0x162648: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x162644u, 0x16264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16264Cu;
label_16264c:
    // 0x16264c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x16264cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_162650:
    // 0x162650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162654:
    // 0x162654: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x162654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_162658:
    // 0x162658: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_16265c:
    if (ctx->pc == 0x16265Cu) {
        ctx->pc = 0x16265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162658u;
        // 0x16265c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162660u;
        goto label_162660;
    }
    ctx->pc = 0x162658u;
    {
        const bool branch_taken_0x162658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162658u;
        // 0x16265c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162658) {
            ctx->pc = 0x162638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162638;
        }
    }
    ctx->pc = 0x162660u;
label_162660:
    // 0x162660: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x162660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_162664:
    // 0x162664: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x162664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_162668:
    // 0x162668: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x162668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16266c:
    // 0x16266c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16266cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_162670:
    // 0x162670: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x162670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_162674:
    // 0x162674: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x162674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_162678:
    // 0x162678: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x162678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16267c:
    // 0x16267c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16267cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162680:
    // 0x162680: 0x3e00008  jr          $ra
label_162684:
    if (ctx->pc == 0x162684u) {
        ctx->pc = 0x162684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162680u;
        // 0x162684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162688u;
        goto label_fallthrough_0x162680;
    }
    ctx->pc = 0x162680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162680u;
        // 0x162684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x162680:
    ctx->pc = 0x162688u;
}
