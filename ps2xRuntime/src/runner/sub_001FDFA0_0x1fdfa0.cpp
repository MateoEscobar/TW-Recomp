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

// Function: sub_001FDFA0
// Address: 0x1fdfa0 - 0x1fdfb0
void sub_001FDFA0_0x1fdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDFA0_0x1fdfa0");
#endif

    ctx->pc = 0x1fdfa0u;

    // 0x1fdfa0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1fdfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFA4u;
        // 0x1fdfa8: 0x8c62ef74  lw          $v0, -0x108C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963060)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDFACu;
    // 0x1fdfac: 0x0  nop
    ctx->pc = 0x1fdfacu;
    // NOP
    ctx->pc = 0x1fdfb0u;
}
