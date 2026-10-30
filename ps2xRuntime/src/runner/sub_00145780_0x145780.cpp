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

// Function: sub_00145780
// Address: 0x145780 - 0x145790
void sub_00145780_0x145780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145780_0x145780");
#endif

    ctx->pc = 0x145780u;

    // 0x145780: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x145780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x145784: 0x3e00008  jr          $ra
    ctx->pc = 0x145784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145784u;
        // 0x145788: 0xac44b704  sw          $a0, -0x48FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14578Cu;
    // 0x14578c: 0x0  nop
    ctx->pc = 0x14578cu;
    // NOP
    ctx->pc = 0x145790u;
}
