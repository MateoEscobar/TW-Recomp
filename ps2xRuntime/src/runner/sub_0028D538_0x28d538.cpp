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

// Function: sub_0028D538
// Address: 0x28d538 - 0x28d6a0
void sub_0028D538_0x28d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D538_0x28d538");
#endif

    switch (ctx->pc) {
        case 0x28d538u: goto label_28d538;
        case 0x28d53cu: goto label_28d53c;
        case 0x28d540u: goto label_28d540;
        case 0x28d544u: goto label_28d544;
        case 0x28d548u: goto label_28d548;
        case 0x28d54cu: goto label_28d54c;
        case 0x28d550u: goto label_28d550;
        case 0x28d554u: goto label_28d554;
        case 0x28d558u: goto label_28d558;
        case 0x28d55cu: goto label_28d55c;
        case 0x28d560u: goto label_28d560;
        case 0x28d564u: goto label_28d564;
        case 0x28d568u: goto label_28d568;
        case 0x28d56cu: goto label_28d56c;
        case 0x28d570u: goto label_28d570;
        case 0x28d574u: goto label_28d574;
        case 0x28d578u: goto label_28d578;
        case 0x28d57cu: goto label_28d57c;
        case 0x28d580u: goto label_28d580;
        case 0x28d584u: goto label_28d584;
        case 0x28d588u: goto label_28d588;
        case 0x28d58cu: goto label_28d58c;
        case 0x28d590u: goto label_28d590;
        case 0x28d594u: goto label_28d594;
        case 0x28d598u: goto label_28d598;
        case 0x28d59cu: goto label_28d59c;
        case 0x28d5a0u: goto label_28d5a0;
        case 0x28d5a4u: goto label_28d5a4;
        case 0x28d5a8u: goto label_28d5a8;
        case 0x28d5acu: goto label_28d5ac;
        case 0x28d5b0u: goto label_28d5b0;
        case 0x28d5b4u: goto label_28d5b4;
        case 0x28d5b8u: goto label_28d5b8;
        case 0x28d5bcu: goto label_28d5bc;
        case 0x28d5c0u: goto label_28d5c0;
        case 0x28d5c4u: goto label_28d5c4;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d5ccu: goto label_28d5cc;
        case 0x28d5d0u: goto label_28d5d0;
        case 0x28d5d4u: goto label_28d5d4;
        case 0x28d5d8u: goto label_28d5d8;
        case 0x28d5dcu: goto label_28d5dc;
        case 0x28d5e0u: goto label_28d5e0;
        case 0x28d5e4u: goto label_28d5e4;
        case 0x28d5e8u: goto label_28d5e8;
        case 0x28d5ecu: goto label_28d5ec;
        case 0x28d5f0u: goto label_28d5f0;
        case 0x28d5f4u: goto label_28d5f4;
        case 0x28d5f8u: goto label_28d5f8;
        case 0x28d5fcu: goto label_28d5fc;
        case 0x28d600u: goto label_28d600;
        case 0x28d604u: goto label_28d604;
        case 0x28d608u: goto label_28d608;
        case 0x28d60cu: goto label_28d60c;
        case 0x28d610u: goto label_28d610;
        case 0x28d614u: goto label_28d614;
        case 0x28d618u: goto label_28d618;
        case 0x28d61cu: goto label_28d61c;
        case 0x28d620u: goto label_28d620;
        case 0x28d624u: goto label_28d624;
        case 0x28d628u: goto label_28d628;
        case 0x28d62cu: goto label_28d62c;
        case 0x28d630u: goto label_28d630;
        case 0x28d634u: goto label_28d634;
        case 0x28d638u: goto label_28d638;
        case 0x28d63cu: goto label_28d63c;
        case 0x28d640u: goto label_28d640;
        case 0x28d644u: goto label_28d644;
        case 0x28d648u: goto label_28d648;
        case 0x28d64cu: goto label_28d64c;
        case 0x28d650u: goto label_28d650;
        case 0x28d654u: goto label_28d654;
        case 0x28d658u: goto label_28d658;
        case 0x28d65cu: goto label_28d65c;
        case 0x28d660u: goto label_28d660;
        case 0x28d664u: goto label_28d664;
        case 0x28d668u: goto label_28d668;
        case 0x28d66cu: goto label_28d66c;
        case 0x28d670u: goto label_28d670;
        case 0x28d674u: goto label_28d674;
        case 0x28d678u: goto label_28d678;
        case 0x28d67cu: goto label_28d67c;
        case 0x28d680u: goto label_28d680;
        case 0x28d684u: goto label_28d684;
        case 0x28d688u: goto label_28d688;
        case 0x28d68cu: goto label_28d68c;
        case 0x28d690u: goto label_28d690;
        case 0x28d694u: goto label_28d694;
        case 0x28d698u: goto label_28d698;
        case 0x28d69cu: goto label_28d69c;
        default: break;
    }

    ctx->pc = 0x28d538u;

