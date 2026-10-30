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

// Function: sub_0040C938
// Address: 0x40c938 - 0x40c948
void sub_0040C938_0x40c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C938_0x40c938");
#endif

    ctx->pc = 0x40c938u;

    // 0x40c938: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40c938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40c93c: 0x3e00008  jr          $ra
    ctx->pc = 0x40C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C93Cu;
        // 0x40c940: 0xe44c47cc  swc1        $f12, 0x47CC($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18380), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C944u;
    // 0x40c944: 0x0  nop
    ctx->pc = 0x40c944u;
    // NOP
    ctx->pc = 0x40c948u;
}
