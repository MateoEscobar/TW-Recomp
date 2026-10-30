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

// Function: sub_003F2700
// Address: 0x3f2700 - 0x3f2870
void sub_003F2700_0x3f2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2700_0x3f2700");
#endif

    switch (ctx->pc) {
        case 0x3f2700u: goto label_3f2700;
        case 0x3f2704u: goto label_3f2704;
        case 0x3f2708u: goto label_3f2708;
        case 0x3f270cu: goto label_3f270c;
        case 0x3f2710u: goto label_3f2710;
        case 0x3f2714u: goto label_3f2714;
        case 0x3f2718u: goto label_3f2718;
        case 0x3f271cu: goto label_3f271c;
        case 0x3f2720u: goto label_3f2720;
        case 0x3f2724u: goto label_3f2724;
        case 0x3f2728u: goto label_3f2728;
        case 0x3f272cu: goto label_3f272c;
        case 0x3f2730u: goto label_3f2730;
        case 0x3f2734u: goto label_3f2734;
        case 0x3f2738u: goto label_3f2738;
        case 0x3f273cu: goto label_3f273c;
        case 0x3f2740u: goto label_3f2740;
        case 0x3f2744u: goto label_3f2744;
        case 0x3f2748u: goto label_3f2748;
        case 0x3f274cu: goto label_3f274c;
        case 0x3f2750u: goto label_3f2750;
        case 0x3f2754u: goto label_3f2754;
        case 0x3f2758u: goto label_3f2758;
        case 0x3f275cu: goto label_3f275c;
        case 0x3f2760u: goto label_3f2760;
        case 0x3f2764u: goto label_3f2764;
        case 0x3f2768u: goto label_3f2768;
        case 0x3f276cu: goto label_3f276c;
        case 0x3f2770u: goto label_3f2770;
        case 0x3f2774u: goto label_3f2774;
        case 0x3f2778u: goto label_3f2778;
        case 0x3f277cu: goto label_3f277c;
        case 0x3f2780u: goto label_3f2780;
        case 0x3f2784u: goto label_3f2784;
        case 0x3f2788u: goto label_3f2788;
        case 0x3f278cu: goto label_3f278c;
        case 0x3f2790u: goto label_3f2790;
        case 0x3f2794u: goto label_3f2794;
        case 0x3f2798u: goto label_3f2798;
        case 0x3f279cu: goto label_3f279c;
        case 0x3f27a0u: goto label_3f27a0;
        case 0x3f27a4u: goto label_3f27a4;
        case 0x3f27a8u: goto label_3f27a8;
        case 0x3f27acu: goto label_3f27ac;
        case 0x3f27b0u: goto label_3f27b0;
        case 0x3f27b4u: goto label_3f27b4;
        case 0x3f27b8u: goto label_3f27b8;
        case 0x3f27bcu: goto label_3f27bc;
        case 0x3f27c0u: goto label_3f27c0;
        case 0x3f27c4u: goto label_3f27c4;
        case 0x3f27c8u: goto label_3f27c8;
        case 0x3f27ccu: goto label_3f27cc;
        case 0x3f27d0u: goto label_3f27d0;
        case 0x3f27d4u: goto label_3f27d4;
        case 0x3f27d8u: goto label_3f27d8;
        case 0x3f27dcu: goto label_3f27dc;
        case 0x3f27e0u: goto label_3f27e0;
        case 0x3f27e4u: goto label_3f27e4;
        case 0x3f27e8u: goto label_3f27e8;
        case 0x3f27ecu: goto label_3f27ec;
        case 0x3f27f0u: goto label_3f27f0;
        case 0x3f27f4u: goto label_3f27f4;
        case 0x3f27f8u: goto label_3f27f8;
        case 0x3f27fcu: goto label_3f27fc;
        case 0x3f2800u: goto label_3f2800;
        case 0x3f2804u: goto label_3f2804;
        case 0x3f2808u: goto label_3f2808;
        case 0x3f280cu: goto label_3f280c;
        case 0x3f2810u: goto label_3f2810;
        case 0x3f2814u: goto label_3f2814;
        case 0x3f2818u: goto label_3f2818;
        case 0x3f281cu: goto label_3f281c;
        case 0x3f2820u: goto label_3f2820;
        case 0x3f2824u: goto label_3f2824;
        case 0x3f2828u: goto label_3f2828;
        case 0x3f282cu: goto label_3f282c;
        case 0x3f2830u: goto label_3f2830;
        case 0x3f2834u: goto label_3f2834;
        case 0x3f2838u: goto label_3f2838;
        case 0x3f283cu: goto label_3f283c;
        case 0x3f2840u: goto label_3f2840;
        case 0x3f2844u: goto label_3f2844;
        case 0x3f2848u: goto label_3f2848;
        case 0x3f284cu: goto label_3f284c;
        case 0x3f2850u: goto label_3f2850;
        case 0x3f2854u: goto label_3f2854;
        case 0x3f2858u: goto label_3f2858;
        case 0x3f285cu: goto label_3f285c;
        case 0x3f2860u: goto label_3f2860;
        case 0x3f2864u: goto label_3f2864;
        case 0x3f2868u: goto label_3f2868;
        case 0x3f286cu: goto label_3f286c;
        default: break;
    }

    ctx->pc = 0x3f2700u;

