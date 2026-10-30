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

// Function: sub_003DE3BC
// Address: 0x3de3bc - 0x3de3d8
void sub_003DE3BC_0x3de3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE3BC_0x3de3bc");
#endif

    switch (ctx->pc) {
        case 0x3de3c0u: goto label_3de3c0;
        default: break;
    }

    ctx->pc = 0x3de3bcu;

    // 0x3de3bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3de3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3de3c0:
    // 0x3de3c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3de3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3de3c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3de3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3de3c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3de3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3de3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3CCu;
        // 0x3de3d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE3D4u;
    // 0x3de3d4: 0x0  nop
    ctx->pc = 0x3de3d4u;
    // NOP
    ctx->pc = 0x3de3d8u;
}
