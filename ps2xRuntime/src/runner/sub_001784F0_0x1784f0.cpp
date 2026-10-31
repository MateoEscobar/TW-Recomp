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

// Function: sub_001784F0
// Address: 0x1784f0 - 0x178b08
void sub_001784F0_0x1784f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001784F0_0x1784f0");
#endif

    switch (ctx->pc) {
        case 0x1784f0u: goto label_1784f0;
        case 0x1784f4u: goto label_1784f4;
        case 0x1784f8u: goto label_1784f8;
        case 0x1784fcu: goto label_1784fc;
        case 0x178500u: goto label_178500;
        case 0x178504u: goto label_178504;
        case 0x178508u: goto label_178508;
        case 0x17850cu: goto label_17850c;
        case 0x178510u: goto label_178510;
        case 0x178514u: goto label_178514;
        case 0x178518u: goto label_178518;
        case 0x17851cu: goto label_17851c;
        case 0x178520u: goto label_178520;
        case 0x178524u: goto label_178524;
        case 0x178528u: goto label_178528;
        case 0x17852cu: goto label_17852c;
        case 0x178530u: goto label_178530;
        case 0x178534u: goto label_178534;
        case 0x178538u: goto label_178538;
        case 0x17853cu: goto label_17853c;
        case 0x178540u: goto label_178540;
        case 0x178544u: goto label_178544;
        case 0x178548u: goto label_178548;
        case 0x17854cu: goto label_17854c;
        case 0x178550u: goto label_178550;
        case 0x178554u: goto label_178554;
        case 0x178558u: goto label_178558;
        case 0x17855cu: goto label_17855c;
        case 0x178560u: goto label_178560;
        case 0x178564u: goto label_178564;
        case 0x178568u: goto label_178568;
        case 0x17856cu: goto label_17856c;
        case 0x178570u: goto label_178570;
        case 0x178574u: goto label_178574;
        case 0x178578u: goto label_178578;
        case 0x17857cu: goto label_17857c;
        case 0x178580u: goto label_178580;
        case 0x178584u: goto label_178584;
        case 0x178588u: goto label_178588;
        case 0x17858cu: goto label_17858c;
        case 0x178590u: goto label_178590;
        case 0x178594u: goto label_178594;
        case 0x178598u: goto label_178598;
        case 0x17859cu: goto label_17859c;
        case 0x1785a0u: goto label_1785a0;
        case 0x1785a4u: goto label_1785a4;
        case 0x1785a8u: goto label_1785a8;
        case 0x1785acu: goto label_1785ac;
        case 0x1785b0u: goto label_1785b0;
        case 0x1785b4u: goto label_1785b4;
        case 0x1785b8u: goto label_1785b8;
        case 0x1785bcu: goto label_1785bc;
        case 0x1785c0u: goto label_1785c0;
        case 0x1785c4u: goto label_1785c4;
        case 0x1785c8u: goto label_1785c8;
        case 0x1785ccu: goto label_1785cc;
        case 0x1785d0u: goto label_1785d0;
        case 0x1785d4u: goto label_1785d4;
        case 0x1785d8u: goto label_1785d8;
        case 0x1785dcu: goto label_1785dc;
        case 0x1785e0u: goto label_1785e0;
        case 0x1785e4u: goto label_1785e4;
        case 0x1785e8u: goto label_1785e8;
        case 0x1785ecu: goto label_1785ec;
        case 0x1785f0u: goto label_1785f0;
        case 0x1785f4u: goto label_1785f4;
        case 0x1785f8u: goto label_1785f8;
        case 0x1785fcu: goto label_1785fc;
        case 0x178600u: goto label_178600;
        case 0x178604u: goto label_178604;
        case 0x178608u: goto label_178608;
        case 0x17860cu: goto label_17860c;
        case 0x178610u: goto label_178610;
        case 0x178614u: goto label_178614;
        case 0x178618u: goto label_178618;
        case 0x17861cu: goto label_17861c;
        case 0x178620u: goto label_178620;
        case 0x178624u: goto label_178624;
        case 0x178628u: goto label_178628;
        case 0x17862cu: goto label_17862c;
        case 0x178630u: goto label_178630;
        case 0x178634u: goto label_178634;
        case 0x178638u: goto label_178638;
        case 0x17863cu: goto label_17863c;
        case 0x178640u: goto label_178640;
        case 0x178644u: goto label_178644;
        case 0x178648u: goto label_178648;
        case 0x17864cu: goto label_17864c;
        case 0x178650u: goto label_178650;
        case 0x178654u: goto label_178654;
        case 0x178658u: goto label_178658;
        case 0x17865cu: goto label_17865c;
        case 0x178660u: goto label_178660;
        case 0x178664u: goto label_178664;
        case 0x178668u: goto label_178668;
        case 0x17866cu: goto label_17866c;
        case 0x178670u: goto label_178670;
        case 0x178674u: goto label_178674;
        case 0x178678u: goto label_178678;
        case 0x17867cu: goto label_17867c;
        case 0x178680u: goto label_178680;
        case 0x178684u: goto label_178684;
        case 0x178688u: goto label_178688;
        case 0x17868cu: goto label_17868c;
        case 0x178690u: goto label_178690;
        case 0x178694u: goto label_178694;
        case 0x178698u: goto label_178698;
        case 0x17869cu: goto label_17869c;
        case 0x1786a0u: goto label_1786a0;
        case 0x1786a4u: goto label_1786a4;
        case 0x1786a8u: goto label_1786a8;
        case 0x1786acu: goto label_1786ac;
        case 0x1786b0u: goto label_1786b0;
        case 0x1786b4u: goto label_1786b4;
        case 0x1786b8u: goto label_1786b8;
        case 0x1786bcu: goto label_1786bc;
        case 0x1786c0u: goto label_1786c0;
        case 0x1786c4u: goto label_1786c4;
        case 0x1786c8u: goto label_1786c8;
        case 0x1786ccu: goto label_1786cc;
        case 0x1786d0u: goto label_1786d0;
        case 0x1786d4u: goto label_1786d4;
        case 0x1786d8u: goto label_1786d8;
        case 0x1786dcu: goto label_1786dc;
        case 0x1786e0u: goto label_1786e0;
        case 0x1786e4u: goto label_1786e4;
        case 0x1786e8u: goto label_1786e8;
        case 0x1786ecu: goto label_1786ec;
        case 0x1786f0u: goto label_1786f0;
        case 0x1786f4u: goto label_1786f4;
        case 0x1786f8u: goto label_1786f8;
        case 0x1786fcu: goto label_1786fc;
        case 0x178700u: goto label_178700;
        case 0x178704u: goto label_178704;
        case 0x178708u: goto label_178708;
        case 0x17870cu: goto label_17870c;
        case 0x178710u: goto label_178710;
        case 0x178714u: goto label_178714;
        case 0x178718u: goto label_178718;
        case 0x17871cu: goto label_17871c;
        case 0x178720u: goto label_178720;
        case 0x178724u: goto label_178724;
        case 0x178728u: goto label_178728;
        case 0x17872cu: goto label_17872c;
        case 0x178730u: goto label_178730;
        case 0x178734u: goto label_178734;
        case 0x178738u: goto label_178738;
        case 0x17873cu: goto label_17873c;
        case 0x178740u: goto label_178740;
        case 0x178744u: goto label_178744;
        case 0x178748u: goto label_178748;
        case 0x17874cu: goto label_17874c;
        case 0x178750u: goto label_178750;
        case 0x178754u: goto label_178754;
        case 0x178758u: goto label_178758;
        case 0x17875cu: goto label_17875c;
        case 0x178760u: goto label_178760;
        case 0x178764u: goto label_178764;
        case 0x178768u: goto label_178768;
        case 0x17876cu: goto label_17876c;
        case 0x178770u: goto label_178770;
        case 0x178774u: goto label_178774;
        case 0x178778u: goto label_178778;
        case 0x17877cu: goto label_17877c;
        case 0x178780u: goto label_178780;
        case 0x178784u: goto label_178784;
        case 0x178788u: goto label_178788;
        case 0x17878cu: goto label_17878c;
        case 0x178790u: goto label_178790;
        case 0x178794u: goto label_178794;
        case 0x178798u: goto label_178798;
        case 0x17879cu: goto label_17879c;
        case 0x1787a0u: goto label_1787a0;
        case 0x1787a4u: goto label_1787a4;
        case 0x1787a8u: goto label_1787a8;
        case 0x1787acu: goto label_1787ac;
        case 0x1787b0u: goto label_1787b0;
        case 0x1787b4u: goto label_1787b4;
        case 0x1787b8u: goto label_1787b8;
        case 0x1787bcu: goto label_1787bc;
        case 0x1787c0u: goto label_1787c0;
        case 0x1787c4u: goto label_1787c4;
        case 0x1787c8u: goto label_1787c8;
        case 0x1787ccu: goto label_1787cc;
        case 0x1787d0u: goto label_1787d0;
        case 0x1787d4u: goto label_1787d4;
        case 0x1787d8u: goto label_1787d8;
        case 0x1787dcu: goto label_1787dc;
        case 0x1787e0u: goto label_1787e0;
        case 0x1787e4u: goto label_1787e4;
        case 0x1787e8u: goto label_1787e8;
        case 0x1787ecu: goto label_1787ec;
        case 0x1787f0u: goto label_1787f0;
        case 0x1787f4u: goto label_1787f4;
        case 0x1787f8u: goto label_1787f8;
        case 0x1787fcu: goto label_1787fc;
        case 0x178800u: goto label_178800;
        case 0x178804u: goto label_178804;
        case 0x178808u: goto label_178808;
        case 0x17880cu: goto label_17880c;
        case 0x178810u: goto label_178810;
        case 0x178814u: goto label_178814;
        case 0x178818u: goto label_178818;
        case 0x17881cu: goto label_17881c;
        case 0x178820u: goto label_178820;
        case 0x178824u: goto label_178824;
        case 0x178828u: goto label_178828;
        case 0x17882cu: goto label_17882c;
        case 0x178830u: goto label_178830;
        case 0x178834u: goto label_178834;
        case 0x178838u: goto label_178838;
        case 0x17883cu: goto label_17883c;
        case 0x178840u: goto label_178840;
        case 0x178844u: goto label_178844;
        case 0x178848u: goto label_178848;
        case 0x17884cu: goto label_17884c;
        case 0x178850u: goto label_178850;
        case 0x178854u: goto label_178854;
        case 0x178858u: goto label_178858;
        case 0x17885cu: goto label_17885c;
        case 0x178860u: goto label_178860;
        case 0x178864u: goto label_178864;
        case 0x178868u: goto label_178868;
        case 0x17886cu: goto label_17886c;
        case 0x178870u: goto label_178870;
        case 0x178874u: goto label_178874;
        case 0x178878u: goto label_178878;
        case 0x17887cu: goto label_17887c;
        case 0x178880u: goto label_178880;
        case 0x178884u: goto label_178884;
        case 0x178888u: goto label_178888;
        case 0x17888cu: goto label_17888c;
        case 0x178890u: goto label_178890;
        case 0x178894u: goto label_178894;
        case 0x178898u: goto label_178898;
        case 0x17889cu: goto label_17889c;
        case 0x1788a0u: goto label_1788a0;
        case 0x1788a4u: goto label_1788a4;
        case 0x1788a8u: goto label_1788a8;
        case 0x1788acu: goto label_1788ac;
        case 0x1788b0u: goto label_1788b0;
        case 0x1788b4u: goto label_1788b4;
        case 0x1788b8u: goto label_1788b8;
        case 0x1788bcu: goto label_1788bc;
        case 0x1788c0u: goto label_1788c0;
        case 0x1788c4u: goto label_1788c4;
        case 0x1788c8u: goto label_1788c8;
        case 0x1788ccu: goto label_1788cc;
        case 0x1788d0u: goto label_1788d0;
        case 0x1788d4u: goto label_1788d4;
        case 0x1788d8u: goto label_1788d8;
        case 0x1788dcu: goto label_1788dc;
        case 0x1788e0u: goto label_1788e0;
        case 0x1788e4u: goto label_1788e4;
        case 0x1788e8u: goto label_1788e8;
        case 0x1788ecu: goto label_1788ec;
        case 0x1788f0u: goto label_1788f0;
        case 0x1788f4u: goto label_1788f4;
        case 0x1788f8u: goto label_1788f8;
        case 0x1788fcu: goto label_1788fc;
        case 0x178900u: goto label_178900;
        case 0x178904u: goto label_178904;
        case 0x178908u: goto label_178908;
        case 0x17890cu: goto label_17890c;
        case 0x178910u: goto label_178910;
        case 0x178914u: goto label_178914;
        case 0x178918u: goto label_178918;
        case 0x17891cu: goto label_17891c;
        case 0x178920u: goto label_178920;
        case 0x178924u: goto label_178924;
        case 0x178928u: goto label_178928;
        case 0x17892cu: goto label_17892c;
        case 0x178930u: goto label_178930;
        case 0x178934u: goto label_178934;
        case 0x178938u: goto label_178938;
        case 0x17893cu: goto label_17893c;
        case 0x178940u: goto label_178940;
        case 0x178944u: goto label_178944;
        case 0x178948u: goto label_178948;
        case 0x17894cu: goto label_17894c;
        case 0x178950u: goto label_178950;
        case 0x178954u: goto label_178954;
        case 0x178958u: goto label_178958;
        case 0x17895cu: goto label_17895c;
        case 0x178960u: goto label_178960;
        case 0x178964u: goto label_178964;
        case 0x178968u: goto label_178968;
        case 0x17896cu: goto label_17896c;
        case 0x178970u: goto label_178970;
        case 0x178974u: goto label_178974;
        case 0x178978u: goto label_178978;
        case 0x17897cu: goto label_17897c;
        case 0x178980u: goto label_178980;
        case 0x178984u: goto label_178984;
        case 0x178988u: goto label_178988;
        case 0x17898cu: goto label_17898c;
        case 0x178990u: goto label_178990;
        case 0x178994u: goto label_178994;
        case 0x178998u: goto label_178998;
        case 0x17899cu: goto label_17899c;
        case 0x1789a0u: goto label_1789a0;
        case 0x1789a4u: goto label_1789a4;
        case 0x1789a8u: goto label_1789a8;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b0u: goto label_1789b0;
        case 0x1789b4u: goto label_1789b4;
        case 0x1789b8u: goto label_1789b8;
        case 0x1789bcu: goto label_1789bc;
        case 0x1789c0u: goto label_1789c0;
        case 0x1789c4u: goto label_1789c4;
        case 0x1789c8u: goto label_1789c8;
        case 0x1789ccu: goto label_1789cc;
        case 0x1789d0u: goto label_1789d0;
        case 0x1789d4u: goto label_1789d4;
        case 0x1789d8u: goto label_1789d8;
        case 0x1789dcu: goto label_1789dc;
        case 0x1789e0u: goto label_1789e0;
        case 0x1789e4u: goto label_1789e4;
        case 0x1789e8u: goto label_1789e8;
        case 0x1789ecu: goto label_1789ec;
        case 0x1789f0u: goto label_1789f0;
        case 0x1789f4u: goto label_1789f4;
        case 0x1789f8u: goto label_1789f8;
        case 0x1789fcu: goto label_1789fc;
        case 0x178a00u: goto label_178a00;
        case 0x178a04u: goto label_178a04;
        case 0x178a08u: goto label_178a08;
        case 0x178a0cu: goto label_178a0c;
        case 0x178a10u: goto label_178a10;
        case 0x178a14u: goto label_178a14;
        case 0x178a18u: goto label_178a18;
        case 0x178a1cu: goto label_178a1c;
        case 0x178a20u: goto label_178a20;
        case 0x178a24u: goto label_178a24;
        case 0x178a28u: goto label_178a28;
        case 0x178a2cu: goto label_178a2c;
        case 0x178a30u: goto label_178a30;
        case 0x178a34u: goto label_178a34;
        case 0x178a38u: goto label_178a38;
        case 0x178a3cu: goto label_178a3c;
        case 0x178a40u: goto label_178a40;
        case 0x178a44u: goto label_178a44;
        case 0x178a48u: goto label_178a48;
        case 0x178a4cu: goto label_178a4c;
        case 0x178a50u: goto label_178a50;
        case 0x178a54u: goto label_178a54;
        case 0x178a58u: goto label_178a58;
        case 0x178a5cu: goto label_178a5c;
        case 0x178a60u: goto label_178a60;
        case 0x178a64u: goto label_178a64;
        case 0x178a68u: goto label_178a68;
        case 0x178a6cu: goto label_178a6c;
        case 0x178a70u: goto label_178a70;
        case 0x178a74u: goto label_178a74;
        case 0x178a78u: goto label_178a78;
        case 0x178a7cu: goto label_178a7c;
        case 0x178a80u: goto label_178a80;
        case 0x178a84u: goto label_178a84;
        case 0x178a88u: goto label_178a88;
        case 0x178a8cu: goto label_178a8c;
        case 0x178a90u: goto label_178a90;
        case 0x178a94u: goto label_178a94;
        case 0x178a98u: goto label_178a98;
        case 0x178a9cu: goto label_178a9c;
        case 0x178aa0u: goto label_178aa0;
        case 0x178aa4u: goto label_178aa4;
        case 0x178aa8u: goto label_178aa8;
        case 0x178aacu: goto label_178aac;
        case 0x178ab0u: goto label_178ab0;
        case 0x178ab4u: goto label_178ab4;
        case 0x178ab8u: goto label_178ab8;
        case 0x178abcu: goto label_178abc;
        case 0x178ac0u: goto label_178ac0;
        case 0x178ac4u: goto label_178ac4;
        case 0x178ac8u: goto label_178ac8;
        case 0x178accu: goto label_178acc;
        case 0x178ad0u: goto label_178ad0;
        case 0x178ad4u: goto label_178ad4;
        case 0x178ad8u: goto label_178ad8;
        case 0x178adcu: goto label_178adc;
        case 0x178ae0u: goto label_178ae0;
        case 0x178ae4u: goto label_178ae4;
        case 0x178ae8u: goto label_178ae8;
        case 0x178aecu: goto label_178aec;
        case 0x178af0u: goto label_178af0;
        case 0x178af4u: goto label_178af4;
        case 0x178af8u: goto label_178af8;
        case 0x178afcu: goto label_178afc;
        case 0x178b00u: goto label_178b00;
        case 0x178b04u: goto label_178b04;
        default: break;
    }

    ctx->pc = 0x1784f0u;

