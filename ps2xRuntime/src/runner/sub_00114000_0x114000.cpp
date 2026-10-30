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

// Function: sub_00114000
// Address: 0x114000 - 0x114018
void sub_00114000_0x114000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114000_0x114000");
#endif

    switch (ctx->pc) {
        case 0x11400cu: goto label_11400c;
        default: break;
    }

    ctx->pc = 0x114000u;

    // 0x114000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114004: 0xc106d30  jal         func_41B4C0
    ctx->pc = 0x114004u;
    SET_GPR_U32(ctx, 31, 0x11400Cu);
    ctx->pc = 0x41B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4C0u, 0x114004u, 0x11400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11400Cu;
label_11400c:
    // 0x11400c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114010: 0x3e00008  jr          $ra
    ctx->pc = 0x114010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114010u;
        // 0x114014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114018u;
}
