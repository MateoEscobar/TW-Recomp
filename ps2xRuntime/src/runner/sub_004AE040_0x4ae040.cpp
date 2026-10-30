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

// Function: sub_004AE040
// Address: 0x4ae040 - 0x4ae060
void sub_004AE040_0x4ae040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE040_0x4ae040");
#endif

    switch (ctx->pc) {
        case 0x4ae050u: goto label_4ae050;
        default: break;
    }

    ctx->pc = 0x4ae040u;

    // 0x4ae040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae048: 0xc12ce08  jal         func_4B3820
    ctx->pc = 0x4AE048u;
    SET_GPR_U32(ctx, 31, 0x4AE050u);
    ctx->pc = 0x4B3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3820u, 0x4AE048u, 0x4AE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE050u;
label_4ae050:
    // 0x4ae050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae054: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE054u;
        // 0x4ae058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE05Cu;
    // 0x4ae05c: 0x0  nop
    ctx->pc = 0x4ae05cu;
    // NOP
    ctx->pc = 0x4ae060u;
}
