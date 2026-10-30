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

// Function: sub_003FEE48
// Address: 0x3fee48 - 0x3fee68
void sub_003FEE48_0x3fee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FEE48_0x3fee48");
#endif

    switch (ctx->pc) {
        case 0x3fee4cu: goto label_3fee4c;
        case 0x3fee50u: goto label_3fee50;
        default: break;
    }

    ctx->pc = 0x3fee48u;

    // 0x3fee48: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3fee48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fee4c:
    // 0x3fee4c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3fee4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fee50:
    // 0x3fee50: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3fee50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fee54: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3fee54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fee58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3fee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE5Cu;
        // 0x3fee60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEE64u;
    // 0x3fee64: 0x0  nop
    ctx->pc = 0x3fee64u;
    // NOP
    ctx->pc = 0x3fee68u;
}
