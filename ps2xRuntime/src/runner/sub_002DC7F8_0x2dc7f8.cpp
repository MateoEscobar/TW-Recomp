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

// Function: sub_002DC7F8
// Address: 0x2dc7f8 - 0x2dc8b0
void sub_002DC7F8_0x2dc7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC7F8_0x2dc7f8");
#endif

    switch (ctx->pc) {
        case 0x2dc7f8u: goto label_2dc7f8;
        case 0x2dc7fcu: goto label_2dc7fc;
        case 0x2dc800u: goto label_2dc800;
        case 0x2dc804u: goto label_2dc804;
        case 0x2dc808u: goto label_2dc808;
        case 0x2dc80cu: goto label_2dc80c;
        case 0x2dc810u: goto label_2dc810;
        case 0x2dc814u: goto label_2dc814;
        case 0x2dc818u: goto label_2dc818;
        case 0x2dc81cu: goto label_2dc81c;
        case 0x2dc820u: goto label_2dc820;
        case 0x2dc824u: goto label_2dc824;
        case 0x2dc828u: goto label_2dc828;
        case 0x2dc82cu: goto label_2dc82c;
        case 0x2dc830u: goto label_2dc830;
        case 0x2dc834u: goto label_2dc834;
        case 0x2dc838u: goto label_2dc838;
        case 0x2dc83cu: goto label_2dc83c;
        case 0x2dc840u: goto label_2dc840;
        case 0x2dc844u: goto label_2dc844;
        case 0x2dc848u: goto label_2dc848;
        case 0x2dc84cu: goto label_2dc84c;
        case 0x2dc850u: goto label_2dc850;
        case 0x2dc854u: goto label_2dc854;
        case 0x2dc858u: goto label_2dc858;
        case 0x2dc85cu: goto label_2dc85c;
        case 0x2dc860u: goto label_2dc860;
        case 0x2dc864u: goto label_2dc864;
        case 0x2dc868u: goto label_2dc868;
        case 0x2dc86cu: goto label_2dc86c;
        case 0x2dc870u: goto label_2dc870;
        case 0x2dc874u: goto label_2dc874;
        case 0x2dc878u: goto label_2dc878;
        case 0x2dc87cu: goto label_2dc87c;
        case 0x2dc880u: goto label_2dc880;
        case 0x2dc884u: goto label_2dc884;
        case 0x2dc888u: goto label_2dc888;
        case 0x2dc88cu: goto label_2dc88c;
        case 0x2dc890u: goto label_2dc890;
        case 0x2dc894u: goto label_2dc894;
        case 0x2dc898u: goto label_2dc898;
        case 0x2dc89cu: goto label_2dc89c;
        case 0x2dc8a0u: goto label_2dc8a0;
        case 0x2dc8a4u: goto label_2dc8a4;
        case 0x2dc8a8u: goto label_2dc8a8;
        case 0x2dc8acu: goto label_2dc8ac;
        default: break;
    }

    ctx->pc = 0x2dc7f8u;

label_2dc7f8:
    // 0x2dc7f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2dc7fc:
    // 0x2dc7fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2dc800:
    // 0x2dc800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc804:
    // 0x2dc804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc808:
    // 0x2dc808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc80c:
    // 0x2dc80c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2dc80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2dc810:
    // 0x2dc810: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dc814:
    // 0x2dc814: 0xc0e4060  jal         func_390180
label_2dc818:
    if (ctx->pc == 0x2DC818u) {
        ctx->pc = 0x2DC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC814u;
        // 0x2dc818: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC81Cu;
        goto label_2dc81c;
    }
    ctx->pc = 0x2DC814u;
    SET_GPR_U32(ctx, 31, 0x2DC81Cu);
    ctx->pc = 0x2DC818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC814u;
    // 0x2dc818: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DC814u, 0x2DC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC81Cu;
label_2dc81c:
    // 0x2dc81c: 0xc0e57ce  jal         func_395F38
label_2dc820:
    if (ctx->pc == 0x2DC820u) {
        ctx->pc = 0x2DC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC81Cu;
        // 0x2dc820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC824u;
        goto label_2dc824;
    }
    ctx->pc = 0x2DC81Cu;
    SET_GPR_U32(ctx, 31, 0x2DC824u);
    ctx->pc = 0x2DC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC81Cu;
    // 0x2dc820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2DC81Cu, 0x2DC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC824u;
label_2dc824:
    // 0x2dc824: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dc824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc828:
    // 0x2dc828: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2dc82c:
    if (ctx->pc == 0x2DC82Cu) {
        ctx->pc = 0x2DC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC828u;
        // 0x2dc82c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC830u;
        goto label_2dc830;
    }
    ctx->pc = 0x2DC828u;
    {
        const bool branch_taken_0x2dc828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC828u;
        // 0x2dc82c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc828) {
            ctx->pc = 0x2DC87Cu;
            goto label_2dc87c;
        }
    }
    ctx->pc = 0x2DC830u;
label_2dc830:
    // 0x2dc830: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2dc830u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_2dc834:
    // 0x2dc834: 0xc0e44cc  jal         func_391330
