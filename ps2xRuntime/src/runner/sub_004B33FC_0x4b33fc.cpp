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

// Function: sub_004B33FC
// Address: 0x4b33fc - 0x4b3420
void sub_004B33FC_0x4b33fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B33FC_0x4b33fc");
#endif

    switch (ctx->pc) {
        case 0x4b3404u: goto label_4b3404;
        default: break;
    }

    ctx->pc = 0x4b33fcu;

    // 0x4b33fc: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4B33FCu;
    SET_GPR_U32(ctx, 31, 0x4B3404u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4B33FCu, 0x4B3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3404u;
label_4b3404:
    // 0x4b3404: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b3404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b3408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b3408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b340c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b340cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3414: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3414u;
        // 0x4b3418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B341Cu;
    // 0x4b341c: 0x0  nop
    ctx->pc = 0x4b341cu;
    // NOP
    ctx->pc = 0x4b3420u;
}
