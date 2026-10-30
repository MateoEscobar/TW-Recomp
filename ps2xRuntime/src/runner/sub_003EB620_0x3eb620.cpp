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

// Function: sub_003EB620
// Address: 0x3eb620 - 0x3eb7e8
void sub_003EB620_0x3eb620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB620_0x3eb620");
#endif

    switch (ctx->pc) {
        case 0x3eb620u: goto label_3eb620;
        case 0x3eb624u: goto label_3eb624;
        case 0x3eb628u: goto label_3eb628;
        case 0x3eb62cu: goto label_3eb62c;
        case 0x3eb630u: goto label_3eb630;
        case 0x3eb634u: goto label_3eb634;
        case 0x3eb638u: goto label_3eb638;
        case 0x3eb63cu: goto label_3eb63c;
        case 0x3eb640u: goto label_3eb640;
        case 0x3eb644u: goto label_3eb644;
        case 0x3eb648u: goto label_3eb648;
        case 0x3eb64cu: goto label_3eb64c;
        case 0x3eb650u: goto label_3eb650;
        case 0x3eb654u: goto label_3eb654;
        case 0x3eb658u: goto label_3eb658;
        case 0x3eb65cu: goto label_3eb65c;
        case 0x3eb660u: goto label_3eb660;
        case 0x3eb664u: goto label_3eb664;
        case 0x3eb668u: goto label_3eb668;
        case 0x3eb66cu: goto label_3eb66c;
        case 0x3eb670u: goto label_3eb670;
        case 0x3eb674u: goto label_3eb674;
        case 0x3eb678u: goto label_3eb678;
        case 0x3eb67cu: goto label_3eb67c;
        case 0x3eb680u: goto label_3eb680;
        case 0x3eb684u: goto label_3eb684;
        case 0x3eb688u: goto label_3eb688;
        case 0x3eb68cu: goto label_3eb68c;
        case 0x3eb690u: goto label_3eb690;
        case 0x3eb694u: goto label_3eb694;
        case 0x3eb698u: goto label_3eb698;
        case 0x3eb69cu: goto label_3eb69c;
        case 0x3eb6a0u: goto label_3eb6a0;
        case 0x3eb6a4u: goto label_3eb6a4;
        case 0x3eb6a8u: goto label_3eb6a8;
        case 0x3eb6acu: goto label_3eb6ac;
        case 0x3eb6b0u: goto label_3eb6b0;
        case 0x3eb6b4u: goto label_3eb6b4;
        case 0x3eb6b8u: goto label_3eb6b8;
        case 0x3eb6bcu: goto label_3eb6bc;
        case 0x3eb6c0u: goto label_3eb6c0;
        case 0x3eb6c4u: goto label_3eb6c4;
        case 0x3eb6c8u: goto label_3eb6c8;
        case 0x3eb6ccu: goto label_3eb6cc;
        case 0x3eb6d0u: goto label_3eb6d0;
        case 0x3eb6d4u: goto label_3eb6d4;
        case 0x3eb6d8u: goto label_3eb6d8;
        case 0x3eb6dcu: goto label_3eb6dc;
        case 0x3eb6e0u: goto label_3eb6e0;
        case 0x3eb6e4u: goto label_3eb6e4;
        case 0x3eb6e8u: goto label_3eb6e8;
        case 0x3eb6ecu: goto label_3eb6ec;
        case 0x3eb6f0u: goto label_3eb6f0;
        case 0x3eb6f4u: goto label_3eb6f4;
        case 0x3eb6f8u: goto label_3eb6f8;
        case 0x3eb6fcu: goto label_3eb6fc;
        case 0x3eb700u: goto label_3eb700;
        case 0x3eb704u: goto label_3eb704;
        case 0x3eb708u: goto label_3eb708;
        case 0x3eb70cu: goto label_3eb70c;
        case 0x3eb710u: goto label_3eb710;
        case 0x3eb714u: goto label_3eb714;
        case 0x3eb718u: goto label_3eb718;
        case 0x3eb71cu: goto label_3eb71c;
        case 0x3eb720u: goto label_3eb720;
        case 0x3eb724u: goto label_3eb724;
        case 0x3eb728u: goto label_3eb728;
        case 0x3eb72cu: goto label_3eb72c;
        case 0x3eb730u: goto label_3eb730;
        case 0x3eb734u: goto label_3eb734;
        case 0x3eb738u: goto label_3eb738;
        case 0x3eb73cu: goto label_3eb73c;
        case 0x3eb740u: goto label_3eb740;
        case 0x3eb744u: goto label_3eb744;
        case 0x3eb748u: goto label_3eb748;
        case 0x3eb74cu: goto label_3eb74c;
        case 0x3eb750u: goto label_3eb750;
        case 0x3eb754u: goto label_3eb754;
        case 0x3eb758u: goto label_3eb758;
        case 0x3eb75cu: goto label_3eb75c;
        case 0x3eb760u: goto label_3eb760;
        case 0x3eb764u: goto label_3eb764;
        case 0x3eb768u: goto label_3eb768;
        case 0x3eb76cu: goto label_3eb76c;
        case 0x3eb770u: goto label_3eb770;
        case 0x3eb774u: goto label_3eb774;
        case 0x3eb778u: goto label_3eb778;
        case 0x3eb77cu: goto label_3eb77c;
        case 0x3eb780u: goto label_3eb780;
        case 0x3eb784u: goto label_3eb784;
        case 0x3eb788u: goto label_3eb788;
        case 0x3eb78cu: goto label_3eb78c;
        case 0x3eb790u: goto label_3eb790;
        case 0x3eb794u: goto label_3eb794;
        case 0x3eb798u: goto label_3eb798;
        case 0x3eb79cu: goto label_3eb79c;
        case 0x3eb7a0u: goto label_3eb7a0;
        case 0x3eb7a4u: goto label_3eb7a4;
        case 0x3eb7a8u: goto label_3eb7a8;
        case 0x3eb7acu: goto label_3eb7ac;
        case 0x3eb7b0u: goto label_3eb7b0;
        case 0x3eb7b4u: goto label_3eb7b4;
        case 0x3eb7b8u: goto label_3eb7b8;
        case 0x3eb7bcu: goto label_3eb7bc;
        case 0x3eb7c0u: goto label_3eb7c0;
        case 0x3eb7c4u: goto label_3eb7c4;
        case 0x3eb7c8u: goto label_3eb7c8;
        case 0x3eb7ccu: goto label_3eb7cc;
        case 0x3eb7d0u: goto label_3eb7d0;
        case 0x3eb7d4u: goto label_3eb7d4;
        case 0x3eb7d8u: goto label_3eb7d8;
        case 0x3eb7dcu: goto label_3eb7dc;
        case 0x3eb7e0u: goto label_3eb7e0;
        case 0x3eb7e4u: goto label_3eb7e4;
        default: break;
    }

    ctx->pc = 0x3eb620u;