label_1784f0:
    // 0x1784f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1784f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1784f4:
    // 0x1784f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1784f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1784f8:
    // 0x1784f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1784f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1784fc:
    // 0x1784fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1784fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178500:
    // 0x178500: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x178500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_178504:
    // 0x178504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x178504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_178508:
    // 0x178508: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x178508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_17850c:
    // 0x17850c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_178510:
    // 0x178510: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x178510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_178514:
    // 0x178514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x178514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_178518:
    // 0x178518: 0xc137afa  jal         func_4DEBE8
label_17851c:
    if (ctx->pc == 0x17851Cu) {
        ctx->pc = 0x17851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178518u;
        // 0x17851c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178520u;
        goto label_178520;
    }
    ctx->pc = 0x178518u;
    SET_GPR_U32(ctx, 31, 0x178520u);
    ctx->pc = 0x17851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178518u;
    // 0x17851c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x178518u, 0x178520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178520u;
label_178520:
    // 0x178520: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_178524:
    // 0x178524: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_178528:
    // 0x178528: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_17852c:
    if (ctx->pc == 0x17852Cu) {
        ctx->pc = 0x17852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178528u;
        // 0x17852c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178530u;
        goto label_178530;
    }
    ctx->pc = 0x178528u;
    {
        const bool branch_taken_0x178528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178528u;
        // 0x17852c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178528) {
            ctx->pc = 0x178540u;
            goto label_178540;
        }
    }
    ctx->pc = 0x178530u;
