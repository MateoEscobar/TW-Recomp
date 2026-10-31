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

// Function: sub_00466E38
// Address: 0x466e38 - 0x466e50
void sub_00466E38_0x466e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466E38_0x466e38");
#endif

    ctx->pc = 0x466e38u;

    // 0x466e38: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466e3c: 0x8c43e688  lw          $v1, -0x1978($v0)
    ctx->pc = 0x466e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E688u));
    // 0x466e40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x466e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466e44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x466e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466e48: 0x3e00008  jr          $ra
    ctx->pc = 0x466E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466E48u;
        // 0x466e4c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466E50u;
}
