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

// Function: sub_003AE520
// Address: 0x3ae520 - 0x3ae708
void sub_003AE520_0x3ae520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE520_0x3ae520");
#endif

    switch (ctx->pc) {
        case 0x3ae520u: goto label_3ae520;
        case 0x3ae524u: goto label_3ae524;
        case 0x3ae528u: goto label_3ae528;
        case 0x3ae52cu: goto label_3ae52c;
        case 0x3ae530u: goto label_3ae530;
        case 0x3ae534u: goto label_3ae534;
        case 0x3ae538u: goto label_3ae538;
        case 0x3ae53cu: goto label_3ae53c;
        case 0x3ae540u: goto label_3ae540;
        case 0x3ae544u: goto label_3ae544;
        case 0x3ae548u: goto label_3ae548;
        case 0x3ae54cu: goto label_3ae54c;
        case 0x3ae550u: goto label_3ae550;
        case 0x3ae554u: goto label_3ae554;
        case 0x3ae558u: goto label_3ae558;
        case 0x3ae55cu: goto label_3ae55c;
        case 0x3ae560u: goto label_3ae560;
        case 0x3ae564u: goto label_3ae564;
        case 0x3ae568u: goto label_3ae568;
        case 0x3ae56cu: goto label_3ae56c;
        case 0x3ae570u: goto label_3ae570;
        case 0x3ae574u: goto label_3ae574;
        case 0x3ae578u: goto label_3ae578;
        case 0x3ae57cu: goto label_3ae57c;
        case 0x3ae580u: goto label_3ae580;
        case 0x3ae584u: goto label_3ae584;
        case 0x3ae588u: goto label_3ae588;
        case 0x3ae58cu: goto label_3ae58c;
        case 0x3ae590u: goto label_3ae590;
        case 0x3ae594u: goto label_3ae594;
        case 0x3ae598u: goto label_3ae598;
        case 0x3ae59cu: goto label_3ae59c;
        case 0x3ae5a0u: goto label_3ae5a0;
        case 0x3ae5a4u: goto label_3ae5a4;
        case 0x3ae5a8u: goto label_3ae5a8;
        case 0x3ae5acu: goto label_3ae5ac;
        case 0x3ae5b0u: goto label_3ae5b0;
        case 0x3ae5b4u: goto label_3ae5b4;
        case 0x3ae5b8u: goto label_3ae5b8;
        case 0x3ae5bcu: goto label_3ae5bc;
        case 0x3ae5c0u: goto label_3ae5c0;
        case 0x3ae5c4u: goto label_3ae5c4;
        case 0x3ae5c8u: goto label_3ae5c8;
        case 0x3ae5ccu: goto label_3ae5cc;
        case 0x3ae5d0u: goto label_3ae5d0;
        case 0x3ae5d4u: goto label_3ae5d4;
        case 0x3ae5d8u: goto label_3ae5d8;
        case 0x3ae5dcu: goto label_3ae5dc;
        case 0x3ae5e0u: goto label_3ae5e0;
        case 0x3ae5e4u: goto label_3ae5e4;
        case 0x3ae5e8u: goto label_3ae5e8;
        case 0x3ae5ecu: goto label_3ae5ec;
        case 0x3ae5f0u: goto label_3ae5f0;
        case 0x3ae5f4u: goto label_3ae5f4;
        case 0x3ae5f8u: goto label_3ae5f8;
        case 0x3ae5fcu: goto label_3ae5fc;
        case 0x3ae600u: goto label_3ae600;
        case 0x3ae604u: goto label_3ae604;
        case 0x3ae608u: goto label_3ae608;
        case 0x3ae60cu: goto label_3ae60c;
        case 0x3ae610u: goto label_3ae610;
        case 0x3ae614u: goto label_3ae614;
        case 0x3ae618u: goto label_3ae618;
        case 0x3ae61cu: goto label_3ae61c;
        case 0x3ae620u: goto label_3ae620;
        case 0x3ae624u: goto label_3ae624;
        case 0x3ae628u: goto label_3ae628;
        case 0x3ae62cu: goto label_3ae62c;
        case 0x3ae630u: goto label_3ae630;
        case 0x3ae634u: goto label_3ae634;
        case 0x3ae638u: goto label_3ae638;
        case 0x3ae63cu: goto label_3ae63c;
        case 0x3ae640u: goto label_3ae640;
        case 0x3ae644u: goto label_3ae644;
        case 0x3ae648u: goto label_3ae648;
        case 0x3ae64cu: goto label_3ae64c;
        case 0x3ae650u: goto label_3ae650;
        case 0x3ae654u: goto label_3ae654;
        case 0x3ae658u: goto label_3ae658;
        case 0x3ae65cu: goto label_3ae65c;
        case 0x3ae660u: goto label_3ae660;
        case 0x3ae664u: goto label_3ae664;
        case 0x3ae668u: goto label_3ae668;
        case 0x3ae66cu: goto label_3ae66c;
        case 0x3ae670u: goto label_3ae670;
        case 0x3ae674u: goto label_3ae674;
        case 0x3ae678u: goto label_3ae678;
        case 0x3ae67cu: goto label_3ae67c;
        case 0x3ae680u: goto label_3ae680;
        case 0x3ae684u: goto label_3ae684;
        case 0x3ae688u: goto label_3ae688;
        case 0x3ae68cu: goto label_3ae68c;
        case 0x3ae690u: goto label_3ae690;
        case 0x3ae694u: goto label_3ae694;
        case 0x3ae698u: goto label_3ae698;
        case 0x3ae69cu: goto label_3ae69c;
        case 0x3ae6a0u: goto label_3ae6a0;
        case 0x3ae6a4u: goto label_3ae6a4;
        case 0x3ae6a8u: goto label_3ae6a8;
        case 0x3ae6acu: goto label_3ae6ac;
        case 0x3ae6b0u: goto label_3ae6b0;
        case 0x3ae6b4u: goto label_3ae6b4;
        case 0x3ae6b8u: goto label_3ae6b8;
        case 0x3ae6bcu: goto label_3ae6bc;
        case 0x3ae6c0u: goto label_3ae6c0;
        case 0x3ae6c4u: goto label_3ae6c4;
        case 0x3ae6c8u: goto label_3ae6c8;
        case 0x3ae6ccu: goto label_3ae6cc;
        case 0x3ae6d0u: goto label_3ae6d0;
        case 0x3ae6d4u: goto label_3ae6d4;
        case 0x3ae6d8u: goto label_3ae6d8;
        case 0x3ae6dcu: goto label_3ae6dc;
        case 0x3ae6e0u: goto label_3ae6e0;
        case 0x3ae6e4u: goto label_3ae6e4;
        case 0x3ae6e8u: goto label_3ae6e8;
        case 0x3ae6ecu: goto label_3ae6ec;
        case 0x3ae6f0u: goto label_3ae6f0;
        case 0x3ae6f4u: goto label_3ae6f4;
        case 0x3ae6f8u: goto label_3ae6f8;
        case 0x3ae6fcu: goto label_3ae6fc;
        case 0x3ae700u: goto label_3ae700;
        case 0x3ae704u: goto label_3ae704;
        default: break;
    }

    ctx->pc = 0x3ae520u;

