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

// Function: sub_003F2870
// Address: 0x3f2870 - 0x3f2af0
void sub_003F2870_0x3f2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2870_0x3f2870");
#endif

    switch (ctx->pc) {
        case 0x3f2870u: goto label_3f2870;
        case 0x3f2874u: goto label_3f2874;
        case 0x3f2878u: goto label_3f2878;
        case 0x3f287cu: goto label_3f287c;
        case 0x3f2880u: goto label_3f2880;
        case 0x3f2884u: goto label_3f2884;
        case 0x3f2888u: goto label_3f2888;
        case 0x3f288cu: goto label_3f288c;
        case 0x3f2890u: goto label_3f2890;
        case 0x3f2894u: goto label_3f2894;
        case 0x3f2898u: goto label_3f2898;
        case 0x3f289cu: goto label_3f289c;
        case 0x3f28a0u: goto label_3f28a0;
        case 0x3f28a4u: goto label_3f28a4;
        case 0x3f28a8u: goto label_3f28a8;
        case 0x3f28acu: goto label_3f28ac;
        case 0x3f28b0u: goto label_3f28b0;
        case 0x3f28b4u: goto label_3f28b4;
        case 0x3f28b8u: goto label_3f28b8;
        case 0x3f28bcu: goto label_3f28bc;
        case 0x3f28c0u: goto label_3f28c0;
        case 0x3f28c4u: goto label_3f28c4;
        case 0x3f28c8u: goto label_3f28c8;
        case 0x3f28ccu: goto label_3f28cc;
        case 0x3f28d0u: goto label_3f28d0;
        case 0x3f28d4u: goto label_3f28d4;
        case 0x3f28d8u: goto label_3f28d8;
        case 0x3f28dcu: goto label_3f28dc;
        case 0x3f28e0u: goto label_3f28e0;
        case 0x3f28e4u: goto label_3f28e4;
        case 0x3f28e8u: goto label_3f28e8;
        case 0x3f28ecu: goto label_3f28ec;
        case 0x3f28f0u: goto label_3f28f0;
        case 0x3f28f4u: goto label_3f28f4;
        case 0x3f28f8u: goto label_3f28f8;
        case 0x3f28fcu: goto label_3f28fc;
        case 0x3f2900u: goto label_3f2900;
        case 0x3f2904u: goto label_3f2904;
        case 0x3f2908u: goto label_3f2908;
        case 0x3f290cu: goto label_3f290c;
        case 0x3f2910u: goto label_3f2910;
        case 0x3f2914u: goto label_3f2914;
        case 0x3f2918u: goto label_3f2918;
        case 0x3f291cu: goto label_3f291c;
        case 0x3f2920u: goto label_3f2920;
        case 0x3f2924u: goto label_3f2924;
        case 0x3f2928u: goto label_3f2928;
        case 0x3f292cu: goto label_3f292c;
        case 0x3f2930u: goto label_3f2930;
        case 0x3f2934u: goto label_3f2934;
        case 0x3f2938u: goto label_3f2938;
        case 0x3f293cu: goto label_3f293c;
        case 0x3f2940u: goto label_3f2940;
        case 0x3f2944u: goto label_3f2944;
        case 0x3f2948u: goto label_3f2948;
        case 0x3f294cu: goto label_3f294c;
        case 0x3f2950u: goto label_3f2950;
        case 0x3f2954u: goto label_3f2954;
        case 0x3f2958u: goto label_3f2958;
        case 0x3f295cu: goto label_3f295c;
        case 0x3f2960u: goto label_3f2960;
        case 0x3f2964u: goto label_3f2964;
        case 0x3f2968u: goto label_3f2968;
        case 0x3f296cu: goto label_3f296c;
        case 0x3f2970u: goto label_3f2970;
        case 0x3f2974u: goto label_3f2974;
        case 0x3f2978u: goto label_3f2978;
        case 0x3f297cu: goto label_3f297c;
        case 0x3f2980u: goto label_3f2980;
        case 0x3f2984u: goto label_3f2984;
        case 0x3f2988u: goto label_3f2988;
        case 0x3f298cu: goto label_3f298c;
        case 0x3f2990u: goto label_3f2990;
        case 0x3f2994u: goto label_3f2994;
        case 0x3f2998u: goto label_3f2998;
        case 0x3f299cu: goto label_3f299c;
        case 0x3f29a0u: goto label_3f29a0;
        case 0x3f29a4u: goto label_3f29a4;
        case 0x3f29a8u: goto label_3f29a8;
        case 0x3f29acu: goto label_3f29ac;
        case 0x3f29b0u: goto label_3f29b0;
        case 0x3f29b4u: goto label_3f29b4;
        case 0x3f29b8u: goto label_3f29b8;
        case 0x3f29bcu: goto label_3f29bc;
        case 0x3f29c0u: goto label_3f29c0;
        case 0x3f29c4u: goto label_3f29c4;
        case 0x3f29c8u: goto label_3f29c8;
        case 0x3f29ccu: goto label_3f29cc;
        case 0x3f29d0u: goto label_3f29d0;
        case 0x3f29d4u: goto label_3f29d4;
        case 0x3f29d8u: goto label_3f29d8;
        case 0x3f29dcu: goto label_3f29dc;
        case 0x3f29e0u: goto label_3f29e0;
        case 0x3f29e4u: goto label_3f29e4;
        case 0x3f29e8u: goto label_3f29e8;
        case 0x3f29ecu: goto label_3f29ec;
        case 0x3f29f0u: goto label_3f29f0;
        case 0x3f29f4u: goto label_3f29f4;
        case 0x3f29f8u: goto label_3f29f8;
        case 0x3f29fcu: goto label_3f29fc;
        case 0x3f2a00u: goto label_3f2a00;
        case 0x3f2a04u: goto label_3f2a04;
        case 0x3f2a08u: goto label_3f2a08;
        case 0x3f2a0cu: goto label_3f2a0c;
        case 0x3f2a10u: goto label_3f2a10;
        case 0x3f2a14u: goto label_3f2a14;
        case 0x3f2a18u: goto label_3f2a18;
        case 0x3f2a1cu: goto label_3f2a1c;
        case 0x3f2a20u: goto label_3f2a20;
        case 0x3f2a24u: goto label_3f2a24;
        case 0x3f2a28u: goto label_3f2a28;
        case 0x3f2a2cu: goto label_3f2a2c;
        case 0x3f2a30u: goto label_3f2a30;
        case 0x3f2a34u: goto label_3f2a34;
        case 0x3f2a38u: goto label_3f2a38;
        case 0x3f2a3cu: goto label_3f2a3c;
        case 0x3f2a40u: goto label_3f2a40;
        case 0x3f2a44u: goto label_3f2a44;
        case 0x3f2a48u: goto label_3f2a48;
        case 0x3f2a4cu: goto label_3f2a4c;
        case 0x3f2a50u: goto label_3f2a50;
        case 0x3f2a54u: goto label_3f2a54;
        case 0x3f2a58u: goto label_3f2a58;
        case 0x3f2a5cu: goto label_3f2a5c;
        case 0x3f2a60u: goto label_3f2a60;
        case 0x3f2a64u: goto label_3f2a64;
        case 0x3f2a68u: goto label_3f2a68;
        case 0x3f2a6cu: goto label_3f2a6c;
        case 0x3f2a70u: goto label_3f2a70;
        case 0x3f2a74u: goto label_3f2a74;
        case 0x3f2a78u: goto label_3f2a78;
        case 0x3f2a7cu: goto label_3f2a7c;
        case 0x3f2a80u: goto label_3f2a80;
        case 0x3f2a84u: goto label_3f2a84;
        case 0x3f2a88u: goto label_3f2a88;
        case 0x3f2a8cu: goto label_3f2a8c;
        case 0x3f2a90u: goto label_3f2a90;
        case 0x3f2a94u: goto label_3f2a94;
        case 0x3f2a98u: goto label_3f2a98;
        case 0x3f2a9cu: goto label_3f2a9c;
        case 0x3f2aa0u: goto label_3f2aa0;
        case 0x3f2aa4u: goto label_3f2aa4;
        case 0x3f2aa8u: goto label_3f2aa8;
        case 0x3f2aacu: goto label_3f2aac;
        case 0x3f2ab0u: goto label_3f2ab0;
        case 0x3f2ab4u: goto label_3f2ab4;
        case 0x3f2ab8u: goto label_3f2ab8;
        case 0x3f2abcu: goto label_3f2abc;
        case 0x3f2ac0u: goto label_3f2ac0;
        case 0x3f2ac4u: goto label_3f2ac4;
        case 0x3f2ac8u: goto label_3f2ac8;
        case 0x3f2accu: goto label_3f2acc;
        case 0x3f2ad0u: goto label_3f2ad0;
        case 0x3f2ad4u: goto label_3f2ad4;
        case 0x3f2ad8u: goto label_3f2ad8;
        case 0x3f2adcu: goto label_3f2adc;
        case 0x3f2ae0u: goto label_3f2ae0;
        case 0x3f2ae4u: goto label_3f2ae4;
        case 0x3f2ae8u: goto label_3f2ae8;
        case 0x3f2aecu: goto label_3f2aec;
        default: break;
    }

    ctx->pc = 0x3f2870u;

