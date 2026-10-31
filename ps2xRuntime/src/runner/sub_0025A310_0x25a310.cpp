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

// Function: sub_0025A310
// Address: 0x25a310 - 0x25a3e0
void sub_0025A310_0x25a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A310_0x25a310");
#endif

    switch (ctx->pc) {
        case 0x25a310u: goto label_25a310;
        case 0x25a314u: goto label_25a314;
        case 0x25a318u: goto label_25a318;
        case 0x25a31cu: goto label_25a31c;
        case 0x25a320u: goto label_25a320;
        case 0x25a324u: goto label_25a324;
        case 0x25a328u: goto label_25a328;
        case 0x25a32cu: goto label_25a32c;
        case 0x25a330u: goto label_25a330;
        case 0x25a334u: goto label_25a334;
        case 0x25a338u: goto label_25a338;
        case 0x25a33cu: goto label_25a33c;
        case 0x25a340u: goto label_25a340;
        case 0x25a344u: goto label_25a344;
        case 0x25a348u: goto label_25a348;
        case 0x25a34cu: goto label_25a34c;
        case 0x25a350u: goto label_25a350;
        case 0x25a354u: goto label_25a354;
        case 0x25a358u: goto label_25a358;
        case 0x25a35cu: goto label_25a35c;
        case 0x25a360u: goto label_25a360;
        case 0x25a364u: goto label_25a364;
        case 0x25a368u: goto label_25a368;
        case 0x25a36cu: goto label_25a36c;
        case 0x25a370u: goto label_25a370;
        case 0x25a374u: goto label_25a374;
        case 0x25a378u: goto label_25a378;
        case 0x25a37cu: goto label_25a37c;
        case 0x25a380u: goto label_25a380;
        case 0x25a384u: goto label_25a384;
        case 0x25a388u: goto label_25a388;
        case 0x25a38cu: goto label_25a38c;
        case 0x25a390u: goto label_25a390;
        case 0x25a394u: goto label_25a394;
        case 0x25a398u: goto label_25a398;
        case 0x25a39cu: goto label_25a39c;
        case 0x25a3a0u: goto label_25a3a0;
        case 0x25a3a4u: goto label_25a3a4;
        case 0x25a3a8u: goto label_25a3a8;
        case 0x25a3acu: goto label_25a3ac;
        case 0x25a3b0u: goto label_25a3b0;
        case 0x25a3b4u: goto label_25a3b4;
        case 0x25a3b8u: goto label_25a3b8;
        case 0x25a3bcu: goto label_25a3bc;
        case 0x25a3c0u: goto label_25a3c0;
        case 0x25a3c4u: goto label_25a3c4;
        case 0x25a3c8u: goto label_25a3c8;
        case 0x25a3ccu: goto label_25a3cc;
        case 0x25a3d0u: goto label_25a3d0;
        case 0x25a3d4u: goto label_25a3d4;
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a3dcu: goto label_25a3dc;
        default: break;
    }

    ctx->pc = 0x25a310u;

label_25a310:
    // 0x25a310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25a314:
    // 0x25a314: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25a318:
    // 0x25a318: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25a31c:
    // 0x25a31c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a320:
    // 0x25a320: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25a324:
    // 0x25a324: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25a324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25a328:
    // 0x25a328: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25a328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25a32c:
    // 0x25a32c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25a330:
    // 0x25a330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25a334:
    // 0x25a334: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25a334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_25a338:
    // 0x25a338: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a33c:
    // 0x25a33c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x25a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_25a340:
    // 0x25a340: 0xc089990  jal         func_226640
label_25a344:
    if (ctx->pc == 0x25A344u) {
        ctx->pc = 0x25A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A340u;
        // 0x25a344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A348u;
        goto label_25a348;
    }
    ctx->pc = 0x25A340u;
    SET_GPR_U32(ctx, 31, 0x25A348u);
    ctx->pc = 0x25A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A340u;
    // 0x25a344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25A340u, 0x25A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A348u;
label_25a348:
    // 0x25a348: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x25a348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_25a34c:
    // 0x25a34c: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x25a34cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a350:
    // 0x25a350: 0xc041532  jal         func_1054C8
