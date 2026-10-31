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

// Function: sub_0015D570
// Address: 0x15d570 - 0x15d580
void sub_0015D570_0x15d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D570_0x15d570");
#endif

    ctx->pc = 0x15d570u;

    // 0x15d570: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15d574: 0x3e00008  jr          $ra
    ctx->pc = 0x15D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D574u;
        // 0x15d578: 0x8c62c75c  lw          $v0, -0x38A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952796)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D57Cu;
    // 0x15d57c: 0x0  nop
    ctx->pc = 0x15d57cu;
    // NOP
    ctx->pc = 0x15d580u;
}
