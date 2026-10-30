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

// Function: sub_0020A6C8
// Address: 0x20a6c8 - 0x20a7a8
void sub_0020A6C8_0x20a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A6C8_0x20a6c8");
#endif

    switch (ctx->pc) {
        case 0x20a6c8u: goto label_20a6c8;
        case 0x20a6ccu: goto label_20a6cc;
        case 0x20a6d0u: goto label_20a6d0;
        case 0x20a6d4u: goto label_20a6d4;
        case 0x20a6d8u: goto label_20a6d8;
        case 0x20a6dcu: goto label_20a6dc;
        case 0x20a6e0u: goto label_20a6e0;
        case 0x20a6e4u: goto label_20a6e4;
        case 0x20a6e8u: goto label_20a6e8;
        case 0x20a6ecu: goto label_20a6ec;
        case 0x20a6f0u: goto label_20a6f0;
        case 0x20a6f4u: goto label_20a6f4;
        case 0x20a6f8u: goto label_20a6f8;
        case 0x20a6fcu: goto label_20a6fc;
        case 0x20a700u: goto label_20a700;
        case 0x20a704u: goto label_20a704;
        case 0x20a708u: goto label_20a708;
        case 0x20a70cu: goto label_20a70c;
        case 0x20a710u: goto label_20a710;
        case 0x20a714u: goto label_20a714;
        case 0x20a718u: goto label_20a718;
        case 0x20a71cu: goto label_20a71c;
        case 0x20a720u: goto label_20a720;
        case 0x20a724u: goto label_20a724;
        case 0x20a728u: goto label_20a728;
        case 0x20a72cu: goto label_20a72c;
        case 0x20a730u: goto label_20a730;
        case 0x20a734u: goto label_20a734;
        case 0x20a738u: goto label_20a738;
        case 0x20a73cu: goto label_20a73c;
        case 0x20a740u: goto label_20a740;
        case 0x20a744u: goto label_20a744;
        case 0x20a748u: goto label_20a748;
        case 0x20a74cu: goto label_20a74c;
        case 0x20a750u: goto label_20a750;
        case 0x20a754u: goto label_20a754;
        case 0x20a758u: goto label_20a758;
        case 0x20a75cu: goto label_20a75c;
        case 0x20a760u: goto label_20a760;
        case 0x20a764u: goto label_20a764;
        case 0x20a768u: goto label_20a768;
        case 0x20a76cu: goto label_20a76c;
        case 0x20a770u: goto label_20a770;
        case 0x20a774u: goto label_20a774;
        case 0x20a778u: goto label_20a778;
        case 0x20a77cu: goto label_20a77c;
        case 0x20a780u: goto label_20a780;
        case 0x20a784u: goto label_20a784;
        case 0x20a788u: goto label_20a788;
        case 0x20a78cu: goto label_20a78c;
        case 0x20a790u: goto label_20a790;
        case 0x20a794u: goto label_20a794;
        case 0x20a798u: goto label_20a798;
        case 0x20a79cu: goto label_20a79c;
        case 0x20a7a0u: goto label_20a7a0;
        case 0x20a7a4u: goto label_20a7a4;
        default: break;
    }

    ctx->pc = 0x20a6c8u;

label_20a6c8:
    // 0x20a6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20a6cc:
    // 0x20a6cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20a6d0:
    // 0x20a6d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20a6d4:
    // 0x20a6d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20a6d8:
    // 0x20a6d8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20a6dc:
    // 0x20a6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a6e0:
    // 0x20a6e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20a6e4:
    // 0x20a6e4: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x20a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
label_20a6e8:
    // 0x20a6e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20a6ec:
    // 0x20a6ec: 0x2463e498  addiu       $v1, $v1, -0x1B68
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960280));
label_20a6f0:
    // 0x20a6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a6f4:
    // 0x20a6f4: 0x24c6e4c8  addiu       $a2, $a2, -0x1B38
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960328));
label_20a6f8:
    // 0x20a6f8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x20a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20a6fc:
    // 0x20a6fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20a6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20a700:
    // 0x20a700: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x20a700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20a704:
    // 0x20a704: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20a704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_20a708:
    // 0x20a708: 0xc082b12  jal         func_20AC48
