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

// Function: sub_001A2690
// Address: 0x1a2690 - 0x1a2910
void sub_001A2690_0x1a2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2690_0x1a2690");
#endif

    switch (ctx->pc) {
        case 0x1a2690u: goto label_1a2690;
        case 0x1a2694u: goto label_1a2694;
        case 0x1a2698u: goto label_1a2698;
        case 0x1a269cu: goto label_1a269c;
        case 0x1a26a0u: goto label_1a26a0;
        case 0x1a26a4u: goto label_1a26a4;
        case 0x1a26a8u: goto label_1a26a8;
        case 0x1a26acu: goto label_1a26ac;
        case 0x1a26b0u: goto label_1a26b0;
        case 0x1a26b4u: goto label_1a26b4;
        case 0x1a26b8u: goto label_1a26b8;
        case 0x1a26bcu: goto label_1a26bc;
        case 0x1a26c0u: goto label_1a26c0;
        case 0x1a26c4u: goto label_1a26c4;
        case 0x1a26c8u: goto label_1a26c8;
        case 0x1a26ccu: goto label_1a26cc;
        case 0x1a26d0u: goto label_1a26d0;
        case 0x1a26d4u: goto label_1a26d4;
        case 0x1a26d8u: goto label_1a26d8;
        case 0x1a26dcu: goto label_1a26dc;
        case 0x1a26e0u: goto label_1a26e0;
        case 0x1a26e4u: goto label_1a26e4;
        case 0x1a26e8u: goto label_1a26e8;
        case 0x1a26ecu: goto label_1a26ec;
        case 0x1a26f0u: goto label_1a26f0;
        case 0x1a26f4u: goto label_1a26f4;
        case 0x1a26f8u: goto label_1a26f8;
        case 0x1a26fcu: goto label_1a26fc;
        case 0x1a2700u: goto label_1a2700;
        case 0x1a2704u: goto label_1a2704;
        case 0x1a2708u: goto label_1a2708;
        case 0x1a270cu: goto label_1a270c;
        case 0x1a2710u: goto label_1a2710;
        case 0x1a2714u: goto label_1a2714;
        case 0x1a2718u: goto label_1a2718;
        case 0x1a271cu: goto label_1a271c;
        case 0x1a2720u: goto label_1a2720;
        case 0x1a2724u: goto label_1a2724;
        case 0x1a2728u: goto label_1a2728;
        case 0x1a272cu: goto label_1a272c;
        case 0x1a2730u: goto label_1a2730;
        case 0x1a2734u: goto label_1a2734;
        case 0x1a2738u: goto label_1a2738;
        case 0x1a273cu: goto label_1a273c;
        case 0x1a2740u: goto label_1a2740;
        case 0x1a2744u: goto label_1a2744;
        case 0x1a2748u: goto label_1a2748;
        case 0x1a274cu: goto label_1a274c;
        case 0x1a2750u: goto label_1a2750;
        case 0x1a2754u: goto label_1a2754;
        case 0x1a2758u: goto label_1a2758;
        case 0x1a275cu: goto label_1a275c;
        case 0x1a2760u: goto label_1a2760;
        case 0x1a2764u: goto label_1a2764;
        case 0x1a2768u: goto label_1a2768;
        case 0x1a276cu: goto label_1a276c;
        case 0x1a2770u: goto label_1a2770;
        case 0x1a2774u: goto label_1a2774;
        case 0x1a2778u: goto label_1a2778;
        case 0x1a277cu: goto label_1a277c;
        case 0x1a2780u: goto label_1a2780;
        case 0x1a2784u: goto label_1a2784;
        case 0x1a2788u: goto label_1a2788;
        case 0x1a278cu: goto label_1a278c;
        case 0x1a2790u: goto label_1a2790;
        case 0x1a2794u: goto label_1a2794;
        case 0x1a2798u: goto label_1a2798;
        case 0x1a279cu: goto label_1a279c;
        case 0x1a27a0u: goto label_1a27a0;
        case 0x1a27a4u: goto label_1a27a4;
        case 0x1a27a8u: goto label_1a27a8;
        case 0x1a27acu: goto label_1a27ac;
        case 0x1a27b0u: goto label_1a27b0;
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27b8u: goto label_1a27b8;
        case 0x1a27bcu: goto label_1a27bc;
        case 0x1a27c0u: goto label_1a27c0;
        case 0x1a27c4u: goto label_1a27c4;
        case 0x1a27c8u: goto label_1a27c8;
        case 0x1a27ccu: goto label_1a27cc;
        case 0x1a27d0u: goto label_1a27d0;
        case 0x1a27d4u: goto label_1a27d4;
        case 0x1a27d8u: goto label_1a27d8;
        case 0x1a27dcu: goto label_1a27dc;
        case 0x1a27e0u: goto label_1a27e0;
        case 0x1a27e4u: goto label_1a27e4;
        case 0x1a27e8u: goto label_1a27e8;
        case 0x1a27ecu: goto label_1a27ec;
        case 0x1a27f0u: goto label_1a27f0;
        case 0x1a27f4u: goto label_1a27f4;
        case 0x1a27f8u: goto label_1a27f8;
        case 0x1a27fcu: goto label_1a27fc;
        case 0x1a2800u: goto label_1a2800;
        case 0x1a2804u: goto label_1a2804;
        case 0x1a2808u: goto label_1a2808;
        case 0x1a280cu: goto label_1a280c;
        case 0x1a2810u: goto label_1a2810;
        case 0x1a2814u: goto label_1a2814;
        case 0x1a2818u: goto label_1a2818;
        case 0x1a281cu: goto label_1a281c;
        case 0x1a2820u: goto label_1a2820;
        case 0x1a2824u: goto label_1a2824;
        case 0x1a2828u: goto label_1a2828;
        case 0x1a282cu: goto label_1a282c;
        case 0x1a2830u: goto label_1a2830;
        case 0x1a2834u: goto label_1a2834;
        case 0x1a2838u: goto label_1a2838;
        case 0x1a283cu: goto label_1a283c;
        case 0x1a2840u: goto label_1a2840;
        case 0x1a2844u: goto label_1a2844;
        case 0x1a2848u: goto label_1a2848;
        case 0x1a284cu: goto label_1a284c;
        case 0x1a2850u: goto label_1a2850;
        case 0x1a2854u: goto label_1a2854;
        case 0x1a2858u: goto label_1a2858;
        case 0x1a285cu: goto label_1a285c;
        case 0x1a2860u: goto label_1a2860;
        case 0x1a2864u: goto label_1a2864;
        case 0x1a2868u: goto label_1a2868;
        case 0x1a286cu: goto label_1a286c;
        case 0x1a2870u: goto label_1a2870;
        case 0x1a2874u: goto label_1a2874;
        case 0x1a2878u: goto label_1a2878;
        case 0x1a287cu: goto label_1a287c;
        case 0x1a2880u: goto label_1a2880;
        case 0x1a2884u: goto label_1a2884;
        case 0x1a2888u: goto label_1a2888;
        case 0x1a288cu: goto label_1a288c;
        case 0x1a2890u: goto label_1a2890;
        case 0x1a2894u: goto label_1a2894;
        case 0x1a2898u: goto label_1a2898;
        case 0x1a289cu: goto label_1a289c;
        case 0x1a28a0u: goto label_1a28a0;
        case 0x1a28a4u: goto label_1a28a4;
        case 0x1a28a8u: goto label_1a28a8;
        case 0x1a28acu: goto label_1a28ac;
        case 0x1a28b0u: goto label_1a28b0;
        case 0x1a28b4u: goto label_1a28b4;
        case 0x1a28b8u: goto label_1a28b8;
        case 0x1a28bcu: goto label_1a28bc;
        case 0x1a28c0u: goto label_1a28c0;
        case 0x1a28c4u: goto label_1a28c4;
        case 0x1a28c8u: goto label_1a28c8;
        case 0x1a28ccu: goto label_1a28cc;
        case 0x1a28d0u: goto label_1a28d0;
        case 0x1a28d4u: goto label_1a28d4;
        case 0x1a28d8u: goto label_1a28d8;
        case 0x1a28dcu: goto label_1a28dc;
        case 0x1a28e0u: goto label_1a28e0;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a28e8u: goto label_1a28e8;
        case 0x1a28ecu: goto label_1a28ec;
        case 0x1a28f0u: goto label_1a28f0;
        case 0x1a28f4u: goto label_1a28f4;
        case 0x1a28f8u: goto label_1a28f8;
        case 0x1a28fcu: goto label_1a28fc;
        case 0x1a2900u: goto label_1a2900;
        case 0x1a2904u: goto label_1a2904;
        case 0x1a2908u: goto label_1a2908;
        case 0x1a290cu: goto label_1a290c;
        default: break;
    }

    ctx->pc = 0x1a2690u;

