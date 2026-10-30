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

// Function: sub_003AC708
// Address: 0x3ac708 - 0x3ac7e8
void sub_003AC708_0x3ac708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC708_0x3ac708");
#endif

    switch (ctx->pc) {
        case 0x3ac708u: goto label_3ac708;
        case 0x3ac70cu: goto label_3ac70c;
        case 0x3ac710u: goto label_3ac710;
        case 0x3ac714u: goto label_3ac714;
        case 0x3ac718u: goto label_3ac718;
        case 0x3ac71cu: goto label_3ac71c;
        case 0x3ac720u: goto label_3ac720;
        case 0x3ac724u: goto label_3ac724;
        case 0x3ac728u: goto label_3ac728;
        case 0x3ac72cu: goto label_3ac72c;
        case 0x3ac730u: goto label_3ac730;
        case 0x3ac734u: goto label_3ac734;
        case 0x3ac738u: goto label_3ac738;
        case 0x3ac73cu: goto label_3ac73c;
        case 0x3ac740u: goto label_3ac740;
        case 0x3ac744u: goto label_3ac744;
        case 0x3ac748u: goto label_3ac748;
        case 0x3ac74cu: goto label_3ac74c;
        case 0x3ac750u: goto label_3ac750;
        case 0x3ac754u: goto label_3ac754;
        case 0x3ac758u: goto label_3ac758;
        case 0x3ac75cu: goto label_3ac75c;
        case 0x3ac760u: goto label_3ac760;
        case 0x3ac764u: goto label_3ac764;
        case 0x3ac768u: goto label_3ac768;
        case 0x3ac76cu: goto label_3ac76c;
        case 0x3ac770u: goto label_3ac770;
        case 0x3ac774u: goto label_3ac774;
        case 0x3ac778u: goto label_3ac778;
        case 0x3ac77cu: goto label_3ac77c;
        case 0x3ac780u: goto label_3ac780;
        case 0x3ac784u: goto label_3ac784;
        case 0x3ac788u: goto label_3ac788;
        case 0x3ac78cu: goto label_3ac78c;
        case 0x3ac790u: goto label_3ac790;
        case 0x3ac794u: goto label_3ac794;
        case 0x3ac798u: goto label_3ac798;
        case 0x3ac79cu: goto label_3ac79c;
        case 0x3ac7a0u: goto label_3ac7a0;
        case 0x3ac7a4u: goto label_3ac7a4;
        case 0x3ac7a8u: goto label_3ac7a8;
        case 0x3ac7acu: goto label_3ac7ac;
        case 0x3ac7b0u: goto label_3ac7b0;
        case 0x3ac7b4u: goto label_3ac7b4;
        case 0x3ac7b8u: goto label_3ac7b8;
        case 0x3ac7bcu: goto label_3ac7bc;
        case 0x3ac7c0u: goto label_3ac7c0;
        case 0x3ac7c4u: goto label_3ac7c4;
        case 0x3ac7c8u: goto label_3ac7c8;
        case 0x3ac7ccu: goto label_3ac7cc;
        case 0x3ac7d0u: goto label_3ac7d0;
        case 0x3ac7d4u: goto label_3ac7d4;
        case 0x3ac7d8u: goto label_3ac7d8;
        case 0x3ac7dcu: goto label_3ac7dc;
        case 0x3ac7e0u: goto label_3ac7e0;
        case 0x3ac7e4u: goto label_3ac7e4;
        default: break;
    }

    ctx->pc = 0x3ac708u;

label_3ac708:
    // 0x3ac708: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ac708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ac70c:
    // 0x3ac70c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ac70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ac710:
    // 0x3ac710: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ac710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ac714:
    // 0x3ac714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac718:
    // 0x3ac718: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ac718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ac71c:
    // 0x3ac71c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ac71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ac720:
    // 0x3ac720: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ac720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac724:
    // 0x3ac724: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ac724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac728:
    // 0x3ac728: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ac728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ac72c:
    // 0x3ac72c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ac72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ac730:
    // 0x3ac730: 0x40f809  jalr        $v0
label_3ac734:
    if (ctx->pc == 0x3AC734u) {
        ctx->pc = 0x3AC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC730u;
        // 0x3ac734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC738u;
        goto label_3ac738;
    }
    ctx->pc = 0x3AC730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC738u);
        ctx->pc = 0x3AC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC730u;
        // 0x3ac734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC730u, 0x3AC738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC738u;
label_3ac738:
    // 0x3ac738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ac738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac73c:
    // 0x3ac73c: 0xc0ea14c  jal         func_3A8530
