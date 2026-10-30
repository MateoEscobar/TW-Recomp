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

// Function: sub_0010B6E0
// Address: 0x10b6e0 - 0x10b7b8
void sub_0010B6E0_0x10b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B6E0_0x10b6e0");
#endif

    switch (ctx->pc) {
        case 0x10b6e0u: goto label_10b6e0;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6ecu: goto label_10b6ec;
        case 0x10b6f0u: goto label_10b6f0;
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b6f8u: goto label_10b6f8;
        case 0x10b6fcu: goto label_10b6fc;
        case 0x10b700u: goto label_10b700;
        case 0x10b704u: goto label_10b704;
        case 0x10b708u: goto label_10b708;
        case 0x10b70cu: goto label_10b70c;
        case 0x10b710u: goto label_10b710;
        case 0x10b714u: goto label_10b714;
        case 0x10b718u: goto label_10b718;
        case 0x10b71cu: goto label_10b71c;
        case 0x10b720u: goto label_10b720;
        case 0x10b724u: goto label_10b724;
        case 0x10b728u: goto label_10b728;
        case 0x10b72cu: goto label_10b72c;
        case 0x10b730u: goto label_10b730;
        case 0x10b734u: goto label_10b734;
        case 0x10b738u: goto label_10b738;
        case 0x10b73cu: goto label_10b73c;
        case 0x10b740u: goto label_10b740;
        case 0x10b744u: goto label_10b744;
        case 0x10b748u: goto label_10b748;
        case 0x10b74cu: goto label_10b74c;
        case 0x10b750u: goto label_10b750;
        case 0x10b754u: goto label_10b754;
        case 0x10b758u: goto label_10b758;
        case 0x10b75cu: goto label_10b75c;
        case 0x10b760u: goto label_10b760;
        case 0x10b764u: goto label_10b764;
        case 0x10b768u: goto label_10b768;
        case 0x10b76cu: goto label_10b76c;
        case 0x10b770u: goto label_10b770;
        case 0x10b774u: goto label_10b774;
        case 0x10b778u: goto label_10b778;
        case 0x10b77cu: goto label_10b77c;
        case 0x10b780u: goto label_10b780;
        case 0x10b784u: goto label_10b784;
        case 0x10b788u: goto label_10b788;
        case 0x10b78cu: goto label_10b78c;
        case 0x10b790u: goto label_10b790;
        case 0x10b794u: goto label_10b794;
        case 0x10b798u: goto label_10b798;
        case 0x10b79cu: goto label_10b79c;
        case 0x10b7a0u: goto label_10b7a0;
        case 0x10b7a4u: goto label_10b7a4;
        case 0x10b7a8u: goto label_10b7a8;
        case 0x10b7acu: goto label_10b7ac;
        case 0x10b7b0u: goto label_10b7b0;
        case 0x10b7b4u: goto label_10b7b4;
        default: break;
    }

    ctx->pc = 0x10b6e0u;

label_10b6e0:
    // 0x10b6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10b6e4:
    // 0x10b6e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10b6e8:
    // 0x10b6e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10b6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10b6ec:
    // 0x10b6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b6f0:
    // 0x10b6f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10b6f4:
    // 0x10b6f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10b6f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10b6f8:
    // 0x10b6f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b6fc:
    // 0x10b6fc: 0xc05d64a  jal         func_175928
label_10b700:
    if (ctx->pc == 0x10B700u) {
        ctx->pc = 0x10B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6FCu;
        // 0x10b700: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B704u;
        goto label_10b704;
    }
    ctx->pc = 0x10B6FCu;
    SET_GPR_U32(ctx, 31, 0x10B704u);
    ctx->pc = 0x10B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6FCu;
    // 0x10b700: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175928u, 0x10B6FCu, 0x10B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B704u;
label_10b704:
    // 0x10b704: 0xc0420dc  jal         func_108370
label_10b708:
    if (ctx->pc == 0x10B708u) {
        ctx->pc = 0x10B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B704u;
        // 0x10b708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B70Cu;
        goto label_10b70c;
    }
    ctx->pc = 0x10B704u;
    SET_GPR_U32(ctx, 31, 0x10B70Cu);
    ctx->pc = 0x10B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B704u;
    // 0x10b708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10B704u, 0x10B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B70Cu;
label_10b70c:
    // 0x10b70c: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x10b70cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_10b710:
    // 0x10b710: 0xc041128  jal         func_1044A0
label_10b714:
    if (ctx->pc == 0x10B714u) {
        ctx->pc = 0x10B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B710u;
        // 0x10b714: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B718u;
        goto label_10b718;
    }
    ctx->pc = 0x10B710u;
    SET_GPR_U32(ctx, 31, 0x10B718u);
    ctx->pc = 0x10B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B710u;
    // 0x10b714: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10B710u, 0x10B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B718u;
label_10b718:
    // 0x10b718: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10b718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10b71c:
    // 0x10b71c: 0x0  nop
    ctx->pc = 0x10b71cu;
    // NOP
label_10b720:
    // 0x10b720: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10b720u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10b724:
    // 0x10b724: 0x0  nop
    ctx->pc = 0x10b724u;
    // NOP
label_10b728:
    // 0x10b728: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
label_10b72c:
    if (ctx->pc == 0x10B72Cu) {
        ctx->pc = 0x10B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B728u;
        // 0x10b72c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B730u;
        goto label_10b730;
    }
    ctx->pc = 0x10B728u;
    {
        const bool branch_taken_0x10b728 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b728) {
            ctx->pc = 0x10B72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B728u;
            // 0x10b72c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B7A8u;
            goto label_10b7a8;
        }
    }
    ctx->pc = 0x10B730u;
