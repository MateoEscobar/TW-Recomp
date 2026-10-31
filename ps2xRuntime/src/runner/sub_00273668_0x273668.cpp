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

// Function: sub_00273668
// Address: 0x273668 - 0x273820
void sub_00273668_0x273668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273668_0x273668");
#endif

    switch (ctx->pc) {
        case 0x273668u: goto label_273668;
        case 0x27366cu: goto label_27366c;
        case 0x273670u: goto label_273670;
        case 0x273674u: goto label_273674;
        case 0x273678u: goto label_273678;
        case 0x27367cu: goto label_27367c;
        case 0x273680u: goto label_273680;
        case 0x273684u: goto label_273684;
        case 0x273688u: goto label_273688;
        case 0x27368cu: goto label_27368c;
        case 0x273690u: goto label_273690;
        case 0x273694u: goto label_273694;
        case 0x273698u: goto label_273698;
        case 0x27369cu: goto label_27369c;
        case 0x2736a0u: goto label_2736a0;
        case 0x2736a4u: goto label_2736a4;
        case 0x2736a8u: goto label_2736a8;
        case 0x2736acu: goto label_2736ac;
        case 0x2736b0u: goto label_2736b0;
        case 0x2736b4u: goto label_2736b4;
        case 0x2736b8u: goto label_2736b8;
        case 0x2736bcu: goto label_2736bc;
        case 0x2736c0u: goto label_2736c0;
        case 0x2736c4u: goto label_2736c4;
        case 0x2736c8u: goto label_2736c8;
        case 0x2736ccu: goto label_2736cc;
        case 0x2736d0u: goto label_2736d0;
        case 0x2736d4u: goto label_2736d4;
        case 0x2736d8u: goto label_2736d8;
        case 0x2736dcu: goto label_2736dc;
        case 0x2736e0u: goto label_2736e0;
        case 0x2736e4u: goto label_2736e4;
        case 0x2736e8u: goto label_2736e8;
        case 0x2736ecu: goto label_2736ec;
        case 0x2736f0u: goto label_2736f0;
        case 0x2736f4u: goto label_2736f4;
        case 0x2736f8u: goto label_2736f8;
        case 0x2736fcu: goto label_2736fc;
        case 0x273700u: goto label_273700;
        case 0x273704u: goto label_273704;
        case 0x273708u: goto label_273708;
        case 0x27370cu: goto label_27370c;
        case 0x273710u: goto label_273710;
        case 0x273714u: goto label_273714;
        case 0x273718u: goto label_273718;
        case 0x27371cu: goto label_27371c;
        case 0x273720u: goto label_273720;
        case 0x273724u: goto label_273724;
        case 0x273728u: goto label_273728;
        case 0x27372cu: goto label_27372c;
        case 0x273730u: goto label_273730;
        case 0x273734u: goto label_273734;
        case 0x273738u: goto label_273738;
        case 0x27373cu: goto label_27373c;
        case 0x273740u: goto label_273740;
        case 0x273744u: goto label_273744;
        case 0x273748u: goto label_273748;
        case 0x27374cu: goto label_27374c;
        case 0x273750u: goto label_273750;
        case 0x273754u: goto label_273754;
        case 0x273758u: goto label_273758;
        case 0x27375cu: goto label_27375c;
        case 0x273760u: goto label_273760;
        case 0x273764u: goto label_273764;
        case 0x273768u: goto label_273768;
        case 0x27376cu: goto label_27376c;
        case 0x273770u: goto label_273770;
        case 0x273774u: goto label_273774;
        case 0x273778u: goto label_273778;
        case 0x27377cu: goto label_27377c;
        case 0x273780u: goto label_273780;
        case 0x273784u: goto label_273784;
        case 0x273788u: goto label_273788;
        case 0x27378cu: goto label_27378c;
        case 0x273790u: goto label_273790;
        case 0x273794u: goto label_273794;
        case 0x273798u: goto label_273798;
        case 0x27379cu: goto label_27379c;
        case 0x2737a0u: goto label_2737a0;
        case 0x2737a4u: goto label_2737a4;
        case 0x2737a8u: goto label_2737a8;
        case 0x2737acu: goto label_2737ac;
        case 0x2737b0u: goto label_2737b0;
        case 0x2737b4u: goto label_2737b4;
        case 0x2737b8u: goto label_2737b8;
        case 0x2737bcu: goto label_2737bc;
        case 0x2737c0u: goto label_2737c0;
        case 0x2737c4u: goto label_2737c4;
        case 0x2737c8u: goto label_2737c8;
        case 0x2737ccu: goto label_2737cc;
        case 0x2737d0u: goto label_2737d0;
        case 0x2737d4u: goto label_2737d4;
        case 0x2737d8u: goto label_2737d8;
        case 0x2737dcu: goto label_2737dc;
        case 0x2737e0u: goto label_2737e0;
        case 0x2737e4u: goto label_2737e4;
        case 0x2737e8u: goto label_2737e8;
        case 0x2737ecu: goto label_2737ec;
        case 0x2737f0u: goto label_2737f0;
        case 0x2737f4u: goto label_2737f4;
        case 0x2737f8u: goto label_2737f8;
        case 0x2737fcu: goto label_2737fc;
        case 0x273800u: goto label_273800;
        case 0x273804u: goto label_273804;
        case 0x273808u: goto label_273808;
        case 0x27380cu: goto label_27380c;
        case 0x273810u: goto label_273810;
        case 0x273814u: goto label_273814;
        case 0x273818u: goto label_273818;
        case 0x27381cu: goto label_27381c;
        default: break;
    }

    ctx->pc = 0x273668u;

