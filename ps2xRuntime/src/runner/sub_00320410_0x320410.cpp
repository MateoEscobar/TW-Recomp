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

// Function: sub_00320410
// Address: 0x320410 - 0x32050c
void sub_00320410_0x320410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320410_0x320410");
#endif

    switch (ctx->pc) {
        case 0x320410u: goto label_320410;
        case 0x320414u: goto label_320414;
        case 0x320418u: goto label_320418;
        case 0x32041cu: goto label_32041c;
        case 0x320420u: goto label_320420;
        case 0x320424u: goto label_320424;
        case 0x320428u: goto label_320428;
        case 0x32042cu: goto label_32042c;
        case 0x320430u: goto label_320430;
        case 0x320434u: goto label_320434;
        case 0x320438u: goto label_320438;
        case 0x32043cu: goto label_32043c;
        case 0x320440u: goto label_320440;
        case 0x320444u: goto label_320444;
        case 0x320448u: goto label_320448;
        case 0x32044cu: goto label_32044c;
        case 0x320450u: goto label_320450;
        case 0x320454u: goto label_320454;
        case 0x320458u: goto label_320458;
        case 0x32045cu: goto label_32045c;
        case 0x320460u: goto label_320460;
        case 0x320464u: goto label_320464;
        case 0x320468u: goto label_320468;
        case 0x32046cu: goto label_32046c;
        case 0x320470u: goto label_320470;
        case 0x320474u: goto label_320474;
        case 0x320478u: goto label_320478;
        case 0x32047cu: goto label_32047c;
        case 0x320480u: goto label_320480;
        case 0x320484u: goto label_320484;
        case 0x320488u: goto label_320488;
        case 0x32048cu: goto label_32048c;
        case 0x320490u: goto label_320490;
        case 0x320494u: goto label_320494;
        case 0x320498u: goto label_320498;
        case 0x32049cu: goto label_32049c;
        case 0x3204a0u: goto label_3204a0;
        case 0x3204a4u: goto label_3204a4;
        case 0x3204a8u: goto label_3204a8;
        case 0x3204acu: goto label_3204ac;
        case 0x3204b0u: goto label_3204b0;
        case 0x3204b4u: goto label_3204b4;
        case 0x3204b8u: goto label_3204b8;
        case 0x3204bcu: goto label_3204bc;
        case 0x3204c0u: goto label_3204c0;
        case 0x3204c4u: goto label_3204c4;
        case 0x3204c8u: goto label_3204c8;
        case 0x3204ccu: goto label_3204cc;
        case 0x3204d0u: goto label_3204d0;
        case 0x3204d4u: goto label_3204d4;
        case 0x3204d8u: goto label_3204d8;
        case 0x3204dcu: goto label_3204dc;
        case 0x3204e0u: goto label_3204e0;
        case 0x3204e4u: goto label_3204e4;
        case 0x3204e8u: goto label_3204e8;
        case 0x3204ecu: goto label_3204ec;
        case 0x3204f0u: goto label_3204f0;
        case 0x3204f4u: goto label_3204f4;
        case 0x3204f8u: goto label_3204f8;
        case 0x3204fcu: goto label_3204fc;
        case 0x320500u: goto label_320500;
        case 0x320504u: goto label_320504;
        case 0x320508u: goto label_320508;
        default: break;
    }

    ctx->pc = 0x320410u;

label_320410:
    // 0x320410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x320410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_320414:
    // 0x320414: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x320414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_320418:
    // 0x320418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32041c:
    // 0x32041c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32041cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320420:
    // 0x320420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320424:
    // 0x320424: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x320424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320428:
    // 0x320428: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x320428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_32042c:
    // 0x32042c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x32042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_320430:
    // 0x320430: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x320430u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_320434:
    // 0x320434: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_320438:
    if (ctx->pc == 0x320438u) {
        ctx->pc = 0x320438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320434u;
        // 0x320438: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32043Cu;
        goto label_32043c;
    }
    ctx->pc = 0x320434u;
    {
        const bool branch_taken_0x320434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320434u;
        // 0x320438: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320434) {
            ctx->pc = 0x320514u;
            return;
        }
    }
    ctx->pc = 0x32043Cu;
label_32043c:
    // 0x32043c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32043cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_320440:
    // 0x320440: 0x244233d0  addiu       $v0, $v0, 0x33D0
    ctx->pc = 0x320440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13264));
label_320444:
    // 0x320444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x320444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_320448:
    // 0x320448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x320448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32044c:
    // 0x32044c: 0x800008  jr          $a0
