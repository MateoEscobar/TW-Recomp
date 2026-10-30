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

// Function: sub_001AC528
// Address: 0x1ac528 - 0x1ac620
void sub_001AC528_0x1ac528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC528_0x1ac528");
#endif

    switch (ctx->pc) {
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac584u: goto label_1ac584;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac594u: goto label_1ac594;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac59cu: goto label_1ac59c;
        case 0x1ac5a0u: goto label_1ac5a0;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5acu: goto label_1ac5ac;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5b8u: goto label_1ac5b8;
        case 0x1ac5bcu: goto label_1ac5bc;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5c4u: goto label_1ac5c4;
        case 0x1ac5c8u: goto label_1ac5c8;
        case 0x1ac5ccu: goto label_1ac5cc;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5d8u: goto label_1ac5d8;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5e0u: goto label_1ac5e0;
        case 0x1ac5e4u: goto label_1ac5e4;
        case 0x1ac5e8u: goto label_1ac5e8;
        case 0x1ac5ecu: goto label_1ac5ec;
        case 0x1ac5f0u: goto label_1ac5f0;
        case 0x1ac5f4u: goto label_1ac5f4;
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac600u: goto label_1ac600;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac608u: goto label_1ac608;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac610u: goto label_1ac610;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac618u: goto label_1ac618;
        case 0x1ac61cu: goto label_1ac61c;
        default: break;
    }

    ctx->pc = 0x1ac528u;

label_1ac528:
    // 0x1ac528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac52c:
    // 0x1ac52c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ac52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ac530:
    // 0x1ac530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ac534:
    // 0x1ac534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac538:
    // 0x1ac538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac53c:
    // 0x1ac53c: 0x8e260090  lw          $a2, 0x90($s1)
    ctx->pc = 0x1ac53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1ac540:
    // 0x1ac540: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1ac544:
    if (ctx->pc == 0x1AC544u) {
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC540u;
        // 0x1ac544: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC548u;
        goto label_1ac548;
    }
    ctx->pc = 0x1AC540u;
    {
        const bool branch_taken_0x1ac540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC540u;
        // 0x1ac544: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac540) {
            ctx->pc = 0x1AC564u;
            goto label_1ac564;
        }
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1ac548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1ac54c:
    // 0x1ac54c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1ac550:
    // 0x1ac550: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ac550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1ac554:
    // 0x1ac554: 0x40f809  jalr        $v0
label_1ac558:
    if (ctx->pc == 0x1AC558u) {
        ctx->pc = 0x1AC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC554u;
        // 0x1ac558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC55Cu;
        goto label_1ac55c;
    }
    ctx->pc = 0x1AC554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC55Cu);
        ctx->pc = 0x1AC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC554u;
        // 0x1ac558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC554u, 0x1AC55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC55Cu;
label_1ac55c:
    // 0x1ac55c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1ac560:
    if (ctx->pc == 0x1AC560u) {
        ctx->pc = 0x1AC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC55Cu;
        // 0x1ac560: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC564u;
        goto label_1ac564;
    }
    ctx->pc = 0x1AC55Cu;
    {
        const bool branch_taken_0x1ac55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC55Cu;
        // 0x1ac560: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac55c) {
            ctx->pc = 0x1AC5E8u;
            goto label_1ac5e8;
        }
    }
    ctx->pc = 0x1AC564u;
label_1ac564:
    // 0x1ac564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac568:
    // 0x1ac568: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_1ac56c:
    if (ctx->pc == 0x1AC56Cu) {
        ctx->pc = 0x1AC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC568u;
        // 0x1ac56c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC570u;
        goto label_1ac570;
    }
    ctx->pc = 0x1AC568u;
    {
        const bool branch_taken_0x1ac568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC568u;
        // 0x1ac56c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac568) {
            ctx->pc = 0x1AC5B0u;
            goto label_1ac5b0;
        }
    }
    ctx->pc = 0x1AC570u;