label_273668:
    // 0x273668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x273668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27366c:
    // 0x27366c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x27366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_273670:
    // 0x273670: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x273670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273674:
    // 0x273674: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x273674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_273678:
    // 0x273678: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x273678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_27367c:
    // 0x27367c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_273680:
    // 0x273680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_273684:
    // 0x273684: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x273684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_273688:
    // 0x273688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27368c:
    // 0x27368c: 0xc0e409a  jal         func_390268
label_273690:
    if (ctx->pc == 0x273690u) {
        ctx->pc = 0x273690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27368Cu;
        // 0x273690: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273694u;
        goto label_273694;
    }
    ctx->pc = 0x27368Cu;
    SET_GPR_U32(ctx, 31, 0x273694u);
    ctx->pc = 0x273690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27368Cu;
    // 0x273690: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27368Cu, 0x273694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273694u;
label_273694:
    // 0x273694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273698:
    // 0x273698: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x273698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_27369c:
    // 0x27369c: 0x8e1300d8  lw          $s3, 0xD8($s0)
    ctx->pc = 0x27369cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2736a0:
    // 0x2736a0: 0x2455e3d0  addiu       $s5, $v0, -0x1C30
    ctx->pc = 0x2736a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_2736a4:
    // 0x2736a4: 0xc041532  jal         func_1054C8
label_2736a8:
    if (ctx->pc == 0x2736A8u) {
        ctx->pc = 0x2736A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736A4u;
        // 0x2736a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736ACu;
        goto label_2736ac;
    }
    ctx->pc = 0x2736A4u;
    SET_GPR_U32(ctx, 31, 0x2736ACu);
    ctx->pc = 0x2736A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2736A4u;
    // 0x2736a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2736A4u, 0x2736ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736ACu;
label_2736ac:
    // 0x2736ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2736acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2736b0:
    // 0x2736b0: 0xc041532  jal         func_1054C8
label_2736b4:
    if (ctx->pc == 0x2736B4u) {
        ctx->pc = 0x2736B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736B0u;
        // 0x2736b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736B8u;
        goto label_2736b8;
    }
    ctx->pc = 0x2736B0u;
    SET_GPR_U32(ctx, 31, 0x2736B8u);
    ctx->pc = 0x2736B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2736B0u;
    // 0x2736b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2736B0u, 0x2736B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736B8u;
label_2736b8:
    // 0x2736b8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2736bc:
    if (ctx->pc == 0x2736BCu) {
        ctx->pc = 0x2736BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736B8u;
        // 0x2736bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736C0u;
        goto label_2736c0;
    }
    ctx->pc = 0x2736B8u;
    {
        const bool branch_taken_0x2736b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736B8u;
        // 0x2736bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736b8) {
            ctx->pc = 0x2736DCu;
            goto label_2736dc;
        }
    }
    ctx->pc = 0x2736C0u;
