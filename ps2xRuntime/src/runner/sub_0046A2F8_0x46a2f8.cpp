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

// Function: sub_0046A2F8
// Address: 0x46a2f8 - 0x46a3f0
void sub_0046A2F8_0x46a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A2F8_0x46a2f8");
#endif

    switch (ctx->pc) {
        case 0x46a2f8u: goto label_46a2f8;
        case 0x46a2fcu: goto label_46a2fc;
        case 0x46a300u: goto label_46a300;
        case 0x46a304u: goto label_46a304;
        case 0x46a308u: goto label_46a308;
        case 0x46a30cu: goto label_46a30c;
        case 0x46a310u: goto label_46a310;
        case 0x46a314u: goto label_46a314;
        case 0x46a318u: goto label_46a318;
        case 0x46a31cu: goto label_46a31c;
        case 0x46a320u: goto label_46a320;
        case 0x46a324u: goto label_46a324;
        case 0x46a328u: goto label_46a328;
        case 0x46a32cu: goto label_46a32c;
        case 0x46a330u: goto label_46a330;
        case 0x46a334u: goto label_46a334;
        case 0x46a338u: goto label_46a338;
        case 0x46a33cu: goto label_46a33c;
        case 0x46a340u: goto label_46a340;
        case 0x46a344u: goto label_46a344;
        case 0x46a348u: goto label_46a348;
        case 0x46a34cu: goto label_46a34c;
        case 0x46a350u: goto label_46a350;
        case 0x46a354u: goto label_46a354;
        case 0x46a358u: goto label_46a358;
        case 0x46a35cu: goto label_46a35c;
        case 0x46a360u: goto label_46a360;
        case 0x46a364u: goto label_46a364;
        case 0x46a368u: goto label_46a368;
        case 0x46a36cu: goto label_46a36c;
        case 0x46a370u: goto label_46a370;
        case 0x46a374u: goto label_46a374;
        case 0x46a378u: goto label_46a378;
        case 0x46a37cu: goto label_46a37c;
        case 0x46a380u: goto label_46a380;
        case 0x46a384u: goto label_46a384;
        case 0x46a388u: goto label_46a388;
        case 0x46a38cu: goto label_46a38c;
        case 0x46a390u: goto label_46a390;
        case 0x46a394u: goto label_46a394;
        case 0x46a398u: goto label_46a398;
        case 0x46a39cu: goto label_46a39c;
        case 0x46a3a0u: goto label_46a3a0;
        case 0x46a3a4u: goto label_46a3a4;
        case 0x46a3a8u: goto label_46a3a8;
        case 0x46a3acu: goto label_46a3ac;
        case 0x46a3b0u: goto label_46a3b0;
        case 0x46a3b4u: goto label_46a3b4;
        case 0x46a3b8u: goto label_46a3b8;
        case 0x46a3bcu: goto label_46a3bc;
        case 0x46a3c0u: goto label_46a3c0;
        case 0x46a3c4u: goto label_46a3c4;
        case 0x46a3c8u: goto label_46a3c8;
        case 0x46a3ccu: goto label_46a3cc;
        case 0x46a3d0u: goto label_46a3d0;
        case 0x46a3d4u: goto label_46a3d4;
        case 0x46a3d8u: goto label_46a3d8;
        case 0x46a3dcu: goto label_46a3dc;
        case 0x46a3e0u: goto label_46a3e0;
        case 0x46a3e4u: goto label_46a3e4;
        case 0x46a3e8u: goto label_46a3e8;
        case 0x46a3ecu: goto label_46a3ec;
        default: break;
    }

    ctx->pc = 0x46a2f8u;

label_46a2f8:
    // 0x46a2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46a2fc:
    // 0x46a2fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46a300:
    // 0x46a300: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_46a304:
    // 0x46a304: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46a308:
    // 0x46a308: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x46a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_46a30c:
    // 0x46a30c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46a310:
    // 0x46a310: 0xc11a890  jal         func_46A240
label_46a314:
    if (ctx->pc == 0x46A314u) {
        ctx->pc = 0x46A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A310u;
        // 0x46a314: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A318u;
        goto label_46a318;
    }
    ctx->pc = 0x46A310u;
    SET_GPR_U32(ctx, 31, 0x46A318u);
    ctx->pc = 0x46A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A310u;
    // 0x46a314: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A240u, 0x46A310u, 0x46A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A318u;
