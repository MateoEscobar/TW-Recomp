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

// Function: sub_001C80C8
// Address: 0x1c80c8 - 0x1c80e8
void sub_001C80C8_0x1c80c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C80C8_0x1c80c8");
#endif

    switch (ctx->pc) {
        case 0x1c80d8u: goto label_1c80d8;
        default: break;
    }

    ctx->pc = 0x1c80c8u;

    // 0x1c80c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c80c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c80cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c80ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c80d0: 0xc07203a  jal         func_1C80E8
    ctx->pc = 0x1C80D0u;
    SET_GPR_U32(ctx, 31, 0x1C80D8u);
    ctx->pc = 0x1C80E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80E8u, 0x1C80D0u, 0x1C80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80D8u;
label_1c80d8:
    // 0x1c80d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c80d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c80dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C80DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80DCu;
        // 0x1c80e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C80DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C80E4u;
    // 0x1c80e4: 0x0  nop
    ctx->pc = 0x1c80e4u;
    // NOP
    ctx->pc = 0x1c80e8u;
}