label_28d538:
    // 0x28d538: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28d53c:
    // 0x28d53c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28d540:
    // 0x28d540: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_28d544:
    // 0x28d544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d548:
    // 0x28d548: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28d54c:
    // 0x28d54c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28d54cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d550:
    // 0x28d550: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28d554:
    // 0x28d554: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28d554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d558:
    // 0x28d558: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_28d55c:
    // 0x28d55c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_28d560:
    // 0x28d560: 0xc089f98  jal         func_227E60
label_28d564:
    if (ctx->pc == 0x28D564u) {
        ctx->pc = 0x28D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D560u;
        // 0x28d564: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D568u;
        goto label_28d568;
    }
    ctx->pc = 0x28D560u;
    SET_GPR_U32(ctx, 31, 0x28D568u);
    ctx->pc = 0x28D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D560u;
    // 0x28d564: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x28D560u, 0x28D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D568u;
label_28d568:
    // 0x28d568: 0x10540044  beq         $v0, $s4, . + 4 + (0x44 << 2)
label_28d56c:
    if (ctx->pc == 0x28D56Cu) {
        ctx->pc = 0x28D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D568u;
        // 0x28d56c: 0x26120164  addiu       $s2, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D570u;
        goto label_28d570;
    }
    ctx->pc = 0x28D568u;
    {
        const bool branch_taken_0x28d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x28D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D568u;
        // 0x28d56c: 0x26120164  addiu       $s2, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d568) {
            ctx->pc = 0x28D67Cu;
            goto label_28d67c;
        }
    }
    ctx->pc = 0x28D570u;
label_28d570:
    // 0x28d570: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28d574:
    // 0x28d574: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28d574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28d578:
    // 0x28d578: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28d57c:
    // 0x28d57c: 0x40f809  jalr        $v0
label_28d580:
    if (ctx->pc == 0x28D580u) {
        ctx->pc = 0x28D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D57Cu;
        // 0x28d580: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D584u;
        goto label_28d584;
    }
    ctx->pc = 0x28D57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D584u);
        ctx->pc = 0x28D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D57Cu;
        // 0x28d580: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D57Cu, 0x28D584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D584u;
label_28d584:
    // 0x28d584: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28d588:
    // 0x28d588: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x28d588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_28d58c:
    // 0x28d58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d590:
    // 0x28d590: 0xc137882  jal         func_4DE208
label_28d594:
    if (ctx->pc == 0x28D594u) {
        ctx->pc = 0x28D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D590u;
        // 0x28d594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D598u;
        goto label_28d598;
    }
    ctx->pc = 0x28D590u;
    SET_GPR_U32(ctx, 31, 0x28D598u);
    ctx->pc = 0x28D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D590u;
    // 0x28d594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28D590u, 0x28D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D598u;
label_28d598:
    // 0x28d598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28d59c:
    // 0x28d59c: 0x54430038  bnel        $v0, $v1, . + 4 + (0x38 << 2)
label_28d5a0:
    if (ctx->pc == 0x28D5A0u) {
        ctx->pc = 0x28D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D59Cu;
        // 0x28d5a0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5A4u;
        goto label_28d5a4;
    }
    ctx->pc = 0x28D59Cu;
    {
        const bool branch_taken_0x28d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d59c) {
            ctx->pc = 0x28D5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D59Cu;
            // 0x28d5a0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D680u;
            goto label_28d680;
        }
    }
    ctx->pc = 0x28D5A4u;
