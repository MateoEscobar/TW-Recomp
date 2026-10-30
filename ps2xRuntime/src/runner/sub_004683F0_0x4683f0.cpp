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

// Function: sub_004683F0
// Address: 0x4683f0 - 0x4688c0
void sub_004683F0_0x4683f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004683F0_0x4683f0");
#endif

    switch (ctx->pc) {
        case 0x4683f0u: goto label_4683f0;
        case 0x4683f4u: goto label_4683f4;
        case 0x4683f8u: goto label_4683f8;
        case 0x4683fcu: goto label_4683fc;
        case 0x468400u: goto label_468400;
        case 0x468404u: goto label_468404;
        case 0x468408u: goto label_468408;
        case 0x46840cu: goto label_46840c;
        case 0x468410u: goto label_468410;
        case 0x468414u: goto label_468414;
        case 0x468418u: goto label_468418;
        case 0x46841cu: goto label_46841c;
        case 0x468420u: goto label_468420;
        case 0x468424u: goto label_468424;
        case 0x468428u: goto label_468428;
        case 0x46842cu: goto label_46842c;
        case 0x468430u: goto label_468430;
        case 0x468434u: goto label_468434;
        case 0x468438u: goto label_468438;
        case 0x46843cu: goto label_46843c;
        case 0x468440u: goto label_468440;
        case 0x468444u: goto label_468444;
        case 0x468448u: goto label_468448;
        case 0x46844cu: goto label_46844c;
        case 0x468450u: goto label_468450;
        case 0x468454u: goto label_468454;
        case 0x468458u: goto label_468458;
        case 0x46845cu: goto label_46845c;
        case 0x468460u: goto label_468460;
        case 0x468464u: goto label_468464;
        case 0x468468u: goto label_468468;
        case 0x46846cu: goto label_46846c;
        case 0x468470u: goto label_468470;
        case 0x468474u: goto label_468474;
        case 0x468478u: goto label_468478;
        case 0x46847cu: goto label_46847c;
        case 0x468480u: goto label_468480;
        case 0x468484u: goto label_468484;
        case 0x468488u: goto label_468488;
        case 0x46848cu: goto label_46848c;
        case 0x468490u: goto label_468490;
        case 0x468494u: goto label_468494;
        case 0x468498u: goto label_468498;
        case 0x46849cu: goto label_46849c;
        case 0x4684a0u: goto label_4684a0;
        case 0x4684a4u: goto label_4684a4;
        case 0x4684a8u: goto label_4684a8;
        case 0x4684acu: goto label_4684ac;
        case 0x4684b0u: goto label_4684b0;
        case 0x4684b4u: goto label_4684b4;
        case 0x4684b8u: goto label_4684b8;
        case 0x4684bcu: goto label_4684bc;
        case 0x4684c0u: goto label_4684c0;
        case 0x4684c4u: goto label_4684c4;
        case 0x4684c8u: goto label_4684c8;
        case 0x4684ccu: goto label_4684cc;
        case 0x4684d0u: goto label_4684d0;
        case 0x4684d4u: goto label_4684d4;
        case 0x4684d8u: goto label_4684d8;
        case 0x4684dcu: goto label_4684dc;
        case 0x4684e0u: goto label_4684e0;
        case 0x4684e4u: goto label_4684e4;
        case 0x4684e8u: goto label_4684e8;
        case 0x4684ecu: goto label_4684ec;
        case 0x4684f0u: goto label_4684f0;
        case 0x4684f4u: goto label_4684f4;
        case 0x4684f8u: goto label_4684f8;
        case 0x4684fcu: goto label_4684fc;
        case 0x468500u: goto label_468500;
        case 0x468504u: goto label_468504;
        case 0x468508u: goto label_468508;
        case 0x46850cu: goto label_46850c;
        case 0x468510u: goto label_468510;
        case 0x468514u: goto label_468514;
        case 0x468518u: goto label_468518;
        case 0x46851cu: goto label_46851c;
        case 0x468520u: goto label_468520;
        case 0x468524u: goto label_468524;
        case 0x468528u: goto label_468528;
        case 0x46852cu: goto label_46852c;
        case 0x468530u: goto label_468530;
        case 0x468534u: goto label_468534;
        case 0x468538u: goto label_468538;
        case 0x46853cu: goto label_46853c;
        case 0x468540u: goto label_468540;
        case 0x468544u: goto label_468544;
        case 0x468548u: goto label_468548;
        case 0x46854cu: goto label_46854c;
        case 0x468550u: goto label_468550;
        case 0x468554u: goto label_468554;
        case 0x468558u: goto label_468558;
        case 0x46855cu: goto label_46855c;
        case 0x468560u: goto label_468560;
        case 0x468564u: goto label_468564;
        case 0x468568u: goto label_468568;
        case 0x46856cu: goto label_46856c;
        case 0x468570u: goto label_468570;
        case 0x468574u: goto label_468574;
        case 0x468578u: goto label_468578;
        case 0x46857cu: goto label_46857c;
        case 0x468580u: goto label_468580;
        case 0x468584u: goto label_468584;
        case 0x468588u: goto label_468588;
        case 0x46858cu: goto label_46858c;
        case 0x468590u: goto label_468590;
        case 0x468594u: goto label_468594;
        case 0x468598u: goto label_468598;
        case 0x46859cu: goto label_46859c;
        case 0x4685a0u: goto label_4685a0;
        case 0x4685a4u: goto label_4685a4;
        case 0x4685a8u: goto label_4685a8;
        case 0x4685acu: goto label_4685ac;
        case 0x4685b0u: goto label_4685b0;
        case 0x4685b4u: goto label_4685b4;
        case 0x4685b8u: goto label_4685b8;
        case 0x4685bcu: goto label_4685bc;
        case 0x4685c0u: goto label_4685c0;
        case 0x4685c4u: goto label_4685c4;
        case 0x4685c8u: goto label_4685c8;
        case 0x4685ccu: goto label_4685cc;
        case 0x4685d0u: goto label_4685d0;
        case 0x4685d4u: goto label_4685d4;
        case 0x4685d8u: goto label_4685d8;
        case 0x4685dcu: goto label_4685dc;
        case 0x4685e0u: goto label_4685e0;
        case 0x4685e4u: goto label_4685e4;
        case 0x4685e8u: goto label_4685e8;
        case 0x4685ecu: goto label_4685ec;
        case 0x4685f0u: goto label_4685f0;
        case 0x4685f4u: goto label_4685f4;
        case 0x4685f8u: goto label_4685f8;
        case 0x4685fcu: goto label_4685fc;
        case 0x468600u: goto label_468600;
        case 0x468604u: goto label_468604;
        case 0x468608u: goto label_468608;
        case 0x46860cu: goto label_46860c;
        case 0x468610u: goto label_468610;
        case 0x468614u: goto label_468614;
        case 0x468618u: goto label_468618;
        case 0x46861cu: goto label_46861c;
        case 0x468620u: goto label_468620;
        case 0x468624u: goto label_468624;
        case 0x468628u: goto label_468628;
        case 0x46862cu: goto label_46862c;
        case 0x468630u: goto label_468630;
        case 0x468634u: goto label_468634;
        case 0x468638u: goto label_468638;
        case 0x46863cu: goto label_46863c;
        case 0x468640u: goto label_468640;
        case 0x468644u: goto label_468644;
        case 0x468648u: goto label_468648;
        case 0x46864cu: goto label_46864c;
        case 0x468650u: goto label_468650;
        case 0x468654u: goto label_468654;
        case 0x468658u: goto label_468658;
        case 0x46865cu: goto label_46865c;
        case 0x468660u: goto label_468660;
        case 0x468664u: goto label_468664;
        case 0x468668u: goto label_468668;
        case 0x46866cu: goto label_46866c;
        case 0x468670u: goto label_468670;
        case 0x468674u: goto label_468674;
        case 0x468678u: goto label_468678;
        case 0x46867cu: goto label_46867c;
        case 0x468680u: goto label_468680;
        case 0x468684u: goto label_468684;
        case 0x468688u: goto label_468688;
        case 0x46868cu: goto label_46868c;
        case 0x468690u: goto label_468690;
        case 0x468694u: goto label_468694;
        case 0x468698u: goto label_468698;
        case 0x46869cu: goto label_46869c;
        case 0x4686a0u: goto label_4686a0;
        case 0x4686a4u: goto label_4686a4;
        case 0x4686a8u: goto label_4686a8;
        case 0x4686acu: goto label_4686ac;
        case 0x4686b0u: goto label_4686b0;
        case 0x4686b4u: goto label_4686b4;
        case 0x4686b8u: goto label_4686b8;
        case 0x4686bcu: goto label_4686bc;
        case 0x4686c0u: goto label_4686c0;
        case 0x4686c4u: goto label_4686c4;
        case 0x4686c8u: goto label_4686c8;
        case 0x4686ccu: goto label_4686cc;
        case 0x4686d0u: goto label_4686d0;
        case 0x4686d4u: goto label_4686d4;
        case 0x4686d8u: goto label_4686d8;
        case 0x4686dcu: goto label_4686dc;
        case 0x4686e0u: goto label_4686e0;
        case 0x4686e4u: goto label_4686e4;
        case 0x4686e8u: goto label_4686e8;
        case 0x4686ecu: goto label_4686ec;
        case 0x4686f0u: goto label_4686f0;
        case 0x4686f4u: goto label_4686f4;
        case 0x4686f8u: goto label_4686f8;
        case 0x4686fcu: goto label_4686fc;
        case 0x468700u: goto label_468700;
        case 0x468704u: goto label_468704;
        case 0x468708u: goto label_468708;
        case 0x46870cu: goto label_46870c;
        case 0x468710u: goto label_468710;
        case 0x468714u: goto label_468714;
        case 0x468718u: goto label_468718;
        case 0x46871cu: goto label_46871c;
        case 0x468720u: goto label_468720;
        case 0x468724u: goto label_468724;
        case 0x468728u: goto label_468728;
        case 0x46872cu: goto label_46872c;
        case 0x468730u: goto label_468730;
        case 0x468734u: goto label_468734;
        case 0x468738u: goto label_468738;
        case 0x46873cu: goto label_46873c;
        case 0x468740u: goto label_468740;
        case 0x468744u: goto label_468744;
        case 0x468748u: goto label_468748;
        case 0x46874cu: goto label_46874c;
        case 0x468750u: goto label_468750;
        case 0x468754u: goto label_468754;
        case 0x468758u: goto label_468758;
        case 0x46875cu: goto label_46875c;
        case 0x468760u: goto label_468760;
        case 0x468764u: goto label_468764;
        case 0x468768u: goto label_468768;
        case 0x46876cu: goto label_46876c;
        case 0x468770u: goto label_468770;
        case 0x468774u: goto label_468774;
        case 0x468778u: goto label_468778;
        case 0x46877cu: goto label_46877c;
        case 0x468780u: goto label_468780;
        case 0x468784u: goto label_468784;
        case 0x468788u: goto label_468788;
        case 0x46878cu: goto label_46878c;
        case 0x468790u: goto label_468790;
        case 0x468794u: goto label_468794;
        case 0x468798u: goto label_468798;
        case 0x46879cu: goto label_46879c;
        case 0x4687a0u: goto label_4687a0;
        case 0x4687a4u: goto label_4687a4;
        case 0x4687a8u: goto label_4687a8;
        case 0x4687acu: goto label_4687ac;
        case 0x4687b0u: goto label_4687b0;
        case 0x4687b4u: goto label_4687b4;
        case 0x4687b8u: goto label_4687b8;
        case 0x4687bcu: goto label_4687bc;
        case 0x4687c0u: goto label_4687c0;
        case 0x4687c4u: goto label_4687c4;
        case 0x4687c8u: goto label_4687c8;
        case 0x4687ccu: goto label_4687cc;
        case 0x4687d0u: goto label_4687d0;
        case 0x4687d4u: goto label_4687d4;
        case 0x4687d8u: goto label_4687d8;
        case 0x4687dcu: goto label_4687dc;
        case 0x4687e0u: goto label_4687e0;
        case 0x4687e4u: goto label_4687e4;
        case 0x4687e8u: goto label_4687e8;
        case 0x4687ecu: goto label_4687ec;
        case 0x4687f0u: goto label_4687f0;
        case 0x4687f4u: goto label_4687f4;
        case 0x4687f8u: goto label_4687f8;
        case 0x4687fcu: goto label_4687fc;
        case 0x468800u: goto label_468800;
        case 0x468804u: goto label_468804;
        case 0x468808u: goto label_468808;
        case 0x46880cu: goto label_46880c;
        case 0x468810u: goto label_468810;
        case 0x468814u: goto label_468814;
        case 0x468818u: goto label_468818;
        case 0x46881cu: goto label_46881c;
        case 0x468820u: goto label_468820;
        case 0x468824u: goto label_468824;
        case 0x468828u: goto label_468828;
        case 0x46882cu: goto label_46882c;
        case 0x468830u: goto label_468830;
        case 0x468834u: goto label_468834;
        case 0x468838u: goto label_468838;
        case 0x46883cu: goto label_46883c;
        case 0x468840u: goto label_468840;
        case 0x468844u: goto label_468844;
        case 0x468848u: goto label_468848;
        case 0x46884cu: goto label_46884c;
        case 0x468850u: goto label_468850;
        case 0x468854u: goto label_468854;
        case 0x468858u: goto label_468858;
        case 0x46885cu: goto label_46885c;
        case 0x468860u: goto label_468860;
        case 0x468864u: goto label_468864;
        case 0x468868u: goto label_468868;
        case 0x46886cu: goto label_46886c;
        case 0x468870u: goto label_468870;
        case 0x468874u: goto label_468874;
        case 0x468878u: goto label_468878;
        case 0x46887cu: goto label_46887c;
        case 0x468880u: goto label_468880;
        case 0x468884u: goto label_468884;
        case 0x468888u: goto label_468888;
        case 0x46888cu: goto label_46888c;
        case 0x468890u: goto label_468890;
        case 0x468894u: goto label_468894;
        case 0x468898u: goto label_468898;
        case 0x46889cu: goto label_46889c;
        case 0x4688a0u: goto label_4688a0;
        case 0x4688a4u: goto label_4688a4;
        case 0x4688a8u: goto label_4688a8;
        case 0x4688acu: goto label_4688ac;
        case 0x4688b0u: goto label_4688b0;
        case 0x4688b4u: goto label_4688b4;
        case 0x4688b8u: goto label_4688b8;
        case 0x4688bcu: goto label_4688bc;
        default: break;
    }

    ctx->pc = 0x4683f0u;

