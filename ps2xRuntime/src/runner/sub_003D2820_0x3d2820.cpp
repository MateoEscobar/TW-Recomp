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

// Function: sub_003D2820
// Address: 0x3d2820 - 0x3d2b68
void sub_003D2820_0x3d2820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2820_0x3d2820");
#endif

    switch (ctx->pc) {
        case 0x3d2820u: goto label_3d2820;
        case 0x3d2824u: goto label_3d2824;
        case 0x3d2828u: goto label_3d2828;
        case 0x3d282cu: goto label_3d282c;
        case 0x3d2830u: goto label_3d2830;
        case 0x3d2834u: goto label_3d2834;
        case 0x3d2838u: goto label_3d2838;
        case 0x3d283cu: goto label_3d283c;
        case 0x3d2840u: goto label_3d2840;
        case 0x3d2844u: goto label_3d2844;
        case 0x3d2848u: goto label_3d2848;
        case 0x3d284cu: goto label_3d284c;
        case 0x3d2850u: goto label_3d2850;
        case 0x3d2854u: goto label_3d2854;
        case 0x3d2858u: goto label_3d2858;
        case 0x3d285cu: goto label_3d285c;
        case 0x3d2860u: goto label_3d2860;
        case 0x3d2864u: goto label_3d2864;
        case 0x3d2868u: goto label_3d2868;
        case 0x3d286cu: goto label_3d286c;
        case 0x3d2870u: goto label_3d2870;
        case 0x3d2874u: goto label_3d2874;
        case 0x3d2878u: goto label_3d2878;
        case 0x3d287cu: goto label_3d287c;
        case 0x3d2880u: goto label_3d2880;
        case 0x3d2884u: goto label_3d2884;
        case 0x3d2888u: goto label_3d2888;
        case 0x3d288cu: goto label_3d288c;
        case 0x3d2890u: goto label_3d2890;
        case 0x3d2894u: goto label_3d2894;
        case 0x3d2898u: goto label_3d2898;
        case 0x3d289cu: goto label_3d289c;
        case 0x3d28a0u: goto label_3d28a0;
        case 0x3d28a4u: goto label_3d28a4;
        case 0x3d28a8u: goto label_3d28a8;
        case 0x3d28acu: goto label_3d28ac;
        case 0x3d28b0u: goto label_3d28b0;
        case 0x3d28b4u: goto label_3d28b4;
        case 0x3d28b8u: goto label_3d28b8;
        case 0x3d28bcu: goto label_3d28bc;
        case 0x3d28c0u: goto label_3d28c0;
        case 0x3d28c4u: goto label_3d28c4;
        case 0x3d28c8u: goto label_3d28c8;
        case 0x3d28ccu: goto label_3d28cc;
        case 0x3d28d0u: goto label_3d28d0;
        case 0x3d28d4u: goto label_3d28d4;
        case 0x3d28d8u: goto label_3d28d8;
        case 0x3d28dcu: goto label_3d28dc;
        case 0x3d28e0u: goto label_3d28e0;
        case 0x3d28e4u: goto label_3d28e4;
        case 0x3d28e8u: goto label_3d28e8;
        case 0x3d28ecu: goto label_3d28ec;
        case 0x3d28f0u: goto label_3d28f0;
        case 0x3d28f4u: goto label_3d28f4;
        case 0x3d28f8u: goto label_3d28f8;
        case 0x3d28fcu: goto label_3d28fc;
        case 0x3d2900u: goto label_3d2900;
        case 0x3d2904u: goto label_3d2904;
        case 0x3d2908u: goto label_3d2908;
        case 0x3d290cu: goto label_3d290c;
        case 0x3d2910u: goto label_3d2910;
        case 0x3d2914u: goto label_3d2914;
        case 0x3d2918u: goto label_3d2918;
        case 0x3d291cu: goto label_3d291c;
        case 0x3d2920u: goto label_3d2920;
        case 0x3d2924u: goto label_3d2924;
        case 0x3d2928u: goto label_3d2928;
        case 0x3d292cu: goto label_3d292c;
        case 0x3d2930u: goto label_3d2930;
        case 0x3d2934u: goto label_3d2934;
        case 0x3d2938u: goto label_3d2938;
        case 0x3d293cu: goto label_3d293c;
        case 0x3d2940u: goto label_3d2940;
        case 0x3d2944u: goto label_3d2944;
        case 0x3d2948u: goto label_3d2948;
        case 0x3d294cu: goto label_3d294c;
        case 0x3d2950u: goto label_3d2950;
        case 0x3d2954u: goto label_3d2954;
        case 0x3d2958u: goto label_3d2958;
        case 0x3d295cu: goto label_3d295c;
        case 0x3d2960u: goto label_3d2960;
        case 0x3d2964u: goto label_3d2964;
        case 0x3d2968u: goto label_3d2968;
        case 0x3d296cu: goto label_3d296c;
        case 0x3d2970u: goto label_3d2970;
        case 0x3d2974u: goto label_3d2974;
        case 0x3d2978u: goto label_3d2978;
        case 0x3d297cu: goto label_3d297c;
        case 0x3d2980u: goto label_3d2980;
        case 0x3d2984u: goto label_3d2984;
        case 0x3d2988u: goto label_3d2988;
        case 0x3d298cu: goto label_3d298c;
        case 0x3d2990u: goto label_3d2990;
        case 0x3d2994u: goto label_3d2994;
        case 0x3d2998u: goto label_3d2998;
        case 0x3d299cu: goto label_3d299c;
        case 0x3d29a0u: goto label_3d29a0;
        case 0x3d29a4u: goto label_3d29a4;
        case 0x3d29a8u: goto label_3d29a8;
        case 0x3d29acu: goto label_3d29ac;
        case 0x3d29b0u: goto label_3d29b0;
        case 0x3d29b4u: goto label_3d29b4;
        case 0x3d29b8u: goto label_3d29b8;
        case 0x3d29bcu: goto label_3d29bc;
        case 0x3d29c0u: goto label_3d29c0;
        case 0x3d29c4u: goto label_3d29c4;
        case 0x3d29c8u: goto label_3d29c8;
        case 0x3d29ccu: goto label_3d29cc;
        case 0x3d29d0u: goto label_3d29d0;
        case 0x3d29d4u: goto label_3d29d4;
        case 0x3d29d8u: goto label_3d29d8;
        case 0x3d29dcu: goto label_3d29dc;
        case 0x3d29e0u: goto label_3d29e0;
        case 0x3d29e4u: goto label_3d29e4;
        case 0x3d29e8u: goto label_3d29e8;
        case 0x3d29ecu: goto label_3d29ec;
        case 0x3d29f0u: goto label_3d29f0;
        case 0x3d29f4u: goto label_3d29f4;
        case 0x3d29f8u: goto label_3d29f8;
        case 0x3d29fcu: goto label_3d29fc;
        case 0x3d2a00u: goto label_3d2a00;
        case 0x3d2a04u: goto label_3d2a04;
        case 0x3d2a08u: goto label_3d2a08;
        case 0x3d2a0cu: goto label_3d2a0c;
        case 0x3d2a10u: goto label_3d2a10;
        case 0x3d2a14u: goto label_3d2a14;
        case 0x3d2a18u: goto label_3d2a18;
        case 0x3d2a1cu: goto label_3d2a1c;
        case 0x3d2a20u: goto label_3d2a20;
        case 0x3d2a24u: goto label_3d2a24;
        case 0x3d2a28u: goto label_3d2a28;
        case 0x3d2a2cu: goto label_3d2a2c;
        case 0x3d2a30u: goto label_3d2a30;
        case 0x3d2a34u: goto label_3d2a34;
        case 0x3d2a38u: goto label_3d2a38;
        case 0x3d2a3cu: goto label_3d2a3c;
        case 0x3d2a40u: goto label_3d2a40;
        case 0x3d2a44u: goto label_3d2a44;
        case 0x3d2a48u: goto label_3d2a48;
        case 0x3d2a4cu: goto label_3d2a4c;
        case 0x3d2a50u: goto label_3d2a50;
        case 0x3d2a54u: goto label_3d2a54;
        case 0x3d2a58u: goto label_3d2a58;
        case 0x3d2a5cu: goto label_3d2a5c;
        case 0x3d2a60u: goto label_3d2a60;
        case 0x3d2a64u: goto label_3d2a64;
        case 0x3d2a68u: goto label_3d2a68;
        case 0x3d2a6cu: goto label_3d2a6c;
        case 0x3d2a70u: goto label_3d2a70;
        case 0x3d2a74u: goto label_3d2a74;
        case 0x3d2a78u: goto label_3d2a78;
        case 0x3d2a7cu: goto label_3d2a7c;
        case 0x3d2a80u: goto label_3d2a80;
        case 0x3d2a84u: goto label_3d2a84;
        case 0x3d2a88u: goto label_3d2a88;
        case 0x3d2a8cu: goto label_3d2a8c;
        case 0x3d2a90u: goto label_3d2a90;
        case 0x3d2a94u: goto label_3d2a94;
        case 0x3d2a98u: goto label_3d2a98;
        case 0x3d2a9cu: goto label_3d2a9c;
        case 0x3d2aa0u: goto label_3d2aa0;
        case 0x3d2aa4u: goto label_3d2aa4;
        case 0x3d2aa8u: goto label_3d2aa8;
        case 0x3d2aacu: goto label_3d2aac;
        case 0x3d2ab0u: goto label_3d2ab0;
        case 0x3d2ab4u: goto label_3d2ab4;
        case 0x3d2ab8u: goto label_3d2ab8;
        case 0x3d2abcu: goto label_3d2abc;
        case 0x3d2ac0u: goto label_3d2ac0;
        case 0x3d2ac4u: goto label_3d2ac4;
        case 0x3d2ac8u: goto label_3d2ac8;
        case 0x3d2accu: goto label_3d2acc;
        case 0x3d2ad0u: goto label_3d2ad0;
        case 0x3d2ad4u: goto label_3d2ad4;
        case 0x3d2ad8u: goto label_3d2ad8;
        case 0x3d2adcu: goto label_3d2adc;
        case 0x3d2ae0u: goto label_3d2ae0;
        case 0x3d2ae4u: goto label_3d2ae4;
        case 0x3d2ae8u: goto label_3d2ae8;
        case 0x3d2aecu: goto label_3d2aec;
        case 0x3d2af0u: goto label_3d2af0;
        case 0x3d2af4u: goto label_3d2af4;
        case 0x3d2af8u: goto label_3d2af8;
        case 0x3d2afcu: goto label_3d2afc;
        case 0x3d2b00u: goto label_3d2b00;
        case 0x3d2b04u: goto label_3d2b04;
        case 0x3d2b08u: goto label_3d2b08;
        case 0x3d2b0cu: goto label_3d2b0c;
        case 0x3d2b10u: goto label_3d2b10;
        case 0x3d2b14u: goto label_3d2b14;
        case 0x3d2b18u: goto label_3d2b18;
        case 0x3d2b1cu: goto label_3d2b1c;
        case 0x3d2b20u: goto label_3d2b20;
        case 0x3d2b24u: goto label_3d2b24;
        case 0x3d2b28u: goto label_3d2b28;
        case 0x3d2b2cu: goto label_3d2b2c;
        case 0x3d2b30u: goto label_3d2b30;
        case 0x3d2b34u: goto label_3d2b34;
        case 0x3d2b38u: goto label_3d2b38;
        case 0x3d2b3cu: goto label_3d2b3c;
        case 0x3d2b40u: goto label_3d2b40;
        case 0x3d2b44u: goto label_3d2b44;
        case 0x3d2b48u: goto label_3d2b48;
        case 0x3d2b4cu: goto label_3d2b4c;
        case 0x3d2b50u: goto label_3d2b50;
        case 0x3d2b54u: goto label_3d2b54;
        case 0x3d2b58u: goto label_3d2b58;
        case 0x3d2b5cu: goto label_3d2b5c;
        case 0x3d2b60u: goto label_3d2b60;
        case 0x3d2b64u: goto label_3d2b64;
        default: break;
    }

    ctx->pc = 0x3d2820u;

