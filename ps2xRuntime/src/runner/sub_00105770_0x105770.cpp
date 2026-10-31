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

// Function: sub_00105770
// Address: 0x105770 - 0x105810
void sub_00105770_0x105770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105770_0x105770");
#endif

    switch (ctx->pc) {
        case 0x105770u: goto label_105770;
        case 0x105774u: goto label_105774;
        case 0x105778u: goto label_105778;
        case 0x10577cu: goto label_10577c;
        case 0x105780u: goto label_105780;
        case 0x105784u: goto label_105784;
        case 0x105788u: goto label_105788;
        case 0x10578cu: goto label_10578c;
        case 0x105790u: goto label_105790;
        case 0x105794u: goto label_105794;
        case 0x105798u: goto label_105798;
        case 0x10579cu: goto label_10579c;
        case 0x1057a0u: goto label_1057a0;
        case 0x1057a4u: goto label_1057a4;
        case 0x1057a8u: goto label_1057a8;
        case 0x1057acu: goto label_1057ac;
        case 0x1057b0u: goto label_1057b0;
        case 0x1057b4u: goto label_1057b4;
        case 0x1057b8u: goto label_1057b8;
        case 0x1057bcu: goto label_1057bc;
        case 0x1057c0u: goto label_1057c0;
        case 0x1057c4u: goto label_1057c4;
        case 0x1057c8u: goto label_1057c8;
        case 0x1057ccu: goto label_1057cc;
        case 0x1057d0u: goto label_1057d0;
        case 0x1057d4u: goto label_1057d4;
        case 0x1057d8u: goto label_1057d8;
        case 0x1057dcu: goto label_1057dc;
        case 0x1057e0u: goto label_1057e0;
        case 0x1057e4u: goto label_1057e4;
        case 0x1057e8u: goto label_1057e8;
        case 0x1057ecu: goto label_1057ec;
        case 0x1057f0u: goto label_1057f0;
        case 0x1057f4u: goto label_1057f4;
        case 0x1057f8u: goto label_1057f8;
        case 0x1057fcu: goto label_1057fc;
        case 0x105800u: goto label_105800;
        case 0x105804u: goto label_105804;
        case 0x105808u: goto label_105808;
        case 0x10580cu: goto label_10580c;
        default: break;
    }

    ctx->pc = 0x105770u;

label_105770:
    // 0x105770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x105770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_105774:
    // 0x105774: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x105774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_105778:
    // 0x105778: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x105778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10577c:
    // 0x10577c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10577cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105780:
    // 0x105780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_105784:
    // 0x105784: 0xc0420dc  jal         func_108370
label_105788:
    if (ctx->pc == 0x105788u) {
        ctx->pc = 0x105788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105784u;
        // 0x105788: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10578Cu;
        goto label_10578c;
    }
    ctx->pc = 0x105784u;
    SET_GPR_U32(ctx, 31, 0x10578Cu);
    ctx->pc = 0x105788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105784u;
    // 0x105788: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x105784u, 0x10578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10578Cu;
label_10578c:
    // 0x10578c: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x10578cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_105790:
    // 0x105790: 0xc041128  jal         func_1044A0
label_105794:
    if (ctx->pc == 0x105794u) {
        ctx->pc = 0x105794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105790u;
        // 0x105794: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105798u;
        goto label_105798;
    }
    ctx->pc = 0x105790u;
    SET_GPR_U32(ctx, 31, 0x105798u);
    ctx->pc = 0x105794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105790u;
    // 0x105794: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x105790u, 0x105798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105798u;
label_105798:
    // 0x105798: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x105798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10579c:
    // 0x10579c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10579cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1057a0:
    // 0x1057a0: 0x0  nop
    ctx->pc = 0x1057a0u;
    // NOP
label_1057a4:
    // 0x1057a4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1057a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1057a8:
    // 0x1057a8: 0x0  nop
    ctx->pc = 0x1057a8u;
    // NOP
