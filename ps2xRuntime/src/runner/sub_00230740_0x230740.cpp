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

// Function: sub_00230740
// Address: 0x230740 - 0x230930
void sub_00230740_0x230740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230740_0x230740");
#endif

    switch (ctx->pc) {
        case 0x230740u: goto label_230740;
        case 0x230744u: goto label_230744;
        case 0x230748u: goto label_230748;
        case 0x23074cu: goto label_23074c;
        case 0x230750u: goto label_230750;
        case 0x230754u: goto label_230754;
        case 0x230758u: goto label_230758;
        case 0x23075cu: goto label_23075c;
        case 0x230760u: goto label_230760;
        case 0x230764u: goto label_230764;
        case 0x230768u: goto label_230768;
        case 0x23076cu: goto label_23076c;
        case 0x230770u: goto label_230770;
        case 0x230774u: goto label_230774;
        case 0x230778u: goto label_230778;
        case 0x23077cu: goto label_23077c;
        case 0x230780u: goto label_230780;
        case 0x230784u: goto label_230784;
        case 0x230788u: goto label_230788;
        case 0x23078cu: goto label_23078c;
        case 0x230790u: goto label_230790;
        case 0x230794u: goto label_230794;
        case 0x230798u: goto label_230798;
        case 0x23079cu: goto label_23079c;
        case 0x2307a0u: goto label_2307a0;
        case 0x2307a4u: goto label_2307a4;
        case 0x2307a8u: goto label_2307a8;
        case 0x2307acu: goto label_2307ac;
        case 0x2307b0u: goto label_2307b0;
        case 0x2307b4u: goto label_2307b4;
        case 0x2307b8u: goto label_2307b8;
        case 0x2307bcu: goto label_2307bc;
        case 0x2307c0u: goto label_2307c0;
        case 0x2307c4u: goto label_2307c4;
        case 0x2307c8u: goto label_2307c8;
        case 0x2307ccu: goto label_2307cc;
        case 0x2307d0u: goto label_2307d0;
        case 0x2307d4u: goto label_2307d4;
        case 0x2307d8u: goto label_2307d8;
        case 0x2307dcu: goto label_2307dc;
        case 0x2307e0u: goto label_2307e0;
        case 0x2307e4u: goto label_2307e4;
        case 0x2307e8u: goto label_2307e8;
        case 0x2307ecu: goto label_2307ec;
        case 0x2307f0u: goto label_2307f0;
        case 0x2307f4u: goto label_2307f4;
        case 0x2307f8u: goto label_2307f8;
        case 0x2307fcu: goto label_2307fc;
        case 0x230800u: goto label_230800;
        case 0x230804u: goto label_230804;
        case 0x230808u: goto label_230808;
        case 0x23080cu: goto label_23080c;
        case 0x230810u: goto label_230810;
        case 0x230814u: goto label_230814;
        case 0x230818u: goto label_230818;
        case 0x23081cu: goto label_23081c;
        case 0x230820u: goto label_230820;
        case 0x230824u: goto label_230824;
        case 0x230828u: goto label_230828;
        case 0x23082cu: goto label_23082c;
        case 0x230830u: goto label_230830;
        case 0x230834u: goto label_230834;
        case 0x230838u: goto label_230838;
        case 0x23083cu: goto label_23083c;
        case 0x230840u: goto label_230840;
        case 0x230844u: goto label_230844;
        case 0x230848u: goto label_230848;
        case 0x23084cu: goto label_23084c;
        case 0x230850u: goto label_230850;
        case 0x230854u: goto label_230854;
        case 0x230858u: goto label_230858;
        case 0x23085cu: goto label_23085c;
        case 0x230860u: goto label_230860;
        case 0x230864u: goto label_230864;
        case 0x230868u: goto label_230868;
        case 0x23086cu: goto label_23086c;
        case 0x230870u: goto label_230870;
        case 0x230874u: goto label_230874;
        case 0x230878u: goto label_230878;
        case 0x23087cu: goto label_23087c;
        case 0x230880u: goto label_230880;
        case 0x230884u: goto label_230884;
        case 0x230888u: goto label_230888;
        case 0x23088cu: goto label_23088c;
        case 0x230890u: goto label_230890;
        case 0x230894u: goto label_230894;
        case 0x230898u: goto label_230898;
        case 0x23089cu: goto label_23089c;
        case 0x2308a0u: goto label_2308a0;
        case 0x2308a4u: goto label_2308a4;
        case 0x2308a8u: goto label_2308a8;
        case 0x2308acu: goto label_2308ac;
        case 0x2308b0u: goto label_2308b0;
        case 0x2308b4u: goto label_2308b4;
        case 0x2308b8u: goto label_2308b8;
        case 0x2308bcu: goto label_2308bc;
        case 0x2308c0u: goto label_2308c0;
        case 0x2308c4u: goto label_2308c4;
        case 0x2308c8u: goto label_2308c8;
        case 0x2308ccu: goto label_2308cc;
        case 0x2308d0u: goto label_2308d0;
        case 0x2308d4u: goto label_2308d4;
        case 0x2308d8u: goto label_2308d8;
        case 0x2308dcu: goto label_2308dc;
        case 0x2308e0u: goto label_2308e0;
        case 0x2308e4u: goto label_2308e4;
        case 0x2308e8u: goto label_2308e8;
        case 0x2308ecu: goto label_2308ec;
        case 0x2308f0u: goto label_2308f0;
        case 0x2308f4u: goto label_2308f4;
        case 0x2308f8u: goto label_2308f8;
        case 0x2308fcu: goto label_2308fc;
        case 0x230900u: goto label_230900;
        case 0x230904u: goto label_230904;
        case 0x230908u: goto label_230908;
        case 0x23090cu: goto label_23090c;
        case 0x230910u: goto label_230910;
        case 0x230914u: goto label_230914;
        case 0x230918u: goto label_230918;
        case 0x23091cu: goto label_23091c;
        case 0x230920u: goto label_230920;
        case 0x230924u: goto label_230924;
        case 0x230928u: goto label_230928;
        case 0x23092cu: goto label_23092c;
        default: break;
    }

    ctx->pc = 0x230740u;

