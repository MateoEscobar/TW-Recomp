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

// Function: sub_00137670
// Address: 0x137670 - 0x137808
void sub_00137670_0x137670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137670_0x137670");
#endif

    switch (ctx->pc) {
        case 0x137670u: goto label_137670;
        case 0x137674u: goto label_137674;
        case 0x137678u: goto label_137678;
        case 0x13767cu: goto label_13767c;
        case 0x137680u: goto label_137680;
        case 0x137684u: goto label_137684;
        case 0x137688u: goto label_137688;
        case 0x13768cu: goto label_13768c;
        case 0x137690u: goto label_137690;
        case 0x137694u: goto label_137694;
        case 0x137698u: goto label_137698;
        case 0x13769cu: goto label_13769c;
        case 0x1376a0u: goto label_1376a0;
        case 0x1376a4u: goto label_1376a4;
        case 0x1376a8u: goto label_1376a8;
        case 0x1376acu: goto label_1376ac;
        case 0x1376b0u: goto label_1376b0;
        case 0x1376b4u: goto label_1376b4;
        case 0x1376b8u: goto label_1376b8;
        case 0x1376bcu: goto label_1376bc;
        case 0x1376c0u: goto label_1376c0;
        case 0x1376c4u: goto label_1376c4;
        case 0x1376c8u: goto label_1376c8;
        case 0x1376ccu: goto label_1376cc;
        case 0x1376d0u: goto label_1376d0;
        case 0x1376d4u: goto label_1376d4;
        case 0x1376d8u: goto label_1376d8;
        case 0x1376dcu: goto label_1376dc;
        case 0x1376e0u: goto label_1376e0;
        case 0x1376e4u: goto label_1376e4;
        case 0x1376e8u: goto label_1376e8;
        case 0x1376ecu: goto label_1376ec;
        case 0x1376f0u: goto label_1376f0;
        case 0x1376f4u: goto label_1376f4;
        case 0x1376f8u: goto label_1376f8;
        case 0x1376fcu: goto label_1376fc;
        case 0x137700u: goto label_137700;
        case 0x137704u: goto label_137704;
        case 0x137708u: goto label_137708;
        case 0x13770cu: goto label_13770c;
        case 0x137710u: goto label_137710;
        case 0x137714u: goto label_137714;
        case 0x137718u: goto label_137718;
        case 0x13771cu: goto label_13771c;
        case 0x137720u: goto label_137720;
        case 0x137724u: goto label_137724;
        case 0x137728u: goto label_137728;
        case 0x13772cu: goto label_13772c;
        case 0x137730u: goto label_137730;
        case 0x137734u: goto label_137734;
        case 0x137738u: goto label_137738;
        case 0x13773cu: goto label_13773c;
        case 0x137740u: goto label_137740;
        case 0x137744u: goto label_137744;
        case 0x137748u: goto label_137748;
        case 0x13774cu: goto label_13774c;
        case 0x137750u: goto label_137750;
        case 0x137754u: goto label_137754;
        case 0x137758u: goto label_137758;
        case 0x13775cu: goto label_13775c;
        case 0x137760u: goto label_137760;
        case 0x137764u: goto label_137764;
        case 0x137768u: goto label_137768;
        case 0x13776cu: goto label_13776c;
        case 0x137770u: goto label_137770;
        case 0x137774u: goto label_137774;
        case 0x137778u: goto label_137778;
        case 0x13777cu: goto label_13777c;
        case 0x137780u: goto label_137780;
        case 0x137784u: goto label_137784;
        case 0x137788u: goto label_137788;
        case 0x13778cu: goto label_13778c;
        case 0x137790u: goto label_137790;
        case 0x137794u: goto label_137794;
        case 0x137798u: goto label_137798;
        case 0x13779cu: goto label_13779c;
        case 0x1377a0u: goto label_1377a0;
        case 0x1377a4u: goto label_1377a4;
        case 0x1377a8u: goto label_1377a8;
        case 0x1377acu: goto label_1377ac;
        case 0x1377b0u: goto label_1377b0;
        case 0x1377b4u: goto label_1377b4;
        case 0x1377b8u: goto label_1377b8;
        case 0x1377bcu: goto label_1377bc;
        case 0x1377c0u: goto label_1377c0;
        case 0x1377c4u: goto label_1377c4;
        case 0x1377c8u: goto label_1377c8;
        case 0x1377ccu: goto label_1377cc;
        case 0x1377d0u: goto label_1377d0;
        case 0x1377d4u: goto label_1377d4;
        case 0x1377d8u: goto label_1377d8;
        case 0x1377dcu: goto label_1377dc;
        case 0x1377e0u: goto label_1377e0;
        case 0x1377e4u: goto label_1377e4;
        case 0x1377e8u: goto label_1377e8;
        case 0x1377ecu: goto label_1377ec;
        case 0x1377f0u: goto label_1377f0;
        case 0x1377f4u: goto label_1377f4;
        case 0x1377f8u: goto label_1377f8;
        case 0x1377fcu: goto label_1377fc;
        case 0x137800u: goto label_137800;
        case 0x137804u: goto label_137804;
        default: break;
    }

    ctx->pc = 0x137670u;