label_3d2820:
    // 0x3d2820: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3d2820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3d2824:
    // 0x3d2824: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3d2824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3d2828:
    // 0x3d2828: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3d2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3d282c:
    // 0x3d282c: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3d282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3d2830:
    // 0x3d2830: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d2830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2834:
    // 0x3d2834: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3d2834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3d2838:
    // 0x3d2838: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3d2838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
label_3d283c:
    // 0x3d283c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3d283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3d2840:
    // 0x3d2840: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d2840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d2844:
    // 0x3d2844: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d2844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d2848:
    // 0x3d2848: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d2848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d284c:
    // 0x3d284c: 0x40f809  jalr        $v0
label_3d2850:
    if (ctx->pc == 0x3D2850u) {
        ctx->pc = 0x3D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D284Cu;
        // 0x3d2850: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2854u;
        goto label_3d2854;
    }
    ctx->pc = 0x3D284Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2854u);
        ctx->pc = 0x3D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D284Cu;
        // 0x3d2850: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D284Cu, 0x3D2854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2854u;
label_3d2854:
    // 0x3d2854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2858:
    // 0x3d2858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d285c:
    // 0x3d285c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2860:
    // 0x3d2860: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d2860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d2864:
    // 0x3d2864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d2864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d2868:
    // 0x3d2868: 0x0  nop
    ctx->pc = 0x3d2868u;
    // NOP
