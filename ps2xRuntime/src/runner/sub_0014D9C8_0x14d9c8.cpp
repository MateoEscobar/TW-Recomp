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

// Function: sub_0014D9C8
// Address: 0x14d9c8 - 0x14d9e8
void sub_0014D9C8_0x14d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D9C8_0x14d9c8");
#endif

    switch (ctx->pc) {
        case 0x14d9d8u: goto label_14d9d8;
        default: break;
    }

    ctx->pc = 0x14d9c8u;

    // 0x14d9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d9d0: 0xc053ba2  jal         func_14EE88
    ctx->pc = 0x14D9D0u;
    SET_GPR_U32(ctx, 31, 0x14D9D8u);
    ctx->pc = 0x14EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE88u, 0x14D9D0u, 0x14D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9D8u;
label_14d9d8:
    // 0x14d9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9DCu;
        // 0x14d9e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D9E4u;
    // 0x14d9e4: 0x0  nop
    ctx->pc = 0x14d9e4u;
    // NOP
    ctx->pc = 0x14d9e8u;
}
