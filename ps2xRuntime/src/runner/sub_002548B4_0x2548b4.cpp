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

// Function: sub_002548B4
// Address: 0x2548b4 - 0x2548c8
void sub_002548B4_0x2548b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548B4_0x2548b4");
#endif

    switch (ctx->pc) {
        case 0x2548b8u: goto label_2548b8;
        default: break;
    }

    ctx->pc = 0x2548b4u;

    // 0x2548b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2548b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2548b8:
    // 0x2548b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2548b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2548bc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2548bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2548c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2548C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2548C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548C0u;
        // 0x2548c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2548C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548C8u;
}
