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

// Function: sub_00195C20
// Address: 0x195c20 - 0x195c48
void sub_00195C20_0x195c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C20_0x195c20");
#endif

    switch (ctx->pc) {
        case 0x195c38u: goto label_195c38;
        default: break;
    }

    ctx->pc = 0x195c20u;

    // 0x195c20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x195c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x195c24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195c28: 0x8c44cf14  lw          $a0, -0x30EC($v0)
    ctx->pc = 0x195c28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CF14u));
    // 0x195c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195c30: 0xc06710e  jal         func_19C438
    ctx->pc = 0x195C30u;
    SET_GPR_U32(ctx, 31, 0x195C38u);
    ctx->pc = 0x19C438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C438u, 0x195C30u, 0x195C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C38u;
label_195c38:
    // 0x195c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x195C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C3Cu;
        // 0x195c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C44u;
    // 0x195c44: 0x0  nop
    ctx->pc = 0x195c44u;
    // NOP
    ctx->pc = 0x195c48u;
}