label_230740:
    // 0x230740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x230740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_230744:
    // 0x230744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230748:
    // 0x230748: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x230748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_23074c:
    // 0x23074c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_230750:
    // 0x230750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_230754:
    // 0x230754: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x230754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_230758:
    // 0x230758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23075c:
    // 0x23075c: 0xc087b0e  jal         func_21EC38
label_230760:
    if (ctx->pc == 0x230760u) {
        ctx->pc = 0x230760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23075Cu;
        // 0x230760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230764u;
        goto label_230764;
    }
    ctx->pc = 0x23075Cu;
    SET_GPR_U32(ctx, 31, 0x230764u);
    ctx->pc = 0x230760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23075Cu;
    // 0x230760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x23075Cu, 0x230764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230764u;
label_230764:
    // 0x230764: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x230764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_230768:
    // 0x230768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23076c:
    if (ctx->pc == 0x23076Cu) {
        ctx->pc = 0x23076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230768u;
        // 0x23076c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230770u;
        goto label_230770;
    }
    ctx->pc = 0x230768u;
    {
        const bool branch_taken_0x230768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230768u;
        // 0x23076c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230768) {
            ctx->pc = 0x23077Cu;
            goto label_23077c;
        }
    }
    ctx->pc = 0x230770u;
label_230770:
    // 0x230770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230774:
    // 0x230774: 0xc08985a  jal         func_226168
label_230778:
    if (ctx->pc == 0x230778u) {
        ctx->pc = 0x230778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230774u;
        // 0x230778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23077Cu;
        goto label_23077c;
    }
    ctx->pc = 0x230774u;
    SET_GPR_U32(ctx, 31, 0x23077Cu);
    ctx->pc = 0x230778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230774u;
    // 0x230778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226168u, 0x230774u, 0x23077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23077Cu;
label_23077c:
    // 0x23077c: 0xc0899e8  jal         func_2267A0
label_230780:
    if (ctx->pc == 0x230780u) {
        ctx->pc = 0x230780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23077Cu;
        // 0x230780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230784u;
        goto label_230784;
    }
    ctx->pc = 0x23077Cu;
    SET_GPR_U32(ctx, 31, 0x230784u);
    ctx->pc = 0x230780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23077Cu;
    // 0x230780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x23077Cu, 0x230784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230784u;
