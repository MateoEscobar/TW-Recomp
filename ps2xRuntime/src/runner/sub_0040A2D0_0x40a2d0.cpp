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

// Function: sub_0040A2D0
// Address: 0x40a2d0 - 0x40a3b0
void sub_0040A2D0_0x40a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A2D0_0x40a2d0");
#endif

    switch (ctx->pc) {
        case 0x40a2fcu: goto label_40a2fc;
        case 0x40a310u: goto label_40a310;
        case 0x40a324u: goto label_40a324;
        case 0x40a330u: goto label_40a330;
        case 0x40a338u: goto label_40a338;
        case 0x40a34cu: goto label_40a34c;
        case 0x40a35cu: goto label_40a35c;
        case 0x40a36cu: goto label_40a36c;
        case 0x40a378u: goto label_40a378;
        case 0x40a384u: goto label_40a384;
        case 0x40a390u: goto label_40a390;
        default: break;
    }

    ctx->pc = 0x40a2d0u;

    // 0x40a2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40a2d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x40a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x40a2d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x40a2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a2e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x40a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x40a2e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x40a2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a2e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x40a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40a2ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x40a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x40a2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a2f4: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40A2F4u;
    SET_GPR_U32(ctx, 31, 0x40A2FCu);
    ctx->pc = 0x40A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A2F4u;
    // 0x40a2f8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40A2F4u, 0x40A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A2FCu;
label_40a2fc:
    // 0x40a2fc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x40a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x40a300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40a300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a304: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a308: 0xc103090  jal         func_40C240
    ctx->pc = 0x40A308u;
    SET_GPR_U32(ctx, 31, 0x40A310u);
    ctx->pc = 0x40A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A308u;
    // 0x40a30c: 0x24848180  addiu       $a0, $a0, -0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C240u, 0x40A308u, 0x40A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A310u;
label_40a310:
    // 0x40a310: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a314: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40a314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a31c: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A31Cu;
    SET_GPR_U32(ctx, 31, 0x40A324u);
    ctx->pc = 0x40A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A31Cu;
    // 0x40a320: 0x24a58170  addiu       $a1, $a1, -0x7E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A31Cu, 0x40A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A324u;
label_40a324:
    // 0x40a324: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40a324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40a328: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40A328u;
    SET_GPR_U32(ctx, 31, 0x40A330u);
    ctx->pc = 0x40A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A328u;
    // 0x40a32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40A328u, 0x40A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A330u;
label_40a330:
    // 0x40a330: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40A330u;
    SET_GPR_U32(ctx, 31, 0x40A338u);
    ctx->pc = 0x40A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A330u;
    // 0x40a334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40A330u, 0x40A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A338u;
label_40a338:
    // 0x40a338: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40a338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a344: 0xc0cc9b8  jal         func_3326E0
    ctx->pc = 0x40A344u;
    SET_GPR_U32(ctx, 31, 0x40A34Cu);
    ctx->pc = 0x40A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A344u;
    // 0x40a348: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326E0u, 0x40A344u, 0x40A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A34Cu;
label_40a34c:
    // 0x40a34c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x40a34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a354: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40A354u;
    SET_GPR_U32(ctx, 31, 0x40A35Cu);
    ctx->pc = 0x40A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A354u;
    // 0x40a358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40A354u, 0x40A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A35Cu;
label_40a35c:
    // 0x40a35c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40a35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a364: 0xc10306e  jal         func_40C1B8
    ctx->pc = 0x40A364u;
    SET_GPR_U32(ctx, 31, 0x40A36Cu);
    ctx->pc = 0x40A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A364u;
    // 0x40a368: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C1B8u, 0x40A364u, 0x40A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A36Cu;
label_40a36c:
    // 0x40a36c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40a36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a370: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40A370u;
    SET_GPR_U32(ctx, 31, 0x40A378u);
    ctx->pc = 0x40A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A370u;
    // 0x40a374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40A370u, 0x40A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A378u;
label_40a378:
    // 0x40a378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a37c: 0xc0c9064  jal         func_324190
    ctx->pc = 0x40A37Cu;
    SET_GPR_U32(ctx, 31, 0x40A384u);
    ctx->pc = 0x40A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A37Cu;
    // 0x40a380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324190u, 0x40A37Cu, 0x40A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A384u;
label_40a384:
    // 0x40a384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a388: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A388u;
    SET_GPR_U32(ctx, 31, 0x40A390u);
    ctx->pc = 0x40A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A388u;
    // 0x40a38c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A388u, 0x40A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A390u;
label_40a390:
    // 0x40a390: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x40a390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40a394: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40a394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40a398: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40a398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40a39c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x40a39cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a3a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x40a3a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x40A3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A3A8u;
        // 0x40a3ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A3B0u;
}
