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

// Function: sub_00404660
// Address: 0x404660 - 0x404b38
void sub_00404660_0x404660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00404660_0x404660");
#endif

    switch (ctx->pc) {
        case 0x404660u: goto label_404660;
        case 0x404664u: goto label_404664;
        case 0x404668u: goto label_404668;
        case 0x40466cu: goto label_40466c;
        case 0x404670u: goto label_404670;
        case 0x404674u: goto label_404674;
        case 0x404678u: goto label_404678;
        case 0x40467cu: goto label_40467c;
        case 0x404680u: goto label_404680;
        case 0x404684u: goto label_404684;
        case 0x404688u: goto label_404688;
        case 0x40468cu: goto label_40468c;
        case 0x404690u: goto label_404690;
        case 0x404694u: goto label_404694;
        case 0x404698u: goto label_404698;
        case 0x40469cu: goto label_40469c;
        case 0x4046a0u: goto label_4046a0;
        case 0x4046a4u: goto label_4046a4;
        case 0x4046a8u: goto label_4046a8;
        case 0x4046acu: goto label_4046ac;
        case 0x4046b0u: goto label_4046b0;
        case 0x4046b4u: goto label_4046b4;
        case 0x4046b8u: goto label_4046b8;
        case 0x4046bcu: goto label_4046bc;
        case 0x4046c0u: goto label_4046c0;
        case 0x4046c4u: goto label_4046c4;
        case 0x4046c8u: goto label_4046c8;
        case 0x4046ccu: goto label_4046cc;
        case 0x4046d0u: goto label_4046d0;
        case 0x4046d4u: goto label_4046d4;
        case 0x4046d8u: goto label_4046d8;
        case 0x4046dcu: goto label_4046dc;
        case 0x4046e0u: goto label_4046e0;
        case 0x4046e4u: goto label_4046e4;
        case 0x4046e8u: goto label_4046e8;
        case 0x4046ecu: goto label_4046ec;
        case 0x4046f0u: goto label_4046f0;
        case 0x4046f4u: goto label_4046f4;
        case 0x4046f8u: goto label_4046f8;
        case 0x4046fcu: goto label_4046fc;
        case 0x404700u: goto label_404700;
        case 0x404704u: goto label_404704;
        case 0x404708u: goto label_404708;
        case 0x40470cu: goto label_40470c;
        case 0x404710u: goto label_404710;
        case 0x404714u: goto label_404714;
        case 0x404718u: goto label_404718;
        case 0x40471cu: goto label_40471c;
        case 0x404720u: goto label_404720;
        case 0x404724u: goto label_404724;
        case 0x404728u: goto label_404728;
        case 0x40472cu: goto label_40472c;
        case 0x404730u: goto label_404730;
        case 0x404734u: goto label_404734;
        case 0x404738u: goto label_404738;
        case 0x40473cu: goto label_40473c;
        case 0x404740u: goto label_404740;
        case 0x404744u: goto label_404744;
        case 0x404748u: goto label_404748;
        case 0x40474cu: goto label_40474c;
        case 0x404750u: goto label_404750;
        case 0x404754u: goto label_404754;
        case 0x404758u: goto label_404758;
        case 0x40475cu: goto label_40475c;
        case 0x404760u: goto label_404760;
        case 0x404764u: goto label_404764;
        case 0x404768u: goto label_404768;
        case 0x40476cu: goto label_40476c;
        case 0x404770u: goto label_404770;
        case 0x404774u: goto label_404774;
        case 0x404778u: goto label_404778;
        case 0x40477cu: goto label_40477c;
        case 0x404780u: goto label_404780;
        case 0x404784u: goto label_404784;
        case 0x404788u: goto label_404788;
        case 0x40478cu: goto label_40478c;
        case 0x404790u: goto label_404790;
        case 0x404794u: goto label_404794;
        case 0x404798u: goto label_404798;
        case 0x40479cu: goto label_40479c;
        case 0x4047a0u: goto label_4047a0;
        case 0x4047a4u: goto label_4047a4;
        case 0x4047a8u: goto label_4047a8;
        case 0x4047acu: goto label_4047ac;
        case 0x4047b0u: goto label_4047b0;
        case 0x4047b4u: goto label_4047b4;
        case 0x4047b8u: goto label_4047b8;
        case 0x4047bcu: goto label_4047bc;
        case 0x4047c0u: goto label_4047c0;
        case 0x4047c4u: goto label_4047c4;
        case 0x4047c8u: goto label_4047c8;
        case 0x4047ccu: goto label_4047cc;
        case 0x4047d0u: goto label_4047d0;
        case 0x4047d4u: goto label_4047d4;
        case 0x4047d8u: goto label_4047d8;
        case 0x4047dcu: goto label_4047dc;
        case 0x4047e0u: goto label_4047e0;
        case 0x4047e4u: goto label_4047e4;
        case 0x4047e8u: goto label_4047e8;
        case 0x4047ecu: goto label_4047ec;
        case 0x4047f0u: goto label_4047f0;
        case 0x4047f4u: goto label_4047f4;
        case 0x4047f8u: goto label_4047f8;
        case 0x4047fcu: goto label_4047fc;
        case 0x404800u: goto label_404800;
        case 0x404804u: goto label_404804;
        case 0x404808u: goto label_404808;
        case 0x40480cu: goto label_40480c;
        case 0x404810u: goto label_404810;
        case 0x404814u: goto label_404814;
        case 0x404818u: goto label_404818;
        case 0x40481cu: goto label_40481c;
        case 0x404820u: goto label_404820;
        case 0x404824u: goto label_404824;
        case 0x404828u: goto label_404828;
        case 0x40482cu: goto label_40482c;
        case 0x404830u: goto label_404830;
        case 0x404834u: goto label_404834;
        case 0x404838u: goto label_404838;
        case 0x40483cu: goto label_40483c;
        case 0x404840u: goto label_404840;
        case 0x404844u: goto label_404844;
        case 0x404848u: goto label_404848;
        case 0x40484cu: goto label_40484c;
        case 0x404850u: goto label_404850;
        case 0x404854u: goto label_404854;
        case 0x404858u: goto label_404858;
        case 0x40485cu: goto label_40485c;
        case 0x404860u: goto label_404860;
        case 0x404864u: goto label_404864;
        case 0x404868u: goto label_404868;
        case 0x40486cu: goto label_40486c;
        case 0x404870u: goto label_404870;
        case 0x404874u: goto label_404874;
        case 0x404878u: goto label_404878;
        case 0x40487cu: goto label_40487c;
        case 0x404880u: goto label_404880;
        case 0x404884u: goto label_404884;
        case 0x404888u: goto label_404888;
        case 0x40488cu: goto label_40488c;
        case 0x404890u: goto label_404890;
        case 0x404894u: goto label_404894;
        case 0x404898u: goto label_404898;
        case 0x40489cu: goto label_40489c;
        case 0x4048a0u: goto label_4048a0;
        case 0x4048a4u: goto label_4048a4;
        case 0x4048a8u: goto label_4048a8;
        case 0x4048acu: goto label_4048ac;
        case 0x4048b0u: goto label_4048b0;
        case 0x4048b4u: goto label_4048b4;
        case 0x4048b8u: goto label_4048b8;
        case 0x4048bcu: goto label_4048bc;
        case 0x4048c0u: goto label_4048c0;
        case 0x4048c4u: goto label_4048c4;
        case 0x4048c8u: goto label_4048c8;
        case 0x4048ccu: goto label_4048cc;
        case 0x4048d0u: goto label_4048d0;
        case 0x4048d4u: goto label_4048d4;
        case 0x4048d8u: goto label_4048d8;
        case 0x4048dcu: goto label_4048dc;
        case 0x4048e0u: goto label_4048e0;
        case 0x4048e4u: goto label_4048e4;
        case 0x4048e8u: goto label_4048e8;
        case 0x4048ecu: goto label_4048ec;
        case 0x4048f0u: goto label_4048f0;
        case 0x4048f4u: goto label_4048f4;
        case 0x4048f8u: goto label_4048f8;
        case 0x4048fcu: goto label_4048fc;
        case 0x404900u: goto label_404900;
        case 0x404904u: goto label_404904;
        case 0x404908u: goto label_404908;
        case 0x40490cu: goto label_40490c;
        case 0x404910u: goto label_404910;
        case 0x404914u: goto label_404914;
        case 0x404918u: goto label_404918;
        case 0x40491cu: goto label_40491c;
        case 0x404920u: goto label_404920;
        case 0x404924u: goto label_404924;
        case 0x404928u: goto label_404928;
        case 0x40492cu: goto label_40492c;
        case 0x404930u: goto label_404930;
        case 0x404934u: goto label_404934;
        case 0x404938u: goto label_404938;
        case 0x40493cu: goto label_40493c;
        case 0x404940u: goto label_404940;
        case 0x404944u: goto label_404944;
        case 0x404948u: goto label_404948;
        case 0x40494cu: goto label_40494c;
        case 0x404950u: goto label_404950;
        case 0x404954u: goto label_404954;
        case 0x404958u: goto label_404958;
        case 0x40495cu: goto label_40495c;
        case 0x404960u: goto label_404960;
        case 0x404964u: goto label_404964;
        case 0x404968u: goto label_404968;
        case 0x40496cu: goto label_40496c;
        case 0x404970u: goto label_404970;
        case 0x404974u: goto label_404974;
        case 0x404978u: goto label_404978;
        case 0x40497cu: goto label_40497c;
        case 0x404980u: goto label_404980;
        case 0x404984u: goto label_404984;
        case 0x404988u: goto label_404988;
        case 0x40498cu: goto label_40498c;
        case 0x404990u: goto label_404990;
        case 0x404994u: goto label_404994;
        case 0x404998u: goto label_404998;
        case 0x40499cu: goto label_40499c;
        case 0x4049a0u: goto label_4049a0;
        case 0x4049a4u: goto label_4049a4;
        case 0x4049a8u: goto label_4049a8;
        case 0x4049acu: goto label_4049ac;
        case 0x4049b0u: goto label_4049b0;
        case 0x4049b4u: goto label_4049b4;
        case 0x4049b8u: goto label_4049b8;
        case 0x4049bcu: goto label_4049bc;
        case 0x4049c0u: goto label_4049c0;
        case 0x4049c4u: goto label_4049c4;
        case 0x4049c8u: goto label_4049c8;
        case 0x4049ccu: goto label_4049cc;
        case 0x4049d0u: goto label_4049d0;
        case 0x4049d4u: goto label_4049d4;
        case 0x4049d8u: goto label_4049d8;
        case 0x4049dcu: goto label_4049dc;
        case 0x4049e0u: goto label_4049e0;
        case 0x4049e4u: goto label_4049e4;
        case 0x4049e8u: goto label_4049e8;
        case 0x4049ecu: goto label_4049ec;
        case 0x4049f0u: goto label_4049f0;
        case 0x4049f4u: goto label_4049f4;
        case 0x4049f8u: goto label_4049f8;
        case 0x4049fcu: goto label_4049fc;
        case 0x404a00u: goto label_404a00;
        case 0x404a04u: goto label_404a04;
        case 0x404a08u: goto label_404a08;
        case 0x404a0cu: goto label_404a0c;
        case 0x404a10u: goto label_404a10;
        case 0x404a14u: goto label_404a14;
        case 0x404a18u: goto label_404a18;
        case 0x404a1cu: goto label_404a1c;
        case 0x404a20u: goto label_404a20;
        case 0x404a24u: goto label_404a24;
        case 0x404a28u: goto label_404a28;
        case 0x404a2cu: goto label_404a2c;
        case 0x404a30u: goto label_404a30;
        case 0x404a34u: goto label_404a34;
        case 0x404a38u: goto label_404a38;
        case 0x404a3cu: goto label_404a3c;
        case 0x404a40u: goto label_404a40;
        case 0x404a44u: goto label_404a44;
        case 0x404a48u: goto label_404a48;
        case 0x404a4cu: goto label_404a4c;
        case 0x404a50u: goto label_404a50;
        case 0x404a54u: goto label_404a54;
        case 0x404a58u: goto label_404a58;
        case 0x404a5cu: goto label_404a5c;
        case 0x404a60u: goto label_404a60;
        case 0x404a64u: goto label_404a64;
        case 0x404a68u: goto label_404a68;
        case 0x404a6cu: goto label_404a6c;
        case 0x404a70u: goto label_404a70;
        case 0x404a74u: goto label_404a74;
        case 0x404a78u: goto label_404a78;
        case 0x404a7cu: goto label_404a7c;
        case 0x404a80u: goto label_404a80;
        case 0x404a84u: goto label_404a84;
        case 0x404a88u: goto label_404a88;
        case 0x404a8cu: goto label_404a8c;
        case 0x404a90u: goto label_404a90;
        case 0x404a94u: goto label_404a94;
        case 0x404a98u: goto label_404a98;
        case 0x404a9cu: goto label_404a9c;
        case 0x404aa0u: goto label_404aa0;
        case 0x404aa4u: goto label_404aa4;
        case 0x404aa8u: goto label_404aa8;
        case 0x404aacu: goto label_404aac;
        case 0x404ab0u: goto label_404ab0;
        case 0x404ab4u: goto label_404ab4;
        case 0x404ab8u: goto label_404ab8;
        case 0x404abcu: goto label_404abc;
        case 0x404ac0u: goto label_404ac0;
        case 0x404ac4u: goto label_404ac4;
        case 0x404ac8u: goto label_404ac8;
        case 0x404accu: goto label_404acc;
        case 0x404ad0u: goto label_404ad0;
        case 0x404ad4u: goto label_404ad4;
        case 0x404ad8u: goto label_404ad8;
        case 0x404adcu: goto label_404adc;
        case 0x404ae0u: goto label_404ae0;
        case 0x404ae4u: goto label_404ae4;
        case 0x404ae8u: goto label_404ae8;
        case 0x404aecu: goto label_404aec;
        case 0x404af0u: goto label_404af0;
        case 0x404af4u: goto label_404af4;
        case 0x404af8u: goto label_404af8;
        case 0x404afcu: goto label_404afc;
        case 0x404b00u: goto label_404b00;
        case 0x404b04u: goto label_404b04;
        case 0x404b08u: goto label_404b08;
        case 0x404b0cu: goto label_404b0c;
        case 0x404b10u: goto label_404b10;
        case 0x404b14u: goto label_404b14;
        case 0x404b18u: goto label_404b18;
        case 0x404b1cu: goto label_404b1c;
        case 0x404b20u: goto label_404b20;
        case 0x404b24u: goto label_404b24;
        case 0x404b28u: goto label_404b28;
        case 0x404b2cu: goto label_404b2c;
        case 0x404b30u: goto label_404b30;
        case 0x404b34u: goto label_404b34;
        default: break;
    }

    ctx->pc = 0x404660u;

