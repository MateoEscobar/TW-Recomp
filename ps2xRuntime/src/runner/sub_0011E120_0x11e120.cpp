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

// Function: sub_0011E120
// Address: 0x11e120 - 0x11e130
void sub_0011E120_0x11e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E120_0x11e120");
#endif

    ctx->pc = 0x11e120u;

    // 0x11e120: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e124: 0x3e00008  jr          $ra
    ctx->pc = 0x11E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E124u;
        // 0x11e128: 0xe44cb20c  swc1        $f12, -0x4DF4($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947340), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E12Cu;
    // 0x11e12c: 0x0  nop
    ctx->pc = 0x11e12cu;
    // NOP
    ctx->pc = 0x11e130u;
}