label_178530:
    // 0x178530: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x178530u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_178534:
    // 0x178534: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x178534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_178538:
    // 0x178538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17853c:
    if (ctx->pc == 0x17853Cu) {
        ctx->pc = 0x17853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178538u;
        // 0x17853c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178540u;
        goto label_178540;
    }
    ctx->pc = 0x178538u;
    {
        const bool branch_taken_0x178538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178538u;
        // 0x17853c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178538) {
            ctx->pc = 0x178548u;
            goto label_178548;
        }
    }
    ctx->pc = 0x178540u;
label_178540:
    // 0x178540: 0x10000169  b           . + 4 + (0x169 << 2)
label_178544:
    if (ctx->pc == 0x178544u) {
        ctx->pc = 0x178544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178540u;
        // 0x178544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178548u;
        goto label_178548;
    }
    ctx->pc = 0x178540u;
    {
        const bool branch_taken_0x178540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178540u;
        // 0x178544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178540) {
            ctx->pc = 0x178AE8u;
            goto label_178ae8;
        }
    }
    ctx->pc = 0x178548u;
label_178548:
    // 0x178548: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x178548u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_17854c:
    // 0x17854c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x17854cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_178550:
    // 0x178550: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x178550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_178554:
    // 0x178554: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x178554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178558:
    // 0x178558: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x178558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_17855c:
    // 0x17855c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x17855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_178560:
    // 0x178560: 0x60f809  jalr        $v1
label_178564:
    if (ctx->pc == 0x178564u) {
        ctx->pc = 0x178564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178560u;
        // 0x178564: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178568u;
        goto label_178568;
    }
    ctx->pc = 0x178560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178568u);
        ctx->pc = 0x178564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178560u;
        // 0x178564: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178560u, 0x178568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178568u;
label_178568:
    // 0x178568: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_17856c:
    // 0x17856c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178570:
    // 0x178570: 0x24060087  addiu       $a2, $zero, 0x87
    ctx->pc = 0x178570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_178574:
    // 0x178574: 0xc137a72  jal         func_4DE9C8
label_178578:
    if (ctx->pc == 0x178578u) {
        ctx->pc = 0x178578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178574u;
        // 0x178578: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17857Cu;
        goto label_17857c;
    }
    ctx->pc = 0x178574u;
    SET_GPR_U32(ctx, 31, 0x17857Cu);
    ctx->pc = 0x178578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178574u;
    // 0x178578: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE9C8u, 0x178574u, 0x17857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17857Cu;
label_17857c:
    // 0x17857c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x17857cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_178580:
    // 0x178580: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x178580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_178584:
    // 0x178584: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x178584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178588:
    // 0x178588: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x178588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_17858c:
    // 0x17858c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x17858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_178590:
    // 0x178590: 0x60f809  jalr        $v1
label_178594:
    if (ctx->pc == 0x178594u) {
        ctx->pc = 0x178594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178590u;
        // 0x178594: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178598u;
        goto label_178598;
    }
    ctx->pc = 0x178590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178598u);
        ctx->pc = 0x178594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178590u;
        // 0x178594: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178590u, 0x178598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178598u;
label_178598:
    // 0x178598: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x178598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17859c:
    // 0x17859c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1785a0:
    // 0x1785a0: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1785a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_1785a4:
    // 0x1785a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1785a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1785a8:
    // 0x1785a8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1785a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_1785ac:
    // 0x1785ac: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x1785acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1785b0:
    // 0x1785b0: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x1785b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1785b4:
    // 0x1785b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1785b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1785b8:
    // 0x1785b8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1785bc:
    if (ctx->pc == 0x1785BCu) {
        ctx->pc = 0x1785BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785B8u;
        // 0x1785bc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1785C0u;
        goto label_1785c0;
    }
    ctx->pc = 0x1785B8u;
    {
        const bool branch_taken_0x1785b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1785BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785B8u;
        // 0x1785bc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785b8) {
            ctx->pc = 0x178600u;
            goto label_178600;
        }
    }
    ctx->pc = 0x1785C0u;
label_1785c0:
    // 0x1785c0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1785c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1785c4:
    // 0x1785c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1785c8:
    if (ctx->pc == 0x1785C8u) {
        ctx->pc = 0x1785C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785C4u;
        // 0x1785c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1785CCu;
        goto label_1785cc;
    }
    ctx->pc = 0x1785C4u;
    {
        const bool branch_taken_0x1785c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1785c4) {
            ctx->pc = 0x1785C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1785C4u;
            // 0x1785c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1785D4u;
            goto label_1785d4;
        }
    }
    ctx->pc = 0x1785CCu;
label_1785cc:
    // 0x1785cc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1785d0:
    if (ctx->pc == 0x1785D0u) {
        ctx->pc = 0x1785D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785CCu;
        // 0x1785d0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1785D4u;
        goto label_1785d4;
    }
    ctx->pc = 0x1785CCu;
    {
        const bool branch_taken_0x1785cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1785D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785CCu;
        // 0x1785d0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785cc) {
            ctx->pc = 0x178604u;
            goto label_178604;
        }
    }
    ctx->pc = 0x1785D4u;
label_1785d4:
    // 0x1785d4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1785d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1785d8:
    // 0x1785d8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1785dc:
    if (ctx->pc == 0x1785DCu) {
        ctx->pc = 0x1785DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785D8u;
        // 0x1785dc: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1785E0u;
        goto label_1785e0;
    }
    ctx->pc = 0x1785D8u;
    {
        const bool branch_taken_0x1785d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1785d8) {
            ctx->pc = 0x1785DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1785D8u;
            // 0x1785dc: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178604u;
            goto label_178604;
        }
    }
    ctx->pc = 0x1785E0u;
label_1785e0:
    // 0x1785e0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1785e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1785e4:
    // 0x1785e4: 0x0  nop
    ctx->pc = 0x1785e4u;
    // NOP
label_1785e8:
    // 0x1785e8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1785e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1785ec:
    // 0x1785ec: 0x0  nop
    ctx->pc = 0x1785ecu;
    // NOP
label_1785f0:
    // 0x1785f0: 0x0  nop
    ctx->pc = 0x1785f0u;
    // NOP
label_1785f4:
    // 0x1785f4: 0x0  nop
    ctx->pc = 0x1785f4u;
    // NOP
label_1785f8:
    // 0x1785f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1785fc:
    if (ctx->pc == 0x1785FCu) {
        ctx->pc = 0x1785FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785F8u;
        // 0x1785fc: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178600u;
        goto label_178600;
    }
    ctx->pc = 0x1785F8u;
    {
        const bool branch_taken_0x1785f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1785f8) {
            ctx->pc = 0x1785FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1785F8u;
            // 0x1785fc: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1785E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1785e8;
        }
    }
    ctx->pc = 0x178600u;
label_178600:
    // 0x178600: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x178600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_178604:
    // 0x178604: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_178608:
    if (ctx->pc == 0x178608u) {
        ctx->pc = 0x17860Cu;
        goto label_17860c;
    }
    ctx->pc = 0x178604u;
    {
        const bool branch_taken_0x178604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x178604) {
            ctx->pc = 0x178690u;
            goto label_178690;
        }
    }
    ctx->pc = 0x17860Cu;