label_3f2700:
    // 0x3f2700: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f2700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f2704:
    // 0x3f2704: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f2704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3f2708:
    // 0x3f2708: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3f270c:
    // 0x3f270c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f270cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2710:
    // 0x3f2710: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f2710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3f2714:
    // 0x3f2714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f2714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2718:
    // 0x3f2718: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3f271c:
    // 0x3f271c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f2720:
    // 0x3f2720: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f2720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f2724:
    // 0x3f2724: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2728:
    // 0x3f2728: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f272c:
    // 0x3f272c: 0x40f809  jalr        $v0
label_3f2730:
    if (ctx->pc == 0x3F2730u) {
        ctx->pc = 0x3F2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F272Cu;
        // 0x3f2730: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2734u;
        goto label_3f2734;
    }
    ctx->pc = 0x3F272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2734u);
        ctx->pc = 0x3F2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F272Cu;
        // 0x3f2730: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F272Cu, 0x3F2734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2734u;
label_3f2734:
    // 0x3f2734: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f2734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2738:
    // 0x3f2738: 0xc0ea14c  jal         func_3A8530
label_3f273c:
    if (ctx->pc == 0x3F273Cu) {
        ctx->pc = 0x3F273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2738u;
        // 0x3f273c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2740u;
        goto label_3f2740;
    }
    ctx->pc = 0x3F2738u;
    SET_GPR_U32(ctx, 31, 0x3F2740u);
    ctx->pc = 0x3F273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2738u;
    // 0x3f273c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F2738u, 0x3F2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2740u;
label_3f2740:
    // 0x3f2740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f2740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f2744:
    // 0x3f2744: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f2744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2748:
    // 0x3f2748: 0xc0ea12a  jal         func_3A84A8
label_3f274c:
    if (ctx->pc == 0x3F274Cu) {
        ctx->pc = 0x3F274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2748u;
        // 0x3f274c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2750u;
        goto label_3f2750;
    }
    ctx->pc = 0x3F2748u;
    SET_GPR_U32(ctx, 31, 0x3F2750u);
    ctx->pc = 0x3F274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2748u;
    // 0x3f274c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2748u, 0x3F2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2750u;
label_3f2750:
    // 0x3f2750: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f2750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f2754:
    // 0x3f2754: 0xc0ea12a  jal         func_3A84A8
label_3f2758:
    if (ctx->pc == 0x3F2758u) {
        ctx->pc = 0x3F2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2754u;
        // 0x3f2758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F275Cu;
        goto label_3f275c;
    }
    ctx->pc = 0x3F2754u;
    SET_GPR_U32(ctx, 31, 0x3F275Cu);
    ctx->pc = 0x3F2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2754u;
    // 0x3f2758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2754u, 0x3F275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F275Cu;
