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

// Function: sub_00488918
// Address: 0x488918 - 0x488938
void sub_00488918_0x488918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488918_0x488918");
#endif

    ctx->pc = 0x488918u;

    // 0x488918: 0x8f858978  lw          $a1, -0x7688($gp)
    ctx->pc = 0x488918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x48891c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48891cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x488920: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x488920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x488924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x488928: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x488928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x48892c: 0x3e00008  jr          $ra
    ctx->pc = 0x48892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48892Cu;
        // 0x488930: 0xaca4001c  sw          $a0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488934u;
    // 0x488934: 0x0  nop
    ctx->pc = 0x488934u;
    // NOP
    ctx->pc = 0x488938u;
}
