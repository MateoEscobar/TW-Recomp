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

// Function: sub_0013C5A8
// Address: 0x13c5a8 - 0x13c710
void sub_0013C5A8_0x13c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C5A8_0x13c5a8");
#endif

    switch (ctx->pc) {
        case 0x13c5a8u: goto label_13c5a8;
        case 0x13c5acu: goto label_13c5ac;
        case 0x13c5b0u: goto label_13c5b0;
        case 0x13c5b4u: goto label_13c5b4;
        case 0x13c5b8u: goto label_13c5b8;
        case 0x13c5bcu: goto label_13c5bc;
        case 0x13c5c0u: goto label_13c5c0;
        case 0x13c5c4u: goto label_13c5c4;
        case 0x13c5c8u: goto label_13c5c8;
        case 0x13c5ccu: goto label_13c5cc;
        case 0x13c5d0u: goto label_13c5d0;
        case 0x13c5d4u: goto label_13c5d4;
        case 0x13c5d8u: goto label_13c5d8;
        case 0x13c5dcu: goto label_13c5dc;
        case 0x13c5e0u: goto label_13c5e0;
        case 0x13c5e4u: goto label_13c5e4;
        case 0x13c5e8u: goto label_13c5e8;
        case 0x13c5ecu: goto label_13c5ec;
        case 0x13c5f0u: goto label_13c5f0;
        case 0x13c5f4u: goto label_13c5f4;
        case 0x13c5f8u: goto label_13c5f8;
        case 0x13c5fcu: goto label_13c5fc;
        case 0x13c600u: goto label_13c600;
        case 0x13c604u: goto label_13c604;
        case 0x13c608u: goto label_13c608;
        case 0x13c60cu: goto label_13c60c;
        case 0x13c610u: goto label_13c610;
        case 0x13c614u: goto label_13c614;
        case 0x13c618u: goto label_13c618;
        case 0x13c61cu: goto label_13c61c;
        case 0x13c620u: goto label_13c620;
        case 0x13c624u: goto label_13c624;
        case 0x13c628u: goto label_13c628;
        case 0x13c62cu: goto label_13c62c;
        case 0x13c630u: goto label_13c630;
        case 0x13c634u: goto label_13c634;
        case 0x13c638u: goto label_13c638;
        case 0x13c63cu: goto label_13c63c;
        case 0x13c640u: goto label_13c640;
        case 0x13c644u: goto label_13c644;
        case 0x13c648u: goto label_13c648;
        case 0x13c64cu: goto label_13c64c;
        case 0x13c650u: goto label_13c650;
        case 0x13c654u: goto label_13c654;
        case 0x13c658u: goto label_13c658;
        case 0x13c65cu: goto label_13c65c;
        case 0x13c660u: goto label_13c660;
        case 0x13c664u: goto label_13c664;
        case 0x13c668u: goto label_13c668;
        case 0x13c66cu: goto label_13c66c;
        case 0x13c670u: goto label_13c670;
        case 0x13c674u: goto label_13c674;
        case 0x13c678u: goto label_13c678;
        case 0x13c67cu: goto label_13c67c;
        case 0x13c680u: goto label_13c680;
        case 0x13c684u: goto label_13c684;
        case 0x13c688u: goto label_13c688;
        case 0x13c68cu: goto label_13c68c;
        case 0x13c690u: goto label_13c690;
        case 0x13c694u: goto label_13c694;
        case 0x13c698u: goto label_13c698;
        case 0x13c69cu: goto label_13c69c;
        case 0x13c6a0u: goto label_13c6a0;
        case 0x13c6a4u: goto label_13c6a4;
        case 0x13c6a8u: goto label_13c6a8;
        case 0x13c6acu: goto label_13c6ac;
        case 0x13c6b0u: goto label_13c6b0;
        case 0x13c6b4u: goto label_13c6b4;
        case 0x13c6b8u: goto label_13c6b8;
        case 0x13c6bcu: goto label_13c6bc;
        case 0x13c6c0u: goto label_13c6c0;
        case 0x13c6c4u: goto label_13c6c4;
        case 0x13c6c8u: goto label_13c6c8;
        case 0x13c6ccu: goto label_13c6cc;
        case 0x13c6d0u: goto label_13c6d0;
        case 0x13c6d4u: goto label_13c6d4;
        case 0x13c6d8u: goto label_13c6d8;
        case 0x13c6dcu: goto label_13c6dc;
        case 0x13c6e0u: goto label_13c6e0;
        case 0x13c6e4u: goto label_13c6e4;
        case 0x13c6e8u: goto label_13c6e8;
        case 0x13c6ecu: goto label_13c6ec;
        case 0x13c6f0u: goto label_13c6f0;
        case 0x13c6f4u: goto label_13c6f4;
        case 0x13c6f8u: goto label_13c6f8;
        case 0x13c6fcu: goto label_13c6fc;
        case 0x13c700u: goto label_13c700;
        case 0x13c704u: goto label_13c704;
        case 0x13c708u: goto label_13c708;
        case 0x13c70cu: goto label_13c70c;
        default: break;
    }

    ctx->pc = 0x13c5a8u;