label_404660:
    // 0x404660: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x404660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_404664:
    // 0x404664: 0x7fb104d0  sq          $s1, 0x4D0($sp)
    ctx->pc = 0x404664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 17));
label_404668:
    // 0x404668: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x404668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_40466c:
    // 0x40466c: 0x7fb304b0  sq          $s3, 0x4B0($sp)
    ctx->pc = 0x40466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 19));
label_404670:
    // 0x404670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x404670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_404674:
    // 0x404674: 0x7fb004e0  sq          $s0, 0x4E0($sp)
    ctx->pc = 0x404674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 16));
label_404678:
    // 0x404678: 0x7fb404a0  sq          $s4, 0x4A0($sp)
    ctx->pc = 0x404678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 20));
label_40467c:
    // 0x40467c: 0x7fb50490  sq          $s5, 0x490($sp)
    ctx->pc = 0x40467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 21));
label_404680:
    // 0x404680: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x404680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_404684:
    // 0x404684: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x404684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_404688:
    // 0x404688: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x404688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_40468c:
    // 0x40468c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x40468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_404690:
    // 0x404690: 0x40f809  jalr        $v0
label_404694:
    if (ctx->pc == 0x404694u) {
        ctx->pc = 0x404694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404690u;
        // 0x404694: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404698u;
        goto label_404698;
    }
    ctx->pc = 0x404690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404698u);
        ctx->pc = 0x404694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404690u;
        // 0x404694: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404690u, 0x404698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404698u;
