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

// Function: sub_003BFFB0
// Address: 0x3bffb0 - 0x3bffd0
void sub_003BFFB0_0x3bffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFFB0_0x3bffb0");
#endif

    switch (ctx->pc) {
        case 0x3bffb4u: goto label_3bffb4;
        default: break;
    }

    ctx->pc = 0x3bffb0u;

    // 0x3bffb0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3bffb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3bffb4:
    // 0x3bffb4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3bffb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3bffb8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3bffb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bffbc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3bffbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bffc0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3bffc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bffc4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3bffc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bffc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFC8u;
        // 0x3bffcc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFFD0u;
}
