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

// Function: sub_0040B030
// Address: 0x40b030 - 0x40b058
void sub_0040B030_0x40b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B030_0x40b030");
#endif

    switch (ctx->pc) {
        case 0x40b048u: goto label_40b048;
        default: break;
    }

    ctx->pc = 0x40b030u;

    // 0x40b030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40b034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b03c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b040: 0xc102b56  jal         func_40AD58
    ctx->pc = 0x40B040u;
    SET_GPR_U32(ctx, 31, 0x40B048u);
    ctx->pc = 0x40B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B040u;
    // 0x40b044: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AD58u, 0x40B040u, 0x40B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B048u;
label_40b048:
    // 0x40b048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b050: 0x3e00008  jr          $ra
    ctx->pc = 0x40B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B050u;
        // 0x40b054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B058u;
}
