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

// Function: sub_0023D630
// Address: 0x23d630 - 0x23d650
void sub_0023D630_0x23d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D630_0x23d630");
#endif

    switch (ctx->pc) {
        case 0x23d640u: goto label_23d640;
        default: break;
    }

    ctx->pc = 0x23d630u;

    // 0x23d630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d638: 0xc086c40  jal         func_21B100
    ctx->pc = 0x23D638u;
    SET_GPR_U32(ctx, 31, 0x23D640u);
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x23D638u, 0x23D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D640u;
label_23d640:
    // 0x23d640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d644: 0x3e00008  jr          $ra
    ctx->pc = 0x23D644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D644u;
        // 0x23d648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D64Cu;
    // 0x23d64c: 0x0  nop
    ctx->pc = 0x23d64cu;
    // NOP
    ctx->pc = 0x23d650u;
}
