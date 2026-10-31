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

// Function: sub_0027BB50
// Address: 0x27bb50 - 0x27bb78
void sub_0027BB50_0x27bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BB50_0x27bb50");
#endif

    switch (ctx->pc) {
        case 0x27bb60u: goto label_27bb60;
        default: break;
    }

    ctx->pc = 0x27bb50u;

    // 0x27bb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bb58: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BB58u;
    SET_GPR_U32(ctx, 31, 0x27BB60u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BB58u, 0x27BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB60u;
label_27bb60:
    // 0x27bb60: 0x38420038  xori        $v0, $v0, 0x38
    ctx->pc = 0x27bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)56);
    // 0x27bb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bb68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27bb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27bb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB6Cu;
        // 0x27bb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BB74u;
    // 0x27bb74: 0x0  nop
    ctx->pc = 0x27bb74u;
    // NOP
    ctx->pc = 0x27bb78u;
}