label_404698:
    // 0x404698: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x404698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40469c:
    // 0x40469c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40469cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4046a0:
    // 0x4046a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4046a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4046a4:
    // 0x4046a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4046a8:
    // 0x4046a8: 0x40f809  jalr        $v0
label_4046ac:
    if (ctx->pc == 0x4046ACu) {
        ctx->pc = 0x4046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046A8u;
        // 0x4046ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4046B0u;
        goto label_4046b0;
    }
    ctx->pc = 0x4046A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4046B0u);
        ctx->pc = 0x4046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046A8u;
        // 0x4046ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4046A8u, 0x4046B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4046B0u;
label_4046b0:
    // 0x4046b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4046b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4046b4:
    // 0x4046b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x4046b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_4046b8:
    // 0x4046b8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4046b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_4046bc:
    // 0x4046bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4046c0:
    if (ctx->pc == 0x4046C0u) {
        ctx->pc = 0x4046C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046BCu;
        // 0x4046c0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4046C4u;
        goto label_4046c4;
    }
    ctx->pc = 0x4046BCu;
    {
        const bool branch_taken_0x4046bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4046C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046BCu;
        // 0x4046c0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4046bc) {
            ctx->pc = 0x4046C8u;
            goto label_4046c8;
        }
    }
    ctx->pc = 0x4046C4u;
label_4046c4:
    // 0x4046c4: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x4046c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_4046c8:
    // 0x4046c8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4046c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_4046cc:
    // 0x4046cc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4046ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_4046d0:
    // 0x4046d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4046d4:
    if (ctx->pc == 0x4046D4u) {
        ctx->pc = 0x4046D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046D0u;
        // 0x4046d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4046D8u;
        goto label_4046d8;
    }
    ctx->pc = 0x4046D0u;
    {
        const bool branch_taken_0x4046d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4046D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046D0u;
        // 0x4046d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4046d0) {
            ctx->pc = 0x4046DCu;
            goto label_4046dc;
        }
    }
    ctx->pc = 0x4046D8u;
label_4046d8:
    // 0x4046d8: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x4046d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_4046dc:
    // 0x4046dc: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x4046dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_4046e0:
    // 0x4046e0: 0xc0e858c  jal         func_3A1630
label_4046e4:
    if (ctx->pc == 0x4046E4u) {
        ctx->pc = 0x4046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046E0u;
        // 0x4046e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4046E8u;
        goto label_4046e8;
    }
    ctx->pc = 0x4046E0u;
    SET_GPR_U32(ctx, 31, 0x4046E8u);
    ctx->pc = 0x4046E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4046E0u;
    // 0x4046e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x4046E0u, 0x4046E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4046E8u;
label_4046e8:
    // 0x4046e8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x4046e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_4046ec:
    // 0x4046ec: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4046ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4046f0:
    // 0x4046f0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4046f4:
    if (ctx->pc == 0x4046F4u) {
        ctx->pc = 0x4046F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046F0u;
        // 0x4046f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4046F8u;
        goto label_4046f8;
    }
    ctx->pc = 0x4046F0u;
    {
        const bool branch_taken_0x4046f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4046F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046F0u;
        // 0x4046f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4046f0) {
            ctx->pc = 0x40472Cu;
            goto label_40472c;
        }
    }
    ctx->pc = 0x4046F8u;
label_4046f8:
    // 0x4046f8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x4046f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_4046fc:
    // 0x4046fc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x4046fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_404700:
    // 0x404700: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x404700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404704:
    // 0x404704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404708:
    // 0x404708: 0xc0e947e  jal         func_3A51F8
label_40470c:
    if (ctx->pc == 0x40470Cu) {
        ctx->pc = 0x40470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404708u;
        // 0x40470c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404710u;
        goto label_404710;
    }
    ctx->pc = 0x404708u;
    SET_GPR_U32(ctx, 31, 0x404710u);
    ctx->pc = 0x40470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404708u;
    // 0x40470c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x404708u, 0x404710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404710u;
label_404710:
    // 0x404710: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_404714:
    if (ctx->pc == 0x404714u) {
        ctx->pc = 0x404714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404710u;
        // 0x404714: 0x2403fff6  addiu       $v1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404718u;
        goto label_404718;
    }
    ctx->pc = 0x404710u;
    {
        const bool branch_taken_0x404710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x404714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404710u;
        // 0x404714: 0x2403fff6  addiu       $v1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404710) {
            ctx->pc = 0x404724u;
            goto label_404724;
        }
    }
    ctx->pc = 0x404718u;
label_404718:
    // 0x404718: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x404718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_40471c:
    // 0x40471c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x40471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_404720:
    // 0x404720: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x404720u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_404724:
    // 0x404724: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_404728:
    if (ctx->pc == 0x404728u) {
        ctx->pc = 0x404728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404724u;
        // 0x404728: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40472Cu;
        goto label_40472c;
    }
    ctx->pc = 0x404724u;
    {
        const bool branch_taken_0x404724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x404728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404724u;
        // 0x404728: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404724) {
            ctx->pc = 0x4047ACu;
            goto label_4047ac;
        }
    }
    ctx->pc = 0x40472Cu;
label_40472c:
    // 0x40472c: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x40472cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_404730:
    // 0x404730: 0xc0e4060  jal         func_390180
