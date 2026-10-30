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

// Function: sub_002C4710
// Address: 0x2c4710 - 0x2c4850
void sub_002C4710_0x2c4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4710_0x2c4710");
#endif

    switch (ctx->pc) {
        case 0x2c4710u: goto label_2c4710;
        case 0x2c4714u: goto label_2c4714;
        case 0x2c4718u: goto label_2c4718;
        case 0x2c471cu: goto label_2c471c;
        case 0x2c4720u: goto label_2c4720;
        case 0x2c4724u: goto label_2c4724;
        case 0x2c4728u: goto label_2c4728;
        case 0x2c472cu: goto label_2c472c;
        case 0x2c4730u: goto label_2c4730;
        case 0x2c4734u: goto label_2c4734;
        case 0x2c4738u: goto label_2c4738;
        case 0x2c473cu: goto label_2c473c;
        case 0x2c4740u: goto label_2c4740;
        case 0x2c4744u: goto label_2c4744;
        case 0x2c4748u: goto label_2c4748;
        case 0x2c474cu: goto label_2c474c;
        case 0x2c4750u: goto label_2c4750;
        case 0x2c4754u: goto label_2c4754;
        case 0x2c4758u: goto label_2c4758;
        case 0x2c475cu: goto label_2c475c;
        case 0x2c4760u: goto label_2c4760;
        case 0x2c4764u: goto label_2c4764;
        case 0x2c4768u: goto label_2c4768;
        case 0x2c476cu: goto label_2c476c;
        case 0x2c4770u: goto label_2c4770;
        case 0x2c4774u: goto label_2c4774;
        case 0x2c4778u: goto label_2c4778;
        case 0x2c477cu: goto label_2c477c;
        case 0x2c4780u: goto label_2c4780;
        case 0x2c4784u: goto label_2c4784;
        case 0x2c4788u: goto label_2c4788;
        case 0x2c478cu: goto label_2c478c;
        case 0x2c4790u: goto label_2c4790;
        case 0x2c4794u: goto label_2c4794;
        case 0x2c4798u: goto label_2c4798;
        case 0x2c479cu: goto label_2c479c;
        case 0x2c47a0u: goto label_2c47a0;
        case 0x2c47a4u: goto label_2c47a4;
        case 0x2c47a8u: goto label_2c47a8;
        case 0x2c47acu: goto label_2c47ac;
        case 0x2c47b0u: goto label_2c47b0;
        case 0x2c47b4u: goto label_2c47b4;
        case 0x2c47b8u: goto label_2c47b8;
        case 0x2c47bcu: goto label_2c47bc;
        case 0x2c47c0u: goto label_2c47c0;
        case 0x2c47c4u: goto label_2c47c4;
        case 0x2c47c8u: goto label_2c47c8;
        case 0x2c47ccu: goto label_2c47cc;
        case 0x2c47d0u: goto label_2c47d0;
        case 0x2c47d4u: goto label_2c47d4;
        case 0x2c47d8u: goto label_2c47d8;
        case 0x2c47dcu: goto label_2c47dc;
        case 0x2c47e0u: goto label_2c47e0;
        case 0x2c47e4u: goto label_2c47e4;
        case 0x2c47e8u: goto label_2c47e8;
        case 0x2c47ecu: goto label_2c47ec;
        case 0x2c47f0u: goto label_2c47f0;
        case 0x2c47f4u: goto label_2c47f4;
        case 0x2c47f8u: goto label_2c47f8;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4800u: goto label_2c4800;
        case 0x2c4804u: goto label_2c4804;
        case 0x2c4808u: goto label_2c4808;
        case 0x2c480cu: goto label_2c480c;
        case 0x2c4810u: goto label_2c4810;
        case 0x2c4814u: goto label_2c4814;
        case 0x2c4818u: goto label_2c4818;
        case 0x2c481cu: goto label_2c481c;
        case 0x2c4820u: goto label_2c4820;
        case 0x2c4824u: goto label_2c4824;
        case 0x2c4828u: goto label_2c4828;
        case 0x2c482cu: goto label_2c482c;
        case 0x2c4830u: goto label_2c4830;
        case 0x2c4834u: goto label_2c4834;
        case 0x2c4838u: goto label_2c4838;
        case 0x2c483cu: goto label_2c483c;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4844u: goto label_2c4844;
        case 0x2c4848u: goto label_2c4848;
        case 0x2c484cu: goto label_2c484c;
        default: break;
    }

    ctx->pc = 0x2c4710u;

