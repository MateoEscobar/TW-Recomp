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

// Function: sub_0019CDE0
// Address: 0x19cde0 - 0x19ce08
void sub_0019CDE0_0x19cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CDE0_0x19cde0");
#endif

    ctx->pc = 0x19cde0u;

    // 0x19cde0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19cde0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19cde4: 0x7c8232e0  sq          $v0, 0x32E0($a0)
    ctx->pc = 0x19cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 13024), GPR_VEC(ctx, 2));
    // 0x19cde8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cdec: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x19cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x19cdf0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x19cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cdf4: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x19cdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x19cdf8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cdfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19cdfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19ce00: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE00u;
        // 0x19ce04: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE08u;
}
