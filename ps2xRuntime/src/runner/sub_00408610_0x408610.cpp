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

// Function: sub_00408610
// Address: 0x408610 - 0x408798
void sub_00408610_0x408610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408610_0x408610");
#endif

    switch (ctx->pc) {
        case 0x408610u: goto label_408610;
        case 0x408614u: goto label_408614;
        case 0x408618u: goto label_408618;
        case 0x40861cu: goto label_40861c;
        case 0x408620u: goto label_408620;
        case 0x408624u: goto label_408624;
        case 0x408628u: goto label_408628;
        case 0x40862cu: goto label_40862c;
        case 0x408630u: goto label_408630;
        case 0x408634u: goto label_408634;
        case 0x408638u: goto label_408638;
        case 0x40863cu: goto label_40863c;
        case 0x408640u: goto label_408640;
        case 0x408644u: goto label_408644;
        case 0x408648u: goto label_408648;
        case 0x40864cu: goto label_40864c;
        case 0x408650u: goto label_408650;
        case 0x408654u: goto label_408654;
        case 0x408658u: goto label_408658;
        case 0x40865cu: goto label_40865c;
        case 0x408660u: goto label_408660;
        case 0x408664u: goto label_408664;
        case 0x408668u: goto label_408668;
        case 0x40866cu: goto label_40866c;
        case 0x408670u: goto label_408670;
        case 0x408674u: goto label_408674;
        case 0x408678u: goto label_408678;
        case 0x40867cu: goto label_40867c;
        case 0x408680u: goto label_408680;
        case 0x408684u: goto label_408684;
        case 0x408688u: goto label_408688;
        case 0x40868cu: goto label_40868c;
        case 0x408690u: goto label_408690;
        case 0x408694u: goto label_408694;
        case 0x408698u: goto label_408698;
        case 0x40869cu: goto label_40869c;
        case 0x4086a0u: goto label_4086a0;
        case 0x4086a4u: goto label_4086a4;
        case 0x4086a8u: goto label_4086a8;
        case 0x4086acu: goto label_4086ac;
        case 0x4086b0u: goto label_4086b0;
        case 0x4086b4u: goto label_4086b4;
        case 0x4086b8u: goto label_4086b8;
        case 0x4086bcu: goto label_4086bc;
        case 0x4086c0u: goto label_4086c0;
        case 0x4086c4u: goto label_4086c4;
        case 0x4086c8u: goto label_4086c8;
        case 0x4086ccu: goto label_4086cc;
        case 0x4086d0u: goto label_4086d0;
        case 0x4086d4u: goto label_4086d4;
        case 0x4086d8u: goto label_4086d8;
        case 0x4086dcu: goto label_4086dc;
        case 0x4086e0u: goto label_4086e0;
        case 0x4086e4u: goto label_4086e4;
        case 0x4086e8u: goto label_4086e8;
        case 0x4086ecu: goto label_4086ec;
        case 0x4086f0u: goto label_4086f0;
        case 0x4086f4u: goto label_4086f4;
        case 0x4086f8u: goto label_4086f8;
        case 0x4086fcu: goto label_4086fc;
        case 0x408700u: goto label_408700;
        case 0x408704u: goto label_408704;
        case 0x408708u: goto label_408708;
        case 0x40870cu: goto label_40870c;
        case 0x408710u: goto label_408710;
        case 0x408714u: goto label_408714;
        case 0x408718u: goto label_408718;
        case 0x40871cu: goto label_40871c;
        case 0x408720u: goto label_408720;
        case 0x408724u: goto label_408724;
        case 0x408728u: goto label_408728;
        case 0x40872cu: goto label_40872c;
        case 0x408730u: goto label_408730;
        case 0x408734u: goto label_408734;
        case 0x408738u: goto label_408738;
        case 0x40873cu: goto label_40873c;
        case 0x408740u: goto label_408740;
        case 0x408744u: goto label_408744;
        case 0x408748u: goto label_408748;
        case 0x40874cu: goto label_40874c;
        case 0x408750u: goto label_408750;
        case 0x408754u: goto label_408754;
        case 0x408758u: goto label_408758;
        case 0x40875cu: goto label_40875c;
        case 0x408760u: goto label_408760;
        case 0x408764u: goto label_408764;
        case 0x408768u: goto label_408768;
        case 0x40876cu: goto label_40876c;
        case 0x408770u: goto label_408770;
        case 0x408774u: goto label_408774;
        case 0x408778u: goto label_408778;
        case 0x40877cu: goto label_40877c;
        case 0x408780u: goto label_408780;
        case 0x408784u: goto label_408784;
        case 0x408788u: goto label_408788;
        case 0x40878cu: goto label_40878c;
        case 0x408790u: goto label_408790;
        case 0x408794u: goto label_408794;
        default: break;
    }

    ctx->pc = 0x408610u;

