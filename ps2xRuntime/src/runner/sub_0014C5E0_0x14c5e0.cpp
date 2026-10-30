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

// Function: sub_0014C5E0
// Address: 0x14c5e0 - 0x14c600
void sub_0014C5E0_0x14c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C5E0_0x14c5e0");
#endif

    switch (ctx->pc) {
        case 0x14c5f0u: goto label_14c5f0;
        default: break;
    }

    ctx->pc = 0x14c5e0u;

    // 0x14c5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c5e8: 0xc053a16  jal         func_14E858
    ctx->pc = 0x14C5E8u;
    SET_GPR_U32(ctx, 31, 0x14C5F0u);
    ctx->pc = 0x14E858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E858u, 0x14C5E8u, 0x14C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5F0u;
label_14c5f0:
    // 0x14c5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F4u;
        // 0x14c5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C5FCu;
    // 0x14c5fc: 0x0  nop
    ctx->pc = 0x14c5fcu;
    // NOP
    ctx->pc = 0x14c600u;
}
