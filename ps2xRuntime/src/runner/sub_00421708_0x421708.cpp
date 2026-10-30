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

// Function: sub_00421708
// Address: 0x421708 - 0x4219d0
void sub_00421708_0x421708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421708_0x421708");
#endif

    switch (ctx->pc) {
        case 0x421708u: goto label_421708;
        case 0x42170cu: goto label_42170c;
        case 0x421710u: goto label_421710;
        case 0x421714u: goto label_421714;
        case 0x421718u: goto label_421718;
        case 0x42171cu: goto label_42171c;
        case 0x421720u: goto label_421720;
        case 0x421724u: goto label_421724;
        case 0x421728u: goto label_421728;
        case 0x42172cu: goto label_42172c;
        case 0x421730u: goto label_421730;
        case 0x421734u: goto label_421734;
        case 0x421738u: goto label_421738;
        case 0x42173cu: goto label_42173c;
        case 0x421740u: goto label_421740;
        case 0x421744u: goto label_421744;
        case 0x421748u: goto label_421748;
        case 0x42174cu: goto label_42174c;
        case 0x421750u: goto label_421750;
        case 0x421754u: goto label_421754;
        case 0x421758u: goto label_421758;
        case 0x42175cu: goto label_42175c;
        case 0x421760u: goto label_421760;
        case 0x421764u: goto label_421764;
        case 0x421768u: goto label_421768;
        case 0x42176cu: goto label_42176c;
        case 0x421770u: goto label_421770;
        case 0x421774u: goto label_421774;
        case 0x421778u: goto label_421778;
        case 0x42177cu: goto label_42177c;
        case 0x421780u: goto label_421780;
        case 0x421784u: goto label_421784;
        case 0x421788u: goto label_421788;
        case 0x42178cu: goto label_42178c;
        case 0x421790u: goto label_421790;
        case 0x421794u: goto label_421794;
        case 0x421798u: goto label_421798;
        case 0x42179cu: goto label_42179c;
        case 0x4217a0u: goto label_4217a0;
        case 0x4217a4u: goto label_4217a4;
        case 0x4217a8u: goto label_4217a8;
        case 0x4217acu: goto label_4217ac;
        case 0x4217b0u: goto label_4217b0;
        case 0x4217b4u: goto label_4217b4;
        case 0x4217b8u: goto label_4217b8;
        case 0x4217bcu: goto label_4217bc;
        case 0x4217c0u: goto label_4217c0;
        case 0x4217c4u: goto label_4217c4;
        case 0x4217c8u: goto label_4217c8;
        case 0x4217ccu: goto label_4217cc;
        case 0x4217d0u: goto label_4217d0;
        case 0x4217d4u: goto label_4217d4;
        case 0x4217d8u: goto label_4217d8;
        case 0x4217dcu: goto label_4217dc;
        case 0x4217e0u: goto label_4217e0;
        case 0x4217e4u: goto label_4217e4;
        case 0x4217e8u: goto label_4217e8;
        case 0x4217ecu: goto label_4217ec;
        case 0x4217f0u: goto label_4217f0;
        case 0x4217f4u: goto label_4217f4;
        case 0x4217f8u: goto label_4217f8;
        case 0x4217fcu: goto label_4217fc;
        case 0x421800u: goto label_421800;
        case 0x421804u: goto label_421804;
        case 0x421808u: goto label_421808;
        case 0x42180cu: goto label_42180c;
        case 0x421810u: goto label_421810;
        case 0x421814u: goto label_421814;
        case 0x421818u: goto label_421818;
        case 0x42181cu: goto label_42181c;
        case 0x421820u: goto label_421820;
        case 0x421824u: goto label_421824;
        case 0x421828u: goto label_421828;
        case 0x42182cu: goto label_42182c;
        case 0x421830u: goto label_421830;
        case 0x421834u: goto label_421834;
        case 0x421838u: goto label_421838;
        case 0x42183cu: goto label_42183c;
        case 0x421840u: goto label_421840;
        case 0x421844u: goto label_421844;
        case 0x421848u: goto label_421848;
        case 0x42184cu: goto label_42184c;
        case 0x421850u: goto label_421850;
        case 0x421854u: goto label_421854;
        case 0x421858u: goto label_421858;
        case 0x42185cu: goto label_42185c;
        case 0x421860u: goto label_421860;
        case 0x421864u: goto label_421864;
        case 0x421868u: goto label_421868;
        case 0x42186cu: goto label_42186c;
        case 0x421870u: goto label_421870;
        case 0x421874u: goto label_421874;
        case 0x421878u: goto label_421878;
        case 0x42187cu: goto label_42187c;
        case 0x421880u: goto label_421880;
        case 0x421884u: goto label_421884;
        case 0x421888u: goto label_421888;
        case 0x42188cu: goto label_42188c;
        case 0x421890u: goto label_421890;
        case 0x421894u: goto label_421894;
        case 0x421898u: goto label_421898;
        case 0x42189cu: goto label_42189c;
        case 0x4218a0u: goto label_4218a0;
        case 0x4218a4u: goto label_4218a4;
        case 0x4218a8u: goto label_4218a8;
        case 0x4218acu: goto label_4218ac;
        case 0x4218b0u: goto label_4218b0;
        case 0x4218b4u: goto label_4218b4;
        case 0x4218b8u: goto label_4218b8;
        case 0x4218bcu: goto label_4218bc;
        case 0x4218c0u: goto label_4218c0;
        case 0x4218c4u: goto label_4218c4;
        case 0x4218c8u: goto label_4218c8;
        case 0x4218ccu: goto label_4218cc;
        case 0x4218d0u: goto label_4218d0;
        case 0x4218d4u: goto label_4218d4;
        case 0x4218d8u: goto label_4218d8;
        case 0x4218dcu: goto label_4218dc;
        case 0x4218e0u: goto label_4218e0;
        case 0x4218e4u: goto label_4218e4;
        case 0x4218e8u: goto label_4218e8;
        case 0x4218ecu: goto label_4218ec;
        case 0x4218f0u: goto label_4218f0;
        case 0x4218f4u: goto label_4218f4;
        case 0x4218f8u: goto label_4218f8;
        case 0x4218fcu: goto label_4218fc;
        case 0x421900u: goto label_421900;
        case 0x421904u: goto label_421904;
        case 0x421908u: goto label_421908;
        case 0x42190cu: goto label_42190c;
        case 0x421910u: goto label_421910;
        case 0x421914u: goto label_421914;
        case 0x421918u: goto label_421918;
        case 0x42191cu: goto label_42191c;
        case 0x421920u: goto label_421920;
        case 0x421924u: goto label_421924;
        case 0x421928u: goto label_421928;
        case 0x42192cu: goto label_42192c;
        case 0x421930u: goto label_421930;
        case 0x421934u: goto label_421934;
        case 0x421938u: goto label_421938;
        case 0x42193cu: goto label_42193c;
        case 0x421940u: goto label_421940;
        case 0x421944u: goto label_421944;
        case 0x421948u: goto label_421948;
        case 0x42194cu: goto label_42194c;
        case 0x421950u: goto label_421950;
        case 0x421954u: goto label_421954;
        case 0x421958u: goto label_421958;
        case 0x42195cu: goto label_42195c;
        case 0x421960u: goto label_421960;
        case 0x421964u: goto label_421964;
        case 0x421968u: goto label_421968;
        case 0x42196cu: goto label_42196c;
        case 0x421970u: goto label_421970;
        case 0x421974u: goto label_421974;
        case 0x421978u: goto label_421978;
        case 0x42197cu: goto label_42197c;
        case 0x421980u: goto label_421980;
        case 0x421984u: goto label_421984;
        case 0x421988u: goto label_421988;
        case 0x42198cu: goto label_42198c;
        case 0x421990u: goto label_421990;
        case 0x421994u: goto label_421994;
        case 0x421998u: goto label_421998;
        case 0x42199cu: goto label_42199c;
        case 0x4219a0u: goto label_4219a0;
        case 0x4219a4u: goto label_4219a4;
        case 0x4219a8u: goto label_4219a8;
        case 0x4219acu: goto label_4219ac;
        case 0x4219b0u: goto label_4219b0;
        case 0x4219b4u: goto label_4219b4;
        case 0x4219b8u: goto label_4219b8;
        case 0x4219bcu: goto label_4219bc;
        case 0x4219c0u: goto label_4219c0;
        case 0x4219c4u: goto label_4219c4;
        case 0x4219c8u: goto label_4219c8;
        case 0x4219ccu: goto label_4219cc;
        default: break;
    }

    ctx->pc = 0x421708u;

