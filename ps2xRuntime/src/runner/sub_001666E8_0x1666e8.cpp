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

// Function: sub_001666E8
// Address: 0x1666e8 - 0x166708
void sub_001666E8_0x1666e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001666E8_0x1666e8");
#endif

    switch (ctx->pc) {
        case 0x1666ecu: goto label_1666ec;
        case 0x1666f0u: goto label_1666f0;
        default: break;
    }

    ctx->pc = 0x1666e8u;

    // 0x1666e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1666e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1666ec:
    // 0x1666ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1666ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1666f0:
    // 0x1666f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1666f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1666f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1666f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1666f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1666f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1666FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666FCu;
        // 0x166700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166704u;
    // 0x166704: 0x0  nop
    ctx->pc = 0x166704u;
    // NOP
    ctx->pc = 0x166708u;
}
