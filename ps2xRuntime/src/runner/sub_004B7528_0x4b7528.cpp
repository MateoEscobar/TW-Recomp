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

// Function: sub_004B7528
// Address: 0x4b7528 - 0x4b75e0
void sub_004B7528_0x4b7528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7528_0x4b7528");
#endif

    switch (ctx->pc) {
        case 0x4b7528u: goto label_4b7528;
        case 0x4b752cu: goto label_4b752c;
        case 0x4b7530u: goto label_4b7530;
        case 0x4b7534u: goto label_4b7534;
        case 0x4b7538u: goto label_4b7538;
        case 0x4b753cu: goto label_4b753c;
        case 0x4b7540u: goto label_4b7540;
        case 0x4b7544u: goto label_4b7544;
        case 0x4b7548u: goto label_4b7548;
        case 0x4b754cu: goto label_4b754c;
        case 0x4b7550u: goto label_4b7550;
        case 0x4b7554u: goto label_4b7554;
        case 0x4b7558u: goto label_4b7558;
        case 0x4b755cu: goto label_4b755c;
        case 0x4b7560u: goto label_4b7560;
        case 0x4b7564u: goto label_4b7564;
        case 0x4b7568u: goto label_4b7568;
        case 0x4b756cu: goto label_4b756c;
        case 0x4b7570u: goto label_4b7570;
        case 0x4b7574u: goto label_4b7574;
        case 0x4b7578u: goto label_4b7578;
        case 0x4b757cu: goto label_4b757c;
        case 0x4b7580u: goto label_4b7580;
        case 0x4b7584u: goto label_4b7584;
        case 0x4b7588u: goto label_4b7588;
        case 0x4b758cu: goto label_4b758c;
        case 0x4b7590u: goto label_4b7590;
        case 0x4b7594u: goto label_4b7594;
        case 0x4b7598u: goto label_4b7598;
        case 0x4b759cu: goto label_4b759c;
        case 0x4b75a0u: goto label_4b75a0;
        case 0x4b75a4u: goto label_4b75a4;
        case 0x4b75a8u: goto label_4b75a8;
        case 0x4b75acu: goto label_4b75ac;
        case 0x4b75b0u: goto label_4b75b0;
        case 0x4b75b4u: goto label_4b75b4;
        case 0x4b75b8u: goto label_4b75b8;
        case 0x4b75bcu: goto label_4b75bc;
        case 0x4b75c0u: goto label_4b75c0;
        case 0x4b75c4u: goto label_4b75c4;
        case 0x4b75c8u: goto label_4b75c8;
        case 0x4b75ccu: goto label_4b75cc;
        case 0x4b75d0u: goto label_4b75d0;
        case 0x4b75d4u: goto label_4b75d4;
        case 0x4b75d8u: goto label_4b75d8;
        case 0x4b75dcu: goto label_4b75dc;
        default: break;
    }

    ctx->pc = 0x4b7528u;

label_4b7528:
    // 0x4b7528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b752c:
    // 0x4b752c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b7530:
    // 0x4b7530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b7534:
    // 0x4b7534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b7538:
    // 0x4b7538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b753c:
    // 0x4b753c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4b753cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b7540:
    // 0x4b7540: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b7540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b7544:
    // 0x4b7544: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x4b7544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4b7548:
    // 0x4b7548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b754c:
    if (ctx->pc == 0x4B754Cu) {
        ctx->pc = 0x4B754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7548u;
        // 0x4b754c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7550u;
        goto label_4b7550;
    }
    ctx->pc = 0x4B7548u;
    {
        const bool branch_taken_0x4b7548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7548u;
        // 0x4b754c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7548) {
            ctx->pc = 0x4B7560u;
            goto label_4b7560;
        }
    }
    ctx->pc = 0x4B7550u;
label_4b7550:
    // 0x4b7550: 0xc12dc58  jal         func_4B7160
label_4b7554:
    if (ctx->pc == 0x4B7554u) {
        ctx->pc = 0x4B7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7550u;
        // 0x4b7554: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7558u;
        goto label_4b7558;
    }
    ctx->pc = 0x4B7550u;
    SET_GPR_U32(ctx, 31, 0x4B7558u);
    ctx->pc = 0x4B7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7550u;
    // 0x4b7554: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B7550u, 0x4B7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7558u;
label_4b7558:
    // 0x4b7558: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_4b755c:
    if (ctx->pc == 0x4B755Cu) {
        ctx->pc = 0x4B755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7558u;
        // 0x4b755c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7560u;
        goto label_4b7560;
    }
    ctx->pc = 0x4B7558u;
    {
        const bool branch_taken_0x4b7558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7558u;
        // 0x4b755c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7558) {
            ctx->pc = 0x4B75CCu;
            goto label_4b75cc;
        }
    }
    ctx->pc = 0x4B7560u;
