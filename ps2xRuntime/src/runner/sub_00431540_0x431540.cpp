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

// Function: sub_00431540
// Address: 0x431540 - 0x4315f8
void sub_00431540_0x431540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431540_0x431540");
#endif

    switch (ctx->pc) {
        case 0x431540u: goto label_431540;
        case 0x431544u: goto label_431544;
        case 0x431548u: goto label_431548;
        case 0x43154cu: goto label_43154c;
        case 0x431550u: goto label_431550;
        case 0x431554u: goto label_431554;
        case 0x431558u: goto label_431558;
        case 0x43155cu: goto label_43155c;
        case 0x431560u: goto label_431560;
        case 0x431564u: goto label_431564;
        case 0x431568u: goto label_431568;
        case 0x43156cu: goto label_43156c;
        case 0x431570u: goto label_431570;
        case 0x431574u: goto label_431574;
        case 0x431578u: goto label_431578;
        case 0x43157cu: goto label_43157c;
        case 0x431580u: goto label_431580;
        case 0x431584u: goto label_431584;
        case 0x431588u: goto label_431588;
        case 0x43158cu: goto label_43158c;
        case 0x431590u: goto label_431590;
        case 0x431594u: goto label_431594;
        case 0x431598u: goto label_431598;
        case 0x43159cu: goto label_43159c;
        case 0x4315a0u: goto label_4315a0;
        case 0x4315a4u: goto label_4315a4;
        case 0x4315a8u: goto label_4315a8;
        case 0x4315acu: goto label_4315ac;
        case 0x4315b0u: goto label_4315b0;
        case 0x4315b4u: goto label_4315b4;
        case 0x4315b8u: goto label_4315b8;
        case 0x4315bcu: goto label_4315bc;
        case 0x4315c0u: goto label_4315c0;
        case 0x4315c4u: goto label_4315c4;
        case 0x4315c8u: goto label_4315c8;
        case 0x4315ccu: goto label_4315cc;
        case 0x4315d0u: goto label_4315d0;
        case 0x4315d4u: goto label_4315d4;
        case 0x4315d8u: goto label_4315d8;
        case 0x4315dcu: goto label_4315dc;
        case 0x4315e0u: goto label_4315e0;
        case 0x4315e4u: goto label_4315e4;
        case 0x4315e8u: goto label_4315e8;
        case 0x4315ecu: goto label_4315ec;
        case 0x4315f0u: goto label_4315f0;
        case 0x4315f4u: goto label_4315f4;
        default: break;
    }

    ctx->pc = 0x431540u;

label_431540:
    // 0x431540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x431540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_431544:
    // 0x431544: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x431544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_431548:
    // 0x431548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43154c:
    // 0x43154c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43154cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431550:
    // 0x431550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x431550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_431554:
    // 0x431554: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_431558:
    if (ctx->pc == 0x431558u) {
        ctx->pc = 0x431558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431554u;
        // 0x431558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43155Cu;
        goto label_43155c;
    }
    ctx->pc = 0x431554u;
    {
        const bool branch_taken_0x431554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431554u;
        // 0x431558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431554) {
            ctx->pc = 0x4315E0u;
            goto label_4315e0;
        }
    }
    ctx->pc = 0x43155Cu;
label_43155c:
    // 0x43155c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x43155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_431560:
    // 0x431560: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_431564:
    if (ctx->pc == 0x431564u) {
        ctx->pc = 0x431564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431560u;
        // 0x431564: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431568u;
        goto label_431568;
    }
    ctx->pc = 0x431560u;
    {
        const bool branch_taken_0x431560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431560) {
            ctx->pc = 0x431564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431560u;
            // 0x431564: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431578u;
            goto label_431578;
        }
    }
    ctx->pc = 0x431568u;
label_431568:
    // 0x431568: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x431568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_43156c:
    // 0x43156c: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x43156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
label_431570:
    // 0x431570: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x431570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_431574:
    // 0x431574: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x431574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_431578:
    // 0x431578: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x431578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_43157c:
    // 0x43157c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_431580:
    if (ctx->pc == 0x431580u) {
        ctx->pc = 0x431580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43157Cu;
        // 0x431580: 0x8602000c  lh          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431584u;
        goto label_431584;
    }
    ctx->pc = 0x43157Cu;
    {
        const bool branch_taken_0x43157c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43157c) {
            ctx->pc = 0x431580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43157Cu;
            // 0x431580: 0x8602000c  lh          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431590u;
            goto label_431590;
        }
    }
    ctx->pc = 0x431584u;
label_431584:
    // 0x431584: 0xc10c63e  jal         func_4318F8
