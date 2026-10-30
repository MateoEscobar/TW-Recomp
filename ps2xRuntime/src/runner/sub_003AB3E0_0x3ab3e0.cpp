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

// Function: sub_003AB3E0
// Address: 0x3ab3e0 - 0x3ab5a8
void sub_003AB3E0_0x3ab3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB3E0_0x3ab3e0");
#endif

    switch (ctx->pc) {
        case 0x3ab3e0u: goto label_3ab3e0;
        case 0x3ab3e4u: goto label_3ab3e4;
        case 0x3ab3e8u: goto label_3ab3e8;
        case 0x3ab3ecu: goto label_3ab3ec;
        case 0x3ab3f0u: goto label_3ab3f0;
        case 0x3ab3f4u: goto label_3ab3f4;
        case 0x3ab3f8u: goto label_3ab3f8;
        case 0x3ab3fcu: goto label_3ab3fc;
        case 0x3ab400u: goto label_3ab400;
        case 0x3ab404u: goto label_3ab404;
        case 0x3ab408u: goto label_3ab408;
        case 0x3ab40cu: goto label_3ab40c;
        case 0x3ab410u: goto label_3ab410;
        case 0x3ab414u: goto label_3ab414;
        case 0x3ab418u: goto label_3ab418;
        case 0x3ab41cu: goto label_3ab41c;
        case 0x3ab420u: goto label_3ab420;
        case 0x3ab424u: goto label_3ab424;
        case 0x3ab428u: goto label_3ab428;
        case 0x3ab42cu: goto label_3ab42c;
        case 0x3ab430u: goto label_3ab430;
        case 0x3ab434u: goto label_3ab434;
        case 0x3ab438u: goto label_3ab438;
        case 0x3ab43cu: goto label_3ab43c;
        case 0x3ab440u: goto label_3ab440;
        case 0x3ab444u: goto label_3ab444;
        case 0x3ab448u: goto label_3ab448;
        case 0x3ab44cu: goto label_3ab44c;
        case 0x3ab450u: goto label_3ab450;
        case 0x3ab454u: goto label_3ab454;
        case 0x3ab458u: goto label_3ab458;
        case 0x3ab45cu: goto label_3ab45c;
        case 0x3ab460u: goto label_3ab460;
        case 0x3ab464u: goto label_3ab464;
        case 0x3ab468u: goto label_3ab468;
        case 0x3ab46cu: goto label_3ab46c;
        case 0x3ab470u: goto label_3ab470;
        case 0x3ab474u: goto label_3ab474;
        case 0x3ab478u: goto label_3ab478;
        case 0x3ab47cu: goto label_3ab47c;
        case 0x3ab480u: goto label_3ab480;
        case 0x3ab484u: goto label_3ab484;
        case 0x3ab488u: goto label_3ab488;
        case 0x3ab48cu: goto label_3ab48c;
        case 0x3ab490u: goto label_3ab490;
        case 0x3ab494u: goto label_3ab494;
        case 0x3ab498u: goto label_3ab498;
        case 0x3ab49cu: goto label_3ab49c;
        case 0x3ab4a0u: goto label_3ab4a0;
        case 0x3ab4a4u: goto label_3ab4a4;
        case 0x3ab4a8u: goto label_3ab4a8;
        case 0x3ab4acu: goto label_3ab4ac;
        case 0x3ab4b0u: goto label_3ab4b0;
        case 0x3ab4b4u: goto label_3ab4b4;
        case 0x3ab4b8u: goto label_3ab4b8;
        case 0x3ab4bcu: goto label_3ab4bc;
        case 0x3ab4c0u: goto label_3ab4c0;
        case 0x3ab4c4u: goto label_3ab4c4;
        case 0x3ab4c8u: goto label_3ab4c8;
        case 0x3ab4ccu: goto label_3ab4cc;
        case 0x3ab4d0u: goto label_3ab4d0;
        case 0x3ab4d4u: goto label_3ab4d4;
        case 0x3ab4d8u: goto label_3ab4d8;
        case 0x3ab4dcu: goto label_3ab4dc;
        case 0x3ab4e0u: goto label_3ab4e0;
        case 0x3ab4e4u: goto label_3ab4e4;
        case 0x3ab4e8u: goto label_3ab4e8;
        case 0x3ab4ecu: goto label_3ab4ec;
        case 0x3ab4f0u: goto label_3ab4f0;
        case 0x3ab4f4u: goto label_3ab4f4;
        case 0x3ab4f8u: goto label_3ab4f8;
        case 0x3ab4fcu: goto label_3ab4fc;
        case 0x3ab500u: goto label_3ab500;
        case 0x3ab504u: goto label_3ab504;
        case 0x3ab508u: goto label_3ab508;
        case 0x3ab50cu: goto label_3ab50c;
        case 0x3ab510u: goto label_3ab510;
        case 0x3ab514u: goto label_3ab514;
        case 0x3ab518u: goto label_3ab518;
        case 0x3ab51cu: goto label_3ab51c;
        case 0x3ab520u: goto label_3ab520;
        case 0x3ab524u: goto label_3ab524;
        case 0x3ab528u: goto label_3ab528;
        case 0x3ab52cu: goto label_3ab52c;
        case 0x3ab530u: goto label_3ab530;
        case 0x3ab534u: goto label_3ab534;
        case 0x3ab538u: goto label_3ab538;
        case 0x3ab53cu: goto label_3ab53c;
        case 0x3ab540u: goto label_3ab540;
        case 0x3ab544u: goto label_3ab544;
        case 0x3ab548u: goto label_3ab548;
        case 0x3ab54cu: goto label_3ab54c;
        case 0x3ab550u: goto label_3ab550;
        case 0x3ab554u: goto label_3ab554;
        case 0x3ab558u: goto label_3ab558;
        case 0x3ab55cu: goto label_3ab55c;
        case 0x3ab560u: goto label_3ab560;
        case 0x3ab564u: goto label_3ab564;
        case 0x3ab568u: goto label_3ab568;
        case 0x3ab56cu: goto label_3ab56c;
        case 0x3ab570u: goto label_3ab570;
        case 0x3ab574u: goto label_3ab574;
        case 0x3ab578u: goto label_3ab578;
        case 0x3ab57cu: goto label_3ab57c;
        case 0x3ab580u: goto label_3ab580;
        case 0x3ab584u: goto label_3ab584;
        case 0x3ab588u: goto label_3ab588;
        case 0x3ab58cu: goto label_3ab58c;
        case 0x3ab590u: goto label_3ab590;
        case 0x3ab594u: goto label_3ab594;
        case 0x3ab598u: goto label_3ab598;
        case 0x3ab59cu: goto label_3ab59c;
        case 0x3ab5a0u: goto label_3ab5a0;
        case 0x3ab5a4u: goto label_3ab5a4;
        default: break;
    }

    ctx->pc = 0x3ab3e0u;

