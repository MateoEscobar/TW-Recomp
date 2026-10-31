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

// Function: sub_004B05E0
// Address: 0x4b05e0 - 0x4b05f8
void sub_004B05E0_0x4b05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B05E0_0x4b05e0");
#endif

    ctx->pc = 0x4b05e0u;

    // 0x4b05e0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4b05e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4b05e4: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x4b05e4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x4b05e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b05e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b05ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B05ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05ECu;
        // 0x4b05f0: 0xa082001a  sb          $v0, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B05ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B05F4u;
    // 0x4b05f4: 0x0  nop
    ctx->pc = 0x4b05f4u;
    // NOP
    ctx->pc = 0x4b05f8u;
}