label_20a70c:
    if (ctx->pc == 0x20A70Cu) {
        ctx->pc = 0x20A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A708u;
        // 0x20a70c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A710u;
        goto label_20a710;
    }
    ctx->pc = 0x20A708u;
    SET_GPR_U32(ctx, 31, 0x20A710u);
    ctx->pc = 0x20A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A708u;
    // 0x20a70c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC48u, 0x20A708u, 0x20A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A710u;
label_20a710:
    // 0x20a710: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20a714:
    // 0x20a714: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_20a718:
    // 0x20a718: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x20a718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20a71c:
    // 0x20a71c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20a720:
    // 0x20a720: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20a724:
    if (ctx->pc == 0x20A724u) {
        ctx->pc = 0x20A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A720u;
        // 0x20a724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A728u;
        goto label_20a728;
    }
    ctx->pc = 0x20A720u;
    {
        const bool branch_taken_0x20a720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A720u;
        // 0x20a724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a720) {
            ctx->pc = 0x20A750u;
            goto label_20a750;
        }
    }
    ctx->pc = 0x20A728u;
label_20a728:
    // 0x20a728: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20a72c:
    // 0x20a72c: 0xc1376d6  jal         func_4DDB58
label_20a730:
    if (ctx->pc == 0x20A730u) {
        ctx->pc = 0x20A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A72Cu;
        // 0x20a730: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A734u;
        goto label_20a734;
    }
    ctx->pc = 0x20A72Cu;
    SET_GPR_U32(ctx, 31, 0x20A734u);
    ctx->pc = 0x20A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A72Cu;
    // 0x20a730: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20A72Cu, 0x20A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A734u;
label_20a734:
    // 0x20a734: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20a738:
    // 0x20a738: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x20a738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20a73c:
    // 0x20a73c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20a740:
    // 0x20a740: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20a740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20a744:
    // 0x20a744: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20a748:
    // 0x20a748: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x20a748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20a74c:
    // 0x20a74c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20a750:
    // 0x20a750: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20a754:
    // 0x20a754: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_20a758:
    if (ctx->pc == 0x20A758u) {
        ctx->pc = 0x20A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A754u;
        // 0x20a758: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A75Cu;
        goto label_20a75c;
    }
    ctx->pc = 0x20A754u;
    {
        const bool branch_taken_0x20a754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A754u;
        // 0x20a758: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a754) {
            ctx->pc = 0x20A780u;
            goto label_20a780;
        }
    }
    ctx->pc = 0x20A75Cu;
label_20a75c:
    // 0x20a75c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_20a760:
    // 0x20a760: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20a764:
    // 0x20a764: 0x24c69010  addiu       $a2, $a2, -0x6FF0
    ctx->pc = 0x20a764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938640));
label_20a768:
    // 0x20a768: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x20a768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20a76c:
    // 0x20a76c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20a770:
    // 0x20a770: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20a770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20a774:
    // 0x20a774: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20a778:
    // 0x20a778: 0x60f809  jalr        $v1
label_20a77c:
    if (ctx->pc == 0x20A77Cu) {
        ctx->pc = 0x20A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A778u;
        // 0x20a77c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A780u;
        goto label_20a780;
    }
    ctx->pc = 0x20A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A780u);
        ctx->pc = 0x20A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A778u;
        // 0x20a77c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A778u, 0x20A780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A780u;
label_20a780:
    // 0x20a780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a784:
    // 0x20a784: 0xc06a39e  jal         func_1A8E78
label_20a788:
    if (ctx->pc == 0x20A788u) {
        ctx->pc = 0x20A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A784u;
        // 0x20a788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A78Cu;
        goto label_20a78c;
    }
    ctx->pc = 0x20A784u;
    SET_GPR_U32(ctx, 31, 0x20A78Cu);
    ctx->pc = 0x20A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A784u;
    // 0x20a788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20A784u, 0x20A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A78Cu;
label_20a78c:
    // 0x20a78c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20a78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a790:
    // 0x20a790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20a790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a794:
    // 0x20a794: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20a794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a798:
    // 0x20a798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a79c:
    // 0x20a79c: 0x3e00008  jr          $ra
label_20a7a0:
    if (ctx->pc == 0x20A7A0u) {
        ctx->pc = 0x20A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A79Cu;
        // 0x20a7a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7A4u;
        goto label_20a7a4;
    }
    ctx->pc = 0x20A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A79Cu;
        // 0x20a7a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A7A4u;
label_20a7a4:
    // 0x20a7a4: 0x0  nop
    ctx->pc = 0x20a7a4u;
    // NOP
    ctx->pc = 0x20a7a8u;
}
