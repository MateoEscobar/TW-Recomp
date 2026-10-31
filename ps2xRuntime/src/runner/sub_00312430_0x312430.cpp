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

// Function: sub_00312430
// Address: 0x312430 - 0x312518
void sub_00312430_0x312430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312430_0x312430");
#endif

    switch (ctx->pc) {
        case 0x312430u: goto label_312430;
        case 0x312434u: goto label_312434;
        case 0x312438u: goto label_312438;
        case 0x31243cu: goto label_31243c;
        case 0x312440u: goto label_312440;
        case 0x312444u: goto label_312444;
        case 0x312448u: goto label_312448;
        case 0x31244cu: goto label_31244c;
        case 0x312450u: goto label_312450;
        case 0x312454u: goto label_312454;
        case 0x312458u: goto label_312458;
        case 0x31245cu: goto label_31245c;
        case 0x312460u: goto label_312460;
        case 0x312464u: goto label_312464;
        case 0x312468u: goto label_312468;
        case 0x31246cu: goto label_31246c;
        case 0x312470u: goto label_312470;
        case 0x312474u: goto label_312474;
        case 0x312478u: goto label_312478;
        case 0x31247cu: goto label_31247c;
        case 0x312480u: goto label_312480;
        case 0x312484u: goto label_312484;
        case 0x312488u: goto label_312488;
        case 0x31248cu: goto label_31248c;
        case 0x312490u: goto label_312490;
        case 0x312494u: goto label_312494;
        case 0x312498u: goto label_312498;
        case 0x31249cu: goto label_31249c;
        case 0x3124a0u: goto label_3124a0;
        case 0x3124a4u: goto label_3124a4;
        case 0x3124a8u: goto label_3124a8;
        case 0x3124acu: goto label_3124ac;
        case 0x3124b0u: goto label_3124b0;
        case 0x3124b4u: goto label_3124b4;
        case 0x3124b8u: goto label_3124b8;
        case 0x3124bcu: goto label_3124bc;
        case 0x3124c0u: goto label_3124c0;
        case 0x3124c4u: goto label_3124c4;
        case 0x3124c8u: goto label_3124c8;
        case 0x3124ccu: goto label_3124cc;
        case 0x3124d0u: goto label_3124d0;
        case 0x3124d4u: goto label_3124d4;
        case 0x3124d8u: goto label_3124d8;
        case 0x3124dcu: goto label_3124dc;
        case 0x3124e0u: goto label_3124e0;
        case 0x3124e4u: goto label_3124e4;
        case 0x3124e8u: goto label_3124e8;
        case 0x3124ecu: goto label_3124ec;
        case 0x3124f0u: goto label_3124f0;
        case 0x3124f4u: goto label_3124f4;
        case 0x3124f8u: goto label_3124f8;
        case 0x3124fcu: goto label_3124fc;
        case 0x312500u: goto label_312500;
        case 0x312504u: goto label_312504;
        case 0x312508u: goto label_312508;
        case 0x31250cu: goto label_31250c;
        case 0x312510u: goto label_312510;
        case 0x312514u: goto label_312514;
        default: break;
    }

    ctx->pc = 0x312430u;

label_312430:
    // 0x312430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_312434:
    // 0x312434: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x312434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_312438:
    // 0x312438: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x312438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31243c:
    // 0x31243c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31243cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312440:
    // 0x312440: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x312440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_312444:
    // 0x312444: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x312444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312448:
    // 0x312448: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x312448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_31244c:
    // 0x31244c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_312450:
    // 0x312450: 0x2414003b  addiu       $s4, $zero, 0x3B
    ctx->pc = 0x312450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_312454:
    // 0x312454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_312458:
    // 0x312458: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31245c:
    // 0x31245c: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x31245cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_312460:
    // 0x312460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312464:
    // 0x312464: 0x0  nop
    ctx->pc = 0x312464u;
    // NOP
label_312468:
    // 0x312468: 0xc137826  jal         func_4DE098
label_31246c:
    if (ctx->pc == 0x31246Cu) {
        ctx->pc = 0x31246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312468u;
        // 0x31246c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312470u;
        goto label_312470;
    }
    ctx->pc = 0x312468u;
    SET_GPR_U32(ctx, 31, 0x312470u);
    ctx->pc = 0x31246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312468u;
    // 0x31246c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x312468u, 0x312470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312470u;
label_312470:
    // 0x312470: 0xc0e409a  jal         func_390268
label_312474:
    if (ctx->pc == 0x312474u) {
        ctx->pc = 0x312474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312470u;
        // 0x312474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312478u;
        goto label_312478;
    }
    ctx->pc = 0x312470u;
    SET_GPR_U32(ctx, 31, 0x312478u);
    ctx->pc = 0x312474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312470u;
    // 0x312474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x312470u, 0x312478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312478u;
label_312478:
    // 0x312478: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_31247c:
    if (ctx->pc == 0x31247Cu) {
        ctx->pc = 0x31247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312478u;
        // 0x31247c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312480u;
        goto label_312480;
    }
    ctx->pc = 0x312478u;
    {
        const bool branch_taken_0x312478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312478) {
            ctx->pc = 0x31247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312478u;
            // 0x31247c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124E4u;
            goto label_3124e4;
        }
    }
    ctx->pc = 0x312480u;
label_312480:
    // 0x312480: 0xc087502  jal         func_21D408
label_312484:
    if (ctx->pc == 0x312484u) {
        ctx->pc = 0x312484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312480u;
        // 0x312484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312488u;
        goto label_312488;
    }
    ctx->pc = 0x312480u;
    SET_GPR_U32(ctx, 31, 0x312488u);
    ctx->pc = 0x312484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312480u;
    // 0x312484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x312480u, 0x312488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312488u;
