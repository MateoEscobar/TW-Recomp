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

// Function: sub_001B5E90
// Address: 0x1b5e90 - 0x1b5ea8
void sub_001B5E90_0x1b5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5E90_0x1b5e90");
#endif

    ctx->pc = 0x1b5e90u;

    // 0x1b5e90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b5e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E94u;
        // 0x1b5e98: 0xac4495f0  sw          $a0, -0x6A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5E9Cu;
    // 0x1b5e9c: 0x0  nop
    ctx->pc = 0x1b5e9cu;
    // NOP
    // 0x1b5ea0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5ea4: 0x0  nop
    ctx->pc = 0x1b5ea4u;
    // NOP
    ctx->pc = 0x1b5ea8u;
}