label_28d5a4:
    // 0x28d5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d5a8:
    // 0x28d5a8: 0xc13786a  jal         func_4DE1A8
label_28d5ac:
    if (ctx->pc == 0x28D5ACu) {
        ctx->pc = 0x28D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5A8u;
        // 0x28d5ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5B0u;
        goto label_28d5b0;
    }
    ctx->pc = 0x28D5A8u;
    SET_GPR_U32(ctx, 31, 0x28D5B0u);
    ctx->pc = 0x28D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5A8u;
    // 0x28d5ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE1A8u, 0x28D5A8u, 0x28D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5B0u;
label_28d5b0:
    // 0x28d5b0: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x28d5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_28d5b4:
    // 0x28d5b4: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x28d5b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28d5b8:
    // 0x28d5b8: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
label_28d5bc:
    if (ctx->pc == 0x28D5BCu) {
        ctx->pc = 0x28D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B8u;
        // 0x28d5bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5C0u;
        goto label_28d5c0;
    }
    ctx->pc = 0x28D5B8u;
    {
        const bool branch_taken_0x28d5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x28D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B8u;
        // 0x28d5bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5b8) {
            ctx->pc = 0x28D5D4u;
            goto label_28d5d4;
        }
    }
    ctx->pc = 0x28D5C0u;
label_28d5c0:
    // 0x28d5c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d5c4:
    // 0x28d5c4: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x28d5c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_28d5c8:
    // 0x28d5c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28d5c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d5cc:
    // 0x28d5cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28d5ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28d5d0:
    // 0x28d5d0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x28d5d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_28d5d4:
    // 0x28d5d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_28d5d8:
    if (ctx->pc == 0x28D5D8u) {
        ctx->pc = 0x28D5DCu;
        goto label_28d5dc;
    }
    ctx->pc = 0x28D5D4u;
    {
        const bool branch_taken_0x28d5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d5d4) {
            ctx->pc = 0x28D5ECu;
            goto label_28d5ec;
        }
    }
    ctx->pc = 0x28D5DCu;
label_28d5dc:
    // 0x28d5dc: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x28d5dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_28d5e0:
    // 0x28d5e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28d5e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28d5e4:
    // 0x28d5e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_28d5e8:
    if (ctx->pc == 0x28D5E8u) {
        ctx->pc = 0x28D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5E4u;
        // 0x28d5e8: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5ECu;
        goto label_28d5ec;
    }
    ctx->pc = 0x28D5E4u;
    {
        const bool branch_taken_0x28d5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5e4) {
            ctx->pc = 0x28D5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5E4u;
            // 0x28d5e8: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D604u;
            goto label_28d604;
        }
    }
    ctx->pc = 0x28D5ECu;
label_28d5ec:
    // 0x28d5ec: 0xc087502  jal         func_21D408
label_28d5f0:
    if (ctx->pc == 0x28D5F0u) {
        ctx->pc = 0x28D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5ECu;
        // 0x28d5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5F4u;
        goto label_28d5f4;
    }
    ctx->pc = 0x28D5ECu;
    SET_GPR_U32(ctx, 31, 0x28D5F4u);
    ctx->pc = 0x28D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5ECu;
    // 0x28d5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28D5ECu, 0x28D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5F4u;
label_28d5f4:
    // 0x28d5f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d5f8:
    // 0x28d5f8: 0xc0a3bc8  jal         func_28EF20
label_28d5fc:
    if (ctx->pc == 0x28D5FCu) {
        ctx->pc = 0x28D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5F8u;
        // 0x28d5fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D600u;
        goto label_28d600;
    }
    ctx->pc = 0x28D5F8u;
    SET_GPR_U32(ctx, 31, 0x28D600u);
    ctx->pc = 0x28D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5F8u;
    // 0x28d5fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF20u, 0x28D5F8u, 0x28D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D600u;
label_28d600:
    // 0x28d600: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x28d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_28d604:
    // 0x28d604: 0x8c520040  lw          $s2, 0x40($v0)
    ctx->pc = 0x28d604u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28d608:
    // 0x28d608: 0x5240001d  beql        $s2, $zero, . + 4 + (0x1D << 2)