label_1a2690:
    // 0x1a2690: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a2694:
    // 0x1a2694: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1a2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1a2698:
    // 0x1a2698: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1a2698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1a269c:
    // 0x1a269c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a269cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a26a0:
    // 0x1a26a0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1a26a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1a26a4:
    // 0x1a26a4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1a26a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a26a8:
    // 0x1a26a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1a26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1a26ac:
    // 0x1a26ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a26acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1a26b0:
    // 0x1a26b0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1a26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1a26b4:
    // 0x1a26b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a26b8:
    // 0x1a26b8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a26b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1a26bc:
    // 0x1a26bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a26c0:
    // 0x1a26c0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a26c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a26c4:
    // 0x1a26c4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a26c8:
    // 0x1a26c8: 0x40f809  jalr        $v0
label_1a26cc:
    if (ctx->pc == 0x1A26CCu) {
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26D0u;
        goto label_1a26d0;
    }
    ctx->pc = 0x1A26C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A26D0u);
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A26C8u, 0x1A26D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A26D0u;
label_1a26d0:
    // 0x1a26d0: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
label_1a26d4:
    if (ctx->pc == 0x1A26D4u) {
        ctx->pc = 0x1A26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26D0u;
        // 0x1a26d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26D8u;
        goto label_1a26d8;
    }
    ctx->pc = 0x1A26D0u;
    {
        const bool branch_taken_0x1a26d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26d0) {
            ctx->pc = 0x1A26D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A26D0u;
            // 0x1a26d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A28E8u;
            goto label_1a28e8;
        }
    }
    ctx->pc = 0x1A26D8u;
