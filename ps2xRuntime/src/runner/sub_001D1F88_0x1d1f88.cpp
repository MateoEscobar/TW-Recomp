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

// Function: sub_001D1F88
// Address: 0x1d1f88 - 0x1d1fb8
void sub_001D1F88_0x1d1f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1F88_0x1d1f88");
#endif

    switch (ctx->pc) {
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d1facu: goto label_1d1fac;
        default: break;
    }

    ctx->pc = 0x1d1f88u;

    // 0x1d1f88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d1f8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1f90: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d1f94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1f9c: 0xc0747ee  jal         func_1D1FB8
    ctx->pc = 0x1D1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1FA4u);
    ctx->pc = 0x1D1FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F9Cu;
    // 0x1d1fa0: 0xa0650118  sb          $a1, 0x118($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 280), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB8u, 0x1D1F9Cu, 0x1D1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FA4u;
label_1d1fa4:
    // 0x1d1fa4: 0xc055502  jal         func_155408
    ctx->pc = 0x1D1FA4u;
    SET_GPR_U32(ctx, 31, 0x1D1FACu);
    ctx->pc = 0x155408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155408u, 0x1D1FA4u, 0x1D1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FACu;
label_1d1fac:
    // 0x1d1fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FB0u;
        // 0x1d1fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1FB8u;
}
