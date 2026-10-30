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

// Function: sub_0031C258
// Address: 0x31c258 - 0x31c334
void sub_0031C258_0x31c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C258_0x31c258");
#endif

    switch (ctx->pc) {
        case 0x31c258u: goto label_31c258;
        case 0x31c25cu: goto label_31c25c;
        case 0x31c260u: goto label_31c260;
        case 0x31c264u: goto label_31c264;
        case 0x31c268u: goto label_31c268;
        case 0x31c26cu: goto label_31c26c;
        case 0x31c270u: goto label_31c270;
        case 0x31c274u: goto label_31c274;
        case 0x31c278u: goto label_31c278;
        case 0x31c27cu: goto label_31c27c;
        case 0x31c280u: goto label_31c280;
        case 0x31c284u: goto label_31c284;
        case 0x31c288u: goto label_31c288;
        case 0x31c28cu: goto label_31c28c;
        case 0x31c290u: goto label_31c290;
        case 0x31c294u: goto label_31c294;
        case 0x31c298u: goto label_31c298;
        case 0x31c29cu: goto label_31c29c;
        case 0x31c2a0u: goto label_31c2a0;
        case 0x31c2a4u: goto label_31c2a4;
        case 0x31c2a8u: goto label_31c2a8;
        case 0x31c2acu: goto label_31c2ac;
        case 0x31c2b0u: goto label_31c2b0;
        case 0x31c2b4u: goto label_31c2b4;
        case 0x31c2b8u: goto label_31c2b8;
        case 0x31c2bcu: goto label_31c2bc;
        case 0x31c2c0u: goto label_31c2c0;
        case 0x31c2c4u: goto label_31c2c4;
        case 0x31c2c8u: goto label_31c2c8;
        case 0x31c2ccu: goto label_31c2cc;
        case 0x31c2d0u: goto label_31c2d0;
        case 0x31c2d4u: goto label_31c2d4;
        case 0x31c2d8u: goto label_31c2d8;
        case 0x31c2dcu: goto label_31c2dc;
        case 0x31c2e0u: goto label_31c2e0;
        case 0x31c2e4u: goto label_31c2e4;
        case 0x31c2e8u: goto label_31c2e8;
        case 0x31c2ecu: goto label_31c2ec;
        case 0x31c2f0u: goto label_31c2f0;
        case 0x31c2f4u: goto label_31c2f4;
        case 0x31c2f8u: goto label_31c2f8;
        case 0x31c2fcu: goto label_31c2fc;
        case 0x31c300u: goto label_31c300;
        case 0x31c304u: goto label_31c304;
        case 0x31c308u: goto label_31c308;
        case 0x31c30cu: goto label_31c30c;
        case 0x31c310u: goto label_31c310;
        case 0x31c314u: goto label_31c314;
        case 0x31c318u: goto label_31c318;
        case 0x31c31cu: goto label_31c31c;
        case 0x31c320u: goto label_31c320;
        case 0x31c324u: goto label_31c324;
        case 0x31c328u: goto label_31c328;
        case 0x31c32cu: goto label_31c32c;
        case 0x31c330u: goto label_31c330;
        default: break;
    }

    ctx->pc = 0x31c258u;

label_31c258:
    // 0x31c258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31c25c:
    // 0x31c25c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31c260:
    // 0x31c260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31c264:
    // 0x31c264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c268:
    // 0x31c268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31c26c:
    // 0x31c26c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31c26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31c270:
    // 0x31c270: 0xc08a61a  jal         func_229868
label_31c274:
    if (ctx->pc == 0x31C274u) {
        ctx->pc = 0x31C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C270u;
        // 0x31c274: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C278u;
        goto label_31c278;
    }
    ctx->pc = 0x31C270u;
    SET_GPR_U32(ctx, 31, 0x31C278u);
    ctx->pc = 0x31C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C270u;
    // 0x31c274: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31C270u, 0x31C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C278u;
label_31c278:
    // 0x31c278: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_31c27c:
    if (ctx->pc == 0x31C27Cu) {
        ctx->pc = 0x31C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C278u;
        // 0x31c27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C280u;
        goto label_31c280;
    }
    ctx->pc = 0x31C278u;
    {
        const bool branch_taken_0x31c278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C278u;
        // 0x31c27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c278) {
            ctx->pc = 0x31C340u;
            return;
        }
    }
    ctx->pc = 0x31C280u;
