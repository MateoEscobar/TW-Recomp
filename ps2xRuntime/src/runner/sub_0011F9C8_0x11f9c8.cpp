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

// Function: sub_0011F9C8
// Address: 0x11f9c8 - 0x11f9e0
void sub_0011F9C8_0x11f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F9C8_0x11f9c8");
#endif

    ctx->pc = 0x11f9c8u;

    // 0x11f9c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x11f9cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11f9d0: 0x24429148  addiu       $v0, $v0, -0x6EB8
    ctx->pc = 0x11f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938952));
    // 0x11f9d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9D8u;
        // 0x11f9dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F9E0u;
}
