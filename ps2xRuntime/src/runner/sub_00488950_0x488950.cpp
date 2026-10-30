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

// Function: sub_00488950
// Address: 0x488950 - 0x488970
void sub_00488950_0x488950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488950_0x488950");
#endif

    ctx->pc = 0x488950u;

    // 0x488950: 0x8f858978  lw          $a1, -0x7688($gp)
    ctx->pc = 0x488950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x488954: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x488954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x488958: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x488958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x48895c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x488960: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x488960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x488964: 0x3e00008  jr          $ra
    ctx->pc = 0x488964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488964u;
        // 0x488968: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48896Cu;
    // 0x48896c: 0x0  nop
    ctx->pc = 0x48896cu;
    // NOP
    ctx->pc = 0x488970u;
}
