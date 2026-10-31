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

// Function: sub_0036DB10
// Address: 0x36db10 - 0x36db30
void sub_0036DB10_0x36db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DB10_0x36db10");
#endif

    switch (ctx->pc) {
        case 0x36db20u: goto label_36db20;
        default: break;
    }

    ctx->pc = 0x36db10u;

    // 0x36db10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36db14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36db18: 0xc0e898a  jal         func_3A2628
    ctx->pc = 0x36DB18u;
    SET_GPR_U32(ctx, 31, 0x36DB20u);
    ctx->pc = 0x3A2628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2628u, 0x36DB18u, 0x36DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB20u;
label_36db20:
    // 0x36db20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36db20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36db24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36db24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db28: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB28u;
        // 0x36db2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB30u;
}