label_3f275c:
    // 0x3f275c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f2760:
    // 0x3f2760: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3f2760u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2764:
    // 0x3f2764: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3f2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3f2768:
    // 0x3f2768: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3f2768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3f276c:
    // 0x3f276c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3f276cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3f2770:
    // 0x3f2770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f2770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f2774:
    // 0x3f2774: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f2774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f2778:
    // 0x3f2778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f277c:
    // 0x3f277c: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3f277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3f2780:
    // 0x3f2780: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f2780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f2784:
    // 0x3f2784: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3f2784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3f2788:
    // 0x3f2788: 0xc0e858c  jal         func_3A1630
label_3f278c:
    if (ctx->pc == 0x3F278Cu) {
        ctx->pc = 0x3F278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2788u;
        // 0x3f278c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2790u;
        goto label_3f2790;
    }
    ctx->pc = 0x3F2788u;
    SET_GPR_U32(ctx, 31, 0x3F2790u);
    ctx->pc = 0x3F278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2788u;
    // 0x3f278c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F2788u, 0x3F2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2790u;
label_3f2790:
    // 0x3f2790: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3f2790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3f2794:
    // 0x3f2794: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3f2794u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2798:
    // 0x3f2798: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f2798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f279c:
    // 0x3f279c: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x3f279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_3f27a0:
    // 0x3f27a0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f27a4:
    // 0x3f27a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f27a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f27a8:
    // 0x3f27a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f27ac:
    // 0x3f27ac: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3f27acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3f27b0:
    // 0x3f27b0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3f27b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3f27b4:
    // 0x3f27b4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3f27b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3f27b8:
    // 0x3f27b8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3f27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3f27bc:
    // 0x3f27bc: 0x60f809  jalr        $v1
label_3f27c0:
    if (ctx->pc == 0x3F27C0u) {
        ctx->pc = 0x3F27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27BCu;
        // 0x3f27c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F27C4u;
        goto label_3f27c4;
    }
    ctx->pc = 0x3F27BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F27C4u);
        ctx->pc = 0x3F27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27BCu;
        // 0x3f27c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F27BCu, 0x3F27C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F27C4u;
label_3f27c4:
    // 0x3f27c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f27c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f27c8:
    // 0x3f27c8: 0xc0e9132  jal         func_3A44C8
label_3f27cc:
    if (ctx->pc == 0x3F27CCu) {
        ctx->pc = 0x3F27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27C8u;
        // 0x3f27cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F27D0u;
        goto label_3f27d0;
    }
    ctx->pc = 0x3F27C8u;
    SET_GPR_U32(ctx, 31, 0x3F27D0u);
    ctx->pc = 0x3F27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F27C8u;
    // 0x3f27cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F27C8u, 0x3F27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F27D0u;
label_3f27d0:
    // 0x3f27d0: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3f27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3f27d4:
    // 0x3f27d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f27d8:
    // 0x3f27d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f27dc:
    // 0x3f27dc: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3f27dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3f27e0:
    // 0x3f27e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f27e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f27e4:
    // 0x3f27e4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3f27e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3f27e8:
    // 0x3f27e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3f27e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3f27ec:
    // 0x3f27ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3f27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3f27f0:
    // 0x3f27f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f27f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f27f4:
    // 0x3f27f4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3f27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3f27f8:
    // 0x3f27f8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3f27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3f27fc:
    // 0x3f27fc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3f27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3f2800:
    // 0x3f2800: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f2800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f2804:
    // 0x3f2804: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x3f2804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3f2808:
    // 0x3f2808: 0xc1073cc  jal         func_41CF30
label_3f280c:
    if (ctx->pc == 0x3F280Cu) {
        ctx->pc = 0x3F280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2808u;
        // 0x3f280c: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2810u;
        goto label_3f2810;
    }
    ctx->pc = 0x3F2808u;
    SET_GPR_U32(ctx, 31, 0x3F2810u);
    ctx->pc = 0x3F280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2808u;
    // 0x3f280c: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3F2808u, 0x3F2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2810u;