label_2c4710:
    // 0x2c4710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c4710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2c4714:
    // 0x2c4714: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c4714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2c4718:
    // 0x2c4718: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c4718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2c471c:
    // 0x2c471c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c471cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c4720:
    // 0x2c4720: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c4720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2c4724:
    // 0x2c4724: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c4724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c4728:
    // 0x2c4728: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c4728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2c472c:
    // 0x2c472c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c472cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c4730:
    // 0x2c4730: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c4730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2c4734:
    // 0x2c4734: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2c4734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c4738:
    // 0x2c4738: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c4738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2c473c:
    // 0x2c473c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2c4740:
    // 0x2c4740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c4744:
    // 0x2c4744: 0xc0e4060  jal         func_390180
label_2c4748:
    if (ctx->pc == 0x2C4748u) {
        ctx->pc = 0x2C4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4744u;
        // 0x2c4748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C474Cu;
        goto label_2c474c;
    }
    ctx->pc = 0x2C4744u;
    SET_GPR_U32(ctx, 31, 0x2C474Cu);
    ctx->pc = 0x2C4748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4744u;
    // 0x2c4748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C4744u, 0x2C474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C474Cu;
label_2c474c:
    // 0x2c474c: 0xc08a61a  jal         func_229868
label_2c4750:
    if (ctx->pc == 0x2C4750u) {
        ctx->pc = 0x2C4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C474Cu;
        // 0x2c4750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4754u;
        goto label_2c4754;
    }
    ctx->pc = 0x2C474Cu;
    SET_GPR_U32(ctx, 31, 0x2C4754u);
    ctx->pc = 0x2C4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C474Cu;
    // 0x2c4750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C474Cu, 0x2C4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4754u;
label_2c4754:
    // 0x2c4754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4758:
    // 0x2c4758: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
label_2c475c:
    if (ctx->pc == 0x2C475Cu) {
        ctx->pc = 0x2C475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4758u;
        // 0x2c475c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4760u;
        goto label_2c4760;
    }
    ctx->pc = 0x2C4758u;
    {
        const bool branch_taken_0x2c4758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4758) {
            ctx->pc = 0x2C475Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4758u;
            // 0x2c475c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C482Cu;
            goto label_2c482c;
        }
    }
    ctx->pc = 0x2C4760u;
label_2c4760:
    // 0x2c4760: 0xc087502  jal         func_21D408
label_2c4764:
    if (ctx->pc == 0x2C4764u) {
        ctx->pc = 0x2C4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4760u;
        // 0x2c4764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4768u;
        goto label_2c4768;
    }
    ctx->pc = 0x2C4760u;
    SET_GPR_U32(ctx, 31, 0x2C4768u);
    ctx->pc = 0x2C4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4760u;
    // 0x2c4764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C4760u, 0x2C4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4768u;
label_2c4768:
    // 0x2c4768: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x2c4768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2c476c:
    // 0x2c476c: 0xc08a200  jal         func_228800
label_2c4770:
    if (ctx->pc == 0x2C4770u) {
        ctx->pc = 0x2C4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C476Cu;
        // 0x2c4770: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4774u;
        goto label_2c4774;
    }
    ctx->pc = 0x2C476Cu;
    SET_GPR_U32(ctx, 31, 0x2C4774u);
    ctx->pc = 0x2C4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C476Cu;
    // 0x2c4770: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2C476Cu, 0x2C4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4774u;