label_28d60c:
    if (ctx->pc == 0x28D60Cu) {
        ctx->pc = 0x28D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D608u;
        // 0x28d60c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D610u;
        goto label_28d610;
    }
    ctx->pc = 0x28D608u;
    {
        const bool branch_taken_0x28d608 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d608) {
            ctx->pc = 0x28D60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D608u;
            // 0x28d60c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D680u;
            goto label_28d680;
        }
    }
    ctx->pc = 0x28D610u;
label_28d610:
    // 0x28d610: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_28d614:
    // 0x28d614: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_28d618:
    // 0x28d618: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_28d61c:
    // 0x28d61c: 0x40f809  jalr        $v0
label_28d620:
    if (ctx->pc == 0x28D620u) {
        ctx->pc = 0x28D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D61Cu;
        // 0x28d620: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D624u;
        goto label_28d624;
    }
    ctx->pc = 0x28D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D624u);
        ctx->pc = 0x28D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D61Cu;
        // 0x28d620: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D61Cu, 0x28D624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D624u;
label_28d624:
    // 0x28d624: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_28d628:
    if (ctx->pc == 0x28D628u) {
        ctx->pc = 0x28D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D624u;
        // 0x28d628: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D62Cu;
        goto label_28d62c;
    }
    ctx->pc = 0x28D624u;
    {
        const bool branch_taken_0x28d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d624) {
            ctx->pc = 0x28D628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D624u;
            // 0x28d628: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D680u;
            goto label_28d680;
        }
    }
    ctx->pc = 0x28D62Cu;
label_28d62c:
    // 0x28d62c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d630:
    // 0x28d630: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28d634:
    // 0x28d634: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28d634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28d638:
    // 0x28d638: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x28d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_28d63c:
    // 0x28d63c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x28d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_28d640:
    // 0x28d640: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28d644:
    // 0x28d644: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x28d644u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_28d648:
    // 0x28d648: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28d64c:
    // 0x28d64c: 0x86300048  lh          $s0, 0x48($s1)
    ctx->pc = 0x28d64cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
label_28d650:
    // 0x28d650: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28d654:
    // 0x28d654: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_28d658:
    // 0x28d658: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x28d658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_28d65c:
    // 0x28d65c: 0x40f809  jalr        $v0
label_28d660:
    if (ctx->pc == 0x28D660u) {
        ctx->pc = 0x28D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D65Cu;
        // 0x28d660: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D664u;
        goto label_28d664;
    }
    ctx->pc = 0x28D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D664u);
        ctx->pc = 0x28D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D65Cu;
        // 0x28d660: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D65Cu, 0x28D664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D664u;
label_28d664:
    // 0x28d664: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28d664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_28d668:
    // 0x28d668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d66c:
    // 0x28d66c: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x28d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_28d670:
    // 0x28d670: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28d674:
    // 0x28d674: 0x40f809  jalr        $v0
label_28d678:
    if (ctx->pc == 0x28D678u) {
        ctx->pc = 0x28D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D674u;
        // 0x28d678: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D67Cu;
        goto label_28d67c;
    }
    ctx->pc = 0x28D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D67Cu);
        ctx->pc = 0x28D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D674u;
        // 0x28d678: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D674u, 0x28D67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D67Cu;
label_28d67c:
    // 0x28d67c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28d67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28d680:
    // 0x28d680: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28d680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28d684:
    // 0x28d684: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28d684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28d688:
    // 0x28d688: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28d688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28d68c:
    // 0x28d68c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28d68cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d690:
    // 0x28d690: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28d690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28d694:
    // 0x28d694: 0x3e00008  jr          $ra
label_28d698:
    if (ctx->pc == 0x28D698u) {
        ctx->pc = 0x28D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D694u;
        // 0x28d698: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D69Cu;
        goto label_28d69c;
    }
    ctx->pc = 0x28D694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D694u;
        // 0x28d698: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D69Cu;
label_28d69c:
    // 0x28d69c: 0x0  nop
    ctx->pc = 0x28d69cu;
    // NOP
    ctx->pc = 0x28d6a0u;
}