label_3f2870:
    // 0x3f2870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f2870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f2874:
    // 0x3f2874: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f2874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3f2878:
    // 0x3f2878: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f2878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3f287c:
    // 0x3f287c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f2880:
    // 0x3f2880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f2880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2884:
    // 0x3f2884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f2884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f2888:
    // 0x3f2888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f2888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f288c:
    // 0x3f288c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f288cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2890:
    // 0x3f2890: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2894:
    // 0x3f2894: 0x40f809  jalr        $v0
label_3f2898:
    if (ctx->pc == 0x3F2898u) {
        ctx->pc = 0x3F2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2894u;
        // 0x3f2898: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F289Cu;
        goto label_3f289c;
    }
    ctx->pc = 0x3F2894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F289Cu);
        ctx->pc = 0x3F2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2894u;
        // 0x3f2898: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2894u, 0x3F289Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F289Cu;
label_3f289c:
    // 0x3f289c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f289cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f28a0:
    // 0x3f28a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f28a4:
    // 0x3f28a4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3f28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3f28a8:
    // 0x3f28a8: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x3f28a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_3f28ac:
    // 0x3f28ac: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_3f28b0:
    if (ctx->pc == 0x3F28B0u) {
        ctx->pc = 0x3F28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28ACu;
        // 0x3f28b0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F28B4u;
        goto label_3f28b4;
    }
    ctx->pc = 0x3F28ACu;
    {
        const bool branch_taken_0x3f28ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f28ac) {
            ctx->pc = 0x3F28B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F28ACu;
            // 0x3f28b0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2904u;
            goto label_3f2904;
        }
    }
    ctx->pc = 0x3F28B4u;