label_3ae520:
    // 0x3ae520: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x3ae520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_3ae524:
    // 0x3ae524: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x3ae524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_3ae528:
    // 0x3ae528: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x3ae528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_3ae52c:
    // 0x3ae52c: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x3ae52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_3ae530:
    // 0x3ae530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae534:
    // 0x3ae534: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3ae534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3ae538:
    // 0x3ae538: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae53c:
    // 0x3ae53c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae540:
    // 0x3ae540: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae544:
    // 0x3ae544: 0x40f809  jalr        $v0
label_3ae548:
    if (ctx->pc == 0x3AE548u) {
        ctx->pc = 0x3AE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE544u;
        // 0x3ae548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE54Cu;
        goto label_3ae54c;
    }
    ctx->pc = 0x3AE544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE54Cu);
        ctx->pc = 0x3AE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE544u;
        // 0x3ae548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE544u, 0x3AE54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE54Cu;
label_3ae54c:
    // 0x3ae54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae550:
    // 0x3ae550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ae554:
    // 0x3ae554: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3ae554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3ae558:
    // 0x3ae558: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ae558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ae55c:
    // 0x3ae55c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ae55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ae560:
    // 0x3ae560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ae560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ae564:
    // 0x3ae564: 0x0  nop
    ctx->pc = 0x3ae564u;
    // NOP