label_3ab3e0:
    // 0x3ab3e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ab3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3ab3e4:
    // 0x3ab3e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ab3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3ab3e8:
    // 0x3ab3e8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ab3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3ab3ec:
    // 0x3ab3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab3f0:
    // 0x3ab3f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ab3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3ab3f4:
    // 0x3ab3f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab3f8:
    // 0x3ab3f8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ab3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3ab3fc:
    // 0x3ab3fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ab3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ab400:
    // 0x3ab400: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x3ab400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3ab404:
    // 0x3ab404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ab404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ab408:
    // 0x3ab408: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3ab408u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3ab40c:
    // 0x3ab40c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ab40cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3ab410:
    // 0x3ab410: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ab410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab414:
    // 0x3ab414: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ab414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ab418:
    // 0x3ab418: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ab418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ab41c:
    // 0x3ab41c: 0x40f809  jalr        $v0
label_3ab420:
    if (ctx->pc == 0x3AB420u) {
        ctx->pc = 0x3AB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB41Cu;
        // 0x3ab420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB424u;
        goto label_3ab424;
    }
    ctx->pc = 0x3AB41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB424u);
        ctx->pc = 0x3AB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB41Cu;
        // 0x3ab420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB41Cu, 0x3AB424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB424u;
label_3ab424:
    // 0x3ab424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab428:
    // 0x3ab428: 0xc0ea146  jal         func_3A8518
