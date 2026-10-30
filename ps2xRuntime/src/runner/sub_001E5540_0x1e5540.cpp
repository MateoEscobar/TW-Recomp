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

// Function: sub_001E5540
// Address: 0x1e5540 - 0x1e5618
void sub_001E5540_0x1e5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5540_0x1e5540");
#endif

    switch (ctx->pc) {
        case 0x1e5540u: goto label_1e5540;
        case 0x1e5544u: goto label_1e5544;
        case 0x1e5548u: goto label_1e5548;
        case 0x1e554cu: goto label_1e554c;
        case 0x1e5550u: goto label_1e5550;
        case 0x1e5554u: goto label_1e5554;
        case 0x1e5558u: goto label_1e5558;
        case 0x1e555cu: goto label_1e555c;
        case 0x1e5560u: goto label_1e5560;
        case 0x1e5564u: goto label_1e5564;
        case 0x1e5568u: goto label_1e5568;
        case 0x1e556cu: goto label_1e556c;
        case 0x1e5570u: goto label_1e5570;
        case 0x1e5574u: goto label_1e5574;
        case 0x1e5578u: goto label_1e5578;
        case 0x1e557cu: goto label_1e557c;
        case 0x1e5580u: goto label_1e5580;
        case 0x1e5584u: goto label_1e5584;
        case 0x1e5588u: goto label_1e5588;
        case 0x1e558cu: goto label_1e558c;
        case 0x1e5590u: goto label_1e5590;
        case 0x1e5594u: goto label_1e5594;
        case 0x1e5598u: goto label_1e5598;
        case 0x1e559cu: goto label_1e559c;
        case 0x1e55a0u: goto label_1e55a0;
        case 0x1e55a4u: goto label_1e55a4;
        case 0x1e55a8u: goto label_1e55a8;
        case 0x1e55acu: goto label_1e55ac;
        case 0x1e55b0u: goto label_1e55b0;
        case 0x1e55b4u: goto label_1e55b4;
        case 0x1e55b8u: goto label_1e55b8;
        case 0x1e55bcu: goto label_1e55bc;
        case 0x1e55c0u: goto label_1e55c0;
        case 0x1e55c4u: goto label_1e55c4;
        case 0x1e55c8u: goto label_1e55c8;
        case 0x1e55ccu: goto label_1e55cc;
        case 0x1e55d0u: goto label_1e55d0;
        case 0x1e55d4u: goto label_1e55d4;
        case 0x1e55d8u: goto label_1e55d8;
        case 0x1e55dcu: goto label_1e55dc;
        case 0x1e55e0u: goto label_1e55e0;
        case 0x1e55e4u: goto label_1e55e4;
        case 0x1e55e8u: goto label_1e55e8;
        case 0x1e55ecu: goto label_1e55ec;
        case 0x1e55f0u: goto label_1e55f0;
        case 0x1e55f4u: goto label_1e55f4;
        case 0x1e55f8u: goto label_1e55f8;
        case 0x1e55fcu: goto label_1e55fc;
        case 0x1e5600u: goto label_1e5600;
        case 0x1e5604u: goto label_1e5604;
        case 0x1e5608u: goto label_1e5608;
        case 0x1e560cu: goto label_1e560c;
        case 0x1e5610u: goto label_1e5610;
        case 0x1e5614u: goto label_1e5614;
        default: break;
    }

    ctx->pc = 0x1e5540u;

label_1e5540:
    // 0x1e5540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e5544:
    // 0x1e5544: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e5544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1e5548:
    // 0x1e5548: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e5548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e554c:
    // 0x1e554c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e554cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e5550:
    // 0x1e5550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5554:
    // 0x1e5554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e5558:
    // 0x1e5558: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e555c:
    // 0x1e555c: 0x2442c700  addiu       $v0, $v0, -0x3900
    ctx->pc = 0x1e555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952704));
