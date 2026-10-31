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

// Function: sub_004763F8
// Address: 0x4763f8 - 0x476898
void sub_004763F8_0x4763f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004763F8_0x4763f8");
#endif

    switch (ctx->pc) {
        case 0x4763f8u: goto label_4763f8;
        case 0x4763fcu: goto label_4763fc;
        case 0x476400u: goto label_476400;
        case 0x476404u: goto label_476404;
        case 0x476408u: goto label_476408;
        case 0x47640cu: goto label_47640c;
        case 0x476410u: goto label_476410;
        case 0x476414u: goto label_476414;
        case 0x476418u: goto label_476418;
        case 0x47641cu: goto label_47641c;
        case 0x476420u: goto label_476420;
        case 0x476424u: goto label_476424;
        case 0x476428u: goto label_476428;
        case 0x47642cu: goto label_47642c;
        case 0x476430u: goto label_476430;
        case 0x476434u: goto label_476434;
        case 0x476438u: goto label_476438;
        case 0x47643cu: goto label_47643c;
        case 0x476440u: goto label_476440;
        case 0x476444u: goto label_476444;
        case 0x476448u: goto label_476448;
        case 0x47644cu: goto label_47644c;
        case 0x476450u: goto label_476450;
        case 0x476454u: goto label_476454;
        case 0x476458u: goto label_476458;
        case 0x47645cu: goto label_47645c;
        case 0x476460u: goto label_476460;
        case 0x476464u: goto label_476464;
        case 0x476468u: goto label_476468;
        case 0x47646cu: goto label_47646c;
        case 0x476470u: goto label_476470;
        case 0x476474u: goto label_476474;
        case 0x476478u: goto label_476478;
        case 0x47647cu: goto label_47647c;
        case 0x476480u: goto label_476480;
        case 0x476484u: goto label_476484;
        case 0x476488u: goto label_476488;
        case 0x47648cu: goto label_47648c;
        case 0x476490u: goto label_476490;
        case 0x476494u: goto label_476494;
        case 0x476498u: goto label_476498;
        case 0x47649cu: goto label_47649c;
        case 0x4764a0u: goto label_4764a0;
        case 0x4764a4u: goto label_4764a4;
        case 0x4764a8u: goto label_4764a8;
        case 0x4764acu: goto label_4764ac;
        case 0x4764b0u: goto label_4764b0;
        case 0x4764b4u: goto label_4764b4;
        case 0x4764b8u: goto label_4764b8;
        case 0x4764bcu: goto label_4764bc;
        case 0x4764c0u: goto label_4764c0;
        case 0x4764c4u: goto label_4764c4;
        case 0x4764c8u: goto label_4764c8;
        case 0x4764ccu: goto label_4764cc;
        case 0x4764d0u: goto label_4764d0;
        case 0x4764d4u: goto label_4764d4;
        case 0x4764d8u: goto label_4764d8;
        case 0x4764dcu: goto label_4764dc;
        case 0x4764e0u: goto label_4764e0;
        case 0x4764e4u: goto label_4764e4;
        case 0x4764e8u: goto label_4764e8;
        case 0x4764ecu: goto label_4764ec;
        case 0x4764f0u: goto label_4764f0;
        case 0x4764f4u: goto label_4764f4;
        case 0x4764f8u: goto label_4764f8;
        case 0x4764fcu: goto label_4764fc;
        case 0x476500u: goto label_476500;
        case 0x476504u: goto label_476504;
        case 0x476508u: goto label_476508;
        case 0x47650cu: goto label_47650c;
        case 0x476510u: goto label_476510;
        case 0x476514u: goto label_476514;
        case 0x476518u: goto label_476518;
        case 0x47651cu: goto label_47651c;
        case 0x476520u: goto label_476520;
        case 0x476524u: goto label_476524;
        case 0x476528u: goto label_476528;
        case 0x47652cu: goto label_47652c;
        case 0x476530u: goto label_476530;
        case 0x476534u: goto label_476534;
        case 0x476538u: goto label_476538;
        case 0x47653cu: goto label_47653c;
        case 0x476540u: goto label_476540;
        case 0x476544u: goto label_476544;
        case 0x476548u: goto label_476548;
        case 0x47654cu: goto label_47654c;
        case 0x476550u: goto label_476550;
        case 0x476554u: goto label_476554;
        case 0x476558u: goto label_476558;
        case 0x47655cu: goto label_47655c;
        case 0x476560u: goto label_476560;
        case 0x476564u: goto label_476564;
        case 0x476568u: goto label_476568;
        case 0x47656cu: goto label_47656c;
        case 0x476570u: goto label_476570;
        case 0x476574u: goto label_476574;
        case 0x476578u: goto label_476578;
        case 0x47657cu: goto label_47657c;
        case 0x476580u: goto label_476580;
        case 0x476584u: goto label_476584;
        case 0x476588u: goto label_476588;
        case 0x47658cu: goto label_47658c;
        case 0x476590u: goto label_476590;
        case 0x476594u: goto label_476594;
        case 0x476598u: goto label_476598;
        case 0x47659cu: goto label_47659c;
        case 0x4765a0u: goto label_4765a0;
        case 0x4765a4u: goto label_4765a4;
        case 0x4765a8u: goto label_4765a8;
        case 0x4765acu: goto label_4765ac;
        case 0x4765b0u: goto label_4765b0;
        case 0x4765b4u: goto label_4765b4;
        case 0x4765b8u: goto label_4765b8;
        case 0x4765bcu: goto label_4765bc;
        case 0x4765c0u: goto label_4765c0;
        case 0x4765c4u: goto label_4765c4;
        case 0x4765c8u: goto label_4765c8;
        case 0x4765ccu: goto label_4765cc;
        case 0x4765d0u: goto label_4765d0;
        case 0x4765d4u: goto label_4765d4;
        case 0x4765d8u: goto label_4765d8;
        case 0x4765dcu: goto label_4765dc;
        case 0x4765e0u: goto label_4765e0;
        case 0x4765e4u: goto label_4765e4;
        case 0x4765e8u: goto label_4765e8;
        case 0x4765ecu: goto label_4765ec;
        case 0x4765f0u: goto label_4765f0;
        case 0x4765f4u: goto label_4765f4;
        case 0x4765f8u: goto label_4765f8;
        case 0x4765fcu: goto label_4765fc;
        case 0x476600u: goto label_476600;
        case 0x476604u: goto label_476604;
        case 0x476608u: goto label_476608;
        case 0x47660cu: goto label_47660c;
        case 0x476610u: goto label_476610;
        case 0x476614u: goto label_476614;
        case 0x476618u: goto label_476618;
        case 0x47661cu: goto label_47661c;
        case 0x476620u: goto label_476620;
        case 0x476624u: goto label_476624;
        case 0x476628u: goto label_476628;
        case 0x47662cu: goto label_47662c;
        case 0x476630u: goto label_476630;
        case 0x476634u: goto label_476634;
        case 0x476638u: goto label_476638;
        case 0x47663cu: goto label_47663c;
        case 0x476640u: goto label_476640;
        case 0x476644u: goto label_476644;
        case 0x476648u: goto label_476648;
        case 0x47664cu: goto label_47664c;
        case 0x476650u: goto label_476650;
        case 0x476654u: goto label_476654;
        case 0x476658u: goto label_476658;
        case 0x47665cu: goto label_47665c;
        case 0x476660u: goto label_476660;
        case 0x476664u: goto label_476664;
        case 0x476668u: goto label_476668;
        case 0x47666cu: goto label_47666c;
        case 0x476670u: goto label_476670;
        case 0x476674u: goto label_476674;
        case 0x476678u: goto label_476678;
        case 0x47667cu: goto label_47667c;
        case 0x476680u: goto label_476680;
        case 0x476684u: goto label_476684;
        case 0x476688u: goto label_476688;
        case 0x47668cu: goto label_47668c;
        case 0x476690u: goto label_476690;
        case 0x476694u: goto label_476694;
        case 0x476698u: goto label_476698;
        case 0x47669cu: goto label_47669c;
        case 0x4766a0u: goto label_4766a0;
        case 0x4766a4u: goto label_4766a4;
        case 0x4766a8u: goto label_4766a8;
        case 0x4766acu: goto label_4766ac;
        case 0x4766b0u: goto label_4766b0;
        case 0x4766b4u: goto label_4766b4;
        case 0x4766b8u: goto label_4766b8;
        case 0x4766bcu: goto label_4766bc;
        case 0x4766c0u: goto label_4766c0;
        case 0x4766c4u: goto label_4766c4;
        case 0x4766c8u: goto label_4766c8;
        case 0x4766ccu: goto label_4766cc;
        case 0x4766d0u: goto label_4766d0;
        case 0x4766d4u: goto label_4766d4;
        case 0x4766d8u: goto label_4766d8;
        case 0x4766dcu: goto label_4766dc;
        case 0x4766e0u: goto label_4766e0;
        case 0x4766e4u: goto label_4766e4;
        case 0x4766e8u: goto label_4766e8;
        case 0x4766ecu: goto label_4766ec;
        case 0x4766f0u: goto label_4766f0;
        case 0x4766f4u: goto label_4766f4;
        case 0x4766f8u: goto label_4766f8;
        case 0x4766fcu: goto label_4766fc;
        case 0x476700u: goto label_476700;
        case 0x476704u: goto label_476704;
        case 0x476708u: goto label_476708;
        case 0x47670cu: goto label_47670c;
        case 0x476710u: goto label_476710;
        case 0x476714u: goto label_476714;
        case 0x476718u: goto label_476718;
        case 0x47671cu: goto label_47671c;
        case 0x476720u: goto label_476720;
        case 0x476724u: goto label_476724;
        case 0x476728u: goto label_476728;
        case 0x47672cu: goto label_47672c;
        case 0x476730u: goto label_476730;
        case 0x476734u: goto label_476734;
        case 0x476738u: goto label_476738;
        case 0x47673cu: goto label_47673c;
        case 0x476740u: goto label_476740;
        case 0x476744u: goto label_476744;
        case 0x476748u: goto label_476748;
        case 0x47674cu: goto label_47674c;
        case 0x476750u: goto label_476750;
        case 0x476754u: goto label_476754;
        case 0x476758u: goto label_476758;
        case 0x47675cu: goto label_47675c;
        case 0x476760u: goto label_476760;
        case 0x476764u: goto label_476764;
        case 0x476768u: goto label_476768;
        case 0x47676cu: goto label_47676c;
        case 0x476770u: goto label_476770;
        case 0x476774u: goto label_476774;
        case 0x476778u: goto label_476778;
        case 0x47677cu: goto label_47677c;
        case 0x476780u: goto label_476780;
        case 0x476784u: goto label_476784;
        case 0x476788u: goto label_476788;
        case 0x47678cu: goto label_47678c;
        case 0x476790u: goto label_476790;
        case 0x476794u: goto label_476794;
        case 0x476798u: goto label_476798;
        case 0x47679cu: goto label_47679c;
        case 0x4767a0u: goto label_4767a0;
        case 0x4767a4u: goto label_4767a4;
        case 0x4767a8u: goto label_4767a8;
        case 0x4767acu: goto label_4767ac;
        case 0x4767b0u: goto label_4767b0;
        case 0x4767b4u: goto label_4767b4;
        case 0x4767b8u: goto label_4767b8;
        case 0x4767bcu: goto label_4767bc;
        case 0x4767c0u: goto label_4767c0;
        case 0x4767c4u: goto label_4767c4;
        case 0x4767c8u: goto label_4767c8;
        case 0x4767ccu: goto label_4767cc;
        case 0x4767d0u: goto label_4767d0;
        case 0x4767d4u: goto label_4767d4;
        case 0x4767d8u: goto label_4767d8;
        case 0x4767dcu: goto label_4767dc;
        case 0x4767e0u: goto label_4767e0;
        case 0x4767e4u: goto label_4767e4;
        case 0x4767e8u: goto label_4767e8;
        case 0x4767ecu: goto label_4767ec;
        case 0x4767f0u: goto label_4767f0;
        case 0x4767f4u: goto label_4767f4;
        case 0x4767f8u: goto label_4767f8;
        case 0x4767fcu: goto label_4767fc;
        case 0x476800u: goto label_476800;
        case 0x476804u: goto label_476804;
        case 0x476808u: goto label_476808;
        case 0x47680cu: goto label_47680c;
        case 0x476810u: goto label_476810;
        case 0x476814u: goto label_476814;
        case 0x476818u: goto label_476818;
        case 0x47681cu: goto label_47681c;
        case 0x476820u: goto label_476820;
        case 0x476824u: goto label_476824;
        case 0x476828u: goto label_476828;
        case 0x47682cu: goto label_47682c;
        case 0x476830u: goto label_476830;
        case 0x476834u: goto label_476834;
        case 0x476838u: goto label_476838;
        case 0x47683cu: goto label_47683c;
        case 0x476840u: goto label_476840;
        case 0x476844u: goto label_476844;
        case 0x476848u: goto label_476848;
        case 0x47684cu: goto label_47684c;
        case 0x476850u: goto label_476850;
        case 0x476854u: goto label_476854;
        case 0x476858u: goto label_476858;
        case 0x47685cu: goto label_47685c;
        case 0x476860u: goto label_476860;
        case 0x476864u: goto label_476864;
        case 0x476868u: goto label_476868;
        case 0x47686cu: goto label_47686c;
        case 0x476870u: goto label_476870;
        case 0x476874u: goto label_476874;
        case 0x476878u: goto label_476878;
        case 0x47687cu: goto label_47687c;
        case 0x476880u: goto label_476880;
        case 0x476884u: goto label_476884;
        case 0x476888u: goto label_476888;
        case 0x47688cu: goto label_47688c;
        case 0x476890u: goto label_476890;
        case 0x476894u: goto label_476894;
        default: break;
    }

    ctx->pc = 0x4763f8u;

