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

// Function: sub_00320618
// Address: 0x320618 - 0x3208e8
void sub_00320618_0x320618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320618_0x320618");
#endif

    switch (ctx->pc) {
        case 0x320618u: goto label_320618;
        case 0x32061cu: goto label_32061c;
        case 0x320620u: goto label_320620;
        case 0x320624u: goto label_320624;
        case 0x320628u: goto label_320628;
        case 0x32062cu: goto label_32062c;
        case 0x320630u: goto label_320630;
        case 0x320634u: goto label_320634;
        case 0x320638u: goto label_320638;
        case 0x32063cu: goto label_32063c;
        case 0x320640u: goto label_320640;
        case 0x320644u: goto label_320644;
        case 0x320648u: goto label_320648;
        case 0x32064cu: goto label_32064c;
        case 0x320650u: goto label_320650;
        case 0x320654u: goto label_320654;
        case 0x320658u: goto label_320658;
        case 0x32065cu: goto label_32065c;
        case 0x320660u: goto label_320660;
        case 0x320664u: goto label_320664;
        case 0x320668u: goto label_320668;
        case 0x32066cu: goto label_32066c;
        case 0x320670u: goto label_320670;
        case 0x320674u: goto label_320674;
        case 0x320678u: goto label_320678;
        case 0x32067cu: goto label_32067c;
        case 0x320680u: goto label_320680;
        case 0x320684u: goto label_320684;
        case 0x320688u: goto label_320688;
        case 0x32068cu: goto label_32068c;
        case 0x320690u: goto label_320690;
        case 0x320694u: goto label_320694;
        case 0x320698u: goto label_320698;
        case 0x32069cu: goto label_32069c;
        case 0x3206a0u: goto label_3206a0;
        case 0x3206a4u: goto label_3206a4;
        case 0x3206a8u: goto label_3206a8;
        case 0x3206acu: goto label_3206ac;
        case 0x3206b0u: goto label_3206b0;
        case 0x3206b4u: goto label_3206b4;
        case 0x3206b8u: goto label_3206b8;
        case 0x3206bcu: goto label_3206bc;
        case 0x3206c0u: goto label_3206c0;
        case 0x3206c4u: goto label_3206c4;
        case 0x3206c8u: goto label_3206c8;
        case 0x3206ccu: goto label_3206cc;
        case 0x3206d0u: goto label_3206d0;
        case 0x3206d4u: goto label_3206d4;
        case 0x3206d8u: goto label_3206d8;
        case 0x3206dcu: goto label_3206dc;
        case 0x3206e0u: goto label_3206e0;
        case 0x3206e4u: goto label_3206e4;
        case 0x3206e8u: goto label_3206e8;
        case 0x3206ecu: goto label_3206ec;
        case 0x3206f0u: goto label_3206f0;
        case 0x3206f4u: goto label_3206f4;
        case 0x3206f8u: goto label_3206f8;
        case 0x3206fcu: goto label_3206fc;
        case 0x320700u: goto label_320700;
        case 0x320704u: goto label_320704;
        case 0x320708u: goto label_320708;
        case 0x32070cu: goto label_32070c;
        case 0x320710u: goto label_320710;
        case 0x320714u: goto label_320714;
        case 0x320718u: goto label_320718;
        case 0x32071cu: goto label_32071c;
        case 0x320720u: goto label_320720;
        case 0x320724u: goto label_320724;
        case 0x320728u: goto label_320728;
        case 0x32072cu: goto label_32072c;
        case 0x320730u: goto label_320730;
        case 0x320734u: goto label_320734;
        case 0x320738u: goto label_320738;
        case 0x32073cu: goto label_32073c;
        case 0x320740u: goto label_320740;
        case 0x320744u: goto label_320744;
        case 0x320748u: goto label_320748;
        case 0x32074cu: goto label_32074c;
        case 0x320750u: goto label_320750;
        case 0x320754u: goto label_320754;
        case 0x320758u: goto label_320758;
        case 0x32075cu: goto label_32075c;
        case 0x320760u: goto label_320760;
        case 0x320764u: goto label_320764;
        case 0x320768u: goto label_320768;
        case 0x32076cu: goto label_32076c;
        case 0x320770u: goto label_320770;
        case 0x320774u: goto label_320774;
        case 0x320778u: goto label_320778;
        case 0x32077cu: goto label_32077c;
        case 0x320780u: goto label_320780;
        case 0x320784u: goto label_320784;
        case 0x320788u: goto label_320788;
        case 0x32078cu: goto label_32078c;
        case 0x320790u: goto label_320790;
        case 0x320794u: goto label_320794;
        case 0x320798u: goto label_320798;
        case 0x32079cu: goto label_32079c;
        case 0x3207a0u: goto label_3207a0;
        case 0x3207a4u: goto label_3207a4;
        case 0x3207a8u: goto label_3207a8;
        case 0x3207acu: goto label_3207ac;
        case 0x3207b0u: goto label_3207b0;
        case 0x3207b4u: goto label_3207b4;
        case 0x3207b8u: goto label_3207b8;
        case 0x3207bcu: goto label_3207bc;
        case 0x3207c0u: goto label_3207c0;
        case 0x3207c4u: goto label_3207c4;
        case 0x3207c8u: goto label_3207c8;
        case 0x3207ccu: goto label_3207cc;
        case 0x3207d0u: goto label_3207d0;
        case 0x3207d4u: goto label_3207d4;
        case 0x3207d8u: goto label_3207d8;
        case 0x3207dcu: goto label_3207dc;
        case 0x3207e0u: goto label_3207e0;
        case 0x3207e4u: goto label_3207e4;
        case 0x3207e8u: goto label_3207e8;
        case 0x3207ecu: goto label_3207ec;
        case 0x3207f0u: goto label_3207f0;
        case 0x3207f4u: goto label_3207f4;
        case 0x3207f8u: goto label_3207f8;
        case 0x3207fcu: goto label_3207fc;
        case 0x320800u: goto label_320800;
        case 0x320804u: goto label_320804;
        case 0x320808u: goto label_320808;
        case 0x32080cu: goto label_32080c;
        case 0x320810u: goto label_320810;
        case 0x320814u: goto label_320814;
        case 0x320818u: goto label_320818;
        case 0x32081cu: goto label_32081c;
        case 0x320820u: goto label_320820;
        case 0x320824u: goto label_320824;
        case 0x320828u: goto label_320828;
        case 0x32082cu: goto label_32082c;
        case 0x320830u: goto label_320830;
        case 0x320834u: goto label_320834;
        case 0x320838u: goto label_320838;
        case 0x32083cu: goto label_32083c;
        case 0x320840u: goto label_320840;
        case 0x320844u: goto label_320844;
        case 0x320848u: goto label_320848;
        case 0x32084cu: goto label_32084c;
        case 0x320850u: goto label_320850;
        case 0x320854u: goto label_320854;
        case 0x320858u: goto label_320858;
        case 0x32085cu: goto label_32085c;
        case 0x320860u: goto label_320860;
        case 0x320864u: goto label_320864;
        case 0x320868u: goto label_320868;
        case 0x32086cu: goto label_32086c;
        case 0x320870u: goto label_320870;
        case 0x320874u: goto label_320874;
        case 0x320878u: goto label_320878;
        case 0x32087cu: goto label_32087c;
        case 0x320880u: goto label_320880;
        case 0x320884u: goto label_320884;
        case 0x320888u: goto label_320888;
        case 0x32088cu: goto label_32088c;
        case 0x320890u: goto label_320890;
        case 0x320894u: goto label_320894;
        case 0x320898u: goto label_320898;
        case 0x32089cu: goto label_32089c;
        case 0x3208a0u: goto label_3208a0;
        case 0x3208a4u: goto label_3208a4;
        case 0x3208a8u: goto label_3208a8;
        case 0x3208acu: goto label_3208ac;
        case 0x3208b0u: goto label_3208b0;
        case 0x3208b4u: goto label_3208b4;
        case 0x3208b8u: goto label_3208b8;
        case 0x3208bcu: goto label_3208bc;
        case 0x3208c0u: goto label_3208c0;
        case 0x3208c4u: goto label_3208c4;
        case 0x3208c8u: goto label_3208c8;
        case 0x3208ccu: goto label_3208cc;
        case 0x3208d0u: goto label_3208d0;
        case 0x3208d4u: goto label_3208d4;
        case 0x3208d8u: goto label_3208d8;
        case 0x3208dcu: goto label_3208dc;
        case 0x3208e0u: goto label_3208e0;
        case 0x3208e4u: goto label_3208e4;
        default: break;
    }

    ctx->pc = 0x320618u;