label_3d286c:
    // 0x3d286c: 0x0  nop
    ctx->pc = 0x3d286cu;
    // NOP
label_3d2870:
    // 0x3d2870: 0x0  nop
    ctx->pc = 0x3d2870u;
    // NOP
label_3d2874:
    // 0x3d2874: 0x0  nop
    ctx->pc = 0x3d2874u;
    // NOP
label_3d2878:
    // 0x3d2878: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d287c:
    if (ctx->pc == 0x3D287Cu) {
        ctx->pc = 0x3D287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2878u;
        // 0x3d287c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2880u;
        goto label_3d2880;
    }
    ctx->pc = 0x3D2878u;
    {
        const bool branch_taken_0x3d2878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2878u;
        // 0x3d287c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2878) {
            ctx->pc = 0x3D2868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2868;
        }
    }
    ctx->pc = 0x3D2880u;
label_3d2880:
    // 0x3d2880: 0xc138ddc  jal         func_4E3770
label_3d2884:
    if (ctx->pc == 0x3D2884u) {
        ctx->pc = 0x3D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2880u;
        // 0x3d2884: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2888u;
        goto label_3d2888;
    }
    ctx->pc = 0x3D2880u;
    SET_GPR_U32(ctx, 31, 0x3D2888u);
    ctx->pc = 0x3D2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2880u;
    // 0x3d2884: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D2880u, 0x3D2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2888u;
