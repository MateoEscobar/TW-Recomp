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

// Function: sub_0040B3C0
// Address: 0x40b3c0 - 0x40b410
void sub_0040B3C0_0x40b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B3C0_0x40b3c0");
#endif

    switch (ctx->pc) {
        case 0x40b3d4u: goto label_40b3d4;
        case 0x40b3e0u: goto label_40b3e0;
        case 0x40b3e8u: goto label_40b3e8;
        case 0x40b3f8u: goto label_40b3f8;
        default: break;
    }

    ctx->pc = 0x40b3c0u;

    // 0x40b3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b3c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b3cc: 0xc102cc6  jal         func_40B318
    ctx->pc = 0x40B3CCu;
    SET_GPR_U32(ctx, 31, 0x40B3D4u);
    ctx->pc = 0x40B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B3CCu;
    // 0x40b3d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B318u, 0x40B3CCu, 0x40B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B3D4u;
label_40b3d4:
    // 0x40b3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b3d8: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40B3D8u;
    SET_GPR_U32(ctx, 31, 0x40B3E0u);
    ctx->pc = 0x40B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B3D8u;
    // 0x40b3dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40B3D8u, 0x40B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B3E0u;
label_40b3e0:
    // 0x40b3e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40B3E0u;
    SET_GPR_U32(ctx, 31, 0x40B3E8u);
    ctx->pc = 0x40B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B3E0u;
    // 0x40b3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40B3E0u, 0x40B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B3E8u;
label_40b3e8:
    // 0x40b3e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x40B3E8u;
    {
        const bool branch_taken_0x40b3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b3e8) {
            ctx->pc = 0x40B3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B3E8u;
            // 0x40b3ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B3FCu;
            goto label_40b3fc;
        }
    }
    ctx->pc = 0x40B3F0u;
    // 0x40b3f0: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x40B3F0u;
    SET_GPR_U32(ctx, 31, 0x40B3F8u);
    ctx->pc = 0x40B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B3F0u;
    // 0x40b3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x40B3F0u, 0x40B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B3F8u;
label_40b3f8:
    // 0x40b3f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40b3fc:
    // 0x40b3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b404: 0x3e00008  jr          $ra
    ctx->pc = 0x40B404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B404u;
        // 0x40b408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B40Cu;
    // 0x40b40c: 0x0  nop
    ctx->pc = 0x40b40cu;
    // NOP
    ctx->pc = 0x40b410u;
}
