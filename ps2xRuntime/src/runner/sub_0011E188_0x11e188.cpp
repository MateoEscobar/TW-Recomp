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

// Function: sub_0011E188
// Address: 0x11e188 - 0x11e198
void sub_0011E188_0x11e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E188_0x11e188");
#endif

    ctx->pc = 0x11e188u;

    // 0x11e188: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x11e18c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E18Cu;
        // 0x11e190: 0x8c6291b8  lw          $v0, -0x6E48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939064)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E194u;
    // 0x11e194: 0x0  nop
    ctx->pc = 0x11e194u;
    // NOP
    ctx->pc = 0x11e198u;
}
