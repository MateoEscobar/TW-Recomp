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

// Function: sub_004B3680
// Address: 0x4b3680 - 0x4b36a0
void sub_004B3680_0x4b3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3680_0x4b3680");
#endif

    switch (ctx->pc) {
        case 0x4b3690u: goto label_4b3690;
        default: break;
    }

    ctx->pc = 0x4b3680u;

    // 0x4b3680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3688: 0xc12dcec  jal         func_4B73B0
    ctx->pc = 0x4B3688u;
    SET_GPR_U32(ctx, 31, 0x4B3690u);
    ctx->pc = 0x4B73B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B73B0u, 0x4B3688u, 0x4B3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3690u;
label_4b3690:
    // 0x4b3690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3694: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3694u;
        // 0x4b3698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B369Cu;
    // 0x4b369c: 0x0  nop
    ctx->pc = 0x4b369cu;
    // NOP
    ctx->pc = 0x4b36a0u;
}
