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

// Function: sub_00354C48
// Address: 0x354c48 - 0x354c80
void sub_00354C48_0x354c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354C48_0x354c48");
#endif

    switch (ctx->pc) {
        case 0x354c58u: goto label_354c58;
        default: break;
    }

    ctx->pc = 0x354c48u;

    // 0x354c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354c50: 0xc0d4e84  jal         func_353A10
    ctx->pc = 0x354C50u;
    SET_GPR_U32(ctx, 31, 0x354C58u);
    ctx->pc = 0x354C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C50u;
    // 0x354c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353A10u, 0x354C50u, 0x354C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C58u;
label_354c58:
    // 0x354c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x354C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C5Cu;
        // 0x354c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354C64u;
    // 0x354c64: 0x0  nop
    ctx->pc = 0x354c64u;
    // NOP
    // 0x354c68: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x354c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x354c6c: 0x0  nop
    ctx->pc = 0x354c6cu;
    // NOP
    // 0x354c70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354c74: 0x0  nop
    ctx->pc = 0x354c74u;
    // NOP
    // 0x354c78: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x354c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x354c7c: 0x0  nop
    ctx->pc = 0x354c7cu;
    // NOP
    ctx->pc = 0x354c80u;
}