label_320618:
    // 0x320618: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x320618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_32061c:
    // 0x32061c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_320620:
    // 0x320620: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x320620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_320624:
    // 0x320624: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x320624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_320628:
    // 0x320628: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x320628u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32062c:
    // 0x32062c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_320630:
    // 0x320630: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x320630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_320634:
    // 0x320634: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x320634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_320638:
    // 0x320638: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x320638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_32063c:
    // 0x32063c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x32063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_320640:
    // 0x320640: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x320640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_320644:
    // 0x320644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x320644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_320648:
    // 0x320648: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x320648u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_32064c:
    // 0x32064c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x32064cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_320650:
    // 0x320650: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x320650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_320654:
    // 0x320654: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x320654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_320658:
    // 0x320658: 0xc05959e  jal         func_165678
label_32065c:
    if (ctx->pc == 0x32065Cu) {
        ctx->pc = 0x32065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320658u;
        // 0x32065c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320660u;
        goto label_320660;
    }
    ctx->pc = 0x320658u;
    SET_GPR_U32(ctx, 31, 0x320660u);
    ctx->pc = 0x32065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320658u;
    // 0x32065c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x320658u, 0x320660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320660u;
label_320660:
    // 0x320660: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x320660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320664:
    // 0x320664: 0x12a00091  beqz        $s5, . + 4 + (0x91 << 2)
