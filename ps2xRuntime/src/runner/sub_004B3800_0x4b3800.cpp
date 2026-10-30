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

// Function: sub_004B3800
// Address: 0x4b3800 - 0x4b3820
void sub_004B3800_0x4b3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3800_0x4b3800");
#endif

    switch (ctx->pc) {
        case 0x4b3810u: goto label_4b3810;
        default: break;
    }

    ctx->pc = 0x4b3800u;

    // 0x4b3800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3808: 0xc12be06  jal         func_4AF818
    ctx->pc = 0x4B3808u;
    SET_GPR_U32(ctx, 31, 0x4B3810u);
    ctx->pc = 0x4AF818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF818u, 0x4B3808u, 0x4B3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3810u;
label_4b3810:
    // 0x4b3810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3814: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3814u;
        // 0x4b3818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B381Cu;
    // 0x4b381c: 0x0  nop
    ctx->pc = 0x4b381cu;
    // NOP
    ctx->pc = 0x4b3820u;
}