label_3f28b4:
    // 0x3f28b4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3f28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3f28b8:
    // 0x3f28b8: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_3f28bc:
    if (ctx->pc == 0x3F28BCu) {
        ctx->pc = 0x3F28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28B8u;
        // 0x3f28bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F28C0u;
        goto label_3f28c0;
    }
    ctx->pc = 0x3F28B8u;
    {
        const bool branch_taken_0x3f28b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28B8u;
        // 0x3f28bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f28b8) {
            ctx->pc = 0x3F2AD8u;
            goto label_3f2ad8;
        }
    }
    ctx->pc = 0x3F28C0u;
label_3f28c0:
    // 0x3f28c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f28c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f28c4:
    // 0x3f28c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f28c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f28c8:
    // 0x3f28c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f28cc:
    // 0x3f28cc: 0x40f809  jalr        $v0
label_3f28d0:
    if (ctx->pc == 0x3F28D0u) {
        ctx->pc = 0x3F28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28CCu;
        // 0x3f28d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F28D4u;
        goto label_3f28d4;
    }
    ctx->pc = 0x3F28CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F28D4u);
        ctx->pc = 0x3F28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28CCu;
        // 0x3f28d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F28CCu, 0x3F28D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F28D4u;
label_3f28d4:
    // 0x3f28d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f28d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3f28d8:
    // 0x3f28d8: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
