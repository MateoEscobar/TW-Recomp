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

// Function: sub_00203F98
// Address: 0x203f98 - 0x203fa8
void sub_00203F98_0x203f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F98_0x203f98");
#endif

    ctx->pc = 0x203f98u;

    // 0x203f98: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x203F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F9Cu;
        // 0x203fa0: 0x8c62f5bc  lw          $v0, -0xA44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964668)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203FA4u;
    // 0x203fa4: 0x0  nop
    ctx->pc = 0x203fa4u;
    // NOP
    ctx->pc = 0x203fa8u;
}
