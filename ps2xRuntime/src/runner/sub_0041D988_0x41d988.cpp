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

// Function: sub_0041D988
// Address: 0x41d988 - 0x41d9a8
void sub_0041D988_0x41d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D988_0x41d988");
#endif

    switch (ctx->pc) {
        case 0x41d998u: goto label_41d998;
        default: break;
    }

    ctx->pc = 0x41d988u;

    // 0x41d988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d990: 0xc067ba8  jal         func_19EEA0
    ctx->pc = 0x41D990u;
    SET_GPR_U32(ctx, 31, 0x41D998u);
    ctx->pc = 0x19EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEA0u, 0x41D990u, 0x41D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D998u;
label_41d998:
    // 0x41d998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d99c: 0x3e00008  jr          $ra
    ctx->pc = 0x41D99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D99Cu;
        // 0x41d9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D9A4u;
    // 0x41d9a4: 0x0  nop
    ctx->pc = 0x41d9a4u;
    // NOP
    ctx->pc = 0x41d9a8u;
}
