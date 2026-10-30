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

// Function: sub_003A4328
// Address: 0x3a4328 - 0x3a43b8
void sub_003A4328_0x3a4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4328_0x3a4328");
#endif

    switch (ctx->pc) {
        case 0x3a4328u: goto label_3a4328;
        case 0x3a432cu: goto label_3a432c;
        case 0x3a4330u: goto label_3a4330;
        case 0x3a4334u: goto label_3a4334;
        case 0x3a4338u: goto label_3a4338;
        case 0x3a433cu: goto label_3a433c;
        case 0x3a4340u: goto label_3a4340;
        case 0x3a4344u: goto label_3a4344;
        case 0x3a4348u: goto label_3a4348;
        case 0x3a434cu: goto label_3a434c;
        case 0x3a4350u: goto label_3a4350;
        case 0x3a4354u: goto label_3a4354;
        case 0x3a4358u: goto label_3a4358;
        case 0x3a435cu: goto label_3a435c;
        case 0x3a4360u: goto label_3a4360;
        case 0x3a4364u: goto label_3a4364;
        case 0x3a4368u: goto label_3a4368;
        case 0x3a436cu: goto label_3a436c;
        case 0x3a4370u: goto label_3a4370;
        case 0x3a4374u: goto label_3a4374;
        case 0x3a4378u: goto label_3a4378;
        case 0x3a437cu: goto label_3a437c;
        case 0x3a4380u: goto label_3a4380;
        case 0x3a4384u: goto label_3a4384;
        case 0x3a4388u: goto label_3a4388;
        case 0x3a438cu: goto label_3a438c;
        case 0x3a4390u: goto label_3a4390;
        case 0x3a4394u: goto label_3a4394;
        case 0x3a4398u: goto label_3a4398;
        case 0x3a439cu: goto label_3a439c;
        case 0x3a43a0u: goto label_3a43a0;
        case 0x3a43a4u: goto label_3a43a4;
        case 0x3a43a8u: goto label_3a43a8;
        case 0x3a43acu: goto label_3a43ac;
        case 0x3a43b0u: goto label_3a43b0;
        case 0x3a43b4u: goto label_3a43b4;
        default: break;
    }

    ctx->pc = 0x3a4328u;

label_3a4328:
    // 0x3a4328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a432c:
    // 0x3a432c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a4330:
    // 0x3a4330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a4334:
    // 0x3a4334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a4334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a4338:
    // 0x3a4338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a433c:
    // 0x3a433c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_3a4340:
    if (ctx->pc == 0x3A4340u) {
        ctx->pc = 0x3A4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A433Cu;
        // 0x3a4340: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4344u;
        goto label_3a4344;
    }
    ctx->pc = 0x3A433Cu;
    {
        const bool branch_taken_0x3a433c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A433Cu;
        // 0x3a4340: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a433c) {
            ctx->pc = 0x3A4390u;
            goto label_3a4390;
        }
    }
    ctx->pc = 0x3A4344u;
label_3a4344:
    // 0x3a4344: 0xc047e6c  jal         func_11F9B0
label_3a4348:
    if (ctx->pc == 0x3A4348u) {
        ctx->pc = 0x3A4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4344u;
        // 0x3a4348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A434Cu;
        goto label_3a434c;
    }
    ctx->pc = 0x3A4344u;
    SET_GPR_U32(ctx, 31, 0x3A434Cu);
    ctx->pc = 0x3A4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4344u;
    // 0x3a4348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A4344u, 0x3A434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A434Cu;
label_3a434c:
    // 0x3a434c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_3a4350:
    if (ctx->pc == 0x3A4350u) {
        ctx->pc = 0x3A4354u;
        goto label_3a4354;
    }
    ctx->pc = 0x3A434Cu;
    {
        const bool branch_taken_0x3a434c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a434c) {
            ctx->pc = 0x3A4378u;
            goto label_3a4378;
        }
    }
    ctx->pc = 0x3A4354u;
label_3a4354:
    // 0x3a4354: 0xc047e6c  jal         func_11F9B0
