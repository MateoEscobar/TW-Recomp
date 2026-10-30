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

// Function: sub_00466CC0
// Address: 0x466cc0 - 0x466cd8
void sub_00466CC0_0x466cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466CC0_0x466cc0");
#endif

    ctx->pc = 0x466cc0u;

    // 0x466cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x466CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466CC0u;
        // 0x466cc4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466CC8u;
    // 0x466cc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x466cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x466ccc: 0x0  nop
    ctx->pc = 0x466cccu;
    // NOP
    // 0x466cd0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x466cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x466cd4: 0x0  nop
    ctx->pc = 0x466cd4u;
    // NOP
    ctx->pc = 0x466cd8u;
}
