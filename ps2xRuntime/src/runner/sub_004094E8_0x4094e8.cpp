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

// Function: sub_004094E8
// Address: 0x4094e8 - 0x409508
void sub_004094E8_0x4094e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004094E8_0x4094e8");
#endif

    switch (ctx->pc) {
        case 0x4094f8u: goto label_4094f8;
        default: break;
    }

    ctx->pc = 0x4094e8u;

    // 0x4094e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4094e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4094ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4094ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4094f0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x4094F0u;
    SET_GPR_U32(ctx, 31, 0x4094F8u);
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x4094F0u, 0x4094F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4094F8u;
label_4094f8:
    // 0x4094f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4094f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4094fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4094FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094FCu;
        // 0x409500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4094FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409504u;
    // 0x409504: 0x0  nop
    ctx->pc = 0x409504u;
    // NOP
    ctx->pc = 0x409508u;
}