label_4763f8:
    // 0x4763f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4763f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4763fc:
    // 0x4763fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4763fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_476400:
    // 0x476400: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x476400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_476404:
    // 0x476404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x476404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_476408:
    // 0x476408: 0xc11c770  jal         func_471DC0
label_47640c:
    if (ctx->pc == 0x47640Cu) {
        ctx->pc = 0x47640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476408u;
        // 0x47640c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476410u;
        goto label_476410;
    }
    ctx->pc = 0x476408u;
    SET_GPR_U32(ctx, 31, 0x476410u);
    ctx->pc = 0x47640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476408u;
    // 0x47640c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x476408u, 0x476410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476410u;
label_476410:
    // 0x476410: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x476410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_476414:
    // 0x476414: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x476414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_476418:
    // 0x476418: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x476418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47641c:
    // 0x47641c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_476420:
    if (ctx->pc == 0x476420u) {
        ctx->pc = 0x476420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47641Cu;
        // 0x476420: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476424u;
        goto label_476424;
    }
    ctx->pc = 0x47641Cu;
    {
        const bool branch_taken_0x47641c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x476420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47641Cu;
        // 0x476420: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47641c) {
            ctx->pc = 0x476474u;
            goto label_476474;
        }
    }
    ctx->pc = 0x476424u;
