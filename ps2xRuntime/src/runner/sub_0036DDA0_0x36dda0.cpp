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

// Function: sub_0036DDA0
// Address: 0x36dda0 - 0x36ddc0
void sub_0036DDA0_0x36dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DDA0_0x36dda0");
#endif

    switch (ctx->pc) {
        case 0x36ddb0u: goto label_36ddb0;
        default: break;
    }

    ctx->pc = 0x36dda0u;

    // 0x36dda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36dda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dda8: 0xc0e5e2a  jal         func_3978A8
    ctx->pc = 0x36DDA8u;
    SET_GPR_U32(ctx, 31, 0x36DDB0u);
    ctx->pc = 0x3978A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3978A8u, 0x36DDA8u, 0x36DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DDB0u;
label_36ddb0:
    // 0x36ddb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ddb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ddb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddb8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DDB8u;
        // 0x36ddbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DDC0u;
}
