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

// Function: sub_003E9D40
// Address: 0x3e9d40 - 0x3e9d60
void sub_003E9D40_0x3e9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9D40_0x3e9d40");
#endif

    switch (ctx->pc) {
        case 0x3e9d44u: goto label_3e9d44;
        default: break;
    }

    ctx->pc = 0x3e9d40u;

    // 0x3e9d40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e9d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e9d44:
    // 0x3e9d44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e9d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e9d48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e9d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e9d4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e9d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e9d50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e9d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e9d54: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D54u;
        // 0x3e9d58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9D5Cu;
    // 0x3e9d5c: 0x0  nop
    ctx->pc = 0x3e9d5cu;
    // NOP
    ctx->pc = 0x3e9d60u;
}