label_31c280:
    // 0x31c280: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31c284:
    // 0x31c284: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31c284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31c288:
    // 0x31c288: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31c288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31c28c:
    // 0x31c28c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_31c290:
    if (ctx->pc == 0x31C290u) {
        ctx->pc = 0x31C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C28Cu;
        // 0x31c290: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C294u;
        goto label_31c294;
    }
    ctx->pc = 0x31C28Cu;
    {
        const bool branch_taken_0x31c28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C28Cu;
        // 0x31c290: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c28c) {
            ctx->pc = 0x31C33Cu;
            return;
        }
    }
    ctx->pc = 0x31C294u;
label_31c294:
    // 0x31c294: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31c294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31c298:
    // 0x31c298: 0x24421bc0  addiu       $v0, $v0, 0x1BC0
    ctx->pc = 0x31c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7104));
label_31c29c:
    // 0x31c29c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31c2a0:
    // 0x31c2a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31c2a4:
    // 0x31c2a4: 0x800008  jr          $a0
label_31c2a8:
    if (ctx->pc == 0x31C2A8u) {
        ctx->pc = 0x31C2ACu;
        goto label_31c2ac;
    }
    ctx->pc = 0x31C2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31C2ACu: goto label_31c2ac;
            case 0x31C2BCu: goto label_31c2bc;
            case 0x31C2C8u: goto label_31c2c8;
            case 0x31C2D4u: goto label_31c2d4;
            case 0x31C314u: goto label_31c314;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C2A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31C2ACu;
label_31c2ac:
    // 0x31c2ac: 0xc0c7038  jal         func_31C0E0
label_31c2b0:
    if (ctx->pc == 0x31C2B0u) {
        ctx->pc = 0x31C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2ACu;
        // 0x31c2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2B4u;
        goto label_31c2b4;
    }
    ctx->pc = 0x31C2ACu;
    SET_GPR_U32(ctx, 31, 0x31C2B4u);
    ctx->pc = 0x31C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2ACu;
    // 0x31c2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C0E0u, 0x31C2ACu, 0x31C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2B4u;
label_31c2b4:
    // 0x31c2b4: 0x10000022  b           . + 4 + (0x22 << 2)
label_31c2b8:
    if (ctx->pc == 0x31C2B8u) {
        ctx->pc = 0x31C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2B4u;
        // 0x31c2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2BCu;
        goto label_31c2bc;
    }
    ctx->pc = 0x31C2B4u;
    {
        const bool branch_taken_0x31c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2B4u;
        // 0x31c2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2b4) {
            ctx->pc = 0x31C340u;
            return;
        }
    }
    ctx->pc = 0x31C2BCu;
label_31c2bc:
    // 0x31c2bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31c2c0:
    // 0x31c2c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_31c2c4:
    if (ctx->pc == 0x31C2C4u) {
        ctx->pc = 0x31C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2C0u;
        // 0x31c2c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2C8u;
        goto label_31c2c8;
    }
    ctx->pc = 0x31C2C0u;
    {
        const bool branch_taken_0x31c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2C0u;
        // 0x31c2c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2c0) {
            ctx->pc = 0x31C31Cu;
            goto label_31c31c;
        }
    }
    ctx->pc = 0x31C2C8u;
label_31c2c8:
    // 0x31c2c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31c2cc:
    // 0x31c2cc: 0x10000013  b           . + 4 + (0x13 << 2)
label_31c2d0:
    if (ctx->pc == 0x31C2D0u) {
        ctx->pc = 0x31C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2CCu;
        // 0x31c2d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2D4u;
        goto label_31c2d4;
    }
    ctx->pc = 0x31C2CCu;
    {
        const bool branch_taken_0x31c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2CCu;
        // 0x31c2d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2cc) {
            ctx->pc = 0x31C31Cu;
            goto label_31c31c;
        }
    }
    ctx->pc = 0x31C2D4u;
label_31c2d4:
    // 0x31c2d4: 0xc08a61a  jal         func_229868
label_31c2d8:
    if (ctx->pc == 0x31C2D8u) {
        ctx->pc = 0x31C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2D4u;
        // 0x31c2d8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2DCu;
        goto label_31c2dc;
    }
    ctx->pc = 0x31C2D4u;
    SET_GPR_U32(ctx, 31, 0x31C2DCu);
    ctx->pc = 0x31C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2D4u;
    // 0x31c2d8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31C2D4u, 0x31C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2DCu;
