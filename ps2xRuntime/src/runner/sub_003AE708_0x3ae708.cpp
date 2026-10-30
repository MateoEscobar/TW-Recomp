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

// Function: sub_003AE708
// Address: 0x3ae708 - 0x3ae878
void sub_003AE708_0x3ae708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE708_0x3ae708");
#endif

    switch (ctx->pc) {
        case 0x3ae708u: goto label_3ae708;
        case 0x3ae70cu: goto label_3ae70c;
        case 0x3ae710u: goto label_3ae710;
        case 0x3ae714u: goto label_3ae714;
        case 0x3ae718u: goto label_3ae718;
        case 0x3ae71cu: goto label_3ae71c;
        case 0x3ae720u: goto label_3ae720;
        case 0x3ae724u: goto label_3ae724;
        case 0x3ae728u: goto label_3ae728;
        case 0x3ae72cu: goto label_3ae72c;
        case 0x3ae730u: goto label_3ae730;
        case 0x3ae734u: goto label_3ae734;
        case 0x3ae738u: goto label_3ae738;
        case 0x3ae73cu: goto label_3ae73c;
        case 0x3ae740u: goto label_3ae740;
        case 0x3ae744u: goto label_3ae744;
        case 0x3ae748u: goto label_3ae748;
        case 0x3ae74cu: goto label_3ae74c;
        case 0x3ae750u: goto label_3ae750;
        case 0x3ae754u: goto label_3ae754;
        case 0x3ae758u: goto label_3ae758;
        case 0x3ae75cu: goto label_3ae75c;
        case 0x3ae760u: goto label_3ae760;
        case 0x3ae764u: goto label_3ae764;
        case 0x3ae768u: goto label_3ae768;
        case 0x3ae76cu: goto label_3ae76c;
        case 0x3ae770u: goto label_3ae770;
        case 0x3ae774u: goto label_3ae774;
        case 0x3ae778u: goto label_3ae778;
        case 0x3ae77cu: goto label_3ae77c;
        case 0x3ae780u: goto label_3ae780;
        case 0x3ae784u: goto label_3ae784;
        case 0x3ae788u: goto label_3ae788;
        case 0x3ae78cu: goto label_3ae78c;
        case 0x3ae790u: goto label_3ae790;
        case 0x3ae794u: goto label_3ae794;
        case 0x3ae798u: goto label_3ae798;
        case 0x3ae79cu: goto label_3ae79c;
        case 0x3ae7a0u: goto label_3ae7a0;
        case 0x3ae7a4u: goto label_3ae7a4;
        case 0x3ae7a8u: goto label_3ae7a8;
        case 0x3ae7acu: goto label_3ae7ac;
        case 0x3ae7b0u: goto label_3ae7b0;
        case 0x3ae7b4u: goto label_3ae7b4;
        case 0x3ae7b8u: goto label_3ae7b8;
        case 0x3ae7bcu: goto label_3ae7bc;
        case 0x3ae7c0u: goto label_3ae7c0;
        case 0x3ae7c4u: goto label_3ae7c4;
        case 0x3ae7c8u: goto label_3ae7c8;
        case 0x3ae7ccu: goto label_3ae7cc;
        case 0x3ae7d0u: goto label_3ae7d0;
        case 0x3ae7d4u: goto label_3ae7d4;
        case 0x3ae7d8u: goto label_3ae7d8;
        case 0x3ae7dcu: goto label_3ae7dc;
        case 0x3ae7e0u: goto label_3ae7e0;
        case 0x3ae7e4u: goto label_3ae7e4;
        case 0x3ae7e8u: goto label_3ae7e8;
        case 0x3ae7ecu: goto label_3ae7ec;
        case 0x3ae7f0u: goto label_3ae7f0;
        case 0x3ae7f4u: goto label_3ae7f4;
        case 0x3ae7f8u: goto label_3ae7f8;
        case 0x3ae7fcu: goto label_3ae7fc;
        case 0x3ae800u: goto label_3ae800;
        case 0x3ae804u: goto label_3ae804;
        case 0x3ae808u: goto label_3ae808;
        case 0x3ae80cu: goto label_3ae80c;
        case 0x3ae810u: goto label_3ae810;
        case 0x3ae814u: goto label_3ae814;
        case 0x3ae818u: goto label_3ae818;
        case 0x3ae81cu: goto label_3ae81c;
        case 0x3ae820u: goto label_3ae820;
        case 0x3ae824u: goto label_3ae824;
        case 0x3ae828u: goto label_3ae828;
        case 0x3ae82cu: goto label_3ae82c;
        case 0x3ae830u: goto label_3ae830;
        case 0x3ae834u: goto label_3ae834;
        case 0x3ae838u: goto label_3ae838;
        case 0x3ae83cu: goto label_3ae83c;
        case 0x3ae840u: goto label_3ae840;
        case 0x3ae844u: goto label_3ae844;
        case 0x3ae848u: goto label_3ae848;
        case 0x3ae84cu: goto label_3ae84c;
        case 0x3ae850u: goto label_3ae850;
        case 0x3ae854u: goto label_3ae854;
        case 0x3ae858u: goto label_3ae858;
        case 0x3ae85cu: goto label_3ae85c;
        case 0x3ae860u: goto label_3ae860;
        case 0x3ae864u: goto label_3ae864;
        case 0x3ae868u: goto label_3ae868;
        case 0x3ae86cu: goto label_3ae86c;
        case 0x3ae870u: goto label_3ae870;
        case 0x3ae874u: goto label_3ae874;
        default: break;
    }

    ctx->pc = 0x3ae708u;

