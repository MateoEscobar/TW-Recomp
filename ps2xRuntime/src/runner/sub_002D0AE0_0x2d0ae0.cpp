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

// Function: sub_002D0AE0
// Address: 0x2d0ae0 - 0x2d0b00
void sub_002D0AE0_0x2d0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0AE0_0x2d0ae0");
#endif

    switch (ctx->pc) {
        case 0x2d0af4u: goto label_2d0af4;
        default: break;
    }

    ctx->pc = 0x2d0ae0u;

    // 0x2d0ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0ae8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0aec: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2D0AECu;
    SET_GPR_U32(ctx, 31, 0x2D0AF4u);
    ctx->pc = 0x2D0AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0AECu;
    // 0x2d0af0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D0AECu, 0x2D0AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AF4u;
label_2d0af4:
    // 0x2d0af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0af8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AF8u;
        // 0x2d0afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0B00u;
}