label_3eb620:
    // 0x3eb620: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3eb620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3eb624:
    // 0x3eb624: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3eb624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3eb628:
    // 0x3eb628: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3eb628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3eb62c:
    // 0x3eb62c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3eb62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3eb630:
    // 0x3eb630: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3eb630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3eb634:
    // 0x3eb634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3eb634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb638:
    // 0x3eb638: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x3eb638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3eb63c:
    // 0x3eb63c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3eb63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3eb640:
    // 0x3eb640: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3eb640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3eb644:
    // 0x3eb644: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb648:
    // 0x3eb648: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb64c:
    // 0x3eb64c: 0x40f809  jalr        $v0
label_3eb650:
    if (ctx->pc == 0x3EB650u) {
        ctx->pc = 0x3EB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB64Cu;
        // 0x3eb650: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB654u;
        goto label_3eb654;
    }
    ctx->pc = 0x3EB64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB654u);
        ctx->pc = 0x3EB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB64Cu;
        // 0x3eb650: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB64Cu, 0x3EB654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB654u;
label_3eb654:
    // 0x3eb654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eb654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb658:
    // 0x3eb658: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eb658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb65c:
    // 0x3eb65c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3eb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3eb660:
    // 0x3eb660: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3eb660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3eb664:
    // 0x3eb664: 0xc0cd4ee  jal         func_3353B8
