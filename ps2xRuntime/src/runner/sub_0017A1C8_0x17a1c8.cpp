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

// Function: sub_0017A1C8
// Address: 0x17a1c8 - 0x17a1e0
void sub_0017A1C8_0x17a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A1C8_0x17a1c8");
#endif

    ctx->pc = 0x17a1c8u;

    // 0x17a1c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x17a1cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17a1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1d0: 0x24638b40  addiu       $v1, $v1, -0x74C0
    ctx->pc = 0x17a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937408));
    // 0x17a1d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17a1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1D8u;
        // 0x17a1dc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A1E0u;
}
