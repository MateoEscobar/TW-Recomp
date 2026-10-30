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

// Function: sub_00227C68
// Address: 0x227c68 - 0x227c88
void sub_00227C68_0x227c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C68_0x227c68");
#endif

    switch (ctx->pc) {
        case 0x227c78u: goto label_227c78;
        default: break;
    }

    ctx->pc = 0x227c68u;

    // 0x227c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227c70: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227C70u;
    SET_GPR_U32(ctx, 31, 0x227C78u);
    ctx->pc = 0x227C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C70u;
    // 0x227c74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227C70u, 0x227C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C78u;
label_227c78:
    // 0x227c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x227C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C7Cu;
        // 0x227c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C84u;
    // 0x227c84: 0x0  nop
    ctx->pc = 0x227c84u;
    // NOP
    ctx->pc = 0x227c88u;
}
