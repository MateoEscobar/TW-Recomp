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

// Function: sub_001AE4D8
// Address: 0x1ae4d8 - 0x1ae5a0
void sub_001AE4D8_0x1ae4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE4D8_0x1ae4d8");
#endif

    switch (ctx->pc) {
        case 0x1ae4d8u: goto label_1ae4d8;
        case 0x1ae4dcu: goto label_1ae4dc;
        case 0x1ae4e0u: goto label_1ae4e0;
        case 0x1ae4e4u: goto label_1ae4e4;
        case 0x1ae4e8u: goto label_1ae4e8;
        case 0x1ae4ecu: goto label_1ae4ec;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae4f4u: goto label_1ae4f4;
        case 0x1ae4f8u: goto label_1ae4f8;
        case 0x1ae4fcu: goto label_1ae4fc;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae504u: goto label_1ae504;
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae50cu: goto label_1ae50c;
        case 0x1ae510u: goto label_1ae510;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae518u: goto label_1ae518;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae520u: goto label_1ae520;
        case 0x1ae524u: goto label_1ae524;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae52cu: goto label_1ae52c;
        case 0x1ae530u: goto label_1ae530;
        case 0x1ae534u: goto label_1ae534;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae53cu: goto label_1ae53c;
        case 0x1ae540u: goto label_1ae540;
        case 0x1ae544u: goto label_1ae544;
        case 0x1ae548u: goto label_1ae548;
        case 0x1ae54cu: goto label_1ae54c;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae554u: goto label_1ae554;
        case 0x1ae558u: goto label_1ae558;
        case 0x1ae55cu: goto label_1ae55c;
        case 0x1ae560u: goto label_1ae560;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae568u: goto label_1ae568;
        case 0x1ae56cu: goto label_1ae56c;
        case 0x1ae570u: goto label_1ae570;
        case 0x1ae574u: goto label_1ae574;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae57cu: goto label_1ae57c;
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae584u: goto label_1ae584;
        case 0x1ae588u: goto label_1ae588;
        case 0x1ae58cu: goto label_1ae58c;
        case 0x1ae590u: goto label_1ae590;
        case 0x1ae594u: goto label_1ae594;
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae59cu: goto label_1ae59c;
        default: break;
    }

    ctx->pc = 0x1ae4d8u;

label_1ae4d8:
    // 0x1ae4d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ae4dc:
    // 0x1ae4dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ae4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ae4e0:
    // 0x1ae4e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ae4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1ae4e4:
    // 0x1ae4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4e8:
    // 0x1ae4e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ae4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ae4ec:
    // 0x1ae4ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4f0:
    // 0x1ae4f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ae4f4:
    // 0x1ae4f4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ae4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae4f8:
    // 0x1ae4f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ae4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1ae4fc:
    // 0x1ae4fc: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1ae4fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1ae500:
    // 0x1ae500: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ae500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1ae504:
    // 0x1ae504: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1ae504u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1ae508:
    // 0x1ae508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae50c:
    // 0x1ae50c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1ae510:
    // 0x1ae510: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae514:
    // 0x1ae514: 0x26854640  addiu       $a1, $s4, 0x4640
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 17984));
label_1ae518:
    // 0x1ae518: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1ae518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1ae51c:
    // 0x1ae51c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ae51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ae520:
    // 0x1ae520: 0x26684618  addiu       $t0, $s3, 0x4618
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 17944));
label_1ae524:
    // 0x1ae524: 0x240901e4  addiu       $t1, $zero, 0x1E4
    ctx->pc = 0x1ae524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
label_1ae528:
    // 0x1ae528: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ae528u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae52c:
    // 0x1ae52c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ae52cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae530:
    // 0x1ae530: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1ae534:
    if (ctx->pc == 0x1AE534u) {
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE538u;
        goto label_1ae538;
    }
    ctx->pc = 0x1AE530u;
    {
        const bool branch_taken_0x1ae530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae530) {
            ctx->pc = 0x1AE56Cu;
            goto label_1ae56c;
        }
    }
    ctx->pc = 0x1AE538u;
label_1ae538:
    // 0x1ae538: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x1ae538u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1ae53c:
    // 0x1ae53c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ae53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ae540:
    // 0x1ae540: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ae544:
    // 0x1ae544: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ae548:
    // 0x1ae548: 0x40f809  jalr        $v0
label_1ae54c:
    if (ctx->pc == 0x1AE54Cu) {
        ctx->pc = 0x1AE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE548u;
        // 0x1ae54c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE550u;
        goto label_1ae550;
    }
    ctx->pc = 0x1AE548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE550u);
        ctx->pc = 0x1AE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE548u;
        // 0x1ae54c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE548u, 0x1AE550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE550u;
label_1ae550:
    // 0x1ae550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae554:
    // 0x1ae554: 0xc0517e8  jal         func_145FA0
label_1ae558:
    if (ctx->pc == 0x1AE558u) {
        ctx->pc = 0x1AE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE554u;
        // 0x1ae558: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE55Cu;
        goto label_1ae55c;
    }
    ctx->pc = 0x1AE554u;
    SET_GPR_U32(ctx, 31, 0x1AE55Cu);
    ctx->pc = 0x1AE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE554u;
    // 0x1ae558: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145FA0u, 0x1AE554u, 0x1AE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE55Cu;
label_1ae55c:
    // 0x1ae55c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae560:
    // 0x1ae560: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x1ae560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
label_1ae564:
    // 0x1ae564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae568:
    // 0x1ae568: 0xa0720019  sb          $s2, 0x19($v1)
    ctx->pc = 0x1ae568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 18));
label_1ae56c:
    // 0x1ae56c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1ae56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae570:
    // 0x1ae570: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1ae574:
    if (ctx->pc == 0x1AE574u) {
        ctx->pc = 0x1AE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE570u;
        // 0x1ae574: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE578u;
        goto label_1ae578;
    }
    ctx->pc = 0x1AE570u;
    {
        const bool branch_taken_0x1ae570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE570u;
        // 0x1ae574: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae570) {
            ctx->pc = 0x1AE510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae510;
        }
    }
    ctx->pc = 0x1AE578u;
label_1ae578:
    // 0x1ae578: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ae578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae57c:
    // 0x1ae57c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ae57cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ae580:
    // 0x1ae580: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ae580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae584:
    // 0x1ae584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ae584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae588:
    // 0x1ae588: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ae588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae58c:
    // 0x1ae58c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ae58cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae590:
    // 0x1ae590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae594:
    // 0x1ae594: 0x3e00008  jr          $ra
label_1ae598:
    if (ctx->pc == 0x1AE598u) {
        ctx->pc = 0x1AE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE594u;
        // 0x1ae598: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE59Cu;
        goto label_1ae59c;
    }
    ctx->pc = 0x1AE594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE594u;
        // 0x1ae598: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE59Cu;
label_1ae59c:
    // 0x1ae59c: 0x0  nop
    ctx->pc = 0x1ae59cu;
    // NOP
    ctx->pc = 0x1ae5a0u;
}
