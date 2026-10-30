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

// Function: sub_00319F50
// Address: 0x319f50 - 0x319f70
void sub_00319F50_0x319f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319F50_0x319f50");
#endif

    switch (ctx->pc) {
        case 0x319f60u: goto label_319f60;
        default: break;
    }

    ctx->pc = 0x319f50u;

    // 0x319f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319f58: 0xc0c6628  jal         func_3198A0
    ctx->pc = 0x319F58u;
    SET_GPR_U32(ctx, 31, 0x319F60u);
    ctx->pc = 0x3198A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198A0u, 0x319F58u, 0x319F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F60u;
label_319f60:
    // 0x319f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319f64: 0x3e00008  jr          $ra
    ctx->pc = 0x319F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F64u;
        // 0x319f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319F6Cu;
    // 0x319f6c: 0x0  nop
    ctx->pc = 0x319f6cu;
    // NOP
    ctx->pc = 0x319f70u;
}