label_1ac570:
    // 0x1ac570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ac574:
    if (ctx->pc == 0x1AC574u) {
        ctx->pc = 0x1AC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC570u;
        // 0x1ac574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC578u;
        goto label_1ac578;
    }
    ctx->pc = 0x1AC570u;
    {
        const bool branch_taken_0x1ac570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC570u;
        // 0x1ac574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac570) {
            ctx->pc = 0x1AC588u;
            goto label_1ac588;
        }
    }
    ctx->pc = 0x1AC578u;
label_1ac578:
    // 0x1ac578: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1ac57c:
    if (ctx->pc == 0x1AC57Cu) {
        ctx->pc = 0x1AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC578u;
        // 0x1ac57c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC580u;
        goto label_1ac580;
    }
    ctx->pc = 0x1AC578u;
    {
        const bool branch_taken_0x1ac578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC578u;
        // 0x1ac57c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac578) {
            ctx->pc = 0x1AC5A0u;
            goto label_1ac5a0;
        }
    }
    ctx->pc = 0x1AC580u;
label_1ac580:
    // 0x1ac580: 0x10000022  b           . + 4 + (0x22 << 2)
label_1ac584:
    if (ctx->pc == 0x1AC584u) {
        ctx->pc = 0x1AC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC580u;
        // 0x1ac584: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC588u;
        goto label_1ac588;
    }
    ctx->pc = 0x1AC580u;
    {
        const bool branch_taken_0x1ac580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC580u;
        // 0x1ac584: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac580) {
            ctx->pc = 0x1AC60Cu;
            goto label_1ac60c;
        }
    }
    ctx->pc = 0x1AC588u;
label_1ac588:
    // 0x1ac588: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1ac58c:
    if (ctx->pc == 0x1AC58Cu) {
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC590u;
        goto label_1ac590;
    }
    ctx->pc = 0x1AC588u;
    {
        const bool branch_taken_0x1ac588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac588) {
            ctx->pc = 0x1AC5C0u;
            goto label_1ac5c0;
        }
    }
    ctx->pc = 0x1AC590u;
label_1ac590:
    // 0x1ac590: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_1ac594:
    if (ctx->pc == 0x1AC594u) {
        ctx->pc = 0x1AC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC590u;
        // 0x1ac594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC598u;
        goto label_1ac598;
    }
    ctx->pc = 0x1AC590u;
    {
        const bool branch_taken_0x1ac590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC590u;
        // 0x1ac594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac590) {
            ctx->pc = 0x1AC5D0u;
            goto label_1ac5d0;
        }
    }
    ctx->pc = 0x1AC598u;
label_1ac598:
    // 0x1ac598: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1ac59c:
    if (ctx->pc == 0x1AC59Cu) {
        ctx->pc = 0x1AC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC598u;
        // 0x1ac59c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5A0u;
        goto label_1ac5a0;
    }
    ctx->pc = 0x1AC598u;
    {
        const bool branch_taken_0x1ac598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC598u;
        // 0x1ac59c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac598) {
            ctx->pc = 0x1AC60Cu;
            goto label_1ac60c;
        }
    }
    ctx->pc = 0x1AC5A0u;
label_1ac5a0:
    // 0x1ac5a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac5a4:
    // 0x1ac5a4: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1ac5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1ac5a8:
    // 0x1ac5a8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ac5ac:
    if (ctx->pc == 0x1AC5ACu) {
        ctx->pc = 0x1AC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5A8u;
        // 0x1ac5ac: 0x8c4300ec  lw          $v1, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5B0u;
        goto label_1ac5b0;
    }
    ctx->pc = 0x1AC5A8u;
    {
        const bool branch_taken_0x1ac5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5A8u;
        // 0x1ac5ac: 0x8c4300ec  lw          $v1, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5a8) {
            ctx->pc = 0x1AC5DCu;
            goto label_1ac5dc;
        }
    }
    ctx->pc = 0x1AC5B0u;
