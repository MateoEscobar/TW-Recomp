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

// Function: sub_003A2728
// Address: 0x3a2728 - 0x3a2a30
void sub_003A2728_0x3a2728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2728_0x3a2728");
#endif

    switch (ctx->pc) {
        case 0x3a2728u: goto label_3a2728;
        case 0x3a272cu: goto label_3a272c;
        case 0x3a2730u: goto label_3a2730;
        case 0x3a2734u: goto label_3a2734;
        case 0x3a2738u: goto label_3a2738;
        case 0x3a273cu: goto label_3a273c;
        case 0x3a2740u: goto label_3a2740;
        case 0x3a2744u: goto label_3a2744;
        case 0x3a2748u: goto label_3a2748;
        case 0x3a274cu: goto label_3a274c;
        case 0x3a2750u: goto label_3a2750;
        case 0x3a2754u: goto label_3a2754;
        case 0x3a2758u: goto label_3a2758;
        case 0x3a275cu: goto label_3a275c;
        case 0x3a2760u: goto label_3a2760;
        case 0x3a2764u: goto label_3a2764;
        case 0x3a2768u: goto label_3a2768;
        case 0x3a276cu: goto label_3a276c;
        case 0x3a2770u: goto label_3a2770;
        case 0x3a2774u: goto label_3a2774;
        case 0x3a2778u: goto label_3a2778;
        case 0x3a277cu: goto label_3a277c;
        case 0x3a2780u: goto label_3a2780;
        case 0x3a2784u: goto label_3a2784;
        case 0x3a2788u: goto label_3a2788;
        case 0x3a278cu: goto label_3a278c;
        case 0x3a2790u: goto label_3a2790;
        case 0x3a2794u: goto label_3a2794;
        case 0x3a2798u: goto label_3a2798;
        case 0x3a279cu: goto label_3a279c;
        case 0x3a27a0u: goto label_3a27a0;
        case 0x3a27a4u: goto label_3a27a4;
        case 0x3a27a8u: goto label_3a27a8;
        case 0x3a27acu: goto label_3a27ac;
        case 0x3a27b0u: goto label_3a27b0;
        case 0x3a27b4u: goto label_3a27b4;
        case 0x3a27b8u: goto label_3a27b8;
        case 0x3a27bcu: goto label_3a27bc;
        case 0x3a27c0u: goto label_3a27c0;
        case 0x3a27c4u: goto label_3a27c4;
        case 0x3a27c8u: goto label_3a27c8;
        case 0x3a27ccu: goto label_3a27cc;
        case 0x3a27d0u: goto label_3a27d0;
        case 0x3a27d4u: goto label_3a27d4;
        case 0x3a27d8u: goto label_3a27d8;
        case 0x3a27dcu: goto label_3a27dc;
        case 0x3a27e0u: goto label_3a27e0;
        case 0x3a27e4u: goto label_3a27e4;
        case 0x3a27e8u: goto label_3a27e8;
        case 0x3a27ecu: goto label_3a27ec;
        case 0x3a27f0u: goto label_3a27f0;
        case 0x3a27f4u: goto label_3a27f4;
        case 0x3a27f8u: goto label_3a27f8;
        case 0x3a27fcu: goto label_3a27fc;
        case 0x3a2800u: goto label_3a2800;
        case 0x3a2804u: goto label_3a2804;
        case 0x3a2808u: goto label_3a2808;
        case 0x3a280cu: goto label_3a280c;
        case 0x3a2810u: goto label_3a2810;
        case 0x3a2814u: goto label_3a2814;
        case 0x3a2818u: goto label_3a2818;
        case 0x3a281cu: goto label_3a281c;
        case 0x3a2820u: goto label_3a2820;
        case 0x3a2824u: goto label_3a2824;
        case 0x3a2828u: goto label_3a2828;
        case 0x3a282cu: goto label_3a282c;
        case 0x3a2830u: goto label_3a2830;
        case 0x3a2834u: goto label_3a2834;
        case 0x3a2838u: goto label_3a2838;
        case 0x3a283cu: goto label_3a283c;
        case 0x3a2840u: goto label_3a2840;
        case 0x3a2844u: goto label_3a2844;
        case 0x3a2848u: goto label_3a2848;
        case 0x3a284cu: goto label_3a284c;
        case 0x3a2850u: goto label_3a2850;
        case 0x3a2854u: goto label_3a2854;
        case 0x3a2858u: goto label_3a2858;
        case 0x3a285cu: goto label_3a285c;
        case 0x3a2860u: goto label_3a2860;
        case 0x3a2864u: goto label_3a2864;
        case 0x3a2868u: goto label_3a2868;
        case 0x3a286cu: goto label_3a286c;
        case 0x3a2870u: goto label_3a2870;
        case 0x3a2874u: goto label_3a2874;
        case 0x3a2878u: goto label_3a2878;
        case 0x3a287cu: goto label_3a287c;
        case 0x3a2880u: goto label_3a2880;
        case 0x3a2884u: goto label_3a2884;
        case 0x3a2888u: goto label_3a2888;
        case 0x3a288cu: goto label_3a288c;
        case 0x3a2890u: goto label_3a2890;
        case 0x3a2894u: goto label_3a2894;
        case 0x3a2898u: goto label_3a2898;
        case 0x3a289cu: goto label_3a289c;
        case 0x3a28a0u: goto label_3a28a0;
        case 0x3a28a4u: goto label_3a28a4;
        case 0x3a28a8u: goto label_3a28a8;
        case 0x3a28acu: goto label_3a28ac;
        case 0x3a28b0u: goto label_3a28b0;
        case 0x3a28b4u: goto label_3a28b4;
        case 0x3a28b8u: goto label_3a28b8;
        case 0x3a28bcu: goto label_3a28bc;
        case 0x3a28c0u: goto label_3a28c0;
        case 0x3a28c4u: goto label_3a28c4;
        case 0x3a28c8u: goto label_3a28c8;
        case 0x3a28ccu: goto label_3a28cc;
        case 0x3a28d0u: goto label_3a28d0;
        case 0x3a28d4u: goto label_3a28d4;
        case 0x3a28d8u: goto label_3a28d8;
        case 0x3a28dcu: goto label_3a28dc;
        case 0x3a28e0u: goto label_3a28e0;
        case 0x3a28e4u: goto label_3a28e4;
        case 0x3a28e8u: goto label_3a28e8;
        case 0x3a28ecu: goto label_3a28ec;
        case 0x3a28f0u: goto label_3a28f0;
        case 0x3a28f4u: goto label_3a28f4;
        case 0x3a28f8u: goto label_3a28f8;
        case 0x3a28fcu: goto label_3a28fc;
        case 0x3a2900u: goto label_3a2900;
        case 0x3a2904u: goto label_3a2904;
        case 0x3a2908u: goto label_3a2908;
        case 0x3a290cu: goto label_3a290c;
        case 0x3a2910u: goto label_3a2910;
        case 0x3a2914u: goto label_3a2914;
        case 0x3a2918u: goto label_3a2918;
        case 0x3a291cu: goto label_3a291c;
        case 0x3a2920u: goto label_3a2920;
        case 0x3a2924u: goto label_3a2924;
        case 0x3a2928u: goto label_3a2928;
        case 0x3a292cu: goto label_3a292c;
        case 0x3a2930u: goto label_3a2930;
        case 0x3a2934u: goto label_3a2934;
        case 0x3a2938u: goto label_3a2938;
        case 0x3a293cu: goto label_3a293c;
        case 0x3a2940u: goto label_3a2940;
        case 0x3a2944u: goto label_3a2944;
        case 0x3a2948u: goto label_3a2948;
        case 0x3a294cu: goto label_3a294c;
        case 0x3a2950u: goto label_3a2950;
        case 0x3a2954u: goto label_3a2954;
        case 0x3a2958u: goto label_3a2958;
        case 0x3a295cu: goto label_3a295c;
        case 0x3a2960u: goto label_3a2960;
        case 0x3a2964u: goto label_3a2964;
        case 0x3a2968u: goto label_3a2968;
        case 0x3a296cu: goto label_3a296c;
        case 0x3a2970u: goto label_3a2970;
        case 0x3a2974u: goto label_3a2974;
        case 0x3a2978u: goto label_3a2978;
        case 0x3a297cu: goto label_3a297c;
        case 0x3a2980u: goto label_3a2980;
        case 0x3a2984u: goto label_3a2984;
        case 0x3a2988u: goto label_3a2988;
        case 0x3a298cu: goto label_3a298c;
        case 0x3a2990u: goto label_3a2990;
        case 0x3a2994u: goto label_3a2994;
        case 0x3a2998u: goto label_3a2998;
        case 0x3a299cu: goto label_3a299c;
        case 0x3a29a0u: goto label_3a29a0;
        case 0x3a29a4u: goto label_3a29a4;
        case 0x3a29a8u: goto label_3a29a8;
        case 0x3a29acu: goto label_3a29ac;
        case 0x3a29b0u: goto label_3a29b0;
        case 0x3a29b4u: goto label_3a29b4;
        case 0x3a29b8u: goto label_3a29b8;
        case 0x3a29bcu: goto label_3a29bc;
        case 0x3a29c0u: goto label_3a29c0;
        case 0x3a29c4u: goto label_3a29c4;
        case 0x3a29c8u: goto label_3a29c8;
        case 0x3a29ccu: goto label_3a29cc;
        case 0x3a29d0u: goto label_3a29d0;
        case 0x3a29d4u: goto label_3a29d4;
        case 0x3a29d8u: goto label_3a29d8;
        case 0x3a29dcu: goto label_3a29dc;
        case 0x3a29e0u: goto label_3a29e0;
        case 0x3a29e4u: goto label_3a29e4;
        case 0x3a29e8u: goto label_3a29e8;
        case 0x3a29ecu: goto label_3a29ec;
        case 0x3a29f0u: goto label_3a29f0;
        case 0x3a29f4u: goto label_3a29f4;
        case 0x3a29f8u: goto label_3a29f8;
        case 0x3a29fcu: goto label_3a29fc;
        case 0x3a2a00u: goto label_3a2a00;
        case 0x3a2a04u: goto label_3a2a04;
        case 0x3a2a08u: goto label_3a2a08;
        case 0x3a2a0cu: goto label_3a2a0c;
        case 0x3a2a10u: goto label_3a2a10;
        case 0x3a2a14u: goto label_3a2a14;
        case 0x3a2a18u: goto label_3a2a18;
        case 0x3a2a1cu: goto label_3a2a1c;
        case 0x3a2a20u: goto label_3a2a20;
        case 0x3a2a24u: goto label_3a2a24;
        case 0x3a2a28u: goto label_3a2a28;
        case 0x3a2a2cu: goto label_3a2a2c;
        default: break;
    }

    ctx->pc = 0x3a2728u;

