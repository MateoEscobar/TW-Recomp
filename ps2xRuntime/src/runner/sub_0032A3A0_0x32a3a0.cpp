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

// Function: sub_0032A3A0
// Address: 0x32a3a0 - 0x32a3e8
void sub_0032A3A0_0x32a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A3A0_0x32a3a0");
#endif

    switch (ctx->pc) {
        case 0x32a3c4u: goto label_32a3c4;
        case 0x32a3d8u: goto label_32a3d8;
        default: break;
    }

    ctx->pc = 0x32a3a0u;

    // 0x32a3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a3a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32a3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a3a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32a3ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x32a3b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a3b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a3b8: 0x24455468  addiu       $a1, $v0, 0x5468
    ctx->pc = 0x32a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21608));
    // 0x32a3bc: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32A3BCu;
    SET_GPR_U32(ctx, 31, 0x32A3C4u);
    ctx->pc = 0x32A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3BCu;
    // 0x32a3c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32A3BCu, 0x32A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3C4u;
label_32a3c4:
    // 0x32a3c4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32a3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a3cc: 0x24a55470  addiu       $a1, $a1, 0x5470
    ctx->pc = 0x32a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21616));
    // 0x32a3d0: 0xc0ca8a0  jal         func_32A280
    ctx->pc = 0x32A3D0u;
    SET_GPR_U32(ctx, 31, 0x32A3D8u);
    ctx->pc = 0x32A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3D0u;
    // 0x32a3d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A280u, 0x32A3D0u, 0x32A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3D8u;
label_32a3d8:
    // 0x32a3d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32a3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a3dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x32A3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3E0u;
        // 0x32a3e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A3E8u;
}