label_4683f0:
    // 0x4683f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4683f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4683f4:
    // 0x4683f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4683f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4683f8:
    // 0x4683f8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4683f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_4683fc:
    // 0x4683fc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x4683fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_468400:
    // 0x468400: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x468400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_468404:
    // 0x468404: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x468404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_468408:
    // 0x468408: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x468408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_46840c:
    // 0x46840c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x46840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_468410:
    // 0x468410: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x468410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_468414:
    // 0x468414: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x468414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_468418:
    // 0x468418: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x468418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_46841c:
    // 0x46841c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x46841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_468420:
    // 0x468420: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x468420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_468424:
    // 0x468424: 0xc11eeae  jal         func_47BAB8
label_468428:
    if (ctx->pc == 0x468428u) {
        ctx->pc = 0x468428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468424u;
        // 0x468428: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46842Cu;
        goto label_46842c;
    }
    ctx->pc = 0x468424u;
    SET_GPR_U32(ctx, 31, 0x46842Cu);
    ctx->pc = 0x468428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468424u;
    // 0x468428: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468424u, 0x46842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46842Cu;
label_46842c:
    // 0x46842c: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
label_468430:
    if (ctx->pc == 0x468430u) {
        ctx->pc = 0x468430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46842Cu;
        // 0x468430: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468434u;
        goto label_468434;
    }
    ctx->pc = 0x46842Cu;
    {
        const bool branch_taken_0x46842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46842Cu;
        // 0x468430: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46842c) {
            ctx->pc = 0x468890u;
            goto label_468890;
        }
    }
    ctx->pc = 0x468434u;