label_3a2728:
    // 0x3a2728: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a2728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a272c:
    // 0x3a272c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3a272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_3a2730:
    // 0x3a2730: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a2730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3a2734:
    // 0x3a2734: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x3a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
label_3a2738:
    // 0x3a2738: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a2738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3a273c:
    // 0x3a273c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a273cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2740:
    // 0x3a2740: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a2740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a2744:
    // 0x3a2744: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x3a2744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a2748:
    // 0x3a2748: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3a2748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3a274c:
    // 0x3a274c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a274cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2750:
    // 0x3a2750: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3a2750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3a2754:
    // 0x3a2754: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3a2754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a2758:
    // 0x3a2758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a275c:
    // 0x3a275c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x3a275cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_3a2760:
    // 0x3a2760: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a2760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a2764:
    // 0x3a2764: 0x0  nop
    ctx->pc = 0x3a2764u;
    // NOP
label_3a2768:
    // 0x3a2768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a276c:
    // 0x3a276c: 0xc0e8cec  jal         func_3A33B0
label_3a2770:
    if (ctx->pc == 0x3A2770u) {
        ctx->pc = 0x3A2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A276Cu;
        // 0x3a2770: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2774u;
        goto label_3a2774;
    }
    ctx->pc = 0x3A276Cu;
    SET_GPR_U32(ctx, 31, 0x3A2774u);
    ctx->pc = 0x3A2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A276Cu;
    // 0x3a2770: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A33B0u, 0x3A276Cu, 0x3A2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2774u;
