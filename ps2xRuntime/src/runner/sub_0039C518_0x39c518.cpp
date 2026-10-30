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

// Function: sub_0039C518
// Address: 0x39c518 - 0x39c698
void sub_0039C518_0x39c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C518_0x39c518");
#endif

    switch (ctx->pc) {
        case 0x39c518u: goto label_39c518;
        case 0x39c51cu: goto label_39c51c;
        case 0x39c520u: goto label_39c520;
        case 0x39c524u: goto label_39c524;
        case 0x39c528u: goto label_39c528;
        case 0x39c52cu: goto label_39c52c;
        case 0x39c530u: goto label_39c530;
        case 0x39c534u: goto label_39c534;
        case 0x39c538u: goto label_39c538;
        case 0x39c53cu: goto label_39c53c;
        case 0x39c540u: goto label_39c540;
        case 0x39c544u: goto label_39c544;
        case 0x39c548u: goto label_39c548;
        case 0x39c54cu: goto label_39c54c;
        case 0x39c550u: goto label_39c550;
        case 0x39c554u: goto label_39c554;
        case 0x39c558u: goto label_39c558;
        case 0x39c55cu: goto label_39c55c;
        case 0x39c560u: goto label_39c560;
        case 0x39c564u: goto label_39c564;
        case 0x39c568u: goto label_39c568;
        case 0x39c56cu: goto label_39c56c;
        case 0x39c570u: goto label_39c570;
        case 0x39c574u: goto label_39c574;
        case 0x39c578u: goto label_39c578;
        case 0x39c57cu: goto label_39c57c;
        case 0x39c580u: goto label_39c580;
        case 0x39c584u: goto label_39c584;
        case 0x39c588u: goto label_39c588;
        case 0x39c58cu: goto label_39c58c;
        case 0x39c590u: goto label_39c590;
        case 0x39c594u: goto label_39c594;
        case 0x39c598u: goto label_39c598;
        case 0x39c59cu: goto label_39c59c;
        case 0x39c5a0u: goto label_39c5a0;
        case 0x39c5a4u: goto label_39c5a4;
        case 0x39c5a8u: goto label_39c5a8;
        case 0x39c5acu: goto label_39c5ac;
        case 0x39c5b0u: goto label_39c5b0;
        case 0x39c5b4u: goto label_39c5b4;
        case 0x39c5b8u: goto label_39c5b8;
        case 0x39c5bcu: goto label_39c5bc;
        case 0x39c5c0u: goto label_39c5c0;
        case 0x39c5c4u: goto label_39c5c4;
        case 0x39c5c8u: goto label_39c5c8;
        case 0x39c5ccu: goto label_39c5cc;
        case 0x39c5d0u: goto label_39c5d0;
        case 0x39c5d4u: goto label_39c5d4;
        case 0x39c5d8u: goto label_39c5d8;
        case 0x39c5dcu: goto label_39c5dc;
        case 0x39c5e0u: goto label_39c5e0;
        case 0x39c5e4u: goto label_39c5e4;
        case 0x39c5e8u: goto label_39c5e8;
        case 0x39c5ecu: goto label_39c5ec;
        case 0x39c5f0u: goto label_39c5f0;
        case 0x39c5f4u: goto label_39c5f4;
        case 0x39c5f8u: goto label_39c5f8;
        case 0x39c5fcu: goto label_39c5fc;
        case 0x39c600u: goto label_39c600;
        case 0x39c604u: goto label_39c604;
        case 0x39c608u: goto label_39c608;
        case 0x39c60cu: goto label_39c60c;
        case 0x39c610u: goto label_39c610;
        case 0x39c614u: goto label_39c614;
        case 0x39c618u: goto label_39c618;
        case 0x39c61cu: goto label_39c61c;
        case 0x39c620u: goto label_39c620;
        case 0x39c624u: goto label_39c624;
        case 0x39c628u: goto label_39c628;
        case 0x39c62cu: goto label_39c62c;
        case 0x39c630u: goto label_39c630;
        case 0x39c634u: goto label_39c634;
        case 0x39c638u: goto label_39c638;
        case 0x39c63cu: goto label_39c63c;
        case 0x39c640u: goto label_39c640;
        case 0x39c644u: goto label_39c644;
        case 0x39c648u: goto label_39c648;
        case 0x39c64cu: goto label_39c64c;
        case 0x39c650u: goto label_39c650;
        case 0x39c654u: goto label_39c654;
        case 0x39c658u: goto label_39c658;
        case 0x39c65cu: goto label_39c65c;
        case 0x39c660u: goto label_39c660;
        case 0x39c664u: goto label_39c664;
        case 0x39c668u: goto label_39c668;
        case 0x39c66cu: goto label_39c66c;
        case 0x39c670u: goto label_39c670;
        case 0x39c674u: goto label_39c674;
        case 0x39c678u: goto label_39c678;
        case 0x39c67cu: goto label_39c67c;
        case 0x39c680u: goto label_39c680;
        case 0x39c684u: goto label_39c684;
        case 0x39c688u: goto label_39c688;
        case 0x39c68cu: goto label_39c68c;
        case 0x39c690u: goto label_39c690;
        case 0x39c694u: goto label_39c694;
        default: break;
    }

    ctx->pc = 0x39c518u;

