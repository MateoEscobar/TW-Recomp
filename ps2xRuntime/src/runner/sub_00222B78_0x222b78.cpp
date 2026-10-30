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

// Function: sub_00222B78
// Address: 0x222b78 - 0x222ba8
void sub_00222B78_0x222b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B78_0x222b78");
#endif

    switch (ctx->pc) {
        case 0x222b9cu: goto label_222b9c;
        default: break;
    }

    ctx->pc = 0x222b78u;

    // 0x222b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222b80: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x222b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x222b84: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222b84u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x222b88: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x222B88u;
    {
        const bool branch_taken_0x222b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222b88) {
            ctx->pc = 0x222B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222B88u;
            // 0x222b8c: 0x808401b9  lb          $a0, 0x1B9($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 441)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222B94u;
            goto label_222b94;
        }
    }
    ctx->pc = 0x222B90u;
    // 0x222b90: 0x808401b8  lb          $a0, 0x1B8($a0)
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 440)));
label_222b94:
    // 0x222b94: 0xc08a20c  jal         func_228830
    ctx->pc = 0x222B94u;
    SET_GPR_U32(ctx, 31, 0x222B9Cu);
    ctx->pc = 0x228830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228830u, 0x222B94u, 0x222B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B9Cu;
label_222b9c:
    // 0x222b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x222BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BA0u;
        // 0x222ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222BA8u;
}
