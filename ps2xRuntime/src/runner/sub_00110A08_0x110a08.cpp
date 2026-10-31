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

// Function: sub_00110A08
// Address: 0x110a08 - 0x110aa8
void sub_00110A08_0x110a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110A08_0x110a08");
#endif

    switch (ctx->pc) {
        case 0x110a40u: goto label_110a40;
        case 0x110a58u: goto label_110a58;
        case 0x110a84u: goto label_110a84;
        default: break;
    }

    ctx->pc = 0x110a08u;

    // 0x110a08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x110a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x110a0c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x110a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x110a10: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x110a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a14: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x110a14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x110a18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x110a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x110a1c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x110a20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x110a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a24: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x110a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x110a28: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x110a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x110a2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110a30: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x110a30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x110a34: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x110a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x110a38: 0xc045200  jal         func_114800
    ctx->pc = 0x110A38u;
    SET_GPR_U32(ctx, 31, 0x110A40u);
    ctx->pc = 0x110A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A38u;
    // 0x110a3c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x110A38u, 0x110A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A40u;
label_110a40:
    // 0x110a40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110a44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x110a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x110a48: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x110a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x110a4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x110a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x110a50: 0xc044594  jal         func_111650
    ctx->pc = 0x110A50u;
    SET_GPR_U32(ctx, 31, 0x110A58u);
    ctx->pc = 0x110A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A50u;
    // 0x110a54: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x110A50u, 0x110A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A58u;
label_110a58:
    // 0x110a58: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x110a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x110a5c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x110a5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x110a60: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x110a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x110a64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x110a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a68: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x110a68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x110a6c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x110a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x110a70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x110a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110a74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x110a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110a78: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x110a78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x110a7c: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x110A7Cu;
    SET_GPR_U32(ctx, 31, 0x110A84u);
    ctx->pc = 0x110A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A7Cu;
    // 0x110a80: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x110A7Cu, 0x110A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A84u;
label_110a84:
    // 0x110a84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x110a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110a88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x110a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110a8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110a90: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x110a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x110a94: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x110a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x110a98: 0x3e00008  jr          $ra
    ctx->pc = 0x110A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A98u;
        // 0x110a9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AA0u;
    // 0x110aa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x110aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x110aa4: 0x0  nop
    ctx->pc = 0x110aa4u;
    // NOP
    ctx->pc = 0x110aa8u;
}
