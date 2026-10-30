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

// Function: sub_00342D98
// Address: 0x342d98 - 0x342dc0
void sub_00342D98_0x342d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D98_0x342d98");
#endif

    switch (ctx->pc) {
        case 0x342db4u: goto label_342db4;
        default: break;
    }

    ctx->pc = 0x342d98u;

    // 0x342d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342d9c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x342d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x342da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342da4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x342da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342da8: 0x244247f0  addiu       $v0, $v0, 0x47F0
    ctx->pc = 0x342da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18416));
    // 0x342dac: 0xc0d0a9c  jal         func_342A70
    ctx->pc = 0x342DACu;
    SET_GPR_U32(ctx, 31, 0x342DB4u);
    ctx->pc = 0x342DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342DACu;
    // 0x342db0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A70u, 0x342DACu, 0x342DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342DB4u;
label_342db4:
    // 0x342db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342db8: 0x3e00008  jr          $ra
    ctx->pc = 0x342DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DB8u;
        // 0x342dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342DC0u;
}
