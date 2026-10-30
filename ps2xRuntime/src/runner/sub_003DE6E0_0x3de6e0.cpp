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

// Function: sub_003DE6E0
// Address: 0x3de6e0 - 0x3de858
void sub_003DE6E0_0x3de6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE6E0_0x3de6e0");
#endif

    switch (ctx->pc) {
        case 0x3de6e0u: goto label_3de6e0;
        case 0x3de6e4u: goto label_3de6e4;
        case 0x3de6e8u: goto label_3de6e8;
        case 0x3de6ecu: goto label_3de6ec;
        case 0x3de6f0u: goto label_3de6f0;
        case 0x3de6f4u: goto label_3de6f4;
        case 0x3de6f8u: goto label_3de6f8;
        case 0x3de6fcu: goto label_3de6fc;
        case 0x3de700u: goto label_3de700;
        case 0x3de704u: goto label_3de704;
        case 0x3de708u: goto label_3de708;
        case 0x3de70cu: goto label_3de70c;
        case 0x3de710u: goto label_3de710;
        case 0x3de714u: goto label_3de714;
        case 0x3de718u: goto label_3de718;
        case 0x3de71cu: goto label_3de71c;
        case 0x3de720u: goto label_3de720;
        case 0x3de724u: goto label_3de724;
        case 0x3de728u: goto label_3de728;
        case 0x3de72cu: goto label_3de72c;
        case 0x3de730u: goto label_3de730;
        case 0x3de734u: goto label_3de734;
        case 0x3de738u: goto label_3de738;
        case 0x3de73cu: goto label_3de73c;
        case 0x3de740u: goto label_3de740;
        case 0x3de744u: goto label_3de744;
        case 0x3de748u: goto label_3de748;
        case 0x3de74cu: goto label_3de74c;
        case 0x3de750u: goto label_3de750;
        case 0x3de754u: goto label_3de754;
        case 0x3de758u: goto label_3de758;
        case 0x3de75cu: goto label_3de75c;
        case 0x3de760u: goto label_3de760;
        case 0x3de764u: goto label_3de764;
        case 0x3de768u: goto label_3de768;
        case 0x3de76cu: goto label_3de76c;
        case 0x3de770u: goto label_3de770;
        case 0x3de774u: goto label_3de774;
        case 0x3de778u: goto label_3de778;
        case 0x3de77cu: goto label_3de77c;
        case 0x3de780u: goto label_3de780;
        case 0x3de784u: goto label_3de784;
        case 0x3de788u: goto label_3de788;
        case 0x3de78cu: goto label_3de78c;
        case 0x3de790u: goto label_3de790;
        case 0x3de794u: goto label_3de794;
        case 0x3de798u: goto label_3de798;
        case 0x3de79cu: goto label_3de79c;
        case 0x3de7a0u: goto label_3de7a0;
        case 0x3de7a4u: goto label_3de7a4;
        case 0x3de7a8u: goto label_3de7a8;
        case 0x3de7acu: goto label_3de7ac;
        case 0x3de7b0u: goto label_3de7b0;
        case 0x3de7b4u: goto label_3de7b4;
        case 0x3de7b8u: goto label_3de7b8;
        case 0x3de7bcu: goto label_3de7bc;
        case 0x3de7c0u: goto label_3de7c0;
        case 0x3de7c4u: goto label_3de7c4;
        case 0x3de7c8u: goto label_3de7c8;
        case 0x3de7ccu: goto label_3de7cc;
        case 0x3de7d0u: goto label_3de7d0;
        case 0x3de7d4u: goto label_3de7d4;
        case 0x3de7d8u: goto label_3de7d8;
        case 0x3de7dcu: goto label_3de7dc;
        case 0x3de7e0u: goto label_3de7e0;
        case 0x3de7e4u: goto label_3de7e4;
        case 0x3de7e8u: goto label_3de7e8;
        case 0x3de7ecu: goto label_3de7ec;
        case 0x3de7f0u: goto label_3de7f0;
        case 0x3de7f4u: goto label_3de7f4;
        case 0x3de7f8u: goto label_3de7f8;
        case 0x3de7fcu: goto label_3de7fc;
        case 0x3de800u: goto label_3de800;
        case 0x3de804u: goto label_3de804;
        case 0x3de808u: goto label_3de808;
        case 0x3de80cu: goto label_3de80c;
        case 0x3de810u: goto label_3de810;
        case 0x3de814u: goto label_3de814;
        case 0x3de818u: goto label_3de818;
        case 0x3de81cu: goto label_3de81c;
        case 0x3de820u: goto label_3de820;
        case 0x3de824u: goto label_3de824;
        case 0x3de828u: goto label_3de828;
        case 0x3de82cu: goto label_3de82c;
        case 0x3de830u: goto label_3de830;
        case 0x3de834u: goto label_3de834;
        case 0x3de838u: goto label_3de838;
        case 0x3de83cu: goto label_3de83c;
        case 0x3de840u: goto label_3de840;
        case 0x3de844u: goto label_3de844;
        case 0x3de848u: goto label_3de848;
        case 0x3de84cu: goto label_3de84c;
        case 0x3de850u: goto label_3de850;
        case 0x3de854u: goto label_3de854;
        default: break;
    }

    ctx->pc = 0x3de6e0u;