label_46a318:
    // 0x46a318: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_46a31c:
    if (ctx->pc == 0x46A31Cu) {
        ctx->pc = 0x46A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A318u;
        // 0x46a31c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A320u;
        goto label_46a320;
    }
    ctx->pc = 0x46A318u;
    {
        const bool branch_taken_0x46a318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A318u;
        // 0x46a31c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a318) {
            ctx->pc = 0x46A3D0u;
            goto label_46a3d0;
        }
    }
    ctx->pc = 0x46A320u;
label_46a320:
    // 0x46a320: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46a324:
    // 0x46a324: 0xc1210dc  jal         func_484370
label_46a328:
    if (ctx->pc == 0x46A328u) {
        ctx->pc = 0x46A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A324u;
        // 0x46a328: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A32Cu;
        goto label_46a32c;
    }
    ctx->pc = 0x46A324u;
    SET_GPR_U32(ctx, 31, 0x46A32Cu);
    ctx->pc = 0x46A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A324u;
    // 0x46a328: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484370u, 0x46A324u, 0x46A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A32Cu;
label_46a32c:
    // 0x46a32c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x46a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46a330:
    // 0x46a330: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x46a330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_46a334:
    // 0x46a334: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x46a334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46a338:
    // 0x46a338: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46a33c:
    // 0x46a33c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_46a340:
    if (ctx->pc == 0x46A340u) {
        ctx->pc = 0x46A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A33Cu;
        // 0x46a340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A344u;
        goto label_46a344;
    }
    ctx->pc = 0x46A33Cu;
    {
        const bool branch_taken_0x46a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A33Cu;
        // 0x46a340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a33c) {
            ctx->pc = 0x46A3C8u;
            goto label_46a3c8;
        }
    }
    ctx->pc = 0x46A344u;
label_46a344:
    // 0x46a344: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x46a344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46a348:
    // 0x46a348: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x46a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_46a34c:
    // 0x46a34c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x46a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_46a350:
    // 0x46a350: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x46a350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_46a354:
    // 0x46a354: 0x2473a940  addiu       $s3, $v1, -0x56C0
    ctx->pc = 0x46a354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_46a358:
    // 0x46a358: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x46a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_46a35c:
    // 0x46a35c: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_46a360:
    if (ctx->pc == 0x46A360u) {
        ctx->pc = 0x46A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A35Cu;
        // 0x46a360: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A364u;
        goto label_46a364;
    }
    ctx->pc = 0x46A35Cu;
    {
        const bool branch_taken_0x46a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x46A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A35Cu;
        // 0x46a360: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a35c) {
            ctx->pc = 0x46A384u;
            goto label_46a384;
        }
    }
    ctx->pc = 0x46A364u;
label_46a364:
    // 0x46a364: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x46a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_46a368:
    // 0x46a368: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46a368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a36c:
    // 0x46a36c: 0x260f809  jalr        $s3
label_46a370:
    if (ctx->pc == 0x46A370u) {
        ctx->pc = 0x46A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A36Cu;
        // 0x46a370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A374u;
        goto label_46a374;
    }
    ctx->pc = 0x46A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x46A374u);
        ctx->pc = 0x46A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A36Cu;
        // 0x46a370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A36Cu, 0x46A374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46A374u;
label_46a374:
    // 0x46a374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46a378:
    if (ctx->pc == 0x46A378u) {
        ctx->pc = 0x46A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A374u;
        // 0x46a378: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A37Cu;
        goto label_46a37c;
    }
    ctx->pc = 0x46A374u;
    {
        const bool branch_taken_0x46a374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A374u;
        // 0x46a378: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a374) {
            ctx->pc = 0x46A384u;
            goto label_46a384;
        }
    }
    ctx->pc = 0x46A37Cu;
label_46a37c:
    // 0x46a37c: 0x1451fffa  bne         $v0, $s1, . + 4 + (-0x6 << 2)