label_3a2774:
    // 0x3a2774: 0x0  nop
    ctx->pc = 0x3a2774u;
    // NOP
label_3a2778:
    // 0x3a2778: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
label_3a277c:
    if (ctx->pc == 0x3A277Cu) {
        ctx->pc = 0x3A277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2778u;
        // 0x3a277c: 0x26100408  addiu       $s0, $s0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2780u;
        goto label_3a2780;
    }
    ctx->pc = 0x3A2778u;
    {
        const bool branch_taken_0x3a2778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x3A277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2778u;
        // 0x3a277c: 0x26100408  addiu       $s0, $s0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2778) {
            ctx->pc = 0x3A2768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2768;
        }
    }
    ctx->pc = 0x3A2780u;
label_3a2780:
    // 0x3a2780: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a2780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3a2784:
    // 0x3a2784: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x3a2784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
label_3a2788:
    // 0x3a2788: 0x24521848  addiu       $s2, $v0, 0x1848
    ctx->pc = 0x3a2788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
label_3a278c:
    // 0x3a278c: 0xae20082c  sw          $zero, 0x82C($s1)
    ctx->pc = 0x3a278cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 0));
label_3a2790:
    // 0x3a2790: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a2790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3a2794:
    // 0x3a2794: 0xae200830  sw          $zero, 0x830($s1)
    ctx->pc = 0x3a2794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2096), GPR_U32(ctx, 0));
