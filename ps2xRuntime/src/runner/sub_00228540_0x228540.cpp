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

// Function: sub_00228540
// Address: 0x228540 - 0x228560
void sub_00228540_0x228540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228540_0x228540");
#endif

    switch (ctx->pc) {
        case 0x228550u: goto label_228550;
        default: break;
    }

    ctx->pc = 0x228540u;

    // 0x228540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228548: 0xc089998  jal         func_226660
    ctx->pc = 0x228548u;
    SET_GPR_U32(ctx, 31, 0x228550u);
    ctx->pc = 0x22854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228548u;
    // 0x22854c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x228548u, 0x228550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228550u;
label_228550:
    // 0x228550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228554: 0x3e00008  jr          $ra
    ctx->pc = 0x228554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228554u;
        // 0x228558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22855Cu;
    // 0x22855c: 0x0  nop
    ctx->pc = 0x22855cu;
    // NOP
    ctx->pc = 0x228560u;
}