label_320668:
    if (ctx->pc == 0x320668u) {
        ctx->pc = 0x320668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320664u;
        // 0x320668: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32066Cu;
        goto label_32066c;
    }
    ctx->pc = 0x320664u;
    {
        const bool branch_taken_0x320664 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x320668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320664u;
        // 0x320668: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320664) {
            ctx->pc = 0x3208ACu;
            goto label_3208ac;
        }
    }
    ctx->pc = 0x32066Cu;
label_32066c:
    // 0x32066c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x32066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_320670:
    // 0x320670: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_320674:
    // 0x320674: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x320674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_320678:
    // 0x320678: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x320678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_32067c:
    // 0x32067c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x32067cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_320680:
    // 0x320680: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x320680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_320684:
    // 0x320684: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x320684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_320688:
    // 0x320688: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x320688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_32068c:
    // 0x32068c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x32068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_320690:
    // 0x320690: 0xc137826  jal         func_4DE098
label_320694:
    if (ctx->pc == 0x320694u) {
        ctx->pc = 0x320694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320690u;
        // 0x320694: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320698u;
        goto label_320698;
    }
    ctx->pc = 0x320690u;
    SET_GPR_U32(ctx, 31, 0x320698u);
    ctx->pc = 0x320694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320690u;
    // 0x320694: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x320690u, 0x320698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320698u;
label_320698:
    // 0x320698: 0xc0e409a  jal         func_390268
label_32069c:
    if (ctx->pc == 0x32069Cu) {
        ctx->pc = 0x32069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320698u;
        // 0x32069c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206A0u;
        goto label_3206a0;
    }
    ctx->pc = 0x320698u;
    SET_GPR_U32(ctx, 31, 0x3206A0u);
    ctx->pc = 0x32069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320698u;
    // 0x32069c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x320698u, 0x3206A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206A0u;
label_3206a0:
    // 0x3206a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3206a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3206a4:
    // 0x3206a4: 0x5200007e  beql        $s0, $zero, . + 4 + (0x7E << 2)
label_3206a8:
    if (ctx->pc == 0x3206A8u) {
        ctx->pc = 0x3206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206A4u;
        // 0x3206a8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206ACu;
        goto label_3206ac;
    }
    ctx->pc = 0x3206A4u;
    {
        const bool branch_taken_0x3206a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3206a4) {
            ctx->pc = 0x3206A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3206A4u;
            // 0x3206a8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3208A0u;
            goto label_3208a0;
        }
    }
    ctx->pc = 0x3206ACu;
label_3206ac:
    // 0x3206ac: 0x5215007c  beql        $s0, $s5, . + 4 + (0x7C << 2)