label_2c4774:
    // 0x2c4774: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2c4774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2c4778:
    // 0x2c4778: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c477c:
    // 0x2c477c: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
label_2c4780:
    if (ctx->pc == 0x2C4780u) {
        ctx->pc = 0x2C4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C477Cu;
        // 0x2c4780: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4784u;
        goto label_2c4784;
    }
    ctx->pc = 0x2C477Cu;
    {
        const bool branch_taken_0x2c477c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c477c) {
            ctx->pc = 0x2C4780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C477Cu;
            // 0x2c4780: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C482Cu;
            goto label_2c482c;
        }
    }
    ctx->pc = 0x2C4784u;
label_2c4784:
    // 0x2c4784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c4784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c4788:
    // 0x2c4788: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c4788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c478c:
    // 0x2c478c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c4790:
    // 0x2c4790: 0x40f809  jalr        $v0
label_2c4794:
    if (ctx->pc == 0x2C4794u) {
        ctx->pc = 0x2C4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4790u;
        // 0x2c4794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4798u;
        goto label_2c4798;
    }
    ctx->pc = 0x2C4790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C4798u);
        ctx->pc = 0x2C4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4790u;
        // 0x2c4794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4790u, 0x2C4798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4798u;
label_2c4798:
    // 0x2c4798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c479c:
    // 0x2c479c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c479cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c47a0:
    // 0x2c47a0: 0xc08e1a4  jal         func_238690
label_2c47a4:
    if (ctx->pc == 0x2C47A4u) {
        ctx->pc = 0x2C47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47A0u;
        // 0x2c47a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47A8u;
        goto label_2c47a8;
    }
    ctx->pc = 0x2C47A0u;
    SET_GPR_U32(ctx, 31, 0x2C47A8u);
    ctx->pc = 0x2C47A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C47A0u;
    // 0x2c47a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C47A0u, 0x2C47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47A8u;
label_2c47a8:
    // 0x2c47a8: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2c47a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2c47ac:
    // 0x2c47ac: 0xc0e409a  jal         func_390268
label_2c47b0:
    if (ctx->pc == 0x2C47B0u) {
        ctx->pc = 0x2C47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47ACu;
        // 0x2c47b0: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47B4u;
        goto label_2c47b4;
    }
    ctx->pc = 0x2C47ACu;
    SET_GPR_U32(ctx, 31, 0x2C47B4u);
    ctx->pc = 0x2C47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C47ACu;
    // 0x2c47b0: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C47ACu, 0x2C47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47B4u;
label_2c47b4:
    // 0x2c47b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c47b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c47b8:
    // 0x2c47b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c47b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c47bc:
    // 0x2c47bc: 0xc0a352c  jal         func_28D4B0
label_2c47c0:
    if (ctx->pc == 0x2C47C0u) {
        ctx->pc = 0x2C47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47BCu;
        // 0x2c47c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47C4u;
        goto label_2c47c4;
    }
    ctx->pc = 0x2C47BCu;
    SET_GPR_U32(ctx, 31, 0x2C47C4u);
    ctx->pc = 0x2C47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C47BCu;
    // 0x2c47c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C47BCu, 0x2C47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47C4u;
label_2c47c4:
    // 0x2c47c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c47c8:
    if (ctx->pc == 0x2C47C8u) {
        ctx->pc = 0x2C47CCu;
        goto label_2c47cc;
    }
    ctx->pc = 0x2C47C4u;
    {
        const bool branch_taken_0x2c47c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c47c4) {
            ctx->pc = 0x2C47E8u;
            goto label_2c47e8;
        }
    }
    ctx->pc = 0x2C47CCu;
label_2c47cc:
    // 0x2c47cc: 0xc087502  jal         func_21D408
