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

// Function: sub_004AFB20
// Address: 0x4afb20 - 0x4afb40
void sub_004AFB20_0x4afb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB20_0x4afb20");
#endif

    switch (ctx->pc) {
        case 0x4afb30u: goto label_4afb30;
        default: break;
    }

    ctx->pc = 0x4afb20u;

    // 0x4afb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afb28: 0xc12cab4  jal         func_4B2AD0
    ctx->pc = 0x4AFB28u;
    SET_GPR_U32(ctx, 31, 0x4AFB30u);
    ctx->pc = 0x4B2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2AD0u, 0x4AFB28u, 0x4AFB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFB30u;
label_4afb30:
    // 0x4afb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afb34: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFB34u;
        // 0x4afb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFB3Cu;
    // 0x4afb3c: 0x0  nop
    ctx->pc = 0x4afb3cu;
    // NOP
    ctx->pc = 0x4afb40u;
}