label_468434:
    // 0x468434: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x468434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_468438:
    // 0x468438: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x468438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46843c:
    // 0x46843c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_468440:
    // 0x468440: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x468440u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_468444:
    // 0x468444: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_468448:
    if (ctx->pc == 0x468448u) {
        ctx->pc = 0x468448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468444u;
        // 0x468448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46844Cu;
        goto label_46844c;
    }
    ctx->pc = 0x468444u;
    {
        const bool branch_taken_0x468444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x468444) {
            ctx->pc = 0x468448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468444u;
            // 0x468448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468478u;
            goto label_468478;
        }
    }
    ctx->pc = 0x46844Cu;
label_46844c:
    // 0x46844c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_468450:
    // 0x468450: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_468454:
    // 0x468454: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x468454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_468458:
    // 0x468458: 0xc11eff2  jal         func_47BFC8
label_46845c:
    if (ctx->pc == 0x46845Cu) {
        ctx->pc = 0x46845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468458u;
        // 0x46845c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x468460u;
        goto label_468460;
    }
    ctx->pc = 0x468458u;
    SET_GPR_U32(ctx, 31, 0x468460u);
    ctx->pc = 0x46845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468458u;
    // 0x46845c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468458u, 0x468460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468460u;
label_468460:
    // 0x468460: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x468460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_468464:
    // 0x468464: 0xc11f024  jal         func_47C090
label_468468:
    if (ctx->pc == 0x468468u) {
        ctx->pc = 0x468468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468464u;
        // 0x468468: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46846Cu;
        goto label_46846c;
    }
    ctx->pc = 0x468464u;
    SET_GPR_U32(ctx, 31, 0x46846Cu);
    ctx->pc = 0x468468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468464u;
    // 0x468468: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x468464u, 0x46846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46846Cu;
label_46846c:
    // 0x46846c: 0x10000109  b           . + 4 + (0x109 << 2)
label_468470:
    if (ctx->pc == 0x468470u) {
        ctx->pc = 0x468470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46846Cu;
        // 0x468470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468474u;
        goto label_468474;
    }
    ctx->pc = 0x46846Cu;
    {
        const bool branch_taken_0x46846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46846Cu;
        // 0x468470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46846c) {
            ctx->pc = 0x468894u;
            goto label_468894;
        }
    }
    ctx->pc = 0x468474u;
label_468474:
    // 0x468474: 0x0  nop
    ctx->pc = 0x468474u;
    // NOP
label_468478:
    // 0x468478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x468478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46847c:
    // 0x46847c: 0xc10c1fa  jal         func_4307E8
label_468480:
    if (ctx->pc == 0x468480u) {
        ctx->pc = 0x468480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46847Cu;
        // 0x468480: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468484u;
        goto label_468484;
    }
    ctx->pc = 0x46847Cu;
    SET_GPR_U32(ctx, 31, 0x468484u);
    ctx->pc = 0x468480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46847Cu;
    // 0x468480: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46847Cu, 0x468484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468484u;
label_468484:
    // 0x468484: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x468484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468488:
    // 0x468488: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x468488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46848c:
    // 0x46848c: 0xc11fb56  jal         func_47ED58
label_468490:
    if (ctx->pc == 0x468490u) {
        ctx->pc = 0x468490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46848Cu;
        // 0x468490: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468494u;
        goto label_468494;
    }
    ctx->pc = 0x46848Cu;
    SET_GPR_U32(ctx, 31, 0x468494u);
    ctx->pc = 0x468490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46848Cu;
    // 0x468490: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46848Cu, 0x468494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468494u;
label_468494:
    // 0x468494: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x468494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468498:
    // 0x468498: 0x144300fe  bne         $v0, $v1, . + 4 + (0xFE << 2)
label_46849c:
    if (ctx->pc == 0x46849Cu) {
        ctx->pc = 0x46849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468498u;
        // 0x46849c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4684A0u;
        goto label_4684a0;
    }
    ctx->pc = 0x468498u;
    {
        const bool branch_taken_0x468498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x46849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468498u;
        // 0x46849c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468498) {
            ctx->pc = 0x468894u;
            goto label_468894;
        }
    }
    ctx->pc = 0x4684A0u;
label_4684a0:
    // 0x4684a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4684a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4684a4:
    // 0x4684a4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_4684a8:
    if (ctx->pc == 0x4684A8u) {
        ctx->pc = 0x4684A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4684A4u;
        // 0x4684a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4684ACu;
        goto label_4684ac;
    }
    ctx->pc = 0x4684A4u;
    {
        const bool branch_taken_0x4684a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4684A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4684A4u;
        // 0x4684a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4684a4) {
            ctx->pc = 0x4684D0u;
            goto label_4684d0;
        }
    }
    ctx->pc = 0x4684ACu;
label_4684ac:
    // 0x4684ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4684acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4684b0:
    // 0x4684b0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4684b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4684b4:
    // 0x4684b4: 0xc11eff2  jal         func_47BFC8
