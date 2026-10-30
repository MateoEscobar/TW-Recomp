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

// Function: sub_00273820
// Address: 0x273820 - 0x2739d8
void sub_00273820_0x273820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273820_0x273820");
#endif

    switch (ctx->pc) {
        case 0x273820u: goto label_273820;
        case 0x273824u: goto label_273824;
        case 0x273828u: goto label_273828;
        case 0x27382cu: goto label_27382c;
        case 0x273830u: goto label_273830;
        case 0x273834u: goto label_273834;
        case 0x273838u: goto label_273838;
        case 0x27383cu: goto label_27383c;
        case 0x273840u: goto label_273840;
        case 0x273844u: goto label_273844;
        case 0x273848u: goto label_273848;
        case 0x27384cu: goto label_27384c;
        case 0x273850u: goto label_273850;
        case 0x273854u: goto label_273854;
        case 0x273858u: goto label_273858;
        case 0x27385cu: goto label_27385c;
        case 0x273860u: goto label_273860;
        case 0x273864u: goto label_273864;
        case 0x273868u: goto label_273868;
        case 0x27386cu: goto label_27386c;
        case 0x273870u: goto label_273870;
        case 0x273874u: goto label_273874;
        case 0x273878u: goto label_273878;
        case 0x27387cu: goto label_27387c;
        case 0x273880u: goto label_273880;
        case 0x273884u: goto label_273884;
        case 0x273888u: goto label_273888;
        case 0x27388cu: goto label_27388c;
        case 0x273890u: goto label_273890;
        case 0x273894u: goto label_273894;
        case 0x273898u: goto label_273898;
        case 0x27389cu: goto label_27389c;
        case 0x2738a0u: goto label_2738a0;
        case 0x2738a4u: goto label_2738a4;
        case 0x2738a8u: goto label_2738a8;
        case 0x2738acu: goto label_2738ac;
        case 0x2738b0u: goto label_2738b0;
        case 0x2738b4u: goto label_2738b4;
        case 0x2738b8u: goto label_2738b8;
        case 0x2738bcu: goto label_2738bc;
        case 0x2738c0u: goto label_2738c0;
        case 0x2738c4u: goto label_2738c4;
        case 0x2738c8u: goto label_2738c8;
        case 0x2738ccu: goto label_2738cc;
        case 0x2738d0u: goto label_2738d0;
        case 0x2738d4u: goto label_2738d4;
        case 0x2738d8u: goto label_2738d8;
        case 0x2738dcu: goto label_2738dc;
        case 0x2738e0u: goto label_2738e0;
        case 0x2738e4u: goto label_2738e4;
        case 0x2738e8u: goto label_2738e8;
        case 0x2738ecu: goto label_2738ec;
        case 0x2738f0u: goto label_2738f0;
        case 0x2738f4u: goto label_2738f4;
        case 0x2738f8u: goto label_2738f8;
        case 0x2738fcu: goto label_2738fc;
        case 0x273900u: goto label_273900;
        case 0x273904u: goto label_273904;
        case 0x273908u: goto label_273908;
        case 0x27390cu: goto label_27390c;
        case 0x273910u: goto label_273910;
        case 0x273914u: goto label_273914;
        case 0x273918u: goto label_273918;
        case 0x27391cu: goto label_27391c;
        case 0x273920u: goto label_273920;
        case 0x273924u: goto label_273924;
        case 0x273928u: goto label_273928;
        case 0x27392cu: goto label_27392c;
        case 0x273930u: goto label_273930;
        case 0x273934u: goto label_273934;
        case 0x273938u: goto label_273938;
        case 0x27393cu: goto label_27393c;
        case 0x273940u: goto label_273940;
        case 0x273944u: goto label_273944;
        case 0x273948u: goto label_273948;
        case 0x27394cu: goto label_27394c;
        case 0x273950u: goto label_273950;
        case 0x273954u: goto label_273954;
        case 0x273958u: goto label_273958;
        case 0x27395cu: goto label_27395c;
        case 0x273960u: goto label_273960;
        case 0x273964u: goto label_273964;
        case 0x273968u: goto label_273968;
        case 0x27396cu: goto label_27396c;
        case 0x273970u: goto label_273970;
        case 0x273974u: goto label_273974;
        case 0x273978u: goto label_273978;
        case 0x27397cu: goto label_27397c;
        case 0x273980u: goto label_273980;
        case 0x273984u: goto label_273984;
        case 0x273988u: goto label_273988;
        case 0x27398cu: goto label_27398c;
        case 0x273990u: goto label_273990;
        case 0x273994u: goto label_273994;
        case 0x273998u: goto label_273998;
        case 0x27399cu: goto label_27399c;
        case 0x2739a0u: goto label_2739a0;
        case 0x2739a4u: goto label_2739a4;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739acu: goto label_2739ac;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739b8u: goto label_2739b8;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739c4u: goto label_2739c4;
        case 0x2739c8u: goto label_2739c8;
        case 0x2739ccu: goto label_2739cc;
        case 0x2739d0u: goto label_2739d0;
        case 0x2739d4u: goto label_2739d4;
        default: break;
    }

    ctx->pc = 0x273820u;