label_3a2798:
    // 0x3a2798: 0xae200834  sw          $zero, 0x834($s1)
    ctx->pc = 0x3a2798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2100), GPR_U32(ctx, 0));
label_3a279c:
    // 0x3a279c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a27a0:
    // 0x3a27a0: 0xae200840  sw          $zero, 0x840($s1)
    ctx->pc = 0x3a27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2112), GPR_U32(ctx, 0));
label_3a27a4:
    // 0x3a27a4: 0x24501860  addiu       $s0, $v0, 0x1860
    ctx->pc = 0x3a27a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6240));
label_3a27a8:
    // 0x3a27a8: 0xae200848  sw          $zero, 0x848($s1)
    ctx->pc = 0x3a27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 0));
label_3a27ac:
    // 0x3a27ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a27acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a27b0:
    // 0x3a27b0: 0xae20084c  sw          $zero, 0x84C($s1)
    ctx->pc = 0x3a27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 0));
label_3a27b4:
    // 0x3a27b4: 0xae200850  sw          $zero, 0x850($s1)
    ctx->pc = 0x3a27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 0));
label_3a27b8:
    // 0x3a27b8: 0xc0e8b20  jal         func_3A2C80
label_3a27bc:
    if (ctx->pc == 0x3A27BCu) {
        ctx->pc = 0x3A27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27B8u;
        // 0x3a27bc: 0xae200870  sw          $zero, 0x870($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A27C0u;
        goto label_3a27c0;
    }
    ctx->pc = 0x3A27B8u;
    SET_GPR_U32(ctx, 31, 0x3A27C0u);
    ctx->pc = 0x3A27BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A27B8u;
    // 0x3a27bc: 0xae200870  sw          $zero, 0x870($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x3A27B8u, 0x3A27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A27C0u;
label_3a27c0:
    // 0x3a27c0: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a27c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a27c4:
    // 0x3a27c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a27c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a27c8:
    // 0x3a27c8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3a27c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3a27cc:
    // 0x3a27cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a27ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a27d0:
    // 0x3a27d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a27d4:
    // 0x3a27d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a27d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a27d8:
    // 0x3a27d8: 0x2409004d  addiu       $t1, $zero, 0x4D
    ctx->pc = 0x3a27d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_3a27dc:
    // 0x3a27dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a27dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a27e0:
    // 0x3a27e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a27e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a27e4:
    // 0x3a27e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a27e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a27e8:
    // 0x3a27e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a27ec:
    // 0x3a27ec: 0x40f809  jalr        $v0
label_3a27f0:
    if (ctx->pc == 0x3A27F0u) {
        ctx->pc = 0x3A27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27ECu;
        // 0x3a27f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A27F4u;
        goto label_3a27f4;
    }
    ctx->pc = 0x3A27ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A27F4u);
        ctx->pc = 0x3A27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27ECu;
        // 0x3a27f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A27ECu, 0x3A27F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A27F4u;
label_3a27f4:
    // 0x3a27f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a27f8:
    if (ctx->pc == 0x3A27F8u) {
        ctx->pc = 0x3A27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27F4u;
        // 0x3a27f8: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A27FCu;
        goto label_3a27fc;
    }
    ctx->pc = 0x3A27F4u;
    {
        const bool branch_taken_0x3a27f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a27f4) {
            ctx->pc = 0x3A27F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A27F4u;
            // 0x3a27f8: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A280Cu;
            goto label_3a280c;
        }
    }
    ctx->pc = 0x3A27FCu;
label_3a27fc:
    // 0x3a27fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a27fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2800:
    // 0x3a2800: 0xc0e70fc  jal         func_39C3F0
label_3a2804:
    if (ctx->pc == 0x3A2804u) {
        ctx->pc = 0x3A2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2800u;
        // 0x3a2804: 0x24050578  addiu       $a1, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2808u;
        goto label_3a2808;
    }
    ctx->pc = 0x3A2800u;
    SET_GPR_U32(ctx, 31, 0x3A2808u);
    ctx->pc = 0x3A2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2800u;
    // 0x3a2804: 0x24050578  addiu       $a1, $zero, 0x578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3F0u, 0x3A2800u, 0x3A2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2808u;
label_3a2808:
    // 0x3a2808: 0xae220854  sw          $v0, 0x854($s1)
    ctx->pc = 0x3a2808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