label_404734:
    if (ctx->pc == 0x404734u) {
        ctx->pc = 0x404734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404730u;
        // 0x404734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404738u;
        goto label_404738;
    }
    ctx->pc = 0x404730u;
    SET_GPR_U32(ctx, 31, 0x404738u);
    ctx->pc = 0x404734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404730u;
    // 0x404734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x404730u, 0x404738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404738u;
label_404738:
    // 0x404738: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
label_40473c:
    if (ctx->pc == 0x40473Cu) {
        ctx->pc = 0x40473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404738u;
        // 0x40473c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404740u;
        goto label_404740;
    }
    ctx->pc = 0x404738u;
    {
        const bool branch_taken_0x404738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404738u;
        // 0x40473c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404738) {
            ctx->pc = 0x404B10u;
            goto label_404b10;
        }
    }
    ctx->pc = 0x404740u;
label_404740:
    // 0x404740: 0xc0e4060  jal         func_390180
label_404744:
    if (ctx->pc == 0x404744u) {
        ctx->pc = 0x404744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404740u;
        // 0x404744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404748u;
        goto label_404748;
    }
    ctx->pc = 0x404740u;
    SET_GPR_U32(ctx, 31, 0x404748u);
    ctx->pc = 0x404744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404740u;
    // 0x404744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x404740u, 0x404748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404748u;
label_404748:
    // 0x404748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x404748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40474c:
    // 0x40474c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x40474cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_404750:
    // 0x404750: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x404750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_404754:
    // 0x404754: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x404754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_404758:
    // 0x404758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x404758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40475c:
    // 0x40475c: 0x0  nop
    ctx->pc = 0x40475cu;
    // NOP
label_404760:
    // 0x404760: 0x0  nop
    ctx->pc = 0x404760u;
    // NOP
label_404764:
    // 0x404764: 0x0  nop
    ctx->pc = 0x404764u;
    // NOP
label_404768:
    // 0x404768: 0x0  nop
    ctx->pc = 0x404768u;
    // NOP
label_40476c:
    // 0x40476c: 0x0  nop
    ctx->pc = 0x40476cu;
    // NOP
label_404770:
    // 0x404770: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_404774:
    if (ctx->pc == 0x404774u) {
        ctx->pc = 0x404774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404770u;
        // 0x404774: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404778u;
        goto label_404778;
    }
    ctx->pc = 0x404770u;
    {
        const bool branch_taken_0x404770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x404774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404770u;
        // 0x404774: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404770) {
            ctx->pc = 0x404760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404760;
        }
    }
    ctx->pc = 0x404778u;
label_404778:
    // 0x404778: 0xc138ddc  jal         func_4E3770
label_40477c:
    if (ctx->pc == 0x40477Cu) {
        ctx->pc = 0x40477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404778u;
        // 0x40477c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404780u;
        goto label_404780;
    }
    ctx->pc = 0x404778u;
    SET_GPR_U32(ctx, 31, 0x404780u);
    ctx->pc = 0x40477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404778u;
    // 0x40477c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x404778u, 0x404780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404780u;
label_404780:
    // 0x404780: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x404780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_404784:
    // 0x404784: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x404784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404788:
    // 0x404788: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x404788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_40478c:
    // 0x40478c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40478cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_404790:
    // 0x404790: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x404790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_404794:
    // 0x404794: 0x60f809  jalr        $v1
label_404798:
    if (ctx->pc == 0x404798u) {
        ctx->pc = 0x404798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404794u;
        // 0x404798: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40479Cu;
        goto label_40479c;
    }
    ctx->pc = 0x404794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40479Cu);
        ctx->pc = 0x404798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404794u;
        // 0x404798: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404794u, 0x40479Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40479Cu;
label_40479c:
    // 0x40479c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4047a0:
    // 0x4047a0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x4047a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_4047a4:
    // 0x4047a4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_4047a8:
    if (ctx->pc == 0x4047A8u) {
        ctx->pc = 0x4047A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047A4u;
        // 0x4047a8: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4047ACu;
        goto label_4047ac;
    }
    ctx->pc = 0x4047A4u;
    {
        const bool branch_taken_0x4047a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047A4u;
        // 0x4047a8: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047a4) {
            ctx->pc = 0x4048E0u;
            goto label_4048e0;
        }
    }
    ctx->pc = 0x4047ACu;
label_4047ac:
    // 0x4047ac: 0xc0e4060  jal         func_390180
label_4047b0:
    if (ctx->pc == 0x4047B0u) {
        ctx->pc = 0x4047B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047ACu;
        // 0x4047b0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4047B4u;
        goto label_4047b4;
    }
    ctx->pc = 0x4047ACu;
    SET_GPR_U32(ctx, 31, 0x4047B4u);
    ctx->pc = 0x4047B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4047ACu;
    // 0x4047b0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4047ACu, 0x4047B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4047B4u;
label_4047b4:
    // 0x4047b4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_4047b8:
    if (ctx->pc == 0x4047B8u) {
        ctx->pc = 0x4047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047B4u;
        // 0x4047b8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4047BCu;
        goto label_4047bc;
    }
    ctx->pc = 0x4047B4u;
    {
        const bool branch_taken_0x4047b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047B4u;
        // 0x4047b8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047b4) {
            ctx->pc = 0x4048ACu;
            goto label_4048ac;
        }
    }
    ctx->pc = 0x4047BCu;
label_4047bc:
    // 0x4047bc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x4047bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_4047c0:
    // 0x4047c0: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x4047c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_4047c4:
    // 0x4047c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4047c8:
    // 0x4047c8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4047c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4047cc:
    // 0x4047cc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_4047d0:
    if (ctx->pc == 0x4047D0u) {
        ctx->pc = 0x4047D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047CCu;
        // 0x4047d0: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4047D4u;
        goto label_4047d4;
    }
    ctx->pc = 0x4047CCu;
    {
        const bool branch_taken_0x4047cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4047D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047CCu;
        // 0x4047d0: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047cc) {
            ctx->pc = 0x4048A8u;
            goto label_4048a8;
        }
    }
    ctx->pc = 0x4047D4u;
label_4047d4:
    // 0x4047d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4047d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4047d8:
    // 0x4047d8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4047d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4047dc:
    // 0x4047dc: 0x32300004  andi        $s0, $s1, 0x4
    ctx->pc = 0x4047dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_4047e0:
    // 0x4047e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4047e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4047e4:
    // 0x4047e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4047e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4047e8:
    // 0x4047e8: 0x0  nop
    ctx->pc = 0x4047e8u;
    // NOP
label_4047ec:
    // 0x4047ec: 0x0  nop
    ctx->pc = 0x4047ecu;
    // NOP
label_4047f0:
    // 0x4047f0: 0x0  nop
    ctx->pc = 0x4047f0u;
    // NOP
label_4047f4:
    // 0x4047f4: 0x0  nop
    ctx->pc = 0x4047f4u;
    // NOP
label_4047f8:
    // 0x4047f8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_4047fc:
    if (ctx->pc == 0x4047FCu) {
        ctx->pc = 0x4047FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047F8u;
        // 0x4047fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404800u;
        goto label_404800;
    }
    ctx->pc = 0x4047F8u;
    {
        const bool branch_taken_0x4047f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4047FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047F8u;
        // 0x4047fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047f8) {
            ctx->pc = 0x4047E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4047e8;
        }
    }
    ctx->pc = 0x404800u;
