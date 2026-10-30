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

// Function: sub_002283C8
// Address: 0x2283c8 - 0x2283e8
void sub_002283C8_0x2283c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002283C8_0x2283c8");
#endif

    switch (ctx->pc) {
        case 0x2283d8u: goto label_2283d8;
        default: break;
    }

    ctx->pc = 0x2283c8u;

    // 0x2283c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2283c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2283cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2283ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2283d0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2283D0u;
    SET_GPR_U32(ctx, 31, 0x2283D8u);
    ctx->pc = 0x2283D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283D0u;
    // 0x2283d4: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2283D0u, 0x2283D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283D8u;
label_2283d8:
    // 0x2283d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2283d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2283DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2283E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283DCu;
        // 0x2283e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2283E4u;
    // 0x2283e4: 0x0  nop
    ctx->pc = 0x2283e4u;
    // NOP
    ctx->pc = 0x2283e8u;
}
