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

// Function: sub_00143C58
// Address: 0x143c58 - 0x143c78
void sub_00143C58_0x143c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C58_0x143c58");
#endif

    ctx->pc = 0x143c58u;

    // 0x143c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x143c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143c60: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C60u;
    {
        const bool branch_taken_0x143c60 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x143c60) {
            ctx->pc = 0x143C70u;
            goto label_143c70;
        }
    }
    ctx->pc = 0x143C68u;
    // 0x143c68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x143c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x143c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143c70:
    // 0x143c70: 0x3e00008  jr          $ra
    ctx->pc = 0x143C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C70u;
        // 0x143c74: 0xe48001f4  swc1        $f0, 0x1F4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 500), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143C78u;
}
