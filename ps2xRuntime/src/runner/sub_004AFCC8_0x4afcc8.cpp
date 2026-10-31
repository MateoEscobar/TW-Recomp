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

// Function: sub_004AFCC8
// Address: 0x4afcc8 - 0x4afce8
void sub_004AFCC8_0x4afcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFCC8_0x4afcc8");
#endif

    switch (ctx->pc) {
        case 0x4afcd8u: goto label_4afcd8;
        default: break;
    }

    ctx->pc = 0x4afcc8u;

    // 0x4afcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afcd0: 0xc12c5d4  jal         func_4B1750
    ctx->pc = 0x4AFCD0u;
    SET_GPR_U32(ctx, 31, 0x4AFCD8u);
    ctx->pc = 0x4B1750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1750u, 0x4AFCD0u, 0x4AFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFCD8u;
label_4afcd8:
    // 0x4afcd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCDCu;
        // 0x4afce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFCE4u;
    // 0x4afce4: 0x0  nop
    ctx->pc = 0x4afce4u;
    // NOP
    ctx->pc = 0x4afce8u;
}