label_408610:
    // 0x408610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x408610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_408614:
    // 0x408614: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x408614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_408618:
    // 0x408618: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x408618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_40861c:
    // 0x40861c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40861cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408620:
    // 0x408620: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x408620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_408624:
    // 0x408624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x408624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_408628:
    // 0x408628: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x408628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_40862c:
    // 0x40862c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x40862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_408630:
    // 0x408630: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x408630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_408634:
    // 0x408634: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x408634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_408638:
    // 0x408638: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x408638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_40863c:
    // 0x40863c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x40863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_408640:
    // 0x408640: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x408640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_408644:
    // 0x408644: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x408644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_408648:
    // 0x408648: 0x40f809  jalr        $v0
label_40864c:
    if (ctx->pc == 0x40864Cu) {
        ctx->pc = 0x40864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408648u;
        // 0x40864c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408650u;
        goto label_408650;
    }
    ctx->pc = 0x408648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x408650u);
        ctx->pc = 0x40864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408648u;
        // 0x40864c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408648u, 0x408650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408650u;
label_408650:
    // 0x408650: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x408650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408654:
    // 0x408654: 0xc0ea146  jal         func_3A8518
label_408658:
    if (ctx->pc == 0x408658u) {
        ctx->pc = 0x408658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408654u;
        // 0x408658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40865Cu;
        goto label_40865c;
    }
    ctx->pc = 0x408654u;
    SET_GPR_U32(ctx, 31, 0x40865Cu);
    ctx->pc = 0x408658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408654u;
    // 0x408658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x408654u, 0x40865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40865Cu;
label_40865c:
    // 0x40865c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40865cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408660:
    // 0x408660: 0xc0ea13a  jal         func_3A84E8
label_408664:
    if (ctx->pc == 0x408664u) {
        ctx->pc = 0x408664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408660u;
        // 0x408664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408668u;
        goto label_408668;
    }
    ctx->pc = 0x408660u;
    SET_GPR_U32(ctx, 31, 0x408668u);
    ctx->pc = 0x408664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408660u;
    // 0x408664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x408660u, 0x408668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408668u;
label_408668:
    // 0x408668: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x408668u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40866c:
    // 0x40866c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_408670:
    // 0x408670: 0xc0ea12a  jal         func_3A84A8
label_408674:
    if (ctx->pc == 0x408674u) {
        ctx->pc = 0x408674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408670u;
        // 0x408674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408678u;
        goto label_408678;
    }
    ctx->pc = 0x408670u;
    SET_GPR_U32(ctx, 31, 0x408678u);
    ctx->pc = 0x408674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408670u;
    // 0x408674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x408670u, 0x408678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408678u;
label_408678:
    // 0x408678: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x408678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40867c:
    // 0x40867c: 0xc0ea12a  jal         func_3A84A8
label_408680:
    if (ctx->pc == 0x408680u) {
        ctx->pc = 0x408680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40867Cu;
        // 0x408680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408684u;
        goto label_408684;
    }
    ctx->pc = 0x40867Cu;
    SET_GPR_U32(ctx, 31, 0x408684u);
    ctx->pc = 0x408680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40867Cu;
    // 0x408680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x40867Cu, 0x408684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408684u;
label_408684:
    // 0x408684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x408684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408688:
    // 0x408688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40868c:
    // 0x40868c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x40868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_408690:
    // 0x408690: 0xc0e858c  jal         func_3A1630
label_408694:
    if (ctx->pc == 0x408694u) {
        ctx->pc = 0x408694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408690u;
        // 0x408694: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408698u;
        goto label_408698;
    }
    ctx->pc = 0x408690u;
    SET_GPR_U32(ctx, 31, 0x408698u);
    ctx->pc = 0x408694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408690u;
    // 0x408694: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x408690u, 0x408698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408698u;
label_408698:
    // 0x408698: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x408698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_40869c:
    // 0x40869c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x40869cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_4086a0:
    // 0x4086a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4086a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4086a4:
    // 0x4086a4: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x4086a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_4086a8:
    // 0x4086a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4086a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4086ac:
    // 0x4086ac: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x4086acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_4086b0:
    // 0x4086b0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4086b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4086b4:
    // 0x4086b4: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x4086b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
label_4086b8:
    // 0x4086b8: 0xae1200b0  sw          $s2, 0xB0($s0)
    ctx->pc = 0x4086b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
