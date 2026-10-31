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

// Function: sub_001B74F0
// Address: 0x1b74f0 - 0x1b7580
void sub_001B74F0_0x1b74f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B74F0_0x1b74f0");
#endif

    switch (ctx->pc) {
        case 0x1b74f0u: goto label_1b74f0;
        case 0x1b74f4u: goto label_1b74f4;
        case 0x1b74f8u: goto label_1b74f8;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7500u: goto label_1b7500;
        case 0x1b7504u: goto label_1b7504;
        case 0x1b7508u: goto label_1b7508;
        case 0x1b750cu: goto label_1b750c;
        case 0x1b7510u: goto label_1b7510;
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b751cu: goto label_1b751c;
        case 0x1b7520u: goto label_1b7520;
        case 0x1b7524u: goto label_1b7524;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7530u: goto label_1b7530;
        case 0x1b7534u: goto label_1b7534;
        case 0x1b7538u: goto label_1b7538;
        case 0x1b753cu: goto label_1b753c;
        case 0x1b7540u: goto label_1b7540;
        case 0x1b7544u: goto label_1b7544;
        case 0x1b7548u: goto label_1b7548;
        case 0x1b754cu: goto label_1b754c;
        case 0x1b7550u: goto label_1b7550;
        case 0x1b7554u: goto label_1b7554;
        case 0x1b7558u: goto label_1b7558;
        case 0x1b755cu: goto label_1b755c;
        case 0x1b7560u: goto label_1b7560;
        case 0x1b7564u: goto label_1b7564;
        case 0x1b7568u: goto label_1b7568;
        case 0x1b756cu: goto label_1b756c;
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7574u: goto label_1b7574;
        case 0x1b7578u: goto label_1b7578;
        case 0x1b757cu: goto label_1b757c;
        default: break;
    }

    ctx->pc = 0x1b74f0u;

label_1b74f0:
    // 0x1b74f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b74f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b74f4:
    // 0x1b74f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1b74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1b74f8:
    // 0x1b74f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b74fc:
    // 0x1b74fc: 0x2442a118  addiu       $v0, $v0, -0x5EE8
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943000));
label_1b7500:
    // 0x1b7500: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b7504:
    // 0x1b7504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7508:
    // 0x1b7508: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b750c:
    // 0x1b750c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b750cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7510:
    // 0x1b7510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b7514:
    // 0x1b7514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b7518:
    // 0x1b7518: 0xc06dd60  jal         func_1B7580
label_1b751c:
    if (ctx->pc == 0x1B751Cu) {
        ctx->pc = 0x1B751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7518u;
        // 0x1b751c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7520u;
        goto label_1b7520;
    }
    ctx->pc = 0x1B7518u;
    SET_GPR_U32(ctx, 31, 0x1B7520u);
    ctx->pc = 0x1B751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7518u;
    // 0x1b751c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7580u, 0x1B7518u, 0x1B7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7520u;
label_1b7520:
    // 0x1b7520: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1b7520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1b7524:
    // 0x1b7524: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b7528:
    if (ctx->pc == 0x1B7528u) {
        ctx->pc = 0x1B7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7524u;
        // 0x1b7528: 0x26301740  addiu       $s0, $s1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B752Cu;
        goto label_1b752c;
    }
    ctx->pc = 0x1B7524u;
    {
        const bool branch_taken_0x1b7524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7524u;
        // 0x1b7528: 0x26301740  addiu       $s0, $s1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7524) {
            ctx->pc = 0x1B7558u;
            goto label_1b7558;
        }
    }
    ctx->pc = 0x1B752Cu;
label_1b752c:
    // 0x1b752c: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_1b7530:
    if (ctx->pc == 0x1B7530u) {
        ctx->pc = 0x1B7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B752Cu;
        // 0x1b7530: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7534u;
        goto label_1b7534;
    }
    ctx->pc = 0x1B752Cu;
    {
        const bool branch_taken_0x1b752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B752Cu;
        // 0x1b7530: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b752c) {
            ctx->pc = 0x1B7558u;
            goto label_1b7558;
        }
    }
    ctx->pc = 0x1B7534u;
label_1b7534:
    // 0x1b7534: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1b7538:
    // 0x1b7538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b753c:
    // 0x1b753c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7540:
    // 0x1b7540: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1b7540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1b7544:
    // 0x1b7544: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1b7544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1b7548:
    // 0x1b7548: 0x60f809  jalr        $v1
label_1b754c:
    if (ctx->pc == 0x1B754Cu) {
        ctx->pc = 0x1B754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7548u;
        // 0x1b754c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7550u;
        goto label_1b7550;
    }
    ctx->pc = 0x1B7548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7550u);
        ctx->pc = 0x1B754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7548u;
        // 0x1b754c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7548u, 0x1B7550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7550u;
label_1b7550:
    // 0x1b7550: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_1b7554:
    if (ctx->pc == 0x1B7554u) {
        ctx->pc = 0x1B7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7550u;
        // 0x1b7554: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7558u;
        goto label_1b7558;
    }
    ctx->pc = 0x1B7550u;
    {
        const bool branch_taken_0x1b7550 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7550u;
        // 0x1b7554: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7550) {
            ctx->pc = 0x1B7538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7538;
        }
    }
    ctx->pc = 0x1B7558u;
label_1b7558:
    // 0x1b7558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b755c:
    // 0x1b755c: 0xc06a39e  jal         func_1A8E78
label_1b7560:
    if (ctx->pc == 0x1B7560u) {
        ctx->pc = 0x1B7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B755Cu;
        // 0x1b7560: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7564u;
        goto label_1b7564;
    }
    ctx->pc = 0x1B755Cu;
    SET_GPR_U32(ctx, 31, 0x1B7564u);
    ctx->pc = 0x1B7560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B755Cu;
    // 0x1b7560: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1B755Cu, 0x1B7564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7564u;
label_1b7564:
    // 0x1b7564: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b7564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b7568:
    // 0x1b7568: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b7568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b756c:
    // 0x1b756c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b756cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7570:
    // 0x1b7570: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b7570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7574:
    // 0x1b7574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7578:
    // 0x1b7578: 0x3e00008  jr          $ra
label_1b757c:
    if (ctx->pc == 0x1B757Cu) {
        ctx->pc = 0x1B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7578u;
        // 0x1b757c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7580u;
        goto label_fallthrough_0x1b7578;
    }
    ctx->pc = 0x1B7578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7578u;
        // 0x1b757c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b7578:
    ctx->pc = 0x1B7580u;
}