label_3f28dc:
    if (ctx->pc == 0x3F28DCu) {
        ctx->pc = 0x3F28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28D8u;
        // 0x3f28dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F28E0u;
        goto label_3f28e0;
    }
    ctx->pc = 0x3F28D8u;
    {
        const bool branch_taken_0x3f28d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28D8u;
        // 0x3f28dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f28d8) {
            ctx->pc = 0x3F2AD8u;
            goto label_3f2ad8;
        }
    }
    ctx->pc = 0x3F28E0u;
label_3f28e0:
    // 0x3f28e0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3f28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f28e4:
    // 0x3f28e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f28e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f28e8:
    // 0x3f28e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f28e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f28ec:
    // 0x3f28ec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3f28ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3f28f0:
    // 0x3f28f0: 0xc0fc9a6  jal         func_3F2698
label_3f28f4:
    if (ctx->pc == 0x3F28F4u) {
        ctx->pc = 0x3F28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28F0u;
        // 0x3f28f4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F28F8u;
        goto label_3f28f8;
    }
    ctx->pc = 0x3F28F0u;
    SET_GPR_U32(ctx, 31, 0x3F28F8u);
    ctx->pc = 0x3F28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F28F0u;
    // 0x3f28f4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2698u, 0x3F28F0u, 0x3F28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F28F8u;
label_3f28f8:
    // 0x3f28f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f28fc:
    // 0x3f28fc: 0x10000075  b           . + 4 + (0x75 << 2)
label_3f2900:
    if (ctx->pc == 0x3F2900u) {
        ctx->pc = 0x3F2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28FCu;
        // 0x3f2900: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2904u;
        goto label_3f2904;
    }
    ctx->pc = 0x3F28FCu;
    {
        const bool branch_taken_0x3f28fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28FCu;
        // 0x3f2900: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f28fc) {
            ctx->pc = 0x3F2AD4u;
            goto label_3f2ad4;
        }
    }
    ctx->pc = 0x3F2904u;
label_3f2904:
    // 0x3f2904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f2908:
    // 0x3f2908: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
label_3f290c:
    if (ctx->pc == 0x3F290Cu) {
        ctx->pc = 0x3F290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2908u;
        // 0x3f290c: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2910u;
        goto label_3f2910;
    }
    ctx->pc = 0x3F2908u;
    {
        const bool branch_taken_0x3f2908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f2908) {
            ctx->pc = 0x3F290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2908u;
            // 0x3f290c: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2998u;
            goto label_3f2998;
        }
    }
    ctx->pc = 0x3F2910u;
label_3f2910:
    // 0x3f2910: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f2910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f2914:
    // 0x3f2914: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f2914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f2918:
    // 0x3f2918: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f2918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f291c:
    // 0x3f291c: 0x40f809  jalr        $v0
label_3f2920:
    if (ctx->pc == 0x3F2920u) {
        ctx->pc = 0x3F2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F291Cu;
        // 0x3f2920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2924u;
        goto label_3f2924;
    }
    ctx->pc = 0x3F291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2924u);
        ctx->pc = 0x3F2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F291Cu;
        // 0x3f2920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F291Cu, 0x3F2924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2924u;
label_3f2924:
    // 0x3f2924: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3f2928:
    // 0x3f2928: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3f292c:
    if (ctx->pc == 0x3F292Cu) {
        ctx->pc = 0x3F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2928u;
        // 0x3f292c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2930u;
        goto label_3f2930;
    }
    ctx->pc = 0x3F2928u;
    {
        const bool branch_taken_0x3f2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2928u;
        // 0x3f292c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2928) {
            ctx->pc = 0x3F2994u;
            goto label_3f2994;
        }
    }
    ctx->pc = 0x3F2930u;