label_404800:
    // 0x404800: 0xc138ddc  jal         func_4E3770
label_404804:
    if (ctx->pc == 0x404804u) {
        ctx->pc = 0x404808u;
        goto label_404808;
    }
    ctx->pc = 0x404800u;
    SET_GPR_U32(ctx, 31, 0x404808u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x404800u, 0x404808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404808u;
label_404808:
    // 0x404808: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x404808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40480c:
    // 0x40480c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_404810:
    if (ctx->pc == 0x404810u) {
        ctx->pc = 0x404810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40480Cu;
        // 0x404810: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404814u;
        goto label_404814;
    }
    ctx->pc = 0x40480Cu;
    {
        const bool branch_taken_0x40480c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x404810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40480Cu;
        // 0x404810: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40480c) {
            ctx->pc = 0x40481Cu;
            goto label_40481c;
        }
    }
    ctx->pc = 0x404814u;
label_404814:
    // 0x404814: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x404814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404818:
    // 0x404818: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x404818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_40481c:
    // 0x40481c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x40481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_404820:
    // 0x404820: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x404820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404824:
    // 0x404824: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_404828:
    if (ctx->pc == 0x404828u) {
        ctx->pc = 0x404828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404824u;
        // 0x404828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40482Cu;
        goto label_40482c;
    }
    ctx->pc = 0x404824u;
    {
        const bool branch_taken_0x404824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x404828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404824u;
        // 0x404828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404824) {
            ctx->pc = 0x404878u;
            goto label_404878;
        }
    }
    ctx->pc = 0x40482Cu;
label_40482c:
    // 0x40482c: 0xc0ea16a  jal         func_3A85A8
label_404830:
    if (ctx->pc == 0x404830u) {
        ctx->pc = 0x404830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40482Cu;
        // 0x404830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404834u;
        goto label_404834;
    }
    ctx->pc = 0x40482Cu;
    SET_GPR_U32(ctx, 31, 0x404834u);
    ctx->pc = 0x404830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40482Cu;
    // 0x404830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x40482Cu, 0x404834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404834u;
label_404834:
    // 0x404834: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x404834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_404838:
    // 0x404838: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x404838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_40483c:
    // 0x40483c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_404840:
    if (ctx->pc == 0x404840u) {
        ctx->pc = 0x404840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40483Cu;
        // 0x404840: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404844u;
        goto label_404844;
    }
    ctx->pc = 0x40483Cu;
    {
        const bool branch_taken_0x40483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40483Cu;
        // 0x404840: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40483c) {
            ctx->pc = 0x40485Cu;
            goto label_40485c;
        }
    }
    ctx->pc = 0x404844u;
label_404844:
    // 0x404844: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x404844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_404848:
    // 0x404848: 0xc0cd4ee  jal         func_3353B8
label_40484c:
    if (ctx->pc == 0x40484Cu) {
        ctx->pc = 0x40484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404848u;
        // 0x40484c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404850u;
        goto label_404850;
    }
    ctx->pc = 0x404848u;
    SET_GPR_U32(ctx, 31, 0x404850u);
    ctx->pc = 0x40484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404848u;
    // 0x40484c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x404848u, 0x404850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404850u;
label_404850:
    // 0x404850: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x404850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_404854:
    // 0x404854: 0x1000000b  b           . + 4 + (0xB << 2)
label_404858:
    if (ctx->pc == 0x404858u) {
        ctx->pc = 0x404858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404854u;
        // 0x404858: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40485Cu;
        goto label_40485c;
    }
    ctx->pc = 0x404854u;
    {
        const bool branch_taken_0x404854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404854u;
        // 0x404858: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404854) {
            ctx->pc = 0x404884u;
            goto label_404884;
        }
    }
    ctx->pc = 0x40485Cu;
label_40485c:
    // 0x40485c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_404860:
    // 0x404860: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x404860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_404864:
    // 0x404864: 0xc0cd4ee  jal         func_3353B8
label_404868:
    if (ctx->pc == 0x404868u) {
        ctx->pc = 0x404868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404864u;
        // 0x404868: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40486Cu;
        goto label_40486c;
    }
    ctx->pc = 0x404864u;
    SET_GPR_U32(ctx, 31, 0x40486Cu);
    ctx->pc = 0x404868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404864u;
    // 0x404868: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x404864u, 0x40486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40486Cu;
label_40486c:
    // 0x40486c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x40486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_404870:
    // 0x404870: 0x10000004  b           . + 4 + (0x4 << 2)
label_404874:
    if (ctx->pc == 0x404874u) {
        ctx->pc = 0x404874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404870u;
        // 0x404874: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404878u;
        goto label_404878;
    }
    ctx->pc = 0x404870u;
    {
        const bool branch_taken_0x404870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404870u;
        // 0x404874: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404870) {
            ctx->pc = 0x404884u;
            goto label_404884;
        }
    }
    ctx->pc = 0x404878u;
label_404878:
    // 0x404878: 0xc0ea16a  jal         func_3A85A8
label_40487c:
    if (ctx->pc == 0x40487Cu) {
        ctx->pc = 0x40487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404878u;
        // 0x40487c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404880u;
        goto label_404880;
    }
    ctx->pc = 0x404878u;
    SET_GPR_U32(ctx, 31, 0x404880u);
    ctx->pc = 0x40487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404878u;
    // 0x40487c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x404878u, 0x404880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404880u;
label_404880:
    // 0x404880: 0xae700038  sw          $s0, 0x38($s3)
    ctx->pc = 0x404880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 16));
label_404884:
    // 0x404884: 0xc0e4060  jal         func_390180
label_404888:
    if (ctx->pc == 0x404888u) {
        ctx->pc = 0x404888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404884u;
        // 0x404888: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40488Cu;
        goto label_40488c;
    }
    ctx->pc = 0x404884u;
    SET_GPR_U32(ctx, 31, 0x40488Cu);
    ctx->pc = 0x404888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404884u;
    // 0x404888: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x404884u, 0x40488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40488Cu;
label_40488c:
    // 0x40488c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x40488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_404890:
    // 0x404890: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x404890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404894:
    // 0x404894: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x404894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_404898:
    // 0x404898: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x404898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40489c:
    // 0x40489c: 0x8c6700cc  lw          $a3, 0xCC($v1)
    ctx->pc = 0x40489cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_4048a0:
    // 0x4048a0: 0xe0f809  jalr        $a3
label_4048a4:
    if (ctx->pc == 0x4048A4u) {
        ctx->pc = 0x4048A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048A0u;
        // 0x4048a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4048A8u;
        goto label_4048a8;
    }
    ctx->pc = 0x4048A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x4048A8u);
        ctx->pc = 0x4048A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048A0u;
        // 0x4048a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4048A0u, 0x4048A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4048A8u;
label_4048a8:
    // 0x4048a8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4048a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_4048ac:
    // 0x4048ac: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4048acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_4048b0:
    // 0x4048b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4048b4:
    if (ctx->pc == 0x4048B4u) {
        ctx->pc = 0x4048B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048B0u;
        // 0x4048b4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4048B8u;
        goto label_4048b8;
    }
    ctx->pc = 0x4048B0u;
    {
        const bool branch_taken_0x4048b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048B0u;
        // 0x4048b4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048b0) {
            ctx->pc = 0x4048E8u;
            goto label_4048e8;
        }
    }
    ctx->pc = 0x4048B8u;
