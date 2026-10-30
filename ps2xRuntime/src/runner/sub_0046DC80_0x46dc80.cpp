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

// Function: sub_0046DC80
// Address: 0x46dc80 - 0x46dca8
void sub_0046DC80_0x46dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DC80_0x46dc80");
#endif

    ctx->pc = 0x46dc80u;

    // 0x46dc80: 0x8f8488e8  lw          $a0, -0x7718($gp)
    ctx->pc = 0x46dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
    // 0x46dc84: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x46dc88: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x46dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x46dc8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x46dc90: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x46dc90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46dc94: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x46dc94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46dc98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46dc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x46DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DC9Cu;
        // 0x46dca0: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46DCA4u;
    // 0x46dca4: 0x0  nop
    ctx->pc = 0x46dca4u;
    // NOP
    ctx->pc = 0x46dca8u;
}
