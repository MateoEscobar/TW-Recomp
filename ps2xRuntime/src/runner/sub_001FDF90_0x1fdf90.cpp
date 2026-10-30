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

// Function: sub_001FDF90
// Address: 0x1fdf90 - 0x1fdfa0
void sub_001FDF90_0x1fdf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDF90_0x1fdf90");
#endif

    ctx->pc = 0x1fdf90u;

    // 0x1fdf90: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fdf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF94u;
        // 0x1fdf98: 0xac44ef70  sw          $a0, -0x1090($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963056), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDF9Cu;
    // 0x1fdf9c: 0x0  nop
    ctx->pc = 0x1fdf9cu;
    // NOP
    ctx->pc = 0x1fdfa0u;
}
