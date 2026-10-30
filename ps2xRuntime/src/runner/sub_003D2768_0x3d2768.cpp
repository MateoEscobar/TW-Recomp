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

// Function: sub_003D2768
// Address: 0x3d2768 - 0x3d2820
void sub_003D2768_0x3d2768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2768_0x3d2768");
#endif

    switch (ctx->pc) {
        case 0x3d2768u: goto label_3d2768;
        case 0x3d276cu: goto label_3d276c;
        case 0x3d2770u: goto label_3d2770;
        case 0x3d2774u: goto label_3d2774;
        case 0x3d2778u: goto label_3d2778;
        case 0x3d277cu: goto label_3d277c;
        case 0x3d2780u: goto label_3d2780;
        case 0x3d2784u: goto label_3d2784;
        case 0x3d2788u: goto label_3d2788;
        case 0x3d278cu: goto label_3d278c;
        case 0x3d2790u: goto label_3d2790;
        case 0x3d2794u: goto label_3d2794;
        case 0x3d2798u: goto label_3d2798;
        case 0x3d279cu: goto label_3d279c;
        case 0x3d27a0u: goto label_3d27a0;
        case 0x3d27a4u: goto label_3d27a4;
        case 0x3d27a8u: goto label_3d27a8;
        case 0x3d27acu: goto label_3d27ac;
        case 0x3d27b0u: goto label_3d27b0;
        case 0x3d27b4u: goto label_3d27b4;
        case 0x3d27b8u: goto label_3d27b8;
        case 0x3d27bcu: goto label_3d27bc;
        case 0x3d27c0u: goto label_3d27c0;
        case 0x3d27c4u: goto label_3d27c4;
        case 0x3d27c8u: goto label_3d27c8;
        case 0x3d27ccu: goto label_3d27cc;
        case 0x3d27d0u: goto label_3d27d0;
        case 0x3d27d4u: goto label_3d27d4;
        case 0x3d27d8u: goto label_3d27d8;
        case 0x3d27dcu: goto label_3d27dc;
        case 0x3d27e0u: goto label_3d27e0;
        case 0x3d27e4u: goto label_3d27e4;
        case 0x3d27e8u: goto label_3d27e8;
        case 0x3d27ecu: goto label_3d27ec;
        case 0x3d27f0u: goto label_3d27f0;
        case 0x3d27f4u: goto label_3d27f4;
        case 0x3d27f8u: goto label_3d27f8;
        case 0x3d27fcu: goto label_3d27fc;
        case 0x3d2800u: goto label_3d2800;
        case 0x3d2804u: goto label_3d2804;
        case 0x3d2808u: goto label_3d2808;
        case 0x3d280cu: goto label_3d280c;
        case 0x3d2810u: goto label_3d2810;
        case 0x3d2814u: goto label_3d2814;
        case 0x3d2818u: goto label_3d2818;
        case 0x3d281cu: goto label_3d281c;
        default: break;
    }

    ctx->pc = 0x3d2768u;

label_3d2768:
    // 0x3d2768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d2768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d276c:
    // 0x3d276c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d2770:
    // 0x3d2770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d2774:
    // 0x3d2774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d2774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d2778:
    // 0x3d2778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d2778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d277c:
    // 0x3d277c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2780:
    // 0x3d2780: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d2780u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d2784:
    // 0x3d2784: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d2788:
    // 0x3d2788: 0x40f809  jalr        $v0
label_3d278c:
    if (ctx->pc == 0x3D278Cu) {
        ctx->pc = 0x3D278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2788u;
        // 0x3d278c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2790u;
        goto label_3d2790;
    }
    ctx->pc = 0x3D2788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2790u);
        ctx->pc = 0x3D278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2788u;
        // 0x3d278c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2788u, 0x3D2790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2790u;
label_3d2790:
    // 0x3d2790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2794:
    // 0x3d2794: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3d2794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d2798:
    // 0x3d2798: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_3d279c:
    if (ctx->pc == 0x3D279Cu) {
        ctx->pc = 0x3D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2798u;
        // 0x3d279c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27A0u;
        goto label_3d27a0;
    }
    ctx->pc = 0x3D2798u;
    {
        const bool branch_taken_0x3d2798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2798u;
        // 0x3d279c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2798) {
            ctx->pc = 0x3D27A8u;
            goto label_3d27a8;
        }
    }
    ctx->pc = 0x3D27A0u;
label_3d27a0:
    // 0x3d27a0: 0x5622001a  bnel        $s1, $v0, . + 4 + (0x1A << 2)
label_3d27a4:
    if (ctx->pc == 0x3D27A4u) {
        ctx->pc = 0x3D27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27A0u;
        // 0x3d27a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27A8u;
        goto label_3d27a8;
    }
    ctx->pc = 0x3D27A0u;
    {
        const bool branch_taken_0x3d27a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d27a0) {
            ctx->pc = 0x3D27A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D27A0u;
            // 0x3d27a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D280Cu;
            goto label_3d280c;
        }
    }
    ctx->pc = 0x3D27A8u;
