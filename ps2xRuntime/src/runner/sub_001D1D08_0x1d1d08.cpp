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

// Function: sub_001D1D08
// Address: 0x1d1d08 - 0x1d1d28
void sub_001D1D08_0x1d1d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D08_0x1d1d08");
#endif

    switch (ctx->pc) {
        case 0x1d1d18u: goto label_1d1d18;
        default: break;
    }

    ctx->pc = 0x1d1d08u;

    // 0x1d1d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1d10: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1D1D10u;
    SET_GPR_U32(ctx, 31, 0x1D1D18u);
    ctx->pc = 0x1D1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D10u;
    // 0x1d1d14: 0x2484078c  addiu       $a0, $a0, 0x78C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1D1D10u, 0x1D1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D18u;
label_1d1d18:
    // 0x1d1d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1d1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d1d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D20u;
        // 0x1d1d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1D28u;
}