label_3d2888:
    // 0x3d2888: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d288c:
    // 0x3d288c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3d2890:
    if (ctx->pc == 0x3D2890u) {
        ctx->pc = 0x3D2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D288Cu;
        // 0x3d2890: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2894u;
        goto label_3d2894;
    }
    ctx->pc = 0x3D288Cu;
    {
        const bool branch_taken_0x3d288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D288Cu;
        // 0x3d2890: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d288c) {
            ctx->pc = 0x3D28F8u;
            goto label_3d28f8;
        }
    }
    ctx->pc = 0x3D2894u;
label_3d2894:
    // 0x3d2894: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d2894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d2898:
    // 0x3d2898: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3d2898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d289c:
    // 0x3d289c: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
label_3d28a0:
    if (ctx->pc == 0x3D28A0u) {
        ctx->pc = 0x3D28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D289Cu;
        // 0x3d28a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D28A4u;
        goto label_3d28a4;
    }
    ctx->pc = 0x3D289Cu;
    {
        const bool branch_taken_0x3d289c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x3D28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D289Cu;
        // 0x3d28a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d289c) {
            ctx->pc = 0x3D28BCu;
            goto label_3d28bc;
        }
    }
    ctx->pc = 0x3D28A4u;
label_3d28a4:
    // 0x3d28a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d28a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d28a8:
    // 0x3d28a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d28ac:
    // 0x3d28ac: 0xc0e858c  jal         func_3A1630
label_3d28b0:
    if (ctx->pc == 0x3D28B0u) {
        ctx->pc = 0x3D28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28ACu;
        // 0x3d28b0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D28B4u;
        goto label_3d28b4;
    }
    ctx->pc = 0x3D28ACu;
    SET_GPR_U32(ctx, 31, 0x3D28B4u);
    ctx->pc = 0x3D28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D28ACu;
    // 0x3d28b0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D28ACu, 0x3D28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D28B4u;
label_3d28b4:
    // 0x3d28b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3d28b8:
    if (ctx->pc == 0x3D28B8u) {
        ctx->pc = 0x3D28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28B4u;
        // 0x3d28b8: 0xae120018  sw          $s2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D28BCu;
        goto label_3d28bc;
    }
    ctx->pc = 0x3D28B4u;
    {
        const bool branch_taken_0x3d28b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28B4u;
        // 0x3d28b8: 0xae120018  sw          $s2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d28b4) {
            ctx->pc = 0x3D28DCu;
            goto label_3d28dc;
        }
    }
    ctx->pc = 0x3D28BCu;
label_3d28bc:
    // 0x3d28bc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3d28c0:
    if (ctx->pc == 0x3D28C0u) {
        ctx->pc = 0x3D28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28BCu;
        // 0x3d28c0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D28C4u;
        goto label_3d28c4;
    }
    ctx->pc = 0x3D28BCu;
    {
        const bool branch_taken_0x3d28bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d28bc) {
            ctx->pc = 0x3D28C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D28BCu;
            // 0x3d28c0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D28E0u;
            goto label_3d28e0;
        }
    }
    ctx->pc = 0x3D28C4u;
label_3d28c4:
    // 0x3d28c4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x3d28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_3d28c8:
    // 0x3d28c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d28c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d28cc:
    // 0x3d28cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d28ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d28d0:
    // 0x3d28d0: 0xc0e858c  jal         func_3A1630
label_3d28d4:
    if (ctx->pc == 0x3D28D4u) {
        ctx->pc = 0x3D28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28D0u;
        // 0x3d28d4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D28D8u;
        goto label_3d28d8;
    }
    ctx->pc = 0x3D28D0u;
    SET_GPR_U32(ctx, 31, 0x3D28D8u);
    ctx->pc = 0x3D28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D28D0u;
    // 0x3d28d4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D28D0u, 0x3D28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D28D8u;
label_3d28d8:
    // 0x3d28d8: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x3d28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
label_3d28dc:
    // 0x3d28dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d28e0:
    // 0x3d28e0: 0x9665006e  lhu         $a1, 0x6E($s3)
    ctx->pc = 0x3d28e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_3d28e4:
    // 0x3d28e4: 0xc0cd4ee  jal         func_3353B8
label_3d28e8:
    if (ctx->pc == 0x3D28E8u) {
        ctx->pc = 0x3D28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28E4u;
        // 0x3d28e8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D28ECu;
        goto label_3d28ec;
    }
    ctx->pc = 0x3D28E4u;
    SET_GPR_U32(ctx, 31, 0x3D28ECu);
    ctx->pc = 0x3D28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D28E4u;
    // 0x3d28e8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D28E4u, 0x3D28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D28ECu;
label_3d28ec:
    // 0x3d28ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d28f0:
    // 0x3d28f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d28f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d28f4:
    // 0x3d28f4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3d28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3d28f8:
    // 0x3d28f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d28fc:
    // 0x3d28fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d2900:
    // 0x3d2900: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3d2900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d2904:
    // 0x3d2904: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3d2908:
    if (ctx->pc == 0x3D2908u) {
        ctx->pc = 0x3D2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2904u;
        // 0x3d2908: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D290Cu;
        goto label_3d290c;
    }
    ctx->pc = 0x3D2904u;
    {
        const bool branch_taken_0x3d2904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2904u;
        // 0x3d2908: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2904) {
            ctx->pc = 0x3D2980u;
            goto label_3d2980;
        }
    }
    ctx->pc = 0x3D290Cu;
