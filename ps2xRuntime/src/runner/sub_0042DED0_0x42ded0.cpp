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

// Function: sub_0042DED0
// Address: 0x42ded0 - 0x42dee8
void sub_0042DED0_0x42ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DED0_0x42ded0");
#endif

    ctx->pc = 0x42ded0u;

    // 0x42ded0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x42ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42ded4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x42ded4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ded8: 0x2463c150  addiu       $v1, $v1, -0x3EB0
    ctx->pc = 0x42ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951248));
    // 0x42dedc: 0x3e00008  jr          $ra
    ctx->pc = 0x42DEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DEDCu;
        // 0x42dee0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DEE4u;
    // 0x42dee4: 0x0  nop
    ctx->pc = 0x42dee4u;
    // NOP
    ctx->pc = 0x42dee8u;
}
