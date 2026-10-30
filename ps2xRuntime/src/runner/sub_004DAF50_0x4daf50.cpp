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

// Function: sub_004DAF50
// Address: 0x4daf50 - 0x4daf70
void sub_004DAF50_0x4daf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAF50_0x4daf50");
#endif

    switch (ctx->pc) {
        case 0x4daf60u: goto label_4daf60;
        default: break;
    }

    ctx->pc = 0x4daf50u;

    // 0x4daf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4daf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4daf54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daf58: 0xc136bbc  jal         func_4DAEF0
    ctx->pc = 0x4DAF58u;
    SET_GPR_U32(ctx, 31, 0x4DAF60u);
    ctx->pc = 0x4DAEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAEF0u, 0x4DAF58u, 0x4DAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAF60u;
label_4daf60:
    // 0x4daf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daf64: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAF64u;
        // 0x4daf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAF6Cu;
    // 0x4daf6c: 0x0  nop
    ctx->pc = 0x4daf6cu;
    // NOP
    ctx->pc = 0x4daf70u;
}
