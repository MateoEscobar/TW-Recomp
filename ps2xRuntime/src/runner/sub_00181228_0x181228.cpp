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

// Function: sub_00181228
// Address: 0x181228 - 0x181248
void sub_00181228_0x181228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181228_0x181228");
#endif

    ctx->pc = 0x181228u;

    // 0x181228: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x181228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x18122c: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x181230: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x181230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x181234: 0x3e00008  jr          $ra
    ctx->pc = 0x181234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181234u;
        // 0x181238: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18123Cu;
    // 0x18123c: 0x0  nop
    ctx->pc = 0x18123cu;
    // NOP
    // 0x181240: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x181240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x181244: 0x0  nop
    ctx->pc = 0x181244u;
    // NOP
    ctx->pc = 0x181248u;
}
