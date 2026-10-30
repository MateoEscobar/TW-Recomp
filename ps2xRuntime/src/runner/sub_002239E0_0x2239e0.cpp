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

// Function: sub_002239E0
// Address: 0x2239e0 - 0x223a00
void sub_002239E0_0x2239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002239E0_0x2239e0");
#endif

    switch (ctx->pc) {
        case 0x2239f0u: goto label_2239f0;
        default: break;
    }

    ctx->pc = 0x2239e0u;

    // 0x2239e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2239e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2239e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2239e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2239e8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2239E8u;
    SET_GPR_U32(ctx, 31, 0x2239F0u);
    ctx->pc = 0x2239ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239E8u;
    // 0x2239ec: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2239E8u, 0x2239F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239F0u;
label_2239f0:
    // 0x2239f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2239f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2239f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2239F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2239F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239F4u;
        // 0x2239f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2239F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2239FCu;
    // 0x2239fc: 0x0  nop
    ctx->pc = 0x2239fcu;
    // NOP
    ctx->pc = 0x223a00u;
}