label_3ae708:
    // 0x3ae708: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ae708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3ae70c:
    // 0x3ae70c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ae70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3ae710:
    // 0x3ae710: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ae710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3ae714:
    // 0x3ae714: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ae714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ae718:
    // 0x3ae718: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ae718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3ae71c:
    // 0x3ae71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae720:
    // 0x3ae720: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ae720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3ae724:
    // 0x3ae724: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ae724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ae728:
    // 0x3ae728: 0x3c132806  lui         $s3, 0x2806
    ctx->pc = 0x3ae728u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)10246 << 16));
label_3ae72c:
    // 0x3ae72c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3ae72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3ae730:
    // 0x3ae730: 0x36730680  ori         $s3, $s3, 0x680
    ctx->pc = 0x3ae730u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1664);
label_3ae734:
    // 0x3ae734: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ae734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ae738:
    // 0x3ae738: 0x26350010  addiu       $s5, $s1, 0x10
    ctx->pc = 0x3ae738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ae73c:
    // 0x3ae73c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ae73cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3ae740:
    // 0x3ae740: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ae740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ae744:
    // 0x3ae744: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ae744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ae748:
    // 0x3ae748: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ae748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ae74c:
    // 0x3ae74c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae750:
    // 0x3ae750: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae754:
    // 0x3ae754: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae758:
    // 0x3ae758: 0x40f809  jalr        $v0
label_3ae75c:
    if (ctx->pc == 0x3AE75Cu) {
        ctx->pc = 0x3AE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE758u;
        // 0x3ae75c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE760u;
        goto label_3ae760;
    }
    ctx->pc = 0x3AE758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE760u);
        ctx->pc = 0x3AE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE758u;
        // 0x3ae75c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE758u, 0x3AE760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE760u;
label_3ae760:
    // 0x3ae760: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ae760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ae764:
    // 0x3ae764: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ae764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae768:
    // 0x3ae768: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3ae768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3ae76c:
    // 0x3ae76c: 0xc1073cc  jal         func_41CF30
