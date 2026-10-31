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

// Function: sub_00111040
// Address: 0x111040 - 0x111060
void sub_00111040_0x111040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111040_0x111040");
#endif

    switch (ctx->pc) {
        case 0x111050u: goto label_111050;
        default: break;
    }

    ctx->pc = 0x111040u;

    // 0x111040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111048: 0xc04592a  jal         func_1164A8
    ctx->pc = 0x111048u;
    SET_GPR_U32(ctx, 31, 0x111050u);
    ctx->pc = 0x11104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111048u;
    // 0x11104c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1164A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1164A8u, 0x111048u, 0x111050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111050u;
label_111050:
    // 0x111050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111054: 0x3e00008  jr          $ra
    ctx->pc = 0x111054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111054u;
        // 0x111058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11105Cu;
    // 0x11105c: 0x0  nop
    ctx->pc = 0x11105cu;
    // NOP
    ctx->pc = 0x111060u;
}
