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

// Function: sub_004236D0
// Address: 0x4236d0 - 0x4236f0
void sub_004236D0_0x4236d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004236D0_0x4236d0");
#endif

    switch (ctx->pc) {
        case 0x4236e4u: goto label_4236e4;
        default: break;
    }

    ctx->pc = 0x4236d0u;

    // 0x4236d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4236d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4236d4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4236d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4236d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4236d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4236dc: 0xc108ea6  jal         func_423A98
    ctx->pc = 0x4236DCu;
    SET_GPR_U32(ctx, 31, 0x4236E4u);
    ctx->pc = 0x4236E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4236DCu;
    // 0x4236e0: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423A98u, 0x4236DCu, 0x4236E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4236E4u;
label_4236e4:
    // 0x4236e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4236e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4236e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4236E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4236ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4236E8u;
        // 0x4236ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4236E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4236F0u;
}