label_421708:
    // 0x421708: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x421708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_42170c:
    // 0x42170c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x42170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_421710:
    // 0x421710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x421710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421714:
    // 0x421714: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x421714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_421718:
    // 0x421718: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x421718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_42171c:
    // 0x42171c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x42171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_421720:
    // 0x421720: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x421720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_421724:
    // 0x421724: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x421724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_421728:
    // 0x421728: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x421728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42172c:
    // 0x42172c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x42172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_421730:
    // 0x421730: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x421730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_421734:
    // 0x421734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x421734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_421738:
    // 0x421738: 0xc10858e  jal         func_421638
label_42173c:
    if (ctx->pc == 0x42173Cu) {
        ctx->pc = 0x42173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421738u;
        // 0x42173c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421740u;
        goto label_421740;
    }
    ctx->pc = 0x421738u;
    SET_GPR_U32(ctx, 31, 0x421740u);
    ctx->pc = 0x42173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421738u;
    // 0x42173c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421638u, 0x421738u, 0x421740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421740u;
label_421740:
    // 0x421740: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x421740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_421744:
    // 0x421744: 0xc108c80  jal         func_423200
label_421748:
    if (ctx->pc == 0x421748u) {
        ctx->pc = 0x421748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421744u;
        // 0x421748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42174Cu;
        goto label_42174c;
    }
    ctx->pc = 0x421744u;
    SET_GPR_U32(ctx, 31, 0x42174Cu);
    ctx->pc = 0x421748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421744u;
    // 0x421748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423200u, 0x421744u, 0x42174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42174Cu;
