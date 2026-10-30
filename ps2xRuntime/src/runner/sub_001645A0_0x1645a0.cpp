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

// Function: sub_001645A0
// Address: 0x1645a0 - 0x1645b8
void sub_001645A0_0x1645a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001645A0_0x1645a0");
#endif

    ctx->pc = 0x1645a0u;

    // 0x1645a0: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1645a4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1645a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1645a8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1645ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1645ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1645B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645ACu;
        // 0x1645b0: 0xa0860072  sb          $a2, 0x72($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1645ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1645B4u;
    // 0x1645b4: 0x0  nop
    ctx->pc = 0x1645b4u;
    // NOP
    ctx->pc = 0x1645b8u;
}
