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

// Function: sub_0041E3C0
// Address: 0x41e3c0 - 0x41e3d8
void sub_0041E3C0_0x41e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E3C0_0x41e3c0");
#endif

    ctx->pc = 0x41e3c0u;

    // 0x41e3c0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x41e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x41e3c4: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x41e3c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41e3c8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x41e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x41e3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x41E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E3CCu;
        // 0x41e3d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E3D4u;
    // 0x41e3d4: 0x0  nop
    ctx->pc = 0x41e3d4u;
    // NOP
    ctx->pc = 0x41e3d8u;
}
