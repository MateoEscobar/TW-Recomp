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

// Function: sub_0014FAC8
// Address: 0x14fac8 - 0x14fae8
void sub_0014FAC8_0x14fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FAC8_0x14fac8");
#endif

    switch (ctx->pc) {
        case 0x14fad8u: goto label_14fad8;
        default: break;
    }

    ctx->pc = 0x14fac8u;

    // 0x14fac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14facc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fad0: 0xc053eba  jal         func_14FAE8
    ctx->pc = 0x14FAD0u;
    SET_GPR_U32(ctx, 31, 0x14FAD8u);
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x14FAD0u, 0x14FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAD8u;
label_14fad8:
    // 0x14fad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x14FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FADCu;
        // 0x14fae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FAE4u;
    // 0x14fae4: 0x0  nop
    ctx->pc = 0x14fae4u;
    // NOP
    ctx->pc = 0x14fae8u;
}
