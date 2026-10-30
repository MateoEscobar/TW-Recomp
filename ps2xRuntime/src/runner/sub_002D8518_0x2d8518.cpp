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

// Function: sub_002D8518
// Address: 0x2d8518 - 0x2d8538
void sub_002D8518_0x2d8518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8518_0x2d8518");
#endif

    switch (ctx->pc) {
        case 0x2d8528u: goto label_2d8528;
        default: break;
    }

    ctx->pc = 0x2d8518u;

    // 0x2d8518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d851c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8520: 0xc0b6174  jal         func_2D85D0
    ctx->pc = 0x2D8520u;
    SET_GPR_U32(ctx, 31, 0x2D8528u);
    ctx->pc = 0x2D8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8520u;
    // 0x2d8524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85D0u, 0x2D8520u, 0x2D8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8528u;
label_2d8528:
    // 0x2d8528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d852c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D852Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D852Cu;
        // 0x2d8530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D852Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8534u;
    // 0x2d8534: 0x0  nop
    ctx->pc = 0x2d8534u;
    // NOP
    ctx->pc = 0x2d8538u;
}