label_3d290c:
    // 0x3d290c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d2910:
    // 0x3d2910: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3d2914:
    if (ctx->pc == 0x3D2914u) {
        ctx->pc = 0x3D2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2910u;
        // 0x3d2914: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2918u;
        goto label_3d2918;
    }
    ctx->pc = 0x3D2910u;
    {
        const bool branch_taken_0x3d2910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2910) {
            ctx->pc = 0x3D2914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2910u;
            // 0x3d2914: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2938u;
            goto label_3d2938;
        }
    }
    ctx->pc = 0x3D2918u;
label_3d2918:
    // 0x3d2918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d2918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d291c:
    // 0x3d291c: 0xc0e858c  jal         func_3A1630
label_3d2920:
    if (ctx->pc == 0x3D2920u) {
        ctx->pc = 0x3D2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D291Cu;
        // 0x3d2920: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2924u;
        goto label_3d2924;
    }
    ctx->pc = 0x3D291Cu;
    SET_GPR_U32(ctx, 31, 0x3D2924u);
    ctx->pc = 0x3D2920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D291Cu;
    // 0x3d2920: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D291Cu, 0x3D2924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2924u;
label_3d2924:
    // 0x3d2924: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3d2924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2928:
    // 0x3d2928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d292c:
    // 0x3d292c: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x3d292cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_3d2930:
    // 0x3d2930: 0x10000011  b           . + 4 + (0x11 << 2)
label_3d2934:
    if (ctx->pc == 0x3D2934u) {
        ctx->pc = 0x3D2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2930u;
        // 0x3d2934: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2938u;
        goto label_3d2938;
    }
    ctx->pc = 0x3D2930u;
    {
        const bool branch_taken_0x3d2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2930u;
        // 0x3d2934: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2930) {
            ctx->pc = 0x3D2978u;
            goto label_3d2978;
        }
    }
    ctx->pc = 0x3D2938u;
label_3d2938:
    // 0x3d2938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d2938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d293c:
    // 0x3d293c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d293cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3d2940:
    // 0x3d2940: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d2940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d2944:
    // 0x3d2944: 0xc0e858c  jal         func_3A1630
label_3d2948:
    if (ctx->pc == 0x3D2948u) {
        ctx->pc = 0x3D2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2944u;
        // 0x3d2948: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D294Cu;
        goto label_3d294c;
    }
    ctx->pc = 0x3D2944u;
    SET_GPR_U32(ctx, 31, 0x3D294Cu);
    ctx->pc = 0x3D2948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2944u;
    // 0x3d2948: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D2944u, 0x3D294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D294Cu;
label_3d294c:
    // 0x3d294c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d294cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d2950:
    // 0x3d2950: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d2950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d2954:
    // 0x3d2954: 0xc0cd4ee  jal         func_3353B8
label_3d2958:
    if (ctx->pc == 0x3D2958u) {
        ctx->pc = 0x3D2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2954u;
        // 0x3d2958: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D295Cu;
        goto label_3d295c;
    }
    ctx->pc = 0x3D2954u;
    SET_GPR_U32(ctx, 31, 0x3D295Cu);
    ctx->pc = 0x3D2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2954u;
    // 0x3d2958: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D2954u, 0x3D295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D295Cu;
label_3d295c:
    // 0x3d295c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3d295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3d2960:
    // 0x3d2960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d2960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2964:
    // 0x3d2964: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d2964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d2968:
    // 0x3d2968: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d2968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d296c:
    // 0x3d296c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x3d296cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_3d2970:
    // 0x3d2970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d2970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d2974:
    // 0x3d2974: 0xae6300cc  sw          $v1, 0xCC($s3)
    ctx->pc = 0x3d2974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 3));
label_3d2978:
    // 0x3d2978: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d297c:
    if (ctx->pc == 0x3D297Cu) {
        ctx->pc = 0x3D297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2978u;
        // 0x3d297c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2980u;
        goto label_3d2980;
    }
    ctx->pc = 0x3D2978u;
    {
        const bool branch_taken_0x3d2978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2978u;
        // 0x3d297c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2978) {
            ctx->pc = 0x3D2984u;
            goto label_3d2984;
        }
    }
    ctx->pc = 0x3D2980u;
label_3d2980:
    // 0x3d2980: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d2980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d2984:
    // 0x3d2984: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3d2984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d2988:
    // 0x3d2988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d298c:
    // 0x3d298c: 0x5462006d  bnel        $v1, $v0, . + 4 + (0x6D << 2)
label_3d2990:
    if (ctx->pc == 0x3D2990u) {
        ctx->pc = 0x3D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D298Cu;
        // 0x3d2990: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2994u;
        goto label_3d2994;
    }
    ctx->pc = 0x3D298Cu;
    {
        const bool branch_taken_0x3d298c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d298c) {
            ctx->pc = 0x3D2990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D298Cu;
            // 0x3d2990: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2B44u;
            goto label_3d2b44;
        }
    }
    ctx->pc = 0x3D2994u;