label_42174c:
    // 0x42174c: 0xc109288  jal         func_424A20
label_421750:
    if (ctx->pc == 0x421750u) {
        ctx->pc = 0x421750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42174Cu;
        // 0x421750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421754u;
        goto label_421754;
    }
    ctx->pc = 0x42174Cu;
    SET_GPR_U32(ctx, 31, 0x421754u);
    ctx->pc = 0x421750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42174Cu;
    // 0x421750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424A20u, 0x42174Cu, 0x421754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421754u;
label_421754:
    // 0x421754: 0xc080bf0  jal         func_202FC0
label_421758:
    if (ctx->pc == 0x421758u) {
        ctx->pc = 0x421758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421754u;
        // 0x421758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42175Cu;
        goto label_42175c;
    }
    ctx->pc = 0x421754u;
    SET_GPR_U32(ctx, 31, 0x42175Cu);
    ctx->pc = 0x421758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421754u;
    // 0x421758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202FC0u, 0x421754u, 0x42175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42175Cu;
label_42175c:
    // 0x42175c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x42175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_421760:
    // 0x421760: 0xc1078ea  jal         func_41E3A8
label_421764:
    if (ctx->pc == 0x421764u) {
        ctx->pc = 0x421764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421760u;
        // 0x421764: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421768u;
        goto label_421768;
    }
    ctx->pc = 0x421760u;
    SET_GPR_U32(ctx, 31, 0x421768u);
    ctx->pc = 0x421764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421760u;
    // 0x421764: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3A8u, 0x421760u, 0x421768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421768u;
label_421768:
    // 0x421768: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42176c:
    // 0x42176c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42176cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421770:
    // 0x421770: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x421770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_421774:
    // 0x421774: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421778:
    // 0x421778: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x421778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_42177c:
    // 0x42177c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x42177cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_421780:
    // 0x421780: 0x40f809  jalr        $v0
label_421784:
    if (ctx->pc == 0x421784u) {
        ctx->pc = 0x421784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421780u;
        // 0x421784: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421788u;
        goto label_421788;
    }
    ctx->pc = 0x421780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421788u);
        ctx->pc = 0x421784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421780u;
        // 0x421784: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421780u, 0x421788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421788u;
label_421788:
    // 0x421788: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42178c:
    // 0x42178c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x42178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_421790:
    // 0x421790: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x421790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_421794:
    // 0x421794: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x421794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_421798:
    // 0x421798: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x421798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_42179c:
    // 0x42179c: 0x24a557a0  addiu       $a1, $a1, 0x57A0
    ctx->pc = 0x42179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22432));
label_4217a0:
    // 0x4217a0: 0x40f809  jalr        $v0
