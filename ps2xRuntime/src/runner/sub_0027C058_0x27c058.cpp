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

// Function: sub_0027C058
// Address: 0x27c058 - 0x27c080
void sub_0027C058_0x27c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C058_0x27c058");
#endif

    switch (ctx->pc) {
        case 0x27c068u: goto label_27c068;
        default: break;
    }

    ctx->pc = 0x27c058u;

    // 0x27c058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27c05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c060: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27C060u;
    SET_GPR_U32(ctx, 31, 0x27C068u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27C060u, 0x27C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C068u;
label_27c068:
    // 0x27c068: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27c06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c070: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27c070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c074: 0x3e00008  jr          $ra
    ctx->pc = 0x27C074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C074u;
        // 0x27c078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C07Cu;
    // 0x27c07c: 0x0  nop
    ctx->pc = 0x27c07cu;
    // NOP
    ctx->pc = 0x27c080u;
}
