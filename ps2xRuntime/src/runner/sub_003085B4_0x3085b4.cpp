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

// Function: sub_003085B4
// Address: 0x3085b4 - 0x3085d8
void sub_003085B4_0x3085b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003085B4_0x3085b4");
#endif

    switch (ctx->pc) {
        case 0x3085b8u: goto label_3085b8;
        default: break;
    }

    ctx->pc = 0x3085b4u;

    // 0x3085b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3085b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3085b8:
    // 0x3085b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3085b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3085bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3085bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3085c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3085c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3085c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3085c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3085c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3085c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3085cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3085ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3085d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3085D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3085D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085D0u;
        // 0x3085d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3085D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3085D8u;
}
