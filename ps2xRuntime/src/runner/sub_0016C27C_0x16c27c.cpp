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

// Function: sub_0016C27C
// Address: 0x16c27c - 0x16c298
void sub_0016C27C_0x16c27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C27C_0x16c27c");
#endif

    switch (ctx->pc) {
        case 0x16c280u: goto label_16c280;
        default: break;
    }

    ctx->pc = 0x16c27cu;

    // 0x16c27c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16c27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16c280:
    // 0x16c280: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16c280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c284: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16c284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16c288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c28c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C28Cu;
        // 0x16c290: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C294u;
    // 0x16c294: 0x0  nop
    ctx->pc = 0x16c294u;
    // NOP
    ctx->pc = 0x16c298u;
}
