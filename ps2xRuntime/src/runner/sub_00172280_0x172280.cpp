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

// Function: sub_00172280
// Address: 0x172280 - 0x172318
void sub_00172280_0x172280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172280_0x172280");
#endif

    ctx->pc = 0x172280u;

    // 0x172280: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x172280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x172288: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x172288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17228c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x17228cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x172290: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x172290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172294: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172294u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172298: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x172298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17229c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x17229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1722a0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1722a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1722a4: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1722a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1722a8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1722a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722ac: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1722acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1722b0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1722b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1722b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1722b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1722b8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1722b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1722bc: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x1722bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1722c0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1722c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1722c4: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x1722c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1722c8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1722c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722cc: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1722ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1722d0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1722d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1722d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1722d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1722d8: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1722d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1722dc: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x1722dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1722e0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1722e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1722e4: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x1722e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1722e8: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x1722e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722ec: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x1722ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1722f0: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x1722f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1722f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1722f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1722f8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1722f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1722fc: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x1722fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172300: 0xe483003c  swc1        $f3, 0x3C($a0)
    ctx->pc = 0x172300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x172304: 0x3e00008  jr          $ra
    ctx->pc = 0x172304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172304u;
        // 0x172308: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17230Cu;
    // 0x17230c: 0x0  nop
    ctx->pc = 0x17230cu;
    // NOP
    // 0x172310: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x172310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x172314: 0x0  nop
    ctx->pc = 0x172314u;
    // NOP
    ctx->pc = 0x172318u;
}