label_4048b8:
    // 0x4048b8: 0xc0e87c0  jal         func_3A1F00
label_4048bc:
    if (ctx->pc == 0x4048BCu) {
        ctx->pc = 0x4048BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048B8u;
        // 0x4048bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4048C0u;
        goto label_4048c0;
    }
    ctx->pc = 0x4048B8u;
    SET_GPR_U32(ctx, 31, 0x4048C0u);
    ctx->pc = 0x4048BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4048B8u;
    // 0x4048bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x4048B8u, 0x4048C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4048C0u;
label_4048c0:
    // 0x4048c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4048c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4048c4:
    // 0x4048c4: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x4048c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_4048c8:
    // 0x4048c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4048c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4048cc:
    // 0x4048cc: 0x0  nop
    ctx->pc = 0x4048ccu;
    // NOP
label_4048d0:
    // 0x4048d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4048d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4048d4:
    // 0x4048d4: 0x0  nop
    ctx->pc = 0x4048d4u;
    // NOP
label_4048d8:
    // 0x4048d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4048dc:
    if (ctx->pc == 0x4048DCu) {
        ctx->pc = 0x4048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048D8u;
        // 0x4048dc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4048E0u;
        goto label_4048e0;
    }
    ctx->pc = 0x4048D8u;
    {
        const bool branch_taken_0x4048d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048D8u;
        // 0x4048dc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048d8) {
            ctx->pc = 0x4048E8u;
            goto label_4048e8;
        }
    }
    ctx->pc = 0x4048E0u;
label_4048e0:
    // 0x4048e0: 0x1000008b  b           . + 4 + (0x8B << 2)
label_4048e4:
    if (ctx->pc == 0x4048E4u) {
        ctx->pc = 0x4048E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048E0u;
        // 0x4048e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4048E8u;
        goto label_4048e8;
    }
    ctx->pc = 0x4048E0u;
    {
        const bool branch_taken_0x4048e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048E0u;
        // 0x4048e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048e0) {
            ctx->pc = 0x404B10u;
            goto label_404b10;
        }
    }
    ctx->pc = 0x4048E8u;
label_4048e8:
    // 0x4048e8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4048e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_4048ec:
    // 0x4048ec: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_4048f0:
    if (ctx->pc == 0x4048F0u) {
        ctx->pc = 0x4048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048ECu;
        // 0x4048f0: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4048F4u;
        goto label_4048f4;
    }
    ctx->pc = 0x4048ECu;
    {
        const bool branch_taken_0x4048ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048ECu;
        // 0x4048f0: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048ec) {
            ctx->pc = 0x404B0Cu;
            goto label_404b0c;
        }
    }
    ctx->pc = 0x4048F4u;
label_4048f4:
    // 0x4048f4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x4048f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4048f8:
    // 0x4048f8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x4048f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_4048fc:
    // 0x4048fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4048fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_404900:
    // 0x404900: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x404900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_404904:
    // 0x404904: 0x3c03c07d  lui         $v1, 0xC07D
    ctx->pc = 0x404904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49277 << 16));
label_404908:
    // 0x404908: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x404908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_40490c:
    // 0x40490c: 0x8e5400c4  lw          $s4, 0xC4($s2)
    ctx->pc = 0x40490cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_404910:
    // 0x404910: 0x3463850e  ori         $v1, $v1, 0x850E
    ctx->pc = 0x404910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34062);
label_404914:
    // 0x404914: 0x16830023  bne         $s4, $v1, . + 4 + (0x23 << 2)
label_404918:
    if (ctx->pc == 0x404918u) {
        ctx->pc = 0x404918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404914u;
        // 0x404918: 0xae440054  sw          $a0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40491Cu;
        goto label_40491c;
    }
    ctx->pc = 0x404914u;
    {
        const bool branch_taken_0x404914 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x404918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404914u;
        // 0x404918: 0xae440054  sw          $a0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404914) {
            ctx->pc = 0x4049A4u;
            goto label_4049a4;
        }
    }
    ctx->pc = 0x40491Cu;
label_40491c:
    // 0x40491c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x40491cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_404920:
    // 0x404920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x404920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_404924:
    // 0x404924: 0xc0e92f4  jal         func_3A4BD0
label_404928:
    if (ctx->pc == 0x404928u) {
        ctx->pc = 0x404928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404924u;
        // 0x404928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40492Cu;
        goto label_40492c;
    }
    ctx->pc = 0x404924u;
    SET_GPR_U32(ctx, 31, 0x40492Cu);
    ctx->pc = 0x404928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404924u;
    // 0x404928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x404924u, 0x40492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40492Cu;
label_40492c:
    // 0x40492c: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x40492cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_404930:
    // 0x404930: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x404930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_404934:
    // 0x404934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x404934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404938:
    // 0x404938: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x404938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40493c:
    // 0x40493c: 0xc136b24  jal         func_4DAC90
label_404940:
    if (ctx->pc == 0x404940u) {
        ctx->pc = 0x404940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40493Cu;
        // 0x404940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404944u;
        goto label_404944;
    }
    ctx->pc = 0x40493Cu;
    SET_GPR_U32(ctx, 31, 0x404944u);
    ctx->pc = 0x404940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40493Cu;
    // 0x404940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x40493Cu, 0x404944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404944u;
label_404944:
    // 0x404944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x404944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_404948:
    // 0x404948: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x404948u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40494c:
    // 0x40494c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x40494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_404950:
    // 0x404950: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x404950u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_404954:
    // 0x404954: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x404954u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_404958:
    // 0x404958: 0x26107a10  addiu       $s0, $s0, 0x7A10
    ctx->pc = 0x404958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31248));
label_40495c:
    // 0x40495c: 0x7fa60460  sq          $a2, 0x460($sp)
    ctx->pc = 0x40495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 6));
label_404960:
    // 0x404960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404964:
    // 0x404964: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x404964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_404968:
    // 0x404968: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x404968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_40496c:
    // 0x40496c: 0x27a70440  addiu       $a3, $sp, 0x440
    ctx->pc = 0x40496cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_404970:
    // 0x404970: 0x27a80450  addiu       $t0, $sp, 0x450
    ctx->pc = 0x404970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_404974:
    // 0x404974: 0x27a90460  addiu       $t1, $sp, 0x460
    ctx->pc = 0x404974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_404978:
    // 0x404978: 0x27aa0470  addiu       $t2, $sp, 0x470
    ctx->pc = 0x404978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_40497c:
    // 0x40497c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x40497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_404980:
    // 0x404980: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x404980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_404984:
    // 0x404984: 0xafa00420  sw          $zero, 0x420($sp)
    ctx->pc = 0x404984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
label_404988:
    // 0x404988: 0xafb20430  sw          $s2, 0x430($sp)
    ctx->pc = 0x404988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 18));
label_40498c:
    // 0x40498c: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x40498cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
label_404990:
    // 0x404990: 0xc0ea040  jal         func_3A8100
