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

// Function: sub_004B0470
// Address: 0x4b0470 - 0x4b0490
void sub_004B0470_0x4b0470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0470_0x4b0470");
#endif

    ctx->pc = 0x4b0470u;

    // 0x4b0470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0474: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x4b0474u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x4b0478: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b0478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b047c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b0480: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b0480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b0484: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0484u;
        // 0x4b0488: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B048Cu;
    // 0x4b048c: 0x0  nop
    ctx->pc = 0x4b048cu;
    // NOP
    ctx->pc = 0x4b0490u;
}
