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

// Function: sub_002DB508
// Address: 0x2db508 - 0x2db5a0
void sub_002DB508_0x2db508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB508_0x2db508");
#endif

    switch (ctx->pc) {
        case 0x2db508u: goto label_2db508;
        case 0x2db50cu: goto label_2db50c;
        case 0x2db510u: goto label_2db510;
        case 0x2db514u: goto label_2db514;
        case 0x2db518u: goto label_2db518;
        case 0x2db51cu: goto label_2db51c;
        case 0x2db520u: goto label_2db520;
        case 0x2db524u: goto label_2db524;
        case 0x2db528u: goto label_2db528;
        case 0x2db52cu: goto label_2db52c;
        case 0x2db530u: goto label_2db530;
        case 0x2db534u: goto label_2db534;
        case 0x2db538u: goto label_2db538;
        case 0x2db53cu: goto label_2db53c;
        case 0x2db540u: goto label_2db540;
        case 0x2db544u: goto label_2db544;
        case 0x2db548u: goto label_2db548;
        case 0x2db54cu: goto label_2db54c;
        case 0x2db550u: goto label_2db550;
        case 0x2db554u: goto label_2db554;
        case 0x2db558u: goto label_2db558;
        case 0x2db55cu: goto label_2db55c;
        case 0x2db560u: goto label_2db560;
        case 0x2db564u: goto label_2db564;
        case 0x2db568u: goto label_2db568;
        case 0x2db56cu: goto label_2db56c;
        case 0x2db570u: goto label_2db570;
        case 0x2db574u: goto label_2db574;
        case 0x2db578u: goto label_2db578;
        case 0x2db57cu: goto label_2db57c;
        case 0x2db580u: goto label_2db580;
        case 0x2db584u: goto label_2db584;
        case 0x2db588u: goto label_2db588;
        case 0x2db58cu: goto label_2db58c;
        case 0x2db590u: goto label_2db590;
        case 0x2db594u: goto label_2db594;
        case 0x2db598u: goto label_2db598;
        case 0x2db59cu: goto label_2db59c;
        default: break;
    }

    ctx->pc = 0x2db508u;

label_2db508:
    // 0x2db508: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2db508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2db50c:
    // 0x2db50c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db510:
    // 0x2db510: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2db510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2db514:
    // 0x2db514: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2db514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2db518:
    // 0x2db518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db51c:
    // 0x2db51c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2db51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2db520:
    // 0x2db520: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2db520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2db524:
    // 0x2db524: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_2db528:
    if (ctx->pc == 0x2DB528u) {
        ctx->pc = 0x2DB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB524u;
        // 0x2db528: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB52Cu;
        goto label_2db52c;
    }
    ctx->pc = 0x2DB524u;
    {
        const bool branch_taken_0x2db524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB524u;
        // 0x2db528: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db524) {
            ctx->pc = 0x2DB590u;
            goto label_2db590;
        }
    }
    ctx->pc = 0x2DB52Cu;
label_2db52c:
    // 0x2db52c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db530:
    // 0x2db530: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2db530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2db534:
    // 0x2db534: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2db534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2db538:
    // 0x2db538: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2db538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2db53c:
    // 0x2db53c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2db53cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db540:
    // 0x2db540: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2db540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2db544:
    // 0x2db544: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x2db544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_2db548:
    // 0x2db548: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2db548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2db54c:
    // 0x2db54c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2db54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2db550:
    // 0x2db550: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2db554:
    // 0x2db554: 0x40f809  jalr        $v0
label_2db558:
    if (ctx->pc == 0x2DB558u) {
        ctx->pc = 0x2DB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB554u;
        // 0x2db558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB55Cu;
        goto label_2db55c;
    }
    ctx->pc = 0x2DB554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB55Cu);
        ctx->pc = 0x2DB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB554u;
        // 0x2db558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB554u, 0x2DB55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB55Cu;
label_2db55c:
    // 0x2db55c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2db55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db560:
    // 0x2db560: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2db560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db564:
    // 0x2db564: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2db564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2db568:
    // 0x2db568: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2db568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2db56c:
    // 0x2db56c: 0x8cb1020c  lw          $s1, 0x20C($a1)
    ctx->pc = 0x2db56cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2db570:
    // 0x2db570: 0x40f809  jalr        $v0
label_2db574:
    if (ctx->pc == 0x2DB574u) {
        ctx->pc = 0x2DB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB570u;
        // 0x2db574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB578u;
        goto label_2db578;
    }
    ctx->pc = 0x2DB570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB578u);
        ctx->pc = 0x2DB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB570u;
        // 0x2db574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB570u, 0x2DB578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB578u;
label_2db578:
    // 0x2db578: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2db578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2db57c:
    // 0x2db57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db580:
    // 0x2db580: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2db584:
    // 0x2db584: 0xc059308  jal         func_164C20
label_2db588:
    if (ctx->pc == 0x2DB588u) {
        ctx->pc = 0x2DB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB584u;
        // 0x2db588: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB58Cu;
        goto label_2db58c;
    }
    ctx->pc = 0x2DB584u;
    SET_GPR_U32(ctx, 31, 0x2DB58Cu);
    ctx->pc = 0x2DB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB584u;
    // 0x2db588: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x2DB584u, 0x2DB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB58Cu;
label_2db58c:
    // 0x2db58c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2db58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2db590:
    // 0x2db590: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2db590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2db594:
    // 0x2db594: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2db594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2db598:
    // 0x2db598: 0x3e00008  jr          $ra
label_2db59c:
    if (ctx->pc == 0x2DB59Cu) {
        ctx->pc = 0x2DB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB598u;
        // 0x2db59c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB5A0u;
        goto label_fallthrough_0x2db598;
    }
    ctx->pc = 0x2DB598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB598u;
        // 0x2db59c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2db598:
    ctx->pc = 0x2DB5A0u;
}