label_3eb668:
    if (ctx->pc == 0x3EB668u) {
        ctx->pc = 0x3EB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB664u;
        // 0x3eb668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB66Cu;
        goto label_3eb66c;
    }
    ctx->pc = 0x3EB664u;
    SET_GPR_U32(ctx, 31, 0x3EB66Cu);
    ctx->pc = 0x3EB668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB664u;
    // 0x3eb668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EB664u, 0x3EB66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB66Cu;
label_3eb66c:
    // 0x3eb66c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x3eb66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3eb670:
    // 0x3eb670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eb670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb674:
    // 0x3eb674: 0xc0e858c  jal         func_3A1630
label_3eb678:
    if (ctx->pc == 0x3EB678u) {
        ctx->pc = 0x3EB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB674u;
        // 0x3eb678: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB67Cu;
        goto label_3eb67c;
    }
    ctx->pc = 0x3EB674u;
    SET_GPR_U32(ctx, 31, 0x3EB67Cu);
    ctx->pc = 0x3EB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB674u;
    // 0x3eb678: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EB674u, 0x3EB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB67Cu;
label_3eb67c:
    // 0x3eb67c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3eb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3eb680:
    // 0x3eb680: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x3eb680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_3eb684:
    // 0x3eb684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb688:
    // 0x3eb688: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3eb68c:
    if (ctx->pc == 0x3EB68Cu) {
        ctx->pc = 0x3EB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB688u;
        // 0x3eb68c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB690u;
        goto label_3eb690;
    }
    ctx->pc = 0x3EB688u;
    {
        const bool branch_taken_0x3eb688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB688u;
        // 0x3eb68c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb688) {
            ctx->pc = 0x3EB6A4u;
            goto label_3eb6a4;
        }
    }
    ctx->pc = 0x3EB690u;
label_3eb690:
    // 0x3eb690: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3eb690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3eb694:
    // 0x3eb694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb698:
    // 0x3eb698: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3eb698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3eb69c:
    // 0x3eb69c: 0x10000049  b           . + 4 + (0x49 << 2)
label_3eb6a0:
    if (ctx->pc == 0x3EB6A0u) {
        ctx->pc = 0x3EB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB69Cu;
        // 0x3eb6a0: 0xae4300cc  sw          $v1, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6A4u;
        goto label_3eb6a4;
    }
    ctx->pc = 0x3EB69Cu;
    {
        const bool branch_taken_0x3eb69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB69Cu;
        // 0x3eb6a0: 0xae4300cc  sw          $v1, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb69c) {
            ctx->pc = 0x3EB7C4u;
            goto label_3eb7c4;
        }
    }
    ctx->pc = 0x3EB6A4u;
label_3eb6a4:
    // 0x3eb6a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3eb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3eb6a8:
    // 0x3eb6a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3eb6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3eb6ac:
    // 0x3eb6ac: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x3eb6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_3eb6b0:
    // 0x3eb6b0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3eb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3eb6b4:
    // 0x3eb6b4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3eb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3eb6b8:
    // 0x3eb6b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3eb6bc:
    if (ctx->pc == 0x3EB6BCu) {
        ctx->pc = 0x3EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6B8u;
        // 0x3eb6bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6C0u;
        goto label_3eb6c0;
    }
    ctx->pc = 0x3EB6B8u;
    {
        const bool branch_taken_0x3eb6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6b8) {
            ctx->pc = 0x3EB6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB6B8u;
            // 0x3eb6bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB6C0u;
            goto label_3eb6c0;
        }
    }
    ctx->pc = 0x3EB6C0u;