label_1a26d8:
    // 0x1a26d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a26dc:
    // 0x1a26dc: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a26e0:
    // 0x1a26e0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a26e4:
    // 0x1a26e4: 0x40f809  jalr        $v0
label_1a26e8:
    if (ctx->pc == 0x1A26E8u) {
        ctx->pc = 0x1A26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26E4u;
        // 0x1a26e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26ECu;
        goto label_1a26ec;
    }
    ctx->pc = 0x1A26E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A26ECu);
        ctx->pc = 0x1A26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26E4u;
        // 0x1a26e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A26E4u, 0x1A26ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A26ECu;
label_1a26ec:
    // 0x1a26ec: 0x5040007e  beql        $v0, $zero, . + 4 + (0x7E << 2)
label_1a26f0:
    if (ctx->pc == 0x1A26F0u) {
        ctx->pc = 0x1A26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26ECu;
        // 0x1a26f0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26F4u;
        goto label_1a26f4;
    }
    ctx->pc = 0x1A26ECu;
    {
        const bool branch_taken_0x1a26ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26ec) {
            ctx->pc = 0x1A26F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A26ECu;
            // 0x1a26f0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A28E8u;
            goto label_1a28e8;
        }
    }
    ctx->pc = 0x1A26F4u;
label_1a26f4:
    // 0x1a26f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a26f8:
    // 0x1a26f8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1a26f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a26fc:
    // 0x1a26fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a26fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a2700:
    // 0x1a2700: 0x10a20078  beq         $a1, $v0, . + 4 + (0x78 << 2)
label_1a2704:
    if (ctx->pc == 0x1A2704u) {
        ctx->pc = 0x1A2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2700u;
        // 0x1a2704: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2708u;
        goto label_1a2708;
    }
    ctx->pc = 0x1A2700u;
    {
        const bool branch_taken_0x1a2700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2700u;
        // 0x1a2704: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2700) {
            ctx->pc = 0x1A28E4u;
            goto label_1a28e4;
        }
    }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0xc0616ac  jal         func_185AB0
label_1a270c:
    if (ctx->pc == 0x1A270Cu) {
        ctx->pc = 0x1A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2708u;
        // 0x1a270c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2710u;
        goto label_1a2710;
    }
    ctx->pc = 0x1A2708u;
    SET_GPR_U32(ctx, 31, 0x1A2710u);
    ctx->pc = 0x1A270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2708u;
    // 0x1a270c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A2708u, 0x1A2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2710u;
label_1a2710:
    // 0x1a2710: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2714:
    // 0x1a2714: 0x52400073  beql        $s2, $zero, . + 4 + (0x73 << 2)
label_1a2718:
    if (ctx->pc == 0x1A2718u) {
        ctx->pc = 0x1A2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2714u;
        // 0x1a2718: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A271Cu;
        goto label_1a271c;
    }
    ctx->pc = 0x1A2714u;
    {
        const bool branch_taken_0x1a2714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2714) {
            ctx->pc = 0x1A2718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2714u;
            // 0x1a2718: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A28E4u;
            goto label_1a28e4;
        }
    }
    ctx->pc = 0x1A271Cu;
