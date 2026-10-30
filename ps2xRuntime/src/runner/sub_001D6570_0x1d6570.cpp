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

// Function: sub_001D6570
// Address: 0x1d6570 - 0x1d6590
void sub_001D6570_0x1d6570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6570_0x1d6570");
#endif

    switch (ctx->pc) {
        case 0x1d6580u: goto label_1d6580;
        default: break;
    }

    ctx->pc = 0x1d6570u;

    // 0x1d6570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6578: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1D6578u;
    SET_GPR_U32(ctx, 31, 0x1D6580u);
    ctx->pc = 0x1D657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6578u;
    // 0x1d657c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1D6578u, 0x1D6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6580u;
label_1d6580:
    // 0x1d6580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6584: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6584u;
        // 0x1d6588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D658Cu;
    // 0x1d658c: 0x0  nop
    ctx->pc = 0x1d658cu;
    // NOP
    ctx->pc = 0x1d6590u;
}
