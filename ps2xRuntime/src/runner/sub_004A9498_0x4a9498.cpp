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

// Function: sub_004A9498
// Address: 0x4a9498 - 0x4a94b0
void sub_004A9498_0x4a9498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9498_0x4a9498");
#endif

    ctx->pc = 0x4a9498u;

    // 0x4a9498: 0x8f838a94  lw          $v1, -0x756C($gp)
    ctx->pc = 0x4a9498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x4a949c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a949cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a94a0: 0xaf838a94  sw          $v1, -0x756C($gp)
    ctx->pc = 0x4a94a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937236), GPR_U32(ctx, 3));
    // 0x4a94a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A94A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94A4u;
        // 0x4a94a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A94A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A94ACu;
    // 0x4a94ac: 0x0  nop
    ctx->pc = 0x4a94acu;
    // NOP
    ctx->pc = 0x4a94b0u;
}
