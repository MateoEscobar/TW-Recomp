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

// Function: sub_004DB480
// Address: 0x4db480 - 0x4db490
void sub_004DB480_0x4db480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB480_0x4db480");
#endif

    ctx->pc = 0x4db480u;

    // 0x4db480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4db484: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB484u;
        // 0x4db488: 0x2442b910  addiu       $v0, $v0, -0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB48Cu;
    // 0x4db48c: 0x0  nop
    ctx->pc = 0x4db48cu;
    // NOP
    ctx->pc = 0x4db490u;
}
