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

// Function: sub_0027E6D8
// Address: 0x27e6d8 - 0x27e908
void sub_0027E6D8_0x27e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E6D8_0x27e6d8");
#endif

    switch (ctx->pc) {
        case 0x27e6fcu: goto label_27e6fc;
        case 0x27e710u: goto label_27e710;
        case 0x27e724u: goto label_27e724;
        case 0x27e738u: goto label_27e738;
        case 0x27e748u: goto label_27e748;
        case 0x27e760u: goto label_27e760;
        case 0x27e770u: goto label_27e770;
        case 0x27e77cu: goto label_27e77c;
        case 0x27e794u: goto label_27e794;
        case 0x27e7acu: goto label_27e7ac;
        case 0x27e840u: goto label_27e840;
        case 0x27e854u: goto label_27e854;
        case 0x27e8acu: goto label_27e8ac;
        case 0x27e8d0u: goto label_27e8d0;
        default: break;
    }

    ctx->pc = 0x27e6d8u;

    // 0x27e6d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27e6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27e6dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27e6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x27e6e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27e6e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27e6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x27e6e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x27e6ec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x27e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x27e6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e6f4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27E6F4u;
    SET_GPR_U32(ctx, 31, 0x27E6FCu);
    ctx->pc = 0x27E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6F4u;
    // 0x27e6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27E6F4u, 0x27E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6FCu;
label_27e6fc:
    // 0x27e6fc: 0x3c0507c7  lui         $a1, 0x7C7
    ctx->pc = 0x27e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1991 << 16));
    // 0x27e700: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e708: 0xc089998  jal         func_226660
    ctx->pc = 0x27E708u;
    SET_GPR_U32(ctx, 31, 0x27E710u);
    ctx->pc = 0x27E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E708u;
    // 0x27e70c: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27E708u, 0x27E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E710u;
label_27e710:
    // 0x27e710: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x27E710u;
    {
        const bool branch_taken_0x27e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E710u;
        // 0x27e714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e710) {
            ctx->pc = 0x27E8E8u;
            goto label_27e8e8;
        }
    }
    ctx->pc = 0x27E718u;
    // 0x27e718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e71c: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x27E71Cu;
    SET_GPR_U32(ctx, 31, 0x27E724u);
    ctx->pc = 0x27E720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E71Cu;
    // 0x27e720: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x27E71Cu, 0x27E724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E724u;
label_27e724:
    // 0x27e724: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x27e724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x27e728: 0x14740005  bne         $v1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E728u;
    {
        const bool branch_taken_0x27e728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x27e728) {
            ctx->pc = 0x27E740u;
            goto label_27e740;
        }
    }
    ctx->pc = 0x27E730u;
    // 0x27e730: 0xc09fa42  jal         func_27E908
    ctx->pc = 0x27E730u;
    SET_GPR_U32(ctx, 31, 0x27E738u);
    ctx->pc = 0x27E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E730u;
    // 0x27e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E908u, 0x27E730u, 0x27E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E738u;
label_27e738:
    // 0x27e738: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x27E738u;
    {
        const bool branch_taken_0x27e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E738u;
        // 0x27e73c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e738) {
            ctx->pc = 0x27E8ECu;
            goto label_27e8ec;
        }
    }
    ctx->pc = 0x27E740u;
label_27e740:
    // 0x27e740: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x27E740u;
    SET_GPR_U32(ctx, 31, 0x27E748u);
    ctx->pc = 0x27E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E740u;
    // 0x27e744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x27E740u, 0x27E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E748u;
label_27e748:
    // 0x27e748: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x27e748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x27e74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e750: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E750u;
    {
        const bool branch_taken_0x27e750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e750) {
            ctx->pc = 0x27E768u;
            goto label_27e768;
        }
    }
    ctx->pc = 0x27E758u;
    // 0x27e758: 0xc0a1e2e  jal         func_2878B8
    ctx->pc = 0x27E758u;
    SET_GPR_U32(ctx, 31, 0x27E760u);
    ctx->pc = 0x27E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E758u;
    // 0x27e75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2878B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2878B8u, 0x27E758u, 0x27E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E760u;
label_27e760:
    // 0x27e760: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x27E760u;
    {
        const bool branch_taken_0x27e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E760u;
        // 0x27e764: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e760) {
            ctx->pc = 0x27E8ECu;
            goto label_27e8ec;
        }
    }
    ctx->pc = 0x27E768u;
label_27e768:
    // 0x27e768: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x27E768u;
    SET_GPR_U32(ctx, 31, 0x27E770u);
    ctx->pc = 0x27E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E768u;
    // 0x27e76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x27E768u, 0x27E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E770u;
