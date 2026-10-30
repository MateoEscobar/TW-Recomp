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

// Function: sub_001083D0
// Address: 0x1083d0 - 0x1083e8
void sub_001083D0_0x1083d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001083D0_0x1083d0");
#endif

    ctx->pc = 0x1083d0u;

    // 0x1083d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1083d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1083d4: 0x8c4302b8  lw          $v1, 0x2B8($v0)
    ctx->pc = 0x1083d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
    // 0x1083d8: 0xc46003a4  lwc1        $f0, 0x3A4($v1)
    ctx->pc = 0x1083d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1083dc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1083dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1083e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1083E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1083E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083E0u;
        // 0x1083e4: 0xe48c000c  swc1        $f12, 0xC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1083E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1083E8u;
}