label_3206b0:
    if (ctx->pc == 0x3206B0u) {
        ctx->pc = 0x3206B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206ACu;
        // 0x3206b0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206B4u;
        goto label_3206b4;
    }
    ctx->pc = 0x3206ACu;
    {
        const bool branch_taken_0x3206ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x3206ac) {
            ctx->pc = 0x3206B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3206ACu;
            // 0x3206b0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3208A0u;
            goto label_3208a0;
        }
    }
    ctx->pc = 0x3206B4u;
label_3206b4:
    // 0x3206b4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x3206b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_3206b8:
    // 0x3206b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3206b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3206bc:
    // 0x3206bc: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_3206c0:
    if (ctx->pc == 0x3206C0u) {
        ctx->pc = 0x3206C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206BCu;
        // 0x3206c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206C4u;
        goto label_3206c4;
    }
    ctx->pc = 0x3206BCu;
    {
        const bool branch_taken_0x3206bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3206C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206BCu;
        // 0x3206c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206bc) {
            ctx->pc = 0x32089Cu;
            goto label_32089c;
        }
    }
    ctx->pc = 0x3206C4u;
label_3206c4:
    // 0x3206c4: 0xc089f98  jal         func_227E60
label_3206c8:
    if (ctx->pc == 0x3206C8u) {
        ctx->pc = 0x3206C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206C4u;
        // 0x3206c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206CCu;
        goto label_3206cc;
    }
    ctx->pc = 0x3206C4u;
    SET_GPR_U32(ctx, 31, 0x3206CCu);
    ctx->pc = 0x3206C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206C4u;
    // 0x3206c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x3206C4u, 0x3206CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206CCu;
label_3206cc:
    // 0x3206cc: 0x50560074  beql        $v0, $s6, . + 4 + (0x74 << 2)
label_3206d0:
    if (ctx->pc == 0x3206D0u) {
        ctx->pc = 0x3206D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206CCu;
        // 0x3206d0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206D4u;
        goto label_3206d4;
    }
    ctx->pc = 0x3206CCu;
    {
        const bool branch_taken_0x3206cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x3206cc) {
            ctx->pc = 0x3206D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3206CCu;
            // 0x3206d0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3208A0u;
            goto label_3208a0;
        }
    }
    ctx->pc = 0x3206D4u;
label_3206d4:
    // 0x3206d4: 0xc087502  jal         func_21D408
label_3206d8:
    if (ctx->pc == 0x3206D8u) {
        ctx->pc = 0x3206D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206D4u;
        // 0x3206d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206DCu;
        goto label_3206dc;
    }
    ctx->pc = 0x3206D4u;
    SET_GPR_U32(ctx, 31, 0x3206DCu);
    ctx->pc = 0x3206D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206D4u;
    // 0x3206d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3206D4u, 0x3206DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206DCu;
label_3206dc:
    // 0x3206dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3206dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3206e0:
    // 0x3206e0: 0xc0a3630  jal         func_28D8C0
label_3206e4:
    if (ctx->pc == 0x3206E4u) {
        ctx->pc = 0x3206E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206E0u;
        // 0x3206e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206E8u;
        goto label_3206e8;
    }
    ctx->pc = 0x3206E0u;
    SET_GPR_U32(ctx, 31, 0x3206E8u);
    ctx->pc = 0x3206E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206E0u;
    // 0x3206e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3206E0u, 0x3206E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206E8u;
label_3206e8:
    // 0x3206e8: 0xc0a3628  jal         func_28D8A0
label_3206ec:
    if (ctx->pc == 0x3206ECu) {
        ctx->pc = 0x3206ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206E8u;
        // 0x3206ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206F0u;
        goto label_3206f0;
    }
    ctx->pc = 0x3206E8u;
    SET_GPR_U32(ctx, 31, 0x3206F0u);
    ctx->pc = 0x3206ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206E8u;
    // 0x3206ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x3206E8u, 0x3206F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206F0u;