label_2dc838:
    if (ctx->pc == 0x2DC838u) {
        ctx->pc = 0x2DC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC834u;
        // 0x2dc838: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC83Cu;
        goto label_2dc83c;
    }
    ctx->pc = 0x2DC834u;
    SET_GPR_U32(ctx, 31, 0x2DC83Cu);
    ctx->pc = 0x2DC838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC834u;
    // 0x2dc838: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2DC834u, 0x2DC83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC83Cu;
label_2dc83c:
    // 0x2dc83c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2dc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2dc840:
    // 0x2dc840: 0xc089000  jal         func_224000
label_2dc844:
    if (ctx->pc == 0x2DC844u) {
        ctx->pc = 0x2DC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC840u;
        // 0x2dc844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC848u;
        goto label_2dc848;
    }
    ctx->pc = 0x2DC840u;
    SET_GPR_U32(ctx, 31, 0x2DC848u);
    ctx->pc = 0x2DC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC840u;
    // 0x2dc844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2DC840u, 0x2DC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC848u;
label_2dc848:
    // 0x2dc848: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2dc84c:
    if (ctx->pc == 0x2DC84Cu) {
        ctx->pc = 0x2DC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC848u;
        // 0x2dc84c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC850u;
        goto label_2dc850;
    }
    ctx->pc = 0x2DC848u;
    {
        const bool branch_taken_0x2dc848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc848) {
            ctx->pc = 0x2DC84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC848u;
            // 0x2dc84c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC85Cu;
            goto label_2dc85c;
        }
    }
    ctx->pc = 0x2DC850u;
label_2dc850:
    // 0x2dc850: 0xc095fce  jal         func_257F38
label_2dc854:
    if (ctx->pc == 0x2DC854u) {
        ctx->pc = 0x2DC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC850u;
        // 0x2dc854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC858u;
        goto label_2dc858;
    }
    ctx->pc = 0x2DC850u;
    SET_GPR_U32(ctx, 31, 0x2DC858u);
    ctx->pc = 0x2DC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC850u;
    // 0x2dc854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2DC850u, 0x2DC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC858u;
label_2dc858:
    // 0x2dc858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dc858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dc85c:
    // 0x2dc85c: 0x8045000b  lb          $a1, 0xB($v0)
    ctx->pc = 0x2dc85cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_2dc860:
    // 0x2dc860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc864:
    // 0x2dc864: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2dc864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_2dc868:
    // 0x2dc868: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2dc86c:
    // 0x2dc86c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2dc86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2dc870:
    // 0x2dc870: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x2dc870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
label_2dc874:
    // 0x2dc874: 0xc0a337e  jal         func_28CDF8
label_2dc878:
    if (ctx->pc == 0x2DC878u) {
        ctx->pc = 0x2DC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC874u;
        // 0x2dc878: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC87Cu;
        goto label_2dc87c;
    }
    ctx->pc = 0x2DC874u;
    SET_GPR_U32(ctx, 31, 0x2DC87Cu);
    ctx->pc = 0x2DC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC874u;
    // 0x2dc878: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2DC874u, 0x2DC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC87Cu;
label_2dc87c:
    // 0x2dc87c: 0xc089bdc  jal         func_226F70
label_2dc880:
    if (ctx->pc == 0x2DC880u) {
        ctx->pc = 0x2DC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC87Cu;
        // 0x2dc880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC884u;
        goto label_2dc884;
    }
    ctx->pc = 0x2DC87Cu;
    SET_GPR_U32(ctx, 31, 0x2DC884u);
    ctx->pc = 0x2DC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC87Cu;
    // 0x2dc880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DC87Cu, 0x2DC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC884u;
label_2dc884:
    // 0x2dc884: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2dc884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2dc888:
    // 0x2dc888: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2dc888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2dc88c:
    // 0x2dc88c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2dc88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2dc890:
    // 0x2dc890: 0x60f809  jalr        $v1
label_2dc894:
    if (ctx->pc == 0x2DC894u) {
        ctx->pc = 0x2DC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC890u;
        // 0x2dc894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC898u;
        goto label_2dc898;
    }
    ctx->pc = 0x2DC890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DC898u);
        ctx->pc = 0x2DC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC890u;
        // 0x2dc894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC890u, 0x2DC898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC898u;
label_2dc898:
    // 0x2dc898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc89c:
    // 0x2dc89c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc8a0:
    // 0x2dc8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc8a4:
    // 0x2dc8a4: 0x3e00008  jr          $ra
label_2dc8a8:
    if (ctx->pc == 0x2DC8A8u) {
        ctx->pc = 0x2DC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8A4u;
        // 0x2dc8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC8ACu;
        goto label_2dc8ac;
    }
    ctx->pc = 0x2DC8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8A4u;
        // 0x2dc8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC8ACu;
label_2dc8ac:
    // 0x2dc8ac: 0x0  nop
    ctx->pc = 0x2dc8acu;
    // NOP
    ctx->pc = 0x2dc8b0u;
}
