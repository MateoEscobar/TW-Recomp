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

// Function: sub_00488970
// Address: 0x488970 - 0x488998
void sub_00488970_0x488970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488970_0x488970");
#endif

    ctx->pc = 0x488970u;

    // 0x488970: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x488974: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x488974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x488978: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x488978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x48897c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x488980: 0x3e00008  jr          $ra
    ctx->pc = 0x488980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488980u;
        // 0x488984: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488988u;
    // 0x488988: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x488988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x48898c: 0x0  nop
    ctx->pc = 0x48898cu;
    // NOP
    // 0x488990: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x488990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x488994: 0x0  nop
    ctx->pc = 0x488994u;
    // NOP
    ctx->pc = 0x488998u;
}
