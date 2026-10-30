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

// Function: sub_0010F810
// Address: 0x10f810 - 0x10f900
void sub_0010F810_0x10f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F810_0x10f810");
#endif

    switch (ctx->pc) {
        case 0x10f810u: goto label_10f810;
        case 0x10f814u: goto label_10f814;
        case 0x10f818u: goto label_10f818;
        case 0x10f81cu: goto label_10f81c;
        case 0x10f820u: goto label_10f820;
        case 0x10f824u: goto label_10f824;
        case 0x10f828u: goto label_10f828;
        case 0x10f82cu: goto label_10f82c;
        case 0x10f830u: goto label_10f830;
        case 0x10f834u: goto label_10f834;
        case 0x10f838u: goto label_10f838;
        case 0x10f83cu: goto label_10f83c;
        case 0x10f840u: goto label_10f840;
        case 0x10f844u: goto label_10f844;
        case 0x10f848u: goto label_10f848;
        case 0x10f84cu: goto label_10f84c;
        case 0x10f850u: goto label_10f850;
        case 0x10f854u: goto label_10f854;
        case 0x10f858u: goto label_10f858;
        case 0x10f85cu: goto label_10f85c;
        case 0x10f860u: goto label_10f860;
        case 0x10f864u: goto label_10f864;
        case 0x10f868u: goto label_10f868;
        case 0x10f86cu: goto label_10f86c;
        case 0x10f870u: goto label_10f870;
        case 0x10f874u: goto label_10f874;
        case 0x10f878u: goto label_10f878;
        case 0x10f87cu: goto label_10f87c;
        case 0x10f880u: goto label_10f880;
        case 0x10f884u: goto label_10f884;
        case 0x10f888u: goto label_10f888;
        case 0x10f88cu: goto label_10f88c;
        case 0x10f890u: goto label_10f890;
        case 0x10f894u: goto label_10f894;
        case 0x10f898u: goto label_10f898;
        case 0x10f89cu: goto label_10f89c;
        case 0x10f8a0u: goto label_10f8a0;
        case 0x10f8a4u: goto label_10f8a4;
        case 0x10f8a8u: goto label_10f8a8;
        case 0x10f8acu: goto label_10f8ac;
        case 0x10f8b0u: goto label_10f8b0;
        case 0x10f8b4u: goto label_10f8b4;
        case 0x10f8b8u: goto label_10f8b8;
        case 0x10f8bcu: goto label_10f8bc;
        case 0x10f8c0u: goto label_10f8c0;
        case 0x10f8c4u: goto label_10f8c4;
        case 0x10f8c8u: goto label_10f8c8;
        case 0x10f8ccu: goto label_10f8cc;
        case 0x10f8d0u: goto label_10f8d0;
        case 0x10f8d4u: goto label_10f8d4;
        case 0x10f8d8u: goto label_10f8d8;
        case 0x10f8dcu: goto label_10f8dc;
        case 0x10f8e0u: goto label_10f8e0;
        case 0x10f8e4u: goto label_10f8e4;
        case 0x10f8e8u: goto label_10f8e8;
        case 0x10f8ecu: goto label_10f8ec;
        case 0x10f8f0u: goto label_10f8f0;
        case 0x10f8f4u: goto label_10f8f4;
        case 0x10f8f8u: goto label_10f8f8;
        case 0x10f8fcu: goto label_10f8fc;
        default: break;
    }

    ctx->pc = 0x10f810u;

label_10f810:
    // 0x10f810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10f814:
    // 0x10f814: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10f814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10f818:
    // 0x10f818: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10f818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_10f81c:
    // 0x10f81c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f820:
    // 0x10f820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f824:
    // 0x10f824: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10f824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_10f828:
    // 0x10f828: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10f828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_10f82c:
    // 0x10f82c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10f82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10f830:
    // 0x10f830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10f834:
    // 0x10f834: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x10f834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_10f838:
    // 0x10f838: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x10f838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_10f83c:
    // 0x10f83c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_10f840:
    if (ctx->pc == 0x10F840u) {
        ctx->pc = 0x10F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F83Cu;
        // 0x10f840: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F844u;
        goto label_10f844;
    }
    ctx->pc = 0x10F83Cu;
    {
        const bool branch_taken_0x10f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F83Cu;
        // 0x10f840: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f83c) {
            ctx->pc = 0x10F858u;
            goto label_10f858;
        }
    }
    ctx->pc = 0x10F844u;
label_10f844:
    // 0x10f844: 0x8e43aa84  lw          $v1, -0x557C($s2)
    ctx->pc = 0x10f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_10f848:
    // 0x10f848: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x10f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_10f84c:
    // 0x10f84c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_10f850:
    // 0x10f850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10f854:
    // 0x10f854: 0xac607aa8  sw          $zero, 0x7AA8($v1)
    ctx->pc = 0x10f854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31400), GPR_U32(ctx, 0));
label_10f858:
    // 0x10f858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f85c:
    // 0x10f85c: 0xc044ac4  jal         func_112B10