label_17860c:
    // 0x17860c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x17860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_178610:
    // 0x178610: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x178610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_178614:
    // 0x178614: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x178614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_178618:
    // 0x178618: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x178618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_17861c:
    // 0x17861c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x17861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_178620:
    // 0x178620: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_178624:
    if (ctx->pc == 0x178624u) {
        ctx->pc = 0x178624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178620u;
        // 0x178624: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178628u;
        goto label_178628;
    }
    ctx->pc = 0x178620u;
    {
        const bool branch_taken_0x178620 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x178624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178620u;
        // 0x178624: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178620) {
            ctx->pc = 0x17864Cu;
            goto label_17864c;
        }
    }
    ctx->pc = 0x178628u;
label_178628:
    // 0x178628: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_17862c:
    if (ctx->pc == 0x17862Cu) {
        ctx->pc = 0x17862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178628u;
        // 0x17862c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178630u;
        goto label_178630;
    }
    ctx->pc = 0x178628u;
    {
        const bool branch_taken_0x178628 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x17862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178628u;
        // 0x17862c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178628) {
            ctx->pc = 0x178634u;
            goto label_178634;
        }
    }
    ctx->pc = 0x178630u;
label_178630:
    // 0x178630: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x178630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_178634:
    // 0x178634: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x178634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_178638:
    // 0x178638: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x178638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_17863c:
    // 0x17863c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_178640:
    // 0x178640: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x178640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_178644:
    // 0x178644: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_178648:
    // 0x178648: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x178648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_17864c:
    // 0x17864c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x17864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_178650:
    // 0x178650: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_178654:
    if (ctx->pc == 0x178654u) {
        ctx->pc = 0x178654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178650u;
        // 0x178654: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178658u;
        goto label_178658;
    }
    ctx->pc = 0x178650u;
    {
        const bool branch_taken_0x178650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x178650) {
            ctx->pc = 0x178654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178650u;
            // 0x178654: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178660u;
            goto label_178660;
        }
    }
    ctx->pc = 0x178658u;
label_178658:
    // 0x178658: 0x10000005  b           . + 4 + (0x5 << 2)
label_17865c:
    if (ctx->pc == 0x17865Cu) {
        ctx->pc = 0x17865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178658u;
        // 0x17865c: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178660u;
        goto label_178660;
    }
    ctx->pc = 0x178658u;
    {
        const bool branch_taken_0x178658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178658u;
        // 0x17865c: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178658) {
            ctx->pc = 0x178670u;
            goto label_178670;
        }
    }
    ctx->pc = 0x178660u;
label_178660:
    // 0x178660: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x178660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_178664:
    // 0x178664: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_178668:
    if (ctx->pc == 0x178668u) {
        ctx->pc = 0x178668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178664u;
        // 0x178668: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17866Cu;
        goto label_17866c;
    }
    ctx->pc = 0x178664u;
    {
        const bool branch_taken_0x178664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x178664) {
            ctx->pc = 0x178668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178664u;
            // 0x178668: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178670u;
            goto label_178670;
        }
    }
    ctx->pc = 0x17866Cu;
label_17866c:
    // 0x17866c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x17866cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_178670:
    // 0x178670: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x178670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_178674:
    // 0x178674: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x178674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_178678:
    // 0x178678: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x178678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_17867c:
    // 0x17867c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178680:
    // 0x178680: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x178680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_178684:
    // 0x178684: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x178684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_178688:
    // 0x178688: 0x10000034  b           . + 4 + (0x34 << 2)
label_17868c:
    if (ctx->pc == 0x17868Cu) {
        ctx->pc = 0x17868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178688u;
        // 0x17868c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178690u;
        goto label_178690;
    }
    ctx->pc = 0x178688u;
    {
        const bool branch_taken_0x178688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178688u;
        // 0x17868c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178688) {
            ctx->pc = 0x17875Cu;
            goto label_17875c;
        }
    }
    ctx->pc = 0x178690u;
label_178690:
    // 0x178690: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_178694:
    if (ctx->pc == 0x178694u) {
        ctx->pc = 0x178694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178690u;
        // 0x178694: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178698u;
        goto label_178698;
    }
    ctx->pc = 0x178690u;
    {
        const bool branch_taken_0x178690 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x178694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178690u;
        // 0x178694: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178690) {
            ctx->pc = 0x17869Cu;
            goto label_17869c;
        }
    }
    ctx->pc = 0x178698u;
label_178698:
    // 0x178698: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x178698u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_17869c:
    // 0x17869c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x17869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1786a0:
    // 0x1786a0: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_1786a4:
    if (ctx->pc == 0x1786A4u) {
        ctx->pc = 0x1786A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786A0u;
        // 0x1786a4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786A8u;
        goto label_1786a8;
    }
    ctx->pc = 0x1786A0u;
    {
        const bool branch_taken_0x1786a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1786a0) {
            ctx->pc = 0x1786A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1786A0u;
            // 0x1786a4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1786B0u;
            goto label_1786b0;
        }
    }
    ctx->pc = 0x1786A8u;
label_1786a8:
    // 0x1786a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1786ac:
    if (ctx->pc == 0x1786ACu) {
        ctx->pc = 0x1786ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786A8u;
        // 0x1786ac: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786B0u;
        goto label_1786b0;
    }
    ctx->pc = 0x1786A8u;
    {
        const bool branch_taken_0x1786a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786A8u;
        // 0x1786ac: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786a8) {
            ctx->pc = 0x1786C0u;
            goto label_1786c0;
        }
    }
    ctx->pc = 0x1786B0u;
label_1786b0:
    // 0x1786b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1786b4:
    // 0x1786b4: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_1786b8:
    if (ctx->pc == 0x1786B8u) {
        ctx->pc = 0x1786B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786B4u;
        // 0x1786b8: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786BCu;
        goto label_1786bc;
    }
    ctx->pc = 0x1786B4u;
    {
        const bool branch_taken_0x1786b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1786b4) {
            ctx->pc = 0x1786B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1786B4u;
            // 0x1786b8: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1786C0u;
            goto label_1786c0;
        }
    }
    ctx->pc = 0x1786BCu;
label_1786bc:
    // 0x1786bc: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1786bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_1786c0:
    // 0x1786c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1786c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1786c4:
    // 0x1786c4: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_1786c8:
    if (ctx->pc == 0x1786C8u) {
        ctx->pc = 0x1786C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786C4u;
        // 0x1786c8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786CCu;
        goto label_1786cc;
    }
    ctx->pc = 0x1786C4u;
    {
        const bool branch_taken_0x1786c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1786c4) {
            ctx->pc = 0x1786C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1786C4u;
            // 0x1786c8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178710u;
            goto label_178710;
        }
    }
    ctx->pc = 0x1786CCu;
label_1786cc:
    // 0x1786cc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1786d0:
    // 0x1786d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1786d4:
    if (ctx->pc == 0x1786D4u) {
        ctx->pc = 0x1786D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786D0u;
        // 0x1786d4: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786D8u;
        goto label_1786d8;
    }
    ctx->pc = 0x1786D0u;
    {
        const bool branch_taken_0x1786d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1786d0) {
            ctx->pc = 0x1786D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1786D0u;
            // 0x1786d4: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1786E4u;
            goto label_1786e4;
        }
    }
    ctx->pc = 0x1786D8u;
label_1786d8:
    // 0x1786d8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1786d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1786dc:
    // 0x1786dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1786e0:
    if (ctx->pc == 0x1786E0u) {
        ctx->pc = 0x1786E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786DCu;
        // 0x1786e0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786E4u;
        goto label_1786e4;
    }
    ctx->pc = 0x1786DCu;
    {
        const bool branch_taken_0x1786dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786DCu;
        // 0x1786e0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786dc) {
            ctx->pc = 0x17870Cu;
            goto label_17870c;
        }
    }
    ctx->pc = 0x1786E4u;
label_1786e4:
    // 0x1786e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1786e8:
    if (ctx->pc == 0x1786E8u) {
        ctx->pc = 0x1786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786E4u;
        // 0x1786e8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786ECu;
        goto label_1786ec;
    }
    ctx->pc = 0x1786E4u;
    {
        const bool branch_taken_0x1786e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786E4u;
        // 0x1786e8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786e4) {
            ctx->pc = 0x178708u;
            goto label_178708;
        }
    }
    ctx->pc = 0x1786ECu;
label_1786ec:
    // 0x1786ec: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1786ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1786f0:
    // 0x1786f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1786f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1786f4:
    // 0x1786f4: 0x0  nop
    ctx->pc = 0x1786f4u;
    // NOP
label_1786f8:
    // 0x1786f8: 0x0  nop
    ctx->pc = 0x1786f8u;
    // NOP
label_1786fc:
    // 0x1786fc: 0x0  nop
    ctx->pc = 0x1786fcu;
    // NOP