label_3ab42c:
    if (ctx->pc == 0x3AB42Cu) {
        ctx->pc = 0x3AB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB428u;
        // 0x3ab42c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB430u;
        goto label_3ab430;
    }
    ctx->pc = 0x3AB428u;
    SET_GPR_U32(ctx, 31, 0x3AB430u);
    ctx->pc = 0x3AB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB428u;
    // 0x3ab42c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AB428u, 0x3AB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB430u;
label_3ab430:
    // 0x3ab430: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ab430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab434:
    // 0x3ab434: 0xc0ea12a  jal         func_3A84A8
label_3ab438:
    if (ctx->pc == 0x3AB438u) {
        ctx->pc = 0x3AB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB434u;
        // 0x3ab438: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB43Cu;
        goto label_3ab43c;
    }
    ctx->pc = 0x3AB434u;
    SET_GPR_U32(ctx, 31, 0x3AB43Cu);
    ctx->pc = 0x3AB438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB434u;
    // 0x3ab438: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AB434u, 0x3AB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB43Cu;
label_3ab43c:
    // 0x3ab43c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ab43cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab440:
    // 0x3ab440: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ab440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab444:
    // 0x3ab444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab448:
    // 0x3ab448: 0xc0ea12a  jal         func_3A84A8
label_3ab44c:
    if (ctx->pc == 0x3AB44Cu) {
        ctx->pc = 0x3AB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB448u;
        // 0x3ab44c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB450u;
        goto label_3ab450;
    }
    ctx->pc = 0x3AB448u;
    SET_GPR_U32(ctx, 31, 0x3AB450u);
    ctx->pc = 0x3AB44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB448u;
    // 0x3ab44c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AB448u, 0x3AB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB450u;
label_3ab450:
    // 0x3ab450: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ab450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab454:
    // 0x3ab454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab458:
    // 0x3ab458: 0xc0ea146  jal         func_3A8518
label_3ab45c:
    if (ctx->pc == 0x3AB45Cu) {
        ctx->pc = 0x3AB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB458u;
        // 0x3ab45c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB460u;
        goto label_3ab460;
    }
    ctx->pc = 0x3AB458u;
    SET_GPR_U32(ctx, 31, 0x3AB460u);
    ctx->pc = 0x3AB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB458u;
    // 0x3ab45c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AB458u, 0x3AB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB460u;
label_3ab460:
    // 0x3ab460: 0xc0ea14c  jal         func_3A8530
label_3ab464:
    if (ctx->pc == 0x3AB464u) {
        ctx->pc = 0x3AB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB460u;
        // 0x3ab464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB468u;
        goto label_3ab468;
    }
    ctx->pc = 0x3AB460u;
    SET_GPR_U32(ctx, 31, 0x3AB468u);
    ctx->pc = 0x3AB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB460u;
    // 0x3ab464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AB460u, 0x3AB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB468u;
label_3ab468:
    // 0x3ab468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab46c:
    // 0x3ab46c: 0xc0ea146  jal         func_3A8518
label_3ab470:
    if (ctx->pc == 0x3AB470u) {
        ctx->pc = 0x3AB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB46Cu;
        // 0x3ab470: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB474u;
        goto label_3ab474;
    }
    ctx->pc = 0x3AB46Cu;
    SET_GPR_U32(ctx, 31, 0x3AB474u);
    ctx->pc = 0x3AB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB46Cu;
    // 0x3ab470: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AB46Cu, 0x3AB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB474u;
label_3ab474:
    // 0x3ab474: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ab474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab478:
    // 0x3ab478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab47c:
    // 0x3ab47c: 0xc0e858c  jal         func_3A1630
label_3ab480:
    if (ctx->pc == 0x3AB480u) {
        ctx->pc = 0x3AB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB47Cu;
        // 0x3ab480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB484u;
        goto label_3ab484;
    }
    ctx->pc = 0x3AB47Cu;
    SET_GPR_U32(ctx, 31, 0x3AB484u);
    ctx->pc = 0x3AB480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB47Cu;
    // 0x3ab480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AB47Cu, 0x3AB484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB484u;
