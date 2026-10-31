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

// Function: sub_00333588
// Address: 0x333588 - 0x333680
void sub_00333588_0x333588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333588_0x333588");
#endif

    switch (ctx->pc) {
        case 0x333588u: goto label_333588;
        case 0x33358cu: goto label_33358c;
        case 0x333590u: goto label_333590;
        case 0x333594u: goto label_333594;
        case 0x333598u: goto label_333598;
        case 0x33359cu: goto label_33359c;
        case 0x3335a0u: goto label_3335a0;
        case 0x3335a4u: goto label_3335a4;
        case 0x3335a8u: goto label_3335a8;
        case 0x3335acu: goto label_3335ac;
        case 0x3335b0u: goto label_3335b0;
        case 0x3335b4u: goto label_3335b4;
        case 0x3335b8u: goto label_3335b8;
        case 0x3335bcu: goto label_3335bc;
        case 0x3335c0u: goto label_3335c0;
        case 0x3335c4u: goto label_3335c4;
        case 0x3335c8u: goto label_3335c8;
        case 0x3335ccu: goto label_3335cc;
        case 0x3335d0u: goto label_3335d0;
        case 0x3335d4u: goto label_3335d4;
        case 0x3335d8u: goto label_3335d8;
        case 0x3335dcu: goto label_3335dc;
        case 0x3335e0u: goto label_3335e0;
        case 0x3335e4u: goto label_3335e4;
        case 0x3335e8u: goto label_3335e8;
        case 0x3335ecu: goto label_3335ec;
        case 0x3335f0u: goto label_3335f0;
        case 0x3335f4u: goto label_3335f4;
        case 0x3335f8u: goto label_3335f8;
        case 0x3335fcu: goto label_3335fc;
        case 0x333600u: goto label_333600;
        case 0x333604u: goto label_333604;
        case 0x333608u: goto label_333608;
        case 0x33360cu: goto label_33360c;
        case 0x333610u: goto label_333610;
        case 0x333614u: goto label_333614;
        case 0x333618u: goto label_333618;
        case 0x33361cu: goto label_33361c;
        case 0x333620u: goto label_333620;
        case 0x333624u: goto label_333624;
        case 0x333628u: goto label_333628;
        case 0x33362cu: goto label_33362c;
        case 0x333630u: goto label_333630;
        case 0x333634u: goto label_333634;
        case 0x333638u: goto label_333638;
        case 0x33363cu: goto label_33363c;
        case 0x333640u: goto label_333640;
        case 0x333644u: goto label_333644;
        case 0x333648u: goto label_333648;
        case 0x33364cu: goto label_33364c;
        case 0x333650u: goto label_333650;
        case 0x333654u: goto label_333654;
        case 0x333658u: goto label_333658;
        case 0x33365cu: goto label_33365c;
        case 0x333660u: goto label_333660;
        case 0x333664u: goto label_333664;
        case 0x333668u: goto label_333668;
        case 0x33366cu: goto label_33366c;
        case 0x333670u: goto label_333670;
        case 0x333674u: goto label_333674;
        case 0x333678u: goto label_333678;
        case 0x33367cu: goto label_33367c;
        default: break;
    }

    ctx->pc = 0x333588u;

label_333588:
    // 0x333588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x333588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33358c:
    // 0x33358c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_333590:
    // 0x333590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_333594:
    // 0x333594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x333594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_333598:
    // 0x333598: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x333598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_33359c:
    // 0x33359c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33359cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3335a0:
    // 0x3335a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3335a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3335a4:
    // 0x3335a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3335a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3335a8:
    // 0x3335a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3335a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3335ac:
    // 0x3335ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3335acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3335b0:
    // 0x3335b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3335b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3335b4:
    // 0x3335b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3335b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3335b8:
    // 0x3335b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3335bc:
    if (ctx->pc == 0x3335BCu) {
        ctx->pc = 0x3335BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335B8u;
        // 0x3335bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3335C0u;
        goto label_3335c0;
    }
    ctx->pc = 0x3335B8u;
    {
        const bool branch_taken_0x3335b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335B8u;
        // 0x3335bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335b8) {
            ctx->pc = 0x3335D4u;
            goto label_3335d4;
        }
    }
    ctx->pc = 0x3335C0u;
label_3335c0:
    // 0x3335c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3335c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3335c4:
    // 0x3335c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3335c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3335c8:
    // 0x3335c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3335c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3335cc:
    // 0x3335cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3335d0:
    if (ctx->pc == 0x3335D0u) {
        ctx->pc = 0x3335D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335CCu;
        // 0x3335d0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3335D4u;
        goto label_3335d4;
    }
    ctx->pc = 0x3335CCu;
    {
        const bool branch_taken_0x3335cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335CCu;
        // 0x3335d0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335cc) {
            ctx->pc = 0x3335E4u;
            goto label_3335e4;
        }
    }
    ctx->pc = 0x3335D4u;
label_3335d4:
    // 0x3335d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3335d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3335d8:
    // 0x3335d8: 0x40f809  jalr        $v0
label_3335dc:
    if (ctx->pc == 0x3335DCu) {
        ctx->pc = 0x3335DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335D8u;
        // 0x3335dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3335E0u;
        goto label_3335e0;
    }
    ctx->pc = 0x3335D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3335E0u);
        ctx->pc = 0x3335DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335D8u;
        // 0x3335dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3335D8u, 0x3335E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3335E0u;