label_1a271c:
    // 0x1a271c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x1a271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1a2720:
    // 0x1a2720: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1a2724:
    if (ctx->pc == 0x1A2724u) {
        ctx->pc = 0x1A2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2720u;
        // 0x1a2724: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2728u;
        goto label_1a2728;
    }
    ctx->pc = 0x1A2720u;
    {
        const bool branch_taken_0x1a2720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2720u;
        // 0x1a2724: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2720) {
            ctx->pc = 0x1A2794u;
            goto label_1a2794;
        }
    }
    ctx->pc = 0x1A2728u;
label_1a2728:
    // 0x1a2728: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1a272c:
    // 0x1a272c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2730:
    // 0x1a2730: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a2734:
    // 0x1a2734: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a2738:
    // 0x1a2738: 0x40f809  jalr        $v0
label_1a273c:
    if (ctx->pc == 0x1A273Cu) {
        ctx->pc = 0x1A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2738u;
        // 0x1a273c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2740u;
        goto label_1a2740;
    }
    ctx->pc = 0x1A2738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2740u);
        ctx->pc = 0x1A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2738u;
        // 0x1a273c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2738u, 0x1A2740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2740u;
label_1a2740:
    // 0x1a2740: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x1a2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1a2744:
    // 0x1a2744: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1a2744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1a2748:
    // 0x1a2748: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a274c:
    // 0x1a274c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a274cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a2750:
    // 0x1a2750: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a2754:
    if (ctx->pc == 0x1A2754u) {
        ctx->pc = 0x1A2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2750u;
        // 0x1a2754: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2758u;
        goto label_1a2758;
    }
    ctx->pc = 0x1A2750u;
    {
        const bool branch_taken_0x1a2750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2750u;
        // 0x1a2754: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2750) {
            ctx->pc = 0x1A2794u;
            goto label_1a2794;
        }
    }
    ctx->pc = 0x1A2758u;
label_1a2758:
    // 0x1a2758: 0x920200f8  lbu         $v0, 0xF8($s0)
    ctx->pc = 0x1a2758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
label_1a275c:
    // 0x1a275c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a275cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2760:
    // 0x1a2760: 0x0  nop
    ctx->pc = 0x1a2760u;
    // NOP
label_1a2764:
    // 0x1a2764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a2768:
    // 0x1a2768: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1a2768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a276c:
    // 0x1a276c: 0x0  nop
    ctx->pc = 0x1a276cu;
    // NOP
label_1a2770:
    // 0x1a2770: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2774:
    // 0x1a2774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2778:
    // 0x1a2778: 0x0  nop
    ctx->pc = 0x1a2778u;
    // NOP
label_1a277c:
    // 0x1a277c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a277cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2780:
    // 0x1a2780: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a2780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a2784:
    // 0x1a2784: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1a2784u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1a2788:
    // 0x1a2788: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a278c:
    // 0x1a278c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a278cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a2790:
    // 0x1a2790: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1a2790u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a2794:
    // 0x1a2794: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1a2794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1a2798:
    // 0x1a2798: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1a279c:
    // 0x1a279c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a27a0:
    // 0x1a27a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a27a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a27a4:
    // 0x1a27a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a27a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a27a8:
    // 0x1a27a8: 0xc136b18  jal         func_4DAC60
label_1a27ac:
    if (ctx->pc == 0x1A27ACu) {
        ctx->pc = 0x1A27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27A8u;
        // 0x1a27ac: 0x26130040  addiu       $s3, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27B0u;
        goto label_1a27b0;
    }
    ctx->pc = 0x1A27A8u;
    SET_GPR_U32(ctx, 31, 0x1A27B0u);
    ctx->pc = 0x1A27ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27A8u;
    // 0x1a27ac: 0x26130040  addiu       $s3, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1A27A8u, 0x1A27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27B0u;
label_1a27b0:
    // 0x1a27b0: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x1a27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a27b4:
    // 0x1a27b4: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_1a27b8:
    if (ctx->pc == 0x1A27B8u) {
        ctx->pc = 0x1A27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27B4u;
        // 0x1a27b8: 0xa21100b7  sb          $s1, 0xB7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 183), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27BCu;
        goto label_1a27bc;
    }
    ctx->pc = 0x1A27B4u;
    {
        const bool branch_taken_0x1a27b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27B4u;
        // 0x1a27b8: 0xa21100b7  sb          $s1, 0xB7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 183), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27b4) {
            ctx->pc = 0x1A28C4u;
            goto label_1a28c4;
        }
    }
    ctx->pc = 0x1A27BCu;