label_27e770:
    // 0x27e770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e774: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x27E774u;
    SET_GPR_U32(ctx, 31, 0x27E77Cu);
    ctx->pc = 0x27E778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E774u;
    // 0x27e778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x27E774u, 0x27E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E77Cu;
label_27e77c:
    // 0x27e77c: 0x94530046  lhu         $s3, 0x46($v0)
    ctx->pc = 0x27e77cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x27e780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e784: 0x16620047  bne         $s3, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x27E784u;
    {
        const bool branch_taken_0x27e784 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e784) {
            ctx->pc = 0x27E8A4u;
            goto label_27e8a4;
        }
    }
    ctx->pc = 0x27E78Cu;
    // 0x27e78c: 0xc09ef36  jal         func_27BCD8
    ctx->pc = 0x27E78Cu;
    SET_GPR_U32(ctx, 31, 0x27E794u);
    ctx->pc = 0x27E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E78Cu;
    // 0x27e790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BCD8u, 0x27E78Cu, 0x27E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E794u;
label_27e794:
    // 0x27e794: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x27E794u;
    {
        const bool branch_taken_0x27e794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E794u;
        // 0x27e798: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e794) {
            ctx->pc = 0x27E84Cu;
            goto label_27e84c;
        }
    }
    ctx->pc = 0x27E79Cu;
    // 0x27e79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7a0: 0x8c6202c0  lw          $v0, 0x2C0($v1)
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x27e7a4: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x27E7A4u;
    SET_GPR_U32(ctx, 31, 0x27E7ACu);
    ctx->pc = 0x27E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7A4u;
    // 0x27e7a8: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x27E7A4u, 0x27E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7ACu;
label_27e7ac:
    // 0x27e7ac: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x27e7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27e7b0: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E7B0u;
    {
        const bool branch_taken_0x27e7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x27e7b0) {
            ctx->pc = 0x27E7D8u;
            goto label_27e7d8;
        }
    }
    ctx->pc = 0x27E7B8u;
    // 0x27e7b8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x27e7b8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e7bc: 0x0  nop
    ctx->pc = 0x27e7bcu;
    // NOP
    // 0x27e7c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e7c4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27e7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27e7c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27e7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27e7cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e7d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E7D0u;
    {
        const bool branch_taken_0x27e7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7d0) {
            ctx->pc = 0x27E7F4u;
            goto label_27e7f4;
        }
    }
    ctx->pc = 0x27E7D8u;
label_27e7d8:
    // 0x27e7d8: 0x5453000d  bnel        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x27E7D8u;
    {
        const bool branch_taken_0x27e7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x27e7d8) {
            ctx->pc = 0x27E7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E7D8u;
            // 0x27e7dc: 0x96230040  lhu         $v1, 0x40($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E810u;
            goto label_27e810;
        }
    }
    ctx->pc = 0x27E7E0u;
    // 0x27e7e0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x27e7e0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e7e4: 0x0  nop
    ctx->pc = 0x27e7e4u;
    // NOP
    // 0x27e7e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e7ec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x27e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27e7f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27e7f4:
    // 0x27e7f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27e7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27e7f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27e7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27e7fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27e7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27e800: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27e800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27e804: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e808: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x27e808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x27e80c: 0x96230040  lhu         $v1, 0x40($s1)
    ctx->pc = 0x27e80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_27e810:
    // 0x27e810: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27e814: 0x8c4402b8  lw          $a0, 0x2B8($v0)
    ctx->pc = 0x27e814u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5102B8u));
    // 0x27e818: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x27e818u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x27e81c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27e820: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x27e820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27e824: 0xa6230040  sh          $v1, 0x40($s1)
    ctx->pc = 0x27e824u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e828: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27e82c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x27e82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27e830: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x27E830u;
    {
        const bool branch_taken_0x27e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E830u;
        // 0x27e834: 0xae4009a8  sw          $zero, 0x9A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e830) {
            ctx->pc = 0x27E8E4u;
            goto label_27e8e4;
        }
    }
    ctx->pc = 0x27E838u;
    // 0x27e838: 0xc09ef32  jal         func_27BCC8
    ctx->pc = 0x27E838u;
    SET_GPR_U32(ctx, 31, 0x27E840u);
    ctx->pc = 0x27BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BCC8u, 0x27E838u, 0x27E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E840u;
label_27e840:
    // 0x27e840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e844: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27E844u;
    {
        const bool branch_taken_0x27e844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E844u;
        // 0x27e848: 0xae4209a8  sw          $v0, 0x9A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e844) {
            ctx->pc = 0x27E8E4u;
            goto label_27e8e4;
        }
    }
    ctx->pc = 0x27E84Cu;
label_27e84c:
    // 0x27e84c: 0xc09ef12  jal         func_27BC48
    ctx->pc = 0x27E84Cu;
    SET_GPR_U32(ctx, 31, 0x27E854u);
    ctx->pc = 0x27E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E84Cu;
    // 0x27e850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BC48u, 0x27E84Cu, 0x27E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E854u;