label_3335e0:
    // 0x3335e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3335e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3335e4:
    // 0x3335e4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x3335e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3335e8:
    // 0x3335e8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3335ec:
    if (ctx->pc == 0x3335ECu) {
        ctx->pc = 0x3335ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335E8u;
        // 0x3335ec: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3335F0u;
        goto label_3335f0;
    }
    ctx->pc = 0x3335E8u;
    {
        const bool branch_taken_0x3335e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3335e8) {
            ctx->pc = 0x3335ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3335E8u;
            // 0x3335ec: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333604u;
            goto label_333604;
        }
    }
    ctx->pc = 0x3335F0u;
label_3335f0:
    // 0x3335f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3335f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3335f4:
    // 0x3335f4: 0xc0ccd52  jal         func_333548
label_3335f8:
    if (ctx->pc == 0x3335F8u) {
        ctx->pc = 0x3335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335F4u;
        // 0x3335f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3335FCu;
        goto label_3335fc;
    }
    ctx->pc = 0x3335F4u;
    SET_GPR_U32(ctx, 31, 0x3335FCu);
    ctx->pc = 0x3335F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3335F4u;
    // 0x3335f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333548u, 0x3335F4u, 0x3335FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3335FCu;
label_3335fc:
    // 0x3335fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3335fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_333600:
    // 0x333600: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x333600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_333604:
    // 0x333604: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x333604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_333608:
    // 0x333608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33360c:
    // 0x33360c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_333610:
    if (ctx->pc == 0x333610u) {
        ctx->pc = 0x333610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33360Cu;
        // 0x333610: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333614u;
        goto label_333614;
    }
    ctx->pc = 0x33360Cu;
    {
        const bool branch_taken_0x33360c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33360Cu;
        // 0x333610: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33360c) {
            ctx->pc = 0x333628u;
            goto label_333628;
        }
    }
    ctx->pc = 0x333614u;
label_333614:
    // 0x333614: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x333614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_333618:
    // 0x333618: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x333618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_33361c:
    // 0x33361c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_333620:
    // 0x333620: 0x10000005  b           . + 4 + (0x5 << 2)
label_333624:
    if (ctx->pc == 0x333624u) {
        ctx->pc = 0x333624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333620u;
        // 0x333624: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333628u;
        goto label_333628;
    }
    ctx->pc = 0x333620u;
    {
        const bool branch_taken_0x333620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333620u;
        // 0x333624: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333620) {
            ctx->pc = 0x333638u;
            goto label_333638;
        }
    }
    ctx->pc = 0x333628u;
label_333628:
    // 0x333628: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x333628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_33362c:
    // 0x33362c: 0x40f809  jalr        $v0
label_333630:
    if (ctx->pc == 0x333630u) {
        ctx->pc = 0x333630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33362Cu;
        // 0x333630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333634u;
        goto label_333634;
    }
    ctx->pc = 0x33362Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x333634u);
        ctx->pc = 0x333630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33362Cu;
        // 0x333630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33362Cu, 0x333634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x333634u;
label_333634:
    // 0x333634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x333634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_333638:
    // 0x333638: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x333638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33363c:
    // 0x33363c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_333640:
    if (ctx->pc == 0x333640u) {
        ctx->pc = 0x333640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33363Cu;
        // 0x333640: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333644u;
        goto label_333644;
    }
    ctx->pc = 0x33363Cu;
    {
        const bool branch_taken_0x33363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33363Cu;
        // 0x333640: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33363c) {
            ctx->pc = 0x333660u;
            goto label_333660;
        }
    }
    ctx->pc = 0x333644u;
label_333644:
    // 0x333644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_333648:
    // 0x333648: 0xc0cca76  jal         func_3329D8
label_33364c:
    if (ctx->pc == 0x33364Cu) {
        ctx->pc = 0x33364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333648u;
        // 0x33364c: 0x261067e8  addiu       $s0, $s0, 0x67E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333650u;
        goto label_333650;
    }
    ctx->pc = 0x333648u;
    SET_GPR_U32(ctx, 31, 0x333650u);
    ctx->pc = 0x33364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333648u;
    // 0x33364c: 0x261067e8  addiu       $s0, $s0, 0x67E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x333648u, 0x333650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333650u;
label_333650:
    // 0x333650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_333654:
    // 0x333654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_333658:
    // 0x333658: 0xc0cb28a  jal         func_32CA28
label_33365c:
    if (ctx->pc == 0x33365Cu) {
        ctx->pc = 0x33365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333658u;
        // 0x33365c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333660u;
        goto label_333660;
    }
    ctx->pc = 0x333658u;
    SET_GPR_U32(ctx, 31, 0x333660u);
    ctx->pc = 0x33365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333658u;
    // 0x33365c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x333658u, 0x333660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333660u;
label_333660:
    // 0x333660: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x333660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_333664:
    // 0x333664: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x333664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_333668:
    // 0x333668: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x333668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33366c:
    // 0x33366c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33366cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_333670:
    // 0x333670: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x333670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_333674:
    // 0x333674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_333678:
    // 0x333678: 0x3e00008  jr          $ra
label_33367c:
    if (ctx->pc == 0x33367Cu) {
        ctx->pc = 0x33367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333678u;
        // 0x33367c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333680u;
        goto label_fallthrough_0x333678;
    }
    ctx->pc = 0x333678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333678u;
        // 0x33367c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x333678:
    ctx->pc = 0x333680u;
}
