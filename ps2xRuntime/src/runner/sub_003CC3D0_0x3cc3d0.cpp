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

// Function: sub_003CC3D0
// Address: 0x3cc3d0 - 0x3cc510
void sub_003CC3D0_0x3cc3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC3D0_0x3cc3d0");
#endif

    switch (ctx->pc) {
        case 0x3cc3d0u: goto label_3cc3d0;
        case 0x3cc3d4u: goto label_3cc3d4;
        case 0x3cc3d8u: goto label_3cc3d8;
        case 0x3cc3dcu: goto label_3cc3dc;
        case 0x3cc3e0u: goto label_3cc3e0;
        case 0x3cc3e4u: goto label_3cc3e4;
        case 0x3cc3e8u: goto label_3cc3e8;
        case 0x3cc3ecu: goto label_3cc3ec;
        case 0x3cc3f0u: goto label_3cc3f0;
        case 0x3cc3f4u: goto label_3cc3f4;
        case 0x3cc3f8u: goto label_3cc3f8;
        case 0x3cc3fcu: goto label_3cc3fc;
        case 0x3cc400u: goto label_3cc400;
        case 0x3cc404u: goto label_3cc404;
        case 0x3cc408u: goto label_3cc408;
        case 0x3cc40cu: goto label_3cc40c;
        case 0x3cc410u: goto label_3cc410;
        case 0x3cc414u: goto label_3cc414;
        case 0x3cc418u: goto label_3cc418;
        case 0x3cc41cu: goto label_3cc41c;
        case 0x3cc420u: goto label_3cc420;
        case 0x3cc424u: goto label_3cc424;
        case 0x3cc428u: goto label_3cc428;
        case 0x3cc42cu: goto label_3cc42c;
        case 0x3cc430u: goto label_3cc430;
        case 0x3cc434u: goto label_3cc434;
        case 0x3cc438u: goto label_3cc438;
        case 0x3cc43cu: goto label_3cc43c;
        case 0x3cc440u: goto label_3cc440;
        case 0x3cc444u: goto label_3cc444;
        case 0x3cc448u: goto label_3cc448;
        case 0x3cc44cu: goto label_3cc44c;
        case 0x3cc450u: goto label_3cc450;
        case 0x3cc454u: goto label_3cc454;
        case 0x3cc458u: goto label_3cc458;
        case 0x3cc45cu: goto label_3cc45c;
        case 0x3cc460u: goto label_3cc460;
        case 0x3cc464u: goto label_3cc464;
        case 0x3cc468u: goto label_3cc468;
        case 0x3cc46cu: goto label_3cc46c;
        case 0x3cc470u: goto label_3cc470;
        case 0x3cc474u: goto label_3cc474;
        case 0x3cc478u: goto label_3cc478;
        case 0x3cc47cu: goto label_3cc47c;
        case 0x3cc480u: goto label_3cc480;
        case 0x3cc484u: goto label_3cc484;
        case 0x3cc488u: goto label_3cc488;
        case 0x3cc48cu: goto label_3cc48c;
        case 0x3cc490u: goto label_3cc490;
        case 0x3cc494u: goto label_3cc494;
        case 0x3cc498u: goto label_3cc498;
        case 0x3cc49cu: goto label_3cc49c;
        case 0x3cc4a0u: goto label_3cc4a0;
        case 0x3cc4a4u: goto label_3cc4a4;
        case 0x3cc4a8u: goto label_3cc4a8;
        case 0x3cc4acu: goto label_3cc4ac;
        case 0x3cc4b0u: goto label_3cc4b0;
        case 0x3cc4b4u: goto label_3cc4b4;
        case 0x3cc4b8u: goto label_3cc4b8;
        case 0x3cc4bcu: goto label_3cc4bc;
        case 0x3cc4c0u: goto label_3cc4c0;
        case 0x3cc4c4u: goto label_3cc4c4;
        case 0x3cc4c8u: goto label_3cc4c8;
        case 0x3cc4ccu: goto label_3cc4cc;
        case 0x3cc4d0u: goto label_3cc4d0;
        case 0x3cc4d4u: goto label_3cc4d4;
        case 0x3cc4d8u: goto label_3cc4d8;
        case 0x3cc4dcu: goto label_3cc4dc;
        case 0x3cc4e0u: goto label_3cc4e0;
        case 0x3cc4e4u: goto label_3cc4e4;
        case 0x3cc4e8u: goto label_3cc4e8;
        case 0x3cc4ecu: goto label_3cc4ec;
        case 0x3cc4f0u: goto label_3cc4f0;
        case 0x3cc4f4u: goto label_3cc4f4;
        case 0x3cc4f8u: goto label_3cc4f8;
        case 0x3cc4fcu: goto label_3cc4fc;
        case 0x3cc500u: goto label_3cc500;
        case 0x3cc504u: goto label_3cc504;
        case 0x3cc508u: goto label_3cc508;
        case 0x3cc50cu: goto label_3cc50c;
        default: break;
    }

    ctx->pc = 0x3cc3d0u;