label_273820:
    // 0x273820: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x273820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_273824:
    // 0x273824: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x273824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_273828:
    // 0x273828: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27382c:
    // 0x27382c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x27382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_273830:
    // 0x273830: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x273830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_273834:
    // 0x273834: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x273834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_273838:
    // 0x273838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27383c:
    // 0x27383c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x27383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_273840:
    // 0x273840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_273844:
    // 0x273844: 0xc0e409a  jal         func_390268
label_273848:
    if (ctx->pc == 0x273848u) {
        ctx->pc = 0x273848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273844u;
        // 0x273848: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27384Cu;
        goto label_27384c;
    }
    ctx->pc = 0x273844u;
    SET_GPR_U32(ctx, 31, 0x27384Cu);
    ctx->pc = 0x273848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273844u;
    // 0x273848: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x273844u, 0x27384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27384Cu;
label_27384c:
    // 0x27384c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27384cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273850:
    // 0x273850: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x273850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_273854:
    // 0x273854: 0x8e1300d8  lw          $s3, 0xD8($s0)
    ctx->pc = 0x273854u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_273858:
    // 0x273858: 0x2455e3d0  addiu       $s5, $v0, -0x1C30
    ctx->pc = 0x273858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_27385c:
    // 0x27385c: 0xc041532  jal         func_1054C8
label_273860:
    if (ctx->pc == 0x273860u) {
        ctx->pc = 0x273860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27385Cu;
        // 0x273860: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273864u;
        goto label_273864;
    }
    ctx->pc = 0x27385Cu;
    SET_GPR_U32(ctx, 31, 0x273864u);
    ctx->pc = 0x273860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27385Cu;
    // 0x273860: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27385Cu, 0x273864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273864u;
label_273864:
    // 0x273864: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x273864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273868:
    // 0x273868: 0xc041532  jal         func_1054C8
label_27386c:
    if (ctx->pc == 0x27386Cu) {
        ctx->pc = 0x27386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273868u;
        // 0x27386c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273870u;
        goto label_273870;
    }
    ctx->pc = 0x273868u;
    SET_GPR_U32(ctx, 31, 0x273870u);
    ctx->pc = 0x27386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273868u;
    // 0x27386c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x273868u, 0x273870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273870u;
label_273870:
    // 0x273870: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_273874:
    if (ctx->pc == 0x273874u) {
        ctx->pc = 0x273874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273870u;
        // 0x273874: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273878u;
        goto label_273878;
    }
    ctx->pc = 0x273870u;
    {
        const bool branch_taken_0x273870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x273874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273870u;
        // 0x273874: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273870) {
            ctx->pc = 0x273894u;
            goto label_273894;
        }
    }
    ctx->pc = 0x273878u;
label_273878:
    // 0x273878: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x273878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_27387c:
    // 0x27387c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273880:
    // 0x273880: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273884:
    // 0x273884: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_273888:
    // 0x273888: 0x24060155  addiu       $a2, $zero, 0x155
    ctx->pc = 0x273888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