label_1057ac:
    // 0x1057ac: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_1057b0:
    if (ctx->pc == 0x1057B0u) {
        ctx->pc = 0x1057B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057ACu;
        // 0x1057b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057B4u;
        goto label_1057b4;
    }
    ctx->pc = 0x1057ACu;
    {
        const bool branch_taken_0x1057ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1057ac) {
            ctx->pc = 0x1057B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1057ACu;
            // 0x1057b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x1057B4u;
label_1057b4:
    // 0x1057b4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1057b8:
    // 0x1057b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1057b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1057bc:
    // 0x1057bc: 0xc04115c  jal         func_104570
label_1057c0:
    if (ctx->pc == 0x1057C0u) {
        ctx->pc = 0x1057C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057BCu;
        // 0x1057c0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057C4u;
        goto label_1057c4;
    }
    ctx->pc = 0x1057BCu;
    SET_GPR_U32(ctx, 31, 0x1057C4u);
    ctx->pc = 0x1057C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057BCu;
    // 0x1057c0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x1057BCu, 0x1057C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057C4u;
label_1057c4:
    // 0x1057c4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1057c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1057c8:
    // 0x1057c8: 0xc041128  jal         func_1044A0
label_1057cc:
    if (ctx->pc == 0x1057CCu) {
        ctx->pc = 0x1057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057C8u;
        // 0x1057cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057D0u;
        goto label_1057d0;
    }
    ctx->pc = 0x1057C8u;
    SET_GPR_U32(ctx, 31, 0x1057D0u);
    ctx->pc = 0x1057CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057C8u;
    // 0x1057cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x1057C8u, 0x1057D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057D0u;
label_1057d0:
    // 0x1057d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1057d4:
    // 0x1057d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1057d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1057d8:
    // 0x1057d8: 0xc0e409a  jal         func_390268
label_1057dc:
    if (ctx->pc == 0x1057DCu) {
        ctx->pc = 0x1057DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057D8u;
        // 0x1057dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057E0u;
        goto label_1057e0;
    }
    ctx->pc = 0x1057D8u;
    SET_GPR_U32(ctx, 31, 0x1057E0u);
    ctx->pc = 0x1057DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057D8u;
    // 0x1057dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1057D8u, 0x1057E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057E0u;
label_1057e0:
    // 0x1057e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1057e4:
    if (ctx->pc == 0x1057E4u) {
        ctx->pc = 0x1057E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057E0u;
        // 0x1057e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057E8u;
        goto label_1057e8;
    }
    ctx->pc = 0x1057E0u;
    {
        const bool branch_taken_0x1057e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1057e0) {
            ctx->pc = 0x1057E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1057E0u;
            // 0x1057e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x1057E8u;
label_1057e8:
    // 0x1057e8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1057e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1057ec:
    // 0x1057ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1057f0:
    if (ctx->pc == 0x1057F0u) {
        ctx->pc = 0x1057F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057ECu;
        // 0x1057f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057F4u;
        goto label_1057f4;
    }
    ctx->pc = 0x1057ECu;
    {
        const bool branch_taken_0x1057ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057ECu;
        // 0x1057f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057ec) {
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x1057F4u;
label_1057f4:
    // 0x1057f4: 0x60f809  jalr        $v1
label_1057f8:
    if (ctx->pc == 0x1057F8u) {
        ctx->pc = 0x1057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057F4u;
        // 0x1057f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1057FCu;
        goto label_1057fc;
    }
    ctx->pc = 0x1057F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1057FCu);
        ctx->pc = 0x1057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057F4u;
        // 0x1057f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1057F4u, 0x1057FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1057FCu;
label_1057fc:
    // 0x1057fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1057fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105800:
    // 0x105800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105804:
    // 0x105804: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x105804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_105808:
    // 0x105808: 0x3e00008  jr          $ra
label_10580c:
    if (ctx->pc == 0x10580Cu) {
        ctx->pc = 0x10580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105808u;
        // 0x10580c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105810u;
        goto label_fallthrough_0x105808;
    }
    ctx->pc = 0x105808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105808u;
        // 0x10580c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x105808:
    ctx->pc = 0x105810u;
}