label_3a280c:
    // 0x3a280c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a2810:
    // 0x3a2810: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x3a2810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_3a2814:
    // 0x3a2814: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3a2814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3a2818:
    // 0x3a2818: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a2818u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a281c:
    // 0x3a281c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a281cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a2820:
    // 0x3a2820: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a2820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2824:
    // 0x3a2824: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x3a2824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_3a2828:
    // 0x3a2828: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a2828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a282c:
    // 0x3a282c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a282cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2830:
    // 0x3a2830: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2834:
    // 0x3a2834: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a2834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a2838:
    // 0x3a2838: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a2838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a283c:
    // 0x3a283c: 0x40f809  jalr        $v0
label_3a2840:
    if (ctx->pc == 0x3A2840u) {
        ctx->pc = 0x3A2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A283Cu;
        // 0x3a2840: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2844u;
        goto label_3a2844;
    }
    ctx->pc = 0x3A283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2844u);
        ctx->pc = 0x3A2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A283Cu;
        // 0x3a2840: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A283Cu, 0x3A2844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2844u;
label_3a2844:
    // 0x3a2844: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a2848:
    if (ctx->pc == 0x3A2848u) {
        ctx->pc = 0x3A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2844u;
        // 0x3a2848: 0xae220858  sw          $v0, 0x858($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A284Cu;
        goto label_3a284c;
    }
    ctx->pc = 0x3A2844u;
    {
        const bool branch_taken_0x3a2844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2844) {
            ctx->pc = 0x3A2848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2844u;
            // 0x3a2848: 0xae220858  sw          $v0, 0x858($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A285Cu;
            goto label_3a285c;
        }
    }
    ctx->pc = 0x3A284Cu;
label_3a284c:
    // 0x3a284c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2850:
    // 0x3a2850: 0xc0e70fc  jal         func_39C3F0
label_3a2854:
    if (ctx->pc == 0x3A2854u) {
        ctx->pc = 0x3A2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2850u;
        // 0x3a2854: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2858u;
        goto label_3a2858;
    }
    ctx->pc = 0x3A2850u;
    SET_GPR_U32(ctx, 31, 0x3A2858u);
    ctx->pc = 0x3A2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2850u;
    // 0x3a2854: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3F0u, 0x3A2850u, 0x3A2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2858u;
label_3a2858:
    // 0x3a2858: 0xae220858  sw          $v0, 0x858($s1)
    ctx->pc = 0x3a2858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 2));
label_3a285c:
    // 0x3a285c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3a285cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3a2860:
    // 0x3a2860: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x3a2860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
label_3a2864:
    // 0x3a2864: 0x24a51890  addiu       $a1, $a1, 0x1890
    ctx->pc = 0x3a2864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6288));
label_3a2868:
    // 0x3a2868: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a2868u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a286c:
    // 0x3a286c: 0x240667ec  addiu       $a2, $zero, 0x67EC
    ctx->pc = 0x3a286cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26604));
label_3a2870:
    // 0x3a2870: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a2870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a2874:
    // 0x3a2874: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a2874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2878:
    // 0x3a2878: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a287c:
    // 0x3a287c: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x3a287cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3a2880:
    // 0x3a2880: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a2880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2884:
    // 0x3a2884: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2884u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2888:
    // 0x3a2888: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a2888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a288c:
    // 0x3a288c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a2890:
    // 0x3a2890: 0x40f809  jalr        $v0
label_3a2894:
    if (ctx->pc == 0x3A2894u) {
        ctx->pc = 0x3A2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2890u;
        // 0x3a2894: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2898u;
        goto label_3a2898;
    }
    ctx->pc = 0x3A2890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2898u);
        ctx->pc = 0x3A2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2890u;
        // 0x3a2894: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2890u, 0x3A2898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2898u;
label_3a2898:
    // 0x3a2898: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a289c:
    if (ctx->pc == 0x3A289Cu) {
        ctx->pc = 0x3A289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2898u;
        // 0x3a289c: 0xae22085c  sw          $v0, 0x85C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A28A0u;
        goto label_3a28a0;
    }
    ctx->pc = 0x3A2898u;
    {
        const bool branch_taken_0x3a2898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2898) {
            ctx->pc = 0x3A289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2898u;
            // 0x3a289c: 0xae22085c  sw          $v0, 0x85C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2140), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A28ACu;
            goto label_3a28ac;
        }
    }
    ctx->pc = 0x3A28A0u;
label_3a28a0:
    // 0x3a28a0: 0xc0e5e92  jal         func_397A48
