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

// Function: sub_001A4348
// Address: 0x1a4348 - 0x1a43d8
void sub_001A4348_0x1a4348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4348_0x1a4348");
#endif

    switch (ctx->pc) {
        case 0x1a4348u: goto label_1a4348;
        case 0x1a434cu: goto label_1a434c;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4354u: goto label_1a4354;
        case 0x1a4358u: goto label_1a4358;
        case 0x1a435cu: goto label_1a435c;
        case 0x1a4360u: goto label_1a4360;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4368u: goto label_1a4368;
        case 0x1a436cu: goto label_1a436c;
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        default: break;
    }

    ctx->pc = 0x1a4348u;

label_1a4348:
    // 0x1a4348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a434c:
    // 0x1a434c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a4350:
    // 0x1a4350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a4354:
    // 0x1a4354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4358:
    // 0x1a4358: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a435c:
    // 0x1a435c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1a4360:
    if (ctx->pc == 0x1A4360u) {
        ctx->pc = 0x1A4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A435Cu;
        // 0x1a4360: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4364u;
        goto label_1a4364;
    }
    ctx->pc = 0x1A435Cu;
    {
        const bool branch_taken_0x1a435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a435c) {
            ctx->pc = 0x1A4360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A435Cu;
            // 0x1a4360: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A437Cu;
            goto label_1a437c;
        }
    }
    ctx->pc = 0x1A4364u;
label_1a4364:
    // 0x1a4364: 0xc06a3aa  jal         func_1A8EA8
label_1a4368:
    if (ctx->pc == 0x1A4368u) {
        ctx->pc = 0x1A4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4364u;
        // 0x1a4368: 0x8e0501e4  lw          $a1, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A436Cu;
        goto label_1a436c;
    }
    ctx->pc = 0x1A4364u;
    SET_GPR_U32(ctx, 31, 0x1A436Cu);
    ctx->pc = 0x1A4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4364u;
    // 0x1a4368: 0x8e0501e4  lw          $a1, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1A4364u, 0x1A436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A436Cu;
label_1a436c:
    // 0x1a436c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4370:
    // 0x1a4370: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_1a4374:
    if (ctx->pc == 0x1A4374u) {
        ctx->pc = 0x1A4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4370u;
        // 0x1a4374: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4378u;
        goto label_1a4378;
    }
    ctx->pc = 0x1A4370u;
    {
        const bool branch_taken_0x1a4370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4370u;
        // 0x1a4374: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4370) {
            ctx->pc = 0x1A43C4u;
            goto label_1a43c4;
        }
    }
    ctx->pc = 0x1A4378u;
label_1a4378:
    // 0x1a4378: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1a4378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1a437c:
    // 0x1a437c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a4380:
    // 0x1a4380: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1a4384:
    if (ctx->pc == 0x1A4384u) {
        ctx->pc = 0x1A4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4380u;
        // 0x1a4384: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4388u;
        goto label_1a4388;
    }
    ctx->pc = 0x1A4380u;
    {
        const bool branch_taken_0x1a4380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4380u;
        // 0x1a4384: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4380) {
            ctx->pc = 0x1A43C4u;
            goto label_1a43c4;
        }
    }
    ctx->pc = 0x1A4388u;
label_1a4388:
    // 0x1a4388: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1a438c:
    if (ctx->pc == 0x1A438Cu) {
        ctx->pc = 0x1A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4388u;
        // 0x1a438c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4390u;
        goto label_1a4390;
    }
    ctx->pc = 0x1A4388u;
    {
        const bool branch_taken_0x1a4388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4388u;
        // 0x1a438c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4388) {
            ctx->pc = 0x1A43B4u;
            goto label_1a43b4;
        }
    }
    ctx->pc = 0x1A4390u;
label_1a4390:
    // 0x1a4390: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1a4394:
    if (ctx->pc == 0x1A4394u) {
        ctx->pc = 0x1A4398u;
        goto label_1a4398;
    }
    ctx->pc = 0x1A4390u;
    {
        const bool branch_taken_0x1a4390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4390) {
            ctx->pc = 0x1A43B4u;
            goto label_1a43b4;
        }
    }
    ctx->pc = 0x1A4398u;
label_1a4398:
    // 0x1a4398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a439c:
    // 0x1a439c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1a43a0:
    // 0x1a43a0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1a43a4:
    // 0x1a43a4: 0x60f809  jalr        $v1
label_1a43a8:
    if (ctx->pc == 0x1A43A8u) {
        ctx->pc = 0x1A43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43A4u;
        // 0x1a43a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43ACu;
        goto label_1a43ac;
    }
    ctx->pc = 0x1A43A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A43ACu);
        ctx->pc = 0x1A43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43A4u;
        // 0x1a43a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43A4u, 0x1A43ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43ACu;
label_1a43ac:
    // 0x1a43ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a43b0:
    if (ctx->pc == 0x1A43B0u) {
        ctx->pc = 0x1A43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43ACu;
        // 0x1a43b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43B4u;
        goto label_1a43b4;
    }
    ctx->pc = 0x1A43ACu;
    {
        const bool branch_taken_0x1a43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43ACu;
        // 0x1a43b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43ac) {
            ctx->pc = 0x1A43C8u;
            goto label_1a43c8;
        }
    }
    ctx->pc = 0x1A43B4u;
label_1a43b4:
    // 0x1a43b4: 0xc06886e  jal         func_1A21B8
label_1a43b8:
    if (ctx->pc == 0x1A43B8u) {
        ctx->pc = 0x1A43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43B4u;
        // 0x1a43b8: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43BCu;
        goto label_1a43bc;
    }
    ctx->pc = 0x1A43B4u;
    SET_GPR_U32(ctx, 31, 0x1A43BCu);
    ctx->pc = 0x1A43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43B4u;
    // 0x1a43b8: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A43B4u, 0x1A43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43BCu;
label_1a43bc:
    // 0x1a43bc: 0xc0734a0  jal         func_1CD280
label_1a43c0:
    if (ctx->pc == 0x1A43C0u) {
        ctx->pc = 0x1A43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43BCu;
        // 0x1a43c0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43C4u;
        goto label_1a43c4;
    }
    ctx->pc = 0x1A43BCu;
    SET_GPR_U32(ctx, 31, 0x1A43C4u);
    ctx->pc = 0x1A43C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43BCu;
    // 0x1a43c0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1A43BCu, 0x1A43C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43C4u;
label_1a43c4:
    // 0x1a43c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a43c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a43c8:
    // 0x1a43c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a43c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a43cc:
    // 0x1a43cc: 0x3e00008  jr          $ra
label_1a43d0:
    if (ctx->pc == 0x1A43D0u) {
        ctx->pc = 0x1A43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43CCu;
        // 0x1a43d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43D4u;
        goto label_1a43d4;
    }
    ctx->pc = 0x1A43CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43CCu;
        // 0x1a43d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43D4u;
label_1a43d4:
    // 0x1a43d4: 0x0  nop
    ctx->pc = 0x1a43d4u;
    // NOP
    ctx->pc = 0x1a43d8u;
}
