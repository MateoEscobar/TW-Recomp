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

// Function: sub_001B42D8
// Address: 0x1b42d8 - 0x1b4300
void sub_001B42D8_0x1b42d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B42D8_0x1b42d8");
#endif

    switch (ctx->pc) {
        case 0x1b42f0u: goto label_1b42f0;
        default: break;
    }

    ctx->pc = 0x1b42d8u;

    // 0x1b42d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b42d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b42e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b42e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b42e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b42e8: 0xc06cac6  jal         func_1B2B18
    ctx->pc = 0x1B42E8u;
    SET_GPR_U32(ctx, 31, 0x1B42F0u);
    ctx->pc = 0x1B42ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42E8u;
    // 0x1b42ec: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B18u, 0x1B42E8u, 0x1B42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42F0u;
label_1b42f0:
    // 0x1b42f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b42f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b42f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B42F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42F4u;
        // 0x1b42f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B42F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B42FCu;
    // 0x1b42fc: 0x0  nop
    ctx->pc = 0x1b42fcu;
    // NOP
    ctx->pc = 0x1b4300u;
}