label_3a28a4:
    if (ctx->pc == 0x3A28A4u) {
        ctx->pc = 0x3A28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28A0u;
        // 0x3a28a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A28A8u;
        goto label_3a28a8;
    }
    ctx->pc = 0x3A28A0u;
    SET_GPR_U32(ctx, 31, 0x3A28A8u);
    ctx->pc = 0x3A28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A28A0u;
    // 0x3a28a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A48u, 0x3A28A0u, 0x3A28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A28A8u;
label_3a28a8:
    // 0x3a28a8: 0xae22085c  sw          $v0, 0x85C($s1)
    ctx->pc = 0x3a28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2140), GPR_U32(ctx, 2));
label_3a28ac:
    // 0x3a28ac: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3a28acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3a28b0:
    // 0x3a28b0: 0xae220840  sw          $v0, 0x840($s1)
    ctx->pc = 0x3a28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2112), GPR_U32(ctx, 2));
label_3a28b4:
    // 0x3a28b4: 0x24a518a8  addiu       $a1, $a1, 0x18A8
    ctx->pc = 0x3a28b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6312));
label_3a28b8:
    // 0x3a28b8: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a28b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a28bc:
    // 0x3a28bc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3a28bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3a28c0:
    // 0x3a28c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a28c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a28c4:
    // 0x3a28c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a28c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a28c8:
    // 0x3a28c8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a28cc:
    // 0x3a28cc: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x3a28ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3a28d0:
    // 0x3a28d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a28d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a28d4:
    // 0x3a28d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a28d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a28d8:
    // 0x3a28d8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a28d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a28dc:
    // 0x3a28dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a28e0:
    // 0x3a28e0: 0x40f809  jalr        $v0
label_3a28e4:
    if (ctx->pc == 0x3A28E4u) {
        ctx->pc = 0x3A28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28E0u;
        // 0x3a28e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A28E8u;
        goto label_3a28e8;
    }
    ctx->pc = 0x3A28E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A28E8u);
        ctx->pc = 0x3A28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28E0u;
        // 0x3a28e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A28E0u, 0x3A28E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A28E8u;
label_3a28e8:
    // 0x3a28e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a28ec:
    if (ctx->pc == 0x3A28ECu) {
        ctx->pc = 0x3A28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28E8u;
        // 0x3a28ec: 0xae220860  sw          $v0, 0x860($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A28F0u;
        goto label_3a28f0;
    }
    ctx->pc = 0x3A28E8u;
    {
        const bool branch_taken_0x3a28e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a28e8) {
            ctx->pc = 0x3A28ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A28E8u;
            // 0x3a28ec: 0xae220860  sw          $v0, 0x860($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A28FCu;
            goto label_3a28fc;
        }
    }
    ctx->pc = 0x3A28F0u;
label_3a28f0:
    // 0x3a28f0: 0xc0e4284  jal         func_390A10
label_3a28f4:
    if (ctx->pc == 0x3A28F4u) {
        ctx->pc = 0x3A28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28F0u;
        // 0x3a28f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A28F8u;
        goto label_3a28f8;
    }
    ctx->pc = 0x3A28F0u;
    SET_GPR_U32(ctx, 31, 0x3A28F8u);
    ctx->pc = 0x3A28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A28F0u;
    // 0x3a28f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390A10u, 0x3A28F0u, 0x3A28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A28F8u;
label_3a28f8:
    // 0x3a28f8: 0xae220860  sw          $v0, 0x860($s1)
    ctx->pc = 0x3a28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2144), GPR_U32(ctx, 2));
label_3a28fc:
    // 0x3a28fc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3a28fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3a2900:
    // 0x3a2900: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x3a2900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
label_3a2904:
    // 0x3a2904: 0x24a518c0  addiu       $a1, $a1, 0x18C0
    ctx->pc = 0x3a2904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
label_3a2908:
    // 0x3a2908: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a2908u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a290c:
    // 0x3a290c: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x3a290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
label_3a2910:
    // 0x3a2910: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a2910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a2914:
    // 0x3a2914: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a2914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2918:
    // 0x3a2918: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a2918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a291c:
    // 0x3a291c: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x3a291cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3a2920:
    // 0x3a2920: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a2920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2924:
    // 0x3a2924: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2924u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2928:
    // 0x3a2928: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a2928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a292c:
    // 0x3a292c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a2930:
    // 0x3a2930: 0x40f809  jalr        $v0
label_3a2934:
    if (ctx->pc == 0x3A2934u) {
        ctx->pc = 0x3A2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2930u;
        // 0x3a2934: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2938u;
        goto label_3a2938;
    }
    ctx->pc = 0x3A2930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2938u);
        ctx->pc = 0x3A2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2930u;
        // 0x3a2934: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2930u, 0x3A2938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2938u;