label_178700:
    // 0x178700: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_178704:
    if (ctx->pc == 0x178704u) {
        ctx->pc = 0x178704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178700u;
        // 0x178704: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178708u;
        goto label_178708;
    }
    ctx->pc = 0x178700u;
    {
        const bool branch_taken_0x178700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178700) {
            ctx->pc = 0x178704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178700u;
            // 0x178704: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1786F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1786f0;
        }
    }
    ctx->pc = 0x178708u;
label_178708:
    // 0x178708: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x178708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_17870c:
    // 0x17870c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x17870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_178710:
    // 0x178710: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_178714:
    if (ctx->pc == 0x178714u) {
        ctx->pc = 0x178714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178710u;
        // 0x178714: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178718u;
        goto label_178718;
    }
    ctx->pc = 0x178710u;
    {
        const bool branch_taken_0x178710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x178710) {
            ctx->pc = 0x178714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178710u;
            // 0x178714: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178760u;
            goto label_178760;
        }
    }
    ctx->pc = 0x178718u;
label_178718:
    // 0x178718: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x178718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_17871c:
    // 0x17871c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_178720:
    if (ctx->pc == 0x178720u) {
        ctx->pc = 0x178720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17871Cu;
        // 0x178720: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178724u;
        goto label_178724;
    }
    ctx->pc = 0x17871Cu;
    {
        const bool branch_taken_0x17871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17871c) {
            ctx->pc = 0x178720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17871Cu;
            // 0x178720: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178730u;
            goto label_178730;
        }
    }
    ctx->pc = 0x178724u;
label_178724:
    // 0x178724: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x178724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_178728:
    // 0x178728: 0x1000000c  b           . + 4 + (0xC << 2)
label_17872c:
    if (ctx->pc == 0x17872Cu) {
        ctx->pc = 0x17872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178728u;
        // 0x17872c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178730u;
        goto label_178730;
    }
    ctx->pc = 0x178728u;
    {
        const bool branch_taken_0x178728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178728u;
        // 0x17872c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178728) {
            ctx->pc = 0x17875Cu;
            goto label_17875c;
        }
    }
    ctx->pc = 0x178730u;
label_178730:
    // 0x178730: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_178734:
    if (ctx->pc == 0x178734u) {
        ctx->pc = 0x178734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178730u;
        // 0x178734: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178738u;
        goto label_178738;
    }
    ctx->pc = 0x178730u;
    {
        const bool branch_taken_0x178730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178730u;
        // 0x178734: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178730) {
            ctx->pc = 0x178758u;
            goto label_178758;
        }
    }
    ctx->pc = 0x178738u;
label_178738:
    // 0x178738: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x178738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17873c:
    // 0x17873c: 0x0  nop
    ctx->pc = 0x17873cu;
    // NOP
label_178740:
    // 0x178740: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x178740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_178744:
    // 0x178744: 0x0  nop
    ctx->pc = 0x178744u;
    // NOP
label_178748:
    // 0x178748: 0x0  nop
    ctx->pc = 0x178748u;
    // NOP
label_17874c:
    // 0x17874c: 0x0  nop
    ctx->pc = 0x17874cu;
    // NOP
label_178750:
    // 0x178750: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_178754:
    if (ctx->pc == 0x178754u) {
        ctx->pc = 0x178754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178750u;
        // 0x178754: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178758u;
        goto label_178758;
    }
    ctx->pc = 0x178750u;
    {
        const bool branch_taken_0x178750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178750) {
            ctx->pc = 0x178754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178750u;
            // 0x178754: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178740;
        }
    }
    ctx->pc = 0x178758u;
label_178758:
    // 0x178758: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x178758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_17875c:
    // 0x17875c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_178760:
    // 0x178760: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_178764:
    if (ctx->pc == 0x178764u) {
        ctx->pc = 0x178768u;
        goto label_178768;
    }
    ctx->pc = 0x178760u;
    {
        const bool branch_taken_0x178760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178760) {
            ctx->pc = 0x178AACu;
            goto label_178aac;
        }
    }
    ctx->pc = 0x178768u;
label_178768:
    // 0x178768: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_17876c:
    if (ctx->pc == 0x17876Cu) {
        ctx->pc = 0x17876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178768u;
        // 0x17876c: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178770u;
        goto label_178770;
    }
    ctx->pc = 0x178768u;
    {
        const bool branch_taken_0x178768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178768u;
        // 0x17876c: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178768) {
            ctx->pc = 0x178A80u;
            goto label_178a80;
        }
    }
    ctx->pc = 0x178770u;
label_178770:
    // 0x178770: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_178774:
    if (ctx->pc == 0x178774u) {
        ctx->pc = 0x178774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178770u;
        // 0x178774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178778u;
        goto label_178778;
    }
    ctx->pc = 0x178770u;
    {
        const bool branch_taken_0x178770 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x178774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178770u;
        // 0x178774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178770) {
            ctx->pc = 0x1788F4u;
            goto label_1788f4;
        }
    }
    ctx->pc = 0x178778u;
label_178778:
    // 0x178778: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x178778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_17877c:
    // 0x17877c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178780:
    // 0x178780: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_178784:
    if (ctx->pc == 0x178784u) {
        ctx->pc = 0x178784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178780u;
        // 0x178784: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178788u;
        goto label_178788;
    }
    ctx->pc = 0x178780u;
    {
        const bool branch_taken_0x178780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178780) {
            ctx->pc = 0x178784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178780u;
            // 0x178784: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1787E8u;
            goto label_1787e8;
        }
    }
    ctx->pc = 0x178788u;
label_178788:
    // 0x178788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17878c:
    // 0x17878c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17878cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_178790:
    // 0x178790: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x178790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_178794:
    // 0x178794: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x178794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_178798:
    // 0x178798: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x178798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17879c:
    // 0x17879c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x17879cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1787a0:
    // 0x1787a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1787a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1787a4:
    // 0x1787a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1787a8:
    if (ctx->pc == 0x1787A8u) {
        ctx->pc = 0x1787A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787A4u;
        // 0x1787a8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787ACu;
        goto label_1787ac;
    }
    ctx->pc = 0x1787A4u;
    {
        const bool branch_taken_0x1787a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1787a4) {
            ctx->pc = 0x1787A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1787A4u;
            // 0x1787a8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1787ACu;
            goto label_1787ac;
        }
    }
    ctx->pc = 0x1787ACu;
label_1787ac:
    // 0x1787ac: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1787acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1787b0:
    // 0x1787b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1787b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1787b4:
    // 0x1787b4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1787b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1787b8:
    // 0x1787b8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_1787bc:
    if (ctx->pc == 0x1787BCu) {
        ctx->pc = 0x1787BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787B8u;
        // 0x1787bc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787C0u;
        goto label_1787c0;
    }
    ctx->pc = 0x1787B8u;
    {
        const bool branch_taken_0x1787b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1787b8) {
            ctx->pc = 0x1787BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1787B8u;
            // 0x1787bc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1787C8u;
            goto label_1787c8;
        }
    }
    ctx->pc = 0x1787C0u;
label_1787c0:
    // 0x1787c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1787c4:
    if (ctx->pc == 0x1787C4u) {
        ctx->pc = 0x1787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787C0u;
        // 0x1787c4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787C8u;
        goto label_1787c8;
    }
    ctx->pc = 0x1787C0u;
    {
        const bool branch_taken_0x1787c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787C0u;
        // 0x1787c4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787c0) {
            ctx->pc = 0x1787D8u;
            goto label_1787d8;
        }
    }
    ctx->pc = 0x1787C8u;
label_1787c8:
    // 0x1787c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1787c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1787cc:
    // 0x1787cc: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_1787d0:
    if (ctx->pc == 0x1787D0u) {
        ctx->pc = 0x1787D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787CCu;
        // 0x1787d0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787D4u;
        goto label_1787d4;
    }
    ctx->pc = 0x1787CCu;
    {
        const bool branch_taken_0x1787cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1787cc) {
            ctx->pc = 0x1787D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1787CCu;
            // 0x1787d0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1787D8u;
            goto label_1787d8;
        }
    }
    ctx->pc = 0x1787D4u;
label_1787d4:
    // 0x1787d4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1787d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1787d8:
    // 0x1787d8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1787d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1787dc:
    // 0x1787dc: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x1787dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_1787e0:
    // 0x1787e0: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1787e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1787e4:
    // 0x1787e4: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1787e8:
    // 0x1787e8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_1787ec:
    if (ctx->pc == 0x1787ECu) {
        ctx->pc = 0x1787ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787E8u;
        // 0x1787ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787F0u;
        goto label_1787f0;
    }
    ctx->pc = 0x1787E8u;
    {
        const bool branch_taken_0x1787e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787E8u;
        // 0x1787ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787e8) {
            ctx->pc = 0x1787FCu;
            goto label_1787fc;
        }
    }
    ctx->pc = 0x1787F0u;
