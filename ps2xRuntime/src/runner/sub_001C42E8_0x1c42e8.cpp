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

// Function: sub_001C42E8
// Address: 0x1c42e8 - 0x1c4388
void sub_001C42E8_0x1c42e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C42E8_0x1c42e8");
#endif

    switch (ctx->pc) {
        case 0x1c42e8u: goto label_1c42e8;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c42f0u: goto label_1c42f0;
        case 0x1c42f4u: goto label_1c42f4;
        case 0x1c42f8u: goto label_1c42f8;
        case 0x1c42fcu: goto label_1c42fc;
        case 0x1c4300u: goto label_1c4300;
        case 0x1c4304u: goto label_1c4304;
        case 0x1c4308u: goto label_1c4308;
        case 0x1c430cu: goto label_1c430c;
        case 0x1c4310u: goto label_1c4310;
        case 0x1c4314u: goto label_1c4314;
        case 0x1c4318u: goto label_1c4318;
        case 0x1c431cu: goto label_1c431c;
        case 0x1c4320u: goto label_1c4320;
        case 0x1c4324u: goto label_1c4324;
        case 0x1c4328u: goto label_1c4328;
        case 0x1c432cu: goto label_1c432c;
        case 0x1c4330u: goto label_1c4330;
        case 0x1c4334u: goto label_1c4334;
        case 0x1c4338u: goto label_1c4338;
        case 0x1c433cu: goto label_1c433c;
        case 0x1c4340u: goto label_1c4340;
        case 0x1c4344u: goto label_1c4344;
        case 0x1c4348u: goto label_1c4348;
        case 0x1c434cu: goto label_1c434c;
        case 0x1c4350u: goto label_1c4350;
        case 0x1c4354u: goto label_1c4354;
        case 0x1c4358u: goto label_1c4358;
        case 0x1c435cu: goto label_1c435c;
        case 0x1c4360u: goto label_1c4360;
        case 0x1c4364u: goto label_1c4364;
        case 0x1c4368u: goto label_1c4368;
        case 0x1c436cu: goto label_1c436c;
        case 0x1c4370u: goto label_1c4370;
        case 0x1c4374u: goto label_1c4374;
        case 0x1c4378u: goto label_1c4378;
        case 0x1c437cu: goto label_1c437c;
        case 0x1c4380u: goto label_1c4380;
        case 0x1c4384u: goto label_1c4384;
        default: break;
    }

    ctx->pc = 0x1c42e8u;

label_1c42e8:
    // 0x1c42e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c42ec:
    // 0x1c42ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c42f0:
    // 0x1c42f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c42f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c42f4:
    // 0x1c42f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c42f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1c42f8:
    // 0x1c42f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c42f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c42fc:
    // 0x1c42fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c4300:
    // 0x1c4300: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1c4304:
    if (ctx->pc == 0x1C4304u) {
        ctx->pc = 0x1C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4300u;
        // 0x1c4304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4308u;
        goto label_1c4308;
    }
    ctx->pc = 0x1C4300u;
    {
        const bool branch_taken_0x1c4300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4300u;
        // 0x1c4304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4300) {
            ctx->pc = 0x1C436Cu;
            goto label_1c436c;
        }
    }
    ctx->pc = 0x1C4308u;
label_1c4308:
    // 0x1c4308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c430c:
    // 0x1c430c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1c430cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1c4310:
    // 0x1c4310: 0x24910944  addiu       $s1, $a0, 0x944
    ctx->pc = 0x1c4310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
label_1c4314:
    // 0x1c4314: 0x2412007f  addiu       $s2, $zero, 0x7F
    ctx->pc = 0x1c4314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1c4318:
    // 0x1c4318: 0x92020951  lbu         $v0, 0x951($s0)
    ctx->pc = 0x1c4318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2385)));
label_1c431c:
    // 0x1c431c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1c4320:
    if (ctx->pc == 0x1C4320u) {
        ctx->pc = 0x1C4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C431Cu;
        // 0x1c4320: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4324u;
        goto label_1c4324;
    }
    ctx->pc = 0x1C431Cu;
    {
        const bool branch_taken_0x1c431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c431c) {
            ctx->pc = 0x1C4320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C431Cu;
            // 0x1c4320: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4360u;
            goto label_1c4360;
        }
    }
    ctx->pc = 0x1C4324u;
