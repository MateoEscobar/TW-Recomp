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

// Function: sub_00203F48
// Address: 0x203f48 - 0x203f58
void sub_00203F48_0x203f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F48_0x203f48");
#endif

    ctx->pc = 0x203f48u;

    // 0x203f48: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x203F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F4Cu;
        // 0x203f50: 0x8c62f584  lw          $v0, -0xA7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964612)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F54u;
    // 0x203f54: 0x0  nop
    ctx->pc = 0x203f54u;
    // NOP
    ctx->pc = 0x203f58u;
}