label_4684b8:
    if (ctx->pc == 0x4684B8u) {
        ctx->pc = 0x4684B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4684B4u;
        // 0x4684b8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4684BCu;
        goto label_4684bc;
    }
    ctx->pc = 0x4684B4u;
    SET_GPR_U32(ctx, 31, 0x4684BCu);
    ctx->pc = 0x4684B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4684B4u;
    // 0x4684b8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4684B4u, 0x4684BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4684BCu;
label_4684bc:
    // 0x4684bc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4684bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_4684c0:
    // 0x4684c0: 0xc11f024  jal         func_47C090
label_4684c4:
    if (ctx->pc == 0x4684C4u) {
        ctx->pc = 0x4684C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4684C0u;
        // 0x4684c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4684C8u;
        goto label_4684c8;
    }
    ctx->pc = 0x4684C0u;
    SET_GPR_U32(ctx, 31, 0x4684C8u);
    ctx->pc = 0x4684C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4684C0u;
    // 0x4684c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4684C0u, 0x4684C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4684C8u;
label_4684c8:
    // 0x4684c8: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_4684cc:
    if (ctx->pc == 0x4684CCu) {
        ctx->pc = 0x4684CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4684C8u;
        // 0x4684cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4684D0u;
        goto label_4684d0;
    }
    ctx->pc = 0x4684C8u;
    {
        const bool branch_taken_0x4684c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4684CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4684C8u;
        // 0x4684cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4684c8) {
            ctx->pc = 0x468894u;
            goto label_468894;
        }
    }
    ctx->pc = 0x4684D0u;
label_4684d0:
    // 0x4684d0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4684d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4684d4:
    // 0x4684d4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x4684d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4684d8:
    // 0x4684d8: 0x8c47e750  lw          $a3, -0x18B0($v0)
    ctx->pc = 0x4684d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960976)));
label_4684dc:
    // 0x4684dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x4684dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4684e0:
    // 0x4684e0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4684e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4684e4:
    // 0x4684e4: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x4684e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4684e8:
    // 0x4684e8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4684e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_4684ec:
    // 0x4684ec: 0x8fb30024  lw          $s3, 0x24($sp)
    ctx->pc = 0x4684ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4684f0:
    // 0x4684f0: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x4684f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4684f4:
    // 0x4684f4: 0x8cb1e768  lw          $s1, -0x1898($a1)
    ctx->pc = 0x4684f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961000)));
label_4684f8:
    // 0x4684f8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x4684f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_4684fc:
    // 0x4684fc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4684fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_468500:
    // 0x468500: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x468500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_468504:
    // 0x468504: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x468504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_468508:
    // 0x468508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46850c:
    if (ctx->pc == 0x46850Cu) {
        ctx->pc = 0x46850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468508u;
        // 0x46850c: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468510u;
        goto label_468510;
    }
    ctx->pc = 0x468508u;
    {
        const bool branch_taken_0x468508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468508u;
        // 0x46850c: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468508) {
            ctx->pc = 0x468518u;
            goto label_468518;
        }
    }
    ctx->pc = 0x468510u;
label_468510:
    // 0x468510: 0x10000006  b           . + 4 + (0x6 << 2)
label_468514:
    if (ctx->pc == 0x468514u) {
        ctx->pc = 0x468514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468510u;
        // 0x468514: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468518u;
        goto label_468518;
    }
    ctx->pc = 0x468510u;
    {
        const bool branch_taken_0x468510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468510u;
        // 0x468514: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468510) {
            ctx->pc = 0x46852Cu;
            goto label_46852c;
        }
    }
    ctx->pc = 0x468518u;
label_468518:
    // 0x468518: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x468518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_46851c:
    // 0x46851c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_468520:
    if (ctx->pc == 0x468520u) {
        ctx->pc = 0x468520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46851Cu;
        // 0x468520: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468524u;
        goto label_468524;
    }
    ctx->pc = 0x46851Cu;
    {
        const bool branch_taken_0x46851c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46851c) {
            ctx->pc = 0x468520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46851Cu;
            // 0x468520: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46852Cu;
            goto label_46852c;
        }
    }
    ctx->pc = 0x468524u;
label_468524:
    // 0x468524: 0x139083  sra         $s2, $s3, 2
    ctx->pc = 0x468524u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 2));
label_468528:
    // 0x468528: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x468528u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_46852c:
    // 0x46852c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x46852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_468530:
    // 0x468530: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x468530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_468534:
    // 0x468534: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_468538:
    if (ctx->pc == 0x468538u) {
        ctx->pc = 0x468538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468534u;
        // 0x468538: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46853Cu;
        goto label_46853c;
    }
    ctx->pc = 0x468534u;
    {
        const bool branch_taken_0x468534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468534u;
        // 0x468538: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468534) {
            ctx->pc = 0x46858Cu;
            goto label_46858c;
        }
    }
    ctx->pc = 0x46853Cu;
label_46853c:
    // 0x46853c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x46853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_468540:
    // 0x468540: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x468540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_468544:
    // 0x468544: 0x32630010  andi        $v1, $s3, 0x10
    ctx->pc = 0x468544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_468548:
    // 0x468548: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x468548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_46854c:
    // 0x46854c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_468550:
    if (ctx->pc == 0x468550u) {
        ctx->pc = 0x468550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46854Cu;
        // 0x468550: 0xb18821  addu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468554u;
        goto label_468554;
    }
    ctx->pc = 0x46854Cu;
    {
        const bool branch_taken_0x46854c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x468550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46854Cu;
        // 0x468550: 0xb18821  addu        $s1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46854c) {
            ctx->pc = 0x46855Cu;
            goto label_46855c;
        }
    }
    ctx->pc = 0x468554u;
label_468554:
    // 0x468554: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x468554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_468558:
    // 0x468558: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x468558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_46855c:
    // 0x46855c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x46855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_468560:
    // 0x468560: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_468564:
    if (ctx->pc == 0x468564u) {
        ctx->pc = 0x468564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468560u;
        // 0x468564: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468568u;
        goto label_468568;
    }
    ctx->pc = 0x468560u;
    {
        const bool branch_taken_0x468560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468560u;
        // 0x468564: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468560) {
            ctx->pc = 0x46856Cu;
            goto label_46856c;
        }
    }
    ctx->pc = 0x468568u;
label_468568:
    // 0x468568: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x468568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_46856c:
    // 0x46856c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_468570:
    if (ctx->pc == 0x468570u) {
        ctx->pc = 0x468570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46856Cu;
        // 0x468570: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x468574u;
        goto label_468574;
    }
    ctx->pc = 0x46856Cu;
    {
        const bool branch_taken_0x46856c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x468570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46856Cu;
        // 0x468570: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46856c) {
            ctx->pc = 0x46857Cu;
            goto label_46857c;
        }
    }
    ctx->pc = 0x468574u;
label_468574:
    // 0x468574: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x468574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_468578:
    // 0x468578: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x468578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_46857c:
    // 0x46857c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_468580:
    // 0x468580: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x468580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_468584:
    // 0x468584: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x468584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_468588:
    // 0x468588: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x468588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46858c:
    // 0x46858c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46858cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_468590:
    // 0x468590: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x468590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_468594:
    // 0x468594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x468594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_468598:
    // 0x468598: 0x40f809  jalr        $v0
