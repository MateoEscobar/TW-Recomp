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

// Function: sub_001FDFC0
// Address: 0x1fdfc0 - 0x1fdfd0
void sub_001FDFC0_0x1fdfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDFC0_0x1fdfc0");
#endif

    ctx->pc = 0x1fdfc0u;

    // 0x1fdfc0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fdfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1fdfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFC4u;
        // 0x1fdfc8: 0x8c62ef68  lw          $v0, -0x1098($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDFCCu;
    // 0x1fdfcc: 0x0  nop
    ctx->pc = 0x1fdfccu;
    // NOP
    ctx->pc = 0x1fdfd0u;
}
