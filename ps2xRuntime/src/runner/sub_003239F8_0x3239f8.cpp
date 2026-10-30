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

// Function: sub_003239F8
// Address: 0x3239f8 - 0x323a18
void sub_003239F8_0x3239f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003239F8_0x3239f8");
#endif

    switch (ctx->pc) {
        case 0x323a08u: goto label_323a08;
        default: break;
    }

    ctx->pc = 0x3239f8u;

    // 0x3239f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3239f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3239fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3239fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323a00: 0xc0cce40  jal         func_333900
    ctx->pc = 0x323A00u;
    SET_GPR_U32(ctx, 31, 0x323A08u);
    ctx->pc = 0x333900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333900u, 0x323A00u, 0x323A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A08u;
label_323a08:
    // 0x323a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x323A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A0Cu;
        // 0x323a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A14u;
    // 0x323a14: 0x0  nop
    ctx->pc = 0x323a14u;
    // NOP
    ctx->pc = 0x323a18u;
}
