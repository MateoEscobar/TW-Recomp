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

// Function: sub_002D2538
// Address: 0x2d2538 - 0x2d2560
void sub_002D2538_0x2d2538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2538_0x2d2538");
#endif

    switch (ctx->pc) {
        case 0x2d2554u: goto label_2d2554;
        default: break;
    }

    ctx->pc = 0x2d2538u;

    // 0x2d2538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d2538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d253c: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2d2540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2548: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d254c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2D254Cu;
    SET_GPR_U32(ctx, 31, 0x2D2554u);
    ctx->pc = 0x2D2550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D254Cu;
    // 0x2d2550: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2D254Cu, 0x2D2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2554u;
label_2d2554:
    // 0x2d2554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2558: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2558u;
        // 0x2d255c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2560u;
}