label_320450:
    if (ctx->pc == 0x320450u) {
        ctx->pc = 0x320454u;
        goto label_320454;
    }
    ctx->pc = 0x32044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x320454u: goto label_320454;
            case 0x320484u: goto label_320484;
            case 0x320490u: goto label_320490;
            case 0x32049Cu: goto label_32049c;
            case 0x3204DCu: goto label_3204dc;
            case 0x3204FCu: goto label_3204fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32044Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x320454u;
label_320454:
    // 0x320454: 0xc08a61a  jal         func_229868
label_320458:
    if (ctx->pc == 0x320458u) {
        ctx->pc = 0x320458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320454u;
        // 0x320458: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32045Cu;
        goto label_32045c;
    }
    ctx->pc = 0x320454u;
    SET_GPR_U32(ctx, 31, 0x32045Cu);
    ctx->pc = 0x320458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320454u;
    // 0x320458: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x320454u, 0x32045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32045Cu;
label_32045c:
    // 0x32045c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_320460:
    if (ctx->pc == 0x320460u) {
        ctx->pc = 0x320460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32045Cu;
        // 0x320460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320464u;
        goto label_320464;
    }
    ctx->pc = 0x32045Cu;
    {
        const bool branch_taken_0x32045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32045c) {
            ctx->pc = 0x320460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32045Cu;
            // 0x320460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320518u;
            return;
        }
    }
    ctx->pc = 0x320464u;
label_320464:
    // 0x320464: 0xc087502  jal         func_21D408
label_320468:
    if (ctx->pc == 0x320468u) {
        ctx->pc = 0x320468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320464u;
        // 0x320468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32046Cu;
        goto label_32046c;
    }
    ctx->pc = 0x320464u;
    SET_GPR_U32(ctx, 31, 0x32046Cu);
    ctx->pc = 0x320468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320464u;
    // 0x320468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x320464u, 0x32046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32046Cu;
label_32046c:
    // 0x32046c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x32046cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_320470:
    // 0x320470: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x320470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_320474:
    // 0x320474: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_320478:
    if (ctx->pc == 0x320478u) {
        ctx->pc = 0x320478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320474u;
        // 0x320478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32047Cu;
        goto label_32047c;
    }
    ctx->pc = 0x320474u;
    {
        const bool branch_taken_0x320474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320474u;
        // 0x320478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320474) {
            ctx->pc = 0x320518u;
            return;
        }
    }
    ctx->pc = 0x32047Cu;
label_32047c:
    // 0x32047c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_320480:
    if (ctx->pc == 0x320480u) {
        ctx->pc = 0x320484u;
        goto label_320484;
    }
    ctx->pc = 0x32047Cu;
    {
        const bool branch_taken_0x32047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32047c) {
            ctx->pc = 0x3204FCu;
            goto label_3204fc;
        }
    }
    ctx->pc = 0x320484u;
label_320484:
    // 0x320484: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x320484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_320488:
    // 0x320488: 0x10000016  b           . + 4 + (0x16 << 2)
label_32048c:
    if (ctx->pc == 0x32048Cu) {
        ctx->pc = 0x32048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320488u;
        // 0x32048c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320490u;
        goto label_320490;
    }
    ctx->pc = 0x320488u;
    {
        const bool branch_taken_0x320488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320488u;
        // 0x32048c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320488) {
            ctx->pc = 0x3204E4u;
            goto label_3204e4;
        }
    }
    ctx->pc = 0x320490u;
label_320490:
    // 0x320490: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x320490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_320494:
    // 0x320494: 0x10000013  b           . + 4 + (0x13 << 2)
label_320498:
    if (ctx->pc == 0x320498u) {
        ctx->pc = 0x320498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320494u;
        // 0x320498: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32049Cu;
        goto label_32049c;
    }
    ctx->pc = 0x320494u;
    {
        const bool branch_taken_0x320494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320494u;
        // 0x320498: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320494) {
            ctx->pc = 0x3204E4u;
            goto label_3204e4;
        }
    }
    ctx->pc = 0x32049Cu;
label_32049c:
    // 0x32049c: 0xc08a61a  jal         func_229868
label_3204a0:
    if (ctx->pc == 0x3204A0u) {
        ctx->pc = 0x3204A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32049Cu;
        // 0x3204a0: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204A4u;
        goto label_3204a4;
    }
    ctx->pc = 0x32049Cu;
    SET_GPR_U32(ctx, 31, 0x3204A4u);
    ctx->pc = 0x3204A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32049Cu;
    // 0x3204a0: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x32049Cu, 0x3204A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204A4u;
label_3204a4:
    // 0x3204a4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_3204a8:
    if (ctx->pc == 0x3204A8u) {
        ctx->pc = 0x3204A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204A4u;
        // 0x3204a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204ACu;
        goto label_3204ac;
    }
    ctx->pc = 0x3204A4u;
    {
        const bool branch_taken_0x3204a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3204a4) {
            ctx->pc = 0x3204A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3204A4u;
            // 0x3204a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320518u;
            return;
        }
    }
    ctx->pc = 0x3204ACu;