label_1a27bc:
    // 0x1a27bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a27c0:
    // 0x1a27c0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1a27c4:
    if (ctx->pc == 0x1A27C4u) {
        ctx->pc = 0x1A27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27C0u;
        // 0x1a27c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27C8u;
        goto label_1a27c8;
    }
    ctx->pc = 0x1A27C0u;
    {
        const bool branch_taken_0x1a27c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27C0u;
        // 0x1a27c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27c0) {
            ctx->pc = 0x1A28C4u;
            goto label_1a28c4;
        }
    }
    ctx->pc = 0x1A27C8u;
label_1a27c8:
    // 0x1a27c8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1a27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1a27cc:
    // 0x1a27cc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1a27ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1a27d0:
    // 0x1a27d0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1a27d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a27d4:
    // 0x1a27d4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1a27d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a27d8:
    // 0x1a27d8: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x1a27d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1a27dc:
    // 0x1a27dc: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1a27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_1a27e0:
    // 0x1a27e0: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x1a27e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_1a27e4:
    // 0x1a27e4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a27e8:
    // 0x1a27e8: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_1a27ec:
    if (ctx->pc == 0x1A27ECu) {
        ctx->pc = 0x1A27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27E8u;
        // 0x1a27ec: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27F0u;
        goto label_1a27f0;
    }
    ctx->pc = 0x1A27E8u;
    {
        const bool branch_taken_0x1a27e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27E8u;
        // 0x1a27ec: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27e8) {
            ctx->pc = 0x1A27D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a27d4;
        }
    }
    ctx->pc = 0x1A27F0u;
label_1a27f0:
    // 0x1a27f0: 0x3c013b23  lui         $at, 0x3B23
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15139 << 16));
label_1a27f4:
    // 0x1a27f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a27f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a27f8:
    // 0x1a27f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a27f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a27fc:
    // 0x1a27fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a2800:
    // 0x1a2800: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x1a2800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_1a2804:
    // 0x1a2804: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2808:
    // 0x1a2808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a280c:
    // 0x1a280c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a280cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a2810:
    // 0x1a2810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2814:
    // 0x1a2814: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a2814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a2818:
    // 0x1a2818: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a2818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a281c:
    // 0x1a281c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a281cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a2820:
    // 0x1a2820: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a2820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a2824:
    // 0x1a2824: 0xc136b18  jal         func_4DAC60
label_1a2828:
    if (ctx->pc == 0x1A2828u) {
        ctx->pc = 0x1A2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2824u;
        // 0x1a2828: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A282Cu;
        goto label_1a282c;
    }
    ctx->pc = 0x1A2824u;
    SET_GPR_U32(ctx, 31, 0x1A282Cu);
    ctx->pc = 0x1A2828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2824u;
    // 0x1a2828: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1A2824u, 0x1A282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A282Cu;
label_1a282c:
    // 0x1a282c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1a282cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2830:
    // 0x1a2830: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a2830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a2834:
    // 0x1a2834: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x1a2834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a2838:
    // 0x1a2838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a283c:
    // 0x1a283c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1a283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1a2840:
    // 0x1a2840: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a2840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a2844:
    // 0x1a2844: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1a2844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1a2848:
    // 0x1a2848: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1a2848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1a284c:
    // 0x1a284c: 0x60f809  jalr        $v1
label_1a2850:
    if (ctx->pc == 0x1A2850u) {
        ctx->pc = 0x1A2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A284Cu;
        // 0x1a2850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2854u;
        goto label_1a2854;
    }
    ctx->pc = 0x1A284Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A2854u);
        ctx->pc = 0x1A2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A284Cu;
        // 0x1a2850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A284Cu, 0x1A2854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2854u;
label_1a2854:
    // 0x1a2854: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1a2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2858:
    // 0x1a2858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a285c:
    // 0x1a285c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2860:
    // 0x1a2860: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2860u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a2864:
    // 0x1a2864: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a2864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a2868:
    // 0x1a2868: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1a2868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_1a286c:
    // 0x1a286c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a286cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2870:
    // 0x1a2870: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1a2870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a2874:
    // 0x1a2874: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a2874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a2878:
    // 0x1a2878: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a2878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a287c:
    // 0x1a287c: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a2880:
    // 0x1a2880: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1a2880u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2884:
    // 0x1a2884: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x1a2884u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
