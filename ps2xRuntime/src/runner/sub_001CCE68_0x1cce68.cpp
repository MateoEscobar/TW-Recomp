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

// Function: sub_001CCE68
// Address: 0x1cce68 - 0x1cce90
void sub_001CCE68_0x1cce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCE68_0x1cce68");
#endif

    switch (ctx->pc) {
        case 0x1cce84u: goto label_1cce84;
        default: break;
    }

    ctx->pc = 0x1cce68u;

    // 0x1cce68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce6c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cce70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cce74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cce74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce78: 0x2442ad78  addiu       $v0, $v0, -0x5288
    ctx->pc = 0x1cce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946168));
    // 0x1cce7c: 0xc079bbc  jal         func_1E6EF0
    ctx->pc = 0x1CCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE84u);
    ctx->pc = 0x1CCE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE7Cu;
    // 0x1cce80: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x1CCE7Cu, 0x1CCE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE84u;
label_1cce84:
    // 0x1cce84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cce84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce88: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE88u;
        // 0x1cce8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE90u;
}
