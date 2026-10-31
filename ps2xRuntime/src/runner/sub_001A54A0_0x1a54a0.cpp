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

// Function: sub_001A54A0
// Address: 0x1a54a0 - 0x1a54c0
void sub_001A54A0_0x1a54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54A0_0x1a54a0");
#endif

    ctx->pc = 0x1a54a0u;

    // 0x1a54a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a54a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a54a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a54a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a54a8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a54a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a54ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a54acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a54b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a54b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a54b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54B4u;
        // 0x1a54b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54BCu;
    // 0x1a54bc: 0x0  nop
    ctx->pc = 0x1a54bcu;
    // NOP
    ctx->pc = 0x1a54c0u;
}
