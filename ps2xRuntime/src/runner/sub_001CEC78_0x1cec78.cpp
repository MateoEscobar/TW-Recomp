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

// Function: sub_001CEC78
// Address: 0x1cec78 - 0x1cec98
void sub_001CEC78_0x1cec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEC78_0x1cec78");
#endif

    switch (ctx->pc) {
        case 0x1cec8cu: goto label_1cec8c;
        default: break;
    }

    ctx->pc = 0x1cec78u;

    // 0x1cec78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cec7c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1cec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1cec80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cec84: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1CEC84u;
    SET_GPR_U32(ctx, 31, 0x1CEC8Cu);
    ctx->pc = 0x1CEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC84u;
    // 0x1cec88: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1CEC84u, 0x1CEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC8Cu;
label_1cec8c:
    // 0x1cec8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC90u;
        // 0x1cec94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC98u;
}