label_3a4358:
    if (ctx->pc == 0x3A4358u) {
        ctx->pc = 0x3A4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4354u;
        // 0x3a4358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A435Cu;
        goto label_3a435c;
    }
    ctx->pc = 0x3A4354u;
    SET_GPR_U32(ctx, 31, 0x3A435Cu);
    ctx->pc = 0x3A4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4354u;
    // 0x3a4358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A4354u, 0x3A435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A435Cu;
label_3a435c:
    // 0x3a435c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4360:
    // 0x3a4360: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3a4360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3a4364:
    // 0x3a4364: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3a4364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3a4368:
    // 0x3a4368: 0xa0f809  jalr        $a1
label_3a436c:
    if (ctx->pc == 0x3A436Cu) {
        ctx->pc = 0x3A436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4368u;
        // 0x3a436c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4370u;
        goto label_3a4370;
    }
    ctx->pc = 0x3A4368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A4370u);
        ctx->pc = 0x3A436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4368u;
        // 0x3a436c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4368u, 0x3A4370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A4370u;
label_3a4370:
    // 0x3a4370: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a4374:
    if (ctx->pc == 0x3A4374u) {
        ctx->pc = 0x3A4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4370u;
        // 0x3a4374: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4378u;
        goto label_3a4378;
    }
    ctx->pc = 0x3A4370u;
    {
        const bool branch_taken_0x3a4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4370u;
        // 0x3a4374: 0x78430000  lq          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4370) {
            ctx->pc = 0x3A439Cu;
            goto label_3a439c;
        }
    }
    ctx->pc = 0x3A4378u;
label_3a4378:
    // 0x3a4378: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3a437c:
    if (ctx->pc == 0x3A437Cu) {
        ctx->pc = 0x3A437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4378u;
        // 0x3a437c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4380u;
        goto label_3a4380;
    }
    ctx->pc = 0x3A4378u;
    {
        const bool branch_taken_0x3a4378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4378u;
        // 0x3a437c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4378) {
            ctx->pc = 0x3A4390u;
            goto label_3a4390;
        }
    }
    ctx->pc = 0x3A4380u;
label_3a4380:
    // 0x3a4380: 0xc0e90b6  jal         func_3A42D8
label_3a4384:
    if (ctx->pc == 0x3A4384u) {
        ctx->pc = 0x3A4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4380u;
        // 0x3a4384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4388u;
        goto label_3a4388;
    }
    ctx->pc = 0x3A4380u;
    SET_GPR_U32(ctx, 31, 0x3A4388u);
    ctx->pc = 0x3A4384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4380u;
    // 0x3a4384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A42D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A42D8u, 0x3A4380u, 0x3A4388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4388u;
label_3a4388:
    // 0x3a4388: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a438c:
    if (ctx->pc == 0x3A438Cu) {
        ctx->pc = 0x3A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4388u;
        // 0x3a438c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4390u;
        goto label_3a4390;
    }
    ctx->pc = 0x3A4388u;
    {
        const bool branch_taken_0x3a4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4388u;
        // 0x3a438c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4388) {
            ctx->pc = 0x3A43A4u;
            goto label_3a43a4;
        }
    }
    ctx->pc = 0x3A4390u;
label_3a4390:
    // 0x3a4390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a4394:
    // 0x3a4394: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a4394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3a4398:
    // 0x3a4398: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a4398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a439c:
    // 0x3a439c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3a439cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_3a43a0:
    // 0x3a43a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a43a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a43a4:
    // 0x3a43a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a43a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a43a8:
    // 0x3a43a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a43a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a43ac:
    // 0x3a43ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a43acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a43b0:
    // 0x3a43b0: 0x3e00008  jr          $ra
label_3a43b4:
    if (ctx->pc == 0x3A43B4u) {
        ctx->pc = 0x3A43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43B0u;
        // 0x3a43b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43B8u;
        goto label_fallthrough_0x3a43b0;
    }
    ctx->pc = 0x3A43B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43B0u;
        // 0x3a43b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A43B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a43b0:
    ctx->pc = 0x3A43B8u;
}