label_3ab484:
    // 0x3ab484: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3ab484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ab488:
    // 0x3ab488: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3ab488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3ab48c:
    // 0x3ab48c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3ab48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3ab490:
    // 0x3ab490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ab490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab494:
    // 0x3ab494: 0xc0e862e  jal         func_3A18B8
label_3ab498:
    if (ctx->pc == 0x3AB498u) {
        ctx->pc = 0x3AB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB494u;
        // 0x3ab498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB49Cu;
        goto label_3ab49c;
    }
    ctx->pc = 0x3AB494u;
    SET_GPR_U32(ctx, 31, 0x3AB49Cu);
    ctx->pc = 0x3AB498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB494u;
    // 0x3ab498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3AB494u, 0x3AB49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB49Cu;
label_3ab49c:
    // 0x3ab49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab4a0:
    // 0x3ab4a0: 0xc0e896c  jal         func_3A25B0
label_3ab4a4:
    if (ctx->pc == 0x3AB4A4u) {
        ctx->pc = 0x3AB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4A0u;
        // 0x3ab4a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4A8u;
        goto label_3ab4a8;
    }
    ctx->pc = 0x3AB4A0u;
    SET_GPR_U32(ctx, 31, 0x3AB4A8u);
    ctx->pc = 0x3AB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB4A0u;
    // 0x3ab4a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3AB4A0u, 0x3AB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4A8u;
label_3ab4a8:
    // 0x3ab4a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ab4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab4ac:
    // 0x3ab4ac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3ab4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3ab4b0:
    // 0x3ab4b0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3ab4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab4b4:
    // 0x3ab4b4: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3ab4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3ab4b8:
    // 0x3ab4b8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3ab4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3ab4bc:
    // 0x3ab4bc: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3ab4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3ab4c0:
    // 0x3ab4c0: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3ab4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3ab4c4:
    // 0x3ab4c4: 0x60f809  jalr        $v1
label_3ab4c8:
    if (ctx->pc == 0x3AB4C8u) {
        ctx->pc = 0x3AB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4C4u;
        // 0x3ab4c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4CCu;
        goto label_3ab4cc;
    }
    ctx->pc = 0x3AB4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AB4CCu);
        ctx->pc = 0x3AB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4C4u;
        // 0x3ab4c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB4C4u, 0x3AB4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB4CCu;
label_3ab4cc:
    // 0x3ab4cc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ab4ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab4d0:
    // 0x3ab4d0: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3ab4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3ab4d4:
    // 0x3ab4d4: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_3ab4d8:
    if (ctx->pc == 0x3AB4D8u) {
        ctx->pc = 0x3AB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4D4u;
        // 0x3ab4d8: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4DCu;
        goto label_3ab4dc;
    }
    ctx->pc = 0x3AB4D4u;
    {
        const bool branch_taken_0x3ab4d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4D4u;
        // 0x3ab4d8: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4d4) {
            ctx->pc = 0x3AB53Cu;
            goto label_3ab53c;
        }
    }
    ctx->pc = 0x3AB4DCu;
label_3ab4dc:
    // 0x3ab4dc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3ab4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3ab4e0:
    // 0x3ab4e0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3ab4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3ab4e4:
    // 0x3ab4e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ab4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ab4e8:
    // 0x3ab4e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab4ec:
    // 0x3ab4ec: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ab4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ab4f0:
    // 0x3ab4f0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3ab4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3ab4f4:
    // 0x3ab4f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ab4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ab4f8:
    // 0x3ab4f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab4fc:
    // 0x3ab4fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3ab4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ab500:
    // 0x3ab500: 0xc0cd518  jal         func_335460
label_3ab504:
    if (ctx->pc == 0x3AB504u) {
        ctx->pc = 0x3AB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB500u;
        // 0x3ab504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB508u;
        goto label_3ab508;
    }
    ctx->pc = 0x3AB500u;
    SET_GPR_U32(ctx, 31, 0x3AB508u);
    ctx->pc = 0x3AB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB500u;
    // 0x3ab504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB500u, 0x3AB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB508u;
