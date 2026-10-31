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

// Function: sub_001925B0
// Address: 0x1925b0 - 0x1925d0
void sub_001925B0_0x1925b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001925B0_0x1925b0");
#endif

    switch (ctx->pc) {
        case 0x1925c0u: goto label_1925c0;
        default: break;
    }

    ctx->pc = 0x1925b0u;

    // 0x1925b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1925b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1925b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1925b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1925b8: 0xc064204  jal         func_190810
    ctx->pc = 0x1925B8u;
    SET_GPR_U32(ctx, 31, 0x1925C0u);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x1925B8u, 0x1925C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925C0u;
label_1925c0:
    // 0x1925c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1925c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1925c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1925C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925C4u;
        // 0x1925c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1925C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1925CCu;
    // 0x1925cc: 0x0  nop
    ctx->pc = 0x1925ccu;
    // NOP
    ctx->pc = 0x1925d0u;
}
