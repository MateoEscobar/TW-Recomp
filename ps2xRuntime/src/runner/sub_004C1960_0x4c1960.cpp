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

// Function: sub_004C1960
// Address: 0x4c1960 - 0x4c1990
void sub_004C1960_0x4c1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1960_0x4c1960");
#endif

    ctx->pc = 0x4c1960u;

    // 0x4c1960: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c1960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4c1964: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1964u;
        // 0x4c1968: 0x24424240  addiu       $v0, $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C196Cu;
    // 0x4c196c: 0x0  nop
    ctx->pc = 0x4c196cu;
    // NOP
    // 0x4c1970: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4c1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4c1974: 0x0  nop
    ctx->pc = 0x4c1974u;
    // NOP
    // 0x4c1978: 0x0  nop
    ctx->pc = 0x4c1978u;
    // NOP
    // 0x4c197c: 0x0  nop
    ctx->pc = 0x4c197cu;
    // NOP
    // 0x4c1980: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4c1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4c1984: 0x0  nop
    ctx->pc = 0x4c1984u;
    // NOP
    // 0x4c1988: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x4c1988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x4c198c: 0x0  nop
    ctx->pc = 0x4c198cu;
    // NOP
    ctx->pc = 0x4c1990u;
}
