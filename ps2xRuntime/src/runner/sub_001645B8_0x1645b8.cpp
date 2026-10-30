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

// Function: sub_001645B8
// Address: 0x1645b8 - 0x1645d0
void sub_001645B8_0x1645b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001645B8_0x1645b8");
#endif

    ctx->pc = 0x1645b8u;

    // 0x1645b8: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1645bc: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1645bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1645c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1645c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1645c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1645C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1645C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C4u;
        // 0x1645c8: 0x90820072  lbu         $v0, 0x72($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1645C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1645CCu;
    // 0x1645cc: 0x0  nop
    ctx->pc = 0x1645ccu;
    // NOP
    ctx->pc = 0x1645d0u;
}