label_3206f0:
    // 0x3206f0: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x3206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3206f4:
    // 0x3206f4: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x3206f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_3206f8:
    // 0x3206f8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_3206fc:
    if (ctx->pc == 0x3206FCu) {
        ctx->pc = 0x3206FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206F8u;
        // 0x3206fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320700u;
        goto label_320700;
    }
    ctx->pc = 0x3206F8u;
    {
        const bool branch_taken_0x3206f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3206FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206F8u;
        // 0x3206fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206f8) {
            ctx->pc = 0x32075Cu;
            goto label_32075c;
        }
    }
    ctx->pc = 0x320700u;
label_320700:
    // 0x320700: 0xc0a4e54  jal         func_293950
label_320704:
    if (ctx->pc == 0x320704u) {
        ctx->pc = 0x320708u;
        goto label_320708;
    }
    ctx->pc = 0x320700u;
    SET_GPR_U32(ctx, 31, 0x320708u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x320700u, 0x320708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320708u;
label_320708:
    // 0x320708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32070c:
    // 0x32070c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_320710:
    if (ctx->pc == 0x320710u) {
        ctx->pc = 0x320710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32070Cu;
        // 0x320710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320714u;
        goto label_320714;
    }
    ctx->pc = 0x32070Cu;
    {
        const bool branch_taken_0x32070c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32070Cu;
        // 0x320710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32070c) {
            ctx->pc = 0x320748u;
            goto label_320748;
        }
    }
    ctx->pc = 0x320714u;
label_320714:
    // 0x320714: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x320714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_320718:
    // 0x320718: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x320718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32071c:
    // 0x32071c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32071cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320720:
    // 0x320720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320724:
    // 0x320724: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x320724u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_320728:
    // 0x320728: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x320728u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_32072c:
    // 0x32072c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32072cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320730:
    // 0x320730: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x320730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320734:
    // 0x320734: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x320734u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_320738:
    // 0x320738: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x320738u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_32073c:
    // 0x32073c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32073cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320740:
    // 0x320740: 0xc0b8c60  jal         func_2E3180
label_320744:
    if (ctx->pc == 0x320744u) {
        ctx->pc = 0x320744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320740u;
        // 0x320744: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320748u;
        goto label_320748;
    }
    ctx->pc = 0x320740u;
    SET_GPR_U32(ctx, 31, 0x320748u);
    ctx->pc = 0x320744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320740u;
    // 0x320744: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x320740u, 0x320748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320748u;
label_320748:
    // 0x320748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32074c:
    // 0x32074c: 0xc0a35d6  jal         func_28D758
label_320750:
    if (ctx->pc == 0x320750u) {
        ctx->pc = 0x320750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32074Cu;
        // 0x320750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320754u;
        goto label_320754;
    }
    ctx->pc = 0x32074Cu;
    SET_GPR_U32(ctx, 31, 0x320754u);
    ctx->pc = 0x320750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32074Cu;
    // 0x320750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x32074Cu, 0x320754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320754u;
label_320754:
    // 0x320754: 0x10000052  b           . + 4 + (0x52 << 2)
label_320758:
    if (ctx->pc == 0x320758u) {
        ctx->pc = 0x320758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320754u;
        // 0x320758: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32075Cu;
        goto label_32075c;
    }
    ctx->pc = 0x320754u;
    {
        const bool branch_taken_0x320754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320754u;
        // 0x320758: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320754) {
            ctx->pc = 0x3208A0u;
            goto label_3208a0;
        }
    }
    ctx->pc = 0x32075Cu;
label_32075c:
    // 0x32075c: 0x1602003e  bne         $s0, $v0, . + 4 + (0x3E << 2)
label_320760:
    if (ctx->pc == 0x320760u) {
        ctx->pc = 0x320760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32075Cu;
        // 0x320760: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320764u;
        goto label_320764;
    }
    ctx->pc = 0x32075Cu;
    {
        const bool branch_taken_0x32075c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x320760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32075Cu;
        // 0x320760: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32075c) {
            ctx->pc = 0x320858u;
            goto label_320858;
        }
    }
    ctx->pc = 0x320764u;
label_320764:
    // 0x320764: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x320764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_320768:
    // 0x320768: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
label_32076c:
    if (ctx->pc == 0x32076Cu) {
        ctx->pc = 0x32076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320768u;
        // 0x32076c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320770u;
        goto label_320770;
    }
    ctx->pc = 0x320768u;
    {
        const bool branch_taken_0x320768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320768u;
        // 0x32076c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320768) {
            ctx->pc = 0x320858u;
            goto label_320858;
        }
    }
    ctx->pc = 0x320770u;
