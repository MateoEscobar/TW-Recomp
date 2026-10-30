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

// Function: sub_0037B358
// Address: 0x37b358 - 0x37b3b0
void sub_0037B358_0x37b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B358_0x37b358");
#endif

    switch (ctx->pc) {
        case 0x37b378u: goto label_37b378;
        case 0x37b380u: goto label_37b380;
        case 0x37b388u: goto label_37b388;
        case 0x37b390u: goto label_37b390;
        case 0x37b39cu: goto label_37b39c;
        default: break;
    }

    ctx->pc = 0x37b358u;

    // 0x37b358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b35c: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b360: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b368: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b370: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B370u;
    SET_GPR_U32(ctx, 31, 0x37B378u);
    ctx->pc = 0x37B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B370u;
    // 0x37b374: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B370u, 0x37B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B378u;
label_37b378:
    // 0x37b378: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B378u;
    SET_GPR_U32(ctx, 31, 0x37B380u);
    ctx->pc = 0x37B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B378u;
    // 0x37b37c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B378u, 0x37B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B380u;
label_37b380:
    // 0x37b380: 0xc107ba2  jal         func_41EE88
    ctx->pc = 0x37B380u;
    SET_GPR_U32(ctx, 31, 0x37B388u);
    ctx->pc = 0x37B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B380u;
    // 0x37b384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EE88u, 0x37B380u, 0x37B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B388u;
label_37b388:
    // 0x37b388: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B388u;
    SET_GPR_U32(ctx, 31, 0x37B390u);
    ctx->pc = 0x37B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B388u;
    // 0x37b38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B388u, 0x37B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B390u;
label_37b390:
    // 0x37b390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b394: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B394u;
    SET_GPR_U32(ctx, 31, 0x37B39Cu);
    ctx->pc = 0x37B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B394u;
    // 0x37b398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B394u, 0x37B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B39Cu;
label_37b39c:
    // 0x37b39c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3A8u;
        // 0x37b3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B3B0u;
}
