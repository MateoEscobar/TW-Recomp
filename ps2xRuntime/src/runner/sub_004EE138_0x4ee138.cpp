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

// Function: sub_004EE138
// Address: 0x4ee138 - 0x4ee148
void sub_004EE138_0x4ee138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE138_0x4ee138");
#endif

    ctx->pc = 0x4ee138u;

    // 0x4ee138: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee13c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE13Cu;
        // 0x4ee140: 0x24422fb0  addiu       $v0, $v0, 0x2FB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE144u;
    // 0x4ee144: 0x0  nop
    ctx->pc = 0x4ee144u;
    // NOP
    ctx->pc = 0x4ee148u;
}
