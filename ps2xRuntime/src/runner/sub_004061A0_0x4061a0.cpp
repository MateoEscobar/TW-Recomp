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

// Function: sub_004061A0
// Address: 0x4061a0 - 0x4061c0
void sub_004061A0_0x4061a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004061A0_0x4061a0");
#endif

    switch (ctx->pc) {
        case 0x4061a4u: goto label_4061a4;
        default: break;
    }

    ctx->pc = 0x4061a0u;

    // 0x4061a0: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x4061a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_4061a4:
    // 0x4061a4: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x4061a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x4061a8: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x4061a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x4061ac: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x4061acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x4061b0: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x4061b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x4061b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4061B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4061B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4061B4u;
        // 0x4061b8: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4061B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4061BCu;
    // 0x4061bc: 0x0  nop
    ctx->pc = 0x4061bcu;
    // NOP
    ctx->pc = 0x4061c0u;
}