label_3f2930:
    // 0x3f2930: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3f2930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f2934:
    // 0x3f2934: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f2938:
    // 0x3f2938: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f2938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f293c:
    // 0x3f293c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3f293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f2940:
    // 0x3f2940: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3f2944:
    if (ctx->pc == 0x3F2944u) {
        ctx->pc = 0x3F2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2940u;
        // 0x3f2944: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2948u;
        goto label_3f2948;
    }
    ctx->pc = 0x3F2940u;
    {
        const bool branch_taken_0x3f2940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2940u;
        // 0x3f2944: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2940) {
            ctx->pc = 0x3F2970u;
            goto label_3f2970;
        }
    }
    ctx->pc = 0x3F2948u;
label_3f2948:
    // 0x3f2948: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f2948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f294c:
    // 0x3f294c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3f2950:
    if (ctx->pc == 0x3F2950u) {
        ctx->pc = 0x3F2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F294Cu;
        // 0x3f2950: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2954u;
        goto label_3f2954;
    }
    ctx->pc = 0x3F294Cu;
    {
        const bool branch_taken_0x3f294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F294Cu;
        // 0x3f2950: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f294c) {
            ctx->pc = 0x3F2970u;
            goto label_3f2970;
        }
    }
    ctx->pc = 0x3F2954u;
label_3f2954:
    // 0x3f2954: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2958:
    // 0x3f2958: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3f295c:
    if (ctx->pc == 0x3F295Cu) {
        ctx->pc = 0x3F295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2958u;
        // 0x3f295c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2960u;
        goto label_3f2960;
    }
    ctx->pc = 0x3F2958u;
    {
        const bool branch_taken_0x3f2958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2958u;
        // 0x3f295c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2958) {
            ctx->pc = 0x3F2970u;
            goto label_3f2970;
        }
    }
    ctx->pc = 0x3F2960u;
label_3f2960:
    // 0x3f2960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f2964:
    // 0x3f2964: 0xc0fc8fe  jal         func_3F23F8
label_3f2968:
    if (ctx->pc == 0x3F2968u) {
        ctx->pc = 0x3F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2964u;
        // 0x3f2968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F296Cu;
        goto label_3f296c;
    }
    ctx->pc = 0x3F2964u;
    SET_GPR_U32(ctx, 31, 0x3F296Cu);
    ctx->pc = 0x3F2968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2964u;
    // 0x3f2968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F23F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F23F8u, 0x3F2964u, 0x3F296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F296Cu;
label_3f296c:
    // 0x3f296c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f2970:
    // 0x3f2970: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3f2970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3f2974:
    // 0x3f2974: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x3f2974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3f2978:
    // 0x3f2978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f2978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f297c:
    // 0x3f297c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x3f297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_3f2980:
    // 0x3f2980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2984:
    // 0x3f2984: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x3f2984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_3f2988:
    // 0x3f2988: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3f2988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_3f298c:
    // 0x3f298c: 0x10000052  b           . + 4 + (0x52 << 2)
label_3f2990:
    if (ctx->pc == 0x3F2990u) {
        ctx->pc = 0x3F2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F298Cu;
        // 0x3f2990: 0xa2260108  sb          $a2, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2994u;
        goto label_3f2994;
    }
    ctx->pc = 0x3F298Cu;
    {
        const bool branch_taken_0x3f298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F298Cu;
        // 0x3f2990: 0xa2260108  sb          $a2, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f298c) {
            ctx->pc = 0x3F2AD8u;
            goto label_3f2ad8;
        }
    }
    ctx->pc = 0x3F2994u;
label_3f2994:
    // 0x3f2994: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3f2994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3f2998:
    // 0x3f2998: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f2998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f299c:
    // 0x3f299c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3f299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3f29a0:
    // 0x3f29a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f29a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f29a4:
    // 0x3f29a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f29a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f29a8:
    // 0x3f29a8: 0xc0e94a0  jal         func_3A5280
label_3f29ac:
    if (ctx->pc == 0x3F29ACu) {
        ctx->pc = 0x3F29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29A8u;
        // 0x3f29ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F29B0u;
        goto label_3f29b0;
    }
    ctx->pc = 0x3F29A8u;
    SET_GPR_U32(ctx, 31, 0x3F29B0u);
    ctx->pc = 0x3F29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29A8u;
    // 0x3f29ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F29A8u, 0x3F29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29B0u;