label_476424:
    // 0x476424: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x476424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
label_476428:
    // 0x476428: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x476428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_47642c:
    // 0x47642c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_476430:
    // 0x476430: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x476430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_476434:
    // 0x476434: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x476434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_476438:
    // 0x476438: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
label_47643c:
    if (ctx->pc == 0x47643Cu) {
        ctx->pc = 0x47643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476438u;
        // 0x47643c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476440u;
        goto label_476440;
    }
    ctx->pc = 0x476438u;
    {
        const bool branch_taken_0x476438 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x47643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476438u;
        // 0x47643c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476438) {
            ctx->pc = 0x476474u;
            goto label_476474;
        }
    }
    ctx->pc = 0x476440u;
label_476440:
    // 0x476440: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x476440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_476444:
    // 0x476444: 0x0  nop
    ctx->pc = 0x476444u;
    // NOP
label_476448:
    // 0x476448: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x476448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_47644c:
    // 0x47644c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x47644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_476450:
    // 0x476450: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x476450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_476454:
    // 0x476454: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x476454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_476458:
    // 0x476458: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x476458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_47645c:
    // 0x47645c: 0x109282b  sltu        $a1, $t0, $t1
    ctx->pc = 0x47645cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_476460:
    // 0x476460: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x476460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_476464:
    // 0x476464: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x476464u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_476468:
    // 0x476468: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x476468u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47646c:
    // 0x47646c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_476470:
    if (ctx->pc == 0x476470u) {
        ctx->pc = 0x476470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47646Cu;
        // 0x476470: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476474u;
        goto label_476474;
    }
    ctx->pc = 0x47646Cu;
    {
        const bool branch_taken_0x47646c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x476470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47646Cu;
        // 0x476470: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47646c) {
            ctx->pc = 0x476448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476448;
        }
    }
    ctx->pc = 0x476474u;
label_476474:
    // 0x476474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x476474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476478:
    // 0x476478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47647c:
    // 0x47647c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x47647cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_476480:
    // 0x476480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x476480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_476484:
    // 0x476484: 0x3e00008  jr          $ra
