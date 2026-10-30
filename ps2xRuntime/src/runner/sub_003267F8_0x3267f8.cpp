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

// Function: sub_003267F8
// Address: 0x3267f8 - 0x326820
void sub_003267F8_0x3267f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267F8_0x3267f8");
#endif

    switch (ctx->pc) {
        case 0x326810u: goto label_326810;
        default: break;
    }

    ctx->pc = 0x3267f8u;

    // 0x3267f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3267f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3267fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3267fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326804: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x326804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x326808: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326808u;
    SET_GPR_U32(ctx, 31, 0x326810u);
    ctx->pc = 0x32680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326808u;
    // 0x32680c: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326808u, 0x326810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326810u;
label_326810:
    // 0x326810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326814: 0x3e00008  jr          $ra
    ctx->pc = 0x326814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326814u;
        // 0x326818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32681Cu;
    // 0x32681c: 0x0  nop
    ctx->pc = 0x32681cu;
    // NOP
    ctx->pc = 0x326820u;
}
