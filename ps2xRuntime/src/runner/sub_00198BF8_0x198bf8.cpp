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

// Function: sub_00198BF8
// Address: 0x198bf8 - 0x198c80
void sub_00198BF8_0x198bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198BF8_0x198bf8");
#endif

    ctx->pc = 0x198bf8u;

    // 0x198bf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198bfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x198bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x198c00: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x198c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198c04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x198c08: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x198c08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x198c0c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x198c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x198c10: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x198c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198c14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x198c14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x198c18: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x198c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x198c1c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x198c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198c20: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x198c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x198c24: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x198c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198c28: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x198c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x198c2c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x198c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198c30: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x198c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x198c34: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x198c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198c38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x198c38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x198c3c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x198c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x198c40: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x198c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198c44: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x198c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x198c48: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x198c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198c4c: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x198c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x198c50: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x198c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198c54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x198c54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x198c58: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x198c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x198c5c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x198c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198c60: 0xe4a10030  swc1        $f1, 0x30($a1)
    ctx->pc = 0x198c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x198c64: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x198c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198c68: 0xe4a20038  swc1        $f2, 0x38($a1)
    ctx->pc = 0x198c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x198c6c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x198c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198c70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x198c70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x198c74: 0x3e00008  jr          $ra
    ctx->pc = 0x198C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C74u;
        // 0x198c78: 0xe4a00034  swc1        $f0, 0x34($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198C7Cu;
    // 0x198c7c: 0x0  nop
    ctx->pc = 0x198c7cu;
    // NOP
    ctx->pc = 0x198c80u;
}