label_3f29b0:
    // 0x3f29b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f29b4:
    if (ctx->pc == 0x3F29B4u) {
        ctx->pc = 0x3F29B8u;
        goto label_3f29b8;
    }
    ctx->pc = 0x3F29B0u;
    {
        const bool branch_taken_0x3f29b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f29b0) {
            ctx->pc = 0x3F29CCu;
            goto label_3f29cc;
        }
    }
    ctx->pc = 0x3F29B8u;
label_3f29b8:
    // 0x3f29b8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3f29b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3f29bc:
    // 0x3f29bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f29bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f29c0:
    // 0x3f29c0: 0xc0e947e  jal         func_3A51F8
label_3f29c4:
    if (ctx->pc == 0x3F29C4u) {
        ctx->pc = 0x3F29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29C0u;
        // 0x3f29c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F29C8u;
        goto label_3f29c8;
    }
    ctx->pc = 0x3F29C0u;
    SET_GPR_U32(ctx, 31, 0x3F29C8u);
    ctx->pc = 0x3F29C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29C0u;
    // 0x3f29c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3F29C0u, 0x3F29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F29C8u;
label_3f29c8:
    // 0x3f29c8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3f29c8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f29cc:
    // 0x3f29cc: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_3f29d0:
    if (ctx->pc == 0x3F29D0u) {
        ctx->pc = 0x3F29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29CCu;
        // 0x3f29d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F29D4u;
        goto label_3f29d4;
    }
    ctx->pc = 0x3F29CCu;
    {
        const bool branch_taken_0x3f29cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f29cc) {
            ctx->pc = 0x3F29D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F29CCu;
            // 0x3f29d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A0Cu;
            goto label_3f2a0c;
        }
    }
    ctx->pc = 0x3F29D4u;
label_3f29d4:
    // 0x3f29d4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f29d8:
    // 0x3f29d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3f29dc:
    if (ctx->pc == 0x3F29DCu) {
        ctx->pc = 0x3F29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29D8u;
        // 0x3f29dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F29E0u;
        goto label_3f29e0;
    }
    ctx->pc = 0x3F29D8u;
    {
        const bool branch_taken_0x3f29d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f29d8) {
            ctx->pc = 0x3F29DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F29D8u;
            // 0x3f29dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A18u;
            goto label_3f2a18;
        }
    }
    ctx->pc = 0x3F29E0u;
label_3f29e0:
    // 0x3f29e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f29e4:
    // 0x3f29e4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3f29e8:
    if (ctx->pc == 0x3F29E8u) {
        ctx->pc = 0x3F29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29E4u;
        // 0x3f29e8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F29ECu;
        goto label_3f29ec;
    }
    ctx->pc = 0x3F29E4u;
    {
        const bool branch_taken_0x3f29e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f29e4) {
            ctx->pc = 0x3F29E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F29E4u;
            // 0x3f29e8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A18u;
            goto label_3f2a18;
        }
    }
    ctx->pc = 0x3F29ECu;
label_3f29ec:
    // 0x3f29ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f29f0:
    // 0x3f29f0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3f29f4:
    if (ctx->pc == 0x3F29F4u) {
        ctx->pc = 0x3F29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29F0u;
        // 0x3f29f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F29F8u;
        goto label_3f29f8;
    }
    ctx->pc = 0x3F29F0u;
    {
        const bool branch_taken_0x3f29f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f29f0) {
            ctx->pc = 0x3F29F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F29F0u;
            // 0x3f29f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A18u;
            goto label_3f2a18;
        }
    }
    ctx->pc = 0x3F29F8u;
label_3f29f8:
    // 0x3f29f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f29f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f29fc:
    // 0x3f29fc: 0xc0fc8fe  jal         func_3F23F8
label_3f2a00:
    if (ctx->pc == 0x3F2A00u) {
        ctx->pc = 0x3F2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F29FCu;
        // 0x3f2a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A04u;
        goto label_3f2a04;
    }
    ctx->pc = 0x3F29FCu;
    SET_GPR_U32(ctx, 31, 0x3F2A04u);
    ctx->pc = 0x3F2A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29FCu;
    // 0x3f2a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F23F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F23F8u, 0x3F29FCu, 0x3F2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A04u;
