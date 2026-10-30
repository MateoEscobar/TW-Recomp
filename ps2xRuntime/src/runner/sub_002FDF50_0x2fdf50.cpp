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

// Function: sub_002FDF50
// Address: 0x2fdf50 - 0x2fdf70
void sub_002FDF50_0x2fdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF50_0x2fdf50");
#endif

    switch (ctx->pc) {
        case 0x2fdf60u: goto label_2fdf60;
        default: break;
    }

    ctx->pc = 0x2fdf50u;

    // 0x2fdf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdf54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdf58: 0xc0bf742  jal         func_2FDD08
    ctx->pc = 0x2FDF58u;
    SET_GPR_U32(ctx, 31, 0x2FDF60u);
    ctx->pc = 0x2FDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDD08u, 0x2FDF58u, 0x2FDF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF60u;
label_2fdf60:
    // 0x2fdf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF64u;
        // 0x2fdf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF6Cu;
    // 0x2fdf6c: 0x0  nop
    ctx->pc = 0x2fdf6cu;
    // NOP
    ctx->pc = 0x2fdf70u;
}