label_31c2dc:
    // 0x31c2dc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_31c2e0:
    if (ctx->pc == 0x31C2E0u) {
        ctx->pc = 0x31C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2DCu;
        // 0x31c2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2E4u;
        goto label_31c2e4;
    }
    ctx->pc = 0x31C2DCu;
    {
        const bool branch_taken_0x31c2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c2dc) {
            ctx->pc = 0x31C2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C2DCu;
            // 0x31c2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C340u;
            return;
        }
    }
    ctx->pc = 0x31C2E4u;
label_31c2e4:
    // 0x31c2e4: 0xc087502  jal         func_21D408
label_31c2e8:
    if (ctx->pc == 0x31C2E8u) {
        ctx->pc = 0x31C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2E4u;
        // 0x31c2e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C2ECu;
        goto label_31c2ec;
    }
    ctx->pc = 0x31C2E4u;
    SET_GPR_U32(ctx, 31, 0x31C2ECu);
    ctx->pc = 0x31C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2E4u;
    // 0x31c2e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31C2E4u, 0x31C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2ECu;
label_31c2ec:
    // 0x31c2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31c2f0:
    // 0x31c2f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31c2f4:
    // 0x31c2f4: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x31c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_31c2f8:
    // 0x31c2f8: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_31c2fc:
    if (ctx->pc == 0x31C2FCu) {
        ctx->pc = 0x31C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2F8u;
        // 0x31c2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C300u;
        goto label_31c300;
    }
    ctx->pc = 0x31C2F8u;
    {
        const bool branch_taken_0x31c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2F8u;
        // 0x31c2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2f8) {
            ctx->pc = 0x31C340u;
            return;
        }
    }
    ctx->pc = 0x31C300u;
label_31c300:
    // 0x31c300: 0xc0a3032  jal         func_28C0C8
label_31c304:
    if (ctx->pc == 0x31C304u) {
        ctx->pc = 0x31C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C300u;
        // 0x31c304: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C308u;
        goto label_31c308;
    }
    ctx->pc = 0x31C300u;
    SET_GPR_U32(ctx, 31, 0x31C308u);
    ctx->pc = 0x31C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C300u;
    // 0x31c304: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x31C300u, 0x31C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C308u;
label_31c308:
    // 0x31c308: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31c30c:
    // 0x31c30c: 0x10000003  b           . + 4 + (0x3 << 2)
label_31c310:
    if (ctx->pc == 0x31C310u) {
        ctx->pc = 0x31C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C30Cu;
        // 0x31c310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C314u;
        goto label_31c314;
    }
    ctx->pc = 0x31C30Cu;
    {
        const bool branch_taken_0x31c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C30Cu;
        // 0x31c310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c30c) {
            ctx->pc = 0x31C31Cu;
            goto label_31c31c;
        }
    }
    ctx->pc = 0x31C314u;
label_31c314:
    // 0x31c314: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31c318:
    // 0x31c318: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31c318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31c31c:
    // 0x31c31c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31c31cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31c320:
    // 0x31c320: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31c324:
    // 0x31c324: 0x60f809  jalr        $v1
label_31c328:
    if (ctx->pc == 0x31C328u) {
        ctx->pc = 0x31C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C324u;
        // 0x31c328: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C32Cu;
        goto label_31c32c;
    }
    ctx->pc = 0x31C324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31C32Cu);
        ctx->pc = 0x31C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C324u;
        // 0x31c328: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C324u, 0x31C32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C32Cu;
label_31c32c:
    // 0x31c32c: 0x10000004  b           . + 4 + (0x4 << 2)
label_31c330:
    if (ctx->pc == 0x31C330u) {
        ctx->pc = 0x31C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C32Cu;
        // 0x31c330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C334u;
        goto label_fallthrough_0x31c32c;
    }
    ctx->pc = 0x31C32Cu;
    {
        const bool branch_taken_0x31c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C32Cu;
        // 0x31c330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c32c) {
            ctx->pc = 0x31C340u;
            return;
        }
    }
label_fallthrough_0x31c32c:
    ctx->pc = 0x31C334u;
}