label_39c518:
    // 0x39c518: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39c51c:
    // 0x39c51c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x39c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_39c520:
    // 0x39c520: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_39c524:
    // 0x39c524: 0x24425808  addiu       $v0, $v0, 0x5808
    ctx->pc = 0x39c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22536));
label_39c528:
    // 0x39c528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39c52c:
    // 0x39c52c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c530:
    // 0x39c530: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x39c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_39c534:
    // 0x39c534: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39c534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c538:
    // 0x39c538: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_39c53c:
    // 0x39c53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c540:
    // 0x39c540: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39c540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39c544:
    // 0x39c544: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x39c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_39c548:
    // 0x39c548: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_39c54c:
    if (ctx->pc == 0x39C54Cu) {
        ctx->pc = 0x39C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C548u;
        // 0x39c54c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C550u;
        goto label_39c550;
    }
    ctx->pc = 0x39C548u;
    {
        const bool branch_taken_0x39c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C548u;
        // 0x39c54c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c548) {
            ctx->pc = 0x39C5F0u;
            goto label_39c5f0;
        }
    }
    ctx->pc = 0x39C550u;
label_39c550:
    // 0x39c550: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x39c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39c554:
    // 0x39c554: 0x0  nop
    ctx->pc = 0x39c554u;
    // NOP
label_39c558:
    // 0x39c558: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39c558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39c55c:
    // 0x39c55c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c560:
    // 0x39c560: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x39c560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_39c564:
    // 0x39c564: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x39c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_39c568:
    // 0x39c568: 0x40f809  jalr        $v0
label_39c56c:
    if (ctx->pc == 0x39C56Cu) {
        ctx->pc = 0x39C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C568u;
        // 0x39c56c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C570u;
        goto label_39c570;
    }
    ctx->pc = 0x39C568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C570u);
        ctx->pc = 0x39C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C568u;
        // 0x39c56c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C568u, 0x39C570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C570u;
label_39c570:
    // 0x39c570: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_39c574:
    if (ctx->pc == 0x39C574u) {
        ctx->pc = 0x39C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C570u;
        // 0x39c574: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C578u;
        goto label_39c578;
    }
    ctx->pc = 0x39C570u;
    {
        const bool branch_taken_0x39c570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c570) {
            ctx->pc = 0x39C574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C570u;
            // 0x39c574: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C5E8u;
            goto label_39c5e8;
        }
    }
    ctx->pc = 0x39C578u;
