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

// Function: sub_001E45F8
// Address: 0x1e45f8 - 0x1e4618
void sub_001E45F8_0x1e45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E45F8_0x1e45f8");
#endif

    switch (ctx->pc) {
        case 0x1e4608u: goto label_1e4608;
        default: break;
    }

    ctx->pc = 0x1e45f8u;

    // 0x1e45f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e45f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e45fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e45fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4600: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E4600u;
    SET_GPR_U32(ctx, 31, 0x1E4608u);
    ctx->pc = 0x1E4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4600u;
    // 0x1e4604: 0x8c851d24  lw          $a1, 0x1D24($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E4600u, 0x1E4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4608u;
label_1e4608:
    // 0x1e4608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e460c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e460cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e4610: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4610u;
        // 0x1e4614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4618u;
}
