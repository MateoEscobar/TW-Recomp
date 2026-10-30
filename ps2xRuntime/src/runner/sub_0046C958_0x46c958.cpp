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

// Function: sub_0046C958
// Address: 0x46c958 - 0x46c978
void sub_0046C958_0x46c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C958_0x46c958");
#endif

    switch (ctx->pc) {
        case 0x46c968u: goto label_46c968;
        default: break;
    }

    ctx->pc = 0x46c958u;

    // 0x46c958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46c958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46c95c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c960: 0xc11b1ea  jal         func_46C7A8
    ctx->pc = 0x46C960u;
    SET_GPR_U32(ctx, 31, 0x46C968u);
    ctx->pc = 0x46C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C7A8u, 0x46C960u, 0x46C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C968u;
label_46c968:
    // 0x46c968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c96c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C96Cu;
        // 0x46c970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C974u;
    // 0x46c974: 0x0  nop
    ctx->pc = 0x46c974u;
    // NOP
    ctx->pc = 0x46c978u;
}