label_3f2a04:
    // 0x3f2a04: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f2a08:
    if (ctx->pc == 0x3F2A08u) {
        ctx->pc = 0x3F2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A04u;
        // 0x3f2a08: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A0Cu;
        goto label_3f2a0c;
    }
    ctx->pc = 0x3F2A04u;
    {
        const bool branch_taken_0x3f2a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A04u;
        // 0x3f2a08: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a04) {
            ctx->pc = 0x3F2A18u;
            goto label_3f2a18;
        }
    }
    ctx->pc = 0x3F2A0Cu;
label_3f2a0c:
    // 0x3f2a0c: 0xc0fc9a6  jal         func_3F2698
label_3f2a10:
    if (ctx->pc == 0x3F2A10u) {
        ctx->pc = 0x3F2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A0Cu;
        // 0x3f2a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A14u;
        goto label_3f2a14;
    }
    ctx->pc = 0x3F2A0Cu;
    SET_GPR_U32(ctx, 31, 0x3F2A14u);
    ctx->pc = 0x3F2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A0Cu;
    // 0x3f2a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2698u, 0x3F2A0Cu, 0x3F2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A14u;
label_3f2a14:
    // 0x3f2a14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2a18:
    // 0x3f2a18: 0x2c62003d  sltiu       $v0, $v1, 0x3D
    ctx->pc = 0x3f2a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3f2a1c:
    // 0x3f2a1c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3f2a20:
    if (ctx->pc == 0x3F2A20u) {
        ctx->pc = 0x3F2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A1Cu;
        // 0x3f2a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A24u;
        goto label_3f2a24;
    }
    ctx->pc = 0x3F2A1Cu;
    {
        const bool branch_taken_0x3f2a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A1Cu;
        // 0x3f2a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a1c) {
            ctx->pc = 0x3F2AD8u;
            goto label_3f2ad8;
        }
    }
    ctx->pc = 0x3F2A24u;
label_3f2a24:
    // 0x3f2a24: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_3f2a28:
    if (ctx->pc == 0x3F2A28u) {
        ctx->pc = 0x3F2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A24u;
        // 0x3f2a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A2Cu;
        goto label_3f2a2c;
    }
    ctx->pc = 0x3F2A24u;
    {
        const bool branch_taken_0x3f2a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A24u;
        // 0x3f2a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a24) {
            ctx->pc = 0x3F2AD8u;
            goto label_3f2ad8;
        }
    }
    ctx->pc = 0x3F2A2Cu;
label_3f2a2c:
    // 0x3f2a2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f2a30:
    // 0x3f2a30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3f2a34:
    if (ctx->pc == 0x3F2A34u) {
        ctx->pc = 0x3F2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A30u;
        // 0x3f2a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A38u;
        goto label_3f2a38;
    }
    ctx->pc = 0x3F2A30u;
    {
        const bool branch_taken_0x3f2a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A30u;
        // 0x3f2a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a30) {
            ctx->pc = 0x3F2A44u;
            goto label_3f2a44;
        }
    }
    ctx->pc = 0x3F2A38u;
label_3f2a38:
    // 0x3f2a38: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f2a3c:
    // 0x3f2a3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f2a40:
    if (ctx->pc == 0x3F2A40u) {
        ctx->pc = 0x3F2A44u;
        goto label_3f2a44;
    }
    ctx->pc = 0x3F2A3Cu;
    {
        const bool branch_taken_0x3f2a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2a3c) {
            ctx->pc = 0x3F2A50u;
            goto label_3f2a50;
        }
    }
    ctx->pc = 0x3F2A44u;
label_3f2a44:
    // 0x3f2a44: 0xc0fc9a6  jal         func_3F2698
label_3f2a48:
    if (ctx->pc == 0x3F2A48u) {
        ctx->pc = 0x3F2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A44u;
        // 0x3f2a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A4Cu;
        goto label_3f2a4c;
    }
    ctx->pc = 0x3F2A44u;
    SET_GPR_U32(ctx, 31, 0x3F2A4Cu);
    ctx->pc = 0x3F2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A44u;
    // 0x3f2a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2698u, 0x3F2A44u, 0x3F2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A4Cu;