label_1787f0:
    // 0x1787f0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1787f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1787f4:
    // 0x1787f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1787f8:
    if (ctx->pc == 0x1787F8u) {
        ctx->pc = 0x1787F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787F4u;
        // 0x1787f8: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787FCu;
        goto label_1787fc;
    }
    ctx->pc = 0x1787F4u;
    {
        const bool branch_taken_0x1787f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1787F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787F4u;
        // 0x1787f8: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787f4) {
            ctx->pc = 0x178814u;
            goto label_178814;
        }
    }
    ctx->pc = 0x1787FCu;
label_1787fc:
    // 0x1787fc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_178800:
    // 0x178800: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_178804:
    if (ctx->pc == 0x178804u) {
        ctx->pc = 0x178804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178800u;
        // 0x178804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178808u;
        goto label_178808;
    }
    ctx->pc = 0x178800u;
    {
        const bool branch_taken_0x178800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x178804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178800u;
        // 0x178804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178800) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x178808u;
label_178808:
    // 0x178808: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x178808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17880c:
    // 0x17880c: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_178810:
    if (ctx->pc == 0x178810u) {
        ctx->pc = 0x178810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17880Cu;
        // 0x178810: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178814u;
        goto label_178814;
    }
    ctx->pc = 0x17880Cu;
    {
        const bool branch_taken_0x17880c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17880c) {
            ctx->pc = 0x178810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17880Cu;
            // 0x178810: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178990u;
            goto label_178990;
        }
    }
    ctx->pc = 0x178814u;
label_178814:
    // 0x178814: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_178818:
    if (ctx->pc == 0x178818u) {
        ctx->pc = 0x178818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178814u;
        // 0x178818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17881Cu;
        goto label_17881c;
    }
    ctx->pc = 0x178814u;
    {
        const bool branch_taken_0x178814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x178818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178814u;
        // 0x178818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178814) {
            ctx->pc = 0x178828u;
            goto label_178828;
        }
    }
    ctx->pc = 0x17881Cu;
label_17881c:
    // 0x17881c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178820:
    // 0x178820: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_178824:
    if (ctx->pc == 0x178824u) {
        ctx->pc = 0x178824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178820u;
        // 0x178824: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178828u;
        goto label_178828;
    }
    ctx->pc = 0x178820u;
    {
        const bool branch_taken_0x178820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178820) {
            ctx->pc = 0x178824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178820u;
            // 0x178824: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17888Cu;
            goto label_17888c;
        }
    }
    ctx->pc = 0x178828u;
label_178828:
    // 0x178828: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_17882c:
    if (ctx->pc == 0x17882Cu) {
        ctx->pc = 0x17882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178828u;
        // 0x17882c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178830u;
        goto label_178830;
    }
    ctx->pc = 0x178828u;
    {
        const bool branch_taken_0x178828 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178828u;
        // 0x17882c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178828) {
            ctx->pc = 0x178834u;
            goto label_178834;
        }
    }
    ctx->pc = 0x178830u;
label_178830:
    // 0x178830: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x178830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_178834:
    // 0x178834: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x178834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_178838:
    // 0x178838: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x178838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_17883c:
    // 0x17883c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x17883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_178840:
    // 0x178840: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x178840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_178844:
    // 0x178844: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x178844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_178848:
    // 0x178848: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_17884c:
    if (ctx->pc == 0x17884Cu) {
        ctx->pc = 0x17884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178848u;
        // 0x17884c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178850u;
        goto label_178850;
    }
    ctx->pc = 0x178848u;
    {
        const bool branch_taken_0x178848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178848) {
            ctx->pc = 0x17884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178848u;
            // 0x17884c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178850u;
            goto label_178850;
        }
    }
    ctx->pc = 0x178850u;
label_178850:
    // 0x178850: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x178850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_178854:
    // 0x178854: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x178854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_178858:
    // 0x178858: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x178858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_17885c:
    // 0x17885c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_178860:
    if (ctx->pc == 0x178860u) {
        ctx->pc = 0x178860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17885Cu;
        // 0x178860: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178864u;
        goto label_178864;
    }
    ctx->pc = 0x17885Cu;
    {
        const bool branch_taken_0x17885c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17885c) {
            ctx->pc = 0x178860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17885Cu;
            // 0x178860: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17886Cu;
            goto label_17886c;
        }
    }
    ctx->pc = 0x178864u;
label_178864:
    // 0x178864: 0x10000005  b           . + 4 + (0x5 << 2)
label_178868:
    if (ctx->pc == 0x178868u) {
        ctx->pc = 0x178868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178864u;
        // 0x178868: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17886Cu;
        goto label_17886c;
    }
    ctx->pc = 0x178864u;
    {
        const bool branch_taken_0x178864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178864u;
        // 0x178868: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178864) {
            ctx->pc = 0x17887Cu;
            goto label_17887c;
        }
    }
    ctx->pc = 0x17886Cu;
label_17886c:
    // 0x17886c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x17886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_178870:
    // 0x178870: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_178874:
    if (ctx->pc == 0x178874u) {
        ctx->pc = 0x178874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178870u;
        // 0x178874: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178878u;
        goto label_178878;
    }
    ctx->pc = 0x178870u;
    {
        const bool branch_taken_0x178870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x178870) {
            ctx->pc = 0x178874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178870u;
            // 0x178874: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17887Cu;
            goto label_17887c;
        }
    }
    ctx->pc = 0x178878u;
label_178878:
    // 0x178878: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x178878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_17887c:
    // 0x17887c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x17887cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_178880:
    // 0x178880: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x178880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_178884:
    // 0x178884: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x178884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_178888:
    // 0x178888: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x178888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_17888c:
    // 0x17888c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178890:
    // 0x178890: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x178890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_178894:
    // 0x178894: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x178894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_178898:
    // 0x178898: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17889c:
    // 0x17889c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1788a0:
    if (ctx->pc == 0x1788A0u) {
        ctx->pc = 0x1788A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17889Cu;
        // 0x1788a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788A4u;
        goto label_1788a4;
    }
    ctx->pc = 0x17889Cu;
    {
        const bool branch_taken_0x17889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17889c) {
            ctx->pc = 0x1788A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17889Cu;
            // 0x1788a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1788A4u;
            goto label_1788a4;
        }
    }
    ctx->pc = 0x1788A4u;
label_1788a4:
    // 0x1788a4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1788a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1788a8:
    // 0x1788a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1788a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1788ac:
    // 0x1788ac: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1788acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1788b0:
    // 0x1788b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1788b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1788b4:
    // 0x1788b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1788b8:
    if (ctx->pc == 0x1788B8u) {
        ctx->pc = 0x1788B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788B4u;
        // 0x1788b8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788BCu;
        goto label_1788bc;
    }
    ctx->pc = 0x1788B4u;
    {
        const bool branch_taken_0x1788b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1788b4) {
            ctx->pc = 0x1788B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1788B4u;
            // 0x1788b8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1788BCu;
            goto label_1788bc;
        }
    }
    ctx->pc = 0x1788BCu;
label_1788bc:
    // 0x1788bc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1788c0:
    // 0x1788c0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1788c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1788c4:
    // 0x1788c4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1788c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1788c8:
    // 0x1788c8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_1788cc:
    if (ctx->pc == 0x1788CCu) {
        ctx->pc = 0x1788CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788C8u;
        // 0x1788cc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788D0u;
        goto label_1788d0;
    }
    ctx->pc = 0x1788C8u;
    {
        const bool branch_taken_0x1788c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1788c8) {
            ctx->pc = 0x1788CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1788C8u;
            // 0x1788cc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1788D8u;
            goto label_1788d8;
        }
    }
    ctx->pc = 0x1788D0u;
label_1788d0:
    // 0x1788d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1788d4:
    if (ctx->pc == 0x1788D4u) {
        ctx->pc = 0x1788D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788D0u;
        // 0x1788d4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788D8u;
        goto label_1788d8;
    }
    ctx->pc = 0x1788D0u;
    {
        const bool branch_taken_0x1788d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788D0u;
        // 0x1788d4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788d0) {
            ctx->pc = 0x1788E8u;
            goto label_1788e8;
        }
    }
    ctx->pc = 0x1788D8u;
label_1788d8:
    // 0x1788d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1788d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1788dc:
    // 0x1788dc: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_1788e0:
    if (ctx->pc == 0x1788E0u) {
        ctx->pc = 0x1788E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788DCu;
        // 0x1788e0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788E4u;
        goto label_1788e4;
    }
    ctx->pc = 0x1788DCu;
    {
        const bool branch_taken_0x1788dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1788dc) {
            ctx->pc = 0x1788E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1788DCu;
            // 0x1788e0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1788E8u;
            goto label_1788e8;
        }
    }
    ctx->pc = 0x1788E4u;
label_1788e4:
    // 0x1788e4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1788e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1788e8:
    // 0x1788e8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1788e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1788ec:
    // 0x1788ec: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1788f0:
    if (ctx->pc == 0x1788F0u) {
        ctx->pc = 0x1788F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788ECu;
        // 0x1788f0: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788F4u;
        goto label_1788f4;
    }
    ctx->pc = 0x1788ECu;
    {
        const bool branch_taken_0x1788ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788ECu;
        // 0x1788f0: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788ec) {
            ctx->pc = 0x178AA0u;
            goto label_178aa0;
        }
    }
    ctx->pc = 0x1788F4u;
