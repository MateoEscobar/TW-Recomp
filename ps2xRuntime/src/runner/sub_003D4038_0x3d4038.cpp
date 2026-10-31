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

// Function: sub_003D4038
// Address: 0x3d4038 - 0x3d4058
void sub_003D4038_0x3d4038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4038_0x3d4038");
#endif

    switch (ctx->pc) {
        case 0x3d403cu: goto label_3d403c;
        default: break;
    }

    ctx->pc = 0x3d4038u;

    // 0x3d4038: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3d4038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d403c:
    // 0x3d403c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3d403cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d4040: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3d4040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d4044: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3d4044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d4048: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d4048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d404c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3d404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d4050: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4050u;
        // 0x3d4054: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4058u;
}
