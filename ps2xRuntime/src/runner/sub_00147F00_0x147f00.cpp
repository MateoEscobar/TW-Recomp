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

// Function: sub_00147F00
// Address: 0x147f00 - 0x147f18
void sub_00147F00_0x147f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147F00_0x147f00");
#endif

    ctx->pc = 0x147f00u;

    // 0x147f00: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x147f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x147f04: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x147F04u;
    {
        const bool branch_taken_0x147f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f04) {
            ctx->pc = 0x147F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147F04u;
            // 0x147f08: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147F0Cu;
            goto label_147f0c;
        }
    }
    ctx->pc = 0x147F0Cu;
label_147f0c:
    // 0x147f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x147F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147F14u;
    // 0x147f14: 0x0  nop
    ctx->pc = 0x147f14u;
    // NOP
    ctx->pc = 0x147f18u;
}