label_3cc3d0:
    // 0x3cc3d0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3cc3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3cc3d4:
    // 0x3cc3d4: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3cc3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3cc3d8:
    // 0x3cc3d8: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3cc3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3cc3dc:
    // 0x3cc3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cc3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3e0:
    // 0x3cc3e0: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3cc3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3cc3e4:
    // 0x3cc3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cc3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3e8:
    // 0x3cc3e8: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3cc3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3cc3ec:
    // 0x3cc3ec: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x3cc3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
label_3cc3f0:
    // 0x3cc3f0: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x3cc3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
label_3cc3f4:
    // 0x3cc3f4: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x3cc3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
label_3cc3f8:
    // 0x3cc3f8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3cc3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc3fc:
    // 0x3cc3fc: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3cc3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3cc400:
    // 0x3cc400: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cc400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cc404:
    // 0x3cc404: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc408:
    // 0x3cc408: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc40c:
    // 0x3cc40c: 0x40f809  jalr        $v0
label_3cc410:
    if (ctx->pc == 0x3CC410u) {
        ctx->pc = 0x3CC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC40Cu;
        // 0x3cc410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC414u;
        goto label_3cc414;
    }
    ctx->pc = 0x3CC40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC414u);
        ctx->pc = 0x3CC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC40Cu;
        // 0x3cc410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC40Cu, 0x3CC414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC414u;
label_3cc414:
    // 0x3cc414: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3cc414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc418:
    // 0x3cc418: 0xc0ea14c  jal         func_3A8530
label_3cc41c:
    if (ctx->pc == 0x3CC41Cu) {
        ctx->pc = 0x3CC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC418u;
        // 0x3cc41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC420u;
        goto label_3cc420;
    }
    ctx->pc = 0x3CC418u;
    SET_GPR_U32(ctx, 31, 0x3CC420u);
    ctx->pc = 0x3CC41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC418u;
    // 0x3cc41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CC418u, 0x3CC420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC420u;
label_3cc420:
    // 0x3cc420: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc424:
    // 0x3cc424: 0xc0ea12a  jal         func_3A84A8
label_3cc428:
    if (ctx->pc == 0x3CC428u) {
        ctx->pc = 0x3CC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC424u;
        // 0x3cc428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC42Cu;
        goto label_3cc42c;
    }
    ctx->pc = 0x3CC424u;
    SET_GPR_U32(ctx, 31, 0x3CC42Cu);
    ctx->pc = 0x3CC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC424u;
    // 0x3cc428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC424u, 0x3CC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC42Cu;
label_3cc42c:
    // 0x3cc42c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc42cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc430:
    // 0x3cc430: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc434:
    // 0x3cc434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cc434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc438:
    // 0x3cc438: 0xc0ea12a  jal         func_3A84A8
label_3cc43c:
    if (ctx->pc == 0x3CC43Cu) {
        ctx->pc = 0x3CC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC438u;
        // 0x3cc43c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC440u;
        goto label_3cc440;
    }
    ctx->pc = 0x3CC438u;
    SET_GPR_U32(ctx, 31, 0x3CC440u);
    ctx->pc = 0x3CC43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC438u;
    // 0x3cc43c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC438u, 0x3CC440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC440u;
label_3cc440:
    // 0x3cc440: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc444:
    // 0x3cc444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc448:
    // 0x3cc448: 0xae150054  sw          $s5, 0x54($s0)
    ctx->pc = 0x3cc448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 21));
label_3cc44c:
    // 0x3cc44c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3cc44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3cc450:
    // 0x3cc450: 0xc0e858c  jal         func_3A1630
label_3cc454:
    if (ctx->pc == 0x3CC454u) {
        ctx->pc = 0x3CC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC450u;
        // 0x3cc454: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC458u;
        goto label_3cc458;
    }
    ctx->pc = 0x3CC450u;
    SET_GPR_U32(ctx, 31, 0x3CC458u);
    ctx->pc = 0x3CC454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC450u;
    // 0x3cc454: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CC450u, 0x3CC458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC458u;
label_3cc458:
    // 0x3cc458: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3cc458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc45c:
    // 0x3cc45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc460:
    // 0x3cc460: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3cc460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cc464:
    // 0x3cc464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc468:
    // 0x3cc468: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3cc468u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3cc46c:
    // 0x3cc46c: 0xc0e9132  jal         func_3A44C8
label_3cc470:
    if (ctx->pc == 0x3CC470u) {
        ctx->pc = 0x3CC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC46Cu;
        // 0x3cc470: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC474u;
        goto label_3cc474;
    }
    ctx->pc = 0x3CC46Cu;
    SET_GPR_U32(ctx, 31, 0x3CC474u);
    ctx->pc = 0x3CC470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC46Cu;
    // 0x3cc470: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3CC46Cu, 0x3CC474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC474u;
