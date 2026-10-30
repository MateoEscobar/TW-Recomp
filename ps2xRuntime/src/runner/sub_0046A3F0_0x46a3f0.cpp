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

// Function: sub_0046A3F0
// Address: 0x46a3f0 - 0x46a4a0
void sub_0046A3F0_0x46a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A3F0_0x46a3f0");
#endif

    switch (ctx->pc) {
        case 0x46a3f0u: goto label_46a3f0;
        case 0x46a3f4u: goto label_46a3f4;
        case 0x46a3f8u: goto label_46a3f8;
        case 0x46a3fcu: goto label_46a3fc;
        case 0x46a400u: goto label_46a400;
        case 0x46a404u: goto label_46a404;
        case 0x46a408u: goto label_46a408;
        case 0x46a40cu: goto label_46a40c;
        case 0x46a410u: goto label_46a410;
        case 0x46a414u: goto label_46a414;
        case 0x46a418u: goto label_46a418;
        case 0x46a41cu: goto label_46a41c;
        case 0x46a420u: goto label_46a420;
        case 0x46a424u: goto label_46a424;
        case 0x46a428u: goto label_46a428;
        case 0x46a42cu: goto label_46a42c;
        case 0x46a430u: goto label_46a430;
        case 0x46a434u: goto label_46a434;
        case 0x46a438u: goto label_46a438;
        case 0x46a43cu: goto label_46a43c;
        case 0x46a440u: goto label_46a440;
        case 0x46a444u: goto label_46a444;
        case 0x46a448u: goto label_46a448;
        case 0x46a44cu: goto label_46a44c;
        case 0x46a450u: goto label_46a450;
        case 0x46a454u: goto label_46a454;
        case 0x46a458u: goto label_46a458;
        case 0x46a45cu: goto label_46a45c;
        case 0x46a460u: goto label_46a460;
        case 0x46a464u: goto label_46a464;
        case 0x46a468u: goto label_46a468;
        case 0x46a46cu: goto label_46a46c;
        case 0x46a470u: goto label_46a470;
        case 0x46a474u: goto label_46a474;
        case 0x46a478u: goto label_46a478;
        case 0x46a47cu: goto label_46a47c;
        case 0x46a480u: goto label_46a480;
        case 0x46a484u: goto label_46a484;
        case 0x46a488u: goto label_46a488;
        case 0x46a48cu: goto label_46a48c;
        case 0x46a490u: goto label_46a490;
        case 0x46a494u: goto label_46a494;
        case 0x46a498u: goto label_46a498;
        case 0x46a49cu: goto label_46a49c;
        default: break;
    }

    ctx->pc = 0x46a3f0u;

label_46a3f0:
    // 0x46a3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_46a3f4:
    // 0x46a3f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_46a3f8:
    // 0x46a3f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46a3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46a3fc:
    // 0x46a3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46a400:
    // 0x46a400: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46a404:
    // 0x46a404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46a408:
    // 0x46a408: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x46a408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
label_46a40c:
    // 0x46a40c: 0xc11ffb4  jal         func_47FED0
label_46a410:
    if (ctx->pc == 0x46A410u) {
        ctx->pc = 0x46A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A40Cu;
        // 0x46a410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A414u;
        goto label_46a414;
    }
    ctx->pc = 0x46A40Cu;
    SET_GPR_U32(ctx, 31, 0x46A414u);
    ctx->pc = 0x46A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A40Cu;
    // 0x46a410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46A40Cu, 0x46A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A414u;
label_46a414:
    // 0x46a414: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x46a414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46a418:
    // 0x46a418: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46a41c:
    if (ctx->pc == 0x46A41Cu) {
        ctx->pc = 0x46A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A418u;
        // 0x46a41c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A420u;
        goto label_46a420;
    }
    ctx->pc = 0x46A418u;
    {
        const bool branch_taken_0x46a418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a418) {
            ctx->pc = 0x46A41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A418u;
            // 0x46a41c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A42Cu;
            goto label_46a42c;
        }
    }
    ctx->pc = 0x46A420u;
label_46a420:
    // 0x46a420: 0xc11fa54  jal         func_47E950
label_46a424:
    if (ctx->pc == 0x46A424u) {
        ctx->pc = 0x46A428u;
        goto label_46a428;
    }
    ctx->pc = 0x46A420u;
    SET_GPR_U32(ctx, 31, 0x46A428u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46A420u, 0x46A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A428u;
label_46a428:
    // 0x46a428: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x46a428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46a42c:
    // 0x46a42c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_46a430:
    if (ctx->pc == 0x46A430u) {
        ctx->pc = 0x46A434u;
        goto label_46a434;
    }
    ctx->pc = 0x46A42Cu;
    {
        const bool branch_taken_0x46a42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a42c) {
            ctx->pc = 0x46A460u;
            goto label_46a460;
        }
    }
    ctx->pc = 0x46A434u;
