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

// Function: sub_00354038
// Address: 0x354038 - 0x354058
void sub_00354038_0x354038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354038_0x354038");
#endif

    switch (ctx->pc) {
        case 0x354048u: goto label_354048;
        default: break;
    }

    ctx->pc = 0x354038u;

    // 0x354038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35403c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35403cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354040: 0xc0d4e84  jal         func_353A10
    ctx->pc = 0x354040u;
    SET_GPR_U32(ctx, 31, 0x354048u);
    ctx->pc = 0x353A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353A10u, 0x354040u, 0x354048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354048u;
label_354048:
    // 0x354048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35404c: 0x3e00008  jr          $ra
    ctx->pc = 0x35404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35404Cu;
        // 0x354050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354054u;
    // 0x354054: 0x0  nop
    ctx->pc = 0x354054u;
    // NOP
    ctx->pc = 0x354058u;
}
