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

// Function: sub_002CA380
// Address: 0x2ca380 - 0x2ca3e8
void sub_002CA380_0x2ca380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA380_0x2ca380");
#endif

    switch (ctx->pc) {
        case 0x2ca3a0u: goto label_2ca3a0;
        case 0x2ca3acu: goto label_2ca3ac;
        case 0x2ca3c4u: goto label_2ca3c4;
        case 0x2ca3d0u: goto label_2ca3d0;
        default: break;
    }

    ctx->pc = 0x2ca380u;

    // 0x2ca380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca38c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca390: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca394: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ca394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ca398: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2CA398u;
    SET_GPR_U32(ctx, 31, 0x2CA3A0u);
    ctx->pc = 0x2CA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA398u;
    // 0x2ca39c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CA398u, 0x2CA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3A0u;
label_2ca3a0:
    // 0x2ca3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3a4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2CA3A4u;
    SET_GPR_U32(ctx, 31, 0x2CA3ACu);
    ctx->pc = 0x2CA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA3A4u;
    // 0x2ca3a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2CA3A4u, 0x2CA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3ACu;
label_2ca3ac:
    // 0x2ca3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3b0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA3B0u;
    {
        const bool branch_taken_0x2ca3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3B0u;
        // 0x2ca3b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3b0) {
            ctx->pc = 0x2CA3D4u;
            goto label_2ca3d4;
        }
    }
    ctx->pc = 0x2CA3B8u;
    // 0x2ca3b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ca3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ca3bc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2CA3BCu;
    SET_GPR_U32(ctx, 31, 0x2CA3C4u);
    ctx->pc = 0x2CA3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA3BCu;
    // 0x2ca3c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CA3BCu, 0x2CA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3C4u;
label_2ca3c4:
    // 0x2ca3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca3c8: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2CA3C8u;
    SET_GPR_U32(ctx, 31, 0x2CA3D0u);
    ctx->pc = 0x2CA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA3C8u;
    // 0x2ca3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2CA3C8u, 0x2CA3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3D0u;
label_2ca3d0:
    // 0x2ca3d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca3d4:
    // 0x2ca3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3DCu;
        // 0x2ca3e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA3E4u;
    // 0x2ca3e4: 0x0  nop
    ctx->pc = 0x2ca3e4u;
    // NOP
    ctx->pc = 0x2ca3e8u;
}
