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

// Function: sub_004ED7A8
// Address: 0x4ed7a8 - 0x4ed7b8
void sub_004ED7A8_0x4ed7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED7A8_0x4ed7a8");
#endif

    ctx->pc = 0x4ed7a8u;

    // 0x4ed7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED7A8u;
        // 0x4ed7ac: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED7B0u;
    // 0x4ed7b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ed7b4: 0x0  nop
    ctx->pc = 0x4ed7b4u;
    // NOP
    ctx->pc = 0x4ed7b8u;
}
