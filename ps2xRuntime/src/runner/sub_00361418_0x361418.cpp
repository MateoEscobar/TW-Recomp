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

// Function: sub_00361418
// Address: 0x361418 - 0x3614f8
void sub_00361418_0x361418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361418_0x361418");
#endif

    switch (ctx->pc) {
        case 0x361448u: goto label_361448;
        case 0x361450u: goto label_361450;
        case 0x361464u: goto label_361464;
        case 0x36146cu: goto label_36146c;
        case 0x361480u: goto label_361480;
        case 0x361488u: goto label_361488;
        case 0x36149cu: goto label_36149c;
        case 0x3614a4u: goto label_3614a4;
        case 0x3614b8u: goto label_3614b8;
        case 0x3614d0u: goto label_3614d0;
        default: break;
    }

    ctx->pc = 0x361418u;

    // 0x361418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36141c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361420: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x361420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x361424: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x361424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x361428: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36142c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36142cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x361430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x361434: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x361434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x361438: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x361438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36143c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361440: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361440u;
    SET_GPR_U32(ctx, 31, 0x361448u);
    ctx->pc = 0x361444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361440u;
    // 0x361444: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361440u, 0x361448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361448u;
label_361448:
    // 0x361448: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361448u;
    SET_GPR_U32(ctx, 31, 0x361450u);
    ctx->pc = 0x36144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361448u;
    // 0x36144c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361448u, 0x361450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361450u;
label_361450:
    // 0x361450: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361454: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361458: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36145c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36145Cu;
    SET_GPR_U32(ctx, 31, 0x361464u);
    ctx->pc = 0x361460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36145Cu;
    // 0x361460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36145Cu, 0x361464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361464u;
label_361464:
    // 0x361464: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361464u;
    SET_GPR_U32(ctx, 31, 0x36146Cu);
    ctx->pc = 0x361468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361464u;
    // 0x361468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361464u, 0x36146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36146Cu;
label_36146c:
    // 0x36146c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36146cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361470: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361474: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361478: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361478u;
    SET_GPR_U32(ctx, 31, 0x361480u);
    ctx->pc = 0x36147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361478u;
    // 0x36147c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361478u, 0x361480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361480u;
label_361480:
    // 0x361480: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361480u;
    SET_GPR_U32(ctx, 31, 0x361488u);
    ctx->pc = 0x361484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361480u;
    // 0x361484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361480u, 0x361488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361488u;
label_361488:
    // 0x361488: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36148c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36148cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361490: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361494: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361494u;
    SET_GPR_U32(ctx, 31, 0x36149Cu);
    ctx->pc = 0x361498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361494u;
    // 0x361498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361494u, 0x36149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36149Cu;
label_36149c:
    // 0x36149c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36149Cu;
    SET_GPR_U32(ctx, 31, 0x3614A4u);
    ctx->pc = 0x3614A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36149Cu;
    // 0x3614a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36149Cu, 0x3614A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614A4u;
label_3614a4:
    // 0x3614a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3614a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3614a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3614acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3614b0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3614B0u;
    SET_GPR_U32(ctx, 31, 0x3614B8u);
    ctx->pc = 0x3614B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3614B0u;
    // 0x3614b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3614B0u, 0x3614B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614B8u;
label_3614b8:
    // 0x3614b8: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x3614b8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3614bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3614bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3614c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3614c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614c8: 0xc0b9412  jal         func_2E5048
    ctx->pc = 0x3614C8u;
    SET_GPR_U32(ctx, 31, 0x3614D0u);
    ctx->pc = 0x3614CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3614C8u;
    // 0x3614cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5048u, 0x3614C8u, 0x3614D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614D0u;
label_3614d0:
    // 0x3614d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3614d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3614d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3614d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3614d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3614dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3614dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3614e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3614e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3614e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3614e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3614e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3614e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3614ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3614ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3614F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3614ECu;
        // 0x3614f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3614ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3614F4u;
    // 0x3614f4: 0x0  nop
    ctx->pc = 0x3614f4u;
    // NOP
    ctx->pc = 0x3614f8u;
}
