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

// Function: sub_002DB5A0
// Address: 0x2db5a0 - 0x2db5c0
void sub_002DB5A0_0x2db5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB5A0_0x2db5a0");
#endif

    switch (ctx->pc) {
        case 0x2db5b0u: goto label_2db5b0;
        default: break;
    }

    ctx->pc = 0x2db5a0u;

    // 0x2db5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db5a8: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DB5A8u;
    SET_GPR_U32(ctx, 31, 0x2DB5B0u);
    ctx->pc = 0x2DB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB5A8u;
    // 0x2db5ac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DB5A8u, 0x2DB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5B0u;
label_2db5b0:
    // 0x2db5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5B4u;
        // 0x2db5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB5BCu;
    // 0x2db5bc: 0x0  nop
    ctx->pc = 0x2db5bcu;
    // NOP
    ctx->pc = 0x2db5c0u;
}