label_3d2994:
    // 0x3d2994: 0x16830039  bne         $s4, $v1, . + 4 + (0x39 << 2)
label_3d2998:
    if (ctx->pc == 0x3D2998u) {
        ctx->pc = 0x3D2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2994u;
        // 0x3d2998: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D299Cu;
        goto label_3d299c;
    }
    ctx->pc = 0x3D2994u;
    {
        const bool branch_taken_0x3d2994 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2994u;
        // 0x3d2998: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2994) {
            ctx->pc = 0x3D2A7Cu;
            goto label_3d2a7c;
        }
    }
    ctx->pc = 0x3D299Cu;
label_3d299c:
    // 0x3d299c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d29a0:
    // 0x3d29a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d29a4:
    // 0x3d29a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d29a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d29a8:
    // 0x3d29a8: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x3d29a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_3d29ac:
    // 0x3d29ac: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x3d29acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_3d29b0:
    // 0x3d29b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d29b4:
    // 0x3d29b4: 0xae6300c8  sw          $v1, 0xC8($s3)
    ctx->pc = 0x3d29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 3));
label_3d29b8:
    // 0x3d29b8: 0xc0ea16a  jal         func_3A85A8
label_3d29bc:
    if (ctx->pc == 0x3D29BCu) {
        ctx->pc = 0x3D29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29B8u;
        // 0x3d29bc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D29C0u;
        goto label_3d29c0;
    }
    ctx->pc = 0x3D29B8u;
    SET_GPR_U32(ctx, 31, 0x3D29C0u);
    ctx->pc = 0x3D29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D29B8u;
    // 0x3d29bc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D29B8u, 0x3D29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D29C0u;
label_3d29c0:
    // 0x3d29c0: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3d29c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d29c4:
    // 0x3d29c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d29c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d29c8:
    // 0x3d29c8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d29cc:
    // 0x3d29cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d29d0:
    // 0x3d29d0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d29d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d29d4:
    // 0x3d29d4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d29d8:
    // 0x3d29d8: 0x60f809  jalr        $v1
label_3d29dc:
    if (ctx->pc == 0x3D29DCu) {
        ctx->pc = 0x3D29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29D8u;
        // 0x3d29dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D29E0u;
        goto label_3d29e0;
    }
    ctx->pc = 0x3D29D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D29E0u);
        ctx->pc = 0x3D29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29D8u;
        // 0x3d29dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D29D8u, 0x3D29E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D29E0u;
label_3d29e0:
    // 0x3d29e0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3d29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d29e4:
    // 0x3d29e4: 0xc0ea16a  jal         func_3A85A8
label_3d29e8:
    if (ctx->pc == 0x3D29E8u) {
        ctx->pc = 0x3D29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29E4u;
        // 0x3d29e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D29ECu;
        goto label_3d29ec;
    }
    ctx->pc = 0x3D29E4u;
    SET_GPR_U32(ctx, 31, 0x3D29ECu);
    ctx->pc = 0x3D29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D29E4u;
    // 0x3d29e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D29E4u, 0x3D29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D29ECu;
label_3d29ec:
    // 0x3d29ec: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x3d29ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3d29f0:
    // 0x3d29f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d29f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d29f4:
    // 0x3d29f4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d29f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d29f8:
    // 0x3d29f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d29fc:
    // 0x3d29fc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d29fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2a00:
    // 0x3d2a00: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2a04:
    // 0x3d2a04: 0x60f809  jalr        $v1
label_3d2a08:
    if (ctx->pc == 0x3D2A08u) {
        ctx->pc = 0x3D2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A04u;
        // 0x3d2a08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A0Cu;
        goto label_3d2a0c;
    }
    ctx->pc = 0x3D2A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2A0Cu);
        ctx->pc = 0x3D2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A04u;
        // 0x3d2a08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2A04u, 0x3D2A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2A0Cu;
label_3d2a0c:
    // 0x3d2a0c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3d2a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d2a10:
    // 0x3d2a10: 0xc0ea16a  jal         func_3A85A8
label_3d2a14:
    if (ctx->pc == 0x3D2A14u) {
        ctx->pc = 0x3D2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A10u;
        // 0x3d2a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A18u;
        goto label_3d2a18;
    }
    ctx->pc = 0x3D2A10u;
    SET_GPR_U32(ctx, 31, 0x3D2A18u);
    ctx->pc = 0x3D2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A10u;
    // 0x3d2a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D2A10u, 0x3D2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A18u;
label_3d2a18:
    // 0x3d2a18: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3d2a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d2a1c:
    // 0x3d2a1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2a20:
    // 0x3d2a20: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d2a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d2a24:
    // 0x3d2a24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d2a28:
    // 0x3d2a28: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d2a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2a2c:
    // 0x3d2a2c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2a30:
    // 0x3d2a30: 0x60f809  jalr        $v1