label_137670:
    // 0x137670: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x137670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_137674:
    // 0x137674: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x137674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_137678:
    // 0x137678: 0xac40b27c  sw          $zero, -0x4D84($v0)
    ctx->pc = 0x137678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947452), GPR_U32(ctx, 0));
label_13767c:
    // 0x13767c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_137680:
    // 0x137680: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x137680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_137684:
    // 0x137684: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x137684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_137688:
    // 0x137688: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x137688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_13768c:
    // 0x13768c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13768cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137690:
    // 0x137690: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x137690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_137694:
    // 0x137694: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_137698:
    // 0x137698: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x137698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_13769c:
    // 0x13769c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1376a0:
    // 0x1376a0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1376a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1376a4:
    // 0x1376a4: 0x24a58ea0  addiu       $a1, $a1, -0x7160
    ctx->pc = 0x1376a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938272));
label_1376a8:
    // 0x1376a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1376a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1376ac:
    // 0x1376ac: 0x25088eb8  addiu       $t0, $t0, -0x7148
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938296));
label_1376b0:
    // 0x1376b0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1376b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1376b4:
    // 0x1376b4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1376b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1376b8:
    // 0x1376b8: 0xac60b280  sw          $zero, -0x4D80($v1)
    ctx->pc = 0x1376b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947456), GPR_U32(ctx, 0));
label_1376bc:
    // 0x1376bc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1376c0:
    // 0x1376c0: 0xae400244  sw          $zero, 0x244($s2)
    ctx->pc = 0x1376c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 0));
label_1376c4:
    // 0x1376c4: 0x24090290  addiu       $t1, $zero, 0x290
    ctx->pc = 0x1376c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
label_1376c8:
    // 0x1376c8: 0xae400248  sw          $zero, 0x248($s2)
    ctx->pc = 0x1376c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 584), GPR_U32(ctx, 0));
label_1376cc:
    // 0x1376cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1376ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1376d0:
    // 0x1376d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1376d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1376d4:
    // 0x1376d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1376d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1376d8:
    // 0x1376d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1376dc:
    // 0x1376dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1376e0:
    // 0x1376e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1376e4:
    // 0x1376e4: 0x40f809  jalr        $v0
label_1376e8:
    if (ctx->pc == 0x1376E8u) {
        ctx->pc = 0x1376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376E4u;
        // 0x1376e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376ECu;
        goto label_1376ec;
    }
    ctx->pc = 0x1376E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1376ECu);
        ctx->pc = 0x1376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376E4u;
        // 0x1376e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1376E4u, 0x1376ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1376ECu;
label_1376ec:
    // 0x1376ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1376ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1376f0:
    // 0x1376f0: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_1376f4:
    if (ctx->pc == 0x1376F4u) {
        ctx->pc = 0x1376F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376F0u;
        // 0x1376f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376F8u;
        goto label_1376f8;
    }
    ctx->pc = 0x1376F0u;
    {
        const bool branch_taken_0x1376f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376f0) {
            ctx->pc = 0x1376F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1376F0u;
            // 0x1376f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137708u;
            goto label_137708;
        }
    }
    ctx->pc = 0x1376F8u;
label_1376f8:
    // 0x1376f8: 0xc0d0aa8  jal         func_342AA0
label_1376fc:
    if (ctx->pc == 0x1376FCu) {
        ctx->pc = 0x1376FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376F8u;
        // 0x1376fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137700u;
        goto label_137700;
    }
    ctx->pc = 0x1376F8u;
    SET_GPR_U32(ctx, 31, 0x137700u);
    ctx->pc = 0x1376FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376F8u;
    // 0x1376fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x1376F8u, 0x137700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137700u;
label_137700:
    // 0x137700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137704:
    // 0x137704: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_137708:
    // 0x137708: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x137708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_13770c:
    // 0x13770c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x13770cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137710:
    // 0x137710: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x137710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_137714:
    // 0x137714: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_137718:
    // 0x137718: 0x40f809  jalr        $v0
