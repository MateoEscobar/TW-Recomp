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

// Function: sub_001E4540
// Address: 0x1e4540 - 0x1e45f8
void sub_001E4540_0x1e4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4540_0x1e4540");
#endif

    switch (ctx->pc) {
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4544u: goto label_1e4544;
        case 0x1e4548u: goto label_1e4548;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e4550u: goto label_1e4550;
        case 0x1e4554u: goto label_1e4554;
        case 0x1e4558u: goto label_1e4558;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e4574u: goto label_1e4574;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4580u: goto label_1e4580;
        case 0x1e4584u: goto label_1e4584;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4590u: goto label_1e4590;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e4598u: goto label_1e4598;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45a4u: goto label_1e45a4;
        case 0x1e45a8u: goto label_1e45a8;
        case 0x1e45acu: goto label_1e45ac;
        case 0x1e45b0u: goto label_1e45b0;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45b8u: goto label_1e45b8;
        case 0x1e45bcu: goto label_1e45bc;
        case 0x1e45c0u: goto label_1e45c0;
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e45ccu: goto label_1e45cc;
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45d4u: goto label_1e45d4;
        case 0x1e45d8u: goto label_1e45d8;
        case 0x1e45dcu: goto label_1e45dc;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45e8u: goto label_1e45e8;
        case 0x1e45ecu: goto label_1e45ec;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45f4u: goto label_1e45f4;
        default: break;
    }

    ctx->pc = 0x1e4540u;

label_1e4540:
    // 0x1e4540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e4544:
    // 0x1e4544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4548:
    // 0x1e4548: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e4548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e454c:
    // 0x1e454c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e4550:
    // 0x1e4550: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e4554:
    // 0x1e4554: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e4554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e4558:
    // 0x1e4558: 0x26500140  addiu       $s0, $s2, 0x140
    ctx->pc = 0x1e4558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1e455c:
    // 0x1e455c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4560:
    // 0x1e4560: 0xc078d76  jal         func_1E35D8
label_1e4564:
    if (ctx->pc == 0x1E4564u) {
        ctx->pc = 0x1E4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4560u;
        // 0x1e4564: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4568u;
        goto label_1e4568;
    }
    ctx->pc = 0x1E4560u;
    SET_GPR_U32(ctx, 31, 0x1E4568u);
    ctx->pc = 0x1E4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4560u;
    // 0x1e4564: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E35D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E35D8u, 0x1E4560u, 0x1E4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4568u;
label_1e4568:
    // 0x1e4568: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e4568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e456c:
    // 0x1e456c: 0xc0687c4  jal         func_1A1F10
label_1e4570:
    if (ctx->pc == 0x1E4570u) {
        ctx->pc = 0x1E4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E456Cu;
        // 0x1e4570: 0x26441c60  addiu       $a0, $s2, 0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4574u;
        goto label_1e4574;
    }
    ctx->pc = 0x1E456Cu;
    SET_GPR_U32(ctx, 31, 0x1E4574u);
    ctx->pc = 0x1E4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E456Cu;
    // 0x1e4570: 0x26441c60  addiu       $a0, $s2, 0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E456Cu, 0x1E4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4574u;
label_1e4574:
    // 0x1e4574: 0x0  nop
    ctx->pc = 0x1e4574u;
    // NOP
label_1e4578:
    // 0x1e4578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e457c:
    // 0x1e457c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e4580:
    // 0x1e4580: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1e4584:
    // 0x1e4584: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e4584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e4588:
    // 0x1e4588: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e4588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e458c:
    // 0x1e458c: 0x40f809  jalr        $v0
label_1e4590:
    if (ctx->pc == 0x1E4590u) {
        ctx->pc = 0x1E4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E458Cu;
        // 0x1e4590: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4594u;
        goto label_1e4594;
    }
    ctx->pc = 0x1E458Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4594u);
        ctx->pc = 0x1E4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E458Cu;
        // 0x1e4590: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E458Cu, 0x1E4594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4594u;
label_1e4594:
    // 0x1e4594: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1e4594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e4598:
    // 0x1e4598: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1e459c:
    if (ctx->pc == 0x1E459Cu) {
        ctx->pc = 0x1E459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4598u;
        // 0x1e459c: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45A0u;
        goto label_1e45a0;
    }
    ctx->pc = 0x1E4598u;
    {
        const bool branch_taken_0x1e4598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4598u;
        // 0x1e459c: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4598) {
            ctx->pc = 0x1E4578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4578;
        }
    }
    ctx->pc = 0x1E45A0u;
label_1e45a0:
    // 0x1e45a0: 0x26500ed0  addiu       $s0, $s2, 0xED0
    ctx->pc = 0x1e45a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
label_1e45a4:
    // 0x1e45a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e45a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e45a8:
    // 0x1e45a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e45a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e45ac:
    // 0x1e45ac: 0x0  nop
    ctx->pc = 0x1e45acu;
    // NOP
label_1e45b0:
    // 0x1e45b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e45b4:
    // 0x1e45b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e45b8:
    // 0x1e45b8: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x1e45b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1e45bc:
    // 0x1e45bc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1e45bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1e45c0:
    // 0x1e45c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1e45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1e45c4:
    // 0x1e45c4: 0x40f809  jalr        $v0
label_1e45c8:
    if (ctx->pc == 0x1E45C8u) {
        ctx->pc = 0x1E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C4u;
        // 0x1e45c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45CCu;
        goto label_1e45cc;
    }
    ctx->pc = 0x1E45C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E45CCu);
        ctx->pc = 0x1E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C4u;
        // 0x1e45c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E45C4u, 0x1E45CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E45CCu;
label_1e45cc:
    // 0x1e45cc: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x1e45ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e45d0:
    // 0x1e45d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1e45d4:
    if (ctx->pc == 0x1E45D4u) {
        ctx->pc = 0x1E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D0u;
        // 0x1e45d4: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45D8u;
        goto label_1e45d8;
    }
    ctx->pc = 0x1E45D0u;
    {
        const bool branch_taken_0x1e45d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D0u;
        // 0x1e45d4: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45d0) {
            ctx->pc = 0x1E45B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45b0;
        }
    }
    ctx->pc = 0x1E45D8u;
label_1e45d8:
    // 0x1e45d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e45d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e45dc:
    // 0x1e45dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e45dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e45e0:
    // 0x1e45e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e45e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e45e4:
    // 0x1e45e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e45e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e45e8:
    // 0x1e45e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e45e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e45ec:
    // 0x1e45ec: 0x3e00008  jr          $ra
label_1e45f0:
    if (ctx->pc == 0x1E45F0u) {
        ctx->pc = 0x1E45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ECu;
        // 0x1e45f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45F4u;
        goto label_1e45f4;
    }
    ctx->pc = 0x1E45ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ECu;
        // 0x1e45f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E45ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E45F4u;
label_1e45f4:
    // 0x1e45f4: 0x0  nop
    ctx->pc = 0x1e45f4u;
    // NOP
    ctx->pc = 0x1e45f8u;
}
