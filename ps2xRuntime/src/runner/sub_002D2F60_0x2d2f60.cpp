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

// Function: sub_002D2F60
// Address: 0x2d2f60 - 0x2d2f80
void sub_002D2F60_0x2d2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2F60_0x2d2f60");
#endif

    ctx->pc = 0x2d2f60u;

    // 0x2d2f60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2f64: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2d2f68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2f6c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2d2f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2d2f70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2d2f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2d2f74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F74u;
        // 0x2d2f78: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2F7Cu;
    // 0x2d2f7c: 0x0  nop
    ctx->pc = 0x2d2f7cu;
    // NOP
    ctx->pc = 0x2d2f80u;
}
