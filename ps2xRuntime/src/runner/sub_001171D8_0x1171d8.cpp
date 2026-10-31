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

// Function: sub_001171D8
// Address: 0x1171d8 - 0x117208
void sub_001171D8_0x1171d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001171D8_0x1171d8");
#endif

    switch (ctx->pc) {
        case 0x1171f4u: goto label_1171f4;
        default: break;
    }

    ctx->pc = 0x1171d8u;

    // 0x1171d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1171d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1171e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1171e4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1171e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1171e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1171e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1171ec: 0xc0440c6  jal         func_110318
    ctx->pc = 0x1171ECu;
    SET_GPR_U32(ctx, 31, 0x1171F4u);
    ctx->pc = 0x1171F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171ECu;
    // 0x1171f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1171ECu, 0x1171F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171F4u;
label_1171f4:
    // 0x1171f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1171f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1171f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1171f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1171fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1171FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171FCu;
        // 0x117200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1171FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117204u;
    // 0x117204: 0x0  nop
    ctx->pc = 0x117204u;
    // NOP
    ctx->pc = 0x117208u;
}