label_2736c0:
    // 0x2736c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2736c4:
    // 0x2736c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2736c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2736c8:
    // 0x2736c8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2736c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2736cc:
    // 0x2736cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2736ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2736d0:
    // 0x2736d0: 0x24060157  addiu       $a2, $zero, 0x157
    ctx->pc = 0x2736d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
label_2736d4:
    // 0x2736d4: 0xc04159e  jal         func_105678
label_2736d8:
    if (ctx->pc == 0x2736D8u) {
        ctx->pc = 0x2736D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736D4u;
        // 0x2736d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736DCu;
        goto label_2736dc;
    }
    ctx->pc = 0x2736D4u;
    SET_GPR_U32(ctx, 31, 0x2736DCu);
    ctx->pc = 0x2736D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2736D4u;
    // 0x2736d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2736D4u, 0x2736DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736DCu;
label_2736dc:
    // 0x2736dc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2736e0:
    if (ctx->pc == 0x2736E0u) {
        ctx->pc = 0x2736E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736DCu;
        // 0x2736e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736E4u;
        goto label_2736e4;
    }
    ctx->pc = 0x2736DCu;
    {
        const bool branch_taken_0x2736dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736DCu;
        // 0x2736e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736dc) {
            ctx->pc = 0x273704u;
            goto label_273704;
        }
    }
    ctx->pc = 0x2736E4u;
label_2736e4:
    // 0x2736e4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x2736e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2736e8:
    // 0x2736e8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2736e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2736ec:
    // 0x2736ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2736ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2736f0:
    // 0x2736f0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2736f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_2736f4:
    // 0x2736f4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2736f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_2736f8:
    // 0x2736f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2736f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2736fc:
    // 0x2736fc: 0xc041b20  jal         func_106C80
label_273700:
    if (ctx->pc == 0x273700u) {
        ctx->pc = 0x273700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736FCu;
        // 0x273700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273704u;
        goto label_273704;
    }
    ctx->pc = 0x2736FCu;
    SET_GPR_U32(ctx, 31, 0x273704u);
    ctx->pc = 0x273700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2736FCu;
    // 0x273700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2736FCu, 0x273704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273704u;
label_273704:
    // 0x273704: 0xc05d484  jal         func_175210
label_273708:
    if (ctx->pc == 0x273708u) {
        ctx->pc = 0x273708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273704u;
        // 0x273708: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27370Cu;
        goto label_27370c;
    }
    ctx->pc = 0x273704u;
    SET_GPR_U32(ctx, 31, 0x27370Cu);
    ctx->pc = 0x273708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273704u;
    // 0x273708: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x273704u, 0x27370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27370Cu;
label_27370c:
    // 0x27370c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273710:
    // 0x273710: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x273710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_273714:
    // 0x273714: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x273714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_273718:
    // 0x273718: 0xa0f809  jalr        $a1
label_27371c:
    if (ctx->pc == 0x27371Cu) {
        ctx->pc = 0x27371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273718u;
        // 0x27371c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273720u;
        goto label_273720;
    }
    ctx->pc = 0x273718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x273720u);
        ctx->pc = 0x27371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273718u;
        // 0x27371c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273718u, 0x273720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273720u;
label_273720:
    // 0x273720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273724:
    // 0x273724: 0xc087016  jal         func_21C058
label_273728:
    if (ctx->pc == 0x273728u) {
        ctx->pc = 0x273728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273724u;
        // 0x273728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27372Cu;
        goto label_27372c;
    }
    ctx->pc = 0x273724u;
    SET_GPR_U32(ctx, 31, 0x27372Cu);
    ctx->pc = 0x273728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273724u;
    // 0x273728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x273724u, 0x27372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27372Cu;
label_27372c:
    // 0x27372c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273730:
    // 0x273730: 0xc05d53a  jal         func_1754E8