label_27388c:
    // 0x27388c: 0xc04159e  jal         func_105678
label_273890:
    if (ctx->pc == 0x273890u) {
        ctx->pc = 0x273890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27388Cu;
        // 0x273890: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273894u;
        goto label_273894;
    }
    ctx->pc = 0x27388Cu;
    SET_GPR_U32(ctx, 31, 0x273894u);
    ctx->pc = 0x273890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27388Cu;
    // 0x273890: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x27388Cu, 0x273894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273894u;
label_273894:
    // 0x273894: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_273898:
    if (ctx->pc == 0x273898u) {
        ctx->pc = 0x273898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273894u;
        // 0x273898: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27389Cu;
        goto label_27389c;
    }
    ctx->pc = 0x273894u;
    {
        const bool branch_taken_0x273894 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x273898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273894u;
        // 0x273898: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273894) {
            ctx->pc = 0x2738BCu;
            goto label_2738bc;
        }
    }
    ctx->pc = 0x27389Cu;
label_27389c:
    // 0x27389c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x27389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2738a0:
    // 0x2738a0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2738a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2738a4:
    // 0x2738a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2738a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2738a8:
    // 0x2738a8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2738a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_2738ac:
    // 0x2738ac: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2738acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_2738b0:
    // 0x2738b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2738b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2738b4:
    // 0x2738b4: 0xc041b20  jal         func_106C80
label_2738b8:
    if (ctx->pc == 0x2738B8u) {
        ctx->pc = 0x2738B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738B4u;
        // 0x2738b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738BCu;
        goto label_2738bc;
    }
    ctx->pc = 0x2738B4u;
    SET_GPR_U32(ctx, 31, 0x2738BCu);
    ctx->pc = 0x2738B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738B4u;
    // 0x2738b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2738B4u, 0x2738BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738BCu;
label_2738bc:
    // 0x2738bc: 0xc05d484  jal         func_175210
label_2738c0:
    if (ctx->pc == 0x2738C0u) {
        ctx->pc = 0x2738C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738BCu;
        // 0x2738c0: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738C4u;
        goto label_2738c4;
    }
    ctx->pc = 0x2738BCu;
    SET_GPR_U32(ctx, 31, 0x2738C4u);
    ctx->pc = 0x2738C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738BCu;
    // 0x2738c0: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2738BCu, 0x2738C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738C4u;
label_2738c4:
    // 0x2738c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2738c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2738c8:
    // 0x2738c8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2738c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2738cc:
    // 0x2738cc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2738ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2738d0:
    // 0x2738d0: 0xa0f809  jalr        $a1
label_2738d4:
    if (ctx->pc == 0x2738D4u) {
        ctx->pc = 0x2738D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738D0u;
        // 0x2738d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738D8u;
        goto label_2738d8;
    }
    ctx->pc = 0x2738D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2738D8u);
        ctx->pc = 0x2738D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738D0u;
        // 0x2738d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2738D0u, 0x2738D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2738D8u;
label_2738d8:
    // 0x2738d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2738d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2738dc:
    // 0x2738dc: 0xc087016  jal         func_21C058
label_2738e0:
    if (ctx->pc == 0x2738E0u) {
        ctx->pc = 0x2738E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738DCu;
        // 0x2738e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738E4u;
        goto label_2738e4;
    }
    ctx->pc = 0x2738DCu;
    SET_GPR_U32(ctx, 31, 0x2738E4u);
    ctx->pc = 0x2738E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738DCu;
    // 0x2738e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2738DCu, 0x2738E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738E4u;
label_2738e4:
    // 0x2738e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2738e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2738e8:
    // 0x2738e8: 0xc05d53a  jal         func_1754E8
