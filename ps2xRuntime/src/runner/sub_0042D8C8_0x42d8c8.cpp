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

// Function: sub_0042D8C8
// Address: 0x42d8c8 - 0x42d8f0
void sub_0042D8C8_0x42d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D8C8_0x42d8c8");
#endif

    switch (ctx->pc) {
        case 0x42d8d8u: goto label_42d8d8;
        default: break;
    }

    ctx->pc = 0x42d8c8u;

    // 0x42d8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42d8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42d8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42d8d0: 0xc10b262  jal         func_42C988
    ctx->pc = 0x42D8D0u;
    SET_GPR_U32(ctx, 31, 0x42D8D8u);
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42D8D0u, 0x42D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D8D8u;
label_42d8d8:
    // 0x42d8d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42d8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42d8e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x42d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x42d8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x42D8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D8E4u;
        // 0x42d8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D8ECu;
    // 0x42d8ec: 0x0  nop
    ctx->pc = 0x42d8ecu;
    // NOP
    ctx->pc = 0x42d8f0u;
}