label_273734:
    if (ctx->pc == 0x273734u) {
        ctx->pc = 0x273734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273730u;
        // 0x273734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273738u;
        goto label_273738;
    }
    ctx->pc = 0x273730u;
    SET_GPR_U32(ctx, 31, 0x273738u);
    ctx->pc = 0x273734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273730u;
    // 0x273734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x273730u, 0x273738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273738u;
label_273738:
    // 0x273738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x273738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27373c:
    // 0x27373c: 0xc05d4f6  jal         func_1753D8
label_273740:
    if (ctx->pc == 0x273740u) {
        ctx->pc = 0x273740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27373Cu;
        // 0x273740: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273744u;
        goto label_273744;
    }
    ctx->pc = 0x27373Cu;
    SET_GPR_U32(ctx, 31, 0x273744u);
    ctx->pc = 0x273740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27373Cu;
    // 0x273740: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x27373Cu, 0x273744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273744u;
label_273744:
    // 0x273744: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x273744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_273748:
    // 0x273748: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27374c:
    // 0x27374c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x27374cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_273750:
    // 0x273750: 0xc041532  jal         func_1054C8
label_273754:
    if (ctx->pc == 0x273754u) {
        ctx->pc = 0x273754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273750u;
        // 0x273754: 0x8e9200d8  lw          $s2, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273758u;
        goto label_273758;
    }
    ctx->pc = 0x273750u;
    SET_GPR_U32(ctx, 31, 0x273758u);
    ctx->pc = 0x273754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273750u;
    // 0x273754: 0x8e9200d8  lw          $s2, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x273750u, 0x273758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273758u;
label_273758:
    // 0x273758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27375c:
    // 0x27375c: 0xc041532  jal         func_1054C8
label_273760:
    if (ctx->pc == 0x273760u) {
        ctx->pc = 0x273760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27375Cu;
        // 0x273760: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273764u;
        goto label_273764;
    }
    ctx->pc = 0x27375Cu;
    SET_GPR_U32(ctx, 31, 0x273764u);
    ctx->pc = 0x273760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27375Cu;
    // 0x273760: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27375Cu, 0x273764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273764u;
label_273764:
    // 0x273764: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_273768:
    if (ctx->pc == 0x273768u) {
        ctx->pc = 0x273768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273764u;
        // 0x273768: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27376Cu;
        goto label_27376c;
    }
    ctx->pc = 0x273764u;
    {
        const bool branch_taken_0x273764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273764u;
        // 0x273768: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273764) {
            ctx->pc = 0x273788u;
            goto label_273788;
        }
    }
    ctx->pc = 0x27376Cu;
label_27376c:
    // 0x27376c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x27376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_273770:
    // 0x273770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273774:
    // 0x273774: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x273774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273778:
    // 0x273778: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x273778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27377c:
    // 0x27377c: 0x24060156  addiu       $a2, $zero, 0x156
    ctx->pc = 0x27377cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
label_273780:
    // 0x273780: 0xc04159e  jal         func_105678
label_273784:
    if (ctx->pc == 0x273784u) {
        ctx->pc = 0x273784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273780u;
        // 0x273784: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273788u;
        goto label_273788;
    }
    ctx->pc = 0x273780u;
    SET_GPR_U32(ctx, 31, 0x273788u);
    ctx->pc = 0x273784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273780u;
    // 0x273784: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x273780u, 0x273788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273788u;
label_273788:
    // 0x273788: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_27378c:
    if (ctx->pc == 0x27378Cu) {
        ctx->pc = 0x27378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273788u;
        // 0x27378c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273790u;
        goto label_273790;
    }
    ctx->pc = 0x273788u;
    {
        const bool branch_taken_0x273788 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273788u;
        // 0x27378c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273788) {
            ctx->pc = 0x2737B0u;
            goto label_2737b0;
        }
    }
    ctx->pc = 0x273790u;
label_273790:
    // 0x273790: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x273790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_273794:
    // 0x273794: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x273794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273798:
    // 0x273798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27379c:
    // 0x27379c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x27379cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_2737a0:
    // 0x2737a0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2737a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_2737a4:
    // 0x2737a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2737a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2737a8:
    // 0x2737a8: 0xc041b20  jal         func_106C80
