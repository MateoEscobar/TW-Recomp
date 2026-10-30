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

// Function: sub_0018DA80
// Address: 0x18da80 - 0x18dac0
void sub_0018DA80_0x18da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DA80_0x18da80");
#endif

    ctx->pc = 0x18da80u;

    // 0x18da80: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x18da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x18da84: 0xac8201e8  sw          $v0, 0x1E8($a0)
    ctx->pc = 0x18da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 2));
    // 0x18da88: 0xc4a001ec  lwc1        $f0, 0x1EC($a1)
    ctx->pc = 0x18da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18da8c: 0xe48001ec  swc1        $f0, 0x1EC($a0)
    ctx->pc = 0x18da8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
    // 0x18da90: 0xc4a101f0  lwc1        $f1, 0x1F0($a1)
    ctx->pc = 0x18da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18da94: 0xe48101f0  swc1        $f1, 0x1F0($a0)
    ctx->pc = 0x18da94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x18da98: 0x8ca201d0  lw          $v0, 0x1D0($a1)
    ctx->pc = 0x18da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x18da9c: 0xac8201d0  sw          $v0, 0x1D0($a0)
    ctx->pc = 0x18da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
    // 0x18daa0: 0x8ca301d4  lw          $v1, 0x1D4($a1)
    ctx->pc = 0x18daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
    // 0x18daa4: 0xac8301d4  sw          $v1, 0x1D4($a0)
    ctx->pc = 0x18daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
    // 0x18daa8: 0xc4a001d8  lwc1        $f0, 0x1D8($a1)
    ctx->pc = 0x18daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18daac: 0xe48001d8  swc1        $f0, 0x1D8($a0)
    ctx->pc = 0x18daacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
    // 0x18dab0: 0xc4a101dc  lwc1        $f1, 0x1DC($a1)
    ctx->pc = 0x18dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18dab4: 0x3e00008  jr          $ra
    ctx->pc = 0x18DAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAB4u;
        // 0x18dab8: 0xe48101dc  swc1        $f1, 0x1DC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DABCu;
    // 0x18dabc: 0x0  nop
    ctx->pc = 0x18dabcu;
    // NOP
    ctx->pc = 0x18dac0u;
}
