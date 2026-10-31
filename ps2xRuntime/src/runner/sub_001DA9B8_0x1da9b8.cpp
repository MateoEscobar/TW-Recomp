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

// Function: sub_001DA9B8
// Address: 0x1da9b8 - 0x1da9d0
void sub_001DA9B8_0x1da9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA9B8_0x1da9b8");
#endif

    ctx->pc = 0x1da9b8u;

    // 0x1da9b8: 0x8c8245c0  lw          $v0, 0x45C0($a0)
    ctx->pc = 0x1da9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17856)));
    // 0x1da9bc: 0x240306f0  addiu       $v1, $zero, 0x6F0
    ctx->pc = 0x1da9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x1da9c0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1da9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1da9c4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1da9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1da9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9C8u;
        // 0x1da9cc: 0xac401740  sw          $zero, 0x1740($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9D0u;
}
