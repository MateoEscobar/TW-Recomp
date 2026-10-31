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

// Function: sub_001B3FC0
// Address: 0x1b3fc0 - 0x1b3fe8
void sub_001B3FC0_0x1b3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3FC0_0x1b3fc0");
#endif

    switch (ctx->pc) {
        case 0x1b3fdcu: goto label_1b3fdc;
        default: break;
    }

    ctx->pc = 0x1b3fc0u;

    // 0x1b3fc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b3fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3fc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b3fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b3fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3fd0: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b3fd4: 0xc06cb9a  jal         func_1B2E68
    ctx->pc = 0x1B3FD4u;
    SET_GPR_U32(ctx, 31, 0x1B3FDCu);
    ctx->pc = 0x1B3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FD4u;
    // 0x1b3fd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E68u, 0x1B3FD4u, 0x1B3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FDCu;
label_1b3fdc:
    // 0x1b3fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE0u;
        // 0x1b3fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3FE8u;
}