label_13c5a8:
    // 0x13c5a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13c5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13c5ac:
    // 0x13c5ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c5b0:
    // 0x13c5b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_13c5b4:
    // 0x13c5b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_13c5b8:
    // 0x13c5b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c5bc:
    // 0x13c5bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13c5c0:
    // 0x13c5c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_13c5c4:
    // 0x13c5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13c5c8:
    // 0x13c5c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c5cc:
    // 0x13c5cc: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13c5d0:
    // 0x13c5d0: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13c5d4:
    // 0x13c5d4: 0x40f809  jalr        $v0
label_13c5d8:
    if (ctx->pc == 0x13C5D8u) {
        ctx->pc = 0x13C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5D4u;
        // 0x13c5d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5DCu;
        goto label_13c5dc;
    }
    ctx->pc = 0x13C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C5DCu);
        ctx->pc = 0x13C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5D4u;
        // 0x13c5d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C5D4u, 0x13C5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C5DCu;
label_13c5dc:
    // 0x13c5dc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_13c5e0:
    if (ctx->pc == 0x13C5E0u) {
        ctx->pc = 0x13C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5DCu;
        // 0x13c5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5E4u;
        goto label_13c5e4;
    }
    ctx->pc = 0x13C5DCu;
    {
        const bool branch_taken_0x13c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5DCu;
        // 0x13c5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5dc) {
            ctx->pc = 0x13C6F4u;
            goto label_13c6f4;
        }
    }
    ctx->pc = 0x13C5E4u;
label_13c5e4:
    // 0x13c5e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c5e8:
    // 0x13c5e8: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13c5ec:
    // 0x13c5ec: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13c5f0:
    // 0x13c5f0: 0x40f809  jalr        $v0
label_13c5f4:
    if (ctx->pc == 0x13C5F4u) {
        ctx->pc = 0x13C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F0u;
        // 0x13c5f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5F8u;
        goto label_13c5f8;
    }
    ctx->pc = 0x13C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C5F8u);
        ctx->pc = 0x13C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F0u;
        // 0x13c5f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C5F0u, 0x13C5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C5F8u;
label_13c5f8:
    // 0x13c5f8: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_13c5fc:
    // 0x13c5fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13c600:
    // 0x13c600: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_13c604:
    if (ctx->pc == 0x13C604u) {
        ctx->pc = 0x13C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C600u;
        // 0x13c604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C608u;
        goto label_13c608;
    }
    ctx->pc = 0x13C600u;
    {
        const bool branch_taken_0x13c600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C600u;
        // 0x13c604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c600) {
            ctx->pc = 0x13C6F4u;
            goto label_13c6f4;
        }
    }
    ctx->pc = 0x13C608u;
label_13c608:
    // 0x13c608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c60c:
    // 0x13c60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c610:
    // 0x13c610: 0xc04843e  jal         func_1210F8
label_13c614:
    if (ctx->pc == 0x13C614u) {
        ctx->pc = 0x13C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C610u;
        // 0x13c614: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C618u;
        goto label_13c618;
    }
    ctx->pc = 0x13C610u;
    SET_GPR_U32(ctx, 31, 0x13C618u);
    ctx->pc = 0x13C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C610u;
    // 0x13c614: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210F8u, 0x13C610u, 0x13C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C618u;
label_13c618:
    // 0x13c618: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13c618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c61c:
    // 0x13c61c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c620:
    // 0x13c620: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_13c624:
    // 0x13c624: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x13c624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_13c628:
    // 0x13c628: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13c628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c62c:
    // 0x13c62c: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13c62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13c630:
    // 0x13c630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c634:
    // 0x13c634: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13c638:
    // 0x13c638: 0x40f809  jalr        $v0
label_13c63c:
    if (ctx->pc == 0x13C63Cu) {
        ctx->pc = 0x13C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C638u;
        // 0x13c63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C640u;
        goto label_13c640;
    }
    ctx->pc = 0x13C638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C640u);
        ctx->pc = 0x13C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C638u;
        // 0x13c63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C638u, 0x13C640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C640u;
label_13c640:
    // 0x13c640: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_13c644:
    // 0x13c644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13c648:
    // 0x13c648: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_13c64c:
    // 0x13c64c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13c650:
    // 0x13c650: 0x8c4401d4  lw          $a0, 0x1D4($v0)
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_13c654:
    // 0x13c654: 0x54800012  bnel        $a0, $zero, . + 4 + (0x12 << 2)
