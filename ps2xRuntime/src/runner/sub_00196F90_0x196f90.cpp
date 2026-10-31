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

// Function: sub_00196F90
// Address: 0x196f90 - 0x197000
void sub_00196F90_0x196f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F90_0x196f90");
#endif

    switch (ctx->pc) {
        case 0x196fb0u: goto label_196fb0;
        case 0x196fe8u: goto label_196fe8;
        default: break;
    }

    ctx->pc = 0x196f90u;

    // 0x196f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x196f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x196f94: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x196f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x196f98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x196f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x196f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x196fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x196fa8: 0xc066196  jal         func_198658
    ctx->pc = 0x196FA8u;
    SET_GPR_U32(ctx, 31, 0x196FB0u);
    ctx->pc = 0x196FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196FA8u;
    // 0x196fac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198658u, 0x196FA8u, 0x196FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FB0u;
label_196fb0:
    // 0x196fb0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x196fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196fb4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x196fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196fb8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x196fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196fbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x196fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196fc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x196fc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x196fc4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x196fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196fc8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x196fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x196fcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fd0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x196fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x196fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fd8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x196fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x196fdc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x196fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x196fe0: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x196FE0u;
    SET_GPR_U32(ctx, 31, 0x196FE8u);
    ctx->pc = 0x196FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196FE0u;
    // 0x196fe4: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x196FE0u, 0x196FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FE8u;
label_196fe8:
    // 0x196fe8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x196fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196fec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x196fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196ff0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x196FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FF4u;
        // 0x196ff8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196FFCu;
    // 0x196ffc: 0x0  nop
    ctx->pc = 0x196ffcu;
    // NOP
    ctx->pc = 0x197000u;
}
