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

// Function: sub_001B5FD0
// Address: 0x1b5fd0 - 0x1b5ff0
void sub_001B5FD0_0x1b5fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5FD0_0x1b5fd0");
#endif

    switch (ctx->pc) {
        case 0x1b5fe4u: goto label_1b5fe4;
        default: break;
    }

    ctx->pc = 0x1b5fd0u;

    // 0x1b5fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5fd4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b5fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5fdc: 0xc06ce36  jal         func_1B38D8
    ctx->pc = 0x1B5FDCu;
    SET_GPR_U32(ctx, 31, 0x1B5FE4u);
    ctx->pc = 0x1B5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FDCu;
    // 0x1b5fe0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38D8u, 0x1B5FDCu, 0x1B5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FE4u;
label_1b5fe4:
    // 0x1b5fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FE8u;
        // 0x1b5fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5FF0u;
}