label_3ae770:
    if (ctx->pc == 0x3AE770u) {
        ctx->pc = 0x3AE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE76Cu;
        // 0x3ae770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE774u;
        goto label_3ae774;
    }
    ctx->pc = 0x3AE76Cu;
    SET_GPR_U32(ctx, 31, 0x3AE774u);
    ctx->pc = 0x3AE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE76Cu;
    // 0x3ae770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3AE76Cu, 0x3AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE774u;
label_3ae774:
    // 0x3ae774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ae774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ae778:
    // 0x3ae778: 0x3c0355c9  lui         $v1, 0x55C9
    ctx->pc = 0x3ae778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21961 << 16));
label_3ae77c:
    // 0x3ae77c: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x3ae77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_3ae780:
    // 0x3ae780: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3ae780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3ae784:
    // 0x3ae784: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3ae784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3ae788:
    // 0x3ae788: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x3ae788u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3ae78c:
    // 0x3ae78c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ae78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ae790:
    // 0x3ae790: 0xc0e858c  jal         func_3A1630
label_3ae794:
    if (ctx->pc == 0x3AE794u) {
        ctx->pc = 0x3AE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE790u;
        // 0x3ae794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE798u;
        goto label_3ae798;
    }
    ctx->pc = 0x3AE790u;
    SET_GPR_U32(ctx, 31, 0x3AE798u);
    ctx->pc = 0x3AE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE790u;
    // 0x3ae794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AE790u, 0x3AE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE798u;
label_3ae798:
    // 0x3ae798: 0xae3300b0  sw          $s3, 0xB0($s1)
    ctx->pc = 0x3ae798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 19));
label_3ae79c:
    // 0x3ae79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ae7a0:
    // 0x3ae7a0: 0xc0ea146  jal         func_3A8518
label_3ae7a4:
    if (ctx->pc == 0x3AE7A4u) {
        ctx->pc = 0x3AE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7A0u;
        // 0x3ae7a4: 0xae2000bc  sw          $zero, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE7A8u;
        goto label_3ae7a8;
    }
    ctx->pc = 0x3AE7A0u;
    SET_GPR_U32(ctx, 31, 0x3AE7A8u);
    ctx->pc = 0x3AE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE7A0u;
    // 0x3ae7a4: 0xae2000bc  sw          $zero, 0xBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AE7A0u, 0x3AE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE7A8u;
label_3ae7a8:
    // 0x3ae7a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ae7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ae7ac:
    // 0x3ae7ac: 0xc0ea12a  jal         func_3A84A8
label_3ae7b0:
    if (ctx->pc == 0x3AE7B0u) {
        ctx->pc = 0x3AE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7ACu;
        // 0x3ae7b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE7B4u;
        goto label_3ae7b4;
    }
    ctx->pc = 0x3AE7ACu;
    SET_GPR_U32(ctx, 31, 0x3AE7B4u);
    ctx->pc = 0x3AE7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE7ACu;
    // 0x3ae7b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AE7ACu, 0x3AE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE7B4u;
label_3ae7b4:
    // 0x3ae7b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ae7b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae7b8:
    // 0x3ae7b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ae7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ae7bc:
    // 0x3ae7bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ae7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ae7c0:
    // 0x3ae7c0: 0xc0ea12a  jal         func_3A84A8
label_3ae7c4:
    if (ctx->pc == 0x3AE7C4u) {
        ctx->pc = 0x3AE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7C0u;
        // 0x3ae7c4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE7C8u;
        goto label_3ae7c8;
    }
    ctx->pc = 0x3AE7C0u;
    SET_GPR_U32(ctx, 31, 0x3AE7C8u);
    ctx->pc = 0x3AE7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE7C0u;
    // 0x3ae7c4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AE7C0u, 0x3AE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE7C8u;
label_3ae7c8:
    // 0x3ae7c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ae7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae7cc:
    // 0x3ae7cc: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3ae7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3ae7d0:
    // 0x3ae7d0: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3ae7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3ae7d4:
    // 0x3ae7d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ae7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ae7d8:
    // 0x3ae7d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ae7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ae7dc:
    // 0x3ae7dc: 0xc0cd4ee  jal         func_3353B8