label_39c578:
    // 0x39c578: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x39c578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_39c57c:
    // 0x39c57c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c580:
    // 0x39c580: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_39c584:
    if (ctx->pc == 0x39C584u) {
        ctx->pc = 0x39C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C580u;
        // 0x39c584: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C588u;
        goto label_39c588;
    }
    ctx->pc = 0x39C580u;
    {
        const bool branch_taken_0x39c580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C580u;
        // 0x39c584: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c580) {
            ctx->pc = 0x39C5E4u;
            goto label_39c5e4;
        }
    }
    ctx->pc = 0x39C588u;
label_39c588:
    // 0x39c588: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x39c588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39c58c:
    // 0x39c58c: 0x0  nop
    ctx->pc = 0x39c58cu;
    // NOP
label_39c590:
    // 0x39c590: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x39c590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39c594:
    // 0x39c594: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x39c594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_39c598:
    // 0x39c598: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x39c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39c59c:
    // 0x39c59c: 0x1470000d  bne         $v1, $s0, . + 4 + (0xD << 2)
label_39c5a0:
    if (ctx->pc == 0x39C5A0u) {
        ctx->pc = 0x39C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C59Cu;
        // 0x39c5a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5A4u;
        goto label_39c5a4;
    }
    ctx->pc = 0x39C59Cu;
    {
        const bool branch_taken_0x39c59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x39C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C59Cu;
        // 0x39c5a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c59c) {
            ctx->pc = 0x39C5D4u;
            goto label_39c5d4;
        }
    }
    ctx->pc = 0x39C5A4u;
label_39c5a4:
    // 0x39c5a4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x39c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39c5a8:
    // 0x39c5a8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x39c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_39c5ac:
    // 0x39c5ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x39c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39c5b0:
    // 0x39c5b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x39c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_39c5b4:
    // 0x39c5b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39c5b8:
    // 0x39c5b8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x39c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_39c5bc:
    // 0x39c5bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x39c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_39c5c0:
    // 0x39c5c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x39c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39c5c4:
    // 0x39c5c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39c5c8:
    // 0x39c5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39c5cc:
    // 0x39c5cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_39c5d0:
    if (ctx->pc == 0x39C5D0u) {
        ctx->pc = 0x39C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5CCu;
        // 0x39c5d0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5D4u;
        goto label_39c5d4;
    }
    ctx->pc = 0x39C5CCu;
    {
        const bool branch_taken_0x39c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5CCu;
        // 0x39c5d0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c5cc) {
            ctx->pc = 0x39C5E4u;
            goto label_39c5e4;
        }
    }
    ctx->pc = 0x39C5D4u;
label_39c5d4:
    // 0x39c5d4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x39c5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39c5d8:
    // 0x39c5d8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x39c5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_39c5dc:
    // 0x39c5dc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_39c5e0:
    if (ctx->pc == 0x39C5E0u) {
        ctx->pc = 0x39C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5DCu;
        // 0x39c5e0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5E4u;
        goto label_39c5e4;
    }
    ctx->pc = 0x39C5DCu;
    {
        const bool branch_taken_0x39c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c5dc) {
            ctx->pc = 0x39C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C5DCu;
            // 0x39c5e0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c590;
        }
    }
    ctx->pc = 0x39C5E4u;
label_39c5e4:
    // 0x39c5e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x39c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_39c5e8:
    // 0x39c5e8: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_39c5ec:
    if (ctx->pc == 0x39C5ECu) {
        ctx->pc = 0x39C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5E8u;
        // 0x39c5ec: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5F0u;
        goto label_39c5f0;
    }
    ctx->pc = 0x39C5E8u;
    {
        const bool branch_taken_0x39c5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c5e8) {
            ctx->pc = 0x39C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C5E8u;
            // 0x39c5ec: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c558;
        }
    }
    ctx->pc = 0x39C5F0u;
label_39c5f0:
    // 0x39c5f0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x39c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_39c5f4:
    // 0x39c5f4: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x39c5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_39c5f8:
    // 0x39c5f8: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x39c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