label_1ac5b0:
    // 0x1ac5b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac5b4:
    // 0x1ac5b4: 0x844400f0  lh          $a0, 0xF0($v0)
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
label_1ac5b8:
    // 0x1ac5b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ac5bc:
    if (ctx->pc == 0x1AC5BCu) {
        ctx->pc = 0x1AC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B8u;
        // 0x1ac5bc: 0x8c4300f4  lw          $v1, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5C0u;
        goto label_1ac5c0;
    }
    ctx->pc = 0x1AC5B8u;
    {
        const bool branch_taken_0x1ac5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B8u;
        // 0x1ac5bc: 0x8c4300f4  lw          $v1, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5b8) {
            ctx->pc = 0x1AC5DCu;
            goto label_1ac5dc;
        }
    }
    ctx->pc = 0x1AC5C0u;
label_1ac5c0:
    // 0x1ac5c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac5c4:
    // 0x1ac5c4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ac5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ac5c8:
    // 0x1ac5c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac5cc:
    if (ctx->pc == 0x1AC5CCu) {
        ctx->pc = 0x1AC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5C8u;
        // 0x1ac5cc: 0x8c4300fc  lw          $v1, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5D0u;
        goto label_1ac5d0;
    }
    ctx->pc = 0x1AC5C8u;
    {
        const bool branch_taken_0x1ac5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5C8u;
        // 0x1ac5cc: 0x8c4300fc  lw          $v1, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5c8) {
            ctx->pc = 0x1AC5DCu;
            goto label_1ac5dc;
        }
    }
    ctx->pc = 0x1AC5D0u;
label_1ac5d0:
    // 0x1ac5d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac5d4:
    // 0x1ac5d4: 0x84440100  lh          $a0, 0x100($v0)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
label_1ac5d8:
    // 0x1ac5d8: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1ac5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1ac5dc:
    // 0x1ac5dc: 0x60f809  jalr        $v1
label_1ac5e0:
    if (ctx->pc == 0x1AC5E0u) {
        ctx->pc = 0x1AC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5DCu;
        // 0x1ac5e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5E4u;
        goto label_1ac5e4;
    }
    ctx->pc = 0x1AC5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC5E4u);
        ctx->pc = 0x1AC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5DCu;
        // 0x1ac5e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5DCu, 0x1AC5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC5E4u;
label_1ac5e4:
    // 0x1ac5e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ac5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ac5e8:
    // 0x1ac5e8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ac5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ac5ec:
    // 0x1ac5ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac5f0:
    // 0x1ac5f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ac5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ac5f4:
    // 0x1ac5f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ac5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ac5f8:
    // 0x1ac5f8: 0x40f809  jalr        $v0
label_1ac5fc:
    if (ctx->pc == 0x1AC5FCu) {
        ctx->pc = 0x1AC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F8u;
        // 0x1ac5fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC600u;
        goto label_1ac600;
    }
    ctx->pc = 0x1AC5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC600u);
        ctx->pc = 0x1AC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F8u;
        // 0x1ac5fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5F8u, 0x1AC600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC600u;
label_1ac600:
    // 0x1ac600: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x1ac600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_1ac604:
    // 0x1ac604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac608:
    // 0x1ac608: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ac608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac60c:
    // 0x1ac60c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac610:
    // 0x1ac610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac614:
    // 0x1ac614: 0x3e00008  jr          $ra
label_1ac618:
    if (ctx->pc == 0x1AC618u) {
        ctx->pc = 0x1AC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC614u;
        // 0x1ac618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC61Cu;
        goto label_1ac61c;
    }
    ctx->pc = 0x1AC614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC614u;
        // 0x1ac618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC61Cu;
label_1ac61c:
    // 0x1ac61c: 0x0  nop
    ctx->pc = 0x1ac61cu;
    // NOP
    ctx->pc = 0x1ac620u;
}