label_3eb6c0:
    // 0x3eb6c0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3eb6c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3eb6c4:
    // 0x3eb6c4: 0x1010  mfhi        $v0
    ctx->pc = 0x3eb6c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3eb6c8:
    // 0x3eb6c8: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_3eb6cc:
    if (ctx->pc == 0x3EB6CCu) {
        ctx->pc = 0x3EB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6C8u;
        // 0x3eb6cc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6D0u;
        goto label_3eb6d0;
    }
    ctx->pc = 0x3EB6C8u;
    {
        const bool branch_taken_0x3eb6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb6c8) {
            ctx->pc = 0x3EB6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB6C8u;
            // 0x3eb6cc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB780u;
            goto label_3eb780;
        }
    }
    ctx->pc = 0x3EB6D0u;
label_3eb6d0:
    // 0x3eb6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb6d4:
    // 0x3eb6d4: 0xc0cd4ee  jal         func_3353B8
label_3eb6d8:
    if (ctx->pc == 0x3EB6D8u) {
        ctx->pc = 0x3EB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6D4u;
        // 0x3eb6d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6DCu;
        goto label_3eb6dc;
    }
    ctx->pc = 0x3EB6D4u;
    SET_GPR_U32(ctx, 31, 0x3EB6DCu);
    ctx->pc = 0x3EB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB6D4u;
    // 0x3eb6d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EB6D4u, 0x3EB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB6DCu;
label_3eb6dc:
    // 0x3eb6dc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x3eb6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3eb6e0:
    // 0x3eb6e0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3eb6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3eb6e4:
    // 0x3eb6e4: 0x0  nop
    ctx->pc = 0x3eb6e4u;
    // NOP
label_3eb6e8:
    // 0x3eb6e8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3eb6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3eb6ec:
    // 0x3eb6ec: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x3eb6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_3eb6f0:
    // 0x3eb6f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3eb6f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3eb6f4:
    // 0x3eb6f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eb6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eb6f8:
    // 0x3eb6f8: 0x0  nop
    ctx->pc = 0x3eb6f8u;
    // NOP
label_3eb6fc:
    // 0x3eb6fc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3eb6fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3eb700:
    // 0x3eb700: 0xc12e310  jal         func_4B8C40
label_3eb704:
    if (ctx->pc == 0x3EB704u) {
        ctx->pc = 0x3EB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB700u;
        // 0x3eb704: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB708u;
        goto label_3eb708;
    }
    ctx->pc = 0x3EB700u;
    SET_GPR_U32(ctx, 31, 0x3EB708u);
    ctx->pc = 0x3EB704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB700u;
    // 0x3eb704: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3EB700u, 0x3EB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB708u;
label_3eb708:
    // 0x3eb708: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3eb708u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3eb70c:
    // 0x3eb70c: 0xc12e29c  jal         func_4B8A70
label_3eb710:
    if (ctx->pc == 0x3EB710u) {
        ctx->pc = 0x3EB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB70Cu;
        // 0x3eb710: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB714u;
        goto label_3eb714;
    }
    ctx->pc = 0x3EB70Cu;
    SET_GPR_U32(ctx, 31, 0x3EB714u);
    ctx->pc = 0x3EB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB70Cu;
    // 0x3eb710: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3EB70Cu, 0x3EB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB714u;
label_3eb714:
    // 0x3eb714: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3eb714u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3eb718:
    // 0x3eb718: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3eb718u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3eb71c:
    // 0x3eb71c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3eb71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3eb720:
    // 0x3eb720: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3eb720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3eb724:
    // 0x3eb724: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3eb724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3eb728:
    // 0x3eb728: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb72c:
    // 0x3eb72c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3eb72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3eb730:
    // 0x3eb730: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3eb730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3eb734:
    // 0x3eb734: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3eb734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3eb738:
    // 0x3eb738: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3eb738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3eb73c:
    // 0x3eb73c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3eb73cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb740:
    // 0x3eb740: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3eb740u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3eb744:
    // 0x3eb744: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3eb744u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3eb748:
    // 0x3eb748: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3eb748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb74c:
    // 0x3eb74c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3eb74cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3eb750:
    // 0x3eb750: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3eb750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb754:
    // 0x3eb754: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3eb754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb758:
    // 0x3eb758: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3eb758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb75c:
    // 0x3eb75c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3eb75cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb760:
    // 0x3eb760: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3eb760u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3eb764:
    // 0x3eb764: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3eb764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3eb768:
    // 0x3eb768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb76c:
    // 0x3eb76c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3eb76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3eb770:
    // 0x3eb770: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3eb770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3eb774:
    // 0x3eb774: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3eb774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3eb778:
    // 0x3eb778: 0xa2420108  sb          $v0, 0x108($s2)
    ctx->pc = 0x3eb778u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 2));
