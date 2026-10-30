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

// Function: sub_0028AB30
// Address: 0x28ab30 - 0x28ab50
void sub_0028AB30_0x28ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AB30_0x28ab30");
#endif

    ctx->pc = 0x28ab30u;

    // 0x28ab30: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x28ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x28ab34: 0x8c8202e0  lw          $v0, 0x2E0($a0)
    ctx->pc = 0x28ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x28ab38: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x28ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x28ab3c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x28ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x28ab40: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x28ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x28ab44: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB44u;
        // 0x28ab48: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB4Cu;
    // 0x28ab4c: 0x0  nop
    ctx->pc = 0x28ab4cu;
    // NOP
    ctx->pc = 0x28ab50u;
}