label_3a2938:
    // 0x3a2938: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a293c:
    if (ctx->pc == 0x3A293Cu) {
        ctx->pc = 0x3A293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2938u;
        // 0x3a293c: 0xae220864  sw          $v0, 0x864($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2940u;
        goto label_3a2940;
    }
    ctx->pc = 0x3A2938u;
    {
        const bool branch_taken_0x3a2938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2938) {
            ctx->pc = 0x3A293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2938u;
            // 0x3a293c: 0xae220864  sw          $v0, 0x864($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A294Cu;
            goto label_3a294c;
        }
    }
    ctx->pc = 0x3A2940u;
label_3a2940:
    // 0x3a2940: 0xc0e3d80  jal         func_38F600
label_3a2944:
    if (ctx->pc == 0x3A2944u) {
        ctx->pc = 0x3A2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2940u;
        // 0x3a2944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2948u;
        goto label_3a2948;
    }
    ctx->pc = 0x3A2940u;
    SET_GPR_U32(ctx, 31, 0x3A2948u);
    ctx->pc = 0x3A2944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2940u;
    // 0x3a2944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F600u, 0x3A2940u, 0x3A2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2948u;
label_3a2948:
    // 0x3a2948: 0xae220864  sw          $v0, 0x864($s1)
    ctx->pc = 0x3a2948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2148), GPR_U32(ctx, 2));
label_3a294c:
    // 0x3a294c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3a294cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3a2950:
    // 0x3a2950: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x3a2950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
label_3a2954:
    // 0x3a2954: 0x24a518d8  addiu       $a1, $a1, 0x18D8
    ctx->pc = 0x3a2954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6360));
label_3a2958:
    // 0x3a2958: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a2958u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a295c:
    // 0x3a295c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3a295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3a2960:
    // 0x3a2960: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a2960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a2964:
    // 0x3a2964: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a2964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2968:
    // 0x3a2968: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a2968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a296c:
    // 0x3a296c: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x3a296cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_3a2970:
    // 0x3a2970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a2970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2974:
    // 0x3a2974: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2974u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2978:
    // 0x3a2978: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a2978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a297c:
    // 0x3a297c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a2980:
    // 0x3a2980: 0x40f809  jalr        $v0
label_3a2984:
    if (ctx->pc == 0x3A2984u) {
        ctx->pc = 0x3A2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2980u;
        // 0x3a2984: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2988u;
        goto label_3a2988;
    }
    ctx->pc = 0x3A2980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2988u);
        ctx->pc = 0x3A2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2980u;
        // 0x3a2984: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2980u, 0x3A2988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2988u;
label_3a2988:
    // 0x3a2988: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a298c:
    if (ctx->pc == 0x3A298Cu) {
        ctx->pc = 0x3A298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2988u;
        // 0x3a298c: 0x8e8c27e4  lw          $t4, 0x27E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2990u;
        goto label_3a2990;
    }
    ctx->pc = 0x3A2988u;
    {
        const bool branch_taken_0x3a2988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2988u;
        // 0x3a298c: 0x8e8c27e4  lw          $t4, 0x27E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2988) {
            ctx->pc = 0x3A299Cu;
            goto label_3a299c;
        }
    }
    ctx->pc = 0x3A2990u;
label_3a2990:
    // 0x3a2990: 0xc0e8448  jal         func_3A1120
label_3a2994:
    if (ctx->pc == 0x3A2994u) {
        ctx->pc = 0x3A2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2990u;
        // 0x3a2994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2998u;
        goto label_3a2998;
    }
    ctx->pc = 0x3A2990u;
    SET_GPR_U32(ctx, 31, 0x3A2998u);
    ctx->pc = 0x3A2994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2990u;
    // 0x3a2994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1120u, 0x3A2990u, 0x3A2998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2998u;
label_3a2998:
    // 0x3a2998: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3a2998u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3a299c:
    // 0x3a299c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3a299cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3a29a0:
    // 0x3a29a0: 0xae220868  sw          $v0, 0x868($s1)
    ctx->pc = 0x3a29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2152), GPR_U32(ctx, 2));
label_3a29a4:
    // 0x3a29a4: 0x24a518f0  addiu       $a1, $a1, 0x18F0
    ctx->pc = 0x3a29a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6384));
label_3a29a8:
    // 0x3a29a8: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x3a29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
