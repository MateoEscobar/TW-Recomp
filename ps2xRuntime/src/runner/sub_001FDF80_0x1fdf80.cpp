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

// Function: sub_001FDF80
// Address: 0x1fdf80 - 0x1fdf90
void sub_001FDF80_0x1fdf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDF80_0x1fdf80");
#endif

    ctx->pc = 0x1fdf80u;

    // 0x1fdf80: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1fdf84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF84u;
        // 0x1fdf88: 0x8c62ef70  lw          $v0, -0x1090($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963056)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDF8Cu;
    // 0x1fdf8c: 0x0  nop
    ctx->pc = 0x1fdf8cu;
    // NOP
    ctx->pc = 0x1fdf90u;
}
