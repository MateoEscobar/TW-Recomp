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

// Function: sub_00423A98
// Address: 0x423a98 - 0x423ab8
void sub_00423A98_0x423a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423A98_0x423a98");
#endif

    switch (ctx->pc) {
        case 0x423aa8u: goto label_423aa8;
        default: break;
    }

    ctx->pc = 0x423a98u;

    // 0x423a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x423a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423aa0: 0xc108ee2  jal         func_423B88
    ctx->pc = 0x423AA0u;
    SET_GPR_U32(ctx, 31, 0x423AA8u);
    ctx->pc = 0x423B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423B88u, 0x423AA0u, 0x423AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423AA8u;
label_423aa8:
    // 0x423aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423aac: 0x3e00008  jr          $ra
    ctx->pc = 0x423AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AACu;
        // 0x423ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423AB4u;
    // 0x423ab4: 0x0  nop
    ctx->pc = 0x423ab4u;
    // NOP
    ctx->pc = 0x423ab8u;
}