label_46859c:
    if (ctx->pc == 0x46859Cu) {
        ctx->pc = 0x46859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468598u;
        // 0x46859c: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4685A0u;
        goto label_4685a0;
    }
    ctx->pc = 0x468598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4685A0u);
        ctx->pc = 0x46859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468598u;
        // 0x46859c: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468598u, 0x4685A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4685A0u;
label_4685a0:
    // 0x4685a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4685a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4685a4:
    // 0x4685a4: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_4685a8:
    if (ctx->pc == 0x4685A8u) {
        ctx->pc = 0x4685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4685A4u;
        // 0x4685a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4685ACu;
        goto label_4685ac;
    }
    ctx->pc = 0x4685A4u;
    {
        const bool branch_taken_0x4685a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4685a4) {
            ctx->pc = 0x4685A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4685A4u;
            // 0x4685a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4685D8u;
            goto label_4685d8;
        }
    }
    ctx->pc = 0x4685ACu;
label_4685ac:
    // 0x4685ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4685acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4685b0:
    // 0x4685b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4685b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4685b4:
    // 0x4685b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4685b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4685b8:
    // 0x4685b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4685b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4685bc:
    // 0x4685bc: 0xc11eff2  jal         func_47BFC8
label_4685c0:
    if (ctx->pc == 0x4685C0u) {
        ctx->pc = 0x4685C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4685BCu;
        // 0x4685c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4685C4u;
        goto label_4685c4;
    }
    ctx->pc = 0x4685BCu;
    SET_GPR_U32(ctx, 31, 0x4685C4u);
    ctx->pc = 0x4685C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4685BCu;
    // 0x4685c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4685BCu, 0x4685C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4685C4u;
label_4685c4:
    // 0x4685c4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4685c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_4685c8:
    // 0x4685c8: 0xc11f024  jal         func_47C090
label_4685cc:
    if (ctx->pc == 0x4685CCu) {
        ctx->pc = 0x4685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4685C8u;
        // 0x4685cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4685D0u;
        goto label_4685d0;
    }
    ctx->pc = 0x4685C8u;
    SET_GPR_U32(ctx, 31, 0x4685D0u);
    ctx->pc = 0x4685CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4685C8u;
    // 0x4685cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4685C8u, 0x4685D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4685D0u;
label_4685d0:
    // 0x4685d0: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_4685d4:
    if (ctx->pc == 0x4685D4u) {
        ctx->pc = 0x4685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4685D0u;
        // 0x4685d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4685D8u;
        goto label_4685d8;
    }
    ctx->pc = 0x4685D0u;
    {
        const bool branch_taken_0x4685d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4685D0u;
        // 0x4685d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4685d0) {
            ctx->pc = 0x468894u;
            goto label_468894;
        }
    }
    ctx->pc = 0x4685D8u;
label_4685d8:
    // 0x4685d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4685d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4685dc:
    // 0x4685dc: 0xc10c1fa  jal         func_4307E8
label_4685e0:
    if (ctx->pc == 0x4685E0u) {
        ctx->pc = 0x4685E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4685DCu;
        // 0x4685e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4685E4u;
        goto label_4685e4;
    }
    ctx->pc = 0x4685DCu;
    SET_GPR_U32(ctx, 31, 0x4685E4u);
    ctx->pc = 0x4685E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4685DCu;
    // 0x4685e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4685DCu, 0x4685E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4685E4u;
label_4685e4:
    // 0x4685e4: 0x8ee3e768  lw          $v1, -0x1898($s7)
    ctx->pc = 0x4685e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294961000)));
label_4685e8:
    // 0x4685e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4685e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4685ec:
    // 0x4685ec: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x4685ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_4685f0:
    // 0x4685f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4685f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4685f4:
    // 0x4685f4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x4685f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_4685f8:
    // 0x4685f8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x4685f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_4685fc:
    // 0x4685fc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x4685fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_468600:
    // 0x468600: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x468600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_468604:
    // 0x468604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x468604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468608:
    // 0x468608: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x468608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_46860c:
    // 0x46860c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46860cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_468610:
    // 0x468610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468614:
    // 0x468614: 0xc11c68e  jal         func_471A38
label_468618:
    if (ctx->pc == 0x468618u) {
        ctx->pc = 0x468618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468614u;
        // 0x468618: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46861Cu;
        goto label_46861c;
    }
    ctx->pc = 0x468614u;
    SET_GPR_U32(ctx, 31, 0x46861Cu);
    ctx->pc = 0x468618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468614u;
    // 0x468618: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471A38u, 0x468614u, 0x46861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46861Cu;
label_46861c:
    // 0x46861c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x46861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_468620:
    // 0x468620: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x468620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_468624:
    // 0x468624: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x468624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468628:
    // 0x468628: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x468628u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_46862c:
    // 0x46862c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x46862cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_468630:
    // 0x468630: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x468630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468634:
    // 0x468634: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x468634u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_468638:
    // 0x468638: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x468638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_46863c:
    // 0x46863c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x46863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468640:
    // 0x468640: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x468640u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_468644:
    // 0x468644: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x468644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_468648:
    // 0x468648: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x468648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_46864c:
    // 0x46864c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x46864cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_468650:
    // 0x468650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x468650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468654:
    // 0x468654: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x468654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_468658:
    // 0x468658: 0x26080034  addiu       $t0, $s0, 0x34
    ctx->pc = 0x468658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_46865c:
    // 0x46865c: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x46865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_468660:
    // 0x468660: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x468660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_468664:
    // 0x468664: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x468664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_468668:
    // 0x468668: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x468668u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46866c:
    // 0x46866c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x46866cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_468670:
    // 0x468670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x468670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_468674:
    // 0x468674: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x468674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_468678:
    // 0x468678: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x468678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46867c:
    // 0x46867c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x46867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_468680:
    // 0x468680: 0xae080038  sw          $t0, 0x38($s0)
    ctx->pc = 0x468680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 8));
label_468684:
    // 0x468684: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x468684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_468688:
    // 0x468688: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x468688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
label_46868c:
    // 0x46868c: 0xc11eeae  jal         func_47BAB8
label_468690:
    if (ctx->pc == 0x468690u) {
        ctx->pc = 0x468690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46868Cu;
        // 0x468690: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468694u;
        goto label_468694;
    }
    ctx->pc = 0x46868Cu;
    SET_GPR_U32(ctx, 31, 0x468694u);
    ctx->pc = 0x468690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46868Cu;
    // 0x468690: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46868Cu, 0x468694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468694u;
label_468694:
    // 0x468694: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_468698:
    if (ctx->pc == 0x468698u) {
        ctx->pc = 0x468698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468694u;
        // 0x468698: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46869Cu;
        goto label_46869c;
    }
    ctx->pc = 0x468694u;
    {
        const bool branch_taken_0x468694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468694u;
        // 0x468698: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468694) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x46869Cu;
label_46869c:
    // 0x46869c: 0x3c11fffc  lui         $s1, 0xFFFC
    ctx->pc = 0x46869cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65532 << 16));