label_13c658:
    if (ctx->pc == 0x13C658u) {
        ctx->pc = 0x13C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C654u;
        // 0x13c658: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C65Cu;
        goto label_13c65c;
    }
    ctx->pc = 0x13C654u;
    {
        const bool branch_taken_0x13c654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c654) {
            ctx->pc = 0x13C658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C654u;
            // 0x13c658: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C6A0u;
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C65Cu;
label_13c65c:
    // 0x13c65c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c660:
    // 0x13c660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c664:
    // 0x13c664: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13c668:
    // 0x13c668: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13c66c:
    // 0x13c66c: 0x40f809  jalr        $v0
label_13c670:
    if (ctx->pc == 0x13C670u) {
        ctx->pc = 0x13C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C66Cu;
        // 0x13c670: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C674u;
        goto label_13c674;
    }
    ctx->pc = 0x13C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C674u);
        ctx->pc = 0x13C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C66Cu;
        // 0x13c670: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C66Cu, 0x13C674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C674u;
label_13c674:
    // 0x13c674: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_13c678:
    // 0x13c678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13c67c:
    // 0x13c67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13c680:
    // 0x13c680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13c684:
    // 0x13c684: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_13c688:
    // 0x13c688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13c68c:
    // 0x13c68c: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x13c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13c690:
    // 0x13c690: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13c690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13c694:
    // 0x13c694: 0x0  nop
    ctx->pc = 0x13c694u;
    // NOP
label_13c698:
    // 0x13c698: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13c69c:
    if (ctx->pc == 0x13C69Cu) {
        ctx->pc = 0x13C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C698u;
        // 0x13c69c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6A0u;
        goto label_13c6a0;
    }
    ctx->pc = 0x13C698u;
    {
        const bool branch_taken_0x13c698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c698) {
            ctx->pc = 0x13C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C698u;
            // 0x13c69c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C6A0u;
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C6A0u;
label_13c6a0:
    // 0x13c6a0: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
label_13c6a4:
    if (ctx->pc == 0x13C6A4u) {
        ctx->pc = 0x13C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6A0u;
        // 0x13c6a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6A8u;
        goto label_13c6a8;
    }
    ctx->pc = 0x13C6A0u;
    {
        const bool branch_taken_0x13c6a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6A0u;
        // 0x13c6a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6a0) {
            ctx->pc = 0x13C6F8u;
            goto label_13c6f8;
        }
    }
    ctx->pc = 0x13C6A8u;
label_13c6a8:
    // 0x13c6a8: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_13c6ac:
    // 0x13c6ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c6b0:
    // 0x13c6b0: 0xa22203eb  sb          $v0, 0x3EB($s1)
    ctx->pc = 0x13c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 2));
label_13c6b4:
    // 0x13c6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c6b8:
    // 0x13c6b8: 0x2670deb8  addiu       $s0, $s3, -0x2148
    ctx->pc = 0x13c6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958776));
label_13c6bc:
    // 0x13c6bc: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13c6c0:
    // 0x13c6c0: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13c6c4:
    // 0x13c6c4: 0x40f809  jalr        $v0
label_13c6c8:
    if (ctx->pc == 0x13C6C8u) {
        ctx->pc = 0x13C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C4u;
        // 0x13c6c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6CCu;
        goto label_13c6cc;
    }
    ctx->pc = 0x13C6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C6CCu);
        ctx->pc = 0x13C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C4u;
        // 0x13c6c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6C4u, 0x13C6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C6CCu;
label_13c6cc:
    // 0x13c6cc: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x13c6ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_13c6d0:
    // 0x13c6d0: 0x922403eb  lbu         $a0, 0x3EB($s1)
    ctx->pc = 0x13c6d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1003)));
label_13c6d4:
    // 0x13c6d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13c6d8:
    // 0x13c6d8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_13c6dc:
    // 0x13c6dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13c6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13c6e0:
    // 0x13c6e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13c6e4:
    // 0x13c6e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_13c6e8:
    // 0x13c6e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13c6ec:
    // 0x13c6ec: 0xa04401b4  sb          $a0, 0x1B4($v0)
    ctx->pc = 0x13c6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 436), (uint8_t)GPR_U32(ctx, 4));
label_13c6f0:
    // 0x13c6f0: 0xe62003e0  swc1        $f0, 0x3E0($s1)
    ctx->pc = 0x13c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
label_13c6f4:
    // 0x13c6f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13c6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13c6f8:
    // 0x13c6f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13c6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13c6fc:
    // 0x13c6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13c700:
    // 0x13c700: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13c700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13c704:
    // 0x13c704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c708:
    // 0x13c708: 0x3e00008  jr          $ra
label_13c70c:
    if (ctx->pc == 0x13C70Cu) {
        ctx->pc = 0x13C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C708u;
        // 0x13c70c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C710u;
        goto label_fallthrough_0x13c708;
    }
    ctx->pc = 0x13C708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C708u;
        // 0x13c70c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c708:
    ctx->pc = 0x13C710u;
}
