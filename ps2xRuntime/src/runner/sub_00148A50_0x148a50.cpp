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

// Function: sub_00148A50
// Address: 0x148a50 - 0x148a70
void sub_00148A50_0x148a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148A50_0x148a50");
#endif

    ctx->pc = 0x148a50u;

    // 0x148a50: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x148a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x148a54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148a58: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x148a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x148a5c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x148a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x148a60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148a64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x148a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a68: 0x3e00008  jr          $ra
    ctx->pc = 0x148A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A68u;
        // 0x148a6c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148A70u;
}