label_476488:
    if (ctx->pc == 0x476488u) {
        ctx->pc = 0x476488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476484u;
        // 0x476488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47648Cu;
        goto label_47648c;
    }
    ctx->pc = 0x476484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476484u;
        // 0x476488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47648Cu;
label_47648c:
    // 0x47648c: 0x0  nop
    ctx->pc = 0x47648cu;
    // NOP
label_476490:
    // 0x476490: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x476490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_476494:
    // 0x476494: 0x0  nop
    ctx->pc = 0x476494u;
    // NOP
label_476498:
    // 0x476498: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x476498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_47649c:
    // 0x47649c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x47649cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4764a0:
    // 0x4764a0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x4764a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_4764a4:
    // 0x4764a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4764a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4764a8:
    // 0x4764a8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x4764a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_4764ac:
    // 0x4764ac: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4764acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4764b0:
    // 0x4764b0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x4764b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_4764b4:
    // 0x4764b4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4764b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4764b8:
    // 0x4764b8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x4764b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_4764bc:
    // 0x4764bc: 0x2606a440  addiu       $a2, $s0, -0x5BC0
    ctx->pc = 0x4764bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943808));
label_4764c0:
    // 0x4764c0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x4764c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_4764c4:
    // 0x4764c4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4764c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4764c8:
    // 0x4764c8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x4764c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_4764cc:
    // 0x4764cc: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x4764ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_4764d0:
    // 0x4764d0: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x4764d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_4764d4:
    // 0x4764d4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x4764d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_4764d8:
    // 0x4764d8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x4764d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_4764dc:
    // 0x4764dc: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x4764dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4764e0:
    // 0x4764e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4764e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4764e4:
    // 0x4764e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4764e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4764e8:
    // 0x4764e8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4764e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_4764ec:
    // 0x4764ec: 0x8f878a88  lw          $a3, -0x7578($gp)
    ctx->pc = 0x4764ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4764f0:
    // 0x4764f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4764f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4764f4:
    // 0x4764f4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4764f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_4764f8:
    // 0x4764f8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4764f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4764fc:
    // 0x4764fc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4764fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_476500:
    // 0x476500: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x476500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_476504:
    // 0x476504: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x476504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_476508:
    // 0x476508: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x476508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47650c:
    // 0x47650c: 0xa3a80029  sb          $t0, 0x29($sp)
    ctx->pc = 0x47650cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 8));
label_476510:
    // 0x476510: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x476510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_476514:
    // 0x476514: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x476514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_476518:
    // 0x476518: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x476518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_47651c:
    // 0x47651c: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x47651cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
label_476520:
    // 0x476520: 0xa3a0002a  sb          $zero, 0x2A($sp)
    ctx->pc = 0x476520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 0));
label_476524:
    // 0x476524: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x476524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_476528:
    // 0x476528: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x476528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_47652c:
    // 0x47652c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x47652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_476530:
    // 0x476530: 0x8cfe0044  lw          $fp, 0x44($a3)
    ctx->pc = 0x476530u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_476534:
    // 0x476534: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x476534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_476538:
    // 0x476538: 0xaf80890c  sw          $zero, -0x76F4($gp)
    ctx->pc = 0x476538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 0));
label_47653c:
    // 0x47653c: 0xaf868908  sw          $a2, -0x76F8($gp)
    ctx->pc = 0x47653cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 6));
label_476540:
    // 0x476540: 0x40f809  jalr        $v0
label_476544:
    if (ctx->pc == 0x476544u) {
        ctx->pc = 0x476544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476540u;
        // 0x476544: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476548u;
        goto label_476548;
    }
    ctx->pc = 0x476540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476548u);
        ctx->pc = 0x476544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476540u;
        // 0x476544: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476540u, 0x476548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476548u;
label_476548:
    // 0x476548: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
label_47654c:
    if (ctx->pc == 0x47654Cu) {
        ctx->pc = 0x47654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476548u;
        // 0x47654c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476550u;
        goto label_476550;
    }
    ctx->pc = 0x476548u;
    {
        const bool branch_taken_0x476548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476548u;
        // 0x47654c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476548) {
            ctx->pc = 0x476860u;
            goto label_476860;
        }
    }
    ctx->pc = 0x476550u;
label_476550:
    // 0x476550: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x476550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_476554:
    // 0x476554: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_476558:
    if (ctx->pc == 0x476558u) {
        ctx->pc = 0x476558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476554u;
        // 0x476558: 0x8f83890c  lw          $v1, -0x76F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47655Cu;
        goto label_47655c;
    }
    ctx->pc = 0x476554u;
    {
        const bool branch_taken_0x476554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476554u;
        // 0x476558: 0x8f83890c  lw          $v1, -0x76F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476554) {
            ctx->pc = 0x476568u;
            goto label_476568;
        }
    }
    ctx->pc = 0x47655Cu;
label_47655c:
    // 0x47655c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_476560:
    // 0x476560: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x476560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_476564:
    // 0x476564: 0x8f83890c  lw          $v1, -0x76F4($gp)
    ctx->pc = 0x476564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_476568:
    // 0x476568: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_47656c:
    if (ctx->pc == 0x47656Cu) {
        ctx->pc = 0x47656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476568u;
        // 0x47656c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476570u;
        goto label_476570;
    }
    ctx->pc = 0x476568u;
    {
        const bool branch_taken_0x476568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476568u;
        // 0x47656c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476568) {
            ctx->pc = 0x476584u;
            goto label_476584;
        }
    }
    ctx->pc = 0x476570u;
label_476570:
    // 0x476570: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x476570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_476574:
    // 0x476574: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x476574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_476578:
    // 0x476578: 0xaf82890c  sw          $v0, -0x76F4($gp)
    ctx->pc = 0x476578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
label_47657c:
    // 0x47657c: 0x10000024  b           . + 4 + (0x24 << 2)
