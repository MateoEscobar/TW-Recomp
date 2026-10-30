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

// Function: sub_001644E0
// Address: 0x1644e0 - 0x1644f8
void sub_001644E0_0x1644e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001644E0_0x1644e0");
#endif

    ctx->pc = 0x1644e0u;

    // 0x1644e0: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x1644e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1644e4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1644e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1644e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1644ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1644ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1644F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644ECu;
        // 0x1644f0: 0xa086006e  sb          $a2, 0x6E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1644ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1644F4u;
    // 0x1644f4: 0x0  nop
    ctx->pc = 0x1644f4u;
    // NOP
    ctx->pc = 0x1644f8u;
}