label_3de6e0:
    // 0x3de6e0: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x3de6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_3de6e4:
    // 0x3de6e4: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3de6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3de6e8:
    // 0x3de6e8: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3de6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3de6ec:
    // 0x3de6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de6f0:
    // 0x3de6f0: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3de6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3de6f4:
    // 0x3de6f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3de6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3de6f8:
    // 0x3de6f8: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3de6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3de6fc:
    // 0x3de6fc: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x3de6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
label_3de700:
    // 0x3de700: 0xe7b404d0  swc1        $f20, 0x4D0($sp)
    ctx->pc = 0x3de700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_3de704:
    // 0x3de704: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x3de704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_3de708:
    // 0x3de708: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de70c:
    // 0x3de70c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3de70cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3de710:
    // 0x3de710: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3de710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3de714:
    // 0x3de714: 0x40f809  jalr        $v0
label_3de718:
    if (ctx->pc == 0x3DE718u) {
        ctx->pc = 0x3DE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE714u;
        // 0x3de718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE71Cu;
        goto label_3de71c;
    }
    ctx->pc = 0x3DE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE71Cu);
        ctx->pc = 0x3DE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE714u;
        // 0x3de718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE714u, 0x3DE71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE71Cu;
label_3de71c:
    // 0x3de71c: 0x24030480  addiu       $v1, $zero, 0x480
    ctx->pc = 0x3de71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_3de720:
    // 0x3de720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3de720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de724:
    // 0x3de724: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3de724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3de728:
    // 0x3de728: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3de728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3de72c:
    // 0x3de72c: 0xc0e858c  jal         func_3A1630
label_3de730:
    if (ctx->pc == 0x3DE730u) {
        ctx->pc = 0x3DE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE72Cu;
        // 0x3de730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE734u;
        goto label_3de734;
    }
    ctx->pc = 0x3DE72Cu;
    SET_GPR_U32(ctx, 31, 0x3DE734u);
    ctx->pc = 0x3DE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE72Cu;
    // 0x3de730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DE72Cu, 0x3DE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE734u;
label_3de734:
    // 0x3de734: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3de734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3de738:
    // 0x3de738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3de738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de73c:
    // 0x3de73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3de73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de740:
    // 0x3de740: 0xc0ea13a  jal         func_3A84E8
label_3de744:
    if (ctx->pc == 0x3DE744u) {
        ctx->pc = 0x3DE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE740u;
        // 0x3de744: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE748u;
        goto label_3de748;
    }
    ctx->pc = 0x3DE740u;
    SET_GPR_U32(ctx, 31, 0x3DE748u);
    ctx->pc = 0x3DE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE740u;
    // 0x3de744: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DE740u, 0x3DE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE748u;
label_3de748:
    // 0x3de748: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3de748u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3de74c:
    // 0x3de74c: 0xc0ea146  jal         func_3A8518
label_3de750:
    if (ctx->pc == 0x3DE750u) {
        ctx->pc = 0x3DE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE74Cu;
        // 0x3de750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE754u;
        goto label_3de754;
    }
    ctx->pc = 0x3DE74Cu;
    SET_GPR_U32(ctx, 31, 0x3DE754u);
    ctx->pc = 0x3DE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE74Cu;
    // 0x3de750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE74Cu, 0x3DE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE754u;
label_3de754:
    // 0x3de754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3de754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de758:
    // 0x3de758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3de758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de75c:
    // 0x3de75c: 0xc0ea12a  jal         func_3A84A8
label_3de760:
    if (ctx->pc == 0x3DE760u) {
        ctx->pc = 0x3DE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE75Cu;
        // 0x3de760: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE764u;
        goto label_3de764;
    }
    ctx->pc = 0x3DE75Cu;
    SET_GPR_U32(ctx, 31, 0x3DE764u);
    ctx->pc = 0x3DE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE75Cu;
    // 0x3de760: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE75Cu, 0x3DE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE764u;
label_3de764:
    // 0x3de764: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3de764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3de768:
    // 0x3de768: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3de768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3de76c:
    // 0x3de76c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3de76cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de770:
    // 0x3de770: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3de770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3de774:
    // 0x3de774: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3de774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3de778:
    // 0x3de778: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x3de778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3de77c:
    // 0x3de77c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3de77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3de780:
    // 0x3de780: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3de780u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3de784:
    // 0x3de784: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x3de784u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