label_10b730:
    // 0x10b730: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10b734:
    // 0x10b734: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b738:
    // 0x10b738: 0xc05d448  jal         func_175120
label_10b73c:
    if (ctx->pc == 0x10B73Cu) {
        ctx->pc = 0x10B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B738u;
        // 0x10b73c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B740u;
        goto label_10b740;
    }
    ctx->pc = 0x10B738u;
    SET_GPR_U32(ctx, 31, 0x10B740u);
    ctx->pc = 0x10B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B738u;
    // 0x10b73c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10B738u, 0x10B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B740u;
label_10b740:
    // 0x10b740: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10b740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10b744:
    // 0x10b744: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_10b748:
    // 0x10b748: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x10b748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10b74c:
    // 0x10b74c: 0xc0cd4fc  jal         func_3353F0
label_10b750:
    if (ctx->pc == 0x10B750u) {
        ctx->pc = 0x10B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B74Cu;
        // 0x10b750: 0x2484b870  addiu       $a0, $a0, -0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B754u;
        goto label_10b754;
    }
    ctx->pc = 0x10B74Cu;
    SET_GPR_U32(ctx, 31, 0x10B754u);
    ctx->pc = 0x10B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B74Cu;
    // 0x10b750: 0x2484b870  addiu       $a0, $a0, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x10B74Cu, 0x10B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B754u;
label_10b754:
    // 0x10b754: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b758:
    // 0x10b758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b75c:
    // 0x10b75c: 0xc05d420  jal         func_175080
label_10b760:
    if (ctx->pc == 0x10B760u) {
        ctx->pc = 0x10B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B75Cu;
        // 0x10b760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B764u;
        goto label_10b764;
    }
    ctx->pc = 0x10B75Cu;
    SET_GPR_U32(ctx, 31, 0x10B764u);
    ctx->pc = 0x10B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B75Cu;
    // 0x10b760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10B75Cu, 0x10B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B764u;
label_10b764:
    // 0x10b764: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10b768:
    // 0x10b768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b76c:
    // 0x10b76c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x10b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b770:
    // 0x10b770: 0xc041164  jal         func_104590
label_10b774:
    if (ctx->pc == 0x10B774u) {
        ctx->pc = 0x10B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B770u;
        // 0x10b774: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B778u;
        goto label_10b778;
    }
    ctx->pc = 0x10B770u;
    SET_GPR_U32(ctx, 31, 0x10B778u);
    ctx->pc = 0x10B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B770u;
    // 0x10b774: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10B770u, 0x10B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B778u;
label_10b778:
    // 0x10b778: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_10b77c:
    // 0x10b77c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10b780:
    // 0x10b780: 0xc0e409a  jal         func_390268
label_10b784:
    if (ctx->pc == 0x10B784u) {
        ctx->pc = 0x10B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B780u;
        // 0x10b784: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B788u;
        goto label_10b788;
    }
    ctx->pc = 0x10B780u;
    SET_GPR_U32(ctx, 31, 0x10B788u);
    ctx->pc = 0x10B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B780u;
    // 0x10b784: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10B780u, 0x10B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B788u;
label_10b788:
    // 0x10b788: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_10b78c:
    if (ctx->pc == 0x10B78Cu) {
        ctx->pc = 0x10B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B788u;
        // 0x10b78c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B790u;
        goto label_10b790;
    }
    ctx->pc = 0x10B788u;
    {
        const bool branch_taken_0x10b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b788) {
            ctx->pc = 0x10B78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B788u;
            // 0x10b78c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B7A8u;
            goto label_10b7a8;
        }
    }
    ctx->pc = 0x10B790u;
label_10b790:
    // 0x10b790: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x10b790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_10b794:
    // 0x10b794: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_10b798:
    if (ctx->pc == 0x10B798u) {
        ctx->pc = 0x10B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B794u;
        // 0x10b798: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B79Cu;
        goto label_10b79c;
    }
    ctx->pc = 0x10B794u;
    {
        const bool branch_taken_0x10b794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B794u;
        // 0x10b798: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b794) {
            ctx->pc = 0x10B7A8u;
            goto label_10b7a8;
        }
    }
    ctx->pc = 0x10B79Cu;
label_10b79c:
    // 0x10b79c: 0xa0f809  jalr        $a1
label_10b7a0:
    if (ctx->pc == 0x10B7A0u) {
        ctx->pc = 0x10B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B79Cu;
        // 0x10b7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7A4u;
        goto label_10b7a4;
    }
    ctx->pc = 0x10B79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10B7A4u);
        ctx->pc = 0x10B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B79Cu;
        // 0x10b7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B79Cu, 0x10B7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B7A4u;
label_10b7a4:
    // 0x10b7a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10b7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10b7a8:
    // 0x10b7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10b7ac:
    // 0x10b7ac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10b7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10b7b0:
    // 0x10b7b0: 0x3e00008  jr          $ra
label_10b7b4:
    if (ctx->pc == 0x10B7B4u) {
        ctx->pc = 0x10B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7B0u;
        // 0x10b7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7B8u;
        goto label_fallthrough_0x10b7b0;
    }
    ctx->pc = 0x10B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7B0u;
        // 0x10b7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10b7b0:
    ctx->pc = 0x10B7B8u;
}