label_3d27a8:
    // 0x3d27a8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3d27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d27ac:
    // 0x3d27ac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d27b0:
    if (ctx->pc == 0x3D27B0u) {
        ctx->pc = 0x3D27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27ACu;
        // 0x3d27b0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27B4u;
        goto label_3d27b4;
    }
    ctx->pc = 0x3D27ACu;
    {
        const bool branch_taken_0x3d27ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d27ac) {
            ctx->pc = 0x3D27B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D27ACu;
            // 0x3d27b0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D27C4u;
            goto label_3d27c4;
        }
    }
    ctx->pc = 0x3D27B4u;
label_3d27b4:
    // 0x3d27b4: 0xc0e95f6  jal         func_3A57D8
label_3d27b8:
    if (ctx->pc == 0x3D27B8u) {
        ctx->pc = 0x3D27BCu;
        goto label_3d27bc;
    }
    ctx->pc = 0x3D27B4u;
    SET_GPR_U32(ctx, 31, 0x3D27BCu);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D27B4u, 0x3D27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D27BCu;
label_3d27bc:
    // 0x3d27bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d27c0:
    // 0x3d27c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3d27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3d27c4:
    // 0x3d27c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d27c8:
    if (ctx->pc == 0x3D27C8u) {
        ctx->pc = 0x3D27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27C4u;
        // 0x3d27c8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27CCu;
        goto label_3d27cc;
    }
    ctx->pc = 0x3D27C4u;
    {
        const bool branch_taken_0x3d27c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d27c4) {
            ctx->pc = 0x3D27C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D27C4u;
            // 0x3d27c8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D27DCu;
            goto label_3d27dc;
        }
    }
    ctx->pc = 0x3D27CCu;
label_3d27cc:
    // 0x3d27cc: 0xc0e95f6  jal         func_3A57D8
label_3d27d0:
    if (ctx->pc == 0x3D27D0u) {
        ctx->pc = 0x3D27D4u;
        goto label_3d27d4;
    }
    ctx->pc = 0x3D27CCu;
    SET_GPR_U32(ctx, 31, 0x3D27D4u);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D27CCu, 0x3D27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D27D4u;
label_3d27d4:
    // 0x3d27d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3d27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3d27d8:
    // 0x3d27d8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3d27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d27dc:
    // 0x3d27dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d27e0:
    if (ctx->pc == 0x3D27E0u) {
        ctx->pc = 0x3D27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27DCu;
        // 0x3d27e0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27E4u;
        goto label_3d27e4;
    }
    ctx->pc = 0x3D27DCu;
    {
        const bool branch_taken_0x3d27dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d27dc) {
            ctx->pc = 0x3D27E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D27DCu;
            // 0x3d27e0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D27F4u;
            goto label_3d27f4;
        }
    }
    ctx->pc = 0x3D27E4u;
label_3d27e4:
    // 0x3d27e4: 0xc0e95f6  jal         func_3A57D8
label_3d27e8:
    if (ctx->pc == 0x3D27E8u) {
        ctx->pc = 0x3D27ECu;
        goto label_3d27ec;
    }
    ctx->pc = 0x3D27E4u;
    SET_GPR_U32(ctx, 31, 0x3D27ECu);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D27E4u, 0x3D27ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D27ECu;
label_3d27ec:
    // 0x3d27ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3d27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3d27f0:
    // 0x3d27f0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3d27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d27f4:
    // 0x3d27f4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d27f8:
    if (ctx->pc == 0x3D27F8u) {
        ctx->pc = 0x3D27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27F4u;
        // 0x3d27f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27FCu;
        goto label_3d27fc;
    }
    ctx->pc = 0x3D27F4u;
    {
        const bool branch_taken_0x3d27f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d27f4) {
            ctx->pc = 0x3D27F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D27F4u;
            // 0x3d27f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D280Cu;
            goto label_3d280c;
        }
    }
    ctx->pc = 0x3D27FCu;
label_3d27fc:
    // 0x3d27fc: 0xc0e95f6  jal         func_3A57D8
label_3d2800:
    if (ctx->pc == 0x3D2800u) {
        ctx->pc = 0x3D2804u;
        goto label_3d2804;
    }
    ctx->pc = 0x3D27FCu;
    SET_GPR_U32(ctx, 31, 0x3D2804u);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D27FCu, 0x3D2804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2804u;
label_3d2804:
    // 0x3d2804: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3d2804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3d2808:
    // 0x3d2808: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d2808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d280c:
    // 0x3d280c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d280cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2810:
    // 0x3d2810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d2810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2814:
    // 0x3d2814: 0x3e00008  jr          $ra
label_3d2818:
    if (ctx->pc == 0x3D2818u) {
        ctx->pc = 0x3D2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2814u;
        // 0x3d2818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D281Cu;
        goto label_3d281c;
    }
    ctx->pc = 0x3D2814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2814u;
        // 0x3d2818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D281Cu;
label_3d281c:
    // 0x3d281c: 0x0  nop
    ctx->pc = 0x3d281cu;
    // NOP
    ctx->pc = 0x3d2820u;
}