label_46a434:
    // 0x46a434: 0xc11b010  jal         func_46C040
label_46a438:
    if (ctx->pc == 0x46A438u) {
        ctx->pc = 0x46A43Cu;
        goto label_46a43c;
    }
    ctx->pc = 0x46A434u;
    SET_GPR_U32(ctx, 31, 0x46A43Cu);
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x46A434u, 0x46A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A43Cu;
label_46a43c:
    // 0x46a43c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x46a43cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46a440:
    // 0x46a440: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_46a444:
    if (ctx->pc == 0x46A444u) {
        ctx->pc = 0x46A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A440u;
        // 0x46a444: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A448u;
        goto label_46a448;
    }
    ctx->pc = 0x46A440u;
    {
        const bool branch_taken_0x46a440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A440u;
        // 0x46a444: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a440) {
            ctx->pc = 0x46A460u;
            goto label_46a460;
        }
    }
    ctx->pc = 0x46A448u;
label_46a448:
    // 0x46a448: 0xc11cb72  jal         func_472DC8
label_46a44c:
    if (ctx->pc == 0x46A44Cu) {
        ctx->pc = 0x46A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A448u;
        // 0x46a44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A450u;
        goto label_46a450;
    }
    ctx->pc = 0x46A448u;
    SET_GPR_U32(ctx, 31, 0x46A450u);
    ctx->pc = 0x46A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A448u;
    // 0x46a44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472DC8u, 0x46A448u, 0x46A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A450u;
label_46a450:
    // 0x46a450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46a454:
    if (ctx->pc == 0x46A454u) {
        ctx->pc = 0x46A458u;
        goto label_46a458;
    }
    ctx->pc = 0x46A450u;
    {
        const bool branch_taken_0x46a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a450) {
            ctx->pc = 0x46A460u;
            goto label_46a460;
        }
    }
    ctx->pc = 0x46A458u;
label_46a458:
    // 0x46a458: 0xc12105a  jal         func_484168
label_46a45c:
    if (ctx->pc == 0x46A45Cu) {
        ctx->pc = 0x46A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A458u;
        // 0x46a45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A460u;
        goto label_46a460;
    }
    ctx->pc = 0x46A458u;
    SET_GPR_U32(ctx, 31, 0x46A460u);
    ctx->pc = 0x46A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A458u;
    // 0x46a45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x46A458u, 0x46A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A460u;
label_46a460:
    // 0x46a460: 0xc12249a  jal         func_489268
label_46a464:
    if (ctx->pc == 0x46A464u) {
        ctx->pc = 0x46A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A460u;
        // 0x46a464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A468u;
        goto label_46a468;
    }
    ctx->pc = 0x46A460u;
    SET_GPR_U32(ctx, 31, 0x46A468u);
    ctx->pc = 0x46A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A460u;
    // 0x46a464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489268u, 0x46A460u, 0x46A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A468u;
label_46a468:
    // 0x46a468: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x46a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
label_46a46c:
    // 0x46a46c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46a470:
    // 0x46a470: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x46a470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46a474:
    // 0x46a474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46a478:
    // 0x46a478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46a47c:
    // 0x46a47c: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x46a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_46a480:
    // 0x46a480: 0x40f809  jalr        $v0
label_46a484:
    if (ctx->pc == 0x46A484u) {
        ctx->pc = 0x46A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A480u;
        // 0x46a484: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A488u;
        goto label_46a488;
    }
    ctx->pc = 0x46A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46A488u);
        ctx->pc = 0x46A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A480u;
        // 0x46a484: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A480u, 0x46A488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46A488u;
label_46a488:
    // 0x46a488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46a488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a48c:
    // 0x46a48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a490:
    // 0x46a490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a494:
    // 0x46a494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46a498:
    // 0x46a498: 0x3e00008  jr          $ra
label_46a49c:
    if (ctx->pc == 0x46A49Cu) {
        ctx->pc = 0x46A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A498u;
        // 0x46a49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A4A0u;
        goto label_fallthrough_0x46a498;
    }
    ctx->pc = 0x46A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A498u;
        // 0x46a49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46a498:
    ctx->pc = 0x46A4A0u;
}