label_4086bc:
    // 0x4086bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4086bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4086c0:
    // 0x4086c0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x4086c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_4086c4:
    // 0x4086c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4086c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4086c8:
    // 0x4086c8: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x4086c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_4086cc:
    // 0x4086cc: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x4086ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_4086d0:
    // 0x4086d0: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x4086d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_4086d4:
    // 0x4086d4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x4086d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_4086d8:
    // 0x4086d8: 0xc0cd4ee  jal         func_3353B8
label_4086dc:
    if (ctx->pc == 0x4086DCu) {
        ctx->pc = 0x4086DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4086D8u;
        // 0x4086dc: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4086E0u;
        goto label_4086e0;
    }
    ctx->pc = 0x4086D8u;
    SET_GPR_U32(ctx, 31, 0x4086E0u);
    ctx->pc = 0x4086DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4086D8u;
    // 0x4086dc: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x4086D8u, 0x4086E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4086E0u;
label_4086e0:
    // 0x4086e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4086e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4086e4:
    // 0x4086e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4086e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4086e8:
    // 0x4086e8: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x4086e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
label_4086ec:
    // 0x4086ec: 0xc0e9404  jal         func_3A5010
label_4086f0:
    if (ctx->pc == 0x4086F0u) {
        ctx->pc = 0x4086F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4086ECu;
        // 0x4086f0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4086F4u;
        goto label_4086f4;
    }
    ctx->pc = 0x4086ECu;
    SET_GPR_U32(ctx, 31, 0x4086F4u);
    ctx->pc = 0x4086F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4086ECu;
    // 0x4086f0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x4086ECu, 0x4086F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4086F4u;
label_4086f4:
    // 0x4086f4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x4086f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4086f8:
    // 0x4086f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4086f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4086fc:
    // 0x4086fc: 0xc0e9364  jal         func_3A4D90
label_408700:
    if (ctx->pc == 0x408700u) {
        ctx->pc = 0x408700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4086FCu;
        // 0x408700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408704u;
        goto label_408704;
    }
    ctx->pc = 0x4086FCu;
    SET_GPR_U32(ctx, 31, 0x408704u);
    ctx->pc = 0x408700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4086FCu;
    // 0x408700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x4086FCu, 0x408704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408704u;
label_408704:
    // 0x408704: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x408704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_408708:
    // 0x408708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40870c:
    // 0x40870c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x40870cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_408710:
    // 0x408710: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408714:
    // 0x408714: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x408714u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_408718:
    // 0x408718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_40871c:
    // 0x40871c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_408720:
    // 0x408720: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x408720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_408724:
    // 0x408724: 0x86220070  lh          $v0, 0x70($s1)
    ctx->pc = 0x408724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_408728:
    // 0x408728: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x408728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_40872c:
    // 0x40872c: 0xc0cd518  jal         func_335460
label_408730:
    if (ctx->pc == 0x408730u) {
        ctx->pc = 0x408730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40872Cu;
        // 0x408730: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408734u;
        goto label_408734;
    }
    ctx->pc = 0x40872Cu;
    SET_GPR_U32(ctx, 31, 0x408734u);
    ctx->pc = 0x408730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40872Cu;
    // 0x408730: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40872Cu, 0x408734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408734u;
label_408734:
    // 0x408734: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x408734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_408738:
    // 0x408738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40873c:
    // 0x40873c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x40873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_408740:
    // 0x408740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x408740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_408744:
    // 0x408744: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x408744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_408748:
    // 0x408748: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x408748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_40874c:
    // 0x40874c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x40874cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_408750:
    // 0x408750: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x408750u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_408754:
    // 0x408754: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x408754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_408758:
    // 0x408758: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x408758u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_40875c:
    // 0x40875c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x40875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_408760:
    // 0x408760: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x408760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_408764:
    // 0x408764: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x408764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_408768:
    // 0x408768: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x408768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40876c:
    // 0x40876c: 0x60f809  jalr        $v1
label_408770:
    if (ctx->pc == 0x408770u) {
        ctx->pc = 0x408774u;
        goto label_408774;
    }
    ctx->pc = 0x40876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x408774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40876Cu, 0x408774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408774u;
label_408774:
    // 0x408774: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x408774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_408778:
    // 0x408778: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x408778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40877c:
    // 0x40877c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x40877cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_408780:
    // 0x408780: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x408780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_408784:
    // 0x408784: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x408784u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_408788:
    // 0x408788: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x408788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40878c:
    // 0x40878c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x40878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_408790:
    // 0x408790: 0x3e00008  jr          $ra
label_408794:
    if (ctx->pc == 0x408794u) {
        ctx->pc = 0x408794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408790u;
        // 0x408794: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408798u;
        goto label_fallthrough_0x408790;
    }
    ctx->pc = 0x408790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408790u;
        // 0x408794: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x408790:
    ctx->pc = 0x408798u;
}