label_476580:
    if (ctx->pc == 0x476580u) {
        ctx->pc = 0x476580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47657Cu;
        // 0x476580: 0xaf838908  sw          $v1, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476584u;
        goto label_476584;
    }
    ctx->pc = 0x47657Cu;
    {
        const bool branch_taken_0x47657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47657Cu;
        // 0x476580: 0xaf838908  sw          $v1, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47657c) {
            ctx->pc = 0x476610u;
            goto label_476610;
        }
    }
    ctx->pc = 0x476584u;
label_476584:
    // 0x476584: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_476588:
    if (ctx->pc == 0x476588u) {
        ctx->pc = 0x476588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476584u;
        // 0x476588: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47658Cu;
        goto label_47658c;
    }
    ctx->pc = 0x476584u;
    {
        const bool branch_taken_0x476584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x476588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476584u;
        // 0x476588: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476584) {
            ctx->pc = 0x476594u;
            goto label_476594;
        }
    }
    ctx->pc = 0x47658Cu;
label_47658c:
    // 0x47658c: 0x10000020  b           . + 4 + (0x20 << 2)
label_476590:
    if (ctx->pc == 0x476590u) {
        ctx->pc = 0x476590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47658Cu;
        // 0x476590: 0xaf80890c  sw          $zero, -0x76F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476594u;
        goto label_476594;
    }
    ctx->pc = 0x47658Cu;
    {
        const bool branch_taken_0x47658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47658Cu;
        // 0x476590: 0xaf80890c  sw          $zero, -0x76F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47658c) {
            ctx->pc = 0x476610u;
            goto label_476610;
        }
    }
    ctx->pc = 0x476594u;
label_476594:
    // 0x476594: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_476598:
    if (ctx->pc == 0x476598u) {
        ctx->pc = 0x476598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476594u;
        // 0x476598: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47659Cu;
        goto label_47659c;
    }
    ctx->pc = 0x476594u;
    {
        const bool branch_taken_0x476594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x476594) {
            ctx->pc = 0x476598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476594u;
            // 0x476598: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4765B0u;
            goto label_4765b0;
        }
    }
    ctx->pc = 0x47659Cu;
label_47659c:
    // 0x47659c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4765a0:
    // 0x4765a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_4765a4:
    if (ctx->pc == 0x4765A4u) {
        ctx->pc = 0x4765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4765A0u;
        // 0x4765a4: 0xaf82890c  sw          $v0, -0x76F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4765A8u;
        goto label_4765a8;
    }
    ctx->pc = 0x4765A0u;
    {
        const bool branch_taken_0x4765a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4765A0u;
        // 0x4765a4: 0xaf82890c  sw          $v0, -0x76F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4765a0) {
            ctx->pc = 0x4765C8u;
            goto label_4765c8;
        }
    }
    ctx->pc = 0x4765A8u;
label_4765a8:
    // 0x4765a8: 0x100000ae  b           . + 4 + (0xAE << 2)
label_4765ac:
    if (ctx->pc == 0x4765ACu) {
        ctx->pc = 0x4765ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4765A8u;
        // 0x4765ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4765B0u;
        goto label_4765b0;
    }
    ctx->pc = 0x4765A8u;
    {
        const bool branch_taken_0x4765a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4765ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4765A8u;
        // 0x4765ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4765a8) {
            ctx->pc = 0x476864u;
            goto label_476864;
        }
    }
    ctx->pc = 0x4765B0u;
label_4765b0:
    // 0x4765b0: 0x8f848908  lw          $a0, -0x76F8($gp)
    ctx->pc = 0x4765b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_4765b4:
    // 0x4765b4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x4765b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_4765b8:
    // 0x4765b8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4765b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4765bc:
    // 0x4765bc: 0x8f83890c  lw          $v1, -0x76F4($gp)
    ctx->pc = 0x4765bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_4765c0:
    // 0x4765c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4765c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4765c4:
    // 0x4765c4: 0xaf83890c  sw          $v1, -0x76F4($gp)
    ctx->pc = 0x4765c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 3));
label_4765c8:
    // 0x4765c8: 0x9e23001c  lwu         $v1, 0x1C($s1)
    ctx->pc = 0x4765c8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4765cc:
    // 0x4765cc: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x4765ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
label_4765d0:
    // 0x4765d0: 0x9f82890c  lwu         $v0, -0x76F4($gp)
    ctx->pc = 0x4765d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_4765d4:
    // 0x4765d4: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x4765d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
label_4765d8:
    // 0x4765d8: 0x34e70404  ori         $a3, $a3, 0x404
    ctx->pc = 0x4765d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1028);
label_4765dc:
    // 0x4765dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4765dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4765e0:
    // 0x4765e0: 0x8f84890c  lw          $a0, -0x76F4($gp)
    ctx->pc = 0x4765e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_4765e4:
    // 0x4765e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4765e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4765e8:
    // 0x4765e8: 0x2605a440  addiu       $a1, $s0, -0x5BC0
    ctx->pc = 0x4765e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943808));
label_4765ec:
    // 0x4765ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4765ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4765f0:
    // 0x4765f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4765f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4765f4:
    // 0x4765f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4765f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4765f8:
    // 0x4765f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4765f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4765fc:
    // 0x4765fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4765fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_476600:
    // 0x476600: 0xaf84890c  sw          $a0, -0x76F4($gp)
    ctx->pc = 0x476600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 4));
label_476604:
    // 0x476604: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x476604u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_476608:
    // 0x476608: 0xaf858908  sw          $a1, -0x76F8($gp)
    ctx->pc = 0x476608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 5));
label_47660c:
    // 0x47660c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x47660cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_476610:
    // 0x476610: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x476610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_476614:
    // 0x476614: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x476614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476618:
    // 0x476618: 0x8f858908  lw          $a1, -0x76F8($gp)
    ctx->pc = 0x476618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_47661c:
    // 0x47661c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47661cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476620:
    // 0x476620: 0x8f86890c  lw          $a2, -0x76F4($gp)
    ctx->pc = 0x476620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_476624:
    // 0x476624: 0xc127e32  jal         func_49F8C8
