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

// Function: sub_002516F0
// Address: 0x2516f0 - 0x251710
void sub_002516F0_0x2516f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002516F0_0x2516f0");
#endif

    ctx->pc = 0x2516f0u;

    // 0x2516f0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2516f4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2516f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2516f8: 0x8c43a21c  lw          $v1, -0x5DE4($v0)
    ctx->pc = 0x2516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x2516fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2516fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x251700: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x251700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251704: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251708: 0x3e00008  jr          $ra
    ctx->pc = 0x251708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251708u;
        // 0x25170c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251710u;
}