label_4686a0:
    // 0x4686a0: 0x3631b000  ori         $s1, $s1, 0xB000
    ctx->pc = 0x4686a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45056);
label_4686a4:
    // 0x4686a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4686a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4686a8:
    // 0x4686a8: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x4686a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_4686ac:
    // 0x4686ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4686b0:
    if (ctx->pc == 0x4686B0u) {
        ctx->pc = 0x4686B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686ACu;
        // 0x4686b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4686B4u;
        goto label_4686b4;
    }
    ctx->pc = 0x4686ACu;
    {
        const bool branch_taken_0x4686ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4686B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686ACu;
        // 0x4686b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4686ac) {
            ctx->pc = 0x4686D8u;
            goto label_4686d8;
        }
    }
    ctx->pc = 0x4686B4u;
label_4686b4:
    // 0x4686b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4686b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4686b8:
    // 0x4686b8: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x4686b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
label_4686bc:
    // 0x4686bc: 0xc11eff2  jal         func_47BFC8
label_4686c0:
    if (ctx->pc == 0x4686C0u) {
        ctx->pc = 0x4686C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686BCu;
        // 0x4686c0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4686C4u;
        goto label_4686c4;
    }
    ctx->pc = 0x4686BCu;
    SET_GPR_U32(ctx, 31, 0x4686C4u);
    ctx->pc = 0x4686C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4686BCu;
    // 0x4686c0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4686BCu, 0x4686C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4686C4u;
label_4686c4:
    // 0x4686c4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4686c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_4686c8:
    // 0x4686c8: 0xc11f024  jal         func_47C090
label_4686cc:
    if (ctx->pc == 0x4686CCu) {
        ctx->pc = 0x4686CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686C8u;
        // 0x4686cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4686D0u;
        goto label_4686d0;
    }
    ctx->pc = 0x4686C8u;
    SET_GPR_U32(ctx, 31, 0x4686D0u);
    ctx->pc = 0x4686CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4686C8u;
    // 0x4686cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4686C8u, 0x4686D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4686D0u;
label_4686d0:
    // 0x4686d0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_4686d4:
    if (ctx->pc == 0x4686D4u) {
        ctx->pc = 0x4686D8u;
        goto label_4686d8;
    }
    ctx->pc = 0x4686D0u;
    {
        const bool branch_taken_0x4686d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4686d0) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x4686D8u;
label_4686d8:
    // 0x4686d8: 0xc11b48e  jal         func_46D238
label_4686dc:
    if (ctx->pc == 0x4686DCu) {
        ctx->pc = 0x4686DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686D8u;
        // 0x4686dc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4686E0u;
        goto label_4686e0;
    }
    ctx->pc = 0x4686D8u;
    SET_GPR_U32(ctx, 31, 0x4686E0u);
    ctx->pc = 0x4686DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4686D8u;
    // 0x4686dc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D238u, 0x4686D8u, 0x4686E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4686E0u;
label_4686e0:
    // 0x4686e0: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_4686e4:
    if (ctx->pc == 0x4686E4u) {
        ctx->pc = 0x4686E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686E0u;
        // 0x4686e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4686E8u;
        goto label_4686e8;
    }
    ctx->pc = 0x4686E0u;
    {
        const bool branch_taken_0x4686e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4686E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686E0u;
        // 0x4686e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4686e0) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x4686E8u;
label_4686e8:
    // 0x4686e8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_4686ec:
    if (ctx->pc == 0x4686ECu) {
        ctx->pc = 0x4686ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686E8u;
        // 0x4686ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4686F0u;
        goto label_4686f0;
    }
    ctx->pc = 0x4686E8u;
    {
        const bool branch_taken_0x4686e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4686ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686E8u;
        // 0x4686ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4686e8) {
            ctx->pc = 0x46875Cu;
            goto label_46875c;
        }
    }
    ctx->pc = 0x4686F0u;
label_4686f0:
    // 0x4686f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4686f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4686f4:
    // 0x4686f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4686f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4686f8:
    // 0x4686f8: 0xc11eeae  jal         func_47BAB8
label_4686fc:
    if (ctx->pc == 0x4686FCu) {
        ctx->pc = 0x4686FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4686F8u;
        // 0x4686fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468700u;
        goto label_468700;
    }
    ctx->pc = 0x4686F8u;
    SET_GPR_U32(ctx, 31, 0x468700u);
    ctx->pc = 0x4686FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4686F8u;
    // 0x4686fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4686F8u, 0x468700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468700u;
label_468700:
    // 0x468700: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_468704:
    if (ctx->pc == 0x468704u) {
        ctx->pc = 0x468704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468700u;
        // 0x468704: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468708u;
        goto label_468708;
    }
    ctx->pc = 0x468700u;
    {
        const bool branch_taken_0x468700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468700u;
        // 0x468704: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468700) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x468708u;
label_468708:
    // 0x468708: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x468708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46870c:
    // 0x46870c: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x46870cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_468710:
    // 0x468710: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_468714:
    if (ctx->pc == 0x468714u) {
        ctx->pc = 0x468714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468710u;
        // 0x468714: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468718u;
        goto label_468718;
    }
    ctx->pc = 0x468710u;
    {
        const bool branch_taken_0x468710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468710u;
        // 0x468714: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468710) {
            ctx->pc = 0x46873Cu;
            goto label_46873c;
        }
    }
    ctx->pc = 0x468718u;
label_468718:
    // 0x468718: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46871c:
    // 0x46871c: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x46871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
label_468720:
    // 0x468720: 0xc11eff2  jal         func_47BFC8
label_468724:
    if (ctx->pc == 0x468724u) {
        ctx->pc = 0x468724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468720u;
        // 0x468724: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x468728u;
        goto label_468728;
    }
    ctx->pc = 0x468720u;
    SET_GPR_U32(ctx, 31, 0x468728u);
    ctx->pc = 0x468724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468720u;
    // 0x468724: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468720u, 0x468728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468728u;
label_468728:
    // 0x468728: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x468728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_46872c:
    // 0x46872c: 0xc11f024  jal         func_47C090
label_468730:
    if (ctx->pc == 0x468730u) {
        ctx->pc = 0x468730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46872Cu;
        // 0x468730: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468734u;
        goto label_468734;
    }
    ctx->pc = 0x46872Cu;
    SET_GPR_U32(ctx, 31, 0x468734u);
    ctx->pc = 0x468730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46872Cu;
    // 0x468730: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46872Cu, 0x468734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468734u;
label_468734:
    // 0x468734: 0x10000054  b           . + 4 + (0x54 << 2)
label_468738:
    if (ctx->pc == 0x468738u) {
        ctx->pc = 0x46873Cu;
        goto label_46873c;
    }
    ctx->pc = 0x468734u;
    {
        const bool branch_taken_0x468734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468734) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x46873Cu;
label_46873c:
    // 0x46873c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46873cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_468740:
    // 0x468740: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x468740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_468744:
    // 0x468744: 0xc119eca  jal         func_467B28
