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

// Function: sub_0031E394
// Address: 0x31e394 - 0x31e3b8
void sub_0031E394_0x31e394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E394_0x31e394");
#endif

    switch (ctx->pc) {
        case 0x31e398u: goto label_31e398;
        default: break;
    }

    ctx->pc = 0x31e394u;

    // 0x31e394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31e394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e398:
    // 0x31e398: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31e398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e39c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31e39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e3a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31e3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e3a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31e3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e3a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31e3a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x31E3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3B0u;
        // 0x31e3b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E3B8u;
}