label_46a380:
    if (ctx->pc == 0x46A380u) {
        ctx->pc = 0x46A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A37Cu;
        // 0x46a380: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A384u;
        goto label_46a384;
    }
    ctx->pc = 0x46A37Cu;
    {
        const bool branch_taken_0x46a37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x46A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A37Cu;
        // 0x46a380: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a37c) {
            ctx->pc = 0x46A368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46a368;
        }
    }
    ctx->pc = 0x46A384u;
label_46a384:
    // 0x46a384: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46a388:
    // 0x46a388: 0xc1210ee  jal         func_4843B8
label_46a38c:
    if (ctx->pc == 0x46A38Cu) {
        ctx->pc = 0x46A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A388u;
        // 0x46a38c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A390u;
        goto label_46a390;
    }
    ctx->pc = 0x46A388u;
    SET_GPR_U32(ctx, 31, 0x46A390u);
    ctx->pc = 0x46A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A388u;
    // 0x46a38c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4843B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4843B8u, 0x46A388u, 0x46A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A390u;
label_46a390:
    // 0x46a390: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x46a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_46a394:
    // 0x46a394: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_46a398:
    if (ctx->pc == 0x46A398u) {
        ctx->pc = 0x46A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A394u;
        // 0x46a398: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A39Cu;
        goto label_46a39c;
    }
    ctx->pc = 0x46A394u;
    {
        const bool branch_taken_0x46a394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A394u;
        // 0x46a398: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a394) {
            ctx->pc = 0x46A3C4u;
            goto label_46a3c4;
        }
    }
    ctx->pc = 0x46A39Cu;
label_46a39c:
    // 0x46a39c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46a3a0:
    // 0x46a3a0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x46a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46a3a4:
    // 0x46a3a4: 0x2484e6c8  addiu       $a0, $a0, -0x1938
    ctx->pc = 0x46a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
label_46a3a8:
    // 0x46a3a8: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x46a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_46a3ac:
    // 0x46a3ac: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x46a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_46a3b0:
    // 0x46a3b0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x46a3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46a3b4:
    // 0x46a3b4: 0xc11ffcc  jal         func_47FF30
label_46a3b8:
    if (ctx->pc == 0x46A3B8u) {
        ctx->pc = 0x46A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A3B4u;
        // 0x46a3b8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A3BCu;
        goto label_46a3bc;
    }
    ctx->pc = 0x46A3B4u;
    SET_GPR_U32(ctx, 31, 0x46A3BCu);
    ctx->pc = 0x46A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A3B4u;
    // 0x46a3b8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FF30u, 0x46A3B4u, 0x46A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A3BCu;
label_46a3bc:
    // 0x46a3bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_46a3c0:
    if (ctx->pc == 0x46A3C0u) {
        ctx->pc = 0x46A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A3BCu;
        // 0x46a3c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A3C4u;
        goto label_46a3c4;
    }
    ctx->pc = 0x46A3BCu;
    {
        const bool branch_taken_0x46a3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A3BCu;
        // 0x46a3c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a3bc) {
            ctx->pc = 0x46A3D4u;
            goto label_46a3d4;
        }
    }
    ctx->pc = 0x46A3C4u;
label_46a3c4:
    // 0x46a3c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x46a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46a3c8:
    // 0x46a3c8: 0xc11a4fc  jal         func_4693F0
label_46a3cc:
    if (ctx->pc == 0x46A3CCu) {
        ctx->pc = 0x46A3D0u;
        goto label_46a3d0;
    }
    ctx->pc = 0x46A3C8u;
    SET_GPR_U32(ctx, 31, 0x46A3D0u);
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x46A3C8u, 0x46A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A3D0u;
label_46a3d0:
    // 0x46a3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46a3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46a3d4:
    // 0x46a3d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46a3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46a3d8:
    // 0x46a3d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46a3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46a3dc:
    // 0x46a3dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46a3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46a3e0:
    // 0x46a3e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46a3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a3e4:
    // 0x46a3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46a3e8:
    // 0x46a3e8: 0x3e00008  jr          $ra
label_46a3ec:
    if (ctx->pc == 0x46A3ECu) {
        ctx->pc = 0x46A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A3E8u;
        // 0x46a3ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A3F0u;
        goto label_fallthrough_0x46a3e8;
    }
    ctx->pc = 0x46A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A3E8u;
        // 0x46a3ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46a3e8:
    ctx->pc = 0x46A3F0u;
}