label_1e5560:
    // 0x1e5560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5564:
    // 0x1e5564: 0x2463c728  addiu       $v1, $v1, -0x38D8
    ctx->pc = 0x1e5564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952744));
label_1e5568:
    // 0x1e5568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e556c:
    // 0x1e556c: 0x26301b70  addiu       $s0, $s1, 0x1B70
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 7024));
label_1e5570:
    // 0x1e5570: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e5570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5574:
    // 0x1e5574: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1e5574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_1e5578:
    // 0x1e5578: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e5578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e557c:
    // 0x1e557c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5580:
    // 0x1e5580: 0xc06e410  jal         func_1B9040
label_1e5584:
    if (ctx->pc == 0x1E5584u) {
        ctx->pc = 0x1E5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5580u;
        // 0x1e5584: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5588u;
        goto label_1e5588;
    }
    ctx->pc = 0x1E5580u;
    SET_GPR_U32(ctx, 31, 0x1E5588u);
    ctx->pc = 0x1E5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5580u;
    // 0x1e5584: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1E5580u, 0x1E5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5588u;
label_1e5588:
    // 0x1e5588: 0x26220bb0  addiu       $v0, $s1, 0xBB0
    ctx->pc = 0x1e5588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2992));
label_1e558c:
    // 0x1e558c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e5590:
    if (ctx->pc == 0x1E5590u) {
        ctx->pc = 0x1E5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E558Cu;
        // 0x1e5590: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5594u;
        goto label_1e5594;
    }
    ctx->pc = 0x1E558Cu;
    {
        const bool branch_taken_0x1e558c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E558Cu;
        // 0x1e5590: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e558c) {
            ctx->pc = 0x1E55C4u;
            goto label_1e55c4;
        }
    }
    ctx->pc = 0x1E5594u;
label_1e5594:
    // 0x1e5594: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_1e5598:
    if (ctx->pc == 0x1E5598u) {
        ctx->pc = 0x1E5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5594u;
        // 0x1e5598: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E559Cu;
        goto label_1e559c;
    }
    ctx->pc = 0x1E5594u;
    {
        const bool branch_taken_0x1e5594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5594u;
        // 0x1e5598: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5594) {
            ctx->pc = 0x1E55C4u;
            goto label_1e55c4;
        }
    }
    ctx->pc = 0x1E559Cu;
label_1e559c:
    // 0x1e559c: 0x2610fc10  addiu       $s0, $s0, -0x3F0
    ctx->pc = 0x1e559cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966288));
label_1e55a0:
    // 0x1e55a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e55a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e55a4:
    // 0x1e55a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e55a8:
    // 0x1e55a8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e55a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e55ac:
    // 0x1e55ac: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e55acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e55b0:
    // 0x1e55b0: 0x60f809  jalr        $v1
label_1e55b4:
    if (ctx->pc == 0x1E55B4u) {
        ctx->pc = 0x1E55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55B0u;
        // 0x1e55b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55B8u;
        goto label_1e55b8;
    }
    ctx->pc = 0x1E55B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E55B8u);
        ctx->pc = 0x1E55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55B0u;
        // 0x1e55b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E55B0u, 0x1E55B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E55B8u;
label_1e55b8:
    // 0x1e55b8: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_1e55bc:
    if (ctx->pc == 0x1E55BCu) {
        ctx->pc = 0x1E55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55B8u;
        // 0x1e55bc: 0x2610fc10  addiu       $s0, $s0, -0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55C0u;
        goto label_1e55c0;
    }
    ctx->pc = 0x1E55B8u;
    {
        const bool branch_taken_0x1e55b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55B8u;
        // 0x1e55bc: 0x2610fc10  addiu       $s0, $s0, -0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55b8) {
            ctx->pc = 0x1E55A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e55a0;
        }
    }
    ctx->pc = 0x1E55C0u;
label_1e55c0:
    // 0x1e55c0: 0x26240ab0  addiu       $a0, $s1, 0xAB0
    ctx->pc = 0x1e55c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