label_13771c:
    if (ctx->pc == 0x13771Cu) {
        ctx->pc = 0x13771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137718u;
        // 0x13771c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137720u;
        goto label_137720;
    }
    ctx->pc = 0x137718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137720u);
        ctx->pc = 0x13771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137718u;
        // 0x13771c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137718u, 0x137720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137720u;
label_137720:
    // 0x137720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137724:
    // 0x137724: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x137724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_137728:
    // 0x137728: 0xc0d065c  jal         func_341970
label_13772c:
    if (ctx->pc == 0x13772Cu) {
        ctx->pc = 0x13772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137728u;
        // 0x13772c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137730u;
        goto label_137730;
    }
    ctx->pc = 0x137728u;
    SET_GPR_U32(ctx, 31, 0x137730u);
    ctx->pc = 0x13772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137728u;
    // 0x13772c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341970u, 0x137728u, 0x137730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137730u;
label_137730:
    // 0x137730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137734:
    // 0x137734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137738:
    // 0x137738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x137738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13773c:
    // 0x13773c: 0xc0d06aa  jal         func_341AA8
label_137740:
    if (ctx->pc == 0x137740u) {
        ctx->pc = 0x137740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13773Cu;
        // 0x137740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137744u;
        goto label_137744;
    }
    ctx->pc = 0x13773Cu;
    SET_GPR_U32(ctx, 31, 0x137744u);
    ctx->pc = 0x137740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13773Cu;
    // 0x137740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341AA8u, 0x13773Cu, 0x137744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137744u;
label_137744:
    // 0x137744: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x137744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_137748:
    // 0x137748: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x137748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_13774c:
    // 0x13774c: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x13774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_137750:
    // 0x137750: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137754:
    // 0x137754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x137754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_137758:
    // 0x137758: 0xc0d019a  jal         func_340668
label_13775c:
    if (ctx->pc == 0x13775Cu) {
        ctx->pc = 0x13775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137758u;
        // 0x13775c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137760u;
        goto label_137760;
    }
    ctx->pc = 0x137758u;
    SET_GPR_U32(ctx, 31, 0x137760u);
    ctx->pc = 0x13775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137758u;
    // 0x13775c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x137758u, 0x137760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137760u;
label_137760:
    // 0x137760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137764:
    // 0x137764: 0xc0d0704  jal         func_341C10
label_137768:
    if (ctx->pc == 0x137768u) {
        ctx->pc = 0x137768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137764u;
        // 0x137768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13776Cu;
        goto label_13776c;
    }
    ctx->pc = 0x137764u;
    SET_GPR_U32(ctx, 31, 0x13776Cu);
    ctx->pc = 0x137768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137764u;
    // 0x137768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x137764u, 0x13776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13776Cu;
label_13776c:
    // 0x13776c: 0x8e43025c  lw          $v1, 0x25C($s2)
    ctx->pc = 0x13776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_137770:
    // 0x137770: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_137774:
    if (ctx->pc == 0x137774u) {
        ctx->pc = 0x137774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137770u;
        // 0x137774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137778u;
        goto label_137778;
    }
    ctx->pc = 0x137770u;
    {
        const bool branch_taken_0x137770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137770u;
        // 0x137774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137770) {
            ctx->pc = 0x137790u;
            goto label_137790;
        }
    }
    ctx->pc = 0x137778u;
label_137778:
    // 0x137778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13777c:
    // 0x13777c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13777cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137780:
    // 0x137780: 0xc04d8fa  jal         func_1363E8
label_137784:
    if (ctx->pc == 0x137784u) {
        ctx->pc = 0x137784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137780u;
        // 0x137784: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137788u;
        goto label_137788;
    }
    ctx->pc = 0x137780u;
    SET_GPR_U32(ctx, 31, 0x137788u);
    ctx->pc = 0x137784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137780u;
    // 0x137784: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E8u, 0x137780u, 0x137788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137788u;
label_137788:
    // 0x137788: 0x10000010  b           . + 4 + (0x10 << 2)
label_13778c:
    if (ctx->pc == 0x13778Cu) {
        ctx->pc = 0x13778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137788u;
        // 0x13778c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137790u;
        goto label_137790;
    }
    ctx->pc = 0x137788u;
    {
        const bool branch_taken_0x137788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137788u;
        // 0x13778c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137788) {
            ctx->pc = 0x1377CCu;
            goto label_1377cc;
        }
    }
    ctx->pc = 0x137790u;
label_137790:
    // 0x137790: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_137794:
    if (ctx->pc == 0x137794u) {
        ctx->pc = 0x137794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137790u;
        // 0x137794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137798u;
        goto label_137798;
    }
    ctx->pc = 0x137790u;
    {
        const bool branch_taken_0x137790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x137794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137790u;
        // 0x137794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137790) {
            ctx->pc = 0x1377B0u;
            goto label_1377b0;
        }
    }
    ctx->pc = 0x137798u;