label_27e854:
    // 0x27e854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E854u;
    {
        const bool branch_taken_0x27e854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E854u;
        // 0x27e858: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e854) {
            ctx->pc = 0x27E86Cu;
            goto label_27e86c;
        }
    }
    ctx->pc = 0x27E85Cu;
    // 0x27e85c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x27e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x27e860: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x27e860u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e864: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27E864u;
    {
        const bool branch_taken_0x27e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E864u;
        // 0x27e868: 0xac7309a8  sw          $s3, 0x9A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2472), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e864) {
            ctx->pc = 0x27E8E4u;
            goto label_27e8e4;
        }
    }
    ctx->pc = 0x27E86Cu;
label_27e86c:
    // 0x27e86c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x27e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x27e870: 0x8ca209a8  lw          $v0, 0x9A8($a1)
    ctx->pc = 0x27e870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5109A8u));
    // 0x27e874: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x27E874u;
    {
        const bool branch_taken_0x27e874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E874u;
        // 0x27e878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e874) {
            ctx->pc = 0x27E8E8u;
            goto label_27e8e8;
        }
    }
    ctx->pc = 0x27E87Cu;
    // 0x27e87c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27e880: 0x96230040  lhu         $v1, 0x40($s1)
    ctx->pc = 0x27e880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x27e884: 0x944402bc  lhu         $a0, 0x2BC($v0)
    ctx->pc = 0x27e884u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5102BCu));
    // 0x27e888: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e88c: 0xa6230040  sh          $v1, 0x40($s1)
    ctx->pc = 0x27e88cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x27e890: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27e894: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E894u;
    {
        const bool branch_taken_0x27e894 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x27e894) {
            ctx->pc = 0x27E898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E894u;
            // 0x27e898: 0xacb309a8  sw          $s3, 0x9A8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2472), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E8E4u;
            goto label_27e8e4;
        }
    }
    ctx->pc = 0x27E89Cu;
    // 0x27e89c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27E89Cu;
    {
        const bool branch_taken_0x27e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E89Cu;
        // 0x27e8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e89c) {
            ctx->pc = 0x27E8E8u;
            goto label_27e8e8;
        }
    }
    ctx->pc = 0x27E8A4u;
label_27e8a4:
    // 0x27e8a4: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x27E8A4u;
    SET_GPR_U32(ctx, 31, 0x27E8ACu);
    ctx->pc = 0x27E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8A4u;
    // 0x27e8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x27E8A4u, 0x27E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8ACu;
label_27e8ac:
    // 0x27e8ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E8ACu;
    {
        const bool branch_taken_0x27e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8ACu;
        // 0x27e8b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8ac) {
            ctx->pc = 0x27E8C8u;
            goto label_27e8c8;
        }
    }
    ctx->pc = 0x27E8B4u;
    // 0x27e8b4: 0x96230040  lhu         $v1, 0x40($s1)
    ctx->pc = 0x27e8b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x27e8b8: 0x944402c0  lhu         $a0, 0x2C0($v0)
    ctx->pc = 0x27e8b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x27e8bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e8c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E8C0u;
    {
        const bool branch_taken_0x27e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8C0u;
        // 0x27e8c4: 0xa6230040  sh          $v1, 0x40($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8c0) {
            ctx->pc = 0x27E8E4u;
            goto label_27e8e4;
        }
    }
    ctx->pc = 0x27E8C8u;
label_27e8c8:
    // 0x27e8c8: 0xc09ed70  jal         func_27B5C0
    ctx->pc = 0x27E8C8u;
    SET_GPR_U32(ctx, 31, 0x27E8D0u);
    ctx->pc = 0x27E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8C8u;
    // 0x27e8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5C0u, 0x27E8C8u, 0x27E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8D0u;
label_27e8d0:
    // 0x27e8d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E8D0u;
    {
        const bool branch_taken_0x27e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8D0u;
        // 0x27e8d4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8d0) {
            ctx->pc = 0x27E8E4u;
            goto label_27e8e4;
        }
    }
    ctx->pc = 0x27E8D8u;
    // 0x27e8d8: 0x946202c0  lhu         $v0, 0x2C0($v1)
    ctx->pc = 0x27e8d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x27e8dc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x27e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x27e8e0: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x27e8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
label_27e8e4:
    // 0x27e8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e8e8:
    // 0x27e8e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27e8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27e8ec:
    // 0x27e8ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27e8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e8f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27e8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e8f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27e8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e8f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x27e8f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e900: 0x3e00008  jr          $ra
    ctx->pc = 0x27E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E900u;
        // 0x27e904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E908u;
}
