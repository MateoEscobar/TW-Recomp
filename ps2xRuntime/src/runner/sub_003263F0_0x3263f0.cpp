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

// Function: sub_003263F0
// Address: 0x3263f0 - 0x326478
void sub_003263F0_0x3263f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003263F0_0x3263f0");
#endif

    switch (ctx->pc) {
        case 0x326410u: goto label_326410;
        case 0x32641cu: goto label_32641c;
        case 0x32642cu: goto label_32642c;
        case 0x326444u: goto label_326444;
        case 0x326450u: goto label_326450;
        case 0x326460u: goto label_326460;
        default: break;
    }

    ctx->pc = 0x3263f0u;

    // 0x3263f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3263f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3263f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3263f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3263f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3263f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3263fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3263fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326408: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x326408u;
    SET_GPR_U32(ctx, 31, 0x326410u);
    ctx->pc = 0x32640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326408u;
    // 0x32640c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x326408u, 0x326410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326410u;
label_326410:
    // 0x326410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326414: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x326414u;
    SET_GPR_U32(ctx, 31, 0x32641Cu);
    ctx->pc = 0x326418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326414u;
    // 0x326418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242E0u, 0x326414u, 0x32641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32641Cu;
label_32641c:
    // 0x32641c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32641cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326424: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x326424u;
    SET_GPR_U32(ctx, 31, 0x32642Cu);
    ctx->pc = 0x326428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326424u;
    // 0x326428: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x326424u, 0x32642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32642Cu;
label_32642c:
    // 0x32642c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326430: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326430u;
    {
        const bool branch_taken_0x326430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x326434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326430u;
        // 0x326434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326430) {
            ctx->pc = 0x326444u;
            goto label_326444;
        }
    }
    ctx->pc = 0x326438u;
    // 0x326438: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x326438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32643c: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x32643Cu;
    SET_GPR_U32(ctx, 31, 0x326444u);
    ctx->pc = 0x326440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32643Cu;
    // 0x326440: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x32643Cu, 0x326444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326444u;
label_326444:
    // 0x326444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326448: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x326448u;
    SET_GPR_U32(ctx, 31, 0x326450u);
    ctx->pc = 0x32644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326448u;
    // 0x32644c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x326448u, 0x326450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326450u;
label_326450:
    // 0x326450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x326454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326458: 0xc0c9836  jal         func_3260D8
    ctx->pc = 0x326458u;
    SET_GPR_U32(ctx, 31, 0x326460u);
    ctx->pc = 0x32645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326458u;
    // 0x32645c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260D8u, 0x326458u, 0x326460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326460u;
label_326460:
    // 0x326460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x326460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32646c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32646cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326470: 0x3e00008  jr          $ra
    ctx->pc = 0x326470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326470u;
        // 0x326474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326478u;
}