label_3ae568:
    // 0x3ae568: 0x0  nop
    ctx->pc = 0x3ae568u;
    // NOP
label_3ae56c:
    // 0x3ae56c: 0x0  nop
    ctx->pc = 0x3ae56cu;
    // NOP
label_3ae570:
    // 0x3ae570: 0x0  nop
    ctx->pc = 0x3ae570u;
    // NOP
label_3ae574:
    // 0x3ae574: 0x0  nop
    ctx->pc = 0x3ae574u;
    // NOP
label_3ae578:
    // 0x3ae578: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ae57c:
    if (ctx->pc == 0x3AE57Cu) {
        ctx->pc = 0x3AE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE578u;
        // 0x3ae57c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE580u;
        goto label_3ae580;
    }
    ctx->pc = 0x3AE578u;
    {
        const bool branch_taken_0x3ae578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE578u;
        // 0x3ae57c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae578) {
            ctx->pc = 0x3AE568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae568;
        }
    }
    ctx->pc = 0x3AE580u;
label_3ae580:
    // 0x3ae580: 0xc138ddc  jal         func_4E3770
label_3ae584:
    if (ctx->pc == 0x3AE584u) {
        ctx->pc = 0x3AE588u;
        goto label_3ae588;
    }
    ctx->pc = 0x3AE580u;
    SET_GPR_U32(ctx, 31, 0x3AE588u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AE580u, 0x3AE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE588u;
label_3ae588:
    // 0x3ae588: 0xc047e6c  jal         func_11F9B0
label_3ae58c:
    if (ctx->pc == 0x3AE58Cu) {
        ctx->pc = 0x3AE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE588u;
        // 0x3ae58c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE590u;
        goto label_3ae590;
    }
    ctx->pc = 0x3AE588u;
    SET_GPR_U32(ctx, 31, 0x3AE590u);
    ctx->pc = 0x3AE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE588u;
    // 0x3ae58c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3AE588u, 0x3AE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE590u;
label_3ae590:
    // 0x3ae590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ae590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ae594:
    // 0x3ae594: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3ae594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3ae598:
    // 0x3ae598: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3ae598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3ae59c:
    // 0x3ae59c: 0xa0f809  jalr        $a1
label_3ae5a0:
    if (ctx->pc == 0x3AE5A0u) {
        ctx->pc = 0x3AE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE59Cu;
        // 0x3ae5a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE5A4u;
        goto label_3ae5a4;
    }
    ctx->pc = 0x3AE59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3AE5A4u);
        ctx->pc = 0x3AE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE59Cu;
        // 0x3ae5a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE59Cu, 0x3AE5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE5A4u;
label_3ae5a4:
    // 0x3ae5a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ae5a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ae5a8:
    // 0x3ae5a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ae5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ae5ac:
    // 0x3ae5ac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3ae5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ae5b0:
    // 0x3ae5b0: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3ae5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3ae5b4:
    // 0x3ae5b4: 0xc0e8fcc  jal         func_3A3F30
label_3ae5b8:
    if (ctx->pc == 0x3AE5B8u) {
        ctx->pc = 0x3AE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE5B4u;
        // 0x3ae5b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE5BCu;
        goto label_3ae5bc;
    }
    ctx->pc = 0x3AE5B4u;
    SET_GPR_U32(ctx, 31, 0x3AE5BCu);
    ctx->pc = 0x3AE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5B4u;
    // 0x3ae5b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3AE5B4u, 0x3AE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE5BCu;
