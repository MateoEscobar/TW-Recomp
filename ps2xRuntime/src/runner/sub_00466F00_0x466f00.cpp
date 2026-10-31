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

// Function: sub_00466F00
// Address: 0x466f00 - 0x466f20
void sub_00466F00_0x466f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466F00_0x466f00");
#endif

    ctx->pc = 0x466f00u;

    // 0x466f00: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x466f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x466f04: 0x8c46e684  lw          $a2, -0x197C($v0)
    ctx->pc = 0x466f04u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x52E684u));
    // 0x466f08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x466f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466f0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x466f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x466f10: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x466f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x466f14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x466f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x466f18: 0x3e00008  jr          $ra
    ctx->pc = 0x466F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466F18u;
        // 0x466f1c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466F20u;
}
