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

// Function: sub_0036EE08
// Address: 0x36ee08 - 0x36ee28
void sub_0036EE08_0x36ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EE08_0x36ee08");
#endif

    switch (ctx->pc) {
        case 0x36ee18u: goto label_36ee18;
        default: break;
    }

    ctx->pc = 0x36ee08u;

    // 0x36ee08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ee0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ee10: 0xc06d7ec  jal         func_1B5FB0
    ctx->pc = 0x36EE10u;
    SET_GPR_U32(ctx, 31, 0x36EE18u);
    ctx->pc = 0x1B5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FB0u, 0x36EE10u, 0x36EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE18u;
label_36ee18:
    // 0x36ee18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ee18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ee1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ee1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee20: 0x3e00008  jr          $ra
    ctx->pc = 0x36EE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE20u;
        // 0x36ee24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EE28u;
}
