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

// Function: sub_002A7304
// Address: 0x2a7304 - 0x2a7328
void sub_002A7304_0x2a7304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7304_0x2a7304");
#endif

    switch (ctx->pc) {
        case 0x2a7308u: goto label_2a7308;
        default: break;
    }

    ctx->pc = 0x2a7304u;

    // 0x2a7304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7308:
    // 0x2a7308: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a7308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a730c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a730cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a7310: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a7310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7314: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a7314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7318: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a7318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a731c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7320: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7320u;
        // 0x2a7324: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7328u;
}