label_39c5fc:
    // 0x39c5fc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x39c5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_39c600:
    // 0x39c600: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39c600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39c604:
    // 0x39c604: 0x26101438  addiu       $s0, $s0, 0x1438
    ctx->pc = 0x39c604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5176));
label_39c608:
    // 0x39c608: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x39c608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39c60c:
    // 0x39c60c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39c60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c610:
    // 0x39c610: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x39c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39c614:
    // 0x39c614: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x39c614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_39c618:
    // 0x39c618: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x39c618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_39c61c:
    // 0x39c61c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x39c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_39c620:
    // 0x39c620: 0x60f809  jalr        $v1
label_39c624:
    if (ctx->pc == 0x39C624u) {
        ctx->pc = 0x39C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C620u;
        // 0x39c624: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C628u;
        goto label_39c628;
    }
    ctx->pc = 0x39C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C628u);
        ctx->pc = 0x39C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C620u;
        // 0x39c624: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C620u, 0x39C628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C628u;
label_39c628:
    // 0x39c628: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x39c628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_39c62c:
    // 0x39c62c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39c62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c630:
    // 0x39c630: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x39c630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_39c634:
    // 0x39c634: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x39c634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_39c638:
    // 0x39c638: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x39c638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39c63c:
    // 0x39c63c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x39c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39c640:
    // 0x39c640: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x39c640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_39c644:
    // 0x39c644: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x39c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_39c648:
    // 0x39c648: 0x60f809  jalr        $v1
label_39c64c:
    if (ctx->pc == 0x39C64Cu) {
        ctx->pc = 0x39C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C648u;
        // 0x39c64c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C650u;
        goto label_39c650;
    }
    ctx->pc = 0x39C648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C650u);
        ctx->pc = 0x39C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C648u;
        // 0x39c64c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C648u, 0x39C650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C650u;
label_39c650:
    // 0x39c650: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x39c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_39c654:
    // 0x39c654: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x39c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_39c658:
    // 0x39c658: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x39c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_39c65c:
    // 0x39c65c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x39c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_39c660:
    // 0x39c660: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39c660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39c664:
    // 0x39c664: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x39c664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_39c668:
    // 0x39c668: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39c66c:
    if (ctx->pc == 0x39C66Cu) {
        ctx->pc = 0x39C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C668u;
        // 0x39c66c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C670u;
        goto label_39c670;
    }
    ctx->pc = 0x39C668u;
    {
        const bool branch_taken_0x39c668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C668u;
        // 0x39c66c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c668) {
            ctx->pc = 0x39C678u;
            goto label_39c678;
        }
    }
    ctx->pc = 0x39C670u;
label_39c670:
    // 0x39c670: 0xc10b208  jal         func_42C820
label_39c674:
    if (ctx->pc == 0x39C674u) {
        ctx->pc = 0x39C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C670u;
        // 0x39c674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C678u;
        goto label_39c678;
    }
    ctx->pc = 0x39C670u;
    SET_GPR_U32(ctx, 31, 0x39C678u);
    ctx->pc = 0x39C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C670u;
    // 0x39c674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x39C670u, 0x39C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C678u;
label_39c678:
    // 0x39c678: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39c678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c67c:
    // 0x39c67c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39c67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c680:
    // 0x39c680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c684:
    // 0x39c684: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39c684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c688:
    // 0x39c688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c68c:
    // 0x39c68c: 0x3e00008  jr          $ra
label_39c690:
    if (ctx->pc == 0x39C690u) {
        ctx->pc = 0x39C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C68Cu;
        // 0x39c690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C694u;
        goto label_39c694;
    }
    ctx->pc = 0x39C68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C68Cu;
        // 0x39c690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C694u;
label_39c694:
    // 0x39c694: 0x0  nop
    ctx->pc = 0x39c694u;
    // NOP
    ctx->pc = 0x39c698u;
}