label_4217a4:
    if (ctx->pc == 0x4217A4u) {
        ctx->pc = 0x4217A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4217A0u;
        // 0x4217a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4217A8u;
        goto label_4217a8;
    }
    ctx->pc = 0x4217A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4217A8u);
        ctx->pc = 0x4217A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4217A0u;
        // 0x4217a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4217A0u, 0x4217A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4217A8u;
label_4217a8:
    // 0x4217a8: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x4217a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4217ac:
    // 0x4217ac: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4217acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4217b0:
    // 0x4217b0: 0x8ea2489c  lw          $v0, 0x489C($s5)
    ctx->pc = 0x4217b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_4217b4:
    // 0x4217b4: 0x0  nop
    ctx->pc = 0x4217b4u;
    // NOP
label_4217b8:
    // 0x4217b8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x4217b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4217bc:
    // 0x4217bc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4217bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4217c0:
    // 0x4217c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4217c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4217c4:
    // 0x4217c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4217c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4217c8:
    // 0x4217c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4217c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4217cc:
    // 0x4217cc: 0x8c430440  lw          $v1, 0x440($v0)
    ctx->pc = 0x4217ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
label_4217d0:
    // 0x4217d0: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x4217d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_4217d4:
    // 0x4217d4: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x4217d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_4217d8:
    // 0x4217d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4217d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4217dc:
    // 0x4217dc: 0x40f809  jalr        $v0
label_4217e0:
    if (ctx->pc == 0x4217E0u) {
        ctx->pc = 0x4217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4217DCu;
        // 0x4217e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4217E4u;
        goto label_4217e4;
    }
    ctx->pc = 0x4217DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4217E4u);
        ctx->pc = 0x4217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4217DCu;
        // 0x4217e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4217DCu, 0x4217E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4217E4u;
label_4217e4:
    // 0x4217e4: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x4217e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_4217e8:
    // 0x4217e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4217e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4217ec:
    // 0x4217ec: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4217ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4217f0:
    // 0x4217f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4217f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4217f4:
    // 0x4217f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4217f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4217f8:
    // 0x4217f8: 0x8c620448  lw          $v0, 0x448($v1)
    ctx->pc = 0x4217f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1096)));
label_4217fc:
    // 0x4217fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4217fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_421800:
    // 0x421800: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x421800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_421804:
    // 0x421804: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x421804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_421808:
    // 0x421808: 0x40f809  jalr        $v0
label_42180c:
    if (ctx->pc == 0x42180Cu) {
        ctx->pc = 0x42180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421808u;
        // 0x42180c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421810u;
        goto label_421810;
    }
    ctx->pc = 0x421808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421810u);
        ctx->pc = 0x42180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421808u;
        // 0x42180c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421808u, 0x421810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421810u;
label_421810:
    // 0x421810: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x421810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_421814:
    // 0x421814: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x421814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421818:
    // 0x421818: 0xc106900  jal         func_41A400
label_42181c:
    if (ctx->pc == 0x42181Cu) {
        ctx->pc = 0x42181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421818u;
        // 0x42181c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421820u;
        goto label_421820;
    }
    ctx->pc = 0x421818u;
    SET_GPR_U32(ctx, 31, 0x421820u);
    ctx->pc = 0x42181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421818u;
    // 0x42181c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A400u, 0x421818u, 0x421820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421820u;
label_421820:
    // 0x421820: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x421820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421824:
    // 0x421824: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x421824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421828:
    // 0x421828: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x421828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_42182c:
    // 0x42182c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x42182cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421830:
    // 0x421830: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x421830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_421834:
    // 0x421834: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x421834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_421838:
    // 0x421838: 0x60f809  jalr        $v1
label_42183c:
    if (ctx->pc == 0x42183Cu) {
        ctx->pc = 0x42183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421838u;
        // 0x42183c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421840u;
        goto label_421840;
    }
    ctx->pc = 0x421838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421840u);
        ctx->pc = 0x42183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421838u;
        // 0x42183c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421838u, 0x421840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421840u;
label_421840:
    // 0x421840: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x421840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_421844:
    // 0x421844: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_421848:
    if (ctx->pc == 0x421848u) {
        ctx->pc = 0x421848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421844u;
        // 0x421848: 0x8ea2489c  lw          $v0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42184Cu;
        goto label_42184c;
    }
    ctx->pc = 0x421844u;
    {
        const bool branch_taken_0x421844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421844u;
        // 0x421848: 0x8ea2489c  lw          $v0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421844) {
            ctx->pc = 0x4217B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4217b8;
        }
    }
    ctx->pc = 0x42184Cu;
