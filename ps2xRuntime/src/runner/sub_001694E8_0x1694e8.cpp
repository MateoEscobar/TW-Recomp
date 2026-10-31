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

// Function: sub_001694E8
// Address: 0x1694e8 - 0x169508
void sub_001694E8_0x1694e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001694E8_0x1694e8");
#endif

    switch (ctx->pc) {
        case 0x1694fcu: goto label_1694fc;
        default: break;
    }

    ctx->pc = 0x1694e8u;

    // 0x1694e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1694ec: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x1694ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1694f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1694f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1694f4: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x1694F4u;
    SET_GPR_U32(ctx, 31, 0x1694FCu);
    ctx->pc = 0x1694F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1694F4u;
    // 0x1694f8: 0x2405025b  addiu       $a1, $zero, 0x25B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x1694F4u, 0x1694FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1694FCu;
label_1694fc:
    // 0x1694fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1694fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169500: 0x3e00008  jr          $ra
    ctx->pc = 0x169500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169500u;
        // 0x169504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169508u;
}