label_3f2810:
    // 0x3f2810: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3f2810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3f2814:
    // 0x3f2814: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3f2818:
    if (ctx->pc == 0x3F2818u) {
        ctx->pc = 0x3F2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2814u;
        // 0x3f2818: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F281Cu;
        goto label_3f281c;
    }
    ctx->pc = 0x3F2814u;
    {
        const bool branch_taken_0x3f2814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2814u;
        // 0x3f2818: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2814) {
            ctx->pc = 0x3F2820u;
            goto label_3f2820;
        }
    }
    ctx->pc = 0x3F281Cu;
label_3f281c:
    // 0x3f281c: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x3f281cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_3f2820:
    // 0x3f2820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f2820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f2824:
    // 0x3f2824: 0xc0fc8fe  jal         func_3F23F8
label_3f2828:
    if (ctx->pc == 0x3F2828u) {
        ctx->pc = 0x3F2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2824u;
        // 0x3f2828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F282Cu;
        goto label_3f282c;
    }
    ctx->pc = 0x3F2824u;
    SET_GPR_U32(ctx, 31, 0x3F282Cu);
    ctx->pc = 0x3F2828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2824u;
    // 0x3f2828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F23F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F23F8u, 0x3F2824u, 0x3F282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F282Cu;
label_3f282c:
    // 0x3f282c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_3f2830:
    if (ctx->pc == 0x3F2830u) {
        ctx->pc = 0x3F2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F282Cu;
        // 0x3f2830: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2834u;
        goto label_3f2834;
    }
    ctx->pc = 0x3F282Cu;
    {
        const bool branch_taken_0x3f282c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F282Cu;
        // 0x3f2830: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f282c) {
            ctx->pc = 0x3F2854u;
            goto label_3f2854;
        }
    }
    ctx->pc = 0x3F2834u;
label_3f2834:
    // 0x3f2834: 0xc0e57ce  jal         func_395F38
label_3f2838:
    if (ctx->pc == 0x3F2838u) {
        ctx->pc = 0x3F2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2834u;
        // 0x3f2838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F283Cu;
        goto label_3f283c;
    }
    ctx->pc = 0x3F2834u;
    SET_GPR_U32(ctx, 31, 0x3F283Cu);
    ctx->pc = 0x3F2838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2834u;
    // 0x3f2838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3F2834u, 0x3F283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F283Cu;
label_3f283c:
    // 0x3f283c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3f2840:
    if (ctx->pc == 0x3F2840u) {
        ctx->pc = 0x3F2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F283Cu;
        // 0x3f2840: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2844u;
        goto label_3f2844;
    }
    ctx->pc = 0x3F283Cu;
    {
        const bool branch_taken_0x3f283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F283Cu;
        // 0x3f2840: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f283c) {
            ctx->pc = 0x3F2850u;
            goto label_3f2850;
        }
    }
    ctx->pc = 0x3F2844u;
label_3f2844:
    // 0x3f2844: 0xc0e2612  jal         func_389848
label_3f2848:
    if (ctx->pc == 0x3F2848u) {
        ctx->pc = 0x3F2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2844u;
        // 0x3f2848: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F284Cu;
        goto label_3f284c;
    }
    ctx->pc = 0x3F2844u;
    SET_GPR_U32(ctx, 31, 0x3F284Cu);
    ctx->pc = 0x3F2848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2844u;
    // 0x3f2848: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x3F2844u, 0x3F284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F284Cu;
label_3f284c:
    // 0x3f284c: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3f284cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3f2850:
    // 0x3f2850: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f2850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f2854:
    // 0x3f2854: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f2854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f2858:
    // 0x3f2858: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f2858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f285c:
    // 0x3f285c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f285cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f2860:
    // 0x3f2860: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f2860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f2864:
    // 0x3f2864: 0x3e00008  jr          $ra
label_3f2868:
    if (ctx->pc == 0x3F2868u) {
        ctx->pc = 0x3F2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2864u;
        // 0x3f2868: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F286Cu;
        goto label_3f286c;
    }
    ctx->pc = 0x3F2864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2864u;
        // 0x3f2868: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F286Cu;
label_3f286c:
    // 0x3f286c: 0x0  nop
    ctx->pc = 0x3f286cu;
    // NOP
    ctx->pc = 0x3f2870u;
}
