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

// Function: sub_004E8528
// Address: 0x4e8528 - 0x4e85a8
void sub_004E8528_0x4e8528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8528_0x4e8528");
#endif

    switch (ctx->pc) {
        case 0x4e8528u: goto label_4e8528;
        case 0x4e852cu: goto label_4e852c;
        case 0x4e8530u: goto label_4e8530;
        case 0x4e8534u: goto label_4e8534;
        case 0x4e8538u: goto label_4e8538;
        case 0x4e853cu: goto label_4e853c;
        case 0x4e8540u: goto label_4e8540;
        case 0x4e8544u: goto label_4e8544;
        case 0x4e8548u: goto label_4e8548;
        case 0x4e854cu: goto label_4e854c;
        case 0x4e8550u: goto label_4e8550;
        case 0x4e8554u: goto label_4e8554;
        case 0x4e8558u: goto label_4e8558;
        case 0x4e855cu: goto label_4e855c;
        case 0x4e8560u: goto label_4e8560;
        case 0x4e8564u: goto label_4e8564;
        case 0x4e8568u: goto label_4e8568;
        case 0x4e856cu: goto label_4e856c;
        case 0x4e8570u: goto label_4e8570;
        case 0x4e8574u: goto label_4e8574;
        case 0x4e8578u: goto label_4e8578;
        case 0x4e857cu: goto label_4e857c;
        case 0x4e8580u: goto label_4e8580;
        case 0x4e8584u: goto label_4e8584;
        case 0x4e8588u: goto label_4e8588;
        case 0x4e858cu: goto label_4e858c;
        case 0x4e8590u: goto label_4e8590;
        case 0x4e8594u: goto label_4e8594;
        case 0x4e8598u: goto label_4e8598;
        case 0x4e859cu: goto label_4e859c;
        case 0x4e85a0u: goto label_4e85a0;
        case 0x4e85a4u: goto label_4e85a4;
        default: break;
    }

    ctx->pc = 0x4e8528u;

label_4e8528:
    // 0x4e8528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e8528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e852c:
    // 0x4e852c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e8530:
    // 0x4e8530: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e8530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e8534:
    // 0x4e8534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e8534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8538:
    // 0x4e8538: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e8538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e853c:
    // 0x4e853c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e853cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8540:
    // 0x4e8540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e8544:
    // 0x4e8544: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e8548:
    if (ctx->pc == 0x4E8548u) {
        ctx->pc = 0x4E8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8544u;
        // 0x4e8548: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E854Cu;
        goto label_4e854c;
    }
    ctx->pc = 0x4E8544u;
    {
        const bool branch_taken_0x4e8544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8544u;
        // 0x4e8548: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8544) {
            ctx->pc = 0x4E858Cu;
            goto label_4e858c;
        }
    }
    ctx->pc = 0x4E854Cu;
label_4e854c:
    // 0x4e854c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8550:
    // 0x4e8550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e8550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e8554:
    // 0x4e8554: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e8554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e8558:
    // 0x4e8558: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e855c:
    // 0x4e855c: 0x60f809  jalr        $v1
label_4e8560:
    if (ctx->pc == 0x4E8560u) {
        ctx->pc = 0x4E8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E855Cu;
        // 0x4e8560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8564u;
        goto label_4e8564;
    }
    ctx->pc = 0x4E855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E8564u);
        ctx->pc = 0x4E8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E855Cu;
        // 0x4e8560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E855Cu, 0x4E8564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8564u;
label_4e8564:
    // 0x4e8564: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e8564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e8568:
    // 0x4e8568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e8568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e856c:
    // 0x4e856c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e856cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e8570:
    // 0x4e8570: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e8574:
    // 0x4e8574: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e8574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8578:
    // 0x4e8578: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e857c:
    // 0x4e857c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e857cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8580:
    // 0x4e8580: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e8584:
    // 0x4e8584: 0x60f809  jalr        $v1
label_4e8588:
    if (ctx->pc == 0x4E8588u) {
        ctx->pc = 0x4E8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8584u;
        // 0x4e8588: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E858Cu;
        goto label_4e858c;
    }
    ctx->pc = 0x4E8584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E858Cu);
        ctx->pc = 0x4E8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8584u;
        // 0x4e8588: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8584u, 0x4E858Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E858Cu;
label_4e858c:
    // 0x4e858c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e858cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8590:
    // 0x4e8590: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e8590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e8594:
    // 0x4e8594: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e8594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8598:
    // 0x4e8598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e859c:
    // 0x4e859c: 0x3e00008  jr          $ra
label_4e85a0:
    if (ctx->pc == 0x4E85A0u) {
        ctx->pc = 0x4E85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E859Cu;
        // 0x4e85a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E85A4u;
        goto label_4e85a4;
    }
    ctx->pc = 0x4E859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E859Cu;
        // 0x4e85a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E85A4u;
label_4e85a4:
    // 0x4e85a4: 0x0  nop
    ctx->pc = 0x4e85a4u;
    // NOP
    ctx->pc = 0x4e85a8u;
}