label_476628:
    if (ctx->pc == 0x476628u) {
        ctx->pc = 0x476628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476624u;
        // 0x476628: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47662Cu;
        goto label_47662c;
    }
    ctx->pc = 0x476624u;
    SET_GPR_U32(ctx, 31, 0x47662Cu);
    ctx->pc = 0x476628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476624u;
    // 0x476628: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F8C8u, 0x476624u, 0x47662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47662Cu;
label_47662c:
    // 0x47662c: 0x8fb5000c  lw          $s5, 0xC($sp)
    ctx->pc = 0x47662cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_476630:
    // 0x476630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x476630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_476634:
    // 0x476634: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x476634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_476638:
    // 0x476638: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x476638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_47663c:
    // 0x47663c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x47663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_476640:
    // 0x476640: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_476644:
    if (ctx->pc == 0x476644u) {
        ctx->pc = 0x476644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476640u;
        // 0x476644: 0x2a28021  addu        $s0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476648u;
        goto label_476648;
    }
    ctx->pc = 0x476640u;
    {
        const bool branch_taken_0x476640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x476644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476640u;
        // 0x476644: 0x2a28021  addu        $s0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476640) {
            ctx->pc = 0x47684Cu;
            goto label_47684c;
        }
    }
    ctx->pc = 0x476648u;
label_476648:
    // 0x476648: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x476648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47664c:
    // 0x47664c: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x47664cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_476650:
    // 0x476650: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x476650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_476654:
    // 0x476654: 0x0  nop
    ctx->pc = 0x476654u;
    // NOP
label_476658:
    // 0x476658: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x476658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_47665c:
    // 0x47665c: 0x24466c40  addiu       $a2, $v0, 0x6C40
    ctx->pc = 0x47665cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 27712));
label_476660:
    // 0x476660: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x476660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_476664:
    // 0x476664: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x476664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_476668:
    // 0x476668: 0xaba30093  swl         $v1, 0x93($sp)
    ctx->pc = 0x476668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_47666c:
    // 0x47666c: 0xbba30090  swr         $v1, 0x90($sp)
    ctx->pc = 0x47666cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_476670:
    // 0x476670: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x476670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_476674:
    // 0x476674: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_476678:
    if (ctx->pc == 0x476678u) {
        ctx->pc = 0x47667Cu;
        goto label_47667c;
    }
    ctx->pc = 0x476674u;
    {
        const bool branch_taken_0x476674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476674) {
            ctx->pc = 0x476688u;
            goto label_476688;
        }
    }
    ctx->pc = 0x47667Cu;
label_47667c:
    // 0x47667c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_476680:
    // 0x476680: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x476680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_476684:
    // 0x476684: 0x3c3180a  movz        $v1, $fp, $v1
    ctx->pc = 0x476684u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 30));
label_476688:
    // 0x476688: 0x10770006  beq         $v1, $s7, . + 4 + (0x6 << 2)
label_47668c:
    if (ctx->pc == 0x47668Cu) {
        ctx->pc = 0x47668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476688u;
        // 0x47668c: 0x93a20028  lbu         $v0, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476690u;
        goto label_476690;
    }
    ctx->pc = 0x476688u;
    {
        const bool branch_taken_0x476688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x47668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476688u;
        // 0x47668c: 0x93a20028  lbu         $v0, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476688) {
            ctx->pc = 0x4766A4u;
            goto label_4766a4;
        }
    }
    ctx->pc = 0x476690u;
label_476690:
    // 0x476690: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x476690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_476694:
    // 0x476694: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x476694u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_476698:
    // 0x476698: 0x8c560014  lw          $s6, 0x14($v0)
    ctx->pc = 0x476698u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_47669c:
    // 0x47669c: 0xafb60004  sw          $s6, 0x4($sp)
    ctx->pc = 0x47669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
label_4766a0:
    // 0x4766a0: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x4766a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
label_4766a4:
    // 0x4766a4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4766a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4766a8:
    // 0x4766a8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4766a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_4766ac:
    // 0x4766ac: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x4766acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
label_4766b0:
    // 0x4766b0: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x4766b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_4766b4:
    // 0x4766b4: 0xa3a2002b  sb          $v0, 0x2B($sp)
    ctx->pc = 0x4766b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 43), (uint8_t)GPR_U32(ctx, 2));
label_4766b8:
    // 0x4766b8: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x4766b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
label_4766bc:
    // 0x4766bc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x4766bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_4766c0:
    // 0x4766c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4766c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4766c4:
    // 0x4766c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x4766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4766c8:
    // 0x4766c8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x4766c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_4766cc:
    // 0x4766cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4766ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4766d0:
    // 0x4766d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4766d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4766d4:
    // 0x4766d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4766d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4766d8:
    // 0x4766d8: 0x8ba20093  lwl         $v0, 0x93($sp)
    ctx->pc = 0x4766d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_4766dc:
    // 0x4766dc: 0x9ba20090  lwr         $v0, 0x90($sp)
    ctx->pc = 0x4766dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_4766e0:
    // 0x4766e0: 0xaba20047  swl         $v0, 0x47($sp)
    ctx->pc = 0x4766e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_4766e4:
    // 0x4766e4: 0xbba20044  swr         $v0, 0x44($sp)
    ctx->pc = 0x4766e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_4766e8:
    // 0x4766e8: 0x93a2002a  lbu         $v0, 0x2A($sp)
    ctx->pc = 0x4766e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