label_320770:
    // 0x320770: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x320770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_320774:
    // 0x320774: 0xc0e409a  jal         func_390268
label_320778:
    if (ctx->pc == 0x320778u) {
        ctx->pc = 0x320778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320774u;
        // 0x320778: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32077Cu;
        goto label_32077c;
    }
    ctx->pc = 0x320774u;
    SET_GPR_U32(ctx, 31, 0x32077Cu);
    ctx->pc = 0x320778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320774u;
    // 0x320778: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x320774u, 0x32077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32077Cu;
label_32077c:
    // 0x32077c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32077cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320780:
    // 0x320780: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_320784:
    if (ctx->pc == 0x320784u) {
        ctx->pc = 0x320788u;
        goto label_320788;
    }
    ctx->pc = 0x320780u;
    {
        const bool branch_taken_0x320780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x320780) {
            ctx->pc = 0x320858u;
            goto label_320858;
        }
    }
    ctx->pc = 0x320788u;
label_320788:
    // 0x320788: 0xc087502  jal         func_21D408
label_32078c:
    if (ctx->pc == 0x32078Cu) {
        ctx->pc = 0x32078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320788u;
        // 0x32078c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320790u;
        goto label_320790;
    }
    ctx->pc = 0x320788u;
    SET_GPR_U32(ctx, 31, 0x320790u);
    ctx->pc = 0x32078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320788u;
    // 0x32078c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x320788u, 0x320790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320790u;
label_320790:
    // 0x320790: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x320790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_320794:
    // 0x320794: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x320794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_320798:
    // 0x320798: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_32079c:
    if (ctx->pc == 0x32079Cu) {
        ctx->pc = 0x32079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320798u;
        // 0x32079c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3207A0u;
        goto label_3207a0;
    }
    ctx->pc = 0x320798u;
    {
        const bool branch_taken_0x320798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320798u;
        // 0x32079c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320798) {
            ctx->pc = 0x320858u;
            goto label_320858;
        }
    }
    ctx->pc = 0x3207A0u;
label_3207a0:
    // 0x3207a0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x3207a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_3207a4:
    // 0x3207a4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x3207a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_3207a8:
    // 0x3207a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3207a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3207ac:
    // 0x3207ac: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x3207acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3207b0:
    // 0x3207b0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3207b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3207b4:
    // 0x3207b4: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x3207b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3207b8:
    // 0x3207b8: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x3207b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_3207bc:
    // 0x3207bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3207bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3207c0:
    // 0x3207c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3207c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3207c4:
    // 0x3207c4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x3207c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_3207c8:
    // 0x3207c8: 0xc1067b8  jal         func_419EE0
label_3207cc:
    if (ctx->pc == 0x3207CCu) {
        ctx->pc = 0x3207CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207C8u;
        // 0x3207cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3207D0u;
        goto label_3207d0;
    }
    ctx->pc = 0x3207C8u;
    SET_GPR_U32(ctx, 31, 0x3207D0u);
    ctx->pc = 0x3207CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3207C8u;
    // 0x3207cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x3207C8u, 0x3207D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3207D0u;
label_3207d0:
    // 0x3207d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3207d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3207d4:
    // 0x3207d4: 0x12510020  beq         $s2, $s1, . + 4 + (0x20 << 2)
label_3207d8:
    if (ctx->pc == 0x3207D8u) {
        ctx->pc = 0x3207DCu;
        goto label_3207dc;
    }
    ctx->pc = 0x3207D4u;
    {
        const bool branch_taken_0x3207d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x3207d4) {
            ctx->pc = 0x320858u;
            goto label_320858;
        }
    }
    ctx->pc = 0x3207DCu;
label_3207dc:
    // 0x3207dc: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x3207dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3207e0:
    // 0x3207e0: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x3207e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_3207e4:
    // 0x3207e4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3207e8:
    // 0x3207e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3207e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3207ec:
    // 0x3207ec: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_3207f0:
    // 0x3207f0: 0xc0cdb38  jal         func_336CE0