label_230784:
    // 0x230784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x230784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230788:
    // 0x230788: 0xc08a61a  jal         func_229868
label_23078c:
    if (ctx->pc == 0x23078Cu) {
        ctx->pc = 0x23078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230788u;
        // 0x23078c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230790u;
        goto label_230790;
    }
    ctx->pc = 0x230788u;
    SET_GPR_U32(ctx, 31, 0x230790u);
    ctx->pc = 0x23078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230788u;
    // 0x23078c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x230788u, 0x230790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230790u;
label_230790:
    // 0x230790: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_230794:
    if (ctx->pc == 0x230794u) {
        ctx->pc = 0x230794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230790u;
        // 0x230794: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230798u;
        goto label_230798;
    }
    ctx->pc = 0x230790u;
    {
        const bool branch_taken_0x230790 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x230794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230790u;
        // 0x230794: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230790) {
            ctx->pc = 0x2307A4u;
            goto label_2307a4;
        }
    }
    ctx->pc = 0x230798u;
label_230798:
    // 0x230798: 0xc08a196  jal         func_228658
label_23079c:
    if (ctx->pc == 0x23079Cu) {
        ctx->pc = 0x23079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230798u;
        // 0x23079c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307A0u;
        goto label_2307a0;
    }
    ctx->pc = 0x230798u;
    SET_GPR_U32(ctx, 31, 0x2307A0u);
    ctx->pc = 0x23079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230798u;
    // 0x23079c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228658u, 0x230798u, 0x2307A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307A0u;
label_2307a0:
    // 0x2307a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2307a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2307a4:
    // 0x2307a4: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_2307a8:
    if (ctx->pc == 0x2307A8u) {
        ctx->pc = 0x2307ACu;
        goto label_2307ac;
    }
    ctx->pc = 0x2307A4u;
    {
        const bool branch_taken_0x2307a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2307a4) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x2307ACu;
label_2307ac:
    // 0x2307ac: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2307acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2307b0:
    // 0x2307b0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2307b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2307b4:
    // 0x2307b4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2307b8:
    if (ctx->pc == 0x2307B8u) {
        ctx->pc = 0x2307BCu;
        goto label_2307bc;
    }
    ctx->pc = 0x2307B4u;
    {
        const bool branch_taken_0x2307b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2307b4) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x2307BCu;
label_2307bc:
    // 0x2307bc: 0xc087502  jal         func_21D408
label_2307c0:
    if (ctx->pc == 0x2307C0u) {
        ctx->pc = 0x2307C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307BCu;
        // 0x2307c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307C4u;
        goto label_2307c4;
    }
    ctx->pc = 0x2307BCu;
    SET_GPR_U32(ctx, 31, 0x2307C4u);
    ctx->pc = 0x2307C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307BCu;
    // 0x2307c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2307BCu, 0x2307C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307C4u;
label_2307c4:
    // 0x2307c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2307c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2307c8:
    // 0x2307c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2307c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2307cc:
    // 0x2307cc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2307d0:
    if (ctx->pc == 0x2307D0u) {
        ctx->pc = 0x2307D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307CCu;
        // 0x2307d0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307D4u;
        goto label_2307d4;
    }
    ctx->pc = 0x2307CCu;
    {
        const bool branch_taken_0x2307cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2307D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307CCu;
        // 0x2307d0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307cc) {
            ctx->pc = 0x230808u;
            goto label_230808;
        }
    }
    ctx->pc = 0x2307D4u;
label_2307d4:
    // 0x2307d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2307d8:
    if (ctx->pc == 0x2307D8u) {
        ctx->pc = 0x2307D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307D4u;
        // 0x2307d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307DCu;
        goto label_2307dc;
    }
    ctx->pc = 0x2307D4u;
    {
        const bool branch_taken_0x2307d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307D4u;
        // 0x2307d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307d4) {
            ctx->pc = 0x2307ECu;
            goto label_2307ec;
        }
    }
    ctx->pc = 0x2307DCu;