label_3a29ac:
    // 0x3a29ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a29acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a29b0:
    // 0x3a29b0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3a29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3a29b4:
    // 0x3a29b4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3a29b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a29b8:
    // 0x3a29b8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3a29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3a29bc:
    // 0x3a29bc: 0x24090054  addiu       $t1, $zero, 0x54
    ctx->pc = 0x3a29bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3a29c0:
    // 0x3a29c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a29c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a29c4:
    // 0x3a29c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a29c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a29c8:
    // 0x3a29c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3a29c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3a29cc:
    // 0x3a29cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3a29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3a29d0:
    // 0x3a29d0: 0x40f809  jalr        $v0
label_3a29d4:
    if (ctx->pc == 0x3A29D4u) {
        ctx->pc = 0x3A29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29D0u;
        // 0x3a29d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A29D8u;
        goto label_3a29d8;
    }
    ctx->pc = 0x3A29D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A29D8u);
        ctx->pc = 0x3A29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29D0u;
        // 0x3a29d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A29D0u, 0x3A29D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A29D8u;
label_3a29d8:
    // 0x3a29d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a29d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a29dc:
    // 0x3a29dc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3a29e0:
    if (ctx->pc == 0x3A29E0u) {
        ctx->pc = 0x3A29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29DCu;
        // 0x3a29e0: 0x8e220838  lw          $v0, 0x838($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A29E4u;
        goto label_3a29e4;
    }
    ctx->pc = 0x3A29DCu;
    {
        const bool branch_taken_0x3a29dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a29dc) {
            ctx->pc = 0x3A29E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A29DCu;
            // 0x3a29e0: 0x8e220838  lw          $v0, 0x838($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A29F4u;
            goto label_3a29f4;
        }
    }
    ctx->pc = 0x3A29E4u;
label_3a29e4:
    // 0x3a29e4: 0xc0e385a  jal         func_38E168
label_3a29e8:
    if (ctx->pc == 0x3A29E8u) {
        ctx->pc = 0x3A29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29E4u;
        // 0x3a29e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A29ECu;
        goto label_3a29ec;
    }
    ctx->pc = 0x3A29E4u;
    SET_GPR_U32(ctx, 31, 0x3A29ECu);
    ctx->pc = 0x3A29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A29E4u;
    // 0x3a29e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E168u, 0x3A29E4u, 0x3A29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A29ECu;
label_3a29ec:
    // 0x3a29ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a29ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a29f0:
    // 0x3a29f0: 0x8e220838  lw          $v0, 0x838($s1)
    ctx->pc = 0x3a29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
label_3a29f4:
    // 0x3a29f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a29f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a29f8:
    // 0x3a29f8: 0xae23086c  sw          $v1, 0x86C($s1)
    ctx->pc = 0x3a29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2156), GPR_U32(ctx, 3));
label_3a29fc:
    // 0x3a29fc: 0xae220834  sw          $v0, 0x834($s1)
    ctx->pc = 0x3a29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2100), GPR_U32(ctx, 2));
label_3a2a00:
    // 0x3a2a00: 0xc0e8ad2  jal         func_3A2B48
label_3a2a04:
    if (ctx->pc == 0x3A2A04u) {
        ctx->pc = 0x3A2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A00u;
        // 0x3a2a04: 0xae230844  sw          $v1, 0x844($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2A08u;
        goto label_3a2a08;
    }
    ctx->pc = 0x3A2A00u;
    SET_GPR_U32(ctx, 31, 0x3A2A08u);
    ctx->pc = 0x3A2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2A00u;
    // 0x3a2a04: 0xae230844  sw          $v1, 0x844($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2B48u, 0x3A2A00u, 0x3A2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A08u;
label_3a2a08:
    // 0x3a2a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a2a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a2a0c:
    // 0x3a2a0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a2a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a2a10:
    // 0x3a2a10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a2a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a2a14:
    // 0x3a2a14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a2a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2a18:
    // 0x3a2a18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3a2a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a2a1c:
    // 0x3a2a1c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3a2a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2a20:
    // 0x3a2a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2a24:
    // 0x3a2a24: 0x3e00008  jr          $ra
label_3a2a28:
    if (ctx->pc == 0x3A2A28u) {
        ctx->pc = 0x3A2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A24u;
        // 0x3a2a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2A2Cu;
        goto label_3a2a2c;
    }
    ctx->pc = 0x3A2A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A24u;
        // 0x3a2a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2A2Cu;
label_3a2a2c:
    // 0x3a2a2c: 0x0  nop
    ctx->pc = 0x3a2a2cu;
    // NOP
    ctx->pc = 0x3a2a30u;
}
