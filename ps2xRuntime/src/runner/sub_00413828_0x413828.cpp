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

// Function: sub_00413828
// Address: 0x413828 - 0x413848
void sub_00413828_0x413828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413828_0x413828");
#endif

    ctx->pc = 0x413828u;

    // 0x413828: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x413828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x41382c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x413830: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x413830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x413834: 0x24423a10  addiu       $v0, $v0, 0x3A10
    ctx->pc = 0x413834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x413838: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x413838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x41383c: 0x3e00008  jr          $ra
    ctx->pc = 0x41383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41383Cu;
        // 0x413840: 0xa0800148  sb          $zero, 0x148($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 328), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41383Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413844u;
    // 0x413844: 0x0  nop
    ctx->pc = 0x413844u;
    // NOP
    ctx->pc = 0x413848u;
}
