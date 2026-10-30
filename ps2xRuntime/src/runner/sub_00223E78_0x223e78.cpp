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

// Function: sub_00223E78
// Address: 0x223e78 - 0x223ea0
void sub_00223E78_0x223e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223E78_0x223e78");
#endif

    switch (ctx->pc) {
        case 0x223e88u: goto label_223e88;
        default: break;
    }

    ctx->pc = 0x223e78u;

    // 0x223e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223e80: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x223E80u;
    SET_GPR_U32(ctx, 31, 0x223E88u);
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x223E80u, 0x223E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E88u;
label_223e88:
    // 0x223e88: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x223e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x223e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x223e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x223e94: 0x3e00008  jr          $ra
    ctx->pc = 0x223E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E94u;
        // 0x223e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E9Cu;
    // 0x223e9c: 0x0  nop
    ctx->pc = 0x223e9cu;
    // NOP
    ctx->pc = 0x223ea0u;
}
