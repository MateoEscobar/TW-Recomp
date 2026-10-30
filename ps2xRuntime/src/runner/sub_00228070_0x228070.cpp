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

// Function: sub_00228070
// Address: 0x228070 - 0x228090
void sub_00228070_0x228070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228070_0x228070");
#endif

    switch (ctx->pc) {
        case 0x228080u: goto label_228080;
        default: break;
    }

    ctx->pc = 0x228070u;

    // 0x228070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228078: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228078u;
    SET_GPR_U32(ctx, 31, 0x228080u);
    ctx->pc = 0x22807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228078u;
    // 0x22807c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228078u, 0x228080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228080u;
label_228080:
    // 0x228080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228084: 0x3e00008  jr          $ra
    ctx->pc = 0x228084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228084u;
        // 0x228088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22808Cu;
    // 0x22808c: 0x0  nop
    ctx->pc = 0x22808cu;
    // NOP
    ctx->pc = 0x228090u;
}
