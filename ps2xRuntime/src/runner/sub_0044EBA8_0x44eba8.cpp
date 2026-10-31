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

// Function: sub_0044EBA8
// Address: 0x44eba8 - 0x44ebc8
void sub_0044EBA8_0x44eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EBA8_0x44eba8");
#endif

    switch (ctx->pc) {
        case 0x44ebb8u: goto label_44ebb8;
        default: break;
    }

    ctx->pc = 0x44eba8u;

    // 0x44eba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44ebac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44ebb0: 0xc11a8fc  jal         func_46A3F0
    ctx->pc = 0x44EBB0u;
    SET_GPR_U32(ctx, 31, 0x44EBB8u);
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x44EBB0u, 0x44EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EBB8u;
label_44ebb8:
    // 0x44ebb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ebb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ebbc: 0x3e00008  jr          $ra
    ctx->pc = 0x44EBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EBBCu;
        // 0x44ebc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EBC4u;
    // 0x44ebc4: 0x0  nop
    ctx->pc = 0x44ebc4u;
    // NOP
    ctx->pc = 0x44ebc8u;
}