label_3d2a34:
    if (ctx->pc == 0x3D2A34u) {
        ctx->pc = 0x3D2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A30u;
        // 0x3d2a34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A38u;
        goto label_3d2a38;
    }
    ctx->pc = 0x3D2A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2A38u);
        ctx->pc = 0x3D2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A30u;
        // 0x3d2a34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2A30u, 0x3D2A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2A38u;
label_3d2a38:
    // 0x3d2a38: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3d2a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d2a3c:
    // 0x3d2a3c: 0xc0ea16a  jal         func_3A85A8
label_3d2a40:
    if (ctx->pc == 0x3D2A40u) {
        ctx->pc = 0x3D2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A3Cu;
        // 0x3d2a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A44u;
        goto label_3d2a44;
    }
    ctx->pc = 0x3D2A3Cu;
    SET_GPR_U32(ctx, 31, 0x3D2A44u);
    ctx->pc = 0x3D2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A3Cu;
    // 0x3d2a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D2A3Cu, 0x3D2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A44u;
label_3d2a44:
    // 0x3d2a44: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x3d2a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d2a48:
    // 0x3d2a48: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d2a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d2a4c:
    // 0x3d2a4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2a50:
    // 0x3d2a50: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d2a54:
    // 0x3d2a54: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d2a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2a58:
    // 0x3d2a58: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2a5c:
    // 0x3d2a5c: 0x60f809  jalr        $v1
label_3d2a60:
    if (ctx->pc == 0x3D2A60u) {
        ctx->pc = 0x3D2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A5Cu;
        // 0x3d2a60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A64u;
        goto label_3d2a64;
    }
    ctx->pc = 0x3D2A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2A64u);
        ctx->pc = 0x3D2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A5Cu;
        // 0x3d2a60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2A5Cu, 0x3D2A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2A64u;
label_3d2a64:
    // 0x3d2a64: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3d2a64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3d2a68:
    // 0x3d2a68: 0x3c04f164  lui         $a0, 0xF164
    ctx->pc = 0x3d2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61796 << 16));
label_3d2a6c:
    // 0x3d2a6c: 0x3484dfe0  ori         $a0, $a0, 0xDFE0
    ctx->pc = 0x3d2a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57312);
label_3d2a70:
    // 0x3d2a70: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d2a74:
    // 0x3d2a74: 0xc045c8e  jal         func_117238
label_3d2a78:
    if (ctx->pc == 0x3D2A78u) {
        ctx->pc = 0x3D2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A74u;
        // 0x3d2a78: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A7Cu;
        goto label_3d2a7c;
    }
    ctx->pc = 0x3D2A74u;
    SET_GPR_U32(ctx, 31, 0x3D2A7Cu);
    ctx->pc = 0x3D2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A74u;
    // 0x3d2a78: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D2A74u, 0x3D2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A7Cu;
label_3d2a7c:
    // 0x3d2a7c: 0x56800031  bnel        $s4, $zero, . + 4 + (0x31 << 2)
label_3d2a80:
    if (ctx->pc == 0x3D2A80u) {
        ctx->pc = 0x3D2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A7Cu;
        // 0x3d2a80: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A84u;
        goto label_3d2a84;
    }
    ctx->pc = 0x3D2A7Cu;
    {
        const bool branch_taken_0x3d2a7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a7c) {
            ctx->pc = 0x3D2A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A7Cu;
            // 0x3d2a80: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2B44u;
            goto label_3d2b44;
        }
    }
    ctx->pc = 0x3D2A84u;
label_3d2a84:
    // 0x3d2a84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d2a88:
    // 0x3d2a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2a8c:
    // 0x3d2a8c: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x3d2a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_3d2a90:
    // 0x3d2a90: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x3d2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_3d2a94:
    // 0x3d2a94: 0xc0ea16a  jal         func_3A85A8
label_3d2a98:
    if (ctx->pc == 0x3D2A98u) {
        ctx->pc = 0x3D2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A94u;
        // 0x3d2a98: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2A9Cu;
        goto label_3d2a9c;
    }
    ctx->pc = 0x3D2A94u;
    SET_GPR_U32(ctx, 31, 0x3D2A9Cu);
    ctx->pc = 0x3D2A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A94u;
    // 0x3d2a98: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D2A94u, 0x3D2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A9Cu;
label_3d2a9c:
    // 0x3d2a9c: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3d2a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d2aa0:
    // 0x3d2aa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2aa4:
    // 0x3d2aa4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d2aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d2aa8:
    // 0x3d2aa8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d2aac:
    // 0x3d2aac: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d2aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2ab0:
    // 0x3d2ab0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2ab4:
    // 0x3d2ab4: 0x60f809  jalr        $v1
label_3d2ab8:
    if (ctx->pc == 0x3D2AB8u) {
        ctx->pc = 0x3D2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AB4u;
        // 0x3d2ab8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2ABCu;
        goto label_3d2abc;
    }
    ctx->pc = 0x3D2AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2ABCu);
        ctx->pc = 0x3D2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AB4u;
        // 0x3d2ab8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2AB4u, 0x3D2ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2ABCu;
label_3d2abc:
    // 0x3d2abc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3d2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d2ac0:
    // 0x3d2ac0: 0xc0ea16a  jal         func_3A85A8