label_3ac740:
    if (ctx->pc == 0x3AC740u) {
        ctx->pc = 0x3AC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC73Cu;
        // 0x3ac740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC744u;
        goto label_3ac744;
    }
    ctx->pc = 0x3AC73Cu;
    SET_GPR_U32(ctx, 31, 0x3AC744u);
    ctx->pc = 0x3AC740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC73Cu;
    // 0x3ac740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AC73Cu, 0x3AC744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC744u;
label_3ac744:
    // 0x3ac744: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ac744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ac748:
    // 0x3ac748: 0xc0ea12a  jal         func_3A84A8
label_3ac74c:
    if (ctx->pc == 0x3AC74Cu) {
        ctx->pc = 0x3AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC748u;
        // 0x3ac74c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC750u;
        goto label_3ac750;
    }
    ctx->pc = 0x3AC748u;
    SET_GPR_U32(ctx, 31, 0x3AC750u);
    ctx->pc = 0x3AC74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC748u;
    // 0x3ac74c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AC748u, 0x3AC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC750u;
label_3ac750:
    // 0x3ac750: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ac750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac754:
    // 0x3ac754: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ac754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ac758:
    // 0x3ac758: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ac758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac75c:
    // 0x3ac75c: 0xc0ea12a  jal         func_3A84A8
label_3ac760:
    if (ctx->pc == 0x3AC760u) {
        ctx->pc = 0x3AC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC75Cu;
        // 0x3ac760: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC764u;
        goto label_3ac764;
    }
    ctx->pc = 0x3AC75Cu;
    SET_GPR_U32(ctx, 31, 0x3AC764u);
    ctx->pc = 0x3AC760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC75Cu;
    // 0x3ac760: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AC75Cu, 0x3AC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC764u;
label_3ac764:
    // 0x3ac764: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3ac764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac768:
    // 0x3ac768: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3ac768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3ac76c:
    // 0x3ac76c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3ac76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3ac770:
    // 0x3ac770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac774:
    // 0x3ac774: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ac774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ac778:
    // 0x3ac778: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ac778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ac77c:
    // 0x3ac77c: 0xc0e858c  jal         func_3A1630
label_3ac780:
    if (ctx->pc == 0x3AC780u) {
        ctx->pc = 0x3AC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC77Cu;
        // 0x3ac780: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC784u;
        goto label_3ac784;
    }
    ctx->pc = 0x3AC77Cu;
    SET_GPR_U32(ctx, 31, 0x3AC784u);
    ctx->pc = 0x3AC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC77Cu;
    // 0x3ac780: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AC77Cu, 0x3AC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC784u;
label_3ac784:
    // 0x3ac784: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ac784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ac788:
    // 0x3ac788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac78c:
    // 0x3ac78c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3ac78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3ac790:
    // 0x3ac790: 0xc0e9132  jal         func_3A44C8
label_3ac794:
    if (ctx->pc == 0x3AC794u) {
        ctx->pc = 0x3AC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC790u;
        // 0x3ac794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC798u;
        goto label_3ac798;
    }
    ctx->pc = 0x3AC790u;
    SET_GPR_U32(ctx, 31, 0x3AC798u);
    ctx->pc = 0x3AC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC790u;
    // 0x3ac794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3AC790u, 0x3AC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC798u;
label_3ac798:
    // 0x3ac798: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ac798u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac79c:
    // 0x3ac79c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ac79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ac7a0:
    // 0x3ac7a0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ac7a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac7a4:
    // 0x3ac7a4: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x3ac7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
label_3ac7a8:
    // 0x3ac7a8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3ac7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3ac7ac:
    // 0x3ac7ac: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3ac7acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3ac7b0:
    // 0x3ac7b0: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3ac7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3ac7b4:
    // 0x3ac7b4: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x3ac7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_3ac7b8:
    // 0x3ac7b8: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x3ac7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
label_3ac7bc:
    // 0x3ac7bc: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x3ac7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_3ac7c0:
    // 0x3ac7c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ac7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ac7c4:
    // 0x3ac7c4: 0x8cc28690  lw          $v0, -0x7970($a2)
    ctx->pc = 0x3ac7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936208)));
label_3ac7c8:
    // 0x3ac7c8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x3ac7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_3ac7cc:
    // 0x3ac7cc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3ac7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3ac7d0:
    // 0x3ac7d0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x3ac7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_3ac7d4:
    // 0x3ac7d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ac7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac7d8:
    // 0x3ac7d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ac7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac7dc:
    // 0x3ac7dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ac7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac7e0:
    // 0x3ac7e0: 0x3e00008  jr          $ra
label_3ac7e4:
    if (ctx->pc == 0x3AC7E4u) {
        ctx->pc = 0x3AC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E0u;
        // 0x3ac7e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7E8u;
        goto label_fallthrough_0x3ac7e0;
    }
    ctx->pc = 0x3AC7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E0u;
        // 0x3ac7e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac7e0:
    ctx->pc = 0x3AC7E8u;
}
