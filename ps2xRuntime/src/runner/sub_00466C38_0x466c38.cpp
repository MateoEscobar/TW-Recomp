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

// Function: sub_00466C38
// Address: 0x466c38 - 0x466c58
void sub_00466C38_0x466c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466C38_0x466c38");
#endif

    ctx->pc = 0x466c38u;

    // 0x466c38: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466c3c: 0x8c43e688  lw          $v1, -0x1978($v0)
    ctx->pc = 0x466c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E688u));
    // 0x466c40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x466c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466c44: 0x3e00008  jr          $ra
    ctx->pc = 0x466C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466C44u;
        // 0x466c48: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466C4Cu;
    // 0x466c4c: 0x0  nop
    ctx->pc = 0x466c4cu;
    // NOP
    // 0x466c50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x466c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x466c54: 0x0  nop
    ctx->pc = 0x466c54u;
    // NOP
    ctx->pc = 0x466c58u;
}