label_3ae5bc:
    // 0x3ae5bc: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3ae5bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ae5c0:
    // 0x3ae5c0: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3ae5c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ae5c4:
    // 0x3ae5c4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ae5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ae5c8:
    // 0x3ae5c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ae5c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ae5cc:
    // 0x3ae5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae5d0:
    // 0x3ae5d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ae5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ae5d4:
    // 0x3ae5d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ae5d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ae5d8:
    // 0x3ae5d8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ae5d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae5dc:
    // 0x3ae5dc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ae5dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ae5e0:
    // 0x3ae5e0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3ae5e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ae5e4:
    // 0x3ae5e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ae5e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ae5e8:
    // 0x3ae5e8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3ae5e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae5ec:
    // 0x3ae5ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3ae5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae5f0:
    // 0x3ae5f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3ae5f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae5f4:
    // 0x3ae5f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3ae5f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3ae5f8:
    // 0x3ae5f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3ae5f8u;
    // VWAITQ (Q already resolved in this runtime)
label_3ae5fc:
    // 0x3ae5fc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3ae5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ae600:
    // 0x3ae600: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3ae600u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ae604:
    // 0x3ae604: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3ae604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3ae608:
    // 0x3ae608: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ae608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3ae60c:
    // 0x3ae60c: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ae60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ae610:
    // 0x3ae610: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3ae610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3ae614:
    // 0x3ae614: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3ae614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3ae618:
    // 0x3ae618: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3ae618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ae61c:
    // 0x3ae61c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3ae61cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ae620:
    // 0x3ae620: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3ae620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3ae624:
    // 0x3ae624: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ae624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ae628:
    // 0x3ae628: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3ae628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3ae62c:
    // 0x3ae62c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ae62cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae630:
    // 0x3ae630: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ae630u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ae634:
    // 0x3ae634: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x3ae634u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ae638:
    // 0x3ae638: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3ae638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3ae63c:
    // 0x3ae63c: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x3ae63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_3ae640:
    // 0x3ae640: 0x7fa50460  sq          $a1, 0x460($sp)
    ctx->pc = 0x3ae640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 5));
label_3ae644:
    // 0x3ae644: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x3ae644u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_3ae648:
    // 0x3ae648: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3ae648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3ae64c:
    // 0x3ae64c: 0x7fa40480  sq          $a0, 0x480($sp)
    ctx->pc = 0x3ae64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 4));
label_3ae650:
    // 0x3ae650: 0x7fa40410  sq          $a0, 0x410($sp)
    ctx->pc = 0x3ae650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 4));
label_3ae654:
    // 0x3ae654: 0x7fa50450  sq          $a1, 0x450($sp)
    ctx->pc = 0x3ae654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 5));
label_3ae658:
    // 0x3ae658: 0x7fa60460  sq          $a2, 0x460($sp)
    ctx->pc = 0x3ae658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 6));
label_3ae65c:
    // 0x3ae65c: 0x7fa60440  sq          $a2, 0x440($sp)
    ctx->pc = 0x3ae65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 6));
label_3ae660:
    // 0x3ae660: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x3ae660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_3ae664:
    // 0x3ae664: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3ae664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3ae668:
    // 0x3ae668: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ae668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ae66c:
    // 0x3ae66c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3ae66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ae670:
    // 0x3ae670: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3ae670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ae674:
    // 0x3ae674: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ae674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ae678:
    // 0x3ae678: 0x7fa50470  sq          $a1, 0x470($sp)
    ctx->pc = 0x3ae678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 5));
label_3ae67c:
    // 0x3ae67c: 0x7fa40490  sq          $a0, 0x490($sp)
    ctx->pc = 0x3ae67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 4));
label_3ae680:
    // 0x3ae680: 0x7fa60470  sq          $a2, 0x470($sp)
    ctx->pc = 0x3ae680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 6));
