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

// Function: sub_0031A244
// Address: 0x31a244 - 0x31a268
void sub_0031A244_0x31a244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A244_0x31a244");
#endif

    switch (ctx->pc) {
        case 0x31a248u: goto label_31a248;
        default: break;
    }

    ctx->pc = 0x31a244u;

    // 0x31a244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a248:
    // 0x31a248: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31a248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a24c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31a24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a250: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31a250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a254: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31a254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A25Cu;
        // 0x31a260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A264u;
    // 0x31a264: 0x0  nop
    ctx->pc = 0x31a264u;
    // NOP
    ctx->pc = 0x31a268u;
}
