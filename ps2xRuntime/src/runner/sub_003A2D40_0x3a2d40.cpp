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

// Function: sub_003A2D40
// Address: 0x3a2d40 - 0x3a2d60
void sub_003A2D40_0x3a2d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2D40_0x3a2d40");
#endif

    switch (ctx->pc) {
        case 0x3a2d50u: goto label_3a2d50;
        default: break;
    }

    ctx->pc = 0x3a2d40u;

    // 0x3a2d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a2d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2d48: 0xc0e900c  jal         func_3A4030
    ctx->pc = 0x3A2D48u;
    SET_GPR_U32(ctx, 31, 0x3A2D50u);
    ctx->pc = 0x3A4030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4030u, 0x3A2D48u, 0x3A2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D50u;
label_3a2d50:
    // 0x3a2d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2d54: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D54u;
        // 0x3a2d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2D5Cu;
    // 0x3a2d5c: 0x0  nop
    ctx->pc = 0x3a2d5cu;
    // NOP
    ctx->pc = 0x3a2d60u;
}
