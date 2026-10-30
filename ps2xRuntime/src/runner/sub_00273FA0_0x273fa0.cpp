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

// Function: sub_00273FA0
// Address: 0x273fa0 - 0x273fc0
void sub_00273FA0_0x273fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273FA0_0x273fa0");
#endif

    ctx->pc = 0x273fa0u;

    // 0x273fa0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x273fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273fa4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x273fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x273fa8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x273fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x273fac: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x273facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fb0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x273fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x273fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x273FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FB4u;
        // 0x273fb8: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273FBCu;
    // 0x273fbc: 0x0  nop
    ctx->pc = 0x273fbcu;
    // NOP
    ctx->pc = 0x273fc0u;
}