label_3d2ac4:
    if (ctx->pc == 0x3D2AC4u) {
        ctx->pc = 0x3D2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AC0u;
        // 0x3d2ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2AC8u;
        goto label_3d2ac8;
    }
    ctx->pc = 0x3D2AC0u;
    SET_GPR_U32(ctx, 31, 0x3D2AC8u);
    ctx->pc = 0x3D2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2AC0u;
    // 0x3d2ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D2AC0u, 0x3D2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2AC8u;
label_3d2ac8:
    // 0x3d2ac8: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x3d2ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3d2acc:
    // 0x3d2acc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ad0:
    // 0x3d2ad0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d2ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d2ad4:
    // 0x3d2ad4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d2ad8:
    // 0x3d2ad8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d2ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2adc:
    // 0x3d2adc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2ae0:
    // 0x3d2ae0: 0x60f809  jalr        $v1
label_3d2ae4:
    if (ctx->pc == 0x3D2AE4u) {
        ctx->pc = 0x3D2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AE0u;
        // 0x3d2ae4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2AE8u;
        goto label_3d2ae8;
    }
    ctx->pc = 0x3D2AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2AE8u);
        ctx->pc = 0x3D2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AE0u;
        // 0x3d2ae4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2AE0u, 0x3D2AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2AE8u;
label_3d2ae8:
    // 0x3d2ae8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3d2ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d2aec:
    // 0x3d2aec: 0xc0ea16a  jal         func_3A85A8
label_3d2af0:
    if (ctx->pc == 0x3D2AF0u) {
        ctx->pc = 0x3D2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AECu;
        // 0x3d2af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2AF4u;
        goto label_3d2af4;
    }
    ctx->pc = 0x3D2AECu;
    SET_GPR_U32(ctx, 31, 0x3D2AF4u);
    ctx->pc = 0x3D2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2AECu;
    // 0x3d2af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D2AECu, 0x3D2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2AF4u;
label_3d2af4:
    // 0x3d2af4: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3d2af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d2af8:
    // 0x3d2af8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2afc:
    // 0x3d2afc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d2afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d2b00:
    // 0x3d2b00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d2b04:
    // 0x3d2b04: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d2b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2b08:
    // 0x3d2b08: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2b0c:
    // 0x3d2b0c: 0x60f809  jalr        $v1
label_3d2b10:
    if (ctx->pc == 0x3D2B10u) {
        ctx->pc = 0x3D2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B0Cu;
        // 0x3d2b10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2B14u;
        goto label_3d2b14;
    }
    ctx->pc = 0x3D2B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2B14u);
        ctx->pc = 0x3D2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B0Cu;
        // 0x3d2b10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2B0Cu, 0x3D2B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2B14u;
label_3d2b14:
    // 0x3d2b14: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3d2b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d2b18:
    // 0x3d2b18: 0xc0ea16a  jal         func_3A85A8
label_3d2b1c:
    if (ctx->pc == 0x3D2B1Cu) {
        ctx->pc = 0x3D2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B18u;
        // 0x3d2b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2B20u;
        goto label_3d2b20;
    }
    ctx->pc = 0x3D2B18u;
    SET_GPR_U32(ctx, 31, 0x3D2B20u);
    ctx->pc = 0x3D2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2B18u;
    // 0x3d2b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D2B18u, 0x3D2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2B20u;
label_3d2b20:
    // 0x3d2b20: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x3d2b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d2b24:
    // 0x3d2b24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2b28:
    // 0x3d2b28: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d2b2c:
    // 0x3d2b2c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d2b30:
    // 0x3d2b30: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d2b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d2b34:
    // 0x3d2b34: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d2b38:
    // 0x3d2b38: 0x60f809  jalr        $v1
label_3d2b3c:
    if (ctx->pc == 0x3D2B3Cu) {
        ctx->pc = 0x3D2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B38u;
        // 0x3d2b3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2B40u;
        goto label_3d2b40;
    }
    ctx->pc = 0x3D2B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D2B40u);
        ctx->pc = 0x3D2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B38u;
        // 0x3d2b3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2B38u, 0x3D2B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2B40u;
label_3d2b40:
    // 0x3d2b40: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3d2b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2b44:
    // 0x3d2b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d2b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2b48:
    // 0x3d2b48: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3d2b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d2b4c:
    // 0x3d2b4c: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3d2b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d2b50:
    // 0x3d2b50: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3d2b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d2b54:
    // 0x3d2b54: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x3d2b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d2b58:
    // 0x3d2b58: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3d2b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d2b5c:
    // 0x3d2b5c: 0x3e00008  jr          $ra
label_3d2b60:
    if (ctx->pc == 0x3D2B60u) {
        ctx->pc = 0x3D2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B5Cu;
        // 0x3d2b60: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2B64u;
        goto label_3d2b64;
    }
    ctx->pc = 0x3D2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B5Cu;
        // 0x3d2b60: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2B64u;
label_3d2b64:
    // 0x3d2b64: 0x0  nop
    ctx->pc = 0x3d2b64u;
    // NOP
    ctx->pc = 0x3d2b68u;
}