label_3cc474:
    // 0x3cc474: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3cc474u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc478:
    // 0x3cc478: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3cc478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc47c:
    // 0x3cc47c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3cc47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cc480:
    // 0x3cc480: 0x27b40440  addiu       $s4, $sp, 0x440
    ctx->pc = 0x3cc480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3cc484:
    // 0x3cc484: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3cc484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3cc488:
    // 0x3cc488: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3cc488u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3cc48c:
    // 0x3cc48c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3cc48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3cc490:
    // 0x3cc490: 0x26314888  addiu       $s1, $s1, 0x4888
    ctx->pc = 0x3cc490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18568));
label_3cc494:
    // 0x3cc494: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x3cc494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
label_3cc498:
    // 0x3cc498: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cc498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc49c:
    // 0x3cc49c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc4a0:
    // 0x3cc4a0: 0xc0e9f84  jal         func_3A7E10
label_3cc4a4:
    if (ctx->pc == 0x3CC4A4u) {
        ctx->pc = 0x3CC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4A0u;
        // 0x3cc4a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4A8u;
        goto label_3cc4a8;
    }
    ctx->pc = 0x3CC4A0u;
    SET_GPR_U32(ctx, 31, 0x3CC4A8u);
    ctx->pc = 0x3CC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC4A0u;
    // 0x3cc4a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3CC4A0u, 0x3CC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC4A8u;
label_3cc4a8:
    // 0x3cc4a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cc4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc4ac:
    // 0x3cc4ac: 0xc0f15bc  jal         func_3C56F0
label_3cc4b0:
    if (ctx->pc == 0x3CC4B0u) {
        ctx->pc = 0x3CC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4ACu;
        // 0x3cc4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4B4u;
        goto label_3cc4b4;
    }
    ctx->pc = 0x3CC4ACu;
    SET_GPR_U32(ctx, 31, 0x3CC4B4u);
    ctx->pc = 0x3CC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC4ACu;
    // 0x3cc4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CC4ACu, 0x3CC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC4B4u;
label_3cc4b4:
    // 0x3cc4b4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3cc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3cc4b8:
    // 0x3cc4b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cc4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc4bc:
    // 0x3cc4bc: 0xafb50440  sw          $s5, 0x440($sp)
    ctx->pc = 0x3cc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 21));
label_3cc4c0:
    // 0x3cc4c0: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3cc4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3cc4c4:
    // 0x3cc4c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3cc4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc4c8:
    // 0x3cc4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc4cc:
    // 0x3cc4cc: 0xc0e9f84  jal         func_3A7E10
label_3cc4d0:
    if (ctx->pc == 0x3CC4D0u) {
        ctx->pc = 0x3CC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4CCu;
        // 0x3cc4d0: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4D4u;
        goto label_3cc4d4;
    }
    ctx->pc = 0x3CC4CCu;
    SET_GPR_U32(ctx, 31, 0x3CC4D4u);
    ctx->pc = 0x3CC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC4CCu;
    // 0x3cc4d0: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3CC4CCu, 0x3CC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC4D4u;
label_3cc4d4:
    // 0x3cc4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc4d8:
    // 0x3cc4d8: 0xc0f15bc  jal         func_3C56F0
label_3cc4dc:
    if (ctx->pc == 0x3CC4DCu) {
        ctx->pc = 0x3CC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4D8u;
        // 0x3cc4dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4E0u;
        goto label_3cc4e0;
    }
    ctx->pc = 0x3CC4D8u;
    SET_GPR_U32(ctx, 31, 0x3CC4E0u);
    ctx->pc = 0x3CC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC4D8u;
    // 0x3cc4dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CC4D8u, 0x3CC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC4E0u;
label_3cc4e0:
    // 0x3cc4e0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x3cc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_3cc4e4:
    // 0x3cc4e4: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3cc4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3cc4e8:
    // 0x3cc4e8: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3cc4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3cc4ec:
    // 0x3cc4ec: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3cc4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3cc4f0:
    // 0x3cc4f0: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3cc4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3cc4f4:
    // 0x3cc4f4: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x3cc4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3cc4f8:
    // 0x3cc4f8: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x3cc4f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3cc4fc:
    // 0x3cc4fc: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x3cc4fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3cc500:
    // 0x3cc500: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3cc500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3cc504:
    // 0x3cc504: 0x3e00008  jr          $ra
label_3cc508:
    if (ctx->pc == 0x3CC508u) {
        ctx->pc = 0x3CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC504u;
        // 0x3cc508: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC50Cu;
        goto label_3cc50c;
    }
    ctx->pc = 0x3CC504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC504u;
        // 0x3cc508: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC50Cu;
label_3cc50c:
    // 0x3cc50c: 0x0  nop
    ctx->pc = 0x3cc50cu;
    // NOP
    ctx->pc = 0x3cc510u;
}