label_2307dc:
    // 0x2307dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_2307e0:
    if (ctx->pc == 0x2307E0u) {
        ctx->pc = 0x2307E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307DCu;
        // 0x2307e0: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307E4u;
        goto label_2307e4;
    }
    ctx->pc = 0x2307DCu;
    {
        const bool branch_taken_0x2307dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2307E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307DCu;
        // 0x2307e0: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307dc) {
            ctx->pc = 0x230868u;
            goto label_230868;
        }
    }
    ctx->pc = 0x2307E4u;
label_2307e4:
    // 0x2307e4: 0x10000028  b           . + 4 + (0x28 << 2)
label_2307e8:
    if (ctx->pc == 0x2307E8u) {
        ctx->pc = 0x2307ECu;
        goto label_2307ec;
    }
    ctx->pc = 0x2307E4u;
    {
        const bool branch_taken_0x2307e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2307e4) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x2307ECu;
label_2307ec:
    // 0x2307ec: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2307ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2307f0:
    // 0x2307f0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2307f4:
    if (ctx->pc == 0x2307F4u) {
        ctx->pc = 0x2307F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307F0u;
        // 0x2307f4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307F8u;
        goto label_2307f8;
    }
    ctx->pc = 0x2307F0u;
    {
        const bool branch_taken_0x2307f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307F0u;
        // 0x2307f4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307f0) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x2307F8u;
label_2307f8:
    // 0x2307f8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2307fc:
    if (ctx->pc == 0x2307FCu) {
        ctx->pc = 0x2307FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307F8u;
        // 0x2307fc: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230800u;
        goto label_230800;
    }
    ctx->pc = 0x2307F8u;
    {
        const bool branch_taken_0x2307f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2307FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307F8u;
        // 0x2307fc: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307f8) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230800u;
label_230800:
    // 0x230800: 0x1000001a  b           . + 4 + (0x1A << 2)
label_230804:
    if (ctx->pc == 0x230804u) {
        ctx->pc = 0x230804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230800u;
        // 0x230804: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230808u;
        goto label_230808;
    }
    ctx->pc = 0x230800u;
    {
        const bool branch_taken_0x230800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230800u;
        // 0x230804: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230800) {
            ctx->pc = 0x23086Cu;
            goto label_23086c;
        }
    }
    ctx->pc = 0x230808u;
label_230808:
    // 0x230808: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_23080c:
    // 0x23080c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23080cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230810:
    // 0x230810: 0x2453e490  addiu       $s3, $v0, -0x1B70
    ctx->pc = 0x230810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960272));
label_230814:
    // 0x230814: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x230814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_230818:
    // 0x230818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23081c:
    // 0x23081c: 0xc13b632  jal         func_4ED8C8
label_230820:
    if (ctx->pc == 0x230820u) {
        ctx->pc = 0x230820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23081Cu;
        // 0x230820: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230824u;
        goto label_230824;
    }
    ctx->pc = 0x23081Cu;
    SET_GPR_U32(ctx, 31, 0x230824u);
    ctx->pc = 0x230820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23081Cu;
    // 0x230820: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x23081Cu, 0x230824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230824u;
label_230824:
    // 0x230824: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x230824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_230828:
    // 0x230828: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_23082c:
    // 0x23082c: 0x8c440158  lw          $a0, 0x158($v0)
    ctx->pc = 0x23082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_230830:
    // 0x230830: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_230834:
    if (ctx->pc == 0x230834u) {
        ctx->pc = 0x230838u;
        goto label_230838;
    }
    ctx->pc = 0x230830u;
    {
        const bool branch_taken_0x230830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x230830) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230838u;
label_230838:
    // 0x230838: 0xc08a200  jal         func_228800
label_23083c:
    if (ctx->pc == 0x23083Cu) {
        ctx->pc = 0x23083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230838u;
        // 0x23083c: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230840u;
        goto label_230840;
    }
    ctx->pc = 0x230838u;
    SET_GPR_U32(ctx, 31, 0x230840u);
    ctx->pc = 0x23083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230838u;
    // 0x23083c: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x230838u, 0x230840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230840u;