label_404994:
    if (ctx->pc == 0x404994u) {
        ctx->pc = 0x404994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404990u;
        // 0x404994: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404998u;
        goto label_404998;
    }
    ctx->pc = 0x404990u;
    SET_GPR_U32(ctx, 31, 0x404998u);
    ctx->pc = 0x404994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404990u;
    // 0x404994: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x404990u, 0x404998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404998u;
label_404998:
    // 0x404998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40499c:
    // 0x40499c: 0xc0f15bc  jal         func_3C56F0
label_4049a0:
    if (ctx->pc == 0x4049A0u) {
        ctx->pc = 0x4049A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40499Cu;
        // 0x4049a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4049A4u;
        goto label_4049a4;
    }
    ctx->pc = 0x40499Cu;
    SET_GPR_U32(ctx, 31, 0x4049A4u);
    ctx->pc = 0x4049A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40499Cu;
    // 0x4049a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x40499Cu, 0x4049A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4049A4u;
label_4049a4:
    // 0x4049a4: 0x3c02eafc  lui         $v0, 0xEAFC
    ctx->pc = 0x4049a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60156 << 16));
label_4049a8:
    // 0x4049a8: 0x34427fa6  ori         $v0, $v0, 0x7FA6
    ctx->pc = 0x4049a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32678);
label_4049ac:
    // 0x4049ac: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
label_4049b0:
    if (ctx->pc == 0x4049B0u) {
        ctx->pc = 0x4049B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049ACu;
        // 0x4049b0: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4049B4u;
        goto label_4049b4;
    }
    ctx->pc = 0x4049ACu;
    {
        const bool branch_taken_0x4049ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4049B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049ACu;
        // 0x4049b0: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049ac) {
            ctx->pc = 0x404A78u;
            goto label_404a78;
        }
    }
    ctx->pc = 0x4049B4u;
label_4049b4:
    // 0x4049b4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x4049b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_4049b8:
    // 0x4049b8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4049b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4049bc:
    // 0x4049bc: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_4049c0:
    if (ctx->pc == 0x4049C0u) {
        ctx->pc = 0x4049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049BCu;
        // 0x4049c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4049C4u;
        goto label_4049c4;
    }
    ctx->pc = 0x4049BCu;
    {
        const bool branch_taken_0x4049bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049BCu;
        // 0x4049c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049bc) {
            ctx->pc = 0x404A7Cu;
            goto label_404a7c;
        }
    }
    ctx->pc = 0x4049C4u;
label_4049c4:
    // 0x4049c4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4049c8:
    // 0x4049c8: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x4049c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_4049cc:
    // 0x4049cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4049d0:
    // 0x4049d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4049d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4049d4:
    // 0x4049d4: 0x0  nop
    ctx->pc = 0x4049d4u;
    // NOP
label_4049d8:
    // 0x4049d8: 0x0  nop
    ctx->pc = 0x4049d8u;
    // NOP
label_4049dc:
    // 0x4049dc: 0x0  nop
    ctx->pc = 0x4049dcu;
    // NOP
label_4049e0:
    // 0x4049e0: 0x0  nop
    ctx->pc = 0x4049e0u;
    // NOP
label_4049e4:
    // 0x4049e4: 0x0  nop
    ctx->pc = 0x4049e4u;
    // NOP
label_4049e8:
    // 0x4049e8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_4049ec:
    if (ctx->pc == 0x4049ECu) {
        ctx->pc = 0x4049ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049E8u;
        // 0x4049ec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4049F0u;
        goto label_4049f0;
    }
    ctx->pc = 0x4049E8u;
    {
        const bool branch_taken_0x4049e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4049ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049E8u;
        // 0x4049ec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049e8) {
            ctx->pc = 0x4049D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4049d8;
        }
    }
    ctx->pc = 0x4049F0u;
label_4049f0:
    // 0x4049f0: 0xc138ddc  jal         func_4E3770
label_4049f4:
    if (ctx->pc == 0x4049F4u) {
        ctx->pc = 0x4049F8u;
        goto label_4049f8;
    }
    ctx->pc = 0x4049F0u;
    SET_GPR_U32(ctx, 31, 0x4049F8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x4049F0u, 0x4049F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4049F8u;
label_4049f8:
    // 0x4049f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4049f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4049fc:
    // 0x4049fc: 0xc0ea176  jal         func_3A85D8
label_404a00:
    if (ctx->pc == 0x404A00u) {
        ctx->pc = 0x404A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049FCu;
        // 0x404a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A04u;
        goto label_404a04;
    }
    ctx->pc = 0x4049FCu;
    SET_GPR_U32(ctx, 31, 0x404A04u);
    ctx->pc = 0x404A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4049FCu;
    // 0x404a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x4049FCu, 0x404A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A04u;
label_404a04:
    // 0x404a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404a08:
    // 0x404a08: 0xc0ea176  jal         func_3A85D8
label_404a0c:
    if (ctx->pc == 0x404A0Cu) {
        ctx->pc = 0x404A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A08u;
        // 0x404a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A10u;
        goto label_404a10;
    }
    ctx->pc = 0x404A08u;
    SET_GPR_U32(ctx, 31, 0x404A10u);
    ctx->pc = 0x404A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A08u;
    // 0x404a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x404A08u, 0x404A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A10u;
label_404a10:
    // 0x404a10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404a14:
    // 0x404a14: 0xc0ea16a  jal         func_3A85A8
label_404a18:
    if (ctx->pc == 0x404A18u) {
        ctx->pc = 0x404A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A14u;
        // 0x404a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A1Cu;
        goto label_404a1c;
    }
    ctx->pc = 0x404A14u;
    SET_GPR_U32(ctx, 31, 0x404A1Cu);
    ctx->pc = 0x404A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A14u;
    // 0x404a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x404A14u, 0x404A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A1Cu;
label_404a1c:
    // 0x404a1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404a20:
    // 0x404a20: 0xc0ea16a  jal         func_3A85A8
label_404a24:
    if (ctx->pc == 0x404A24u) {
        ctx->pc = 0x404A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A20u;
        // 0x404a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A28u;
        goto label_404a28;
    }
    ctx->pc = 0x404A20u;
    SET_GPR_U32(ctx, 31, 0x404A28u);
    ctx->pc = 0x404A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A20u;
    // 0x404a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x404A20u, 0x404A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A28u;
label_404a28:
    // 0x404a28: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x404a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_404a2c:
    // 0x404a2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404a30:
    // 0x404a30: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x404a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_404a34:
    // 0x404a34: 0xc0ea158  jal         func_3A8560
label_404a38:
    if (ctx->pc == 0x404A38u) {
        ctx->pc = 0x404A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A34u;
        // 0x404a38: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A3Cu;
        goto label_404a3c;
    }
    ctx->pc = 0x404A34u;
    SET_GPR_U32(ctx, 31, 0x404A3Cu);
    ctx->pc = 0x404A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A34u;
    // 0x404a38: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x404A34u, 0x404A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A3Cu;
label_404a3c:
    // 0x404a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404a40:
    // 0x404a40: 0xc0e92f4  jal         func_3A4BD0
label_404a44:
    if (ctx->pc == 0x404A44u) {
        ctx->pc = 0x404A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A40u;
        // 0x404a44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A48u;
        goto label_404a48;
    }
    ctx->pc = 0x404A40u;
    SET_GPR_U32(ctx, 31, 0x404A48u);
    ctx->pc = 0x404A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A40u;
    // 0x404a44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x404A40u, 0x404A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A48u;
label_404a48:
    // 0x404a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404a4c:
    // 0x404a4c: 0xc0ea158  jal         func_3A8560
label_404a50:
    if (ctx->pc == 0x404A50u) {
        ctx->pc = 0x404A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A4Cu;
        // 0x404a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A54u;
        goto label_404a54;
    }
    ctx->pc = 0x404A4Cu;
    SET_GPR_U32(ctx, 31, 0x404A54u);
    ctx->pc = 0x404A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A4Cu;
    // 0x404a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x404A4Cu, 0x404A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A54u;
label_404a54:
    // 0x404a54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x404a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_404a58:
    // 0x404a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x404a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404a5c:
    // 0x404a5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x404a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404a60:
    // 0x404a60: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x404a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_404a64:
    // 0x404a64: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x404a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_404a68:
    // 0x404a68: 0x40f809  jalr        $v0
label_404a6c:
    if (ctx->pc == 0x404A6Cu) {
        ctx->pc = 0x404A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A68u;
        // 0x404a6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A70u;
        goto label_404a70;
    }
    ctx->pc = 0x404A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404A70u);
        ctx->pc = 0x404A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A68u;
        // 0x404a6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404A68u, 0x404A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404A70u;
