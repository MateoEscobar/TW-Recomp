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

// Function: sub_001C2A10
// Address: 0x1c2a10 - 0x1c2a30
void sub_001C2A10_0x1c2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2A10_0x1c2a10");
#endif

    switch (ctx->pc) {
        case 0x1c2a20u: goto label_1c2a20;
        default: break;
    }

    ctx->pc = 0x1c2a10u;

    // 0x1c2a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2a18: 0xc0708ba  jal         func_1C22E8
    ctx->pc = 0x1C2A18u;
    SET_GPR_U32(ctx, 31, 0x1C2A20u);
    ctx->pc = 0x1C22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22E8u, 0x1C2A18u, 0x1C2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A20u;
label_1c2a20:
    // 0x1c2a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A24u;
        // 0x1c2a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2A2Cu;
    // 0x1c2a2c: 0x0  nop
    ctx->pc = 0x1c2a2cu;
    // NOP
    ctx->pc = 0x1c2a30u;
}