label_1c4324:
    // 0x1c4324: 0x8e060948  lw          $a2, 0x948($s0)
    ctx->pc = 0x1c4324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c4328:
    // 0x1c4328: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
label_1c432c:
    if (ctx->pc == 0x1C432Cu) {
        ctx->pc = 0x1C432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4328u;
        // 0x1c432c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4330u;
        goto label_1c4330;
    }
    ctx->pc = 0x1C4328u;
    {
        const bool branch_taken_0x1c4328 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4328) {
            ctx->pc = 0x1C432Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4328u;
            // 0x1c432c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4348u;
            goto label_1c4348;
        }
    }
    ctx->pc = 0x1C4330u;
label_1c4330:
    // 0x1c4330: 0xc0e4060  jal         func_390180
label_1c4334:
    if (ctx->pc == 0x1C4334u) {
        ctx->pc = 0x1C4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4330u;
        // 0x1c4334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4338u;
        goto label_1c4338;
    }
    ctx->pc = 0x1C4330u;
    SET_GPR_U32(ctx, 31, 0x1C4338u);
    ctx->pc = 0x1C4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4330u;
    // 0x1c4334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4330u, 0x1C4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4338u;
label_1c4338:
    // 0x1c4338: 0xc07a6ce  jal         func_1E9B38
label_1c433c:
    if (ctx->pc == 0x1C433Cu) {
        ctx->pc = 0x1C433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4338u;
        // 0x1c433c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4340u;
        goto label_1c4340;
    }
    ctx->pc = 0x1C4338u;
    SET_GPR_U32(ctx, 31, 0x1C4340u);
    ctx->pc = 0x1C433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4338u;
    // 0x1c433c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C4338u, 0x1C4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4340u;
label_1c4340:
    // 0x1c4340: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c4344:
    if (ctx->pc == 0x1C4344u) {
        ctx->pc = 0x1C4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4340u;
        // 0x1c4344: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4348u;
        goto label_1c4348;
    }
    ctx->pc = 0x1C4340u;
    {
        const bool branch_taken_0x1c4340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4340u;
        // 0x1c4344: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4340) {
            ctx->pc = 0x1C4360u;
            goto label_1c4360;
        }
    }
    ctx->pc = 0x1C4348u;
label_1c4348:
    // 0x1c4348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c434c:
    // 0x1c434c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c434cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c4350:
    // 0x1c4350: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c4354:
    // 0x1c4354: 0x60f809  jalr        $v1
label_1c4358:
    if (ctx->pc == 0x1C4358u) {
        ctx->pc = 0x1C4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4354u;
        // 0x1c4358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C435Cu;
        goto label_1c435c;
    }
    ctx->pc = 0x1C4354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C435Cu);
        ctx->pc = 0x1C4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4354u;
        // 0x1c4358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4354u, 0x1C435Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C435Cu;
label_1c435c:
    // 0x1c435c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c4360:
    // 0x1c4360: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c4360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1c4364:
    // 0x1c4364: 0x641ffec  bgez        $s2, . + 4 + (-0x14 << 2)
label_1c4368:
    if (ctx->pc == 0x1C4368u) {
        ctx->pc = 0x1C4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4364u;
        // 0x1c4368: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C436Cu;
        goto label_1c436c;
    }
    ctx->pc = 0x1C4364u;
    {
        const bool branch_taken_0x1c4364 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4364u;
        // 0x1c4368: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4364) {
            ctx->pc = 0x1C4318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4318;
        }
    }
    ctx->pc = 0x1C436Cu;
label_1c436c:
    // 0x1c436c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c436cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4370:
    // 0x1c4370: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4374:
    // 0x1c4374: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c4374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4378:
    // 0x1c4378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c437c:
    // 0x1c437c: 0x3e00008  jr          $ra
label_1c4380:
    if (ctx->pc == 0x1C4380u) {
        ctx->pc = 0x1C4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C437Cu;
        // 0x1c4380: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4384u;
        goto label_1c4384;
    }
    ctx->pc = 0x1C437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C437Cu;
        // 0x1c4380: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C437Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4384u;
label_1c4384:
    // 0x1c4384: 0x0  nop
    ctx->pc = 0x1c4384u;
    // NOP
    ctx->pc = 0x1c4388u;
}