label_468748:
    if (ctx->pc == 0x468748u) {
        ctx->pc = 0x468748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468744u;
        // 0x468748: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46874Cu;
        goto label_46874c;
    }
    ctx->pc = 0x468744u;
    SET_GPR_U32(ctx, 31, 0x46874Cu);
    ctx->pc = 0x468748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468744u;
    // 0x468748: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B28u, 0x468744u, 0x46874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46874Cu;
label_46874c:
    // 0x46874c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_468750:
    if (ctx->pc == 0x468750u) {
        ctx->pc = 0x468750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46874Cu;
        // 0x468750: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468754u;
        goto label_468754;
    }
    ctx->pc = 0x46874Cu;
    {
        const bool branch_taken_0x46874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46874Cu;
        // 0x468750: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46874c) {
            ctx->pc = 0x4687A0u;
            goto label_4687a0;
        }
    }
    ctx->pc = 0x468754u;
label_468754:
    // 0x468754: 0x1000004c  b           . + 4 + (0x4C << 2)
label_468758:
    if (ctx->pc == 0x468758u) {
        ctx->pc = 0x46875Cu;
        goto label_46875c;
    }
    ctx->pc = 0x468754u;
    {
        const bool branch_taken_0x468754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468754) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x46875Cu;
label_46875c:
    // 0x46875c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_468760:
    // 0x468760: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x468760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_468764:
    // 0x468764: 0xc11eeae  jal         func_47BAB8
label_468768:
    if (ctx->pc == 0x468768u) {
        ctx->pc = 0x468768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468764u;
        // 0x468768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46876Cu;
        goto label_46876c;
    }
    ctx->pc = 0x468764u;
    SET_GPR_U32(ctx, 31, 0x46876Cu);
    ctx->pc = 0x468768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468764u;
    // 0x468768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468764u, 0x46876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46876Cu;
label_46876c:
    // 0x46876c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_468770:
    if (ctx->pc == 0x468770u) {
        ctx->pc = 0x468770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46876Cu;
        // 0x468770: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468774u;
        goto label_468774;
    }
    ctx->pc = 0x46876Cu;
    {
        const bool branch_taken_0x46876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46876Cu;
        // 0x468770: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46876c) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x468774u;
label_468774:
    // 0x468774: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x468774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_468778:
    // 0x468778: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x468778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46877c:
    // 0x46877c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
label_468780:
    if (ctx->pc == 0x468780u) {
        ctx->pc = 0x468780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46877Cu;
        // 0x468780: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468784u;
        goto label_468784;
    }
    ctx->pc = 0x46877Cu;
    {
        const bool branch_taken_0x46877c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46877Cu;
        // 0x468780: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46877c) {
            ctx->pc = 0x468718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468718;
        }
    }
    ctx->pc = 0x468784u;
label_468784:
    // 0x468784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x468784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_468788:
    // 0x468788: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x468788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_46878c:
    // 0x46878c: 0xc11a014  jal         func_468050
label_468790:
    if (ctx->pc == 0x468790u) {
        ctx->pc = 0x468790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46878Cu;
        // 0x468790: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468794u;
        goto label_468794;
    }
    ctx->pc = 0x46878Cu;
    SET_GPR_U32(ctx, 31, 0x468794u);
    ctx->pc = 0x468790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46878Cu;
    // 0x468790: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468050u, 0x46878Cu, 0x468794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468794u;
label_468794:
    // 0x468794: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_468798:
    if (ctx->pc == 0x468798u) {
        ctx->pc = 0x46879Cu;
        goto label_46879c;
    }
    ctx->pc = 0x468794u;
    {
        const bool branch_taken_0x468794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468794) {
            ctx->pc = 0x46874Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46874c;
        }
    }
    ctx->pc = 0x46879Cu;
label_46879c:
    // 0x46879c: 0x0  nop
    ctx->pc = 0x46879cu;
    // NOP
label_4687a0:
    // 0x4687a0: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x4687a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
label_4687a4:
    // 0x4687a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4687a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4687a8:
    // 0x4687a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4687a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_4687ac:
    // 0x4687ac: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x4687acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4687b0:
    // 0x4687b0: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x4687b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4687b4:
    // 0x4687b4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x4687b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4687b8:
    // 0x4687b8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x4687b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4687bc:
    // 0x4687bc: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x4687bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4687c0:
    // 0x4687c0: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x4687c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4687c4:
    // 0x4687c4: 0xb2060057  sdl         $a2, 0x57($s0)
    ctx->pc = 0x4687c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4687c8:
    // 0x4687c8: 0xb6060050  sdr         $a2, 0x50($s0)
    ctx->pc = 0x4687c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4687cc:
    // 0x4687cc: 0xb202005f  sdl         $v0, 0x5F($s0)
    ctx->pc = 0x4687ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4687d0:
    // 0x4687d0: 0xb6020058  sdr         $v0, 0x58($s0)
    ctx->pc = 0x4687d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4687d4:
    // 0x4687d4: 0xb2030067  sdl         $v1, 0x67($s0)
    ctx->pc = 0x4687d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4687d8:
    // 0x4687d8: 0xb6030060  sdr         $v1, 0x60($s0)
    ctx->pc = 0x4687d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4687dc:
    // 0x4687dc: 0xc11c564  jal         func_471590
label_4687e0:
    if (ctx->pc == 0x4687E0u) {
        ctx->pc = 0x4687E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4687DCu;
        // 0x4687e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4687E4u;
        goto label_4687e4;
    }
    ctx->pc = 0x4687DCu;
    SET_GPR_U32(ctx, 31, 0x4687E4u);
    ctx->pc = 0x4687E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4687DCu;
    // 0x4687e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471590u, 0x4687DCu, 0x4687E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4687E4u;
label_4687e4:
    // 0x4687e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4687e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4687e8:
    // 0x4687e8: 0xc11c766  jal         func_471D98
label_4687ec:
    if (ctx->pc == 0x4687ECu) {
        ctx->pc = 0x4687ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4687E8u;
        // 0x4687ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4687F0u;
        goto label_4687f0;
    }
    ctx->pc = 0x4687E8u;
    SET_GPR_U32(ctx, 31, 0x4687F0u);
    ctx->pc = 0x4687ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4687E8u;
    // 0x4687ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x4687E8u, 0x4687F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4687F0u;
label_4687f0:
    // 0x4687f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4687f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4687f4:
    // 0x4687f4: 0x58600010  blezl       $v1, . + 4 + (0x10 << 2)
label_4687f8:
    if (ctx->pc == 0x4687F8u) {
        ctx->pc = 0x4687F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4687F4u;
        // 0x4687f8: 0x26f1e768  addiu       $s1, $s7, -0x1898 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4687FCu;
        goto label_4687fc;
    }
    ctx->pc = 0x4687F4u;
    {
        const bool branch_taken_0x4687f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4687f4) {
            ctx->pc = 0x4687F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4687F4u;
            // 0x4687f8: 0x26f1e768  addiu       $s1, $s7, -0x1898 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961000));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468838u;
            goto label_468838;
        }
    }
    ctx->pc = 0x4687FCu;
