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

// Function: sub_001D43F0
// Address: 0x1d43f0 - 0x1d4418
void sub_001D43F0_0x1d43f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D43F0_0x1d43f0");
#endif

    switch (ctx->pc) {
        case 0x1d440cu: goto label_1d440c;
        default: break;
    }

    ctx->pc = 0x1d43f0u;

    // 0x1d43f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d43f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d43f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d43f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d43f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d43fc: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1d43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1d4400: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4404: 0xc074f76  jal         func_1D3DD8
    ctx->pc = 0x1D4404u;
    SET_GPR_U32(ctx, 31, 0x1D440Cu);
    ctx->pc = 0x1D4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4404u;
    // 0x1d4408: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DD8u, 0x1D4404u, 0x1D440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D440Cu;
label_1d440c:
    // 0x1d440c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d440cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4410: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4410u;
        // 0x1d4414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4418u;
}