label_3eb77c:
    // 0x3eb77c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3eb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3eb780:
    // 0x3eb780: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3eb784:
    if (ctx->pc == 0x3EB784u) {
        ctx->pc = 0x3EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB780u;
        // 0x3eb784: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB788u;
        goto label_3eb788;
    }
    ctx->pc = 0x3EB780u;
    {
        const bool branch_taken_0x3eb780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB780u;
        // 0x3eb784: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb780) {
            ctx->pc = 0x3EB7A4u;
            goto label_3eb7a4;
        }
    }
    ctx->pc = 0x3EB788u;
label_3eb788:
    // 0x3eb788: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb78c:
    // 0x3eb78c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3eb78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3eb790:
    // 0x3eb790: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3eb794:
    if (ctx->pc == 0x3EB794u) {
        ctx->pc = 0x3EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB790u;
        // 0x3eb794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB798u;
        goto label_3eb798;
    }
    ctx->pc = 0x3EB790u;
    {
        const bool branch_taken_0x3eb790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB790u;
        // 0x3eb794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb790) {
            ctx->pc = 0x3EB7C4u;
            goto label_3eb7c4;
        }
    }
    ctx->pc = 0x3EB798u;
label_3eb798:
    // 0x3eb798: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3eb798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_3eb79c:
    // 0x3eb79c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3eb7a0:
    if (ctx->pc == 0x3EB7A0u) {
        ctx->pc = 0x3EB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB79Cu;
        // 0x3eb7a0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB7A4u;
        goto label_3eb7a4;
    }
    ctx->pc = 0x3EB79Cu;
    {
        const bool branch_taken_0x3eb79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB79Cu;
        // 0x3eb7a0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb79c) {
            ctx->pc = 0x3EB7C4u;
            goto label_3eb7c4;
        }
    }
    ctx->pc = 0x3EB7A4u;
label_3eb7a4:
    // 0x3eb7a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb7a8:
    // 0x3eb7a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3eb7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3eb7ac:
    // 0x3eb7ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3eb7b0:
    if (ctx->pc == 0x3EB7B0u) {
        ctx->pc = 0x3EB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7ACu;
        // 0x3eb7b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB7B4u;
        goto label_3eb7b4;
    }
    ctx->pc = 0x3EB7ACu;
    {
        const bool branch_taken_0x3eb7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7ACu;
        // 0x3eb7b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7ac) {
            ctx->pc = 0x3EB7C4u;
            goto label_3eb7c4;
        }
    }
    ctx->pc = 0x3EB7B4u;
label_3eb7b4:
    // 0x3eb7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb7b8:
    // 0x3eb7b8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3eb7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3eb7bc:
    // 0x3eb7bc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3eb7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3eb7c0:
    // 0x3eb7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb7c4:
    // 0x3eb7c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3eb7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3eb7c8:
    // 0x3eb7c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3eb7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3eb7cc:
    // 0x3eb7cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3eb7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3eb7d0:
    // 0x3eb7d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3eb7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3eb7d4:
    // 0x3eb7d4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3eb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3eb7d8:
    // 0x3eb7d8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3eb7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eb7dc:
    // 0x3eb7dc: 0x3e00008  jr          $ra
label_3eb7e0:
    if (ctx->pc == 0x3EB7E0u) {
        ctx->pc = 0x3EB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7DCu;
        // 0x3eb7e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB7E4u;
        goto label_3eb7e4;
    }
    ctx->pc = 0x3EB7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7DCu;
        // 0x3eb7e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB7E4u;
label_3eb7e4:
    // 0x3eb7e4: 0x0  nop
    ctx->pc = 0x3eb7e4u;
    // NOP
    ctx->pc = 0x3eb7e8u;
}
