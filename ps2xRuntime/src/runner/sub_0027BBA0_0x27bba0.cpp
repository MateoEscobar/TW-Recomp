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

// Function: sub_0027BBA0
// Address: 0x27bba0 - 0x27bbd0
void sub_0027BBA0_0x27bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BBA0_0x27bba0");
#endif

    switch (ctx->pc) {
        case 0x27bbb0u: goto label_27bbb0;
        default: break;
    }

    ctx->pc = 0x27bba0u;

    // 0x27bba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bba8: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BBA8u;
    SET_GPR_U32(ctx, 31, 0x27BBB0u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BBA8u, 0x27BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBB0u;
label_27bbb0:
    // 0x27bbb0: 0x38420033  xori        $v0, $v0, 0x33
    ctx->pc = 0x27bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)51);
    // 0x27bbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bbb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27bbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27bbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBBCu;
        // 0x27bbc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BBC4u;
    // 0x27bbc4: 0x0  nop
    ctx->pc = 0x27bbc4u;
    // NOP
    // 0x27bbc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27bbcc: 0x0  nop
    ctx->pc = 0x27bbccu;
    // NOP
    ctx->pc = 0x27bbd0u;
}
