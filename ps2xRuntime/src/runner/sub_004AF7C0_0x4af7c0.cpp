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

// Function: sub_004AF7C0
// Address: 0x4af7c0 - 0x4af7e0
void sub_004AF7C0_0x4af7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF7C0_0x4af7c0");
#endif

    switch (ctx->pc) {
        case 0x4af7d0u: goto label_4af7d0;
        default: break;
    }

    ctx->pc = 0x4af7c0u;

    // 0x4af7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4af7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af7c8: 0xc12c3d0  jal         func_4B0F40
    ctx->pc = 0x4AF7C8u;
    SET_GPR_U32(ctx, 31, 0x4AF7D0u);
    ctx->pc = 0x4B0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0F40u, 0x4AF7C8u, 0x4AF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7D0u;
label_4af7d0:
    // 0x4af7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7D4u;
        // 0x4af7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF7DCu;
    // 0x4af7dc: 0x0  nop
    ctx->pc = 0x4af7dcu;
    // NOP
    ctx->pc = 0x4af7e0u;
}