label_1e55c4:
    // 0x1e55c4: 0xc06870c  jal         func_1A1C30
label_1e55c8:
    if (ctx->pc == 0x1E55C8u) {
        ctx->pc = 0x1E55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55C4u;
        // 0x1e55c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55CCu;
        goto label_1e55cc;
    }
    ctx->pc = 0x1E55C4u;
    SET_GPR_U32(ctx, 31, 0x1E55CCu);
    ctx->pc = 0x1E55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55C4u;
    // 0x1e55c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E55C4u, 0x1E55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55CCu;
label_1e55cc:
    // 0x1e55cc: 0x262409b0  addiu       $a0, $s1, 0x9B0
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2480));
label_1e55d0:
    // 0x1e55d0: 0xc06870c  jal         func_1A1C30
label_1e55d4:
    if (ctx->pc == 0x1E55D4u) {
        ctx->pc = 0x1E55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55D0u;
        // 0x1e55d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55D8u;
        goto label_1e55d8;
    }
    ctx->pc = 0x1E55D0u;
    SET_GPR_U32(ctx, 31, 0x1E55D8u);
    ctx->pc = 0x1E55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55D0u;
    // 0x1e55d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E55D0u, 0x1E55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55D8u;
label_1e55d8:
    // 0x1e55d8: 0x262408b0  addiu       $a0, $s1, 0x8B0
    ctx->pc = 0x1e55d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2224));
label_1e55dc:
    // 0x1e55dc: 0xc06870c  jal         func_1A1C30
label_1e55e0:
    if (ctx->pc == 0x1E55E0u) {
        ctx->pc = 0x1E55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55DCu;
        // 0x1e55e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55E4u;
        goto label_1e55e4;
    }
    ctx->pc = 0x1E55DCu;
    SET_GPR_U32(ctx, 31, 0x1E55E4u);
    ctx->pc = 0x1E55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55DCu;
    // 0x1e55e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E55DCu, 0x1E55E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55E4u;
label_1e55e4:
    // 0x1e55e4: 0x262407b0  addiu       $a0, $s1, 0x7B0
    ctx->pc = 0x1e55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
label_1e55e8:
    // 0x1e55e8: 0xc06870c  jal         func_1A1C30
label_1e55ec:
    if (ctx->pc == 0x1E55ECu) {
        ctx->pc = 0x1E55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E8u;
        // 0x1e55ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55F0u;
        goto label_1e55f0;
    }
    ctx->pc = 0x1E55E8u;
    SET_GPR_U32(ctx, 31, 0x1E55F0u);
    ctx->pc = 0x1E55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55E8u;
    // 0x1e55ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E55E8u, 0x1E55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55F0u;
label_1e55f0:
    // 0x1e55f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e55f4:
    // 0x1e55f4: 0xc074636  jal         func_1D18D8
label_1e55f8:
    if (ctx->pc == 0x1E55F8u) {
        ctx->pc = 0x1E55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55F4u;
        // 0x1e55f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55FCu;
        goto label_1e55fc;
    }
    ctx->pc = 0x1E55F4u;
    SET_GPR_U32(ctx, 31, 0x1E55FCu);
    ctx->pc = 0x1E55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55F4u;
    // 0x1e55f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x1E55F4u, 0x1E55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55FCu;
label_1e55fc:
    // 0x1e55fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e55fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5600:
    // 0x1e5600: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e5600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5604:
    // 0x1e5604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5608:
    // 0x1e5608: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e5608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e560c:
    // 0x1e560c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5610:
    // 0x1e5610: 0x3e00008  jr          $ra
label_1e5614:
    if (ctx->pc == 0x1E5614u) {
        ctx->pc = 0x1E5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5610u;
        // 0x1e5614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5618u;
        goto label_fallthrough_0x1e5610;
    }
    ctx->pc = 0x1E5610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5610u;
        // 0x1e5614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5610:
    ctx->pc = 0x1E5618u;
}