label_2c47d0:
    if (ctx->pc == 0x2C47D0u) {
        ctx->pc = 0x2C47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47CCu;
        // 0x2c47d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47D4u;
        goto label_2c47d4;
    }
    ctx->pc = 0x2C47CCu;
    SET_GPR_U32(ctx, 31, 0x2C47D4u);
    ctx->pc = 0x2C47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C47CCu;
    // 0x2c47d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C47CCu, 0x2C47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47D4u;
label_2c47d4:
    // 0x2c47d4: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x2c47d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c47d8:
    // 0x2c47d8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c47d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2c47dc:
    // 0x2c47dc: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2c47e0:
    // 0x2c47e0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2c47e4:
    // 0x2c47e4: 0xaca305f4  sw          $v1, 0x5F4($a1)
    ctx->pc = 0x2c47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 3));
label_2c47e8:
    // 0x2c47e8: 0xc0a4e54  jal         func_293950
label_2c47ec:
    if (ctx->pc == 0x2C47ECu) {
        ctx->pc = 0x2C47F0u;
        goto label_2c47f0;
    }
    ctx->pc = 0x2C47E8u;
    SET_GPR_U32(ctx, 31, 0x2C47F0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C47E8u, 0x2C47F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47F0u;
label_2c47f0:
    // 0x2c47f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c47f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c47f4:
    // 0x2c47f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2c47f8:
    if (ctx->pc == 0x2C47F8u) {
        ctx->pc = 0x2C47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F4u;
        // 0x2c47f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47FCu;
        goto label_2c47fc;
    }
    ctx->pc = 0x2C47F4u;
    {
        const bool branch_taken_0x2c47f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F4u;
        // 0x2c47f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47f4) {
            ctx->pc = 0x2C481Cu;
            goto label_2c481c;
        }
    }
    ctx->pc = 0x2C47FCu;
label_2c47fc:
    // 0x2c47fc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2c47fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_2c4800:
    // 0x2c4800: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c4800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4804:
    // 0x2c4804: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c4804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c4808:
    // 0x2c4808: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2c4808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c480c:
    // 0x2c480c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c480cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4810:
    // 0x2c4810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4814:
    // 0x2c4814: 0xc0b1214  jal         func_2C4850
label_2c4818:
    if (ctx->pc == 0x2C4818u) {
        ctx->pc = 0x2C4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4814u;
        // 0x2c4818: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C481Cu;
        goto label_2c481c;
    }
    ctx->pc = 0x2C4814u;
    SET_GPR_U32(ctx, 31, 0x2C481Cu);
    ctx->pc = 0x2C4818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4814u;
    // 0x2c4818: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4850u, 0x2C4814u, 0x2C481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C481Cu;
label_2c481c:
    // 0x2c481c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4820:
    // 0x2c4820: 0xc0a35d6  jal         func_28D758
label_2c4824:
    if (ctx->pc == 0x2C4824u) {
        ctx->pc = 0x2C4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4820u;
        // 0x2c4824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4828u;
        goto label_2c4828;
    }
    ctx->pc = 0x2C4820u;
    SET_GPR_U32(ctx, 31, 0x2C4828u);
    ctx->pc = 0x2C4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4820u;
    // 0x2c4824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C4820u, 0x2C4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4828u;
label_2c4828:
    // 0x2c4828: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c4828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c482c:
    // 0x2c482c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c482cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4830:
    // 0x2c4830: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c4830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4834:
    // 0x2c4834: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c4834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4838:
    // 0x2c4838: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c4838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c483c:
    // 0x2c483c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c483cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4840:
    // 0x2c4840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4844:
    // 0x2c4844: 0x3e00008  jr          $ra
label_2c4848:
    if (ctx->pc == 0x2C4848u) {
        ctx->pc = 0x2C4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4844u;
        // 0x2c4848: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C484Cu;
        goto label_2c484c;
    }
    ctx->pc = 0x2C4844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4844u;
        // 0x2c4848: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C484Cu;
label_2c484c:
    // 0x2c484c: 0x0  nop
    ctx->pc = 0x2c484cu;
    // NOP
    ctx->pc = 0x2c4850u;
}