label_431588:
    if (ctx->pc == 0x431588u) {
        ctx->pc = 0x43158Cu;
        goto label_43158c;
    }
    ctx->pc = 0x431584u;
    SET_GPR_U32(ctx, 31, 0x43158Cu);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x431584u, 0x43158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43158Cu;
label_43158c:
    // 0x43158c: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x43158cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431590:
    // 0x431590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_431594:
    if (ctx->pc == 0x431594u) {
        ctx->pc = 0x431594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431590u;
        // 0x431594: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431598u;
        goto label_431598;
    }
    ctx->pc = 0x431590u;
    {
        const bool branch_taken_0x431590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431590u;
        // 0x431594: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431590) {
            ctx->pc = 0x4315A0u;
            goto label_4315a0;
        }
    }
    ctx->pc = 0x431598u;
label_431598:
    // 0x431598: 0x10000011  b           . + 4 + (0x11 << 2)
label_43159c:
    if (ctx->pc == 0x43159Cu) {
        ctx->pc = 0x43159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431598u;
        // 0x43159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315A0u;
        goto label_4315a0;
    }
    ctx->pc = 0x431598u;
    {
        const bool branch_taken_0x431598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431598u;
        // 0x43159c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431598) {
            ctx->pc = 0x4315E0u;
            goto label_4315e0;
        }
    }
    ctx->pc = 0x4315A0u;
label_4315a0:
    // 0x4315a0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x4315a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4315a4:
    // 0x4315a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4315a8:
    if (ctx->pc == 0x4315A8u) {
        ctx->pc = 0x4315A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315A4u;
        // 0x4315a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315ACu;
        goto label_4315ac;
    }
    ctx->pc = 0x4315A4u;
    {
        const bool branch_taken_0x4315a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4315A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315A4u;
        // 0x4315a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4315a4) {
            ctx->pc = 0x4315B8u;
            goto label_4315b8;
        }
    }
    ctx->pc = 0x4315ACu;
label_4315ac:
    // 0x4315ac: 0xc10c57e  jal         func_4315F8
label_4315b0:
    if (ctx->pc == 0x4315B0u) {
        ctx->pc = 0x4315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315ACu;
        // 0x4315b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315B4u;
        goto label_4315b4;
    }
    ctx->pc = 0x4315ACu;
    SET_GPR_U32(ctx, 31, 0x4315B4u);
    ctx->pc = 0x4315B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4315ACu;
    // 0x4315b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x4315ACu, 0x4315B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4315B4u;
label_4315b4:
    // 0x4315b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4315b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4315b8:
    // 0x4315b8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4315b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4315bc:
    // 0x4315bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4315c0:
    if (ctx->pc == 0x4315C0u) {
        ctx->pc = 0x4315C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315BCu;
        // 0x4315c0: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315C4u;
        goto label_4315c4;
    }
    ctx->pc = 0x4315BCu;
    {
        const bool branch_taken_0x4315bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4315bc) {
            ctx->pc = 0x4315C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4315BCu;
            // 0x4315c0: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4315DCu;
            goto label_4315dc;
        }
    }
    ctx->pc = 0x4315C4u;
label_4315c4:
    // 0x4315c4: 0x40f809  jalr        $v0
label_4315c8:
    if (ctx->pc == 0x4315C8u) {
        ctx->pc = 0x4315C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315C4u;
        // 0x4315c8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315CCu;
        goto label_4315cc;
    }
    ctx->pc = 0x4315C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4315CCu);
        ctx->pc = 0x4315C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315C4u;
        // 0x4315c8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4315C4u, 0x4315CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4315CCu;
label_4315cc:
    // 0x4315cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4315ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4315d0:
    // 0x4315d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4315d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4315d4:
    // 0x4315d4: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x4315d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_4315d8:
    // 0x4315d8: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x4315d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_4315dc:
    // 0x4315dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4315dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4315e0:
    // 0x4315e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4315e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4315e4:
    // 0x4315e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4315e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4315e8:
    // 0x4315e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4315e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4315ec:
    // 0x4315ec: 0x3e00008  jr          $ra
label_4315f0:
    if (ctx->pc == 0x4315F0u) {
        ctx->pc = 0x4315F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315ECu;
        // 0x4315f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315F4u;
        goto label_4315f4;
    }
    ctx->pc = 0x4315ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4315F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315ECu;
        // 0x4315f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4315ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4315F4u;
label_4315f4:
    // 0x4315f4: 0x0  nop
    ctx->pc = 0x4315f4u;
    // NOP
    ctx->pc = 0x4315f8u;
}
