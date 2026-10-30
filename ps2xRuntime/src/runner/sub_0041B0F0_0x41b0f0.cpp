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

// Function: sub_0041B0F0
// Address: 0x41b0f0 - 0x41b118
void sub_0041B0F0_0x41b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B0F0_0x41b0f0");
#endif

    switch (ctx->pc) {
        case 0x41b10cu: goto label_41b10c;
        default: break;
    }

    ctx->pc = 0x41b0f0u;

    // 0x41b0f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b0f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41b0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41b0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41b0fc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41b100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41b104: 0xc106c46  jal         func_41B118
    ctx->pc = 0x41B104u;
    SET_GPR_U32(ctx, 31, 0x41B10Cu);
    ctx->pc = 0x41B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B118u, 0x41B104u, 0x41B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B10Cu;
label_41b10c:
    // 0x41b10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41b10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41b110: 0x3e00008  jr          $ra
    ctx->pc = 0x41B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B110u;
        // 0x41b114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B118u;
}