label_25a354:
    if (ctx->pc == 0x25A354u) {
        ctx->pc = 0x25A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A350u;
        // 0x25a354: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A358u;
        goto label_25a358;
    }
    ctx->pc = 0x25A350u;
    SET_GPR_U32(ctx, 31, 0x25A358u);
    ctx->pc = 0x25A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A350u;
    // 0x25a354: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A350u, 0x25A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A358u;
label_25a358:
    // 0x25a358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25a358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a35c:
    // 0x25a35c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_25a360:
    if (ctx->pc == 0x25A360u) {
        ctx->pc = 0x25A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A35Cu;
        // 0x25a360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A364u;
        goto label_25a364;
    }
    ctx->pc = 0x25A35Cu;
    {
        const bool branch_taken_0x25a35c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A35Cu;
        // 0x25a360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a35c) {
            ctx->pc = 0x25A3B4u;
            goto label_25a3b4;
        }
    }
    ctx->pc = 0x25A364u;
label_25a364:
    // 0x25a364: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a368:
    // 0x25a368: 0x8e3000d4  lw          $s0, 0xD4($s1)
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a36c:
    // 0x25a36c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25a36cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25a370:
    // 0x25a370: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25a374:
    // 0x25a374: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_25a378:
    // 0x25a378: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25a378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25a37c:
    // 0x25a37c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25a37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25a380:
    // 0x25a380: 0x40f809  jalr        $v0
label_25a384:
    if (ctx->pc == 0x25A384u) {
        ctx->pc = 0x25A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A380u;
        // 0x25a384: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A388u;
        goto label_25a388;
    }
    ctx->pc = 0x25A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A388u);
        ctx->pc = 0x25A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A380u;
        // 0x25a384: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A380u, 0x25A388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A388u;
label_25a388:
    // 0x25a388: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25a38c:
    // 0x25a38c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x25a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_25a390:
    // 0x25a390: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x25a390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a394:
    // 0x25a394: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25a394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a398:
    // 0x25a398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a39c:
    // 0x25a39c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25a39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a3a0:
    // 0x25a3a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x25a3a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_25a3a4:
    // 0x25a3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25a3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a3a8:
    // 0x25a3a8: 0xc041890  jal         func_106240
label_25a3ac:
    if (ctx->pc == 0x25A3ACu) {
        ctx->pc = 0x25A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3A8u;
        // 0x25a3ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A3B0u;
        goto label_25a3b0;
    }
    ctx->pc = 0x25A3A8u;
    SET_GPR_U32(ctx, 31, 0x25A3B0u);
    ctx->pc = 0x25A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A3A8u;
    // 0x25a3ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x25A3A8u, 0x25A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3B0u;
label_25a3b0:
    // 0x25a3b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a3b4:
    // 0x25a3b4: 0xc05d4f6  jal         func_1753D8
label_25a3b8:
    if (ctx->pc == 0x25A3B8u) {
        ctx->pc = 0x25A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3B4u;
        // 0x25a3b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A3BCu;
        goto label_25a3bc;
    }
    ctx->pc = 0x25A3B4u;
    SET_GPR_U32(ctx, 31, 0x25A3BCu);
    ctx->pc = 0x25A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A3B4u;
    // 0x25a3b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25A3B4u, 0x25A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3BCu;
label_25a3bc:
    // 0x25a3bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25a3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25a3c0:
    // 0x25a3c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25a3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25a3c4:
    // 0x25a3c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25a3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25a3c8:
    // 0x25a3c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25a3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25a3cc:
    // 0x25a3cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25a3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25a3d0:
    // 0x25a3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25a3d4:
    // 0x25a3d4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25a3d8:
    // 0x25a3d8: 0x3e00008  jr          $ra
label_25a3dc:
    if (ctx->pc == 0x25A3DCu) {
        ctx->pc = 0x25A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3D8u;
        // 0x25a3dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A3E0u;
        goto label_fallthrough_0x25a3d8;
    }
    ctx->pc = 0x25A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3D8u;
        // 0x25a3dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25a3d8:
    ctx->pc = 0x25A3E0u;
}