label_1a2888:
    // 0x1a2888: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x1a2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a288c:
    // 0x1a288c: 0xa0400074  sb          $zero, 0x74($v0)
    ctx->pc = 0x1a288cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 0));
label_1a2890:
    // 0x1a2890: 0xa0400076  sb          $zero, 0x76($v0)
    ctx->pc = 0x1a2890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 118), (uint8_t)GPR_U32(ctx, 0));
label_1a2894:
    // 0x1a2894: 0xa0400075  sb          $zero, 0x75($v0)
    ctx->pc = 0x1a2894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 117), (uint8_t)GPR_U32(ctx, 0));
label_1a2898:
    // 0x1a2898: 0x920300b7  lbu         $v1, 0xB7($s0)
    ctx->pc = 0x1a2898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 183)));
label_1a289c:
    // 0x1a289c: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a28a0:
    // 0x1a28a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a28a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a28a4:
    // 0x1a28a4: 0x0  nop
    ctx->pc = 0x1a28a4u;
    // NOP
label_1a28a8:
    // 0x1a28a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a28a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a28ac:
    // 0x1a28ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a28acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a28b0:
    // 0x1a28b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a28b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a28b4:
    // 0x1a28b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a28b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a28b8:
    // 0x1a28b8: 0xa0a20077  sb          $v0, 0x77($a1)
    ctx->pc = 0x1a28b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 119), (uint8_t)GPR_U32(ctx, 2));
label_1a28bc:
    // 0x1a28bc: 0xc060b78  jal         func_182DE0
label_1a28c0:
    if (ctx->pc == 0x1A28C0u) {
        ctx->pc = 0x1A28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28BCu;
        // 0x1a28c0: 0x8e0500ec  lw          $a1, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28C4u;
        goto label_1a28c4;
    }
    ctx->pc = 0x1A28BCu;
    SET_GPR_U32(ctx, 31, 0x1A28C4u);
    ctx->pc = 0x1A28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28BCu;
    // 0x1a28c0: 0x8e0500ec  lw          $a1, 0xEC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A28BCu, 0x1A28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28C4u;
label_1a28c4:
    // 0x1a28c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a28c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a28c8:
    // 0x1a28c8: 0xc060b78  jal         func_182DE0
label_1a28cc:
    if (ctx->pc == 0x1A28CCu) {
        ctx->pc = 0x1A28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28C8u;
        // 0x1a28cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28D0u;
        goto label_1a28d0;
    }
    ctx->pc = 0x1A28C8u;
    SET_GPR_U32(ctx, 31, 0x1A28D0u);
    ctx->pc = 0x1A28CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28C8u;
    // 0x1a28cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A28C8u, 0x1A28D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28D0u;
label_1a28d0:
    // 0x1a28d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a28d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a28d4:
    // 0x1a28d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a28d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a28d8:
    // 0x1a28d8: 0xc136afa  jal         func_4DABE8
label_1a28dc:
    if (ctx->pc == 0x1A28DCu) {
        ctx->pc = 0x1A28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28D8u;
        // 0x1a28dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28E0u;
        goto label_1a28e0;
    }
    ctx->pc = 0x1A28D8u;
    SET_GPR_U32(ctx, 31, 0x1A28E0u);
    ctx->pc = 0x1A28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28D8u;
    // 0x1a28dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1A28D8u, 0x1A28E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28E0u;
label_1a28e0:
    // 0x1a28e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1a28e4:
    // 0x1a28e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1a28e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a28e8:
    // 0x1a28e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1a28e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a28ec:
    // 0x1a28ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1a28ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a28f0:
    // 0x1a28f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a28f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a28f4:
    // 0x1a28f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a28f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a28f8:
    // 0x1a28f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1a28f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a28fc:
    // 0x1a28fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a28fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2900:
    // 0x1a2900: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2904:
    // 0x1a2904: 0x3e00008  jr          $ra
label_1a2908:
    if (ctx->pc == 0x1A2908u) {
        ctx->pc = 0x1A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2904u;
        // 0x1a2908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A290Cu;
        goto label_1a290c;
    }
    ctx->pc = 0x1A2904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2904u;
        // 0x1a2908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A290Cu;
label_1a290c:
    // 0x1a290c: 0x0  nop
    ctx->pc = 0x1a290cu;
    // NOP
    ctx->pc = 0x1a2910u;
}
