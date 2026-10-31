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

// Function: sub_00424FB0
// Address: 0x424fb0 - 0x424fd0
void sub_00424FB0_0x424fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424FB0_0x424fb0");
#endif

    ctx->pc = 0x424fb0u;

    // 0x424fb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x424fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x424fb4: 0x8c435068  lw          $v1, 0x5068($v0)
    ctx->pc = 0x424fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x515068u));
    // 0x424fb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x424fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x424FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424FBCu;
        // 0x424fc0: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424FC4u;
    // 0x424fc4: 0x0  nop
    ctx->pc = 0x424fc4u;
    // NOP
    // 0x424fc8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x424fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x424fcc: 0x0  nop
    ctx->pc = 0x424fccu;
    // NOP
    ctx->pc = 0x424fd0u;
}