label_3207f4:
    if (ctx->pc == 0x3207F4u) {
        ctx->pc = 0x3207F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207F0u;
        // 0x3207f4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3207F8u;
        goto label_3207f8;
    }
    ctx->pc = 0x3207F0u;
    SET_GPR_U32(ctx, 31, 0x3207F8u);
    ctx->pc = 0x3207F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3207F0u;
    // 0x3207f4: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3207F0u, 0x3207F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3207F8u;
label_3207f8:
    // 0x3207f8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x3207f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3207fc:
    // 0x3207fc: 0x0  nop
    ctx->pc = 0x3207fcu;
    // NOP
label_320800:
    // 0x320800: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_320804:
    if (ctx->pc == 0x320804u) {
        ctx->pc = 0x320808u;
        goto label_320808;
    }
    ctx->pc = 0x320800u;
    {
        const bool branch_taken_0x320800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x320800) {
            ctx->pc = 0x320858u;
            goto label_320858;
        }
    }
    ctx->pc = 0x320808u;
label_320808:
    // 0x320808: 0xc0a4e54  jal         func_293950
label_32080c:
    if (ctx->pc == 0x32080Cu) {
        ctx->pc = 0x320810u;
        goto label_320810;
    }
    ctx->pc = 0x320808u;
    SET_GPR_U32(ctx, 31, 0x320810u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x320808u, 0x320810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320810u;
label_320810:
    // 0x320810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320814:
    // 0x320814: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_320818:
    if (ctx->pc == 0x320818u) {
        ctx->pc = 0x320818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320814u;
        // 0x320818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32081Cu;
        goto label_32081c;
    }
    ctx->pc = 0x320814u;
    {
        const bool branch_taken_0x320814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320814u;
        // 0x320818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320814) {
            ctx->pc = 0x320848u;
            goto label_320848;
        }
    }
    ctx->pc = 0x32081Cu;
label_32081c:
    // 0x32081c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x32081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_320820:
    // 0x320820: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x320820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_320824:
    // 0x320824: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x320824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_320828:
    // 0x320828: 0x40f809  jalr        $v0
label_32082c:
    if (ctx->pc == 0x32082Cu) {
        ctx->pc = 0x32082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320828u;
        // 0x32082c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320830u;
        goto label_320830;
    }
    ctx->pc = 0x320828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320830u);
        ctx->pc = 0x32082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320828u;
        // 0x32082c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320828u, 0x320830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320830u;
label_320830:
    // 0x320830: 0xc66c013c  lwc1        $f12, 0x13C($s3)
    ctx->pc = 0x320830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_320834:
    // 0x320834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320838:
    // 0x320838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32083c:
    // 0x32083c: 0xc0af288  jal         func_2BCA20
label_320840:
    if (ctx->pc == 0x320840u) {
        ctx->pc = 0x320840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32083Cu;
        // 0x320840: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320844u;
        goto label_320844;
    }
    ctx->pc = 0x32083Cu;
    SET_GPR_U32(ctx, 31, 0x320844u);
    ctx->pc = 0x320840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32083Cu;
    // 0x320840: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x32083Cu, 0x320844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320844u;
label_320844:
    // 0x320844: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320848:
    // 0x320848: 0xc0a35d6  jal         func_28D758
label_32084c:
    if (ctx->pc == 0x32084Cu) {
        ctx->pc = 0x32084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320848u;
        // 0x32084c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320850u;
        goto label_320850;
    }
    ctx->pc = 0x320848u;
    SET_GPR_U32(ctx, 31, 0x320850u);
    ctx->pc = 0x32084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320848u;
    // 0x32084c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x320848u, 0x320850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320850u;
label_320850:
    // 0x320850: 0x10000012  b           . + 4 + (0x12 << 2)
label_320854:
    if (ctx->pc == 0x320854u) {
        ctx->pc = 0x320854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320850u;
        // 0x320854: 0xa3d60018  sb          $s6, 0x18($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320858u;
        goto label_320858;
    }
    ctx->pc = 0x320850u;
    {
        const bool branch_taken_0x320850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320850u;
        // 0x320854: 0xa3d60018  sb          $s6, 0x18($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320850) {
            ctx->pc = 0x32089Cu;
            goto label_32089c;
        }
    }
    ctx->pc = 0x320858u;
label_320858:
    // 0x320858: 0xc0a4e54  jal         func_293950
