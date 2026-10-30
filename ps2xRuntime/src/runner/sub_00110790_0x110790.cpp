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

// Function: sub_00110790
// Address: 0x110790 - 0x110830
void sub_00110790_0x110790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110790_0x110790");
#endif

    switch (ctx->pc) {
        case 0x1107ccu: goto label_1107cc;
        case 0x1107e4u: goto label_1107e4;
        case 0x110810u: goto label_110810;
        default: break;
    }

    ctx->pc = 0x110790u;

    // 0x110790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x110790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x110794: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x110794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110798: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x110798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11079c: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x11079cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1107a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1107a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1107a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1107a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1107a8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1107a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1107ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1107acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107b0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1107b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1107b4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1107b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1107b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1107bc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1107bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1107c0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1107c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1107c4: 0xc0451b0  jal         func_1146C0
    ctx->pc = 0x1107C4u;
    SET_GPR_U32(ctx, 31, 0x1107CCu);
    ctx->pc = 0x1107C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107C4u;
    // 0x1107c8: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1146C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1146C0u, 0x1107C4u, 0x1107CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107CCu;
label_1107cc:
    // 0x1107cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1107ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1107d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1107d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1107d4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1107d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1107d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1107d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1107dc: 0xc044594  jal         func_111650
    ctx->pc = 0x1107DCu;
    SET_GPR_U32(ctx, 31, 0x1107E4u);
    ctx->pc = 0x1107E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107DCu;
    // 0x1107e0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x1107DCu, 0x1107E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107E4u;
label_1107e4:
    // 0x1107e4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1107e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1107e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1107e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1107ec: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1107ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1107f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1107f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107f4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1107f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1107f8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1107f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1107fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1107fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x110800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110804: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x110804u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x110808: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x110808u;
    SET_GPR_U32(ctx, 31, 0x110810u);
    ctx->pc = 0x11080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110808u;
    // 0x11080c: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x110808u, 0x110810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110810u;
label_110810:
    // 0x110810: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x110810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110814: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x110814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110818: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11081c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x110820: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x110820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x110824: 0x3e00008  jr          $ra
    ctx->pc = 0x110824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110824u;
        // 0x110828: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11082Cu;
    // 0x11082c: 0x0  nop
    ctx->pc = 0x11082cu;
    // NOP
    ctx->pc = 0x110830u;
}
