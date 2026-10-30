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

// Function: sub_001B5AE0
// Address: 0x1b5ae0 - 0x1b5b08
void sub_001B5AE0_0x1b5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5AE0_0x1b5ae0");
#endif

    switch (ctx->pc) {
        case 0x1b5af8u: goto label_1b5af8;
        default: break;
    }

    ctx->pc = 0x1b5ae0u;

    // 0x1b5ae0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b5ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ae4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5ae8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b5aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5af0: 0xc06cf7e  jal         func_1B3DF8
    ctx->pc = 0x1B5AF0u;
    SET_GPR_U32(ctx, 31, 0x1B5AF8u);
    ctx->pc = 0x1B5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AF0u;
    // 0x1b5af4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3DF8u, 0x1B5AF0u, 0x1B5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AF8u;
label_1b5af8:
    // 0x1b5af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AFCu;
        // 0x1b5b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5B04u;
    // 0x1b5b04: 0x0  nop
    ctx->pc = 0x1b5b04u;
    // NOP
    ctx->pc = 0x1b5b08u;
}