label_2737ac:
    if (ctx->pc == 0x2737ACu) {
        ctx->pc = 0x2737ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737A8u;
        // 0x2737ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737B0u;
        goto label_2737b0;
    }
    ctx->pc = 0x2737A8u;
    SET_GPR_U32(ctx, 31, 0x2737B0u);
    ctx->pc = 0x2737ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737A8u;
    // 0x2737ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2737A8u, 0x2737B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737B0u;
label_2737b0:
    // 0x2737b0: 0xc05d484  jal         func_175210
label_2737b4:
    if (ctx->pc == 0x2737B4u) {
        ctx->pc = 0x2737B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737B0u;
        // 0x2737b4: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737B8u;
        goto label_2737b8;
    }
    ctx->pc = 0x2737B0u;
    SET_GPR_U32(ctx, 31, 0x2737B8u);
    ctx->pc = 0x2737B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737B0u;
    // 0x2737b4: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2737B0u, 0x2737B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737B8u;
label_2737b8:
    // 0x2737b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2737b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2737bc:
    // 0x2737bc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2737bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2737c0:
    // 0x2737c0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2737c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2737c4:
    // 0x2737c4: 0xa0f809  jalr        $a1
label_2737c8:
    if (ctx->pc == 0x2737C8u) {
        ctx->pc = 0x2737C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737C4u;
        // 0x2737c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737CCu;
        goto label_2737cc;
    }
    ctx->pc = 0x2737C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2737CCu);
        ctx->pc = 0x2737C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737C4u;
        // 0x2737c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2737C4u, 0x2737CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2737CCu;
label_2737cc:
    // 0x2737cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2737ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2737d0:
    // 0x2737d0: 0xc087016  jal         func_21C058
label_2737d4:
    if (ctx->pc == 0x2737D4u) {
        ctx->pc = 0x2737D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737D0u;
        // 0x2737d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737D8u;
        goto label_2737d8;
    }
    ctx->pc = 0x2737D0u;
    SET_GPR_U32(ctx, 31, 0x2737D8u);
    ctx->pc = 0x2737D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737D0u;
    // 0x2737d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2737D0u, 0x2737D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737D8u;
label_2737d8:
    // 0x2737d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2737d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2737dc:
    // 0x2737dc: 0xc05d53a  jal         func_1754E8
label_2737e0:
    if (ctx->pc == 0x2737E0u) {
        ctx->pc = 0x2737E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737DCu;
        // 0x2737e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737E4u;
        goto label_2737e4;
    }
    ctx->pc = 0x2737DCu;
    SET_GPR_U32(ctx, 31, 0x2737E4u);
    ctx->pc = 0x2737E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737DCu;
    // 0x2737e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2737DCu, 0x2737E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737E4u;
label_2737e4:
    // 0x2737e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2737e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2737e8:
    // 0x2737e8: 0xc05d4f6  jal         func_1753D8
label_2737ec:
    if (ctx->pc == 0x2737ECu) {
        ctx->pc = 0x2737ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737E8u;
        // 0x2737ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737F0u;
        goto label_2737f0;
    }
    ctx->pc = 0x2737E8u;
    SET_GPR_U32(ctx, 31, 0x2737F0u);
    ctx->pc = 0x2737ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737E8u;
    // 0x2737ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2737E8u, 0x2737F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737F0u;
label_2737f0:
    // 0x2737f0: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2737f4:
    // 0x2737f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2737f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2737f8:
    // 0x2737f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2737f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2737fc:
    // 0x2737fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2737fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273800:
    // 0x273800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x273800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273804:
    // 0x273804: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x273804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273808:
    // 0x273808: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x273808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27380c:
    // 0x27380c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27380cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273810:
    // 0x273810: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x273810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_273814:
    // 0x273814: 0x3e00008  jr          $ra
label_273818:
    if (ctx->pc == 0x273818u) {
        ctx->pc = 0x273818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273814u;
        // 0x273818: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27381Cu;
        goto label_27381c;
    }
    ctx->pc = 0x273814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273814u;
        // 0x273818: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27381Cu;
label_27381c:
    // 0x27381c: 0x0  nop
    ctx->pc = 0x27381cu;
    // NOP
    ctx->pc = 0x273820u;
}