label_230840:
    // 0x230840: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x230840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_230844:
    // 0x230844: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x230844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_230848:
    // 0x230848: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_23084c:
    if (ctx->pc == 0x23084Cu) {
        ctx->pc = 0x23084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230848u;
        // 0x23084c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230850u;
        goto label_230850;
    }
    ctx->pc = 0x230848u;
    {
        const bool branch_taken_0x230848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230848u;
        // 0x23084c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230848) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230850u;
label_230850:
    // 0x230850: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_230854:
    // 0x230854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230858:
    // 0x230858: 0xc13b642  jal         func_4ED908
label_23085c:
    if (ctx->pc == 0x23085Cu) {
        ctx->pc = 0x23085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230858u;
        // 0x23085c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230860u;
        goto label_230860;
    }
    ctx->pc = 0x230858u;
    SET_GPR_U32(ctx, 31, 0x230860u);
    ctx->pc = 0x23085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230858u;
    // 0x23085c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED908u, 0x230858u, 0x230860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230860u;
label_230860:
    // 0x230860: 0x10000009  b           . + 4 + (0x9 << 2)
label_230864:
    if (ctx->pc == 0x230864u) {
        ctx->pc = 0x230868u;
        goto label_230868;
    }
    ctx->pc = 0x230860u;
    {
        const bool branch_taken_0x230860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230860) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230868u;
label_230868:
    // 0x230868: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_23086c:
    // 0x23086c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230870:
    // 0x230870: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x230870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_230874:
    // 0x230874: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x230874u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_230878:
    // 0x230878: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x230878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_23087c:
    // 0x23087c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23087cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230880:
    // 0x230880: 0xc13b652  jal         func_4ED948
label_230884:
    if (ctx->pc == 0x230884u) {
        ctx->pc = 0x230884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230880u;
        // 0x230884: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230888u;
        goto label_230888;
    }
    ctx->pc = 0x230880u;
    SET_GPR_U32(ctx, 31, 0x230888u);
    ctx->pc = 0x230884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230880u;
    // 0x230884: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x230880u, 0x230888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230888u;
label_230888:
    // 0x230888: 0xc087502  jal         func_21D408
label_23088c:
    if (ctx->pc == 0x23088Cu) {
        ctx->pc = 0x23088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230888u;
        // 0x23088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230890u;
        goto label_230890;
    }
    ctx->pc = 0x230888u;
    SET_GPR_U32(ctx, 31, 0x230890u);
    ctx->pc = 0x23088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230888u;
    // 0x23088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x230888u, 0x230890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230890u;
label_230890:
    // 0x230890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x230890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230894:
    // 0x230894: 0xc0a313e  jal         func_28C4F8
label_230898:
    if (ctx->pc == 0x230898u) {
        ctx->pc = 0x230898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230894u;
        // 0x230898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23089Cu;
        goto label_23089c;
    }
    ctx->pc = 0x230894u;
    SET_GPR_U32(ctx, 31, 0x23089Cu);
    ctx->pc = 0x230898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230894u;
    // 0x230898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C4F8u, 0x230894u, 0x23089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23089Cu;
label_23089c:
    // 0x23089c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2308a0:
    // 0x2308a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2308a4:
    // 0x2308a4: 0x24510840  addiu       $s1, $v0, 0x840
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_2308a8:
    // 0x2308a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2308a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2308ac:
    // 0x2308ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2308acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2308b0:
    // 0x2308b0: 0x40f809  jalr        $v0
label_2308b4:
    if (ctx->pc == 0x2308B4u) {
        ctx->pc = 0x2308B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308B0u;
        // 0x2308b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308B8u;
        goto label_2308b8;
    }
    ctx->pc = 0x2308B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2308B8u);
        ctx->pc = 0x2308B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308B0u;
        // 0x2308b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308B0u, 0x2308B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2308B8u;
label_2308b8:
    // 0x2308b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2308b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2308bc:
    // 0x2308bc: 0x262415d0  addiu       $a0, $s1, 0x15D0
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
label_2308c0:
    // 0x2308c0: 0xc071462  jal         func_1C5188
