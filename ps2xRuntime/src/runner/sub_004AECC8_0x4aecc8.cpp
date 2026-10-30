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

// Function: sub_004AECC8
// Address: 0x4aecc8 - 0x4aece8
void sub_004AECC8_0x4aecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AECC8_0x4aecc8");
#endif

    switch (ctx->pc) {
        case 0x4aecd8u: goto label_4aecd8;
        default: break;
    }

    ctx->pc = 0x4aecc8u;

    // 0x4aecc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aeccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aecd0: 0xc12b6dc  jal         func_4ADB70
    ctx->pc = 0x4AECD0u;
    SET_GPR_U32(ctx, 31, 0x4AECD8u);
    ctx->pc = 0x4ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADB70u, 0x4AECD0u, 0x4AECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AECD8u;
label_4aecd8:
    // 0x4aecd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aecd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AECDCu;
        // 0x4aece0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AECE4u;
    // 0x4aece4: 0x0  nop
    ctx->pc = 0x4aece4u;
    // NOP
    ctx->pc = 0x4aece8u;
}