label_404a70:
    // 0x404a70: 0x10000002  b           . + 4 + (0x2 << 2)
label_404a74:
    if (ctx->pc == 0x404A74u) {
        ctx->pc = 0x404A78u;
        goto label_404a78;
    }
    ctx->pc = 0x404A70u;
    {
        const bool branch_taken_0x404a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x404a70) {
            ctx->pc = 0x404A7Cu;
            goto label_404a7c;
        }
    }
    ctx->pc = 0x404A78u;
label_404a78:
    // 0x404a78: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x404a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_404a7c:
    // 0x404a7c: 0xc0e87c0  jal         func_3A1F00
label_404a80:
    if (ctx->pc == 0x404A80u) {
        ctx->pc = 0x404A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404A7Cu;
        // 0x404a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404A84u;
        goto label_404a84;
    }
    ctx->pc = 0x404A7Cu;
    SET_GPR_U32(ctx, 31, 0x404A84u);
    ctx->pc = 0x404A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A7Cu;
    // 0x404a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x404A7Cu, 0x404A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A84u;
label_404a84:
    // 0x404a84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x404a84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_404a88:
    // 0x404a88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x404a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_404a8c:
    // 0x404a8c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x404a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404a90:
    // 0x404a90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x404a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404a94:
    // 0x404a94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x404a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404a98:
    // 0x404a98: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x404a98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_404a9c:
    // 0x404a9c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x404a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_404aa0:
    // 0x404aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x404aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_404aa4:
    // 0x404aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x404aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_404aa8:
    // 0x404aa8: 0x0  nop
    ctx->pc = 0x404aa8u;
    // NOP
label_404aac:
    // 0x404aac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x404aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404ab0:
    // 0x404ab0: 0x0  nop
    ctx->pc = 0x404ab0u;
    // NOP
label_404ab4:
    // 0x404ab4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_404ab8:
    if (ctx->pc == 0x404AB8u) {
        ctx->pc = 0x404AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AB4u;
        // 0x404ab8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404ABCu;
        goto label_404abc;
    }
    ctx->pc = 0x404AB4u;
    {
        const bool branch_taken_0x404ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x404AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AB4u;
        // 0x404ab8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404ab4) {
            ctx->pc = 0x404AF8u;
            goto label_404af8;
        }
    }
    ctx->pc = 0x404ABCu;
label_404abc:
    // 0x404abc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x404abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_404ac0:
    // 0x404ac0: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x404ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_404ac4:
    // 0x404ac4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x404ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_404ac8:
    // 0x404ac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x404ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404acc:
    // 0x404acc: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x404accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_404ad0:
    // 0x404ad0: 0x40f809  jalr        $v0
label_404ad4:
    if (ctx->pc == 0x404AD4u) {
        ctx->pc = 0x404AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AD0u;
        // 0x404ad4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404AD8u;
        goto label_404ad8;
    }
    ctx->pc = 0x404AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404AD8u);
        ctx->pc = 0x404AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AD0u;
        // 0x404ad4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404AD0u, 0x404AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404AD8u;
label_404ad8:
    // 0x404ad8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x404ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_404adc:
    // 0x404adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x404adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404ae0:
    // 0x404ae0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x404ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_404ae4:
    // 0x404ae4: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x404ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_404ae8:
    // 0x404ae8: 0xc0f809  jalr        $a2
label_404aec:
    if (ctx->pc == 0x404AECu) {
        ctx->pc = 0x404AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AE8u;
        // 0x404aec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404AF0u;
        goto label_404af0;
    }
    ctx->pc = 0x404AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x404AF0u);
        ctx->pc = 0x404AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AE8u;
        // 0x404aec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404AE8u, 0x404AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404AF0u;
label_404af0:
    // 0x404af0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x404af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_404af4:
    // 0x404af4: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x404af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_404af8:
    // 0x404af8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x404af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_404afc:
    // 0x404afc: 0xc0e90ca  jal         func_3A4328
label_404b00:
    if (ctx->pc == 0x404B00u) {
        ctx->pc = 0x404B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AFCu;
        // 0x404b00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404B04u;
        goto label_404b04;
    }
    ctx->pc = 0x404AFCu;
    SET_GPR_U32(ctx, 31, 0x404B04u);
    ctx->pc = 0x404B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404AFCu;
    // 0x404b00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x404AFCu, 0x404B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B04u;
label_404b04:
    // 0x404b04: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x404b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_404b08:
    // 0x404b08: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x404b08u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_404b0c:
    // 0x404b0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x404b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_404b10:
    // 0x404b10: 0x7bb004e0  lq          $s0, 0x4E0($sp)
    ctx->pc = 0x404b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_404b14:
    // 0x404b14: 0x7bb104d0  lq          $s1, 0x4D0($sp)
    ctx->pc = 0x404b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_404b18:
    // 0x404b18: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x404b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_404b1c:
    // 0x404b1c: 0x7bb304b0  lq          $s3, 0x4B0($sp)
    ctx->pc = 0x404b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_404b20:
    // 0x404b20: 0x7bb404a0  lq          $s4, 0x4A0($sp)
    ctx->pc = 0x404b20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_404b24:
    // 0x404b24: 0x7bb50490  lq          $s5, 0x490($sp)
    ctx->pc = 0x404b24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_404b28:
    // 0x404b28: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x404b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_404b2c:
    // 0x404b2c: 0x3e00008  jr          $ra
label_404b30:
    if (ctx->pc == 0x404B30u) {
        ctx->pc = 0x404B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B2Cu;
        // 0x404b30: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404B34u;
        goto label_404b34;
    }
    ctx->pc = 0x404B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x404B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B2Cu;
        // 0x404b30: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x404B34u;
label_404b34:
    // 0x404b34: 0x0  nop
    ctx->pc = 0x404b34u;
    // NOP
    ctx->pc = 0x404b38u;
}
