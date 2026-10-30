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

// Function: sub_002A75A4
// Address: 0x2a75a4 - 0x2a75b8
void sub_002A75A4_0x2a75a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A75A4_0x2a75a4");
#endif

    switch (ctx->pc) {
        case 0x2a75a8u: goto label_2a75a8;
        default: break;
    }

    ctx->pc = 0x2a75a4u;

    // 0x2a75a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a75a8:
    // 0x2a75a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a75a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a75ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A75ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75ACu;
        // 0x2a75b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A75ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A75B4u;
    // 0x2a75b4: 0x0  nop
    ctx->pc = 0x2a75b4u;
    // NOP
    ctx->pc = 0x2a75b8u;
}
