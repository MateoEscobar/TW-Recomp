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

// Function: sub_004D7A78
// Address: 0x4d7a78 - 0x4d7ab0
void sub_004D7A78_0x4d7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7A78_0x4d7a78");
#endif

    ctx->pc = 0x4d7a78u;

    // 0x4d7a78: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d7a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7a7c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x4d7a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7a80: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7a84: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x4d7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7a88: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x4d7a88u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d7a8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4d7a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4d7a90: 0x46030940  add.s       $f5, $f1, $f3
    ctx->pc = 0x4d7a90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d7a94: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4d7a94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4d7a98: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x4d7a98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d7a9c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d7a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d7aa0: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x4d7aa0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d7aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7AA4u;
        // 0x4d7aa8: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7AACu;
    // 0x4d7aac: 0x0  nop
    ctx->pc = 0x4d7aacu;
    // NOP
    ctx->pc = 0x4d7ab0u;
}