label_3ab508:
    // 0x3ab508: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ab508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ab50c:
    // 0x3ab50c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab510:
    // 0x3ab510: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ab510u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ab514:
    // 0x3ab514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab518:
    // 0x3ab518: 0xc0cd518  jal         func_335460
label_3ab51c:
    if (ctx->pc == 0x3AB51Cu) {
        ctx->pc = 0x3AB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB518u;
        // 0x3ab51c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB520u;
        goto label_3ab520;
    }
    ctx->pc = 0x3AB518u;
    SET_GPR_U32(ctx, 31, 0x3AB520u);
    ctx->pc = 0x3AB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB518u;
    // 0x3ab51c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB518u, 0x3AB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB520u;
label_3ab520:
    // 0x3ab520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ab520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ab524:
    // 0x3ab524: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ab524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ab528:
    // 0x3ab528: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3ab528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3ab52c:
    // 0x3ab52c: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x3ab52cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3ab530:
    // 0x3ab530: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3ab530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3ab534:
    // 0x3ab534: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ab538:
    if (ctx->pc == 0x3AB538u) {
        ctx->pc = 0x3AB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB534u;
        // 0x3ab538: 0xe7a1003c  swc1        $f1, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB53Cu;
        goto label_3ab53c;
    }
    ctx->pc = 0x3AB534u;
    {
        const bool branch_taken_0x3ab534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB534u;
        // 0x3ab538: 0xe7a1003c  swc1        $f1, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab534) {
            ctx->pc = 0x3AB56Cu;
            goto label_3ab56c;
        }
    }
    ctx->pc = 0x3AB53Cu;
label_3ab53c:
    // 0x3ab53c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ab53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ab540:
    // 0x3ab540: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ab540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ab544:
    // 0x3ab544: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ab544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ab548:
    // 0x3ab548: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3ab548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3ab54c:
    // 0x3ab54c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab550:
    // 0x3ab550: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ab550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ab554:
    // 0x3ab554: 0xc0cd518  jal         func_335460
label_3ab558:
    if (ctx->pc == 0x3AB558u) {
        ctx->pc = 0x3AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB554u;
        // 0x3ab558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB55Cu;
        goto label_3ab55c;
    }
    ctx->pc = 0x3AB554u;
    SET_GPR_U32(ctx, 31, 0x3AB55Cu);
    ctx->pc = 0x3AB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB554u;
    // 0x3ab558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB554u, 0x3AB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB55Cu;
label_3ab55c:
    // 0x3ab55c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3ab55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3ab560:
    // 0x3ab560: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x3ab560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3ab564:
    // 0x3ab564: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3ab564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3ab568:
    // 0x3ab568: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ab568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ab56c:
    // 0x3ab56c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ab56cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ab570:
    // 0x3ab570: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ab570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ab574:
    // 0x3ab574: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x3ab574u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_3ab578:
    // 0x3ab578: 0xae910014  sw          $s1, 0x14($s4)
    ctx->pc = 0x3ab578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 17));
label_3ab57c:
    // 0x3ab57c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ab57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ab580:
    // 0x3ab580: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ab580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ab584:
    // 0x3ab584: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3ab584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ab588:
    // 0x3ab588: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3ab588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ab58c:
    // 0x3ab58c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ab58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ab590:
    // 0x3ab590: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ab590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ab594:
    // 0x3ab594: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x3ab594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ab598:
    // 0x3ab598: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ab598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ab59c:
    // 0x3ab59c: 0x3e00008  jr          $ra
label_3ab5a0:
    if (ctx->pc == 0x3AB5A0u) {
        ctx->pc = 0x3AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB59Cu;
        // 0x3ab5a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5A4u;
        goto label_3ab5a4;
    }
    ctx->pc = 0x3AB59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB59Cu;
        // 0x3ab5a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB5A4u;
label_3ab5a4:
    // 0x3ab5a4: 0x0  nop
    ctx->pc = 0x3ab5a4u;
    // NOP
    ctx->pc = 0x3ab5a8u;
}
