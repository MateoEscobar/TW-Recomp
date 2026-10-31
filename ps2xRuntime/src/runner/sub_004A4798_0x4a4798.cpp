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

// Function: sub_004A4798
// Address: 0x4a4798 - 0x4a47b8
void sub_004A4798_0x4a4798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4798_0x4a4798");
#endif

    ctx->pc = 0x4a4798u;

    // 0x4a4798: 0x8f878a20  lw          $a3, -0x75E0($gp)
    ctx->pc = 0x4a4798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a479c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a479cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a47a0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4a47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4a47a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a47a8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a47ac: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4a47acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a47b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A47B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A47B0u;
        // 0x4a47b4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A47B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A47B8u;
}
