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

// Function: sub_00238540
// Address: 0x238540 - 0x2385f8
void sub_00238540_0x238540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238540_0x238540");
#endif

    switch (ctx->pc) {
        case 0x238540u: goto label_238540;
        case 0x238544u: goto label_238544;
        case 0x238548u: goto label_238548;
        case 0x23854cu: goto label_23854c;
        case 0x238550u: goto label_238550;
        case 0x238554u: goto label_238554;
        case 0x238558u: goto label_238558;
        case 0x23855cu: goto label_23855c;
        case 0x238560u: goto label_238560;
        case 0x238564u: goto label_238564;
        case 0x238568u: goto label_238568;
        case 0x23856cu: goto label_23856c;
        case 0x238570u: goto label_238570;
        case 0x238574u: goto label_238574;
        case 0x238578u: goto label_238578;
        case 0x23857cu: goto label_23857c;
        case 0x238580u: goto label_238580;
        case 0x238584u: goto label_238584;
        case 0x238588u: goto label_238588;
        case 0x23858cu: goto label_23858c;
        case 0x238590u: goto label_238590;
        case 0x238594u: goto label_238594;
        case 0x238598u: goto label_238598;
        case 0x23859cu: goto label_23859c;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385a4u: goto label_2385a4;
        case 0x2385a8u: goto label_2385a8;
        case 0x2385acu: goto label_2385ac;
        case 0x2385b0u: goto label_2385b0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385b8u: goto label_2385b8;
        case 0x2385bcu: goto label_2385bc;
        case 0x2385c0u: goto label_2385c0;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385ccu: goto label_2385cc;
        case 0x2385d0u: goto label_2385d0;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385d8u: goto label_2385d8;
        case 0x2385dcu: goto label_2385dc;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385e4u: goto label_2385e4;
        case 0x2385e8u: goto label_2385e8;
        case 0x2385ecu: goto label_2385ec;
        case 0x2385f0u: goto label_2385f0;
        case 0x2385f4u: goto label_2385f4;
        default: break;
    }

    ctx->pc = 0x238540u;

label_238540:
    // 0x238540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_238544:
    // 0x238544: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_238548:
    // 0x238548: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_23854c:
    // 0x23854c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23854cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238550:
    // 0x238550: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_238554:
    // 0x238554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238558:
    // 0x238558: 0xc0e4060  jal         func_390180
label_23855c:
    if (ctx->pc == 0x23855Cu) {
        ctx->pc = 0x23855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238558u;
        // 0x23855c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238560u;
        goto label_238560;
    }
    ctx->pc = 0x238558u;
    SET_GPR_U32(ctx, 31, 0x238560u);
    ctx->pc = 0x23855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238558u;
    // 0x23855c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238558u, 0x238560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238560u;
label_238560:
    // 0x238560: 0xc08a61a  jal         func_229868
label_238564:
    if (ctx->pc == 0x238564u) {
        ctx->pc = 0x238564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238560u;
        // 0x238564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238568u;
        goto label_238568;
    }
    ctx->pc = 0x238560u;
    SET_GPR_U32(ctx, 31, 0x238568u);
    ctx->pc = 0x238564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238560u;
    // 0x238564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238560u, 0x238568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238568u;
label_238568:
    // 0x238568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23856c:
    // 0x23856c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_238570:
    if (ctx->pc == 0x238570u) {
        ctx->pc = 0x238570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23856Cu;
        // 0x238570: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238574u;
        goto label_238574;
    }
    ctx->pc = 0x23856Cu;
    {
        const bool branch_taken_0x23856c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x238570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23856Cu;
        // 0x238570: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23856c) {
            ctx->pc = 0x2385E0u;
            goto label_2385e0;
        }
    }
    ctx->pc = 0x238574u;
label_238574:
    // 0x238574: 0xc089bfc  jal         func_226FF0
label_238578:
    if (ctx->pc == 0x238578u) {
        ctx->pc = 0x238578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238574u;
        // 0x238578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23857Cu;
        goto label_23857c;
    }
    ctx->pc = 0x238574u;
    SET_GPR_U32(ctx, 31, 0x23857Cu);
    ctx->pc = 0x238578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238574u;
    // 0x238578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x238574u, 0x23857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23857Cu;
label_23857c:
    // 0x23857c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_238580:
    if (ctx->pc == 0x238580u) {
        ctx->pc = 0x238580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23857Cu;
        // 0x238580: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238584u;
        goto label_238584;
    }
    ctx->pc = 0x23857Cu;
    {
        const bool branch_taken_0x23857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23857Cu;
        // 0x238580: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23857c) {
            ctx->pc = 0x2385E0u;
            goto label_2385e0;
        }
    }
    ctx->pc = 0x238584u;
label_238584:
    // 0x238584: 0xc08a102  jal         func_228408
