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

// Function: sub_002B78E0
// Address: 0x2b78e0 - 0x2b7900
void sub_002B78E0_0x2b78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B78E0_0x2b78e0");
#endif

    switch (ctx->pc) {
        case 0x2b78f0u: goto label_2b78f0;
        default: break;
    }

    ctx->pc = 0x2b78e0u;

    // 0x2b78e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b78e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b78e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b78e8: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B78E8u;
    SET_GPR_U32(ctx, 31, 0x2B78F0u);
    ctx->pc = 0x2B78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B78E8u;
    // 0x2b78ec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B78E8u, 0x2B78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B78F0u;
label_2b78f0:
    // 0x2b78f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b78f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b78f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B78F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F4u;
        // 0x2b78f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B78F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B78FCu;
    // 0x2b78fc: 0x0  nop
    ctx->pc = 0x2b78fcu;
    // NOP
    ctx->pc = 0x2b7900u;
}