label_4b7560:
    // 0x4b7560: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b7564:
    // 0x4b7564: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b7568:
    // 0x4b7568: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x4b7568u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b756c:
    // 0x4b756c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_4b7570:
    if (ctx->pc == 0x4B7570u) {
        ctx->pc = 0x4B7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B756Cu;
        // 0x4b7570: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7574u;
        goto label_4b7574;
    }
    ctx->pc = 0x4B756Cu;
    {
        const bool branch_taken_0x4b756c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B756Cu;
        // 0x4b7570: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b756c) {
            ctx->pc = 0x4B75B8u;
            goto label_4b75b8;
        }
    }
    ctx->pc = 0x4B7574u;
label_4b7574:
    // 0x4b7574: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b7574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b7578:
    // 0x4b7578: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4b7578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_4b757c:
    // 0x4b757c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b7580:
    // 0x4b7580: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x4b7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_4b7584:
    // 0x4b7584: 0x40f809  jalr        $v0
label_4b7588:
    if (ctx->pc == 0x4B7588u) {
        ctx->pc = 0x4B7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7584u;
        // 0x4b7588: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B758Cu;
        goto label_4b758c;
    }
    ctx->pc = 0x4B7584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B758Cu);
        ctx->pc = 0x4B7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7584u;
        // 0x4b7588: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7584u, 0x4B758Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B758Cu;
label_4b758c:
    // 0x4b758c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b7590:
    // 0x4b7590: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_4b7594:
    if (ctx->pc == 0x4B7594u) {
        ctx->pc = 0x4B7598u;
        goto label_4b7598;
    }
    ctx->pc = 0x4B7590u;
    {
        const bool branch_taken_0x4b7590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b7590) {
            ctx->pc = 0x4B75A4u;
            goto label_4b75a4;
        }
    }
    ctx->pc = 0x4B7598u;
label_4b7598:
    // 0x4b7598: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4b7598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b759c:
    // 0x4b759c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4b75a0:
    if (ctx->pc == 0x4B75A0u) {
        ctx->pc = 0x4B75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B759Cu;
        // 0x4b75a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B75A4u;
        goto label_4b75a4;
    }
    ctx->pc = 0x4B759Cu;
    {
        const bool branch_taken_0x4b759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B759Cu;
        // 0x4b75a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b759c) {
            ctx->pc = 0x4B75B8u;
            goto label_4b75b8;
        }
    }
    ctx->pc = 0x4B75A4u;
label_4b75a4:
    // 0x4b75a4: 0xc136270  jal         func_4D89C0
label_4b75a8:
    if (ctx->pc == 0x4B75A8u) {
        ctx->pc = 0x4B75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B75A4u;
        // 0x4b75a8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B75ACu;
        goto label_4b75ac;
    }
    ctx->pc = 0x4B75A4u;
    SET_GPR_U32(ctx, 31, 0x4B75ACu);
    ctx->pc = 0x4B75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B75A4u;
    // 0x4b75a8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B75A4u, 0x4B75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B75ACu;
label_4b75ac:
    // 0x4b75ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b75b0:
    // 0x4b75b0: 0x3863001d  xori        $v1, $v1, 0x1D
    ctx->pc = 0x4b75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)29);
label_4b75b4:
    // 0x4b75b4: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x4b75b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_4b75b8:
    // 0x4b75b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b75bc:
    // 0x4b75bc: 0x12220002  beq         $s1, $v0, . + 4 + (0x2 << 2)
label_4b75c0:
    if (ctx->pc == 0x4B75C0u) {
        ctx->pc = 0x4B75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B75BCu;
        // 0x4b75c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B75C4u;
        goto label_4b75c4;
    }
    ctx->pc = 0x4B75BCu;
    {
        const bool branch_taken_0x4b75bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B75BCu;
        // 0x4b75c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b75bc) {
            ctx->pc = 0x4B75C8u;
            goto label_4b75c8;
        }
    }
    ctx->pc = 0x4B75C4u;
label_4b75c4:
    // 0x4b75c4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x4b75c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_4b75c8:
    // 0x4b75c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b75c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b75cc:
    // 0x4b75cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b75ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b75d0:
    // 0x4b75d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b75d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b75d4:
    // 0x4b75d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b75d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b75d8:
    // 0x4b75d8: 0x3e00008  jr          $ra
label_4b75dc:
    if (ctx->pc == 0x4B75DCu) {
        ctx->pc = 0x4B75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B75D8u;
        // 0x4b75dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B75E0u;
        goto label_fallthrough_0x4b75d8;
    }
    ctx->pc = 0x4B75D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B75D8u;
        // 0x4b75dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B75D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b75d8:
    ctx->pc = 0x4B75E0u;
}