label_3ae684:
    // 0x3ae684: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3ae684u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3ae688:
    // 0x3ae688: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3ae688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3ae68c:
    // 0x3ae68c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ae68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ae690:
    // 0x3ae690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ae690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ae694:
    // 0x3ae694: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x3ae694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3ae698:
    // 0x3ae698: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x3ae698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ae69c:
    // 0x3ae69c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ae69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ae6a0:
    // 0x3ae6a0: 0x0  nop
    ctx->pc = 0x3ae6a0u;
    // NOP
label_3ae6a4:
    // 0x3ae6a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3ae6a8:
    if (ctx->pc == 0x3AE6A8u) {
        ctx->pc = 0x3AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6A4u;
        // 0x3ae6a8: 0xe62200bc  swc1        $f2, 0xBC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE6ACu;
        goto label_3ae6ac;
    }
    ctx->pc = 0x3AE6A4u;
    {
        const bool branch_taken_0x3ae6a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae6a4) {
            ctx->pc = 0x3AE6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE6A4u;
            // 0x3ae6a8: 0xe62200bc  swc1        $f2, 0xBC($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE6ACu;
            goto label_3ae6ac;
        }
    }
    ctx->pc = 0x3AE6ACu;
label_3ae6ac:
    // 0x3ae6ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ae6b0:
    // 0x3ae6b0: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x3ae6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_3ae6b4:
    // 0x3ae6b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ae6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ae6b8:
    // 0x3ae6b8: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3ae6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3ae6bc:
    // 0x3ae6bc: 0x9623006e  lhu         $v1, 0x6E($s1)
    ctx->pc = 0x3ae6bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3ae6c0:
    // 0x3ae6c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ae6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae6c4:
    // 0x3ae6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ae6c8:
    // 0x3ae6c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ae6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3ae6cc:
    // 0x3ae6cc: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3ae6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3ae6d0:
    // 0x3ae6d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3ae6d4:
    if (ctx->pc == 0x3AE6D4u) {
        ctx->pc = 0x3AE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6D0u;
        // 0x3ae6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE6D8u;
        goto label_3ae6d8;
    }
    ctx->pc = 0x3AE6D0u;
    {
        const bool branch_taken_0x3ae6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6D0u;
        // 0x3ae6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6d0) {
            ctx->pc = 0x3AE6ECu;
            goto label_3ae6ec;
        }
    }
    ctx->pc = 0x3AE6D8u;
label_3ae6d8:
    // 0x3ae6d8: 0x922200b0  lbu         $v0, 0xB0($s1)
    ctx->pc = 0x3ae6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
label_3ae6dc:
    // 0x3ae6dc: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3ae6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3ae6e0:
    // 0x3ae6e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3ae6e4:
    if (ctx->pc == 0x3AE6E4u) {
        ctx->pc = 0x3AE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6E0u;
        // 0x3ae6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE6E8u;
        goto label_3ae6e8;
    }
    ctx->pc = 0x3AE6E0u;
    {
        const bool branch_taken_0x3ae6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6E0u;
        // 0x3ae6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6e0) {
            ctx->pc = 0x3AE6ECu;
            goto label_3ae6ec;
        }
    }
    ctx->pc = 0x3AE6E8u;
label_3ae6e8:
    // 0x3ae6e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae6ec:
    // 0x3ae6ec: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x3ae6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3ae6f0:
    // 0x3ae6f0: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x3ae6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3ae6f4:
    // 0x3ae6f4: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x3ae6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3ae6f8:
    // 0x3ae6f8: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3ae6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3ae6fc:
    // 0x3ae6fc: 0x3e00008  jr          $ra
label_3ae700:
    if (ctx->pc == 0x3AE700u) {
        ctx->pc = 0x3AE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6FCu;
        // 0x3ae700: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE704u;
        goto label_3ae704;
    }
    ctx->pc = 0x3AE6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6FCu;
        // 0x3ae700: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE704u;
label_3ae704:
    // 0x3ae704: 0x0  nop
    ctx->pc = 0x3ae704u;
    // NOP
    ctx->pc = 0x3ae708u;
}
