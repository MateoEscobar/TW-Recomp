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

// Function: sub_00463C58
// Address: 0x463c58 - 0x463c70
void sub_00463C58_0x463c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463C58_0x463c58");
#endif

    ctx->pc = 0x463c58u;

    // 0x463c58: 0xaf848480  sw          $a0, -0x7B80($gp)
    ctx->pc = 0x463c58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U32(ctx, 4));
    // 0x463c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x463C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463C5Cu;
        // 0x463c60: 0xaf858484  sw          $a1, -0x7B7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935684), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463C64u;
    // 0x463c64: 0x0  nop
    ctx->pc = 0x463c64u;
    // NOP
    // 0x463c68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x463c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x463c6c: 0x0  nop
    ctx->pc = 0x463c6cu;
    // NOP
    ctx->pc = 0x463c70u;
}