label_3f2a4c:
    // 0x3f2a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f2a50:
    // 0x3f2a50: 0xc0e858c  jal         func_3A1630
label_3f2a54:
    if (ctx->pc == 0x3F2A54u) {
        ctx->pc = 0x3F2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A50u;
        // 0x3f2a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2A58u;
        goto label_3f2a58;
    }
    ctx->pc = 0x3F2A50u;
    SET_GPR_U32(ctx, 31, 0x3F2A58u);
    ctx->pc = 0x3F2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A50u;
    // 0x3f2a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F2A50u, 0x3F2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A58u;
label_3f2a58:
    // 0x3f2a58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2a5c:
    // 0x3f2a5c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3f2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3f2a60:
    // 0x3f2a60: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3f2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3f2a64:
    // 0x3f2a64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f2a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f2a68:
    // 0x3f2a68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f2a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f2a6c:
    // 0x3f2a6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f2a70:
    // 0x3f2a70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3f2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f2a74:
    // 0x3f2a74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f2a78:
    // 0x3f2a78: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3f2a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3f2a7c:
    // 0x3f2a7c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f2a80:
    // 0x3f2a80: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3f2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2a84:
    // 0x3f2a84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f2a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f2a88:
    // 0x3f2a88: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3f2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3f2a8c:
    // 0x3f2a8c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3f2a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3f2a90:
    // 0x3f2a90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f2a94:
    // 0x3f2a94: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3f2a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3f2a98:
    // 0x3f2a98: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x3f2a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3f2a9c:
    // 0x3f2a9c: 0xc0f809  jalr        $a2
label_3f2aa0:
    if (ctx->pc == 0x3F2AA0u) {
        ctx->pc = 0x3F2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A9Cu;
        // 0x3f2aa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2AA4u;
        goto label_3f2aa4;
    }
    ctx->pc = 0x3F2A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3F2AA4u);
        ctx->pc = 0x3F2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A9Cu;
        // 0x3f2aa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2A9Cu, 0x3F2AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2AA4u;
label_3f2aa4:
    // 0x3f2aa4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3f2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f2aa8:
    // 0x3f2aa8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f2aac:
    // 0x3f2aac: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x3f2aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
label_3f2ab0:
    // 0x3f2ab0: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x3f2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_3f2ab4:
    // 0x3f2ab4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3f2ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f2ab8:
    // 0x3f2ab8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3f2abc:
    if (ctx->pc == 0x3F2ABCu) {
        ctx->pc = 0x3F2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AB8u;
        // 0x3f2abc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2AC0u;
        goto label_3f2ac0;
    }
    ctx->pc = 0x3F2AB8u;
    {
        const bool branch_taken_0x3f2ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AB8u;
        // 0x3f2abc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ab8) {
            ctx->pc = 0x3F2ACCu;
            goto label_3f2acc;
        }
    }
    ctx->pc = 0x3F2AC0u;
label_3f2ac0:
    // 0x3f2ac0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f2ac4:
    // 0x3f2ac4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f2ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f2ac8:
    // 0x3f2ac8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3f2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3f2acc:
    // 0x3f2acc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f2accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f2ad0:
    // 0x3f2ad0: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x3f2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_3f2ad4:
    // 0x3f2ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ad8:
    // 0x3f2ad8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f2ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f2adc:
    // 0x3f2adc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f2adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f2ae0:
    // 0x3f2ae0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f2ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f2ae4:
    // 0x3f2ae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f2ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2ae8:
    // 0x3f2ae8: 0x3e00008  jr          $ra
label_3f2aec:
    if (ctx->pc == 0x3F2AECu) {
        ctx->pc = 0x3F2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AE8u;
        // 0x3f2aec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2AF0u;
        goto label_fallthrough_0x3f2ae8;
    }
    ctx->pc = 0x3F2AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AE8u;
        // 0x3f2aec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f2ae8:
    ctx->pc = 0x3F2AF0u;
}