label_2308c4:
    if (ctx->pc == 0x2308C4u) {
        ctx->pc = 0x2308C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308C0u;
        // 0x2308c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308C8u;
        goto label_2308c8;
    }
    ctx->pc = 0x2308C0u;
    SET_GPR_U32(ctx, 31, 0x2308C8u);
    ctx->pc = 0x2308C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308C0u;
    // 0x2308c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2308C0u, 0x2308C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308C8u;
label_2308c8:
    // 0x2308c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2308c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2308cc:
    // 0x2308cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2308d0:
    if (ctx->pc == 0x2308D0u) {
        ctx->pc = 0x2308D4u;
        goto label_2308d4;
    }
    ctx->pc = 0x2308CCu;
    {
        const bool branch_taken_0x2308cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2308cc) {
            ctx->pc = 0x2308F4u;
            goto label_2308f4;
        }
    }
    ctx->pc = 0x2308D4u;
label_2308d4:
    // 0x2308d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2308d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2308d8:
    // 0x2308d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2308d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2308dc:
    // 0x2308dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2308e0:
    // 0x2308e0: 0x40f809  jalr        $v0
label_2308e4:
    if (ctx->pc == 0x2308E4u) {
        ctx->pc = 0x2308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E0u;
        // 0x2308e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308E8u;
        goto label_2308e8;
    }
    ctx->pc = 0x2308E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2308E8u);
        ctx->pc = 0x2308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E0u;
        // 0x2308e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308E0u, 0x2308E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2308E8u;
label_2308e8:
    // 0x2308e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2308e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2308ec:
    // 0x2308ec: 0xc06cad6  jal         func_1B2B58
label_2308f0:
    if (ctx->pc == 0x2308F0u) {
        ctx->pc = 0x2308F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308ECu;
        // 0x2308f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308F4u;
        goto label_2308f4;
    }
    ctx->pc = 0x2308ECu;
    SET_GPR_U32(ctx, 31, 0x2308F4u);
    ctx->pc = 0x2308F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308ECu;
    // 0x2308f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x2308ECu, 0x2308F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308F4u;
label_2308f4:
    // 0x2308f4: 0xc0e4060  jal         func_390180
label_2308f8:
    if (ctx->pc == 0x2308F8u) {
        ctx->pc = 0x2308F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308F4u;
        // 0x2308f8: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308FCu;
        goto label_2308fc;
    }
    ctx->pc = 0x2308F4u;
    SET_GPR_U32(ctx, 31, 0x2308FCu);
    ctx->pc = 0x2308F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308F4u;
    // 0x2308f8: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2308F4u, 0x2308FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308FCu;
label_2308fc:
    // 0x2308fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_230900:
    if (ctx->pc == 0x230900u) {
        ctx->pc = 0x230900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308FCu;
        // 0x230900: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230904u;
        goto label_230904;
    }
    ctx->pc = 0x2308FCu;
    {
        const bool branch_taken_0x2308fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2308fc) {
            ctx->pc = 0x230900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2308FCu;
            // 0x230900: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230910u;
            goto label_230910;
        }
    }
    ctx->pc = 0x230904u;
label_230904:
    // 0x230904: 0xc089ce2  jal         func_227388
label_230908:
    if (ctx->pc == 0x230908u) {
        ctx->pc = 0x230908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230904u;
        // 0x230908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23090Cu;
        goto label_23090c;
    }
    ctx->pc = 0x230904u;
    SET_GPR_U32(ctx, 31, 0x23090Cu);
    ctx->pc = 0x230908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230904u;
    // 0x230908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x230904u, 0x23090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23090Cu;
label_23090c:
    // 0x23090c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23090cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_230910:
    // 0x230910: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x230910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230914:
    // 0x230914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x230914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230918:
    // 0x230918: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x230918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23091c:
    // 0x23091c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230920:
    // 0x230920: 0x3e00008  jr          $ra
label_230924:
    if (ctx->pc == 0x230924u) {
        ctx->pc = 0x230924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230920u;
        // 0x230924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230928u;
        goto label_230928;
    }
    ctx->pc = 0x230920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230920u;
        // 0x230924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230928u;
label_230928:
    // 0x230928: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x230928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23092c:
    // 0x23092c: 0x0  nop
    ctx->pc = 0x23092cu;
    // NOP
    ctx->pc = 0x230930u;
}
