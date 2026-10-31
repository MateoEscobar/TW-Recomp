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

// Function: sub_00462850
// Address: 0x462850 - 0x462908
void sub_00462850_0x462850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462850_0x462850");
#endif

    switch (ctx->pc) {
        case 0x462850u: goto label_462850;
        case 0x462854u: goto label_462854;
        case 0x462858u: goto label_462858;
        case 0x46285cu: goto label_46285c;
        case 0x462860u: goto label_462860;
        case 0x462864u: goto label_462864;
        case 0x462868u: goto label_462868;
        case 0x46286cu: goto label_46286c;
        case 0x462870u: goto label_462870;
        case 0x462874u: goto label_462874;
        case 0x462878u: goto label_462878;
        case 0x46287cu: goto label_46287c;
        case 0x462880u: goto label_462880;
        case 0x462884u: goto label_462884;
        case 0x462888u: goto label_462888;
        case 0x46288cu: goto label_46288c;
        case 0x462890u: goto label_462890;
        case 0x462894u: goto label_462894;
        case 0x462898u: goto label_462898;
        case 0x46289cu: goto label_46289c;
        case 0x4628a0u: goto label_4628a0;
        case 0x4628a4u: goto label_4628a4;
        case 0x4628a8u: goto label_4628a8;
        case 0x4628acu: goto label_4628ac;
        case 0x4628b0u: goto label_4628b0;
        case 0x4628b4u: goto label_4628b4;
        case 0x4628b8u: goto label_4628b8;
        case 0x4628bcu: goto label_4628bc;
        case 0x4628c0u: goto label_4628c0;
        case 0x4628c4u: goto label_4628c4;
        case 0x4628c8u: goto label_4628c8;
        case 0x4628ccu: goto label_4628cc;
        case 0x4628d0u: goto label_4628d0;
        case 0x4628d4u: goto label_4628d4;
        case 0x4628d8u: goto label_4628d8;
        case 0x4628dcu: goto label_4628dc;
        case 0x4628e0u: goto label_4628e0;
        case 0x4628e4u: goto label_4628e4;
        case 0x4628e8u: goto label_4628e8;
        case 0x4628ecu: goto label_4628ec;
        case 0x4628f0u: goto label_4628f0;
        case 0x4628f4u: goto label_4628f4;
        case 0x4628f8u: goto label_4628f8;
        case 0x4628fcu: goto label_4628fc;
        case 0x462900u: goto label_462900;
        case 0x462904u: goto label_462904;
        default: break;
    }

    ctx->pc = 0x462850u;

label_462850:
    // 0x462850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x462850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_462854:
    // 0x462854: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x462854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_462858:
    // 0x462858: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x462858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_46285c:
    // 0x46285c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46285cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462860:
    // 0x462860: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x462860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_462864:
    // 0x462864: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x462864u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_462868:
    // 0x462868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46286c:
    // 0x46286c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x46286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_462870:
    // 0x462870: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x462870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_462874:
    // 0x462874: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_462878:
    if (ctx->pc == 0x462878u) {
        ctx->pc = 0x462878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462874u;
        // 0x462878: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46287Cu;
        goto label_46287c;
    }
    ctx->pc = 0x462874u;
    {
        const bool branch_taken_0x462874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462874u;
        // 0x462878: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462874) {
            ctx->pc = 0x4628A8u;
            goto label_4628a8;
        }
    }
    ctx->pc = 0x46287Cu;
label_46287c:
    // 0x46287c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x46287cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_462880:
    // 0x462880: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_462884:
    if (ctx->pc == 0x462884u) {
        ctx->pc = 0x462884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462880u;
        // 0x462884: 0x2623ad18  addiu       $v1, $s1, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462888u;
        goto label_462888;
    }
    ctx->pc = 0x462880u;
    {
        const bool branch_taken_0x462880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462880u;
        // 0x462884: 0x2623ad18  addiu       $v1, $s1, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462880) {
            ctx->pc = 0x46289Cu;
            goto label_46289c;
        }
    }
    ctx->pc = 0x462888u;