label_312488:
    // 0x312488: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31248c:
    // 0x31248c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31248cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_312490:
    // 0x312490: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_312494:
    if (ctx->pc == 0x312494u) {
        ctx->pc = 0x312494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312490u;
        // 0x312494: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312498u;
        goto label_312498;
    }
    ctx->pc = 0x312490u;
    {
        const bool branch_taken_0x312490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x312494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312490u;
        // 0x312494: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312490) {
            ctx->pc = 0x3124A4u;
            goto label_3124a4;
        }
    }
    ctx->pc = 0x312498u;
label_312498:
    // 0x312498: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31249c:
    // 0x31249c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3124a0:
    if (ctx->pc == 0x3124A0u) {
        ctx->pc = 0x3124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31249Cu;
        // 0x3124a0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124A4u;
        goto label_3124a4;
    }
    ctx->pc = 0x31249Cu;
    {
        const bool branch_taken_0x31249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31249Cu;
        // 0x3124a0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31249c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3124A4u;
label_3124a4:
    // 0x3124a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3124a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3124a8:
    // 0x3124a8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_3124ac:
    if (ctx->pc == 0x3124ACu) {
        ctx->pc = 0x3124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124A8u;
        // 0x3124ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124B0u;
        goto label_3124b0;
    }
    ctx->pc = 0x3124A8u;
    {
        const bool branch_taken_0x3124a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3124a8) {
            ctx->pc = 0x3124ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3124A8u;
            // 0x3124ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124E4u;
            goto label_3124e4;
        }
    }
    ctx->pc = 0x3124B0u;
label_3124b0:
    // 0x3124b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3124b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3124b4:
    // 0x3124b4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3124b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3124b8:
    // 0x3124b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3124b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3124bc:
    // 0x3124bc: 0x40f809  jalr        $v0
label_3124c0:
    if (ctx->pc == 0x3124C0u) {
        ctx->pc = 0x3124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124BCu;
        // 0x3124c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124C4u;
        goto label_3124c4;
    }
    ctx->pc = 0x3124BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3124C4u);
        ctx->pc = 0x3124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124BCu;
        // 0x3124c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3124BCu, 0x3124C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3124C4u;
label_3124c4:
    // 0x3124c4: 0x5454000a  bnel        $v0, $s4, . + 4 + (0xA << 2)
label_3124c8:
    if (ctx->pc == 0x3124C8u) {
        ctx->pc = 0x3124C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124C4u;
        // 0x3124c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124CCu;
        goto label_3124cc;
    }
    ctx->pc = 0x3124C4u;
    {
        const bool branch_taken_0x3124c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3124c4) {
            ctx->pc = 0x3124C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3124C4u;
            // 0x3124c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124F0u;
            goto label_3124f0;
        }
    }
    ctx->pc = 0x3124CCu;
label_3124cc:
    // 0x3124cc: 0xc0b3b58  jal         func_2CED60
label_3124d0:
    if (ctx->pc == 0x3124D0u) {
        ctx->pc = 0x3124D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124CCu;
        // 0x3124d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124D4u;
        goto label_3124d4;
    }
    ctx->pc = 0x3124CCu;
    SET_GPR_U32(ctx, 31, 0x3124D4u);
    ctx->pc = 0x3124D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124CCu;
    // 0x3124d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CED60u, 0x3124CCu, 0x3124D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124D4u;
label_3124d4:
    // 0x3124d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3124d8:
    if (ctx->pc == 0x3124D8u) {
        ctx->pc = 0x3124D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124D4u;
        // 0x3124d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124DCu;
        goto label_3124dc;
    }
    ctx->pc = 0x3124D4u;
    {
        const bool branch_taken_0x3124d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3124D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124D4u;
        // 0x3124d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124d4) {
            ctx->pc = 0x3124E4u;
            goto label_3124e4;
        }
    }
    ctx->pc = 0x3124DCu;
label_3124dc:
    // 0x3124dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3124e0:
    if (ctx->pc == 0x3124E0u) {
        ctx->pc = 0x3124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124DCu;
        // 0x3124e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124E4u;
        goto label_3124e4;
    }
    ctx->pc = 0x3124DCu;
    {
        const bool branch_taken_0x3124dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124DCu;
        // 0x3124e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124dc) {
            ctx->pc = 0x3124F0u;
            goto label_3124f0;
        }
    }
    ctx->pc = 0x3124E4u;
label_3124e4:
    // 0x3124e4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x3124e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3124e8:
    // 0x3124e8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_3124ec:
    if (ctx->pc == 0x3124ECu) {
        ctx->pc = 0x3124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124E8u;
        // 0x3124ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3124F0u;
        goto label_3124f0;
    }
    ctx->pc = 0x3124E8u;
    {
        const bool branch_taken_0x3124e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124E8u;
        // 0x3124ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124e8) {
            ctx->pc = 0x312468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312468;
        }
    }
    ctx->pc = 0x3124F0u;
label_3124f0:
    // 0x3124f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3124f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3124f4:
    // 0x3124f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3124f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3124f8:
    // 0x3124f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3124f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3124fc:
    // 0x3124fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3124fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_312500:
    // 0x312500: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x312500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312504:
    // 0x312504: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x312504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312508:
    // 0x312508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31250c:
    // 0x31250c: 0x3e00008  jr          $ra
label_312510:
    if (ctx->pc == 0x312510u) {
        ctx->pc = 0x312510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31250Cu;
        // 0x312510: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312514u;
        goto label_312514;
    }
    ctx->pc = 0x31250Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31250Cu;
        // 0x312510: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31250Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312514u;
label_312514:
    // 0x312514: 0x0  nop
    ctx->pc = 0x312514u;
    // NOP
    ctx->pc = 0x312518u;
}
