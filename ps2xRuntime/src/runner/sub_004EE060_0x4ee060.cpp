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

// Function: sub_004EE060
// Address: 0x4ee060 - 0x4ee078
void sub_004EE060_0x4ee060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE060_0x4ee060");
#endif

    ctx->pc = 0x4ee060u;

    // 0x4ee060: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee064: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE064u;
        // 0x4ee068: 0x24421ec8  addiu       $v0, $v0, 0x1EC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE06Cu;
    // 0x4ee06c: 0x0  nop
    ctx->pc = 0x4ee06cu;
    // NOP
    // 0x4ee070: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x4ee070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x4ee074: 0x0  nop
    ctx->pc = 0x4ee074u;
    // NOP
    ctx->pc = 0x4ee078u;
}