label_4766ec:
    // 0x4766ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4766f0:
    if (ctx->pc == 0x4766F0u) {
        ctx->pc = 0x4766F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4766ECu;
        // 0x4766f0: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4766F4u;
        goto label_4766f4;
    }
    ctx->pc = 0x4766ECu;
    {
        const bool branch_taken_0x4766ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4766F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4766ECu;
        // 0x4766f0: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4766ec) {
            ctx->pc = 0x47670Cu;
            goto label_47670c;
        }
    }
    ctx->pc = 0x4766F4u;
label_4766f4:
    // 0x4766f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4766f8:
    // 0x4766f8: 0x88460007  lwl         $a2, 0x7($v0)
    ctx->pc = 0x4766f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_4766fc:
    // 0x4766fc: 0x98460004  lwr         $a2, 0x4($v0)
    ctx->pc = 0x4766fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_476700:
    // 0x476700: 0xaba60047  swl         $a2, 0x47($sp)
    ctx->pc = 0x476700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_476704:
    // 0x476704: 0xbba60044  swr         $a2, 0x44($sp)
    ctx->pc = 0x476704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_476708:
    // 0x476708: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x476708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_47670c:
    // 0x47670c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476710:
    // 0x476710: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_476714:
    if (ctx->pc == 0x476714u) {
        ctx->pc = 0x476714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476710u;
        // 0x476714: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476718u;
        goto label_476718;
    }
    ctx->pc = 0x476710u;
    {
        const bool branch_taken_0x476710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x476714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476710u;
        // 0x476714: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476710) {
            ctx->pc = 0x476810u;
            goto label_476810;
        }
    }
    ctx->pc = 0x476718u;
label_476718:
    // 0x476718: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x476718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_47671c:
    // 0x47671c: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x47671cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_476720:
    // 0x476720: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x476720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_476724:
    // 0x476724: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x476724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_476728:
    // 0x476728: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x476728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47672c:
    // 0x47672c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_476730:
    if (ctx->pc == 0x476730u) {
        ctx->pc = 0x476730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47672Cu;
        // 0x476730: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476734u;
        goto label_476734;
    }
    ctx->pc = 0x47672Cu;
    {
        const bool branch_taken_0x47672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47672Cu;
        // 0x476730: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47672c) {
            ctx->pc = 0x476750u;
            goto label_476750;
        }
    }
    ctx->pc = 0x476734u;
label_476734:
    // 0x476734: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x476734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476738:
    // 0x476738: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_47673c:
    if (ctx->pc == 0x47673Cu) {
        ctx->pc = 0x47673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476738u;
        // 0x47673c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476740u;
        goto label_476740;
    }
    ctx->pc = 0x476738u;
    {
        const bool branch_taken_0x476738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476738) {
            ctx->pc = 0x47673Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476738u;
            // 0x47673c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x476760u;
            goto label_476760;
        }
    }
    ctx->pc = 0x476740u;
label_476740:
    // 0x476740: 0x40f809  jalr        $v0
label_476744:
    if (ctx->pc == 0x476744u) {
        ctx->pc = 0x476744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476740u;
        // 0x476744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476748u;
        goto label_476748;
    }
    ctx->pc = 0x476740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476748u);
        ctx->pc = 0x476744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476740u;
        // 0x476744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476740u, 0x476748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476748u;
label_476748:
    // 0x476748: 0x10000005  b           . + 4 + (0x5 << 2)
label_47674c:
    if (ctx->pc == 0x47674Cu) {
        ctx->pc = 0x47674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476748u;
        // 0x47674c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476750u;
        goto label_476750;
    }
    ctx->pc = 0x476748u;
    {
        const bool branch_taken_0x476748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476748u;
        // 0x47674c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476748) {
            ctx->pc = 0x476760u;
            goto label_476760;
        }
    }
    ctx->pc = 0x476750u;
label_476750:
    // 0x476750: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x476750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_476754:
    // 0x476754: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x476754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_476758:
    // 0x476758: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x476758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_47675c:
    // 0x47675c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x47675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_476760:
    // 0x476760: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x476760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_476764:
    // 0x476764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_476768:
    if (ctx->pc == 0x476768u) {
        ctx->pc = 0x476768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476764u;
        // 0x476768: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47676Cu;
        goto label_47676c;
    }
    ctx->pc = 0x476764u;
    {
        const bool branch_taken_0x476764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476764u;
        // 0x476768: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476764) {
            ctx->pc = 0x47677Cu;
            goto label_47677c;
        }
    }
    ctx->pc = 0x47676Cu;
label_47676c:
    // 0x47676c: 0xc11da26  jal         func_476898
label_476770:
    if (ctx->pc == 0x476770u) {
        ctx->pc = 0x476770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47676Cu;
        // 0x476770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476774u;
        goto label_476774;
    }
    ctx->pc = 0x47676Cu;
    SET_GPR_U32(ctx, 31, 0x476774u);
    ctx->pc = 0x476770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47676Cu;
    // 0x476770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476898u, 0x47676Cu, 0x476774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476774u;
label_476774:
    // 0x476774: 0x1040ff8c  beqz        $v0, . + 4 + (-0x74 << 2)
label_476778:
    if (ctx->pc == 0x476778u) {
        ctx->pc = 0x476778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476774u;
        // 0x476778: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47677Cu;
        goto label_47677c;
    }
    ctx->pc = 0x476774u;
    {
        const bool branch_taken_0x476774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476774u;
        // 0x476778: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476774) {
            ctx->pc = 0x4765A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4765a8;
        }
    }
    ctx->pc = 0x47677Cu;
label_47677c:
    // 0x47677c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_476780:
    // 0x476780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x476780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_476784:
    // 0x476784: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
label_476788:
    if (ctx->pc == 0x476788u) {
        ctx->pc = 0x476788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476784u;
        // 0x476788: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47678Cu;
        goto label_47678c;
    }
    ctx->pc = 0x476784u;
    {
        const bool branch_taken_0x476784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x476784) {
            ctx->pc = 0x476788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476784u;
            // 0x476788: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x476814u;
            goto label_476814;
        }
    }
    ctx->pc = 0x47678Cu;
