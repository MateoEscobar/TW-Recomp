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

// Function: sub_0029C3A0
// Address: 0x29c3a0 - 0x29c3f8
void sub_0029C3A0_0x29c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C3A0_0x29c3a0");
#endif

    switch (ctx->pc) {
        case 0x29c3b8u: goto label_29c3b8;
        case 0x29c3d4u: goto label_29c3d4;
        default: break;
    }

    ctx->pc = 0x29c3a0u;

    // 0x29c3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c3a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29c3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29c3ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c3b0: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C3B0u;
    SET_GPR_U32(ctx, 31, 0x29C3B8u);
    ctx->pc = 0x29C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3B0u;
    // 0x29c3b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C3B0u, 0x29C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3B8u;
label_29c3b8:
    // 0x29c3b8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x29c3bc: 0x84820032  lh          $v0, 0x32($a0)
    ctx->pc = 0x29c3bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x29c3c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29c3c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C3C4u;
    {
        const bool branch_taken_0x29c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3c4) {
            ctx->pc = 0x29C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C3C4u;
            // 0x29c3c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C3E0u;
            goto label_29c3e0;
        }
    }
    ctx->pc = 0x29C3CCu;
    // 0x29c3cc: 0xc05a596  jal         func_169658
    ctx->pc = 0x29C3CCu;
    SET_GPR_U32(ctx, 31, 0x29C3D4u);
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x29C3CCu, 0x29C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3D4u;
label_29c3d4:
    // 0x29c3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C3D4u;
    {
        const bool branch_taken_0x29c3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3D4u;
        // 0x29c3d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3d4) {
            ctx->pc = 0x29C3E4u;
            goto label_29c3e4;
        }
    }
    ctx->pc = 0x29C3DCu;
    // 0x29c3dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29c3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c3e0:
    // 0x29c3e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c3e4:
    // 0x29c3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c3e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29c3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29C3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3ECu;
        // 0x29c3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C3F4u;
    // 0x29c3f4: 0x0  nop
    ctx->pc = 0x29c3f4u;
    // NOP
    ctx->pc = 0x29c3f8u;
}