label_238588:
    if (ctx->pc == 0x238588u) {
        ctx->pc = 0x238588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238584u;
        // 0x238588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23858Cu;
        goto label_23858c;
    }
    ctx->pc = 0x238584u;
    SET_GPR_U32(ctx, 31, 0x23858Cu);
    ctx->pc = 0x238588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238584u;
    // 0x238588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228408u, 0x238584u, 0x23858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23858Cu;
label_23858c:
    // 0x23858c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_238590:
    if (ctx->pc == 0x238590u) {
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238594u;
        goto label_238594;
    }
    ctx->pc = 0x23858Cu;
    {
        const bool branch_taken_0x23858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23858c) {
            ctx->pc = 0x2385E0u;
            goto label_2385e0;
        }
    }
    ctx->pc = 0x238594u;
label_238594:
    // 0x238594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238598:
    // 0x238598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23859c:
    // 0x23859c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2385a0:
    // 0x2385a0: 0xc0930a0  jal         func_24C280
label_2385a4:
    if (ctx->pc == 0x2385A4u) {
        ctx->pc = 0x2385A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385A0u;
        // 0x2385a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385A8u;
        goto label_2385a8;
    }
    ctx->pc = 0x2385A0u;
    SET_GPR_U32(ctx, 31, 0x2385A8u);
    ctx->pc = 0x2385A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385A0u;
    // 0x2385a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x2385A0u, 0x2385A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385A8u;
label_2385a8:
    // 0x2385a8: 0xc0e57ce  jal         func_395F38
label_2385ac:
    if (ctx->pc == 0x2385ACu) {
        ctx->pc = 0x2385ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385A8u;
        // 0x2385ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385B0u;
        goto label_2385b0;
    }
    ctx->pc = 0x2385A8u;
    SET_GPR_U32(ctx, 31, 0x2385B0u);
    ctx->pc = 0x2385ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385A8u;
    // 0x2385ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2385A8u, 0x2385B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385B0u;
label_2385b0:
    // 0x2385b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2385b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2385b4:
    // 0x2385b4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2385b8:
    if (ctx->pc == 0x2385B8u) {
        ctx->pc = 0x2385B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385B4u;
        // 0x2385b8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385BCu;
        goto label_2385bc;
    }
    ctx->pc = 0x2385B4u;
    {
        const bool branch_taken_0x2385b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385B4u;
        // 0x2385b8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385b4) {
            ctx->pc = 0x2385E0u;
            goto label_2385e0;
        }
    }
    ctx->pc = 0x2385BCu;
label_2385bc:
    // 0x2385bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2385bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2385c0:
    // 0x2385c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2385c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2385c4:
    // 0x2385c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2385c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2385c8:
    // 0x2385c8: 0x40f809  jalr        $v0
label_2385cc:
    if (ctx->pc == 0x2385CCu) {
        ctx->pc = 0x2385CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385C8u;
        // 0x2385cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385D0u;
        goto label_2385d0;
    }
    ctx->pc = 0x2385C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2385D0u);
        ctx->pc = 0x2385CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385C8u;
        // 0x2385cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2385C8u, 0x2385D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2385D0u;
label_2385d0:
    // 0x2385d0: 0xc0e401a  jal         func_390068
label_2385d4:
    if (ctx->pc == 0x2385D4u) {
        ctx->pc = 0x2385D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D0u;
        // 0x2385d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385D8u;
        goto label_2385d8;
    }
    ctx->pc = 0x2385D0u;
    SET_GPR_U32(ctx, 31, 0x2385D8u);
    ctx->pc = 0x2385D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385D0u;
    // 0x2385d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390068u, 0x2385D0u, 0x2385D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385D8u;
label_2385d8:
    // 0x2385d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2385dc:
    if (ctx->pc == 0x2385DCu) {
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D8u;
        // 0x2385dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385E0u;
        goto label_2385e0;
    }
    ctx->pc = 0x2385D8u;
    {
        const bool branch_taken_0x2385d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D8u;
        // 0x2385dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d8) {
            ctx->pc = 0x2385E8u;
            goto label_2385e8;
        }
    }
    ctx->pc = 0x2385E0u;
label_2385e0:
    // 0x2385e0: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2385e4:
    // 0x2385e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2385e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2385e8:
    // 0x2385e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2385e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2385ec:
    // 0x2385ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2385ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2385f0:
    // 0x2385f0: 0x3e00008  jr          $ra
label_2385f4:
    if (ctx->pc == 0x2385F4u) {
        ctx->pc = 0x2385F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385F0u;
        // 0x2385f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385F8u;
        goto label_fallthrough_0x2385f0;
    }
    ctx->pc = 0x2385F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2385F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385F0u;
        // 0x2385f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2385F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2385f0:
    ctx->pc = 0x2385F8u;
}
