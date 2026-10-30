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

// Function: sub_00370CC0
// Address: 0x370cc0 - 0x370ce0
void sub_00370CC0_0x370cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370CC0_0x370cc0");
#endif

    switch (ctx->pc) {
        case 0x370cd0u: goto label_370cd0;
        default: break;
    }

    ctx->pc = 0x370cc0u;

    // 0x370cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370cc8: 0xc06cfde  jal         func_1B3F78
    ctx->pc = 0x370CC8u;
    SET_GPR_U32(ctx, 31, 0x370CD0u);
    ctx->pc = 0x1B3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F78u, 0x370CC8u, 0x370CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CD0u;
label_370cd0:
    // 0x370cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370cd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x370CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CD8u;
        // 0x370cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370CE0u;
}
