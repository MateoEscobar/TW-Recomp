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

// Function: sub_00112DA0
// Address: 0x112da0 - 0x112dc0
void sub_00112DA0_0x112da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112DA0_0x112da0");
#endif

    switch (ctx->pc) {
        case 0x112db0u: goto label_112db0;
        default: break;
    }

    ctx->pc = 0x112da0u;

    // 0x112da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112da8: 0xc04361c  jal         func_10D870
    ctx->pc = 0x112DA8u;
    SET_GPR_U32(ctx, 31, 0x112DB0u);
    ctx->pc = 0x112DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DA8u;
    // 0x112dac: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D870u, 0x112DA8u, 0x112DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DB0u;
label_112db0:
    // 0x112db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112db4: 0x3e00008  jr          $ra
    ctx->pc = 0x112DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DB4u;
        // 0x112db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112DBCu;
    // 0x112dbc: 0x0  nop
    ctx->pc = 0x112dbcu;
    // NOP
    ctx->pc = 0x112dc0u;
}
