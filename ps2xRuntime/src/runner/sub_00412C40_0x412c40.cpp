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

// Function: sub_00412C40
// Address: 0x412c40 - 0x412ca0
void sub_00412C40_0x412c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412C40_0x412c40");
#endif

    switch (ctx->pc) {
        case 0x412c74u: goto label_412c74;
        default: break;
    }

    ctx->pc = 0x412c40u;

    // 0x412c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x412c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x412c44: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x412c44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x412c48: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x412c48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x412c4c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x412c4cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x412c50: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x412c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x412c54: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x412c54u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x412c58: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x412c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x412c5c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x412c5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x412c60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x412c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x412c64: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x412c64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x412c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x412c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x412c6c: 0xc0e40aa  jal         func_3902A8
    ctx->pc = 0x412C6Cu;
    SET_GPR_U32(ctx, 31, 0x412C74u);
    ctx->pc = 0x412C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412C6Cu;
    // 0x412c70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x412C6Cu, 0x412C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412C74u;
label_412c74:
    // 0x412c74: 0xe4540054  swc1        $f20, 0x54($v0)
    ctx->pc = 0x412c74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x412c78: 0xe4550048  swc1        $f21, 0x48($v0)
    ctx->pc = 0x412c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x412c7c: 0xe456004c  swc1        $f22, 0x4C($v0)
    ctx->pc = 0x412c7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x412c80: 0xe4570050  swc1        $f23, 0x50($v0)
    ctx->pc = 0x412c80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x412c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x412c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x412c88: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x412c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x412c8c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x412c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x412c90: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x412c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x412c94: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x412c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x412c98: 0x3e00008  jr          $ra
    ctx->pc = 0x412C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C98u;
        // 0x412c9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412CA0u;
}
