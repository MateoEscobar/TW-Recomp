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

// Function: sub_0014B3D0
// Address: 0x14b3d0 - 0x14b4c8
void sub_0014B3D0_0x14b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3D0_0x14b3d0");
#endif

    switch (ctx->pc) {
        case 0x14b408u: goto label_14b408;
        case 0x14b424u: goto label_14b424;
        case 0x14b440u: goto label_14b440;
        case 0x14b45cu: goto label_14b45c;
        case 0x14b478u: goto label_14b478;
        case 0x14b488u: goto label_14b488;
        default: break;
    }

    ctx->pc = 0x14b3d0u;

    // 0x14b3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b3d4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14b3d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14b3d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14b3e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b3e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14b3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3ec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b3f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14b3f4: 0x24a5aa18  addiu       $a1, $a1, -0x55E8
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945304));
    // 0x14b3f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14b3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b400: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14B400u;
    SET_GPR_U32(ctx, 31, 0x14B408u);
    ctx->pc = 0x14B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B400u;
    // 0x14b404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14B400u, 0x14B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B408u;
label_14b408:
    // 0x14b408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B408u;
    {
        const bool branch_taken_0x14b408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B408u;
        // 0x14b40c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b408) {
            ctx->pc = 0x14B418u;
            goto label_14b418;
        }
    }
    ctx->pc = 0x14B410u;
    // 0x14b410: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14B410u;
    {
        const bool branch_taken_0x14b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B410u;
        // 0x14b414: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b410) {
            ctx->pc = 0x14B468u;
            goto label_14b468;
        }
    }
    ctx->pc = 0x14B418u;
label_14b418:
    // 0x14b418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b41c: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14B41Cu;
    SET_GPR_U32(ctx, 31, 0x14B424u);
    ctx->pc = 0x14B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B41Cu;
    // 0x14b420: 0x24a5aa20  addiu       $a1, $a1, -0x55E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14B41Cu, 0x14B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B424u;
label_14b424:
    // 0x14b424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B424u;
    {
        const bool branch_taken_0x14b424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B424u;
        // 0x14b428: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b424) {
            ctx->pc = 0x14B434u;
            goto label_14b434;
        }
    }
    ctx->pc = 0x14B42Cu;
    // 0x14b42c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14B42Cu;
    {
        const bool branch_taken_0x14b42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B42Cu;
        // 0x14b430: 0x24110202  addiu       $s1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b42c) {
            ctx->pc = 0x14B468u;
            goto label_14b468;
        }
    }
    ctx->pc = 0x14B434u;
label_14b434:
    // 0x14b434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b438: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14B438u;
    SET_GPR_U32(ctx, 31, 0x14B440u);
    ctx->pc = 0x14B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B438u;
    // 0x14b43c: 0x24a5aa28  addiu       $a1, $a1, -0x55D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14B438u, 0x14B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B440u;
label_14b440:
    // 0x14b440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B440u;
    {
        const bool branch_taken_0x14b440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B440u;
        // 0x14b444: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b440) {
            ctx->pc = 0x14B450u;
            goto label_14b450;
        }
    }
    ctx->pc = 0x14B448u;
    // 0x14b448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B448u;
    {
        const bool branch_taken_0x14b448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B448u;
        // 0x14b44c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b448) {
            ctx->pc = 0x14B468u;
            goto label_14b468;
        }
    }
    ctx->pc = 0x14B450u;
label_14b450:
    // 0x14b450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b454: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14B454u;
    SET_GPR_U32(ctx, 31, 0x14B45Cu);
    ctx->pc = 0x14B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B454u;
    // 0x14b458: 0x24a5aa30  addiu       $a1, $a1, -0x55D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14B454u, 0x14B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B45Cu;
label_14b45c:
    // 0x14b45c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B45Cu;
    {
        const bool branch_taken_0x14b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B45Cu;
        // 0x14b460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b45c) {
            ctx->pc = 0x14B4A8u;
            goto label_14b4a8;
        }
    }
    ctx->pc = 0x14B464u;
    // 0x14b464: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x14b464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14b468:
    // 0x14b468: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b46c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x14b46cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b470: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14b470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b474: 0x0  nop
    ctx->pc = 0x14b474u;
    // NOP
label_14b478:
    // 0x14b478: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14b478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b47c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x14b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b480: 0xc111438  jal         func_4450E0
    ctx->pc = 0x14B480u;
    SET_GPR_U32(ctx, 31, 0x14B488u);
    ctx->pc = 0x14B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B480u;
    // 0x14b484: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4450E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4450E0u, 0x14B480u, 0x14B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B488u;
label_14b488:
    // 0x14b488: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14b488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b48c: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x14b48cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b490: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B490u;
    {
        const bool branch_taken_0x14b490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B490u;
        // 0x14b494: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b490) {
            ctx->pc = 0x14B4A4u;
            goto label_14b4a4;
        }
    }
    ctx->pc = 0x14B498u;
    // 0x14b498: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b49c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14B49Cu;
    {
        const bool branch_taken_0x14b49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b49c) {
            ctx->pc = 0x14B4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B49Cu;
            // 0x14b4a0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b478;
        }
    }
    ctx->pc = 0x14B4A4u;
label_14b4a4:
    // 0x14b4a4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_14b4a8:
    // 0x14b4a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14b4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b4ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14b4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b4b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b4b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b4b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14b4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b4b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14b4b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4C0u;
        // 0x14b4c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B4C8u;
}