label_1788f4:
    // 0x1788f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1788f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1788f8:
    // 0x1788f8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1788fc:
    if (ctx->pc == 0x1788FCu) {
        ctx->pc = 0x1788FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788F8u;
        // 0x1788fc: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178900u;
        goto label_178900;
    }
    ctx->pc = 0x1788F8u;
    {
        const bool branch_taken_0x1788f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1788f8) {
            ctx->pc = 0x1788FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1788F8u;
            // 0x1788fc: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178960u;
            goto label_178960;
        }
    }
    ctx->pc = 0x178900u;
label_178900:
    // 0x178900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178904:
    // 0x178904: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x178904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_178908:
    // 0x178908: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x178908u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_17890c:
    // 0x17890c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x17890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_178910:
    // 0x178910: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_178914:
    // 0x178914: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x178914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_178918:
    // 0x178918: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x178918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17891c:
    // 0x17891c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_178920:
    if (ctx->pc == 0x178920u) {
        ctx->pc = 0x178920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17891Cu;
        // 0x178920: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178924u;
        goto label_178924;
    }
    ctx->pc = 0x17891Cu;
    {
        const bool branch_taken_0x17891c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17891c) {
            ctx->pc = 0x178920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17891Cu;
            // 0x178920: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178924u;
            goto label_178924;
        }
    }
    ctx->pc = 0x178924u;
label_178924:
    // 0x178924: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x178924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_178928:
    // 0x178928: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x178928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_17892c:
    // 0x17892c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_178930:
    // 0x178930: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_178934:
    if (ctx->pc == 0x178934u) {
        ctx->pc = 0x178934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178930u;
        // 0x178934: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178938u;
        goto label_178938;
    }
    ctx->pc = 0x178930u;
    {
        const bool branch_taken_0x178930 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x178930) {
            ctx->pc = 0x178934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178930u;
            // 0x178934: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178940u;
            goto label_178940;
        }
    }
    ctx->pc = 0x178938u;
label_178938:
    // 0x178938: 0x10000005  b           . + 4 + (0x5 << 2)
label_17893c:
    if (ctx->pc == 0x17893Cu) {
        ctx->pc = 0x17893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178938u;
        // 0x17893c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178940u;
        goto label_178940;
    }
    ctx->pc = 0x178938u;
    {
        const bool branch_taken_0x178938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178938u;
        // 0x17893c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178938) {
            ctx->pc = 0x178950u;
            goto label_178950;
        }
    }
    ctx->pc = 0x178940u;
label_178940:
    // 0x178940: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x178940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_178944:
    // 0x178944: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_178948:
    if (ctx->pc == 0x178948u) {
        ctx->pc = 0x178948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178944u;
        // 0x178948: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17894Cu;
        goto label_17894c;
    }
    ctx->pc = 0x178944u;
    {
        const bool branch_taken_0x178944 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x178944) {
            ctx->pc = 0x178948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178944u;
            // 0x178948: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178950u;
            goto label_178950;
        }
    }
    ctx->pc = 0x17894Cu;
label_17894c:
    // 0x17894c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17894cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_178950:
    // 0x178950: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x178950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_178954:
    // 0x178954: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x178954u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_178958:
    // 0x178958: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x178958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_17895c:
    // 0x17895c: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_178960:
    // 0x178960: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_178964:
    if (ctx->pc == 0x178964u) {
        ctx->pc = 0x178964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178960u;
        // 0x178964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178968u;
        goto label_178968;
    }
    ctx->pc = 0x178960u;
    {
        const bool branch_taken_0x178960 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x178964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178960u;
        // 0x178964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178960) {
            ctx->pc = 0x178974u;
            goto label_178974;
        }
    }
    ctx->pc = 0x178968u;
label_178968:
    // 0x178968: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x178968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_17896c:
    // 0x17896c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_178970:
    if (ctx->pc == 0x178970u) {
        ctx->pc = 0x178970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17896Cu;
        // 0x178970: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178974u;
        goto label_178974;
    }
    ctx->pc = 0x17896Cu;
    {
        const bool branch_taken_0x17896c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x178970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17896Cu;
        // 0x178970: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17896c) {
            ctx->pc = 0x17899Cu;
            goto label_17899c;
        }
    }
    ctx->pc = 0x178974u;
label_178974:
    // 0x178974: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x178974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_178978:
    // 0x178978: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_17897c:
    if (ctx->pc == 0x17897Cu) {
        ctx->pc = 0x17897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178978u;
        // 0x17897c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178980u;
        goto label_178980;
    }
    ctx->pc = 0x178978u;
    {
        const bool branch_taken_0x178978 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178978u;
        // 0x17897c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178978) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x178980u;
label_178980:
    // 0x178980: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x178980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178984:
    // 0x178984: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_178988:
    if (ctx->pc == 0x178988u) {
        ctx->pc = 0x17898Cu;
        goto label_17898c;
    }
    ctx->pc = 0x178984u;
    {
        const bool branch_taken_0x178984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178984) {
            ctx->pc = 0x17899Cu;
            goto label_17899c;
        }
    }
    ctx->pc = 0x17898Cu;
label_17898c:
    // 0x17898c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17898cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_178990:
    // 0x178990: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x178990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_178994:
    // 0x178994: 0x10000039  b           . + 4 + (0x39 << 2)
label_178998:
    if (ctx->pc == 0x178998u) {
        ctx->pc = 0x178998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178994u;
        // 0x178998: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17899Cu;
        goto label_17899c;
    }
    ctx->pc = 0x178994u;
    {
        const bool branch_taken_0x178994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178994u;
        // 0x178998: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178994) {
            ctx->pc = 0x178A7Cu;
            goto label_178a7c;
        }
    }
    ctx->pc = 0x17899Cu;
label_17899c:
    // 0x17899c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1789a0:
    if (ctx->pc == 0x1789A0u) {
        ctx->pc = 0x1789A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17899Cu;
        // 0x1789a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789A4u;
        goto label_1789a4;
    }
    ctx->pc = 0x17899Cu;
    {
        const bool branch_taken_0x17899c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17899Cu;
        // 0x1789a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17899c) {
            ctx->pc = 0x1789B0u;
            goto label_1789b0;
        }
    }
    ctx->pc = 0x1789A4u;
label_1789a4:
    // 0x1789a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1789a8:
    // 0x1789a8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_1789ac:
    if (ctx->pc == 0x1789ACu) {
        ctx->pc = 0x1789ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789A8u;
        // 0x1789ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789B0u;
        goto label_1789b0;
    }
    ctx->pc = 0x1789A8u;
    {
        const bool branch_taken_0x1789a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1789a8) {
            ctx->pc = 0x1789ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789A8u;
            // 0x1789ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A14u;
            goto label_178a14;
        }
    }
    ctx->pc = 0x1789B0u;
label_1789b0:
    // 0x1789b0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_1789b4:
    if (ctx->pc == 0x1789B4u) {
        ctx->pc = 0x1789B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789B0u;
        // 0x1789b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789B8u;
        goto label_1789b8;
    }
    ctx->pc = 0x1789B0u;
    {
        const bool branch_taken_0x1789b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789B0u;
        // 0x1789b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789b0) {
            ctx->pc = 0x1789BCu;
            goto label_1789bc;
        }
    }
    ctx->pc = 0x1789B8u;
label_1789b8:
    // 0x1789b8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1789b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1789bc:
    // 0x1789bc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1789bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1789c0:
    // 0x1789c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1789c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1789c4:
    // 0x1789c4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1789c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1789c8:
    // 0x1789c8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1789c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1789cc:
    // 0x1789cc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1789ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1789d0:
    // 0x1789d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1789d4:
    if (ctx->pc == 0x1789D4u) {
        ctx->pc = 0x1789D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789D0u;
        // 0x1789d4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789D8u;
        goto label_1789d8;
    }
    ctx->pc = 0x1789D0u;
    {
        const bool branch_taken_0x1789d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1789d0) {
            ctx->pc = 0x1789D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789D0u;
            // 0x1789d4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1789D8u;
            goto label_1789d8;
        }
    }
    ctx->pc = 0x1789D8u;
label_1789d8:
    // 0x1789d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1789dc:
    // 0x1789dc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1789dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1789e0:
    // 0x1789e0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1789e4:
    // 0x1789e4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_1789e8:
    if (ctx->pc == 0x1789E8u) {
        ctx->pc = 0x1789E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789E4u;
        // 0x1789e8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789ECu;
        goto label_1789ec;
    }
    ctx->pc = 0x1789E4u;
    {
        const bool branch_taken_0x1789e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1789e4) {
            ctx->pc = 0x1789E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789E4u;
            // 0x1789e8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1789F4u;
            goto label_1789f4;
        }
    }
    ctx->pc = 0x1789ECu;