label_42184c:
    // 0x42184c: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x42184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_421850:
    // 0x421850: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x421850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_421854:
    // 0x421854: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x421854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421858:
    // 0x421858: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42185c:
    // 0x42185c: 0x8c620450  lw          $v0, 0x450($v1)
    ctx->pc = 0x42185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
label_421860:
    // 0x421860: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x421860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_421864:
    // 0x421864: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x421864u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_421868:
    // 0x421868: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x421868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_42186c:
    // 0x42186c: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x42186cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_421870:
    // 0x421870: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x421870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_421874:
    // 0x421874: 0x40f809  jalr        $v0
label_421878:
    if (ctx->pc == 0x421878u) {
        ctx->pc = 0x421878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421874u;
        // 0x421878: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42187Cu;
        goto label_42187c;
    }
    ctx->pc = 0x421874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42187Cu);
        ctx->pc = 0x421878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421874u;
        // 0x421878: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421874u, 0x42187Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42187Cu;
label_42187c:
    // 0x42187c: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x42187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_421880:
    // 0x421880: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x421880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_421884:
    // 0x421884: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421888:
    // 0x421888: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42188c:
    // 0x42188c: 0x8c820438  lw          $v0, 0x438($a0)
    ctx->pc = 0x42188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1080)));
label_421890:
    // 0x421890: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x421890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_421894:
    // 0x421894: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x421894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_421898:
    // 0x421898: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x421898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_42189c:
    // 0x42189c: 0x40f809  jalr        $v0
label_4218a0:
    if (ctx->pc == 0x4218A0u) {
        ctx->pc = 0x4218A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42189Cu;
        // 0x4218a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4218A4u;
        goto label_4218a4;
    }
    ctx->pc = 0x42189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4218A4u);
        ctx->pc = 0x4218A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42189Cu;
        // 0x4218a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42189Cu, 0x4218A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4218A4u;
label_4218a4:
    // 0x4218a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4218a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4218a8:
    // 0x4218a8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4218a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4218ac:
    // 0x4218ac: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x4218acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_4218b0:
    // 0x4218b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4218b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4218b4:
    // 0x4218b4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4218b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4218b8:
    // 0x4218b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4218b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4218bc:
    // 0x4218bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4218bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4218c0:
    // 0x4218c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4218c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4218c4:
    // 0x4218c4: 0x8c827aa8  lw          $v0, 0x7AA8($a0)
    ctx->pc = 0x4218c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31400)));
label_4218c8:
    // 0x4218c8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4218c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4218cc:
    // 0x4218cc: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x4218ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_4218d0:
    // 0x4218d0: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x4218d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_4218d4:
    // 0x4218d4: 0x60f809  jalr        $v1
label_4218d8:
    if (ctx->pc == 0x4218D8u) {
        ctx->pc = 0x4218D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4218D4u;
        // 0x4218d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4218DCu;
        goto label_4218dc;
    }
    ctx->pc = 0x4218D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4218DCu);
        ctx->pc = 0x4218D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4218D4u;
        // 0x4218d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4218D4u, 0x4218DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4218DCu;
label_4218dc:
    // 0x4218dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4218dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4218e0:
    // 0x4218e0: 0x8c45cdb8  lw          $a1, -0x3248($v0)
    ctx->pc = 0x4218e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
label_4218e4:
    // 0x4218e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4218e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4218e8:
    // 0x4218e8: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x4218e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_4218ec:
    // 0x4218ec: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x4218ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_4218f0:
    // 0x4218f0: 0x40f809  jalr        $v0
label_4218f4:
    if (ctx->pc == 0x4218F4u) {
        ctx->pc = 0x4218F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4218F0u;
        // 0x4218f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4218F8u;
        goto label_4218f8;
    }
    ctx->pc = 0x4218F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4218F8u);
        ctx->pc = 0x4218F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4218F0u;
        // 0x4218f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4218F0u, 0x4218F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4218F8u;
label_4218f8:
    // 0x4218f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4218f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4218fc:
    // 0x4218fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4218fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_421900:
    // 0x421900: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x421900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_421904:
    // 0x421904: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421908:
    // 0x421908: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x421908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_42190c:
    // 0x42190c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x42190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_421910:
    // 0x421910: 0x40f809  jalr        $v0
