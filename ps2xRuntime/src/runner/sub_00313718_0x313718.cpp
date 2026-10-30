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

// Function: sub_00313718
// Address: 0x313718 - 0x313958
void sub_00313718_0x313718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313718_0x313718");
#endif

    switch (ctx->pc) {
        case 0x313718u: goto label_313718;
        case 0x31371cu: goto label_31371c;
        case 0x313720u: goto label_313720;
        case 0x313724u: goto label_313724;
        case 0x313728u: goto label_313728;
        case 0x31372cu: goto label_31372c;
        case 0x313730u: goto label_313730;
        case 0x313734u: goto label_313734;
        case 0x313738u: goto label_313738;
        case 0x31373cu: goto label_31373c;
        case 0x313740u: goto label_313740;
        case 0x313744u: goto label_313744;
        case 0x313748u: goto label_313748;
        case 0x31374cu: goto label_31374c;
        case 0x313750u: goto label_313750;
        case 0x313754u: goto label_313754;
        case 0x313758u: goto label_313758;
        case 0x31375cu: goto label_31375c;
        case 0x313760u: goto label_313760;
        case 0x313764u: goto label_313764;
        case 0x313768u: goto label_313768;
        case 0x31376cu: goto label_31376c;
        case 0x313770u: goto label_313770;
        case 0x313774u: goto label_313774;
        case 0x313778u: goto label_313778;
        case 0x31377cu: goto label_31377c;
        case 0x313780u: goto label_313780;
        case 0x313784u: goto label_313784;
        case 0x313788u: goto label_313788;
        case 0x31378cu: goto label_31378c;
        case 0x313790u: goto label_313790;
        case 0x313794u: goto label_313794;
        case 0x313798u: goto label_313798;
        case 0x31379cu: goto label_31379c;
        case 0x3137a0u: goto label_3137a0;
        case 0x3137a4u: goto label_3137a4;
        case 0x3137a8u: goto label_3137a8;
        case 0x3137acu: goto label_3137ac;
        case 0x3137b0u: goto label_3137b0;
        case 0x3137b4u: goto label_3137b4;
        case 0x3137b8u: goto label_3137b8;
        case 0x3137bcu: goto label_3137bc;
        case 0x3137c0u: goto label_3137c0;
        case 0x3137c4u: goto label_3137c4;
        case 0x3137c8u: goto label_3137c8;
        case 0x3137ccu: goto label_3137cc;
        case 0x3137d0u: goto label_3137d0;
        case 0x3137d4u: goto label_3137d4;
        case 0x3137d8u: goto label_3137d8;
        case 0x3137dcu: goto label_3137dc;
        case 0x3137e0u: goto label_3137e0;
        case 0x3137e4u: goto label_3137e4;
        case 0x3137e8u: goto label_3137e8;
        case 0x3137ecu: goto label_3137ec;
        case 0x3137f0u: goto label_3137f0;
        case 0x3137f4u: goto label_3137f4;
        case 0x3137f8u: goto label_3137f8;
        case 0x3137fcu: goto label_3137fc;
        case 0x313800u: goto label_313800;
        case 0x313804u: goto label_313804;
        case 0x313808u: goto label_313808;
        case 0x31380cu: goto label_31380c;
        case 0x313810u: goto label_313810;
        case 0x313814u: goto label_313814;
        case 0x313818u: goto label_313818;
        case 0x31381cu: goto label_31381c;
        case 0x313820u: goto label_313820;
        case 0x313824u: goto label_313824;
        case 0x313828u: goto label_313828;
        case 0x31382cu: goto label_31382c;
        case 0x313830u: goto label_313830;
        case 0x313834u: goto label_313834;
        case 0x313838u: goto label_313838;
        case 0x31383cu: goto label_31383c;
        case 0x313840u: goto label_313840;
        case 0x313844u: goto label_313844;
        case 0x313848u: goto label_313848;
        case 0x31384cu: goto label_31384c;
        case 0x313850u: goto label_313850;
        case 0x313854u: goto label_313854;
        case 0x313858u: goto label_313858;
        case 0x31385cu: goto label_31385c;
        case 0x313860u: goto label_313860;
        case 0x313864u: goto label_313864;
        case 0x313868u: goto label_313868;
        case 0x31386cu: goto label_31386c;
        case 0x313870u: goto label_313870;
        case 0x313874u: goto label_313874;
        case 0x313878u: goto label_313878;
        case 0x31387cu: goto label_31387c;
        case 0x313880u: goto label_313880;
        case 0x313884u: goto label_313884;
        case 0x313888u: goto label_313888;
        case 0x31388cu: goto label_31388c;
        case 0x313890u: goto label_313890;
        case 0x313894u: goto label_313894;
        case 0x313898u: goto label_313898;
        case 0x31389cu: goto label_31389c;
        case 0x3138a0u: goto label_3138a0;
        case 0x3138a4u: goto label_3138a4;
        case 0x3138a8u: goto label_3138a8;
        case 0x3138acu: goto label_3138ac;
        case 0x3138b0u: goto label_3138b0;
        case 0x3138b4u: goto label_3138b4;
        case 0x3138b8u: goto label_3138b8;
        case 0x3138bcu: goto label_3138bc;
        case 0x3138c0u: goto label_3138c0;
        case 0x3138c4u: goto label_3138c4;
        case 0x3138c8u: goto label_3138c8;
        case 0x3138ccu: goto label_3138cc;
        case 0x3138d0u: goto label_3138d0;
        case 0x3138d4u: goto label_3138d4;
        case 0x3138d8u: goto label_3138d8;
        case 0x3138dcu: goto label_3138dc;
        case 0x3138e0u: goto label_3138e0;
        case 0x3138e4u: goto label_3138e4;
        case 0x3138e8u: goto label_3138e8;
        case 0x3138ecu: goto label_3138ec;
        case 0x3138f0u: goto label_3138f0;
        case 0x3138f4u: goto label_3138f4;
        case 0x3138f8u: goto label_3138f8;
        case 0x3138fcu: goto label_3138fc;
        case 0x313900u: goto label_313900;
        case 0x313904u: goto label_313904;
        case 0x313908u: goto label_313908;
        case 0x31390cu: goto label_31390c;
        case 0x313910u: goto label_313910;
        case 0x313914u: goto label_313914;
        case 0x313918u: goto label_313918;
        case 0x31391cu: goto label_31391c;
        case 0x313920u: goto label_313920;
        case 0x313924u: goto label_313924;
        case 0x313928u: goto label_313928;
        case 0x31392cu: goto label_31392c;
        case 0x313930u: goto label_313930;
        case 0x313934u: goto label_313934;
        case 0x313938u: goto label_313938;
        case 0x31393cu: goto label_31393c;
        case 0x313940u: goto label_313940;
        case 0x313944u: goto label_313944;
        case 0x313948u: goto label_313948;
        case 0x31394cu: goto label_31394c;
        case 0x313950u: goto label_313950;
        case 0x313954u: goto label_313954;
        default: break;
    }

    ctx->pc = 0x313718u;

