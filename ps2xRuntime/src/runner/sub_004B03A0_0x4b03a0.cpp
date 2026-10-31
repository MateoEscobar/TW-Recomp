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

// Function: sub_004B03A0
// Address: 0x4b03a0 - 0x4b03b0
void sub_004B03A0_0x4b03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B03A0_0x4b03a0");
#endif

    ctx->pc = 0x4b03a0u;

    // 0x4b03a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b03a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B03A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B03A4u;
        // 0x4b03a8: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B03A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B03ACu;
    // 0x4b03ac: 0x0  nop
    ctx->pc = 0x4b03acu;
    // NOP
    ctx->pc = 0x4b03b0u;
}
