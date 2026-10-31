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

// Function: sub_004228A0
// Address: 0x4228a0 - 0x4228b8
void sub_004228A0_0x4228a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004228A0_0x4228a0");
#endif

    ctx->pc = 0x4228a0u;

    // 0x4228a0: 0x8ca20380  lw          $v0, 0x380($a1)
    ctx->pc = 0x4228a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x4228a4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x4228a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4228a8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x4228a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4228ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4228ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4228B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4228ACu;
        // 0x4228b0: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4228ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4228B4u;
    // 0x4228b4: 0x0  nop
    ctx->pc = 0x4228b4u;
    // NOP
    ctx->pc = 0x4228b8u;
}