label_1789ec:
    // 0x1789ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1789f0:
    if (ctx->pc == 0x1789F0u) {
        ctx->pc = 0x1789F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789ECu;
        // 0x1789f0: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789F4u;
        goto label_1789f4;
    }
    ctx->pc = 0x1789ECu;
    {
        const bool branch_taken_0x1789ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789ECu;
        // 0x1789f0: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789ec) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x1789F4u;
label_1789f4:
    // 0x1789f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1789f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1789f8:
    // 0x1789f8: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_1789fc:
    if (ctx->pc == 0x1789FCu) {
        ctx->pc = 0x1789FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789F8u;
        // 0x1789fc: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A00u;
        goto label_178a00;
    }
    ctx->pc = 0x1789F8u;
    {
        const bool branch_taken_0x1789f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1789f8) {
            ctx->pc = 0x1789FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789F8u;
            // 0x1789fc: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x178A00u;
label_178a00:
    // 0x178a00: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x178a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_178a04:
    // 0x178a04: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x178a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_178a08:
    // 0x178a08: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x178a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_178a0c:
    // 0x178a0c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x178a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_178a10:
    // 0x178a10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_178a14:
    // 0x178a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x178a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178a18:
    // 0x178a18: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x178a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_178a1c:
    // 0x178a1c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x178a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_178a20:
    // 0x178a20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x178a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_178a24:
    // 0x178a24: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_178a28:
    if (ctx->pc == 0x178A28u) {
        ctx->pc = 0x178A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A24u;
        // 0x178a28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A2Cu;
        goto label_178a2c;
    }
    ctx->pc = 0x178A24u;
    {
        const bool branch_taken_0x178a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a24) {
            ctx->pc = 0x178A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A24u;
            // 0x178a28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A2Cu;
            goto label_178a2c;
        }
    }
    ctx->pc = 0x178A2Cu;
label_178a2c:
    // 0x178a2c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x178a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_178a30:
    // 0x178a30: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_178a34:
    // 0x178a34: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x178a34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_178a38:
    // 0x178a38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x178a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_178a3c:
    // 0x178a3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_178a40:
    if (ctx->pc == 0x178A40u) {
        ctx->pc = 0x178A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A3Cu;
        // 0x178a40: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A44u;
        goto label_178a44;
    }
    ctx->pc = 0x178A3Cu;
    {
        const bool branch_taken_0x178a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a3c) {
            ctx->pc = 0x178A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A3Cu;
            // 0x178a40: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A44u;
            goto label_178a44;
        }
    }
    ctx->pc = 0x178A44u;
label_178a44:
    // 0x178a44: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x178a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_178a48:
    // 0x178a48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x178a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_178a4c:
    // 0x178a4c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x178a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_178a50:
    // 0x178a50: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_178a54:
    if (ctx->pc == 0x178A54u) {
        ctx->pc = 0x178A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A50u;
        // 0x178a54: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A58u;
        goto label_178a58;
    }
    ctx->pc = 0x178A50u;
    {
        const bool branch_taken_0x178a50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x178a50) {
            ctx->pc = 0x178A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A50u;
            // 0x178a54: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A60u;
            goto label_178a60;
        }
    }
    ctx->pc = 0x178A58u;
label_178a58:
    // 0x178a58: 0x10000005  b           . + 4 + (0x5 << 2)
label_178a5c:
    if (ctx->pc == 0x178A5Cu) {
        ctx->pc = 0x178A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A58u;
        // 0x178a5c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A60u;
        goto label_178a60;
    }
    ctx->pc = 0x178A58u;
    {
        const bool branch_taken_0x178a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A58u;
        // 0x178a5c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a58) {
            ctx->pc = 0x178A70u;
            goto label_178a70;
        }
    }
    ctx->pc = 0x178A60u;
label_178a60:
    // 0x178a60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x178a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_178a64:
    // 0x178a64: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_178a68:
    if (ctx->pc == 0x178A68u) {
        ctx->pc = 0x178A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A64u;
        // 0x178a68: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A6Cu;
        goto label_178a6c;
    }
    ctx->pc = 0x178A64u;
    {
        const bool branch_taken_0x178a64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x178a64) {
            ctx->pc = 0x178A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A64u;
            // 0x178a68: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A70u;
            goto label_178a70;
        }
    }
    ctx->pc = 0x178A6Cu;
label_178a6c:
    // 0x178a6c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x178a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_178a70:
    // 0x178a70: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x178a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_178a74:
    // 0x178a74: 0x1000000a  b           . + 4 + (0xA << 2)
label_178a78:
    if (ctx->pc == 0x178A78u) {
        ctx->pc = 0x178A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A74u;
        // 0x178a78: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A7Cu;
        goto label_178a7c;
    }
    ctx->pc = 0x178A74u;
    {
        const bool branch_taken_0x178a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A74u;
        // 0x178a78: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a74) {
            ctx->pc = 0x178AA0u;
            goto label_178aa0;
        }
    }
    ctx->pc = 0x178A7Cu;
label_178a7c:
    // 0x178a7c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_178a80:
    // 0x178a80: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_178a84:
    if (ctx->pc == 0x178A84u) {
        ctx->pc = 0x178A88u;
        goto label_178a88;
    }
    ctx->pc = 0x178A80u;
    {
        const bool branch_taken_0x178a80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x178a80) {
            ctx->pc = 0x178AA0u;
            goto label_178aa0;
        }
    }
    ctx->pc = 0x178A88u;
label_178a88:
    // 0x178a88: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_178a8c:
    if (ctx->pc == 0x178A8Cu) {
        ctx->pc = 0x178A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A88u;
        // 0x178a8c: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A90u;
        goto label_178a90;
    }
    ctx->pc = 0x178A88u;
    {
        const bool branch_taken_0x178a88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a88) {
            ctx->pc = 0x178A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A88u;
            // 0x178a8c: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178770;
        }
    }
    ctx->pc = 0x178A90u;
label_178a90:
    // 0x178a90: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x178a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_178a94:
    // 0x178a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178a98:
    // 0x178a98: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_178a9c:
    if (ctx->pc == 0x178A9Cu) {
        ctx->pc = 0x178A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A98u;
        // 0x178a9c: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AA0u;
        goto label_178aa0;
    }
    ctx->pc = 0x178A98u;
    {
        const bool branch_taken_0x178a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x178a98) {
            ctx->pc = 0x178A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A98u;
            // 0x178a9c: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178770;
        }
    }
    ctx->pc = 0x178AA0u;
label_178aa0:
    // 0x178aa0: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_178aa4:
    if (ctx->pc == 0x178AA4u) {
        ctx->pc = 0x178AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AA0u;
        // 0x178aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AA8u;
        goto label_178aa8;
    }
    ctx->pc = 0x178AA0u;
    {
        const bool branch_taken_0x178aa0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AA0u;
        // 0x178aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178aa0) {
            ctx->pc = 0x178AACu;
            goto label_178aac;
        }
    }
    ctx->pc = 0x178AA8u;
label_178aa8:
    // 0x178aa8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x178aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_178aac:
    // 0x178aac: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_178ab0:
    if (ctx->pc == 0x178AB0u) {
        ctx->pc = 0x178AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AACu;
        // 0x178ab0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AB4u;
        goto label_178ab4;
    }
    ctx->pc = 0x178AACu;
    {
        const bool branch_taken_0x178aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AACu;
        // 0x178ab0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178aac) {
            ctx->pc = 0x178AD8u;
            goto label_178ad8;
        }
    }
    ctx->pc = 0x178AB4u;
label_178ab4:
    // 0x178ab4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x178ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_178ab8:
    // 0x178ab8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x178ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_178abc:
    // 0x178abc: 0x24c61ee0  addiu       $a2, $a2, 0x1EE0
    ctx->pc = 0x178abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7904));
label_178ac0:
    // 0x178ac0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x178ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_178ac4:
    // 0x178ac4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x178ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_178ac8:
    // 0x178ac8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x178ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_178acc:
    // 0x178acc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x178accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_178ad0:
    // 0x178ad0: 0x60f809  jalr        $v1
label_178ad4:
    if (ctx->pc == 0x178AD4u) {
        ctx->pc = 0x178AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AD0u;
        // 0x178ad4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AD8u;
        goto label_178ad8;
    }
    ctx->pc = 0x178AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178AD8u);
        ctx->pc = 0x178AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AD0u;
        // 0x178ad4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178AD0u, 0x178AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178AD8u;
label_178ad8:
    // 0x178ad8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x178ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_178adc:
    // 0x178adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178ae0:
    // 0x178ae0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_178ae4:
    // 0x178ae4: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x178ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_178ae8:
    // 0x178ae8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x178ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_178aec:
    // 0x178aec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x178aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_178af0:
    // 0x178af0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x178af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_178af4:
    // 0x178af4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x178af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_178af8:
    // 0x178af8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_178afc:
    // 0x178afc: 0x3e00008  jr          $ra
label_178b00:
    if (ctx->pc == 0x178B00u) {
        ctx->pc = 0x178B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AFCu;
        // 0x178b00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178B04u;
        goto label_178b04;
    }
    ctx->pc = 0x178AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AFCu;
        // 0x178b00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B04u;
label_178b04:
    // 0x178b04: 0x0  nop
    ctx->pc = 0x178b04u;
    // NOP
    ctx->pc = 0x178b08u;
}