label_32085c:
    if (ctx->pc == 0x32085Cu) {
        ctx->pc = 0x320860u;
        goto label_320860;
    }
    ctx->pc = 0x320858u;
    SET_GPR_U32(ctx, 31, 0x320860u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x320858u, 0x320860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320860u;
label_320860:
    // 0x320860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320864:
    // 0x320864: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_320868:
    if (ctx->pc == 0x320868u) {
        ctx->pc = 0x320868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320864u;
        // 0x320868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32086Cu;
        goto label_32086c;
    }
    ctx->pc = 0x320864u;
    {
        const bool branch_taken_0x320864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x320864) {
            ctx->pc = 0x320868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320864u;
            // 0x320868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320894u;
            goto label_320894;
        }
    }
    ctx->pc = 0x32086Cu;
label_32086c:
    // 0x32086c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x32086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_320870:
    // 0x320870: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x320870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_320874:
    // 0x320874: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x320874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_320878:
    // 0x320878: 0x40f809  jalr        $v0
label_32087c:
    if (ctx->pc == 0x32087Cu) {
        ctx->pc = 0x32087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320878u;
        // 0x32087c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320880u;
        goto label_320880;
    }
    ctx->pc = 0x320878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320880u);
        ctx->pc = 0x32087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320878u;
        // 0x32087c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320878u, 0x320880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320880u;
label_320880:
    // 0x320880: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320884:
    // 0x320884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320888:
    // 0x320888: 0xc0aef70  jal         func_2BBDC0
label_32088c:
    if (ctx->pc == 0x32088Cu) {
        ctx->pc = 0x32088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320888u;
        // 0x32088c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320890u;
        goto label_320890;
    }
    ctx->pc = 0x320888u;
    SET_GPR_U32(ctx, 31, 0x320890u);
    ctx->pc = 0x32088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320888u;
    // 0x32088c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBDC0u, 0x320888u, 0x320890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320890u;
label_320890:
    // 0x320890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320894:
    // 0x320894: 0xc0a35d6  jal         func_28D758
label_320898:
    if (ctx->pc == 0x320898u) {
        ctx->pc = 0x320898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320894u;
        // 0x320898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32089Cu;
        goto label_32089c;
    }
    ctx->pc = 0x320894u;
    SET_GPR_U32(ctx, 31, 0x32089Cu);
    ctx->pc = 0x320898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320894u;
    // 0x320898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x320894u, 0x32089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32089Cu;
label_32089c:
    // 0x32089c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x32089cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3208a0:
    // 0x3208a0: 0x2ee20010  sltiu       $v0, $s7, 0x10
    ctx->pc = 0x3208a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3208a4:
    // 0x3208a4: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
label_3208a8:
    if (ctx->pc == 0x3208A8u) {
        ctx->pc = 0x3208A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A4u;
        // 0x3208a8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208ACu;
        goto label_3208ac;
    }
    ctx->pc = 0x3208A4u;
    {
        const bool branch_taken_0x3208a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3208A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A4u;
        // 0x3208a8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208a4) {
            ctx->pc = 0x320690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320690;
        }
    }
    ctx->pc = 0x3208ACu;
label_3208ac:
    // 0x3208ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3208acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3208b0:
    // 0x3208b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3208b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3208b4:
    // 0x3208b4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3208b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3208b8:
    // 0x3208b8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3208b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3208bc:
    // 0x3208bc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3208bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3208c0:
    // 0x3208c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3208c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3208c4:
    // 0x3208c4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3208c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3208c8:
    // 0x3208c8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3208c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3208cc:
    // 0x3208cc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3208ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3208d0:
    // 0x3208d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3208d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3208d4:
    // 0x3208d4: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x3208d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3208d8:
    // 0x3208d8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3208d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3208dc:
    // 0x3208dc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3208dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3208e0:
    // 0x3208e0: 0x3e00008  jr          $ra
label_3208e4:
    if (ctx->pc == 0x3208E4u) {
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E0u;
        // 0x3208e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208E8u;
        goto label_fallthrough_0x3208e0;
    }
    ctx->pc = 0x3208E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E0u;
        // 0x3208e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3208E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3208e0:
    ctx->pc = 0x3208E8u;
}