label_10f860:
    if (ctx->pc == 0x10F860u) {
        ctx->pc = 0x10F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F85Cu;
        // 0x10f860: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F864u;
        goto label_10f864;
    }
    ctx->pc = 0x10F85Cu;
    SET_GPR_U32(ctx, 31, 0x10F864u);
    ctx->pc = 0x10F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F85Cu;
    // 0x10f860: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B10u, 0x10F85Cu, 0x10F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F864u;
label_10f864:
    // 0x10f864: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_10f868:
    // 0x10f868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f86c:
    // 0x10f86c: 0x34844280  ori         $a0, $a0, 0x4280
    ctx->pc = 0x10f86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17024);
label_10f870:
    // 0x10f870: 0xc043040  jal         func_10C100
label_10f874:
    if (ctx->pc == 0x10F874u) {
        ctx->pc = 0x10F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F870u;
        // 0x10f874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F878u;
        goto label_10f878;
    }
    ctx->pc = 0x10F870u;
    SET_GPR_U32(ctx, 31, 0x10F878u);
    ctx->pc = 0x10F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F870u;
    // 0x10f874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C100u, 0x10F870u, 0x10F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F878u;
label_10f878:
    // 0x10f878: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_10f87c:
    // 0x10f87c: 0x34844268  ori         $a0, $a0, 0x4268
    ctx->pc = 0x10f87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17000);
label_10f880:
    // 0x10f880: 0xc043d5e  jal         func_10F578
label_10f884:
    if (ctx->pc == 0x10F884u) {
        ctx->pc = 0x10F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F880u;
        // 0x10f884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F888u;
        goto label_10f888;
    }
    ctx->pc = 0x10F880u;
    SET_GPR_U32(ctx, 31, 0x10F888u);
    ctx->pc = 0x10F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F880u;
    // 0x10f884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10F880u, 0x10F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F888u;
label_10f888:
    // 0x10f888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10f88c:
    if (ctx->pc == 0x10F88Cu) {
        ctx->pc = 0x10F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F888u;
        // 0x10f88c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F890u;
        goto label_10f890;
    }
    ctx->pc = 0x10F888u;
    {
        const bool branch_taken_0x10f888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F888u;
        // 0x10f88c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f888) {
            ctx->pc = 0x10F898u;
            goto label_10f898;
        }
    }
    ctx->pc = 0x10F890u;
label_10f890:
    // 0x10f890: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10f894:
    // 0x10f894: 0xac40426c  sw          $zero, 0x426C($v0)
    ctx->pc = 0x10f894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17004), GPR_U32(ctx, 0));
label_10f898:
    // 0x10f898: 0xc044b9c  jal         func_112E70
label_10f89c:
    if (ctx->pc == 0x10F89Cu) {
        ctx->pc = 0x10F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F898u;
        // 0x10f89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8A0u;
        goto label_10f8a0;
    }
    ctx->pc = 0x10F898u;
    SET_GPR_U32(ctx, 31, 0x10F8A0u);
    ctx->pc = 0x10F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F898u;
    // 0x10f89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E70u, 0x10F898u, 0x10F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8A0u;
label_10f8a0:
    // 0x10f8a0: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x10f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_10f8a4:
    // 0x10f8a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10f8a8:
    // 0x10f8a8: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x10f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_10f8ac:
    // 0x10f8ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10f8b0:
    // 0x10f8b0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x10f8b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_10f8b4:
    // 0x10f8b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x10f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_10f8b8:
    // 0x10f8b8: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x10f8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_10f8bc:
    // 0x10f8bc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x10f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_10f8c0:
    // 0x10f8c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10f8c4:
    // 0x10f8c4: 0x84440178  lh          $a0, 0x178($v0)
    ctx->pc = 0x10f8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 376)));
label_10f8c8:
    // 0x10f8c8: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x10f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
label_10f8cc:
    // 0x10f8cc: 0x60f809  jalr        $v1
label_10f8d0:
    if (ctx->pc == 0x10F8D0u) {
        ctx->pc = 0x10F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8CCu;
        // 0x10f8d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8D4u;
        goto label_10f8d4;
    }
    ctx->pc = 0x10F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F8D4u);
        ctx->pc = 0x10F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8CCu;
        // 0x10f8d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8CCu, 0x10F8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F8D4u;
label_10f8d4:
    // 0x10f8d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10f8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10f8d8:
    // 0x10f8d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10f8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10f8dc:
    // 0x10f8dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10f8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10f8e0:
    // 0x10f8e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10f8e4:
    // 0x10f8e4: 0x3e00008  jr          $ra
label_10f8e8:
    if (ctx->pc == 0x10F8E8u) {
        ctx->pc = 0x10F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E4u;
        // 0x10f8e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8ECu;
        goto label_10f8ec;
    }
    ctx->pc = 0x10F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E4u;
        // 0x10f8e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8ECu;
label_10f8ec:
    // 0x10f8ec: 0x0  nop
    ctx->pc = 0x10f8ecu;
    // NOP
label_10f8f0:
    // 0x10f8f0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x10f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_10f8f4:
    // 0x10f8f4: 0x0  nop
    ctx->pc = 0x10f8f4u;
    // NOP
label_10f8f8:
    // 0x10f8f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10f8fc:
    // 0x10f8fc: 0x0  nop
    ctx->pc = 0x10f8fcu;
    // NOP
    ctx->pc = 0x10f900u;
}