label_4687fc:
    // 0x4687fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4687fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_468800:
    // 0x468800: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x468800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_468804:
    // 0x468804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x468804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_468808:
    // 0x468808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x468808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46880c:
    // 0x46880c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x46880cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468810:
    // 0x468810: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_468814:
    if (ctx->pc == 0x468814u) {
        ctx->pc = 0x468814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468810u;
        // 0x468814: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468818u;
        goto label_468818;
    }
    ctx->pc = 0x468810u;
    {
        const bool branch_taken_0x468810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x468810) {
            ctx->pc = 0x468814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468810u;
            // 0x468814: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468824u;
            goto label_468824;
        }
    }
    ctx->pc = 0x468818u;
label_468818:
    // 0x468818: 0xc11b404  jal         func_46D010
label_46881c:
    if (ctx->pc == 0x46881Cu) {
        ctx->pc = 0x468820u;
        goto label_468820;
    }
    ctx->pc = 0x468818u;
    SET_GPR_U32(ctx, 31, 0x468820u);
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x468818u, 0x468820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468820u;
label_468820:
    // 0x468820: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x468820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_468824:
    // 0x468824: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x468824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_468828:
    // 0x468828: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x468828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46882c:
    // 0x46882c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_468830:
    if (ctx->pc == 0x468830u) {
        ctx->pc = 0x468830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46882Cu;
        // 0x468830: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468834u;
        goto label_468834;
    }
    ctx->pc = 0x46882Cu;
    {
        const bool branch_taken_0x46882c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46882c) {
            ctx->pc = 0x468830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46882Cu;
            // 0x468830: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468800;
        }
    }
    ctx->pc = 0x468834u;
label_468834:
    // 0x468834: 0x26f1e768  addiu       $s1, $s7, -0x1898
    ctx->pc = 0x468834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961000));
label_468838:
    // 0x468838: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x468838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46883c:
    // 0x46883c: 0xc11ff8e  jal         func_47FE38
label_468840:
    if (ctx->pc == 0x468840u) {
        ctx->pc = 0x468840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46883Cu;
        // 0x468840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468844u;
        goto label_468844;
    }
    ctx->pc = 0x46883Cu;
    SET_GPR_U32(ctx, 31, 0x468844u);
    ctx->pc = 0x468840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46883Cu;
    // 0x468840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x46883Cu, 0x468844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468844u;
label_468844:
    // 0x468844: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x468844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_468848:
    // 0x468848: 0xaf8088a8  sw          $zero, -0x7758($gp)
    ctx->pc = 0x468848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), GPR_U32(ctx, 0));
label_46884c:
    // 0x46884c: 0xaf8088ac  sw          $zero, -0x7754($gp)
    ctx->pc = 0x46884cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936748), GPR_U32(ctx, 0));
label_468850:
    // 0x468850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x468850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_468854:
    // 0x468854: 0xc11fd22  jal         func_47F488
label_468858:
    if (ctx->pc == 0x468858u) {
        ctx->pc = 0x468858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468854u;
        // 0x468858: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46885Cu;
        goto label_46885c;
    }
    ctx->pc = 0x468854u;
    SET_GPR_U32(ctx, 31, 0x46885Cu);
    ctx->pc = 0x468858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468854u;
    // 0x468858: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x468854u, 0x46885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46885Cu;
label_46885c:
    // 0x46885c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_468860:
    if (ctx->pc == 0x468860u) {
        ctx->pc = 0x468860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46885Cu;
        // 0x468860: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468864u;
        goto label_468864;
    }
    ctx->pc = 0x46885Cu;
    {
        const bool branch_taken_0x46885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46885Cu;
        // 0x468860: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46885c) {
            ctx->pc = 0x468888u;
            goto label_468888;
        }
    }
    ctx->pc = 0x468864u;
label_468864:
    // 0x468864: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_468868:
    if (ctx->pc == 0x468868u) {
        ctx->pc = 0x468868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468864u;
        // 0x468868: 0x8f8788ac  lw          $a3, -0x7754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46886Cu;
        goto label_46886c;
    }
    ctx->pc = 0x468864u;
    {
        const bool branch_taken_0x468864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x468868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468864u;
        // 0x468868: 0x8f8788ac  lw          $a3, -0x7754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468864) {
            ctx->pc = 0x468878u;
            goto label_468878;
        }
    }
    ctx->pc = 0x46886Cu;
label_46886c:
    // 0x46886c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_468870:
    // 0x468870: 0xc11fe4a  jal         func_47F928
label_468874:
    if (ctx->pc == 0x468874u) {
        ctx->pc = 0x468874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468870u;
        // 0x468874: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468878u;
        goto label_468878;
    }
    ctx->pc = 0x468870u;
    SET_GPR_U32(ctx, 31, 0x468878u);
    ctx->pc = 0x468874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468870u;
    // 0x468874: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F928u, 0x468870u, 0x468878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468878u;
label_468878:
    // 0x468878: 0xc11c656  jal         func_471958
label_46887c:
    if (ctx->pc == 0x46887Cu) {
        ctx->pc = 0x46887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468878u;
        // 0x46887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468880u;
        goto label_468880;
    }
    ctx->pc = 0x468878u;
    SET_GPR_U32(ctx, 31, 0x468880u);
    ctx->pc = 0x46887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468878u;
    // 0x46887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471958u, 0x468878u, 0x468880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468880u;
label_468880:
    // 0x468880: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_468884:
    if (ctx->pc == 0x468884u) {
        ctx->pc = 0x468884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468880u;
        // 0x468884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468888u;
        goto label_468888;
    }
    ctx->pc = 0x468880u;
    {
        const bool branch_taken_0x468880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468880u;
        // 0x468884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468880) {
            ctx->pc = 0x468894u;
            goto label_468894;
        }
    }
    ctx->pc = 0x468888u;
label_468888:
    // 0x468888: 0xc11c384  jal         func_470E10
label_46888c:
    if (ctx->pc == 0x46888Cu) {
        ctx->pc = 0x46888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468888u;
        // 0x46888c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468890u;
        goto label_468890;
    }
    ctx->pc = 0x468888u;
    SET_GPR_U32(ctx, 31, 0x468890u);
    ctx->pc = 0x46888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468888u;
    // 0x46888c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E10u, 0x468888u, 0x468890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468890u;
label_468890:
    // 0x468890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468894:
    // 0x468894: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x468894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_468898:
    // 0x468898: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x468898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_46889c:
    // 0x46889c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x46889cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4688a0:
    // 0x4688a0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4688a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4688a4:
    // 0x4688a4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4688a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4688a8:
    // 0x4688a8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4688a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4688ac:
    // 0x4688ac: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4688acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4688b0:
    // 0x4688b0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4688b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4688b4:
    // 0x4688b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4688b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4688b8:
    // 0x4688b8: 0x3e00008  jr          $ra
label_4688bc:
    if (ctx->pc == 0x4688BCu) {
        ctx->pc = 0x4688BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4688B8u;
        // 0x4688bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4688C0u;
        goto label_fallthrough_0x4688b8;
    }
    ctx->pc = 0x4688B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4688BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4688B8u;
        // 0x4688bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4688B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4688b8:
    ctx->pc = 0x4688C0u;
}
