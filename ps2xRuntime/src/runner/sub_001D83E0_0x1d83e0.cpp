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

// Function: sub_001D83E0
// Address: 0x1d83e0 - 0x1d8410
void sub_001D83E0_0x1d83e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D83E0_0x1d83e0");
#endif

    switch (ctx->pc) {
        case 0x1d8400u: goto label_1d8400;
        default: break;
    }

    ctx->pc = 0x1d83e0u;

    // 0x1d83e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d83e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d83e8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1d83e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1d83ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d83f0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1d83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1d83f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d83f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d83f8: 0xc04418e  jal         func_110638
    ctx->pc = 0x1D83F8u;
    SET_GPR_U32(ctx, 31, 0x1D8400u);
    ctx->pc = 0x1D83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83F8u;
    // 0x1d83fc: 0xaca30840  sw          $v1, 0x840($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 2112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x1D83F8u, 0x1D8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8400u;
label_1d8400:
    // 0x1d8400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8404: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8404u;
        // 0x1d8408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D840Cu;
    // 0x1d840c: 0x0  nop
    ctx->pc = 0x1d840cu;
    // NOP
    ctx->pc = 0x1d8410u;
}
