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

// Function: sub_0042D970
// Address: 0x42d970 - 0x42d990
void sub_0042D970_0x42d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D970_0x42d970");
#endif

    switch (ctx->pc) {
        case 0x42d980u: goto label_42d980;
        default: break;
    }

    ctx->pc = 0x42d970u;

    // 0x42d970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42d974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42d978: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x42D978u;
    SET_GPR_U32(ctx, 31, 0x42D980u);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x42D978u, 0x42D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D980u;
label_42d980:
    // 0x42d980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42d980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42d984: 0x3e00008  jr          $ra
    ctx->pc = 0x42D984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D984u;
        // 0x42d988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D98Cu;
    // 0x42d98c: 0x0  nop
    ctx->pc = 0x42d98cu;
    // NOP
    ctx->pc = 0x42d990u;
}
