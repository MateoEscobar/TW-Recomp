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

// Function: sub_002B8120
// Address: 0x2b8120 - 0x2b8140
void sub_002B8120_0x2b8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8120_0x2b8120");
#endif

    switch (ctx->pc) {
        case 0x2b8130u: goto label_2b8130;
        default: break;
    }

    ctx->pc = 0x2b8120u;

    // 0x2b8120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8128: 0xc0ae28c  jal         func_2B8A30
    ctx->pc = 0x2B8128u;
    SET_GPR_U32(ctx, 31, 0x2B8130u);
    ctx->pc = 0x2B8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A30u, 0x2B8128u, 0x2B8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8130u;
label_2b8130:
    // 0x2b8130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8134: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8134u;
        // 0x2b8138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B813Cu;
    // 0x2b813c: 0x0  nop
    ctx->pc = 0x2b813cu;
    // NOP
    ctx->pc = 0x2b8140u;
}