label_2738ec:
    if (ctx->pc == 0x2738ECu) {
        ctx->pc = 0x2738ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738E8u;
        // 0x2738ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738F0u;
        goto label_2738f0;
    }
    ctx->pc = 0x2738E8u;
    SET_GPR_U32(ctx, 31, 0x2738F0u);
    ctx->pc = 0x2738ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738E8u;
    // 0x2738ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2738E8u, 0x2738F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738F0u;
label_2738f0:
    // 0x2738f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2738f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2738f4:
    // 0x2738f4: 0xc05d4f6  jal         func_1753D8
label_2738f8:
    if (ctx->pc == 0x2738F8u) {
        ctx->pc = 0x2738F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738F4u;
        // 0x2738f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2738FCu;
        goto label_2738fc;
    }
    ctx->pc = 0x2738F4u;
    SET_GPR_U32(ctx, 31, 0x2738FCu);
    ctx->pc = 0x2738F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738F4u;
    // 0x2738f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2738F4u, 0x2738FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738FCu;
label_2738fc:
    // 0x2738fc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2738fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_273900:
    // 0x273900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_273904:
    // 0x273904: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x273904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_273908:
    // 0x273908: 0xc041532  jal         func_1054C8
label_27390c:
    if (ctx->pc == 0x27390Cu) {
        ctx->pc = 0x27390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273908u;
        // 0x27390c: 0x8e9200d8  lw          $s2, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273910u;
        goto label_273910;
    }
    ctx->pc = 0x273908u;
    SET_GPR_U32(ctx, 31, 0x273910u);
    ctx->pc = 0x27390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273908u;
    // 0x27390c: 0x8e9200d8  lw          $s2, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x273908u, 0x273910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273910u;
label_273910:
    // 0x273910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273914:
    // 0x273914: 0xc041532  jal         func_1054C8
label_273918:
    if (ctx->pc == 0x273918u) {
        ctx->pc = 0x273918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273914u;
        // 0x273918: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27391Cu;
        goto label_27391c;
    }
    ctx->pc = 0x273914u;
    SET_GPR_U32(ctx, 31, 0x27391Cu);
    ctx->pc = 0x273918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273914u;
    // 0x273918: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x273914u, 0x27391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27391Cu;
label_27391c:
    // 0x27391c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_273920:
    if (ctx->pc == 0x273920u) {
        ctx->pc = 0x273920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27391Cu;
        // 0x273920: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273924u;
        goto label_273924;
    }
    ctx->pc = 0x27391Cu;
    {
        const bool branch_taken_0x27391c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27391Cu;
        // 0x273920: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27391c) {
            ctx->pc = 0x273940u;
            goto label_273940;
        }
    }
    ctx->pc = 0x273924u;
label_273924:
    // 0x273924: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x273924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_273928:
    // 0x273928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27392c:
    // 0x27392c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x27392cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273930:
    // 0x273930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x273930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273934:
    // 0x273934: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x273934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_273938:
    // 0x273938: 0xc04159e  jal         func_105678
label_27393c:
    if (ctx->pc == 0x27393Cu) {
        ctx->pc = 0x27393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273938u;
        // 0x27393c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273940u;
        goto label_273940;
    }
    ctx->pc = 0x273938u;
    SET_GPR_U32(ctx, 31, 0x273940u);
    ctx->pc = 0x27393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273938u;
    // 0x27393c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x273938u, 0x273940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273940u;
label_273940:
    // 0x273940: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_273944:
    if (ctx->pc == 0x273944u) {
        ctx->pc = 0x273944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273940u;
        // 0x273944: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273948u;
        goto label_273948;
    }
    ctx->pc = 0x273940u;
    {
        const bool branch_taken_0x273940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x273944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273940u;
        // 0x273944: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273940) {
            ctx->pc = 0x273968u;
            goto label_273968;
        }
    }
    ctx->pc = 0x273948u;
label_273948:
    // 0x273948: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x273948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_27394c:
    // 0x27394c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x27394cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273950:
    // 0x273950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273954:
    // 0x273954: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x273954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_273958:
    // 0x273958: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x273958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_27395c:
    // 0x27395c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_273960:
    // 0x273960: 0xc041b20  jal         func_106C80
