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

// Function: sub_002D8618
// Address: 0x2d8618 - 0x2d8630
void sub_002D8618_0x2d8618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8618_0x2d8618");
#endif

    ctx->pc = 0x2d8618u;

    // 0x2d8618: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d8618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d861c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8620: 0x8c6203e8  lw          $v0, 0x3E8($v1)
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
    // 0x2d8624: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8624u;
        // 0x2d8628: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D862Cu;
    // 0x2d862c: 0x0  nop
    ctx->pc = 0x2d862cu;
    // NOP
    ctx->pc = 0x2d8630u;
}