label_313718:
    // 0x313718: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x313718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31371c:
    // 0x31371c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_313720:
    // 0x313720: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x313720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_313724:
    // 0x313724: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x313724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_313728:
    // 0x313728: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x313728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31372c:
    // 0x31372c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31372cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313730:
    // 0x313730: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x313730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_313734:
    // 0x313734: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x313734u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_313738:
    // 0x313738: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x313738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31373c:
    // 0x31373c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_313740:
    // 0x313740: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x313740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_313744:
    // 0x313744: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x313744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_313748:
    // 0x313748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31374c:
    // 0x31374c: 0xc087502  jal         func_21D408
label_313750:
    if (ctx->pc == 0x313750u) {
        ctx->pc = 0x313750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31374Cu;
        // 0x313750: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313754u;
        goto label_313754;
    }
    ctx->pc = 0x31374Cu;
    SET_GPR_U32(ctx, 31, 0x313754u);
    ctx->pc = 0x313750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31374Cu;
    // 0x313750: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31374Cu, 0x313754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313754u;
label_313754:
    // 0x313754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313758:
    // 0x313758: 0xc0a3630  jal         func_28D8C0
label_31375c:
    if (ctx->pc == 0x31375Cu) {
        ctx->pc = 0x31375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313758u;
        // 0x31375c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313760u;
        goto label_313760;
    }
    ctx->pc = 0x313758u;
    SET_GPR_U32(ctx, 31, 0x313760u);
    ctx->pc = 0x31375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313758u;
    // 0x31375c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x313758u, 0x313760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313760u;