label_47678c:
    // 0x47678c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x47678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_476790:
    // 0x476790: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x476790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_476794:
    // 0x476794: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x476794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_476798:
    // 0x476798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x476798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47679c:
    // 0x47679c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x47679cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4767a0:
    // 0x4767a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4767a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4767a4:
    // 0x4767a4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4767a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_4767a8:
    // 0x4767a8: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x4767a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_4767ac:
    // 0x4767ac: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4767acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4767b0:
    // 0x4767b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4767b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4767b4:
    // 0x4767b4: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x4767b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4767b8:
    // 0x4767b8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4767b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4767bc:
    // 0x4767bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4767bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4767c0:
    // 0x4767c0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4767c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4767c4:
    // 0x4767c4: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x4767c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_4767c8:
    // 0x4767c8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4767c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4767cc:
    // 0x4767cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4767ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4767d0:
    // 0x4767d0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4767d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4767d4:
    // 0x4767d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4767d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4767d8:
    // 0x4767d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4767d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4767dc:
    // 0x4767dc: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x4767dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_4767e0:
    // 0x4767e0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4767e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4767e4:
    // 0x4767e4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4767e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4767e8:
    // 0x4767e8: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x4767e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4767ec:
    // 0x4767ec: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4767ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4767f0:
    // 0x4767f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4767f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4767f4:
    // 0x4767f4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4767f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_4767f8:
    // 0x4767f8: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x4767f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_4767fc:
    // 0x4767fc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4767fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_476800:
    // 0x476800: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x476800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_476804:
    // 0x476804: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x476804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_476808:
    // 0x476808: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x476808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_47680c:
    // 0x47680c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x47680cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_476810:
    // 0x476810: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x476810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_476814:
    // 0x476814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x476814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_476818:
    // 0x476818: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x476818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_47681c:
    // 0x47681c: 0x40f809  jalr        $v0
label_476820:
    if (ctx->pc == 0x476820u) {
        ctx->pc = 0x476820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47681Cu;
        // 0x476820: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476824u;
        goto label_476824;
    }
    ctx->pc = 0x47681Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476824u);
        ctx->pc = 0x476820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47681Cu;
        // 0x476820: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47681Cu, 0x476824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476824u;
label_476824:
    // 0x476824: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x476824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_476828:
    // 0x476828: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_47682c:
    if (ctx->pc == 0x47682Cu) {
        ctx->pc = 0x47682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476828u;
        // 0x47682c: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476830u;
        goto label_476830;
    }
    ctx->pc = 0x476828u;
    {
        const bool branch_taken_0x476828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476828) {
            ctx->pc = 0x47682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476828u;
            // 0x47682c: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47683Cu;
            goto label_47683c;
        }
    }
    ctx->pc = 0x476830u;
label_476830:
    // 0x476830: 0x40f809  jalr        $v0
label_476834:
    if (ctx->pc == 0x476834u) {
        ctx->pc = 0x476834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476830u;
        // 0x476834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476838u;
        goto label_476838;
    }
    ctx->pc = 0x476830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476838u);
        ctx->pc = 0x476834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476830u;
        // 0x476834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476830u, 0x476838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476838u;
label_476838:
    // 0x476838: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x476838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_47683c:
    // 0x47683c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x47683cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_476840:
    // 0x476840: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x476840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_476844:
    // 0x476844: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
label_476848:
    if (ctx->pc == 0x476848u) {
        ctx->pc = 0x476848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476844u;
        // 0x476848: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47684Cu;
        goto label_47684c;
    }
    ctx->pc = 0x476844u;
    {
        const bool branch_taken_0x476844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476844u;
        // 0x476848: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476844) {
            ctx->pc = 0x476658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476658;
        }
    }
    ctx->pc = 0x47684Cu;
label_47684c:
    // 0x47684c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x47684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_476850:
    // 0x476850: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_476854:
    if (ctx->pc == 0x476854u) {
        ctx->pc = 0x476854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476850u;
        // 0x476854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476858u;
        goto label_476858;
    }
    ctx->pc = 0x476850u;
    {
        const bool branch_taken_0x476850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476850) {
            ctx->pc = 0x476854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x476850u;
            // 0x476854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x476864u;
            goto label_476864;
        }
    }
    ctx->pc = 0x476858u;
label_476858:
    // 0x476858: 0x40f809  jalr        $v0
label_47685c:
    if (ctx->pc == 0x47685Cu) {
        ctx->pc = 0x47685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476858u;
        // 0x47685c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476860u;
        goto label_476860;
    }
    ctx->pc = 0x476858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476860u);
        ctx->pc = 0x47685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476858u;
        // 0x47685c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476858u, 0x476860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476860u;
label_476860:
    // 0x476860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x476860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476864:
    // 0x476864: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x476864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_476868:
    // 0x476868: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x476868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_47686c:
    // 0x47686c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x47686cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_476870:
    // 0x476870: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x476870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_476874:
    // 0x476874: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x476874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_476878:
    // 0x476878: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x476878u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_47687c:
    // 0x47687c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x47687cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_476880:
    // 0x476880: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x476880u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_476884:
    // 0x476884: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x476884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_476888:
    // 0x476888: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x476888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_47688c:
    // 0x47688c: 0x3e00008  jr          $ra
label_476890:
    if (ctx->pc == 0x476890u) {
        ctx->pc = 0x476890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47688Cu;
        // 0x476890: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x476894u;
        goto label_476894;
    }
    ctx->pc = 0x47688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47688Cu;
        // 0x476890: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476894u;
label_476894:
    // 0x476894: 0x0  nop
    ctx->pc = 0x476894u;
    // NOP
    ctx->pc = 0x476898u;
}