label_273964:
    if (ctx->pc == 0x273964u) {
        ctx->pc = 0x273964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273960u;
        // 0x273964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273968u;
        goto label_273968;
    }
    ctx->pc = 0x273960u;
    SET_GPR_U32(ctx, 31, 0x273968u);
    ctx->pc = 0x273964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273960u;
    // 0x273964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x273960u, 0x273968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273968u;
label_273968:
    // 0x273968: 0xc05d484  jal         func_175210
label_27396c:
    if (ctx->pc == 0x27396Cu) {
        ctx->pc = 0x27396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273968u;
        // 0x27396c: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273970u;
        goto label_273970;
    }
    ctx->pc = 0x273968u;
    SET_GPR_U32(ctx, 31, 0x273970u);
    ctx->pc = 0x27396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273968u;
    // 0x27396c: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x273968u, 0x273970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273970u;
label_273970:
    // 0x273970: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x273970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273974:
    // 0x273974: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x273974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_273978:
    // 0x273978: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x273978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_27397c:
    // 0x27397c: 0xa0f809  jalr        $a1
label_273980:
    if (ctx->pc == 0x273980u) {
        ctx->pc = 0x273980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27397Cu;
        // 0x273980: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273984u;
        goto label_273984;
    }
    ctx->pc = 0x27397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x273984u);
        ctx->pc = 0x273980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27397Cu;
        // 0x273980: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27397Cu, 0x273984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273984u;
label_273984:
    // 0x273984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_273988:
    // 0x273988: 0xc087016  jal         func_21C058
label_27398c:
    if (ctx->pc == 0x27398Cu) {
        ctx->pc = 0x27398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273988u;
        // 0x27398c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273990u;
        goto label_273990;
    }
    ctx->pc = 0x273988u;
    SET_GPR_U32(ctx, 31, 0x273990u);
    ctx->pc = 0x27398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273988u;
    // 0x27398c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x273988u, 0x273990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273990u;
label_273990:
    // 0x273990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273994:
    // 0x273994: 0xc05d53a  jal         func_1754E8
label_273998:
    if (ctx->pc == 0x273998u) {
        ctx->pc = 0x273998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273994u;
        // 0x273998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27399Cu;
        goto label_27399c;
    }
    ctx->pc = 0x273994u;
    SET_GPR_U32(ctx, 31, 0x27399Cu);
    ctx->pc = 0x273998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273994u;
    // 0x273998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x273994u, 0x27399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27399Cu;
label_27399c:
    // 0x27399c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2739a0:
    // 0x2739a0: 0xc05d4f6  jal         func_1753D8
label_2739a4:
    if (ctx->pc == 0x2739A4u) {
        ctx->pc = 0x2739A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739A0u;
        // 0x2739a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739A8u;
        goto label_2739a8;
    }
    ctx->pc = 0x2739A0u;
    SET_GPR_U32(ctx, 31, 0x2739A8u);
    ctx->pc = 0x2739A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739A0u;
    // 0x2739a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2739A0u, 0x2739A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739A8u;
label_2739a8:
    // 0x2739a8: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x2739a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_2739ac:
    // 0x2739ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2739acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2739b0:
    // 0x2739b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2739b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2739b4:
    // 0x2739b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2739b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2739b8:
    // 0x2739b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2739b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2739bc:
    // 0x2739bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2739bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2739c0:
    // 0x2739c0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2739c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2739c4:
    // 0x2739c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2739c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2739c8:
    // 0x2739c8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2739c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2739cc:
    // 0x2739cc: 0x3e00008  jr          $ra
label_2739d0:
    if (ctx->pc == 0x2739D0u) {
        ctx->pc = 0x2739D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739CCu;
        // 0x2739d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739D4u;
        goto label_2739d4;
    }
    ctx->pc = 0x2739CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2739D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739CCu;
        // 0x2739d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2739CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2739D4u;
label_2739d4:
    // 0x2739d4: 0x0  nop
    ctx->pc = 0x2739d4u;
    // NOP
    ctx->pc = 0x2739d8u;
}