label_421914:
    if (ctx->pc == 0x421914u) {
        ctx->pc = 0x421914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421910u;
        // 0x421914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421918u;
        goto label_421918;
    }
    ctx->pc = 0x421910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421918u);
        ctx->pc = 0x421914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421910u;
        // 0x421914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421910u, 0x421918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421918u;
label_421918:
    // 0x421918: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x421918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_42191c:
    // 0x42191c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42191cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421920:
    // 0x421920: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421924:
    // 0x421924: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421928:
    // 0x421928: 0x9082043c  lbu         $v0, 0x43C($a0)
    ctx->pc = 0x421928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1084)));
label_42192c:
    // 0x42192c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_421930:
    // 0x421930: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x421930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_421934:
    // 0x421934: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x421934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_421938:
    // 0x421938: 0x40f809  jalr        $v0
label_42193c:
    if (ctx->pc == 0x42193Cu) {
        ctx->pc = 0x42193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421938u;
        // 0x42193c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421940u;
        goto label_421940;
    }
    ctx->pc = 0x421938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421940u);
        ctx->pc = 0x42193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421938u;
        // 0x42193c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421938u, 0x421940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421940u;
label_421940:
    // 0x421940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421944:
    // 0x421944: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421948:
    // 0x421948: 0x8ec5489c  lw          $a1, 0x489C($s6)
    ctx->pc = 0x421948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_42194c:
    // 0x42194c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x42194cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_421950:
    // 0x421950: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x421950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_421954:
    // 0x421954: 0x40f809  jalr        $v0
label_421958:
    if (ctx->pc == 0x421958u) {
        ctx->pc = 0x421958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421954u;
        // 0x421958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42195Cu;
        goto label_42195c;
    }
    ctx->pc = 0x421954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42195Cu);
        ctx->pc = 0x421958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421954u;
        // 0x421958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421954u, 0x42195Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42195Cu;
label_42195c:
    // 0x42195c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421960:
    // 0x421960: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x421960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_421964:
    // 0x421964: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x421964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_421968:
    // 0x421968: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x421968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42196c:
    // 0x42196c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421970:
    // 0x421970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x421970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_421974:
    // 0x421974: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421978:
    // 0x421978: 0x8c62572c  lw          $v0, 0x572C($v1)
    ctx->pc = 0x421978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22316)));
label_42197c:
    // 0x42197c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42197cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_421980:
    // 0x421980: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x421980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_421984:
    // 0x421984: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x421984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_421988:
    // 0x421988: 0x60f809  jalr        $v1
label_42198c:
    if (ctx->pc == 0x42198Cu) {
        ctx->pc = 0x42198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421988u;
        // 0x42198c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421990u;
        goto label_421990;
    }
    ctx->pc = 0x421988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421990u);
        ctx->pc = 0x42198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421988u;
        // 0x42198c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421988u, 0x421990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421990u;
label_421990:
    // 0x421990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x421990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421994:
    // 0x421994: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x421994u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_421998:
    // 0x421998: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x421998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_42199c:
    // 0x42199c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_4219a0:
    if (ctx->pc == 0x4219A0u) {
        ctx->pc = 0x4219A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42199Cu;
        // 0x4219a0: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4219A4u;
        goto label_4219a4;
    }
    ctx->pc = 0x42199Cu;
    {
        const bool branch_taken_0x42199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4219A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42199Cu;
        // 0x4219a0: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42199c) {
            ctx->pc = 0x421960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421960;
        }
    }
    ctx->pc = 0x4219A4u;
label_4219a4:
    // 0x4219a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4219a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4219a8:
    // 0x4219a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4219a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4219ac:
    // 0x4219ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4219acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4219b0:
    // 0x4219b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4219b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4219b4:
    // 0x4219b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4219b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4219b8:
    // 0x4219b8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4219b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4219bc:
    // 0x4219bc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4219bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4219c0:
    // 0x4219c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4219c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4219c4:
    // 0x4219c4: 0x3e00008  jr          $ra
label_4219c8:
    if (ctx->pc == 0x4219C8u) {
        ctx->pc = 0x4219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4219C4u;
        // 0x4219c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4219CCu;
        goto label_4219cc;
    }
    ctx->pc = 0x4219C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4219C4u;
        // 0x4219c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4219C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4219CCu;
label_4219cc:
    // 0x4219cc: 0x0  nop
    ctx->pc = 0x4219ccu;
    // NOP
    ctx->pc = 0x4219d0u;
}
