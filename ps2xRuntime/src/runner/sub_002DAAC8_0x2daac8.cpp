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

// Function: sub_002DAAC8
// Address: 0x2daac8 - 0x2dab00
void sub_002DAAC8_0x2daac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAAC8_0x2daac8");
#endif

    switch (ctx->pc) {
        case 0x2daae0u: goto label_2daae0;
        case 0x2daaf0u: goto label_2daaf0;
        default: break;
    }

    ctx->pc = 0x2daac8u;

    // 0x2daac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2daac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daacc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2daaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2daad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2daad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2daad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2daad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daad8: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DAAD8u;
    SET_GPR_U32(ctx, 31, 0x2DAAE0u);
    ctx->pc = 0x2DAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAAD8u;
    // 0x2daadc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DAAD8u, 0x2DAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAE0u;
label_2daae0:
    // 0x2daae0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2daae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2daae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2daae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daae8: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2DAAE8u;
    SET_GPR_U32(ctx, 31, 0x2DAAF0u);
    ctx->pc = 0x2DAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAAE8u;
    // 0x2daaec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DAAE8u, 0x2DAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAF0u;
label_2daaf0:
    // 0x2daaf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2daaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2daaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAF8u;
        // 0x2daafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB00u;
}