label_3204ac:
    // 0x3204ac: 0xc087502  jal         func_21D408
label_3204b0:
    if (ctx->pc == 0x3204B0u) {
        ctx->pc = 0x3204B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204ACu;
        // 0x3204b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204B4u;
        goto label_3204b4;
    }
    ctx->pc = 0x3204ACu;
    SET_GPR_U32(ctx, 31, 0x3204B4u);
    ctx->pc = 0x3204B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204ACu;
    // 0x3204b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3204ACu, 0x3204B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204B4u;
label_3204b4:
    // 0x3204b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3204b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3204b8:
    // 0x3204b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3204b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3204bc:
    // 0x3204bc: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x3204bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_3204c0:
    // 0x3204c0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_3204c4:
    if (ctx->pc == 0x3204C4u) {
        ctx->pc = 0x3204C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204C0u;
        // 0x3204c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204C8u;
        goto label_3204c8;
    }
    ctx->pc = 0x3204C0u;
    {
        const bool branch_taken_0x3204c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3204C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204C0u;
        // 0x3204c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204c0) {
            ctx->pc = 0x320518u;
            return;
        }
    }
    ctx->pc = 0x3204C8u;
label_3204c8:
    // 0x3204c8: 0xc0a3032  jal         func_28C0C8
label_3204cc:
    if (ctx->pc == 0x3204CCu) {
        ctx->pc = 0x3204CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204C8u;
        // 0x3204cc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204D0u;
        goto label_3204d0;
    }
    ctx->pc = 0x3204C8u;
    SET_GPR_U32(ctx, 31, 0x3204D0u);
    ctx->pc = 0x3204CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204C8u;
    // 0x3204cc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x3204C8u, 0x3204D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204D0u;
label_3204d0:
    // 0x3204d0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3204d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3204d4:
    // 0x3204d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3204d8:
    if (ctx->pc == 0x3204D8u) {
        ctx->pc = 0x3204D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204D4u;
        // 0x3204d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204DCu;
        goto label_3204dc;
    }
    ctx->pc = 0x3204D4u;
    {
        const bool branch_taken_0x3204d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204D4u;
        // 0x3204d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204d4) {
            ctx->pc = 0x3204E4u;
            goto label_3204e4;
        }
    }
    ctx->pc = 0x3204DCu;
label_3204dc:
    // 0x3204dc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3204dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3204e0:
    // 0x3204e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3204e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3204e4:
    // 0x3204e4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3204e8:
    // 0x3204e8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3204e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3204ec:
    // 0x3204ec: 0x60f809  jalr        $v1
label_3204f0:
    if (ctx->pc == 0x3204F0u) {
        ctx->pc = 0x3204F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204ECu;
        // 0x3204f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204F4u;
        goto label_3204f4;
    }
    ctx->pc = 0x3204ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3204F4u);
        ctx->pc = 0x3204F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204ECu;
        // 0x3204f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204ECu, 0x3204F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3204F4u;
label_3204f4:
    // 0x3204f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3204f8:
    if (ctx->pc == 0x3204F8u) {
        ctx->pc = 0x3204F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F4u;
        // 0x3204f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204FCu;
        goto label_3204fc;
    }
    ctx->pc = 0x3204F4u;
    {
        const bool branch_taken_0x3204f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F4u;
        // 0x3204f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204f4) {
            ctx->pc = 0x320518u;
            return;
        }
    }
    ctx->pc = 0x3204FCu;
label_3204fc:
    // 0x3204fc: 0xc0c7d04  jal         func_31F410
label_320500:
    if (ctx->pc == 0x320500u) {
        ctx->pc = 0x320500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204FCu;
        // 0x320500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320504u;
        goto label_320504;
    }
    ctx->pc = 0x3204FCu;
    SET_GPR_U32(ctx, 31, 0x320504u);
    ctx->pc = 0x320500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204FCu;
    // 0x320500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F410u, 0x3204FCu, 0x320504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320504u;
label_320504:
    // 0x320504: 0x10000004  b           . + 4 + (0x4 << 2)
label_320508:
    if (ctx->pc == 0x320508u) {
        ctx->pc = 0x320508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320504u;
        // 0x320508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32050Cu;
        goto label_fallthrough_0x320504;
    }
    ctx->pc = 0x320504u;
    {
        const bool branch_taken_0x320504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320504u;
        // 0x320508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320504) {
            ctx->pc = 0x320518u;
            return;
        }
    }
label_fallthrough_0x320504:
    ctx->pc = 0x32050Cu;
}
