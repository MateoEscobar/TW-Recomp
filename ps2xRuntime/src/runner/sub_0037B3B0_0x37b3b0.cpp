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

// Function: sub_0037B3B0
// Address: 0x37b3b0 - 0x37b420
void sub_0037B3B0_0x37b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B3B0_0x37b3b0");
#endif

    switch (ctx->pc) {
        case 0x37b3d0u: goto label_37b3d0;
        case 0x37b3d8u: goto label_37b3d8;
        case 0x37b3f0u: goto label_37b3f0;
        case 0x37b3f8u: goto label_37b3f8;
        case 0x37b404u: goto label_37b404;
        default: break;
    }

    ctx->pc = 0x37b3b0u;

    // 0x37b3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b3b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b3bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b3c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B3C8u;
    SET_GPR_U32(ctx, 31, 0x37B3D0u);
    ctx->pc = 0x37B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3C8u;
    // 0x37b3cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B3C8u, 0x37B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B3D0u;
label_37b3d0:
    // 0x37b3d0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B3D0u;
    SET_GPR_U32(ctx, 31, 0x37B3D8u);
    ctx->pc = 0x37B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3D0u;
    // 0x37b3d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B3D0u, 0x37B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B3D8u;
label_37b3d8:
    // 0x37b3d8: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b3d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b3dc: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b3dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b3e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B3E8u;
    SET_GPR_U32(ctx, 31, 0x37B3F0u);
    ctx->pc = 0x37B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3E8u;
    // 0x37b3ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B3E8u, 0x37B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B3F0u;
label_37b3f0:
    // 0x37b3f0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B3F0u;
    SET_GPR_U32(ctx, 31, 0x37B3F8u);
    ctx->pc = 0x37B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3F0u;
    // 0x37b3f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B3F0u, 0x37B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B3F8u;
label_37b3f8:
    // 0x37b3f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3fc: 0xc107bae  jal         func_41EEB8
    ctx->pc = 0x37B3FCu;
    SET_GPR_U32(ctx, 31, 0x37B404u);
    ctx->pc = 0x37B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3FCu;
    // 0x37b400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EEB8u, 0x37B3FCu, 0x37B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B404u;
label_37b404:
    // 0x37b404: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b414: 0x3e00008  jr          $ra
    ctx->pc = 0x37B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B414u;
        // 0x37b418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B41Cu;
    // 0x37b41c: 0x0  nop
    ctx->pc = 0x37b41cu;
    // NOP
    ctx->pc = 0x37b420u;
}
