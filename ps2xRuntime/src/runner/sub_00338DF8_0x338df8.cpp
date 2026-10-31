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

// Function: sub_00338DF8
// Address: 0x338df8 - 0x338e10
void sub_00338DF8_0x338df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338DF8_0x338df8");
#endif

    ctx->pc = 0x338df8u;

    // 0x338df8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x338df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338dfc: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x338dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x338e00: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x338e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x338e04: 0x3e00008  jr          $ra
    ctx->pc = 0x338E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E04u;
        // 0x338e08: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338E0Cu;
    // 0x338e0c: 0x0  nop
    ctx->pc = 0x338e0cu;
    // NOP
    ctx->pc = 0x338e10u;
}
