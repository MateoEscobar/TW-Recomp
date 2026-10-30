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

// Function: sub_0041C4C8
// Address: 0x41c4c8 - 0x41c4e0
void sub_0041C4C8_0x41c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C4C8_0x41c4c8");
#endif

    ctx->pc = 0x41c4c8u;

    // 0x41c4c8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x41c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41c4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c4d0: 0xa046041a  sb          $a2, 0x41A($v0)
    ctx->pc = 0x41c4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1050), (uint8_t)GPR_U32(ctx, 6));
    // 0x41c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x41C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4D4u;
        // 0x41c4d8: 0xa087042c  sb          $a3, 0x42C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1068), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C4DCu;
    // 0x41c4dc: 0x0  nop
    ctx->pc = 0x41c4dcu;
    // NOP
    ctx->pc = 0x41c4e0u;
}
