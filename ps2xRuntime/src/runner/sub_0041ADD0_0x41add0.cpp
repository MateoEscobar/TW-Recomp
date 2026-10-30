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

// Function: sub_0041ADD0
// Address: 0x41add0 - 0x41adf8
void sub_0041ADD0_0x41add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ADD0_0x41add0");
#endif

    switch (ctx->pc) {
        case 0x41adecu: goto label_41adec;
        default: break;
    }

    ctx->pc = 0x41add0u;

    // 0x41add0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41add0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41add4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41add8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41addc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41addcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ade0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ade4: 0xc106b7e  jal         func_41ADF8
    ctx->pc = 0x41ADE4u;
    SET_GPR_U32(ctx, 31, 0x41ADECu);
    ctx->pc = 0x41ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ADF8u, 0x41ADE4u, 0x41ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ADECu;
label_41adec:
    // 0x41adec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41adecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41adf0: 0x3e00008  jr          $ra
    ctx->pc = 0x41ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADF0u;
        // 0x41adf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ADF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ADF8u;
}