label_3de788:
    // 0x3de788: 0x263152a0  addiu       $s1, $s1, 0x52A0
    ctx->pc = 0x3de788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21152));
label_3de78c:
    // 0x3de78c: 0xae120080  sw          $s2, 0x80($s0)
    ctx->pc = 0x3de78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 18));
label_3de790:
    // 0x3de790: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3de790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de794:
    // 0x3de794: 0xe614008c  swc1        $f20, 0x8C($s0)
    ctx->pc = 0x3de794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3de798:
    // 0x3de798: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x3de798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_3de79c:
    // 0x3de79c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3de79cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3de7a0:
    // 0x3de7a0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3de7a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3de7a4:
    // 0x3de7a4: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3de7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_3de7a8:
    // 0x3de7a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3de7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3de7ac:
    // 0x3de7ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3de7acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3de7b0:
    // 0x3de7b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3de7b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3de7b4:
    // 0x3de7b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3de7b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3de7b8:
    // 0x3de7b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3de7b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3de7bc:
    // 0x3de7bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3de7bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3de7c0:
    // 0x3de7c0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3de7c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3de7c4:
    // 0x3de7c4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3de7c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3de7c8:
    // 0x3de7c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3de7c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3de7cc:
    // 0x3de7cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3de7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3de7d0:
    // 0x3de7d0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3de7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3de7d4:
    // 0x3de7d4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3de7d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3de7d8:
    // 0x3de7d8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3de7d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3de7dc:
    // 0x3de7dc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3de7dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3de7e0:
    // 0x3de7e0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3de7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3de7e4:
    // 0x3de7e4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3de7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3de7e8:
    // 0x3de7e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3de7e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3de7ec:
    // 0x3de7ec: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3de7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3de7f0:
    // 0x3de7f0: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3de7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3de7f4:
    // 0x3de7f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3de7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3de7f8:
    // 0x3de7f8: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3de7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3de7fc:
    // 0x3de7fc: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3de7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3de800:
    // 0x3de800: 0xc136b18  jal         func_4DAC60
label_3de804:
    if (ctx->pc == 0x3DE804u) {
        ctx->pc = 0x3DE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE800u;
        // 0x3de804: 0x27a60440  addiu       $a2, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE808u;
        goto label_3de808;
    }
    ctx->pc = 0x3DE800u;
    SET_GPR_U32(ctx, 31, 0x3DE808u);
    ctx->pc = 0x3DE804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE800u;
    // 0x3de804: 0x27a60440  addiu       $a2, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DE800u, 0x3DE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE808u;
label_3de808:
    // 0x3de808: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3de808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3de80c:
    // 0x3de80c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3de80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3de810:
    // 0x3de810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de814:
    // 0x3de814: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3de814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3de818:
    // 0x3de818: 0xc0e9f6a  jal         func_3A7DA8
label_3de81c:
    if (ctx->pc == 0x3DE81Cu) {
        ctx->pc = 0x3DE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE818u;
        // 0x3de81c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE820u;
        goto label_3de820;
    }
    ctx->pc = 0x3DE818u;
    SET_GPR_U32(ctx, 31, 0x3DE820u);
    ctx->pc = 0x3DE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE818u;
    // 0x3de81c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3DE818u, 0x3DE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE820u;
label_3de820:
    // 0x3de820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3de820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de824:
    // 0x3de824: 0xc0f15bc  jal         func_3C56F0
label_3de828:
    if (ctx->pc == 0x3DE828u) {
        ctx->pc = 0x3DE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE824u;
        // 0x3de828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE82Cu;
        goto label_3de82c;
    }
    ctx->pc = 0x3DE824u;
    SET_GPR_U32(ctx, 31, 0x3DE82Cu);
    ctx->pc = 0x3DE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE824u;
    // 0x3de828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DE824u, 0x3DE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE82Cu;
label_3de82c:
    // 0x3de82c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3de82cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3de830:
    // 0x3de830: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3de830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3de834:
    // 0x3de834: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3de834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3de838:
    // 0x3de838: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3de838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3de83c:
    // 0x3de83c: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3de83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3de840:
    // 0x3de840: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x3de840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3de844:
    // 0x3de844: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3de844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3de848:
    // 0x3de848: 0xc7b404d0  lwc1        $f20, 0x4D0($sp)
    ctx->pc = 0x3de848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3de84c:
    // 0x3de84c: 0x3e00008  jr          $ra
label_3de850:
    if (ctx->pc == 0x3DE850u) {
        ctx->pc = 0x3DE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE84Cu;
        // 0x3de850: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE854u;
        goto label_3de854;
    }
    ctx->pc = 0x3DE84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE84Cu;
        // 0x3de850: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE854u;
label_3de854:
    // 0x3de854: 0x0  nop
    ctx->pc = 0x3de854u;
    // NOP
    ctx->pc = 0x3de858u;
}
