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

// Function: sub_003E8518
// Address: 0x3e8518 - 0x3e85b8
void sub_003E8518_0x3e8518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8518_0x3e8518");
#endif

    switch (ctx->pc) {
        case 0x3e8518u: goto label_3e8518;
        case 0x3e851cu: goto label_3e851c;
        case 0x3e8520u: goto label_3e8520;
        case 0x3e8524u: goto label_3e8524;
        case 0x3e8528u: goto label_3e8528;
        case 0x3e852cu: goto label_3e852c;
        case 0x3e8530u: goto label_3e8530;
        case 0x3e8534u: goto label_3e8534;
        case 0x3e8538u: goto label_3e8538;
        case 0x3e853cu: goto label_3e853c;
        case 0x3e8540u: goto label_3e8540;
        case 0x3e8544u: goto label_3e8544;
        case 0x3e8548u: goto label_3e8548;
        case 0x3e854cu: goto label_3e854c;
        case 0x3e8550u: goto label_3e8550;
        case 0x3e8554u: goto label_3e8554;
        case 0x3e8558u: goto label_3e8558;
        case 0x3e855cu: goto label_3e855c;
        case 0x3e8560u: goto label_3e8560;
        case 0x3e8564u: goto label_3e8564;
        case 0x3e8568u: goto label_3e8568;
        case 0x3e856cu: goto label_3e856c;
        case 0x3e8570u: goto label_3e8570;
        case 0x3e8574u: goto label_3e8574;
        case 0x3e8578u: goto label_3e8578;
        case 0x3e857cu: goto label_3e857c;
        case 0x3e8580u: goto label_3e8580;
        case 0x3e8584u: goto label_3e8584;
        case 0x3e8588u: goto label_3e8588;
        case 0x3e858cu: goto label_3e858c;
        case 0x3e8590u: goto label_3e8590;
        case 0x3e8594u: goto label_3e8594;
        case 0x3e8598u: goto label_3e8598;
        case 0x3e859cu: goto label_3e859c;
        case 0x3e85a0u: goto label_3e85a0;
        case 0x3e85a4u: goto label_3e85a4;
        case 0x3e85a8u: goto label_3e85a8;
        case 0x3e85acu: goto label_3e85ac;
        case 0x3e85b0u: goto label_3e85b0;
        case 0x3e85b4u: goto label_3e85b4;
        default: break;
    }

    ctx->pc = 0x3e8518u;

label_3e8518:
    // 0x3e8518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e851c:
    // 0x3e851c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e8520:
    // 0x3e8520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e8524:
    // 0x3e8524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8528:
    // 0x3e8528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e852c:
    // 0x3e852c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e852cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8530:
    // 0x3e8530: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8534:
    // 0x3e8534: 0x40f809  jalr        $v0
label_3e8538:
    if (ctx->pc == 0x3E8538u) {
        ctx->pc = 0x3E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8534u;
        // 0x3e8538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E853Cu;
        goto label_3e853c;
    }
    ctx->pc = 0x3E8534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E853Cu);
        ctx->pc = 0x3E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8534u;
        // 0x3e8538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8534u, 0x3E853Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E853Cu;
label_3e853c:
    // 0x3e853c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8540:
    // 0x3e8540: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3e8544:
    // 0x3e8544: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3e8548:
    if (ctx->pc == 0x3E8548u) {
        ctx->pc = 0x3E8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8544u;
        // 0x3e8548: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E854Cu;
        goto label_3e854c;
    }
    ctx->pc = 0x3E8544u;
    {
        const bool branch_taken_0x3e8544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8544) {
            ctx->pc = 0x3E8548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8544u;
            // 0x3e8548: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8554u;
            goto label_3e8554;
        }
    }
    ctx->pc = 0x3E854Cu;
label_3e854c:
    // 0x3e854c: 0x10000015  b           . + 4 + (0x15 << 2)
label_3e8550:
    if (ctx->pc == 0x3E8550u) {
        ctx->pc = 0x3E8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E854Cu;
        // 0x3e8550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8554u;
        goto label_3e8554;
    }
    ctx->pc = 0x3E854Cu;
    {
        const bool branch_taken_0x3e854c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E854Cu;
        // 0x3e8550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e854c) {
            ctx->pc = 0x3E85A4u;
            goto label_3e85a4;
        }
    }
    ctx->pc = 0x3E8554u;
label_3e8554:
    // 0x3e8554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e8554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e8558:
    // 0x3e8558: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3e855c:
    if (ctx->pc == 0x3E855Cu) {
        ctx->pc = 0x3E855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8558u;
        // 0x3e855c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8560u;
        goto label_3e8560;
    }
    ctx->pc = 0x3E8558u;
    {
        const bool branch_taken_0x3e8558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8558) {
            ctx->pc = 0x3E855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8558u;
            // 0x3e855c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8570u;
            goto label_3e8570;
        }
    }
    ctx->pc = 0x3E8560u;
label_3e8560:
    // 0x3e8560: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3e8560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3e8564:
    // 0x3e8564: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3e8564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3e8568:
    // 0x3e8568: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e8568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e856c:
    // 0x3e856c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8570:
    // 0x3e8570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e8570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e8574:
    // 0x3e8574: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e8578:
    if (ctx->pc == 0x3E8578u) {
        ctx->pc = 0x3E8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8574u;
        // 0x3e8578: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E857Cu;
        goto label_3e857c;
    }
    ctx->pc = 0x3E8574u;
    {
        const bool branch_taken_0x3e8574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8574) {
            ctx->pc = 0x3E8578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8574u;
            // 0x3e8578: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8588u;
            goto label_3e8588;
        }
    }
    ctx->pc = 0x3E857Cu;
label_3e857c:
    // 0x3e857c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3e857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3e8580:
    // 0x3e8580: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e8580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e8584:
    // 0x3e8584: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e8584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8588:
    // 0x3e8588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e8588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e858c:
    // 0x3e858c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3e8590:
    if (ctx->pc == 0x3E8590u) {
        ctx->pc = 0x3E8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E858Cu;
        // 0x3e8590: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8594u;
        goto label_3e8594;
    }
    ctx->pc = 0x3E858Cu;
    {
        const bool branch_taken_0x3e858c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e858c) {
            ctx->pc = 0x3E8590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E858Cu;
            // 0x3e8590: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8594u;
            goto label_3e8594;
        }
    }
    ctx->pc = 0x3E8594u;
label_3e8594:
    // 0x3e8594: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8598:
    // 0x3e8598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e8598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e859c:
    // 0x3e859c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e85a0:
    // 0x3e85a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3e85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3e85a4:
    // 0x3e85a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e85a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e85a8:
    // 0x3e85a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e85a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e85ac:
    // 0x3e85ac: 0x3e00008  jr          $ra
label_3e85b0:
    if (ctx->pc == 0x3E85B0u) {
        ctx->pc = 0x3E85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85ACu;
        // 0x3e85b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E85B4u;
        goto label_3e85b4;
    }
    ctx->pc = 0x3E85ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85ACu;
        // 0x3e85b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E85ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E85B4u;
label_3e85b4:
    // 0x3e85b4: 0x0  nop
    ctx->pc = 0x3e85b4u;
    // NOP
    ctx->pc = 0x3e85b8u;
}
