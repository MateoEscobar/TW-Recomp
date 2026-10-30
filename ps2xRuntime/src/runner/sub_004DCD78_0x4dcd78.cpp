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

// Function: sub_004DCD78
// Address: 0x4dcd78 - 0x4dcd88
void sub_004DCD78_0x4dcd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCD78_0x4dcd78");
#endif

    ctx->pc = 0x4dcd78u;

    // 0x4dcd78: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4dcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4dcd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DCD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD7Cu;
        // 0x4dcd80: 0x2442a1c8  addiu       $v0, $v0, -0x5E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCD84u;
    // 0x4dcd84: 0x0  nop
    ctx->pc = 0x4dcd84u;
    // NOP
    ctx->pc = 0x4dcd88u;
}
