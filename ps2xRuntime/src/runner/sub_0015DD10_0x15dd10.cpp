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

// Function: sub_0015DD10
// Address: 0x15dd10 - 0x15dd38
void sub_0015DD10_0x15dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DD10_0x15dd10");
#endif

    switch (ctx->pc) {
        case 0x15dd28u: goto label_15dd28;
        default: break;
    }

    ctx->pc = 0x15dd10u;

    // 0x15dd10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15dd14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15dd18: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15dd1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15dd20: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15DD20u;
    SET_GPR_U32(ctx, 31, 0x15DD28u);
    ctx->pc = 0x15DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD20u;
    // 0x15dd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15DD20u, 0x15DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD28u;
label_15dd28:
    // 0x15dd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x15DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD2Cu;
        // 0x15dd30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DD34u;
    // 0x15dd34: 0x0  nop
    ctx->pc = 0x15dd34u;
    // NOP
    ctx->pc = 0x15dd38u;
}
