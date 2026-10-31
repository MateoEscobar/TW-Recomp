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

// Function: sub_004EE0E8
// Address: 0x4ee0e8 - 0x4ee100
void sub_004EE0E8_0x4ee0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE0E8_0x4ee0e8");
#endif

    ctx->pc = 0x4ee0e8u;

    // 0x4ee0e8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE0ECu;
        // 0x4ee0f0: 0x24421f18  addiu       $v0, $v0, 0x1F18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE0F4u;
    // 0x4ee0f4: 0x0  nop
    ctx->pc = 0x4ee0f4u;
    // NOP
    // 0x4ee0f8: 0x24420248  addiu       $v0, $v0, 0x248
    ctx->pc = 0x4ee0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 584));
    // 0x4ee0fc: 0x0  nop
    ctx->pc = 0x4ee0fcu;
    // NOP
    ctx->pc = 0x4ee100u;
}
