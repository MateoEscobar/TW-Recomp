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

// Function: sub_003FB580
// Address: 0x3fb580 - 0x3fb5a0
void sub_003FB580_0x3fb580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB580_0x3fb580");
#endif

    switch (ctx->pc) {
        case 0x3fb584u: goto label_3fb584;
        default: break;
    }

    ctx->pc = 0x3fb580u;

    // 0x3fb580: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3fb580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb584:
    // 0x3fb584: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3fb584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fb588: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3fb588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fb58c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fb58cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fb590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb594: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB594u;
        // 0x3fb598: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB59Cu;
    // 0x3fb59c: 0x0  nop
    ctx->pc = 0x3fb59cu;
    // NOP
    ctx->pc = 0x3fb5a0u;
}
