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

// Function: sub_0033D2C8
// Address: 0x33d2c8 - 0x33d2d8
void sub_0033D2C8_0x33d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D2C8_0x33d2c8");
#endif

    ctx->pc = 0x33d2c8u;

    // 0x33d2c8: 0x94a20032  lhu         $v0, 0x32($a1)
    ctx->pc = 0x33d2c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x33d2cc: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x33d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x33d2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x33D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2D0u;
        // 0x33d2d4: 0xa4a20032  sh          $v0, 0x32($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D2D8u;
}