label_137798:
    // 0x137798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13779c:
    // 0x13779c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13779cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1377a0:
    // 0x1377a0: 0xc04daa2  jal         func_136A88
label_1377a4:
    if (ctx->pc == 0x1377A4u) {
        ctx->pc = 0x1377A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377A0u;
        // 0x1377a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1377A8u;
        goto label_1377a8;
    }
    ctx->pc = 0x1377A0u;
    SET_GPR_U32(ctx, 31, 0x1377A8u);
    ctx->pc = 0x1377A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377A0u;
    // 0x1377a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A88u, 0x1377A0u, 0x1377A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377A8u;
label_1377a8:
    // 0x1377a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1377ac:
    if (ctx->pc == 0x1377ACu) {
        ctx->pc = 0x1377ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377A8u;
        // 0x1377ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1377B0u;
        goto label_1377b0;
    }
    ctx->pc = 0x1377A8u;
    {
        const bool branch_taken_0x1377a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377A8u;
        // 0x1377ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377a8) {
            ctx->pc = 0x1377CCu;
            goto label_1377cc;
        }
    }
    ctx->pc = 0x1377B0u;
label_1377b0:
    // 0x1377b0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1377b4:
    if (ctx->pc == 0x1377B4u) {
        ctx->pc = 0x1377B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377B0u;
        // 0x1377b4: 0x8e847198  lw          $a0, 0x7198($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1377B8u;
        goto label_1377b8;
    }
    ctx->pc = 0x1377B0u;
    {
        const bool branch_taken_0x1377b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1377B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377B0u;
        // 0x1377b4: 0x8e847198  lw          $a0, 0x7198($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377b0) {
            ctx->pc = 0x1377D0u;
            goto label_1377d0;
        }
    }
    ctx->pc = 0x1377B8u;
label_1377b8:
    // 0x1377b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1377b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1377bc:
    // 0x1377bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1377bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1377c0:
    // 0x1377c0: 0xc04dbda  jal         func_136F68
label_1377c4:
    if (ctx->pc == 0x1377C4u) {
        ctx->pc = 0x1377C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377C0u;
        // 0x1377c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1377C8u;
        goto label_1377c8;
    }
    ctx->pc = 0x1377C0u;
    SET_GPR_U32(ctx, 31, 0x1377C8u);
    ctx->pc = 0x1377C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377C0u;
    // 0x1377c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F68u, 0x1377C0u, 0x1377C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377C8u;
label_1377c8:
    // 0x1377c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1377c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1377cc:
    // 0x1377cc: 0x8e847198  lw          $a0, 0x7198($s4)
    ctx->pc = 0x1377ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29080)));
label_1377d0:
    // 0x1377d0: 0xc0d01c0  jal         func_340700
label_1377d4:
    if (ctx->pc == 0x1377D4u) {
        ctx->pc = 0x1377D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377D0u;
        // 0x1377d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1377D8u;
        goto label_1377d8;
    }
    ctx->pc = 0x1377D0u;
    SET_GPR_U32(ctx, 31, 0x1377D8u);
    ctx->pc = 0x1377D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377D0u;
    // 0x1377d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x1377D0u, 0x1377D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377D8u;
label_1377d8:
    // 0x1377d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1377d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1377dc:
    // 0x1377dc: 0xc0d0680  jal         func_341A00
label_1377e0:
    if (ctx->pc == 0x1377E0u) {
        ctx->pc = 0x1377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377DCu;
        // 0x1377e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1377E4u;
        goto label_1377e4;
    }
    ctx->pc = 0x1377DCu;
    SET_GPR_U32(ctx, 31, 0x1377E4u);
    ctx->pc = 0x1377E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377DCu;
    // 0x1377e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x1377DCu, 0x1377E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377E4u;
label_1377e4:
    // 0x1377e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1377e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1377e8:
    // 0x1377e8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1377e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1377ec:
    // 0x1377ec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1377ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1377f0:
    // 0x1377f0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1377f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1377f4:
    // 0x1377f4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1377f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1377f8:
    // 0x1377f8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1377f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1377fc:
    // 0x1377fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1377fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_137800:
    // 0x137800: 0x3e00008  jr          $ra
label_137804:
    if (ctx->pc == 0x137804u) {
        ctx->pc = 0x137804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137800u;
        // 0x137804: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137808u;
        goto label_fallthrough_0x137800;
    }
    ctx->pc = 0x137800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137800u;
        // 0x137804: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x137800:
    ctx->pc = 0x137808u;
}