label_3ae7e0:
    if (ctx->pc == 0x3AE7E0u) {
        ctx->pc = 0x3AE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7DCu;
        // 0x3ae7e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE7E4u;
        goto label_3ae7e4;
    }
    ctx->pc = 0x3AE7DCu;
    SET_GPR_U32(ctx, 31, 0x3AE7E4u);
    ctx->pc = 0x3AE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE7DCu;
    // 0x3ae7e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AE7DCu, 0x3AE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE7E4u;
label_3ae7e4:
    // 0x3ae7e4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ae7e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae7e8:
    // 0x3ae7e8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ae7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3ae7ec:
    // 0x3ae7ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3ae7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae7f0:
    // 0x3ae7f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3ae7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_3ae7f4:
    // 0x3ae7f4: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3ae7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3ae7f8:
    // 0x3ae7f8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3ae7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ae7fc:
    // 0x3ae7fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3ae7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3ae800:
    // 0x3ae800: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3ae800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3ae804:
    // 0x3ae804: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3ae804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3ae808:
    // 0x3ae808: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3ae808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3ae80c:
    // 0x3ae80c: 0x40f809  jalr        $v0
label_3ae810:
    if (ctx->pc == 0x3AE810u) {
        ctx->pc = 0x3AE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE80Cu;
        // 0x3ae810: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE814u;
        goto label_3ae814;
    }
    ctx->pc = 0x3AE80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE814u);
        ctx->pc = 0x3AE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE80Cu;
        // 0x3ae810: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE80Cu, 0x3AE814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE814u;
label_3ae814:
    // 0x3ae814: 0xae3300b4  sw          $s3, 0xB4($s1)
    ctx->pc = 0x3ae814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 19));
label_3ae818:
    // 0x3ae818: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3ae818u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3ae81c:
    // 0x3ae81c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3ae81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3ae820:
    // 0x3ae820: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ae820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ae824:
    // 0x3ae824: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ae824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ae828:
    // 0x3ae828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ae828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ae82c:
    // 0x3ae82c: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x3ae82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
label_3ae830:
    // 0x3ae830: 0xc0cd518  jal         func_335460
label_3ae834:
    if (ctx->pc == 0x3AE834u) {
        ctx->pc = 0x3AE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE830u;
        // 0x3ae834: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE838u;
        goto label_3ae838;
    }
    ctx->pc = 0x3AE830u;
    SET_GPR_U32(ctx, 31, 0x3AE838u);
    ctx->pc = 0x3AE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE830u;
    // 0x3ae834: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AE830u, 0x3AE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE838u;
label_3ae838:
    // 0x3ae838: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3ae838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3ae83c:
    // 0x3ae83c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ae83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae840:
    // 0x3ae840: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ae840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ae844:
    // 0x3ae844: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3ae844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ae848:
    // 0x3ae848: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3ae848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3ae84c:
    // 0x3ae84c: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x3ae84cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
label_3ae850:
    // 0x3ae850: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3ae850u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3ae854:
    // 0x3ae854: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ae854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ae858:
    // 0x3ae858: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3ae858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ae85c:
    // 0x3ae85c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ae85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ae860:
    // 0x3ae860: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3ae860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ae864:
    // 0x3ae864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ae864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae868:
    // 0x3ae868: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ae868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ae86c:
    // 0x3ae86c: 0x3e00008  jr          $ra
label_3ae870:
    if (ctx->pc == 0x3AE870u) {
        ctx->pc = 0x3AE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE86Cu;
        // 0x3ae870: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE874u;
        goto label_3ae874;
    }
    ctx->pc = 0x3AE86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE86Cu;
        // 0x3ae870: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE874u;
label_3ae874:
    // 0x3ae874: 0x0  nop
    ctx->pc = 0x3ae874u;
    // NOP
    ctx->pc = 0x3ae878u;
}
