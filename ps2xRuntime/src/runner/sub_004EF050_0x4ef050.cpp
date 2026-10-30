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

// Function: sub_004EF050
// Address: 0x4ef050 - 0x4ef060
void sub_004EF050_0x4ef050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF050_0x4ef050");
#endif

    ctx->pc = 0x4ef050u;

    // 0x4ef050: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef054: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF054u;
        // 0x4ef058: 0x244285e8  addiu       $v0, $v0, -0x7A18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF05Cu;
    // 0x4ef05c: 0x0  nop
    ctx->pc = 0x4ef05cu;
    // NOP
    ctx->pc = 0x4ef060u;
}