label_462888:
    // 0x462888: 0x2622ad18  addiu       $v0, $s1, -0x52E8
    ctx->pc = 0x462888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_46288c:
    // 0x46288c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_462890:
    // 0x462890: 0x60f809  jalr        $v1
label_462894:
    if (ctx->pc == 0x462894u) {
        ctx->pc = 0x462894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462890u;
        // 0x462894: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462898u;
        goto label_462898;
    }
    ctx->pc = 0x462890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x462898u);
        ctx->pc = 0x462894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462890u;
        // 0x462894: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462890u, 0x462898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462898u;
label_462898:
    // 0x462898: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x462898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_46289c:
    // 0x46289c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_4628a0:
    // 0x4628a0: 0x40f809  jalr        $v0
label_4628a4:
    if (ctx->pc == 0x4628A4u) {
        ctx->pc = 0x4628A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628A0u;
        // 0x4628a4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4628A8u;
        goto label_4628a8;
    }
    ctx->pc = 0x4628A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4628A8u);
        ctx->pc = 0x4628A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628A0u;
        // 0x4628a4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4628A0u, 0x4628A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4628A8u;
label_4628a8:
    // 0x4628a8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4628a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4628ac:
    // 0x4628ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4628acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4628b0:
    // 0x4628b0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4628b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4628b4:
    // 0x4628b4: 0xc118f94  jal         func_463E50
label_4628b8:
    if (ctx->pc == 0x4628B8u) {
        ctx->pc = 0x4628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628B4u;
        // 0x4628b8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4628BCu;
        goto label_4628bc;
    }
    ctx->pc = 0x4628B4u;
    SET_GPR_U32(ctx, 31, 0x4628BCu);
    ctx->pc = 0x4628B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4628B4u;
    // 0x4628b8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463E50u, 0x4628B4u, 0x4628BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4628BCu;
label_4628bc:
    // 0x4628bc: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x4628bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_4628c0:
    // 0x4628c0: 0x8f848894  lw          $a0, -0x776C($gp)
    ctx->pc = 0x4628c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
label_4628c4:
    // 0x4628c4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x4628c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_4628c8:
    // 0x4628c8: 0x40f809  jalr        $v0
label_4628cc:
    if (ctx->pc == 0x4628CCu) {
        ctx->pc = 0x4628CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628C8u;
        // 0x4628cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4628D0u;
        goto label_4628d0;
    }
    ctx->pc = 0x4628C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4628D0u);
        ctx->pc = 0x4628CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628C8u;
        // 0x4628cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4628C8u, 0x4628D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4628D0u;
label_4628d0:
    // 0x4628d0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_4628d4:
    if (ctx->pc == 0x4628D4u) {
        ctx->pc = 0x4628D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628D0u;
        // 0x4628d4: 0x8f828890  lw          $v0, -0x7770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4628D8u;
        goto label_4628d8;
    }
    ctx->pc = 0x4628D0u;
    {
        const bool branch_taken_0x4628d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4628D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628D0u;
        // 0x4628d4: 0x8f828890  lw          $v0, -0x7770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4628d0) {
            ctx->pc = 0x4628E0u;
            goto label_4628e0;
        }
    }
    ctx->pc = 0x4628D8u;
label_4628d8:
    // 0x4628d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4628d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4628dc:
    // 0x4628dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4628dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_4628e0:
    // 0x4628e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4628e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4628e4:
    // 0x4628e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4628e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4628e8:
    // 0x4628e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4628e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4628ec:
    // 0x4628ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4628ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4628f0:
    // 0x4628f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4628f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4628f4:
    // 0x4628f4: 0x3e00008  jr          $ra
label_4628f8:
    if (ctx->pc == 0x4628F8u) {
        ctx->pc = 0x4628F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628F4u;
        // 0x4628f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4628FCu;
        goto label_4628fc;
    }
    ctx->pc = 0x4628F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4628F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4628F4u;
        // 0x4628f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4628F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4628FCu;
label_4628fc:
    // 0x4628fc: 0x0  nop
    ctx->pc = 0x4628fcu;
    // NOP
label_462900:
    // 0x462900: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x462900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_462904:
    // 0x462904: 0x0  nop
    ctx->pc = 0x462904u;
    // NOP
    ctx->pc = 0x462908u;
}
