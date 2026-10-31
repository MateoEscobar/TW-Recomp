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

// Function: sub_00465D90
// Address: 0x465d90 - 0x465da8
void sub_00465D90_0x465d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465D90_0x465d90");
#endif

    ctx->pc = 0x465d90u;

    // 0x465d90: 0x8f838498  lw          $v1, -0x7B68($gp)
    ctx->pc = 0x465d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
    // 0x465d94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x465d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465d98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x465d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x465d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x465D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465D9Cu;
        // 0x465da0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465DA4u;
    // 0x465da4: 0x0  nop
    ctx->pc = 0x465da4u;
    // NOP
    ctx->pc = 0x465da8u;
}
