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

// Function: sub_004AE8F8
// Address: 0x4ae8f8 - 0x4ae918
void sub_004AE8F8_0x4ae8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE8F8_0x4ae8f8");
#endif

    switch (ctx->pc) {
        case 0x4ae908u: goto label_4ae908;
        default: break;
    }

    ctx->pc = 0x4ae8f8u;

    // 0x4ae8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae900: 0xc12af3c  jal         func_4ABCF0
    ctx->pc = 0x4AE900u;
    SET_GPR_U32(ctx, 31, 0x4AE908u);
    ctx->pc = 0x4ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABCF0u, 0x4AE900u, 0x4AE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE908u;
label_4ae908:
    // 0x4ae908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae90c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE90Cu;
        // 0x4ae910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE914u;
    // 0x4ae914: 0x0  nop
    ctx->pc = 0x4ae914u;
    // NOP
    ctx->pc = 0x4ae918u;
}