label_313760:
    // 0x313760: 0xc0a3628  jal         func_28D8A0
label_313764:
    if (ctx->pc == 0x313764u) {
        ctx->pc = 0x313764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313760u;
        // 0x313764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313768u;
        goto label_313768;
    }
    ctx->pc = 0x313760u;
    SET_GPR_U32(ctx, 31, 0x313768u);
    ctx->pc = 0x313764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313760u;
    // 0x313764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x313760u, 0x313768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313768u;
label_313768:
    // 0x313768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31376c:
    // 0x31376c: 0x56c30044  bnel        $s6, $v1, . + 4 + (0x44 << 2)
label_313770:
    if (ctx->pc == 0x313770u) {
        ctx->pc = 0x313770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31376Cu;
        // 0x313770: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313774u;
        goto label_313774;
    }
    ctx->pc = 0x31376Cu;
    {
        const bool branch_taken_0x31376c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x31376c) {
            ctx->pc = 0x313770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31376Cu;
            // 0x313770: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x313774u;
label_313774:
    // 0x313774: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x313774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_313778:
    // 0x313778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31377c:
    // 0x31377c: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
label_313780:
    if (ctx->pc == 0x313780u) {
        ctx->pc = 0x313780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31377Cu;
        // 0x313780: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313784u;
        goto label_313784;
    }
    ctx->pc = 0x31377Cu;
    {
        const bool branch_taken_0x31377c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31377c) {
            ctx->pc = 0x313780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31377Cu;
            // 0x313780: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x313784u;
label_313784:
    // 0x313784: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x313784u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_313788:
    // 0x313788: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x313788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_31378c:
    // 0x31378c: 0xc0e409a  jal         func_390268
label_313790:
    if (ctx->pc == 0x313790u) {
        ctx->pc = 0x313790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31378Cu;
        // 0x313790: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313794u;
        goto label_313794;
    }
    ctx->pc = 0x31378Cu;
    SET_GPR_U32(ctx, 31, 0x313794u);
    ctx->pc = 0x313790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31378Cu;
    // 0x313790: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31378Cu, 0x313794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313794u;
label_313794:
    // 0x313794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313798:
    // 0x313798: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
label_31379c:
    if (ctx->pc == 0x31379Cu) {
        ctx->pc = 0x31379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313798u;
        // 0x31379c: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137A0u;
        goto label_3137a0;
    }
    ctx->pc = 0x313798u;
    {
        const bool branch_taken_0x313798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313798) {
            ctx->pc = 0x31379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313798u;
            // 0x31379c: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x3137A0u;
label_3137a0:
    // 0x3137a0: 0xc087502  jal         func_21D408
label_3137a4:
    if (ctx->pc == 0x3137A4u) {
        ctx->pc = 0x3137A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137A0u;
        // 0x3137a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137A8u;
        goto label_3137a8;
    }
    ctx->pc = 0x3137A0u;
    SET_GPR_U32(ctx, 31, 0x3137A8u);
    ctx->pc = 0x3137A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137A0u;
    // 0x3137a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3137A0u, 0x3137A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3137A8u;
label_3137a8:
    // 0x3137a8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3137a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3137ac:
    // 0x3137ac: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x3137acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_3137b0:
    // 0x3137b0: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_3137b4:
    if (ctx->pc == 0x3137B4u) {
        ctx->pc = 0x3137B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137B0u;
        // 0x3137b4: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137B8u;
        goto label_3137b8;
    }
    ctx->pc = 0x3137B0u;
    {
        const bool branch_taken_0x3137b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3137b0) {
            ctx->pc = 0x3137B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137B0u;
            // 0x3137b4: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x3137B8u;
label_3137b8:
    // 0x3137b8: 0x26b40090  addiu       $s4, $s5, 0x90
    ctx->pc = 0x3137b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_3137bc:
    // 0x3137bc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_3137c0:
    // 0x3137c0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x3137c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_3137c4:
    // 0x3137c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3137c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3137c8:
    // 0x3137c8: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x3137c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3137cc:
    // 0x3137cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3137ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3137d0:
    // 0x3137d0: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x3137d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3137d4:
    // 0x3137d4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x3137d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_3137d8:
    // 0x3137d8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3137d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3137dc:
    // 0x3137dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3137dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3137e0:
    // 0x3137e0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3137e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3137e4:
    // 0x3137e4: 0xc1067b8  jal         func_419EE0
label_3137e8:
    if (ctx->pc == 0x3137E8u) {
        ctx->pc = 0x3137E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137E4u;
        // 0x3137e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137ECu;
        goto label_3137ec;
    }
    ctx->pc = 0x3137E4u;
    SET_GPR_U32(ctx, 31, 0x3137ECu);
    ctx->pc = 0x3137E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137E4u;
    // 0x3137e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x3137E4u, 0x3137ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3137ECu;
label_3137ec:
    // 0x3137ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3137ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3137f0:
    // 0x3137f0: 0x52300023  beql        $s1, $s0, . + 4 + (0x23 << 2)
label_3137f4:
    if (ctx->pc == 0x3137F4u) {
        ctx->pc = 0x3137F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137F0u;
        // 0x3137f4: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137F8u;
        goto label_3137f8;
    }
    ctx->pc = 0x3137F0u;
    {
        const bool branch_taken_0x3137f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x3137f0) {
            ctx->pc = 0x3137F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137F0u;
            // 0x3137f4: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x3137F8u;
label_3137f8:
    // 0x3137f8: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x3137f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3137fc:
    // 0x3137fc: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_313800:
    // 0x313800: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_313804:
    // 0x313804: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_313808:
    // 0x313808: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x313808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_31380c:
    // 0x31380c: 0xc0cdb38  jal         func_336CE0
label_313810:
    if (ctx->pc == 0x313810u) {
        ctx->pc = 0x313810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31380Cu;
        // 0x313810: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313814u;
        goto label_313814;
    }
    ctx->pc = 0x31380Cu;
    SET_GPR_U32(ctx, 31, 0x313814u);
    ctx->pc = 0x313810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31380Cu;
    // 0x313810: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31380Cu, 0x313814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313814u;
label_313814:
    // 0x313814: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x313814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_313818:
    // 0x313818: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x313818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31381c:
    // 0x31381c: 0x0  nop
    ctx->pc = 0x31381cu;
    // NOP
label_313820:
    // 0x313820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x313820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313824:
    // 0x313824: 0x0  nop
    ctx->pc = 0x313824u;
    // NOP
label_313828:
    // 0x313828: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_31382c:
    if (ctx->pc == 0x31382Cu) {
        ctx->pc = 0x31382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313828u;
        // 0x31382c: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313830u;
        goto label_313830;
    }
    ctx->pc = 0x313828u;
    {
        const bool branch_taken_0x313828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x313828) {
            ctx->pc = 0x31382Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313828u;
            // 0x31382c: 0x8ea300cc  lw          $v1, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x313830u;
label_313830:
    // 0x313830: 0xc0a4e54  jal         func_293950
label_313834:
    if (ctx->pc == 0x313834u) {
        ctx->pc = 0x313838u;
        goto label_313838;
    }
    ctx->pc = 0x313830u;
    SET_GPR_U32(ctx, 31, 0x313838u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x313830u, 0x313838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313838u;
label_313838:
    // 0x313838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31383c:
    // 0x31383c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_313840:
    if (ctx->pc == 0x313840u) {
        ctx->pc = 0x313840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31383Cu;
        // 0x313840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313844u;
        goto label_313844;
    }
    ctx->pc = 0x31383Cu;
    {
        const bool branch_taken_0x31383c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31383Cu;
        // 0x313840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31383c) {
            ctx->pc = 0x313870u;
            goto label_313870;
        }
    }
    ctx->pc = 0x313844u;
label_313844:
    // 0x313844: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x313844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_313848:
    // 0x313848: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x313848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31384c:
    // 0x31384c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_313850:
    // 0x313850: 0x40f809  jalr        $v0
label_313854:
    if (ctx->pc == 0x313854u) {
        ctx->pc = 0x313854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313850u;
        // 0x313854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313858u;
        goto label_313858;
    }
    ctx->pc = 0x313850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313858u);
        ctx->pc = 0x313854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313850u;
        // 0x313854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313850u, 0x313858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313858u;
label_313858:
    // 0x313858: 0xc64c013c  lwc1        $f12, 0x13C($s2)
    ctx->pc = 0x313858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31385c:
    // 0x31385c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31385cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313860:
    // 0x313860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313864:
    // 0x313864: 0xc0af288  jal         func_2BCA20
label_313868:
    if (ctx->pc == 0x313868u) {
        ctx->pc = 0x313868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313864u;
        // 0x313868: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31386Cu;
        goto label_31386c;
    }
    ctx->pc = 0x313864u;
    SET_GPR_U32(ctx, 31, 0x31386Cu);
    ctx->pc = 0x313868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313864u;
    // 0x313868: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x313864u, 0x31386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31386Cu;
label_31386c:
    // 0x31386c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313870:
    // 0x313870: 0xc0a35d6  jal         func_28D758
label_313874:
    if (ctx->pc == 0x313874u) {
        ctx->pc = 0x313874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313870u;
        // 0x313874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313878u;
        goto label_313878;
    }
    ctx->pc = 0x313870u;
    SET_GPR_U32(ctx, 31, 0x313878u);
    ctx->pc = 0x313874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313870u;
    // 0x313874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x313870u, 0x313878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313878u;
label_313878:
    // 0x313878: 0x1000002b  b           . + 4 + (0x2B << 2)
label_31387c:
    if (ctx->pc == 0x31387Cu) {
        ctx->pc = 0x31387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313878u;
        // 0x31387c: 0xa2f60018  sb          $s6, 0x18($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313880u;
        goto label_313880;
    }
    ctx->pc = 0x313878u;
    {
        const bool branch_taken_0x313878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313878u;
        // 0x31387c: 0xa2f60018  sb          $s6, 0x18($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313878) {
            ctx->pc = 0x313928u;
            goto label_313928;
        }
    }
    ctx->pc = 0x313880u;
label_313880:
    // 0x313880: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x313880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_313884:
    // 0x313884: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_313888:
    if (ctx->pc == 0x313888u) {
        ctx->pc = 0x31388Cu;
        goto label_31388c;
    }
    ctx->pc = 0x313884u;
    {
        const bool branch_taken_0x313884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x313884) {
            ctx->pc = 0x3138ECu;
            goto label_3138ec;
        }
    }
    ctx->pc = 0x31388Cu;
label_31388c:
    // 0x31388c: 0xc0a4e54  jal         func_293950
label_313890:
    if (ctx->pc == 0x313890u) {
        ctx->pc = 0x313894u;
        goto label_313894;
    }
    ctx->pc = 0x31388Cu;
    SET_GPR_U32(ctx, 31, 0x313894u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31388Cu, 0x313894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313894u;
label_313894:
    // 0x313894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313898:
    // 0x313898: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_31389c:
    if (ctx->pc == 0x31389Cu) {
        ctx->pc = 0x31389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313898u;
        // 0x31389c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3138A0u;
        goto label_3138a0;
    }
    ctx->pc = 0x313898u;
    {
        const bool branch_taken_0x313898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313898u;
        // 0x31389c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313898) {
            ctx->pc = 0x3138D8u;
            goto label_3138d8;
        }
    }
    ctx->pc = 0x3138A0u;
label_3138a0:
    // 0x3138a0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3138a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3138a4:
    // 0x3138a4: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x3138a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_3138a8:
    // 0x3138a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3138a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3138ac:
    // 0x3138ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3138acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3138b0:
    // 0x3138b0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3138b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3138b4:
    // 0x3138b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3138b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3138b8:
    // 0x3138b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3138b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3138bc:
    // 0x3138bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3138bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3138c0:
    // 0x3138c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3138c4:
    // 0x3138c4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x3138c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_3138c8:
    // 0x3138c8: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x3138c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
label_3138cc:
    // 0x3138cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3138ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3138d0:
    // 0x3138d0: 0xc0b8c60  jal         func_2E3180
label_3138d4:
    if (ctx->pc == 0x3138D4u) {
        ctx->pc = 0x3138D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138D0u;
        // 0x3138d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3138D8u;
        goto label_3138d8;
    }
    ctx->pc = 0x3138D0u;
    SET_GPR_U32(ctx, 31, 0x3138D8u);
    ctx->pc = 0x3138D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138D0u;
    // 0x3138d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x3138D0u, 0x3138D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138D8u;
label_3138d8:
    // 0x3138d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3138d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3138dc:
    // 0x3138dc: 0xc0a35d6  jal         func_28D758
label_3138e0:
    if (ctx->pc == 0x3138E0u) {
        ctx->pc = 0x3138E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138DCu;
        // 0x3138e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3138E4u;
        goto label_3138e4;
    }
    ctx->pc = 0x3138DCu;
    SET_GPR_U32(ctx, 31, 0x3138E4u);
    ctx->pc = 0x3138E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138DCu;
    // 0x3138e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x3138DCu, 0x3138E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138E4u;
label_3138e4:
    // 0x3138e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3138e8:
    if (ctx->pc == 0x3138E8u) {
        ctx->pc = 0x3138E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138E4u;
        // 0x3138e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3138ECu;
        goto label_3138ec;
    }
    ctx->pc = 0x3138E4u;
    {
        const bool branch_taken_0x3138e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138E4u;
        // 0x3138e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138e4) {
            ctx->pc = 0x31392Cu;
            goto label_31392c;
        }
    }
    ctx->pc = 0x3138ECu;
label_3138ec:
    // 0x3138ec: 0xc0a4e54  jal         func_293950
label_3138f0:
    if (ctx->pc == 0x3138F0u) {
        ctx->pc = 0x3138F4u;
        goto label_3138f4;
    }
    ctx->pc = 0x3138ECu;
    SET_GPR_U32(ctx, 31, 0x3138F4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3138ECu, 0x3138F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138F4u;
label_3138f4:
    // 0x3138f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3138f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3138f8:
    // 0x3138f8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3138fc:
    if (ctx->pc == 0x3138FCu) {
        ctx->pc = 0x3138FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138F8u;
        // 0x3138fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313900u;
        goto label_313900;
    }
    ctx->pc = 0x3138F8u;
    {
        const bool branch_taken_0x3138f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138F8u;
        // 0x3138fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138f8) {
            ctx->pc = 0x313920u;
            goto label_313920;
        }
    }
    ctx->pc = 0x313900u;
label_313900:
    // 0x313900: 0xc087420  jal         func_21D080
label_313904:
    if (ctx->pc == 0x313904u) {
        ctx->pc = 0x313904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313900u;
        // 0x313904: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313908u;
        goto label_313908;
    }
    ctx->pc = 0x313900u;
    SET_GPR_U32(ctx, 31, 0x313908u);
    ctx->pc = 0x313904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313900u;
    // 0x313904: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x313900u, 0x313908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313908u;
label_313908:
    // 0x313908: 0xc6ec0020  lwc1        $f12, 0x20($s7)
    ctx->pc = 0x313908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31390c:
    // 0x31390c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31390cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313910:
    // 0x313910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313914:
    // 0x313914: 0xc0af990  jal         func_2BE640
label_313918:
    if (ctx->pc == 0x313918u) {
        ctx->pc = 0x313918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313914u;
        // 0x313918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31391Cu;
        goto label_31391c;
    }
    ctx->pc = 0x313914u;
    SET_GPR_U32(ctx, 31, 0x31391Cu);
    ctx->pc = 0x313918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313914u;
    // 0x313918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE640u, 0x313914u, 0x31391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31391Cu;
label_31391c:
    // 0x31391c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313920:
    // 0x313920: 0xc0a35d6  jal         func_28D758
label_313924:
    if (ctx->pc == 0x313924u) {
        ctx->pc = 0x313924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313920u;
        // 0x313924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313928u;
        goto label_313928;
    }
    ctx->pc = 0x313920u;
    SET_GPR_U32(ctx, 31, 0x313928u);
    ctx->pc = 0x313924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313920u;
    // 0x313924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x313920u, 0x313928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313928u;
label_313928:
    // 0x313928: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x313928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31392c:
    // 0x31392c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31392cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_313930:
    // 0x313930: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x313930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_313934:
    // 0x313934: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x313934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_313938:
    // 0x313938: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x313938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31393c:
    // 0x31393c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31393cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_313940:
    // 0x313940: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x313940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313944:
    // 0x313944: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x313944u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313948:
    // 0x313948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31394c:
    // 0x31394c: 0x3e00008  jr          $ra
label_313950:
    if (ctx->pc == 0x313950u) {
        ctx->pc = 0x313950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31394Cu;
        // 0x313950: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313954u;
        goto label_313954;
    }
    ctx->pc = 0x31394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31394Cu;
        // 0x313950: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31394Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313954u;
label_313954:
    // 0x313954: 0x0  nop
    ctx->pc = 0x313954u;
    // NOP
    ctx->pc = 0x313958u;
}
