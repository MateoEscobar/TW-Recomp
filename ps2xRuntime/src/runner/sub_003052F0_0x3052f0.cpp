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

// Function: sub_003052F0
// Address: 0x3052f0 - 0x306040
void sub_003052F0_0x3052f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003052F0_0x3052f0");
#endif

    switch (ctx->pc) {
        case 0x3052f0u: goto label_3052f0;
        case 0x3052f4u: goto label_3052f4;
        case 0x3052f8u: goto label_3052f8;
        case 0x3052fcu: goto label_3052fc;
        case 0x305300u: goto label_305300;
        case 0x305304u: goto label_305304;
        case 0x305308u: goto label_305308;
        case 0x30530cu: goto label_30530c;
        case 0x305310u: goto label_305310;
        case 0x305314u: goto label_305314;
        case 0x305318u: goto label_305318;
        case 0x30531cu: goto label_30531c;
        case 0x305320u: goto label_305320;
        case 0x305324u: goto label_305324;
        case 0x305328u: goto label_305328;
        case 0x30532cu: goto label_30532c;
        case 0x305330u: goto label_305330;
        case 0x305334u: goto label_305334;
        case 0x305338u: goto label_305338;
        case 0x30533cu: goto label_30533c;
        case 0x305340u: goto label_305340;
        case 0x305344u: goto label_305344;
        case 0x305348u: goto label_305348;
        case 0x30534cu: goto label_30534c;
        case 0x305350u: goto label_305350;
        case 0x305354u: goto label_305354;
        case 0x305358u: goto label_305358;
        case 0x30535cu: goto label_30535c;
        case 0x305360u: goto label_305360;
        case 0x305364u: goto label_305364;
        case 0x305368u: goto label_305368;
        case 0x30536cu: goto label_30536c;
        case 0x305370u: goto label_305370;
        case 0x305374u: goto label_305374;
        case 0x305378u: goto label_305378;
        case 0x30537cu: goto label_30537c;
        case 0x305380u: goto label_305380;
        case 0x305384u: goto label_305384;
        case 0x305388u: goto label_305388;
        case 0x30538cu: goto label_30538c;
        case 0x305390u: goto label_305390;
        case 0x305394u: goto label_305394;
        case 0x305398u: goto label_305398;
        case 0x30539cu: goto label_30539c;
        case 0x3053a0u: goto label_3053a0;
        case 0x3053a4u: goto label_3053a4;
        case 0x3053a8u: goto label_3053a8;
        case 0x3053acu: goto label_3053ac;
        case 0x3053b0u: goto label_3053b0;
        case 0x3053b4u: goto label_3053b4;
        case 0x3053b8u: goto label_3053b8;
        case 0x3053bcu: goto label_3053bc;
        case 0x3053c0u: goto label_3053c0;
        case 0x3053c4u: goto label_3053c4;
        case 0x3053c8u: goto label_3053c8;
        case 0x3053ccu: goto label_3053cc;
        case 0x3053d0u: goto label_3053d0;
        case 0x3053d4u: goto label_3053d4;
        case 0x3053d8u: goto label_3053d8;
        case 0x3053dcu: goto label_3053dc;
        case 0x3053e0u: goto label_3053e0;
        case 0x3053e4u: goto label_3053e4;
        case 0x3053e8u: goto label_3053e8;
        case 0x3053ecu: goto label_3053ec;
        case 0x3053f0u: goto label_3053f0;
        case 0x3053f4u: goto label_3053f4;
        case 0x3053f8u: goto label_3053f8;
        case 0x3053fcu: goto label_3053fc;
        case 0x305400u: goto label_305400;
        case 0x305404u: goto label_305404;
        case 0x305408u: goto label_305408;
        case 0x30540cu: goto label_30540c;
        case 0x305410u: goto label_305410;
        case 0x305414u: goto label_305414;
        case 0x305418u: goto label_305418;
        case 0x30541cu: goto label_30541c;
        case 0x305420u: goto label_305420;
        case 0x305424u: goto label_305424;
        case 0x305428u: goto label_305428;
        case 0x30542cu: goto label_30542c;
        case 0x305430u: goto label_305430;
        case 0x305434u: goto label_305434;
        case 0x305438u: goto label_305438;
        case 0x30543cu: goto label_30543c;
        case 0x305440u: goto label_305440;
        case 0x305444u: goto label_305444;
        case 0x305448u: goto label_305448;
        case 0x30544cu: goto label_30544c;
        case 0x305450u: goto label_305450;
        case 0x305454u: goto label_305454;
        case 0x305458u: goto label_305458;
        case 0x30545cu: goto label_30545c;
        case 0x305460u: goto label_305460;
        case 0x305464u: goto label_305464;
        case 0x305468u: goto label_305468;
        case 0x30546cu: goto label_30546c;
        case 0x305470u: goto label_305470;
        case 0x305474u: goto label_305474;
        case 0x305478u: goto label_305478;
        case 0x30547cu: goto label_30547c;
        case 0x305480u: goto label_305480;
        case 0x305484u: goto label_305484;
        case 0x305488u: goto label_305488;
        case 0x30548cu: goto label_30548c;
        case 0x305490u: goto label_305490;
        case 0x305494u: goto label_305494;
        case 0x305498u: goto label_305498;
        case 0x30549cu: goto label_30549c;
        case 0x3054a0u: goto label_3054a0;
        case 0x3054a4u: goto label_3054a4;
        case 0x3054a8u: goto label_3054a8;
        case 0x3054acu: goto label_3054ac;
        case 0x3054b0u: goto label_3054b0;
        case 0x3054b4u: goto label_3054b4;
        case 0x3054b8u: goto label_3054b8;
        case 0x3054bcu: goto label_3054bc;
        case 0x3054c0u: goto label_3054c0;
        case 0x3054c4u: goto label_3054c4;
        case 0x3054c8u: goto label_3054c8;
        case 0x3054ccu: goto label_3054cc;
        case 0x3054d0u: goto label_3054d0;
        case 0x3054d4u: goto label_3054d4;
        case 0x3054d8u: goto label_3054d8;
        case 0x3054dcu: goto label_3054dc;
        case 0x3054e0u: goto label_3054e0;
        case 0x3054e4u: goto label_3054e4;
        case 0x3054e8u: goto label_3054e8;
        case 0x3054ecu: goto label_3054ec;
        case 0x3054f0u: goto label_3054f0;
        case 0x3054f4u: goto label_3054f4;
        case 0x3054f8u: goto label_3054f8;
        case 0x3054fcu: goto label_3054fc;
        case 0x305500u: goto label_305500;
        case 0x305504u: goto label_305504;
        case 0x305508u: goto label_305508;
        case 0x30550cu: goto label_30550c;
        case 0x305510u: goto label_305510;
        case 0x305514u: goto label_305514;
        case 0x305518u: goto label_305518;
        case 0x30551cu: goto label_30551c;
        case 0x305520u: goto label_305520;
        case 0x305524u: goto label_305524;
        case 0x305528u: goto label_305528;
        case 0x30552cu: goto label_30552c;
        case 0x305530u: goto label_305530;
        case 0x305534u: goto label_305534;
        case 0x305538u: goto label_305538;
        case 0x30553cu: goto label_30553c;
        case 0x305540u: goto label_305540;
        case 0x305544u: goto label_305544;
        case 0x305548u: goto label_305548;
        case 0x30554cu: goto label_30554c;
        case 0x305550u: goto label_305550;
        case 0x305554u: goto label_305554;
        case 0x305558u: goto label_305558;
        case 0x30555cu: goto label_30555c;
        case 0x305560u: goto label_305560;
        case 0x305564u: goto label_305564;
        case 0x305568u: goto label_305568;
        case 0x30556cu: goto label_30556c;
        case 0x305570u: goto label_305570;
        case 0x305574u: goto label_305574;
        case 0x305578u: goto label_305578;
        case 0x30557cu: goto label_30557c;
        case 0x305580u: goto label_305580;
        case 0x305584u: goto label_305584;
        case 0x305588u: goto label_305588;
        case 0x30558cu: goto label_30558c;
        case 0x305590u: goto label_305590;
        case 0x305594u: goto label_305594;
        case 0x305598u: goto label_305598;
        case 0x30559cu: goto label_30559c;
        case 0x3055a0u: goto label_3055a0;
        case 0x3055a4u: goto label_3055a4;
        case 0x3055a8u: goto label_3055a8;
        case 0x3055acu: goto label_3055ac;
        case 0x3055b0u: goto label_3055b0;
        case 0x3055b4u: goto label_3055b4;
        case 0x3055b8u: goto label_3055b8;
        case 0x3055bcu: goto label_3055bc;
        case 0x3055c0u: goto label_3055c0;
        case 0x3055c4u: goto label_3055c4;
        case 0x3055c8u: goto label_3055c8;
        case 0x3055ccu: goto label_3055cc;
        case 0x3055d0u: goto label_3055d0;
        case 0x3055d4u: goto label_3055d4;
        case 0x3055d8u: goto label_3055d8;
        case 0x3055dcu: goto label_3055dc;
        case 0x3055e0u: goto label_3055e0;
        case 0x3055e4u: goto label_3055e4;
        case 0x3055e8u: goto label_3055e8;
        case 0x3055ecu: goto label_3055ec;
        case 0x3055f0u: goto label_3055f0;
        case 0x3055f4u: goto label_3055f4;
        case 0x3055f8u: goto label_3055f8;
        case 0x3055fcu: goto label_3055fc;
        case 0x305600u: goto label_305600;
        case 0x305604u: goto label_305604;
        case 0x305608u: goto label_305608;
        case 0x30560cu: goto label_30560c;
        case 0x305610u: goto label_305610;
        case 0x305614u: goto label_305614;
        case 0x305618u: goto label_305618;
        case 0x30561cu: goto label_30561c;
        case 0x305620u: goto label_305620;
        case 0x305624u: goto label_305624;
        case 0x305628u: goto label_305628;
        case 0x30562cu: goto label_30562c;
        case 0x305630u: goto label_305630;
        case 0x305634u: goto label_305634;
        case 0x305638u: goto label_305638;
        case 0x30563cu: goto label_30563c;
        case 0x305640u: goto label_305640;
        case 0x305644u: goto label_305644;
        case 0x305648u: goto label_305648;
        case 0x30564cu: goto label_30564c;
        case 0x305650u: goto label_305650;
        case 0x305654u: goto label_305654;
        case 0x305658u: goto label_305658;
        case 0x30565cu: goto label_30565c;
        case 0x305660u: goto label_305660;
        case 0x305664u: goto label_305664;
        case 0x305668u: goto label_305668;
        case 0x30566cu: goto label_30566c;
        case 0x305670u: goto label_305670;
        case 0x305674u: goto label_305674;
        case 0x305678u: goto label_305678;
        case 0x30567cu: goto label_30567c;
        case 0x305680u: goto label_305680;
        case 0x305684u: goto label_305684;
        case 0x305688u: goto label_305688;
        case 0x30568cu: goto label_30568c;
        case 0x305690u: goto label_305690;
        case 0x305694u: goto label_305694;
        case 0x305698u: goto label_305698;
        case 0x30569cu: goto label_30569c;
        case 0x3056a0u: goto label_3056a0;
        case 0x3056a4u: goto label_3056a4;
        case 0x3056a8u: goto label_3056a8;
        case 0x3056acu: goto label_3056ac;
        case 0x3056b0u: goto label_3056b0;
        case 0x3056b4u: goto label_3056b4;
        case 0x3056b8u: goto label_3056b8;
        case 0x3056bcu: goto label_3056bc;
        case 0x3056c0u: goto label_3056c0;
        case 0x3056c4u: goto label_3056c4;
        case 0x3056c8u: goto label_3056c8;
        case 0x3056ccu: goto label_3056cc;
        case 0x3056d0u: goto label_3056d0;
        case 0x3056d4u: goto label_3056d4;
        case 0x3056d8u: goto label_3056d8;
        case 0x3056dcu: goto label_3056dc;
        case 0x3056e0u: goto label_3056e0;
        case 0x3056e4u: goto label_3056e4;
        case 0x3056e8u: goto label_3056e8;
        case 0x3056ecu: goto label_3056ec;
        case 0x3056f0u: goto label_3056f0;
        case 0x3056f4u: goto label_3056f4;
        case 0x3056f8u: goto label_3056f8;
        case 0x3056fcu: goto label_3056fc;
        case 0x305700u: goto label_305700;
        case 0x305704u: goto label_305704;
        case 0x305708u: goto label_305708;
        case 0x30570cu: goto label_30570c;
        case 0x305710u: goto label_305710;
        case 0x305714u: goto label_305714;
        case 0x305718u: goto label_305718;
        case 0x30571cu: goto label_30571c;
        case 0x305720u: goto label_305720;
        case 0x305724u: goto label_305724;
        case 0x305728u: goto label_305728;
        case 0x30572cu: goto label_30572c;
        case 0x305730u: goto label_305730;
        case 0x305734u: goto label_305734;
        case 0x305738u: goto label_305738;
        case 0x30573cu: goto label_30573c;
        case 0x305740u: goto label_305740;
        case 0x305744u: goto label_305744;
        case 0x305748u: goto label_305748;
        case 0x30574cu: goto label_30574c;
        case 0x305750u: goto label_305750;
        case 0x305754u: goto label_305754;
        case 0x305758u: goto label_305758;
        case 0x30575cu: goto label_30575c;
        case 0x305760u: goto label_305760;
        case 0x305764u: goto label_305764;
        case 0x305768u: goto label_305768;
        case 0x30576cu: goto label_30576c;
        case 0x305770u: goto label_305770;
        case 0x305774u: goto label_305774;
        case 0x305778u: goto label_305778;
        case 0x30577cu: goto label_30577c;
        case 0x305780u: goto label_305780;
        case 0x305784u: goto label_305784;
        case 0x305788u: goto label_305788;
        case 0x30578cu: goto label_30578c;
        case 0x305790u: goto label_305790;
        case 0x305794u: goto label_305794;
        case 0x305798u: goto label_305798;
        case 0x30579cu: goto label_30579c;
        case 0x3057a0u: goto label_3057a0;
        case 0x3057a4u: goto label_3057a4;
        case 0x3057a8u: goto label_3057a8;
        case 0x3057acu: goto label_3057ac;
        case 0x3057b0u: goto label_3057b0;
        case 0x3057b4u: goto label_3057b4;
        case 0x3057b8u: goto label_3057b8;
        case 0x3057bcu: goto label_3057bc;
        case 0x3057c0u: goto label_3057c0;
        case 0x3057c4u: goto label_3057c4;
        case 0x3057c8u: goto label_3057c8;
        case 0x3057ccu: goto label_3057cc;
        case 0x3057d0u: goto label_3057d0;
        case 0x3057d4u: goto label_3057d4;
        case 0x3057d8u: goto label_3057d8;
        case 0x3057dcu: goto label_3057dc;
        case 0x3057e0u: goto label_3057e0;
        case 0x3057e4u: goto label_3057e4;
        case 0x3057e8u: goto label_3057e8;
        case 0x3057ecu: goto label_3057ec;
        case 0x3057f0u: goto label_3057f0;
        case 0x3057f4u: goto label_3057f4;
        case 0x3057f8u: goto label_3057f8;
        case 0x3057fcu: goto label_3057fc;
        case 0x305800u: goto label_305800;
        case 0x305804u: goto label_305804;
        case 0x305808u: goto label_305808;
        case 0x30580cu: goto label_30580c;
        case 0x305810u: goto label_305810;
        case 0x305814u: goto label_305814;
        case 0x305818u: goto label_305818;
        case 0x30581cu: goto label_30581c;
        case 0x305820u: goto label_305820;
        case 0x305824u: goto label_305824;
        case 0x305828u: goto label_305828;
        case 0x30582cu: goto label_30582c;
        case 0x305830u: goto label_305830;
        case 0x305834u: goto label_305834;
        case 0x305838u: goto label_305838;
        case 0x30583cu: goto label_30583c;
        case 0x305840u: goto label_305840;
        case 0x305844u: goto label_305844;
        case 0x305848u: goto label_305848;
        case 0x30584cu: goto label_30584c;
        case 0x305850u: goto label_305850;
        case 0x305854u: goto label_305854;
        case 0x305858u: goto label_305858;
        case 0x30585cu: goto label_30585c;
        case 0x305860u: goto label_305860;
        case 0x305864u: goto label_305864;
        case 0x305868u: goto label_305868;
        case 0x30586cu: goto label_30586c;
        case 0x305870u: goto label_305870;
        case 0x305874u: goto label_305874;
        case 0x305878u: goto label_305878;
        case 0x30587cu: goto label_30587c;
        case 0x305880u: goto label_305880;
        case 0x305884u: goto label_305884;
        case 0x305888u: goto label_305888;
        case 0x30588cu: goto label_30588c;
        case 0x305890u: goto label_305890;
        case 0x305894u: goto label_305894;
        case 0x305898u: goto label_305898;
        case 0x30589cu: goto label_30589c;
        case 0x3058a0u: goto label_3058a0;
        case 0x3058a4u: goto label_3058a4;
        case 0x3058a8u: goto label_3058a8;
        case 0x3058acu: goto label_3058ac;
        case 0x3058b0u: goto label_3058b0;
        case 0x3058b4u: goto label_3058b4;
        case 0x3058b8u: goto label_3058b8;
        case 0x3058bcu: goto label_3058bc;
        case 0x3058c0u: goto label_3058c0;
        case 0x3058c4u: goto label_3058c4;
        case 0x3058c8u: goto label_3058c8;
        case 0x3058ccu: goto label_3058cc;
        case 0x3058d0u: goto label_3058d0;
        case 0x3058d4u: goto label_3058d4;
        case 0x3058d8u: goto label_3058d8;
        case 0x3058dcu: goto label_3058dc;
        case 0x3058e0u: goto label_3058e0;
        case 0x3058e4u: goto label_3058e4;
        case 0x3058e8u: goto label_3058e8;
        case 0x3058ecu: goto label_3058ec;
        case 0x3058f0u: goto label_3058f0;
        case 0x3058f4u: goto label_3058f4;
        case 0x3058f8u: goto label_3058f8;
        case 0x3058fcu: goto label_3058fc;
        case 0x305900u: goto label_305900;
        case 0x305904u: goto label_305904;
        case 0x305908u: goto label_305908;
        case 0x30590cu: goto label_30590c;
        case 0x305910u: goto label_305910;
        case 0x305914u: goto label_305914;
        case 0x305918u: goto label_305918;
        case 0x30591cu: goto label_30591c;
        case 0x305920u: goto label_305920;
        case 0x305924u: goto label_305924;
        case 0x305928u: goto label_305928;
        case 0x30592cu: goto label_30592c;
        case 0x305930u: goto label_305930;
        case 0x305934u: goto label_305934;
        case 0x305938u: goto label_305938;
        case 0x30593cu: goto label_30593c;
        case 0x305940u: goto label_305940;
        case 0x305944u: goto label_305944;
        case 0x305948u: goto label_305948;
        case 0x30594cu: goto label_30594c;
        case 0x305950u: goto label_305950;
        case 0x305954u: goto label_305954;
        case 0x305958u: goto label_305958;
        case 0x30595cu: goto label_30595c;
        case 0x305960u: goto label_305960;
        case 0x305964u: goto label_305964;
        case 0x305968u: goto label_305968;
        case 0x30596cu: goto label_30596c;
        case 0x305970u: goto label_305970;
        case 0x305974u: goto label_305974;
        case 0x305978u: goto label_305978;
        case 0x30597cu: goto label_30597c;
        case 0x305980u: goto label_305980;
        case 0x305984u: goto label_305984;
        case 0x305988u: goto label_305988;
        case 0x30598cu: goto label_30598c;
        case 0x305990u: goto label_305990;
        case 0x305994u: goto label_305994;
        case 0x305998u: goto label_305998;
        case 0x30599cu: goto label_30599c;
        case 0x3059a0u: goto label_3059a0;
        case 0x3059a4u: goto label_3059a4;
        case 0x3059a8u: goto label_3059a8;
        case 0x3059acu: goto label_3059ac;
        case 0x3059b0u: goto label_3059b0;
        case 0x3059b4u: goto label_3059b4;
        case 0x3059b8u: goto label_3059b8;
        case 0x3059bcu: goto label_3059bc;
        case 0x3059c0u: goto label_3059c0;
        case 0x3059c4u: goto label_3059c4;
        case 0x3059c8u: goto label_3059c8;
        case 0x3059ccu: goto label_3059cc;
        case 0x3059d0u: goto label_3059d0;
        case 0x3059d4u: goto label_3059d4;
        case 0x3059d8u: goto label_3059d8;
        case 0x3059dcu: goto label_3059dc;
        case 0x3059e0u: goto label_3059e0;
        case 0x3059e4u: goto label_3059e4;
        case 0x3059e8u: goto label_3059e8;
        case 0x3059ecu: goto label_3059ec;
        case 0x3059f0u: goto label_3059f0;
        case 0x3059f4u: goto label_3059f4;
        case 0x3059f8u: goto label_3059f8;
        case 0x3059fcu: goto label_3059fc;
        case 0x305a00u: goto label_305a00;
        case 0x305a04u: goto label_305a04;
        case 0x305a08u: goto label_305a08;
        case 0x305a0cu: goto label_305a0c;
        case 0x305a10u: goto label_305a10;
        case 0x305a14u: goto label_305a14;
        case 0x305a18u: goto label_305a18;
        case 0x305a1cu: goto label_305a1c;
        case 0x305a20u: goto label_305a20;
        case 0x305a24u: goto label_305a24;
        case 0x305a28u: goto label_305a28;
        case 0x305a2cu: goto label_305a2c;
        case 0x305a30u: goto label_305a30;
        case 0x305a34u: goto label_305a34;
        case 0x305a38u: goto label_305a38;
        case 0x305a3cu: goto label_305a3c;
        case 0x305a40u: goto label_305a40;
        case 0x305a44u: goto label_305a44;
        case 0x305a48u: goto label_305a48;
        case 0x305a4cu: goto label_305a4c;
        case 0x305a50u: goto label_305a50;
        case 0x305a54u: goto label_305a54;
        case 0x305a58u: goto label_305a58;
        case 0x305a5cu: goto label_305a5c;
        case 0x305a60u: goto label_305a60;
        case 0x305a64u: goto label_305a64;
        case 0x305a68u: goto label_305a68;
        case 0x305a6cu: goto label_305a6c;
        case 0x305a70u: goto label_305a70;
        case 0x305a74u: goto label_305a74;
        case 0x305a78u: goto label_305a78;
        case 0x305a7cu: goto label_305a7c;
        case 0x305a80u: goto label_305a80;
        case 0x305a84u: goto label_305a84;
        case 0x305a88u: goto label_305a88;
        case 0x305a8cu: goto label_305a8c;
        case 0x305a90u: goto label_305a90;
        case 0x305a94u: goto label_305a94;
        case 0x305a98u: goto label_305a98;
        case 0x305a9cu: goto label_305a9c;
        case 0x305aa0u: goto label_305aa0;
        case 0x305aa4u: goto label_305aa4;
        case 0x305aa8u: goto label_305aa8;
        case 0x305aacu: goto label_305aac;
        case 0x305ab0u: goto label_305ab0;
        case 0x305ab4u: goto label_305ab4;
        case 0x305ab8u: goto label_305ab8;
        case 0x305abcu: goto label_305abc;
        case 0x305ac0u: goto label_305ac0;
        case 0x305ac4u: goto label_305ac4;
        case 0x305ac8u: goto label_305ac8;
        case 0x305accu: goto label_305acc;
        case 0x305ad0u: goto label_305ad0;
        case 0x305ad4u: goto label_305ad4;
        case 0x305ad8u: goto label_305ad8;
        case 0x305adcu: goto label_305adc;
        case 0x305ae0u: goto label_305ae0;
        case 0x305ae4u: goto label_305ae4;
        case 0x305ae8u: goto label_305ae8;
        case 0x305aecu: goto label_305aec;
        case 0x305af0u: goto label_305af0;
        case 0x305af4u: goto label_305af4;
        case 0x305af8u: goto label_305af8;
        case 0x305afcu: goto label_305afc;
        case 0x305b00u: goto label_305b00;
        case 0x305b04u: goto label_305b04;
        case 0x305b08u: goto label_305b08;
        case 0x305b0cu: goto label_305b0c;
        case 0x305b10u: goto label_305b10;
        case 0x305b14u: goto label_305b14;
        case 0x305b18u: goto label_305b18;
        case 0x305b1cu: goto label_305b1c;
        case 0x305b20u: goto label_305b20;
        case 0x305b24u: goto label_305b24;
        case 0x305b28u: goto label_305b28;
        case 0x305b2cu: goto label_305b2c;
        case 0x305b30u: goto label_305b30;
        case 0x305b34u: goto label_305b34;
        case 0x305b38u: goto label_305b38;
        case 0x305b3cu: goto label_305b3c;
        case 0x305b40u: goto label_305b40;
        case 0x305b44u: goto label_305b44;
        case 0x305b48u: goto label_305b48;
        case 0x305b4cu: goto label_305b4c;
        case 0x305b50u: goto label_305b50;
        case 0x305b54u: goto label_305b54;
        case 0x305b58u: goto label_305b58;
        case 0x305b5cu: goto label_305b5c;
        case 0x305b60u: goto label_305b60;
        case 0x305b64u: goto label_305b64;
        case 0x305b68u: goto label_305b68;
        case 0x305b6cu: goto label_305b6c;
        case 0x305b70u: goto label_305b70;
        case 0x305b74u: goto label_305b74;
        case 0x305b78u: goto label_305b78;
        case 0x305b7cu: goto label_305b7c;
        case 0x305b80u: goto label_305b80;
        case 0x305b84u: goto label_305b84;
        case 0x305b88u: goto label_305b88;
        case 0x305b8cu: goto label_305b8c;
        case 0x305b90u: goto label_305b90;
        case 0x305b94u: goto label_305b94;
        case 0x305b98u: goto label_305b98;
        case 0x305b9cu: goto label_305b9c;
        case 0x305ba0u: goto label_305ba0;
        case 0x305ba4u: goto label_305ba4;
        case 0x305ba8u: goto label_305ba8;
        case 0x305bacu: goto label_305bac;
        case 0x305bb0u: goto label_305bb0;
        case 0x305bb4u: goto label_305bb4;
        case 0x305bb8u: goto label_305bb8;
        case 0x305bbcu: goto label_305bbc;
        case 0x305bc0u: goto label_305bc0;
        case 0x305bc4u: goto label_305bc4;
        case 0x305bc8u: goto label_305bc8;
        case 0x305bccu: goto label_305bcc;
        case 0x305bd0u: goto label_305bd0;
        case 0x305bd4u: goto label_305bd4;
        case 0x305bd8u: goto label_305bd8;
        case 0x305bdcu: goto label_305bdc;
        case 0x305be0u: goto label_305be0;
        case 0x305be4u: goto label_305be4;
        case 0x305be8u: goto label_305be8;
        case 0x305becu: goto label_305bec;
        case 0x305bf0u: goto label_305bf0;
        case 0x305bf4u: goto label_305bf4;
        case 0x305bf8u: goto label_305bf8;
        case 0x305bfcu: goto label_305bfc;
        case 0x305c00u: goto label_305c00;
        case 0x305c04u: goto label_305c04;
        case 0x305c08u: goto label_305c08;
        case 0x305c0cu: goto label_305c0c;
        case 0x305c10u: goto label_305c10;
        case 0x305c14u: goto label_305c14;
        case 0x305c18u: goto label_305c18;
        case 0x305c1cu: goto label_305c1c;
        case 0x305c20u: goto label_305c20;
        case 0x305c24u: goto label_305c24;
        case 0x305c28u: goto label_305c28;
        case 0x305c2cu: goto label_305c2c;
        case 0x305c30u: goto label_305c30;
        case 0x305c34u: goto label_305c34;
        case 0x305c38u: goto label_305c38;
        case 0x305c3cu: goto label_305c3c;
        case 0x305c40u: goto label_305c40;
        case 0x305c44u: goto label_305c44;
        case 0x305c48u: goto label_305c48;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c50u: goto label_305c50;
        case 0x305c54u: goto label_305c54;
        case 0x305c58u: goto label_305c58;
        case 0x305c5cu: goto label_305c5c;
        case 0x305c60u: goto label_305c60;
        case 0x305c64u: goto label_305c64;
        case 0x305c68u: goto label_305c68;
        case 0x305c6cu: goto label_305c6c;
        case 0x305c70u: goto label_305c70;
        case 0x305c74u: goto label_305c74;
        case 0x305c78u: goto label_305c78;
        case 0x305c7cu: goto label_305c7c;
        case 0x305c80u: goto label_305c80;
        case 0x305c84u: goto label_305c84;
        case 0x305c88u: goto label_305c88;
        case 0x305c8cu: goto label_305c8c;
        case 0x305c90u: goto label_305c90;
        case 0x305c94u: goto label_305c94;
        case 0x305c98u: goto label_305c98;
        case 0x305c9cu: goto label_305c9c;
        case 0x305ca0u: goto label_305ca0;
        case 0x305ca4u: goto label_305ca4;
        case 0x305ca8u: goto label_305ca8;
        case 0x305cacu: goto label_305cac;
        case 0x305cb0u: goto label_305cb0;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cb8u: goto label_305cb8;
        case 0x305cbcu: goto label_305cbc;
        case 0x305cc0u: goto label_305cc0;
        case 0x305cc4u: goto label_305cc4;
        case 0x305cc8u: goto label_305cc8;
        case 0x305cccu: goto label_305ccc;
        case 0x305cd0u: goto label_305cd0;
        case 0x305cd4u: goto label_305cd4;
        case 0x305cd8u: goto label_305cd8;
        case 0x305cdcu: goto label_305cdc;
        case 0x305ce0u: goto label_305ce0;
        case 0x305ce4u: goto label_305ce4;
        case 0x305ce8u: goto label_305ce8;
        case 0x305cecu: goto label_305cec;
        case 0x305cf0u: goto label_305cf0;
        case 0x305cf4u: goto label_305cf4;
        case 0x305cf8u: goto label_305cf8;
        case 0x305cfcu: goto label_305cfc;
        case 0x305d00u: goto label_305d00;
        case 0x305d04u: goto label_305d04;
        case 0x305d08u: goto label_305d08;
        case 0x305d0cu: goto label_305d0c;
        case 0x305d10u: goto label_305d10;
        case 0x305d14u: goto label_305d14;
        case 0x305d18u: goto label_305d18;
        case 0x305d1cu: goto label_305d1c;
        case 0x305d20u: goto label_305d20;
        case 0x305d24u: goto label_305d24;
        case 0x305d28u: goto label_305d28;
        case 0x305d2cu: goto label_305d2c;
        case 0x305d30u: goto label_305d30;
        case 0x305d34u: goto label_305d34;
        case 0x305d38u: goto label_305d38;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d40u: goto label_305d40;
        case 0x305d44u: goto label_305d44;
        case 0x305d48u: goto label_305d48;
        case 0x305d4cu: goto label_305d4c;
        case 0x305d50u: goto label_305d50;
        case 0x305d54u: goto label_305d54;
        case 0x305d58u: goto label_305d58;
        case 0x305d5cu: goto label_305d5c;
        case 0x305d60u: goto label_305d60;
        case 0x305d64u: goto label_305d64;
        case 0x305d68u: goto label_305d68;
        case 0x305d6cu: goto label_305d6c;
        case 0x305d70u: goto label_305d70;
        case 0x305d74u: goto label_305d74;
        case 0x305d78u: goto label_305d78;
        case 0x305d7cu: goto label_305d7c;
        case 0x305d80u: goto label_305d80;
        case 0x305d84u: goto label_305d84;
        case 0x305d88u: goto label_305d88;
        case 0x305d8cu: goto label_305d8c;
        case 0x305d90u: goto label_305d90;
        case 0x305d94u: goto label_305d94;
        case 0x305d98u: goto label_305d98;
        case 0x305d9cu: goto label_305d9c;
        case 0x305da0u: goto label_305da0;
        case 0x305da4u: goto label_305da4;
        case 0x305da8u: goto label_305da8;
        case 0x305dacu: goto label_305dac;
        case 0x305db0u: goto label_305db0;
        case 0x305db4u: goto label_305db4;
        case 0x305db8u: goto label_305db8;
        case 0x305dbcu: goto label_305dbc;
        case 0x305dc0u: goto label_305dc0;
        case 0x305dc4u: goto label_305dc4;
        case 0x305dc8u: goto label_305dc8;
        case 0x305dccu: goto label_305dcc;
        case 0x305dd0u: goto label_305dd0;
        case 0x305dd4u: goto label_305dd4;
        case 0x305dd8u: goto label_305dd8;
        case 0x305ddcu: goto label_305ddc;
        case 0x305de0u: goto label_305de0;
        case 0x305de4u: goto label_305de4;
        case 0x305de8u: goto label_305de8;
        case 0x305decu: goto label_305dec;
        case 0x305df0u: goto label_305df0;
        case 0x305df4u: goto label_305df4;
        case 0x305df8u: goto label_305df8;
        case 0x305dfcu: goto label_305dfc;
        case 0x305e00u: goto label_305e00;
        case 0x305e04u: goto label_305e04;
        case 0x305e08u: goto label_305e08;
        case 0x305e0cu: goto label_305e0c;
        case 0x305e10u: goto label_305e10;
        case 0x305e14u: goto label_305e14;
        case 0x305e18u: goto label_305e18;
        case 0x305e1cu: goto label_305e1c;
        case 0x305e20u: goto label_305e20;
        case 0x305e24u: goto label_305e24;
        case 0x305e28u: goto label_305e28;
        case 0x305e2cu: goto label_305e2c;
        case 0x305e30u: goto label_305e30;
        case 0x305e34u: goto label_305e34;
        case 0x305e38u: goto label_305e38;
        case 0x305e3cu: goto label_305e3c;
        case 0x305e40u: goto label_305e40;
        case 0x305e44u: goto label_305e44;
        case 0x305e48u: goto label_305e48;
        case 0x305e4cu: goto label_305e4c;
        case 0x305e50u: goto label_305e50;
        case 0x305e54u: goto label_305e54;
        case 0x305e58u: goto label_305e58;
        case 0x305e5cu: goto label_305e5c;
        case 0x305e60u: goto label_305e60;
        case 0x305e64u: goto label_305e64;
        case 0x305e68u: goto label_305e68;
        case 0x305e6cu: goto label_305e6c;
        case 0x305e70u: goto label_305e70;
        case 0x305e74u: goto label_305e74;
        case 0x305e78u: goto label_305e78;
        case 0x305e7cu: goto label_305e7c;
        case 0x305e80u: goto label_305e80;
        case 0x305e84u: goto label_305e84;
        case 0x305e88u: goto label_305e88;
        case 0x305e8cu: goto label_305e8c;
        case 0x305e90u: goto label_305e90;
        case 0x305e94u: goto label_305e94;
        case 0x305e98u: goto label_305e98;
        case 0x305e9cu: goto label_305e9c;
        case 0x305ea0u: goto label_305ea0;
        case 0x305ea4u: goto label_305ea4;
        case 0x305ea8u: goto label_305ea8;
        case 0x305eacu: goto label_305eac;
        case 0x305eb0u: goto label_305eb0;
        case 0x305eb4u: goto label_305eb4;
        case 0x305eb8u: goto label_305eb8;
        case 0x305ebcu: goto label_305ebc;
        case 0x305ec0u: goto label_305ec0;
        case 0x305ec4u: goto label_305ec4;
        case 0x305ec8u: goto label_305ec8;
        case 0x305eccu: goto label_305ecc;
        case 0x305ed0u: goto label_305ed0;
        case 0x305ed4u: goto label_305ed4;
        case 0x305ed8u: goto label_305ed8;
        case 0x305edcu: goto label_305edc;
        case 0x305ee0u: goto label_305ee0;
        case 0x305ee4u: goto label_305ee4;
        case 0x305ee8u: goto label_305ee8;
        case 0x305eecu: goto label_305eec;
        case 0x305ef0u: goto label_305ef0;
        case 0x305ef4u: goto label_305ef4;
        case 0x305ef8u: goto label_305ef8;
        case 0x305efcu: goto label_305efc;
        case 0x305f00u: goto label_305f00;
        case 0x305f04u: goto label_305f04;
        case 0x305f08u: goto label_305f08;
        case 0x305f0cu: goto label_305f0c;
        case 0x305f10u: goto label_305f10;
        case 0x305f14u: goto label_305f14;
        case 0x305f18u: goto label_305f18;
        case 0x305f1cu: goto label_305f1c;
        case 0x305f20u: goto label_305f20;
        case 0x305f24u: goto label_305f24;
        case 0x305f28u: goto label_305f28;
        case 0x305f2cu: goto label_305f2c;
        case 0x305f30u: goto label_305f30;
        case 0x305f34u: goto label_305f34;
        case 0x305f38u: goto label_305f38;
        case 0x305f3cu: goto label_305f3c;
        case 0x305f40u: goto label_305f40;
        case 0x305f44u: goto label_305f44;
        case 0x305f48u: goto label_305f48;
        case 0x305f4cu: goto label_305f4c;
        case 0x305f50u: goto label_305f50;
        case 0x305f54u: goto label_305f54;
        case 0x305f58u: goto label_305f58;
        case 0x305f5cu: goto label_305f5c;
        case 0x305f60u: goto label_305f60;
        case 0x305f64u: goto label_305f64;
        case 0x305f68u: goto label_305f68;
        case 0x305f6cu: goto label_305f6c;
        case 0x305f70u: goto label_305f70;
        case 0x305f74u: goto label_305f74;
        case 0x305f78u: goto label_305f78;
        case 0x305f7cu: goto label_305f7c;
        case 0x305f80u: goto label_305f80;
        case 0x305f84u: goto label_305f84;
        case 0x305f88u: goto label_305f88;
        case 0x305f8cu: goto label_305f8c;
        case 0x305f90u: goto label_305f90;
        case 0x305f94u: goto label_305f94;
        case 0x305f98u: goto label_305f98;
        case 0x305f9cu: goto label_305f9c;
        case 0x305fa0u: goto label_305fa0;
        case 0x305fa4u: goto label_305fa4;
        case 0x305fa8u: goto label_305fa8;
        case 0x305facu: goto label_305fac;
        case 0x305fb0u: goto label_305fb0;
        case 0x305fb4u: goto label_305fb4;
        case 0x305fb8u: goto label_305fb8;
        case 0x305fbcu: goto label_305fbc;
        case 0x305fc0u: goto label_305fc0;
        case 0x305fc4u: goto label_305fc4;
        case 0x305fc8u: goto label_305fc8;
        case 0x305fccu: goto label_305fcc;
        case 0x305fd0u: goto label_305fd0;
        case 0x305fd4u: goto label_305fd4;
        case 0x305fd8u: goto label_305fd8;
        case 0x305fdcu: goto label_305fdc;
        case 0x305fe0u: goto label_305fe0;
        case 0x305fe4u: goto label_305fe4;
        case 0x305fe8u: goto label_305fe8;
        case 0x305fecu: goto label_305fec;
        case 0x305ff0u: goto label_305ff0;
        case 0x305ff4u: goto label_305ff4;
        case 0x305ff8u: goto label_305ff8;
        case 0x305ffcu: goto label_305ffc;
        case 0x306000u: goto label_306000;
        case 0x306004u: goto label_306004;
        case 0x306008u: goto label_306008;
        case 0x30600cu: goto label_30600c;
        case 0x306010u: goto label_306010;
        case 0x306014u: goto label_306014;
        case 0x306018u: goto label_306018;
        case 0x30601cu: goto label_30601c;
        case 0x306020u: goto label_306020;
        case 0x306024u: goto label_306024;
        case 0x306028u: goto label_306028;
        case 0x30602cu: goto label_30602c;
        case 0x306030u: goto label_306030;
        case 0x306034u: goto label_306034;
        case 0x306038u: goto label_306038;
        case 0x30603cu: goto label_30603c;
        default: break;
    }

    ctx->pc = 0x3052f0u;

label_3052f0:
    // 0x3052f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3052f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3052f4:
    // 0x3052f4: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3052f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_3052f8:
    // 0x3052f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3052f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3052fc:
    // 0x3052fc: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x3052fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_305300:
    // 0x305300: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x305300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_305304:
    // 0x305304: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x305304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_305308:
    // 0x305308: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x305308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_30530c:
    // 0x30530c: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x30530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_305310:
    // 0x305310: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x305310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_305314:
    // 0x305314: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x305314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_305318:
    // 0x305318: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x305318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_30531c:
    // 0x30531c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_305320:
    // 0x305320: 0xc0a3eba  jal         func_28FAE8
label_305324:
    if (ctx->pc == 0x305324u) {
        ctx->pc = 0x305324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305320u;
        // 0x305324: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x305328u;
        goto label_305328;
    }
    ctx->pc = 0x305320u;
    SET_GPR_U32(ctx, 31, 0x305328u);
    ctx->pc = 0x305324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305320u;
    // 0x305324: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE8u, 0x305320u, 0x305328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305328u;
label_305328:
    // 0x305328: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x305328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_30532c:
    // 0x30532c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_305330:
    if (ctx->pc == 0x305330u) {
        ctx->pc = 0x305330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30532Cu;
        // 0x305330: 0x8e370000  lw          $s7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305334u;
        goto label_305334;
    }
    ctx->pc = 0x30532Cu;
    {
        const bool branch_taken_0x30532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30532Cu;
        // 0x305330: 0x8e370000  lw          $s7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30532c) {
            ctx->pc = 0x305364u;
            goto label_305364;
        }
    }
    ctx->pc = 0x305334u;
label_305334:
    // 0x305334: 0xc0a40d2  jal         func_290348
label_305338:
    if (ctx->pc == 0x305338u) {
        ctx->pc = 0x305338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305334u;
        // 0x305338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30533Cu;
        goto label_30533c;
    }
    ctx->pc = 0x305334u;
    SET_GPR_U32(ctx, 31, 0x30533Cu);
    ctx->pc = 0x305338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305334u;
    // 0x305338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x305334u, 0x30533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30533Cu;
label_30533c:
    // 0x30533c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_305340:
    if (ctx->pc == 0x305340u) {
        ctx->pc = 0x305340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30533Cu;
        // 0x305340: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305344u;
        goto label_305344;
    }
    ctx->pc = 0x30533Cu;
    {
        const bool branch_taken_0x30533c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30533Cu;
        // 0x305340: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30533c) {
            ctx->pc = 0x305368u;
            goto label_305368;
        }
    }
    ctx->pc = 0x305344u;
label_305344:
    // 0x305344: 0xc137832  jal         func_4DE0C8
label_305348:
    if (ctx->pc == 0x305348u) {
        ctx->pc = 0x305348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305344u;
        // 0x305348: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30534Cu;
        goto label_30534c;
    }
    ctx->pc = 0x305344u;
    SET_GPR_U32(ctx, 31, 0x30534Cu);
    ctx->pc = 0x305348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305344u;
    // 0x305348: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x305344u, 0x30534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30534Cu;
label_30534c:
    // 0x30534c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_305350:
    if (ctx->pc == 0x305350u) {
        ctx->pc = 0x305350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30534Cu;
        // 0x305350: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305354u;
        goto label_305354;
    }
    ctx->pc = 0x30534Cu;
    {
        const bool branch_taken_0x30534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30534Cu;
        // 0x305350: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30534c) {
            ctx->pc = 0x305368u;
            goto label_305368;
        }
    }
    ctx->pc = 0x305354u;
label_305354:
    // 0x305354: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x305354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_305358:
    // 0x305358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30535c:
    // 0x30535c: 0xc0a3464  jal         func_28D190
label_305360:
    if (ctx->pc == 0x305360u) {
        ctx->pc = 0x305360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30535Cu;
        // 0x305360: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305364u;
        goto label_305364;
    }
    ctx->pc = 0x30535Cu;
    SET_GPR_U32(ctx, 31, 0x305364u);
    ctx->pc = 0x305360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30535Cu;
    // 0x305360: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x30535Cu, 0x305364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305364u;
label_305364:
    // 0x305364: 0x26240124  addiu       $a0, $s1, 0x124
    ctx->pc = 0x305364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
label_305368:
    // 0x305368: 0x3c1e0071  lui         $fp, 0x71
    ctx->pc = 0x305368u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
label_30536c:
    // 0x30536c: 0xc0e409a  jal         func_390268
label_305370:
    if (ctx->pc == 0x305370u) {
        ctx->pc = 0x305370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30536Cu;
        // 0x305370: 0xafa40094  sw          $a0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305374u;
        goto label_305374;
    }
    ctx->pc = 0x30536Cu;
    SET_GPR_U32(ctx, 31, 0x305374u);
    ctx->pc = 0x305370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30536Cu;
    // 0x305370: 0xafa40094  sw          $a0, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30536Cu, 0x305374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305374u;
label_305374:
    // 0x305374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305378:
    // 0x305378: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_30537c:
    if (ctx->pc == 0x30537Cu) {
        ctx->pc = 0x30537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305378u;
        // 0x30537c: 0x27c34b00  addiu       $v1, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305380u;
        goto label_305380;
    }
    ctx->pc = 0x305378u;
    {
        const bool branch_taken_0x305378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305378u;
        // 0x30537c: 0x27c34b00  addiu       $v1, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305378) {
            ctx->pc = 0x305440u;
            goto label_305440;
        }
    }
    ctx->pc = 0x305380u;
label_305380:
    // 0x305380: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305384:
    // 0x305384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_305388:
    // 0x305388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x305388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30538c:
    // 0x30538c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x30538cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_305390:
    // 0x305390: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x305390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_305394:
    // 0x305394: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x305394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_305398:
    // 0x305398: 0xc0cd8ec  jal         func_3363B0
label_30539c:
    if (ctx->pc == 0x30539Cu) {
        ctx->pc = 0x30539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305398u;
        // 0x30539c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3053A0u;
        goto label_3053a0;
    }
    ctx->pc = 0x305398u;
    SET_GPR_U32(ctx, 31, 0x3053A0u);
    ctx->pc = 0x30539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305398u;
    // 0x30539c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x305398u, 0x3053A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053A0u;
label_3053a0:
    // 0x3053a0: 0x8e1201a8  lw          $s2, 0x1A8($s0)
    ctx->pc = 0x3053a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3053a4:
    // 0x3053a4: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_3053a8:
    if (ctx->pc == 0x3053A8u) {
        ctx->pc = 0x3053ACu;
        goto label_3053ac;
    }
    ctx->pc = 0x3053A4u;
    {
        const bool branch_taken_0x3053a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053a4) {
            ctx->pc = 0x305400u;
            goto label_305400;
        }
    }
    ctx->pc = 0x3053ACu;
label_3053ac:
    // 0x3053ac: 0xc089018  jal         func_224060
label_3053b0:
    if (ctx->pc == 0x3053B0u) {
        ctx->pc = 0x3053B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053ACu;
        // 0x3053b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3053B4u;
        goto label_3053b4;
    }
    ctx->pc = 0x3053ACu;
    SET_GPR_U32(ctx, 31, 0x3053B4u);
    ctx->pc = 0x3053B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053ACu;
    // 0x3053b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x3053ACu, 0x3053B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053B4u;
label_3053b4:
    // 0x3053b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3053b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3053b8:
    // 0x3053b8: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_3053bc:
    if (ctx->pc == 0x3053BCu) {
        ctx->pc = 0x3053BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053B8u;
        // 0x3053bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3053C0u;
        goto label_3053c0;
    }
    ctx->pc = 0x3053B8u;
    {
        const bool branch_taken_0x3053b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3053b8) {
            ctx->pc = 0x3053BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3053B8u;
            // 0x3053bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305400u;
            goto label_305400;
        }
    }
    ctx->pc = 0x3053C0u;
label_3053c0:
    // 0x3053c0: 0xc0e87c0  jal         func_3A1F00
label_3053c4:
    if (ctx->pc == 0x3053C4u) {
        ctx->pc = 0x3053C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053C0u;
        // 0x3053c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3053C8u;
        goto label_3053c8;
    }
    ctx->pc = 0x3053C0u;
    SET_GPR_U32(ctx, 31, 0x3053C8u);
    ctx->pc = 0x3053C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053C0u;
    // 0x3053c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3053C0u, 0x3053C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053C8u;
label_3053c8:
    // 0x3053c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3053c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3053cc:
    // 0x3053cc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3053ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3053d0:
    // 0x3053d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3053d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3053d4:
    // 0x3053d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3053d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3053d8:
    // 0x3053d8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x3053d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3053dc:
    // 0x3053dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3053dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3053e0:
    // 0x3053e0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3053e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3053e4:
    // 0x3053e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3053e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3053e8:
    // 0x3053e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3053e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3053ec:
    // 0x3053ec: 0x0  nop
    ctx->pc = 0x3053ecu;
    // NOP
label_3053f0:
    // 0x3053f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3053f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3053f4:
    // 0x3053f4: 0x0  nop
    ctx->pc = 0x3053f4u;
    // NOP
label_3053f8:
    // 0x3053f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3053fc:
    if (ctx->pc == 0x3053FCu) {
        ctx->pc = 0x3053FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053F8u;
        // 0x3053fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305400u;
        goto label_305400;
    }
    ctx->pc = 0x3053F8u;
    {
        const bool branch_taken_0x3053f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3053f8) {
            ctx->pc = 0x3053FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3053F8u;
            // 0x3053fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305400u;
            goto label_305400;
        }
    }
    ctx->pc = 0x305400u;
label_305400:
    // 0x305400: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_305404:
    if (ctx->pc == 0x305404u) {
        ctx->pc = 0x305404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305400u;
        // 0x305404: 0x96220148  lhu         $v0, 0x148($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305408u;
        goto label_305408;
    }
    ctx->pc = 0x305400u;
    {
        const bool branch_taken_0x305400 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x305404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305400u;
        // 0x305404: 0x96220148  lhu         $v0, 0x148($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305400) {
            ctx->pc = 0x305428u;
            goto label_305428;
        }
    }
    ctx->pc = 0x305408u;
label_305408:
    // 0x305408: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30540c:
    // 0x30540c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x30540cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_305410:
    // 0x305410: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x305410u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_305414:
    // 0x305414: 0x28630025  slti        $v1, $v1, 0x25
    ctx->pc = 0x305414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
label_305418:
    // 0x305418: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_30541c:
    if (ctx->pc == 0x30541Cu) {
        ctx->pc = 0x30541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305418u;
        // 0x30541c: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305420u;
        goto label_305420;
    }
    ctx->pc = 0x305418u;
    {
        const bool branch_taken_0x305418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305418u;
        // 0x30541c: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305418) {
            ctx->pc = 0x30543Cu;
            goto label_30543c;
        }
    }
    ctx->pc = 0x305420u;
label_305420:
    // 0x305420: 0x10000006  b           . + 4 + (0x6 << 2)
label_305424:
    if (ctx->pc == 0x305424u) {
        ctx->pc = 0x305424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305420u;
        // 0x305424: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305428u;
        goto label_305428;
    }
    ctx->pc = 0x305420u;
    {
        const bool branch_taken_0x305420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305420u;
        // 0x305424: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305420) {
            ctx->pc = 0x30543Cu;
            goto label_30543c;
        }
    }
    ctx->pc = 0x305428u;
label_305428:
    // 0x305428: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x305428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_30542c:
    // 0x30542c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x30542cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_305430:
    // 0x305430: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_305434:
    if (ctx->pc == 0x305434u) {
        ctx->pc = 0x305434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305430u;
        // 0x305434: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305438u;
        goto label_305438;
    }
    ctx->pc = 0x305430u;
    {
        const bool branch_taken_0x305430 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x305434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305430u;
        // 0x305434: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305430) {
            ctx->pc = 0x30543Cu;
            goto label_30543c;
        }
    }
    ctx->pc = 0x305438u;
label_305438:
    // 0x305438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x305438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30543c:
    // 0x30543c: 0xa6220148  sh          $v0, 0x148($s1)
    ctx->pc = 0x30543cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
label_305440:
    // 0x305440: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_305444:
    // 0x305444: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x305444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_305448:
    // 0x305448: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_30544c:
    if (ctx->pc == 0x30544Cu) {
        ctx->pc = 0x30544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305448u;
        // 0x30544c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305450u;
        goto label_305450;
    }
    ctx->pc = 0x305448u;
    {
        const bool branch_taken_0x305448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305448) {
            ctx->pc = 0x30544Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305448u;
            // 0x30544c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305450u;
            goto label_305450;
        }
    }
    ctx->pc = 0x305450u;
label_305450:
    // 0x305450: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x305450u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_305454:
    // 0x305454: 0x1810  mfhi        $v1
    ctx->pc = 0x305454u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_305458:
    // 0x305458: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
label_30545c:
    if (ctx->pc == 0x30545Cu) {
        ctx->pc = 0x30545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305458u;
        // 0x30545c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305460u;
        goto label_305460;
    }
    ctx->pc = 0x305458u;
    {
        const bool branch_taken_0x305458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305458u;
        // 0x30545c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305458) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x305460u;
label_305460:
    // 0x305460: 0x92220265  lbu         $v0, 0x265($s1)
    ctx->pc = 0x305460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 613)));
label_305464:
    // 0x305464: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_305468:
    if (ctx->pc == 0x305468u) {
        ctx->pc = 0x305468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305464u;
        // 0x305468: 0x8c62489c  lw          $v0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30546Cu;
        goto label_30546c;
    }
    ctx->pc = 0x305464u;
    {
        const bool branch_taken_0x305464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305464u;
        // 0x305468: 0x8c62489c  lw          $v0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305464) {
            ctx->pc = 0x305668u;
            goto label_305668;
        }
    }
    ctx->pc = 0x30546Cu;
label_30546c:
    // 0x30546c: 0xc089bfc  jal         func_226FF0
label_305470:
    if (ctx->pc == 0x305470u) {
        ctx->pc = 0x305470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30546Cu;
        // 0x305470: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305474u;
        goto label_305474;
    }
    ctx->pc = 0x30546Cu;
    SET_GPR_U32(ctx, 31, 0x305474u);
    ctx->pc = 0x305470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30546Cu;
    // 0x305470: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x30546Cu, 0x305474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305474u;
label_305474:
    // 0x305474: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
label_305478:
    if (ctx->pc == 0x305478u) {
        ctx->pc = 0x305478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305474u;
        // 0x305478: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30547Cu;
        goto label_30547c;
    }
    ctx->pc = 0x305474u;
    {
        const bool branch_taken_0x305474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305474u;
        // 0x305478: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305474) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x30547Cu;
label_30547c:
    // 0x30547c: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x30547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_305480:
    // 0x305480: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x305480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_305484:
    // 0x305484: 0x8c44caa8  lw          $a0, -0x3558($v0)
    ctx->pc = 0x305484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
label_305488:
    // 0x305488: 0xc05913e  jal         func_1644F8
label_30548c:
    if (ctx->pc == 0x30548Cu) {
        ctx->pc = 0x30548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305488u;
        // 0x30548c: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305490u;
        goto label_305490;
    }
    ctx->pc = 0x305488u;
    SET_GPR_U32(ctx, 31, 0x305490u);
    ctx->pc = 0x30548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305488u;
    // 0x30548c: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644F8u, 0x305488u, 0x305490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305490u;
label_305490:
    // 0x305490: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_305494:
    if (ctx->pc == 0x305494u) {
        ctx->pc = 0x305494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305490u;
        // 0x305494: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305498u;
        goto label_305498;
    }
    ctx->pc = 0x305490u;
    {
        const bool branch_taken_0x305490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305490u;
        // 0x305494: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305490) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x305498u;
label_305498:
    // 0x305498: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_30549c:
    if (ctx->pc == 0x30549Cu) {
        ctx->pc = 0x30549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305498u;
        // 0x30549c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3054A0u;
        goto label_3054a0;
    }
    ctx->pc = 0x305498u;
    {
        const bool branch_taken_0x305498 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305498u;
        // 0x30549c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305498) {
            ctx->pc = 0x3054B4u;
            goto label_3054b4;
        }
    }
    ctx->pc = 0x3054A0u;
label_3054a0:
    // 0x3054a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3054a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3054a4:
    // 0x3054a4: 0x0  nop
    ctx->pc = 0x3054a4u;
    // NOP
label_3054a8:
    // 0x3054a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3054a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3054ac:
    // 0x3054ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_3054b0:
    if (ctx->pc == 0x3054B0u) {
        ctx->pc = 0x3054B4u;
        goto label_3054b4;
    }
    ctx->pc = 0x3054ACu;
    {
        const bool branch_taken_0x3054ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3054ac) {
            ctx->pc = 0x3054CCu;
            goto label_3054cc;
        }
    }
    ctx->pc = 0x3054B4u;
label_3054b4:
    // 0x3054b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3054b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3054b8:
    // 0x3054b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3054b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3054bc:
    // 0x3054bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3054bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3054c0:
    // 0x3054c0: 0x0  nop
    ctx->pc = 0x3054c0u;
    // NOP
label_3054c4:
    // 0x3054c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3054c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3054c8:
    // 0x3054c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3054c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3054cc:
    // 0x3054cc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3054ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3054d0:
    // 0x3054d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3054d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3054d4:
    // 0x3054d4: 0xc10b1c6  jal         func_42C718
label_3054d8:
    if (ctx->pc == 0x3054D8u) {
        ctx->pc = 0x3054D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054D4u;
        // 0x3054d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3054DCu;
        goto label_3054dc;
    }
    ctx->pc = 0x3054D4u;
    SET_GPR_U32(ctx, 31, 0x3054DCu);
    ctx->pc = 0x3054D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054D4u;
    // 0x3054d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3054D4u, 0x3054DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054DCu;
label_3054dc:
    // 0x3054dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3054dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3054e0:
    // 0x3054e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3054e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3054e4:
    // 0x3054e4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x3054e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_3054e8:
    // 0x3054e8: 0xc0cd4ee  jal         func_3353B8
label_3054ec:
    if (ctx->pc == 0x3054ECu) {
        ctx->pc = 0x3054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054E8u;
        // 0x3054ec: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3054F0u;
        goto label_3054f0;
    }
    ctx->pc = 0x3054E8u;
    SET_GPR_U32(ctx, 31, 0x3054F0u);
    ctx->pc = 0x3054ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054E8u;
    // 0x3054ec: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3054E8u, 0x3054F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054F0u;
label_3054f0:
    // 0x3054f0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3054f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3054f4:
    // 0x3054f4: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_3054f8:
    if (ctx->pc == 0x3054F8u) {
        ctx->pc = 0x3054F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054F4u;
        // 0x3054f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3054FCu;
        goto label_3054fc;
    }
    ctx->pc = 0x3054F4u;
    {
        const bool branch_taken_0x3054f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054F4u;
        // 0x3054f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054f4) {
            ctx->pc = 0x305660u;
            goto label_305660;
        }
    }
    ctx->pc = 0x3054FCu;
label_3054fc:
    // 0x3054fc: 0xc0a3fa4  jal         func_28FE90
label_305500:
    if (ctx->pc == 0x305500u) {
        ctx->pc = 0x305500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054FCu;
        // 0x305500: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305504u;
        goto label_305504;
    }
    ctx->pc = 0x3054FCu;
    SET_GPR_U32(ctx, 31, 0x305504u);
    ctx->pc = 0x305500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054FCu;
    // 0x305500: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x3054FCu, 0x305504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305504u;
label_305504:
    // 0x305504: 0xc0a7aa8  jal         func_29EAA0
label_305508:
    if (ctx->pc == 0x305508u) {
        ctx->pc = 0x305508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305504u;
        // 0x305508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30550Cu;
        goto label_30550c;
    }
    ctx->pc = 0x305504u;
    SET_GPR_U32(ctx, 31, 0x30550Cu);
    ctx->pc = 0x305508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305504u;
    // 0x305508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAA0u, 0x305504u, 0x30550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30550Cu;
label_30550c:
    // 0x30550c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30550cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305510:
    // 0x305510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305514:
    // 0x305514: 0x16420053  bne         $s2, $v0, . + 4 + (0x53 << 2)
label_305518:
    if (ctx->pc == 0x305518u) {
        ctx->pc = 0x305518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305514u;
        // 0x305518: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30551Cu;
        goto label_30551c;
    }
    ctx->pc = 0x305514u;
    {
        const bool branch_taken_0x305514 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x305518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305514u;
        // 0x305518: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305514) {
            ctx->pc = 0x305664u;
            goto label_305664;
        }
    }
    ctx->pc = 0x30551Cu;
label_30551c:
    // 0x30551c: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x30551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_305520:
    // 0x305520: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x305520u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
label_305524:
    // 0x305524: 0xc05959e  jal         func_165678
label_305528:
    if (ctx->pc == 0x305528u) {
        ctx->pc = 0x305528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305524u;
        // 0x305528: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30552Cu;
        goto label_30552c;
    }
    ctx->pc = 0x305524u;
    SET_GPR_U32(ctx, 31, 0x30552Cu);
    ctx->pc = 0x305528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305524u;
    // 0x305528: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x305524u, 0x30552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30552Cu;
label_30552c:
    // 0x30552c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30552cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305530:
    // 0x305530: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_305534:
    if (ctx->pc == 0x305534u) {
        ctx->pc = 0x305534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305530u;
        // 0x305534: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305538u;
        goto label_305538;
    }
    ctx->pc = 0x305530u;
    {
        const bool branch_taken_0x305530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305530u;
        // 0x305534: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305530) {
            ctx->pc = 0x305598u;
            goto label_305598;
        }
    }
    ctx->pc = 0x305538u;
label_305538:
    // 0x305538: 0xc088e70  jal         func_2239C0
label_30553c:
    if (ctx->pc == 0x30553Cu) {
        ctx->pc = 0x30553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305538u;
        // 0x30553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305540u;
        goto label_305540;
    }
    ctx->pc = 0x305538u;
    SET_GPR_U32(ctx, 31, 0x305540u);
    ctx->pc = 0x30553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305538u;
    // 0x30553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x305538u, 0x305540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305540u;
label_305540:
    // 0x305540: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_305544:
    if (ctx->pc == 0x305544u) {
        ctx->pc = 0x305544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305540u;
        // 0x305544: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305548u;
        goto label_305548;
    }
    ctx->pc = 0x305540u;
    {
        const bool branch_taken_0x305540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305540u;
        // 0x305544: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305540) {
            ctx->pc = 0x305598u;
            goto label_305598;
        }
    }
    ctx->pc = 0x305548u;
label_305548:
    // 0x305548: 0xc088e30  jal         func_2238C0
label_30554c:
    if (ctx->pc == 0x30554Cu) {
        ctx->pc = 0x30554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305548u;
        // 0x30554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305550u;
        goto label_305550;
    }
    ctx->pc = 0x305548u;
    SET_GPR_U32(ctx, 31, 0x305550u);
    ctx->pc = 0x30554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305548u;
    // 0x30554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x305548u, 0x305550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305550u;
label_305550:
    // 0x305550: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_305554:
    if (ctx->pc == 0x305554u) {
        ctx->pc = 0x305554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305550u;
        // 0x305554: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305558u;
        goto label_305558;
    }
    ctx->pc = 0x305550u;
    {
        const bool branch_taken_0x305550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305550u;
        // 0x305554: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305550) {
            ctx->pc = 0x305598u;
            goto label_305598;
        }
    }
    ctx->pc = 0x305558u;
label_305558:
    // 0x305558: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x305558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_30555c:
    // 0x30555c: 0x84820032  lh          $v0, 0x32($a0)
    ctx->pc = 0x30555cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
label_305560:
    // 0x305560: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x305560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_305564:
    // 0x305564: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x305564u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_305568:
    // 0x305568: 0x1612000b  bne         $s0, $s2, . + 4 + (0xB << 2)
label_30556c:
    if (ctx->pc == 0x30556Cu) {
        ctx->pc = 0x30556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305568u;
        // 0x30556c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305570u;
        goto label_305570;
    }
    ctx->pc = 0x305568u;
    {
        const bool branch_taken_0x305568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x30556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305568u;
        // 0x30556c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305568) {
            ctx->pc = 0x305598u;
            goto label_305598;
        }
    }
    ctx->pc = 0x305570u;
label_305570:
    // 0x305570: 0xc05a596  jal         func_169658
label_305574:
    if (ctx->pc == 0x305574u) {
        ctx->pc = 0x305578u;
        goto label_305578;
    }
    ctx->pc = 0x305570u;
    SET_GPR_U32(ctx, 31, 0x305578u);
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x305570u, 0x305578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305578u;
label_305578:
    // 0x305578: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_30557c:
    if (ctx->pc == 0x30557Cu) {
        ctx->pc = 0x30557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305578u;
        // 0x30557c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305580u;
        goto label_305580;
    }
    ctx->pc = 0x305578u;
    {
        const bool branch_taken_0x305578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x30557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305578u;
        // 0x30557c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305578) {
            ctx->pc = 0x305598u;
            goto label_305598;
        }
    }
    ctx->pc = 0x305580u;
label_305580:
    // 0x305580: 0xc137832  jal         func_4DE0C8
label_305584:
    if (ctx->pc == 0x305584u) {
        ctx->pc = 0x305584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305580u;
        // 0x305584: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305588u;
        goto label_305588;
    }
    ctx->pc = 0x305580u;
    SET_GPR_U32(ctx, 31, 0x305588u);
    ctx->pc = 0x305584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305580u;
    // 0x305584: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x305580u, 0x305588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305588u;
label_305588:
    // 0x305588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30558c:
    if (ctx->pc == 0x30558Cu) {
        ctx->pc = 0x30558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305588u;
        // 0x30558c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305590u;
        goto label_305590;
    }
    ctx->pc = 0x305588u;
    {
        const bool branch_taken_0x305588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305588u;
        // 0x30558c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305588) {
            ctx->pc = 0x305598u;
            goto label_305598;
        }
    }
    ctx->pc = 0x305590u;
label_305590:
    // 0x305590: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x305590u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
label_305594:
    // 0x305594: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x305594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305598:
    // 0x305598: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x305598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30559c:
    // 0x30559c: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x30559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_3055a0:
    // 0x3055a0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3055a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3055a4:
    // 0x3055a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3055a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3055a8:
    // 0x3055a8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3055a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3055ac:
    // 0x3055ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3055acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3055b0:
    // 0x3055b0: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x3055b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
label_3055b4:
    // 0x3055b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3055b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3055b8:
    // 0x3055b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3055b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3055bc:
    // 0x3055bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3055bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3055c0:
    // 0x3055c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3055c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3055c4:
    // 0x3055c4: 0xc0a757c  jal         func_29D5F0
label_3055c8:
    if (ctx->pc == 0x3055C8u) {
        ctx->pc = 0x3055C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055C4u;
        // 0x3055c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3055CCu;
        goto label_3055cc;
    }
    ctx->pc = 0x3055C4u;
    SET_GPR_U32(ctx, 31, 0x3055CCu);
    ctx->pc = 0x3055C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055C4u;
    // 0x3055c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x3055C4u, 0x3055CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055CCu;
label_3055cc:
    // 0x3055cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3055ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3055d0:
    // 0x3055d0: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_3055d4:
    if (ctx->pc == 0x3055D4u) {
        ctx->pc = 0x3055D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055D0u;
        // 0x3055d4: 0x3c130054  lui         $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3055D8u;
        goto label_3055d8;
    }
    ctx->pc = 0x3055D0u;
    {
        const bool branch_taken_0x3055d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055D0u;
        // 0x3055d4: 0x3c130054  lui         $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055d0) {
            ctx->pc = 0x305658u;
            goto label_305658;
        }
    }
    ctx->pc = 0x3055D8u;
label_3055d8:
    // 0x3055d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3055d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3055dc:
    // 0x3055dc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3055dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3055e0:
    // 0x3055e0: 0x8c625704  lw          $v0, 0x5704($v1)
    ctx->pc = 0x3055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22276)));
label_3055e4:
    // 0x3055e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3055e8:
    if (ctx->pc == 0x3055E8u) {
        ctx->pc = 0x3055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055E4u;
        // 0x3055e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3055ECu;
        goto label_3055ec;
    }
    ctx->pc = 0x3055E4u;
    {
        const bool branch_taken_0x3055e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055E4u;
        // 0x3055e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055e4) {
            ctx->pc = 0x305608u;
            goto label_305608;
        }
    }
    ctx->pc = 0x3055ECu;
label_3055ec:
    // 0x3055ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3055ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3055f0:
    // 0x3055f0: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3055f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_3055f4:
    // 0x3055f4: 0xc0e44cc  jal         func_391330
label_3055f8:
    if (ctx->pc == 0x3055F8u) {
        ctx->pc = 0x3055F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055F4u;
        // 0x3055f8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3055FCu;
        goto label_3055fc;
    }
    ctx->pc = 0x3055F4u;
    SET_GPR_U32(ctx, 31, 0x3055FCu);
    ctx->pc = 0x3055F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055F4u;
    // 0x3055f8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3055F4u, 0x3055FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055FCu;
label_3055fc:
    // 0x3055fc: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x3055fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_305600:
    // 0x305600: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x305600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_305604:
    // 0x305604: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x305604u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_305608:
    // 0x305608: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x305608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30560c:
    // 0x30560c: 0xc0e5452  jal         func_395148
label_305610:
    if (ctx->pc == 0x305610u) {
        ctx->pc = 0x305610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30560Cu;
        // 0x305610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305614u;
        goto label_305614;
    }
    ctx->pc = 0x30560Cu;
    SET_GPR_U32(ctx, 31, 0x305614u);
    ctx->pc = 0x305610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30560Cu;
    // 0x305610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x30560Cu, 0x305614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305614u;
label_305614:
    // 0x305614: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x305614u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_305618:
    // 0x305618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30561c:
    // 0x30561c: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_305620:
    if (ctx->pc == 0x305620u) {
        ctx->pc = 0x305620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30561Cu;
        // 0x305620: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305624u;
        goto label_305624;
    }
    ctx->pc = 0x30561Cu;
    {
        const bool branch_taken_0x30561c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x305620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30561Cu;
        // 0x305620: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30561c) {
            ctx->pc = 0x30565Cu;
            goto label_30565c;
        }
    }
    ctx->pc = 0x305624u;
label_305624:
    // 0x305624: 0xc0a36c8  jal         func_28DB20
label_305628:
    if (ctx->pc == 0x305628u) {
        ctx->pc = 0x305628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305624u;
        // 0x305628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30562Cu;
        goto label_30562c;
    }
    ctx->pc = 0x305624u;
    SET_GPR_U32(ctx, 31, 0x30562Cu);
    ctx->pc = 0x305628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305624u;
    // 0x305628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x305624u, 0x30562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30562Cu;
label_30562c:
    // 0x30562c: 0x8223002e  lb          $v1, 0x2E($s1)
    ctx->pc = 0x30562cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_305630:
    // 0x305630: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
label_305634:
    if (ctx->pc == 0x305634u) {
        ctx->pc = 0x305634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305630u;
        // 0x305634: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305638u;
        goto label_305638;
    }
    ctx->pc = 0x305630u;
    {
        const bool branch_taken_0x305630 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x305634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305630u;
        // 0x305634: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305630) {
            ctx->pc = 0x30565Cu;
            goto label_30565c;
        }
    }
    ctx->pc = 0x305638u;
label_305638:
    // 0x305638: 0xc0a367c  jal         func_28D9F0
label_30563c:
    if (ctx->pc == 0x30563Cu) {
        ctx->pc = 0x30563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305638u;
        // 0x30563c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305640u;
        goto label_305640;
    }
    ctx->pc = 0x305638u;
    SET_GPR_U32(ctx, 31, 0x305640u);
    ctx->pc = 0x30563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305638u;
    // 0x30563c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x305638u, 0x305640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305640u;
label_305640:
    // 0x305640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_305644:
    if (ctx->pc == 0x305644u) {
        ctx->pc = 0x305644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305640u;
        // 0x305644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305648u;
        goto label_305648;
    }
    ctx->pc = 0x305640u;
    {
        const bool branch_taken_0x305640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305640u;
        // 0x305644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305640) {
            ctx->pc = 0x305658u;
            goto label_305658;
        }
    }
    ctx->pc = 0x305648u;
label_305648:
    // 0x305648: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x305648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30564c:
    // 0x30564c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30564cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305650:
    // 0x305650: 0xc0bebe6  jal         func_2FAF98
label_305654:
    if (ctx->pc == 0x305654u) {
        ctx->pc = 0x305654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305650u;
        // 0x305654: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305658u;
        goto label_305658;
    }
    ctx->pc = 0x305650u;
    SET_GPR_U32(ctx, 31, 0x305658u);
    ctx->pc = 0x305654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305650u;
    // 0x305654: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x305650u, 0x305658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305658u;
label_305658:
    // 0x305658: 0x2662f2f0  addiu       $v0, $s3, -0xD10
    ctx->pc = 0x305658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
label_30565c:
    // 0x30565c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_305660:
    // 0x305660: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x305660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_305664:
    // 0x305664: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x305664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_305668:
    // 0x305668: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x305668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_30566c:
    // 0x30566c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_305670:
    if (ctx->pc == 0x305670u) {
        ctx->pc = 0x305670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30566Cu;
        // 0x305670: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305674u;
        goto label_305674;
    }
    ctx->pc = 0x30566Cu;
    {
        const bool branch_taken_0x30566c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30566Cu;
        // 0x305670: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30566c) {
            ctx->pc = 0x3056D0u;
            goto label_3056d0;
        }
    }
    ctx->pc = 0x305674u;
label_305674:
    // 0x305674: 0xc089000  jal         func_224000
label_305678:
    if (ctx->pc == 0x305678u) {
        ctx->pc = 0x305678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305674u;
        // 0x305678: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30567Cu;
        goto label_30567c;
    }
    ctx->pc = 0x305674u;
    SET_GPR_U32(ctx, 31, 0x30567Cu);
    ctx->pc = 0x305678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305674u;
    // 0x305678: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x305674u, 0x30567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30567Cu;
label_30567c:
    // 0x30567c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30567cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305680:
    // 0x305680: 0x56120014  bnel        $s0, $s2, . + 4 + (0x14 << 2)
label_305684:
    if (ctx->pc == 0x305684u) {
        ctx->pc = 0x305684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305680u;
        // 0x305684: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305688u;
        goto label_305688;
    }
    ctx->pc = 0x305680u;
    {
        const bool branch_taken_0x305680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x305680) {
            ctx->pc = 0x305684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305680u;
            // 0x305684: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3056D4u;
            goto label_3056d4;
        }
    }
    ctx->pc = 0x305688u;
label_305688:
    // 0x305688: 0xc137832  jal         func_4DE0C8
label_30568c:
    if (ctx->pc == 0x30568Cu) {
        ctx->pc = 0x30568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305688u;
        // 0x30568c: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305690u;
        goto label_305690;
    }
    ctx->pc = 0x305688u;
    SET_GPR_U32(ctx, 31, 0x305690u);
    ctx->pc = 0x30568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305688u;
    // 0x30568c: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x305688u, 0x305690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305690u;
label_305690:
    // 0x305690: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
label_305694:
    if (ctx->pc == 0x305694u) {
        ctx->pc = 0x305694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305690u;
        // 0x305694: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305698u;
        goto label_305698;
    }
    ctx->pc = 0x305690u;
    {
        const bool branch_taken_0x305690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x305690) {
            ctx->pc = 0x305694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305690u;
            // 0x305694: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3056D4u;
            goto label_3056d4;
        }
    }
    ctx->pc = 0x305698u;
label_305698:
    // 0x305698: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_30569c:
    // 0x30569c: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3056a0:
    // 0x3056a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_3056a4:
    if (ctx->pc == 0x3056A4u) {
        ctx->pc = 0x3056A8u;
        goto label_3056a8;
    }
    ctx->pc = 0x3056A0u;
    {
        const bool branch_taken_0x3056a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3056a0) {
            ctx->pc = 0x3056C8u;
            goto label_3056c8;
        }
    }
    ctx->pc = 0x3056A8u;
label_3056a8:
    // 0x3056a8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3056ac:
    // 0x3056ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3056acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3056b0:
    // 0x3056b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3056b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3056b4:
    // 0x3056b4: 0x40f809  jalr        $v0
label_3056b8:
    if (ctx->pc == 0x3056B8u) {
        ctx->pc = 0x3056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056B4u;
        // 0x3056b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056BCu;
        goto label_3056bc;
    }
    ctx->pc = 0x3056B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3056BCu);
        ctx->pc = 0x3056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056B4u;
        // 0x3056b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3056B4u, 0x3056BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3056BCu;
label_3056bc:
    // 0x3056bc: 0x38420026  xori        $v0, $v0, 0x26
    ctx->pc = 0x3056bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)38);
label_3056c0:
    // 0x3056c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3056c4:
    if (ctx->pc == 0x3056C4u) {
        ctx->pc = 0x3056C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056C0u;
        // 0x3056c4: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056C8u;
        goto label_3056c8;
    }
    ctx->pc = 0x3056C0u;
    {
        const bool branch_taken_0x3056c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3056c0) {
            ctx->pc = 0x3056C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3056C0u;
            // 0x3056c4: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3056D4u;
            goto label_3056d4;
        }
    }
    ctx->pc = 0x3056C8u;
label_3056c8:
    // 0x3056c8: 0xc095fce  jal         func_257F38
label_3056cc:
    if (ctx->pc == 0x3056CCu) {
        ctx->pc = 0x3056CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056C8u;
        // 0x3056cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056D0u;
        goto label_3056d0;
    }
    ctx->pc = 0x3056C8u;
    SET_GPR_U32(ctx, 31, 0x3056D0u);
    ctx->pc = 0x3056CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056C8u;
    // 0x3056cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x3056C8u, 0x3056D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056D0u;
label_3056d0:
    // 0x3056d0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3056d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3056d4:
    // 0x3056d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3056d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3056d8:
    // 0x3056d8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3056dc:
    if (ctx->pc == 0x3056DCu) {
        ctx->pc = 0x3056DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056D8u;
        // 0x3056dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056E0u;
        goto label_3056e0;
    }
    ctx->pc = 0x3056D8u;
    {
        const bool branch_taken_0x3056d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3056d8) {
            ctx->pc = 0x3056DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3056D8u;
            // 0x3056dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305734u;
            goto label_305734;
        }
    }
    ctx->pc = 0x3056E0u;
label_3056e0:
    // 0x3056e0: 0xc089bfc  jal         func_226FF0
label_3056e4:
    if (ctx->pc == 0x3056E4u) {
        ctx->pc = 0x3056E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056E0u;
        // 0x3056e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056E8u;
        goto label_3056e8;
    }
    ctx->pc = 0x3056E0u;
    SET_GPR_U32(ctx, 31, 0x3056E8u);
    ctx->pc = 0x3056E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056E0u;
    // 0x3056e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x3056E0u, 0x3056E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056E8u;
label_3056e8:
    // 0x3056e8: 0xc0e57ce  jal         func_395F38
label_3056ec:
    if (ctx->pc == 0x3056ECu) {
        ctx->pc = 0x3056ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056E8u;
        // 0x3056ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056F0u;
        goto label_3056f0;
    }
    ctx->pc = 0x3056E8u;
    SET_GPR_U32(ctx, 31, 0x3056F0u);
    ctx->pc = 0x3056ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056E8u;
    // 0x3056ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3056E8u, 0x3056F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056F0u;
label_3056f0:
    // 0x3056f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3056f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3056f4:
    // 0x3056f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3056f8:
    if (ctx->pc == 0x3056F8u) {
        ctx->pc = 0x3056F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056F4u;
        // 0x3056f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3056FCu;
        goto label_3056fc;
    }
    ctx->pc = 0x3056F4u;
    {
        const bool branch_taken_0x3056f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056F4u;
        // 0x3056f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056f4) {
            ctx->pc = 0x305730u;
            goto label_305730;
        }
    }
    ctx->pc = 0x3056FCu;
label_3056fc:
    // 0x3056fc: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x3056fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_305700:
    // 0x305700: 0xc0e44cc  jal         func_391330
label_305704:
    if (ctx->pc == 0x305704u) {
        ctx->pc = 0x305704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305700u;
        // 0x305704: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305708u;
        goto label_305708;
    }
    ctx->pc = 0x305700u;
    SET_GPR_U32(ctx, 31, 0x305708u);
    ctx->pc = 0x305704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305700u;
    // 0x305704: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x305700u, 0x305708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305708u;
label_305708:
    // 0x305708: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x305708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_30570c:
    // 0x30570c: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x30570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_305710:
    // 0x305710: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_305714:
    if (ctx->pc == 0x305714u) {
        ctx->pc = 0x305714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305710u;
        // 0x305714: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305718u;
        goto label_305718;
    }
    ctx->pc = 0x305710u;
    {
        const bool branch_taken_0x305710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305710) {
            ctx->pc = 0x305714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305710u;
            // 0x305714: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305734u;
            goto label_305734;
        }
    }
    ctx->pc = 0x305718u;
label_305718:
    // 0x305718: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x305718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30571c:
    // 0x30571c: 0x908205b7  lbu         $v0, 0x5B7($a0)
    ctx->pc = 0x30571cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1463)));
label_305720:
    // 0x305720: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_305724:
    if (ctx->pc == 0x305724u) {
        ctx->pc = 0x305724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305720u;
        // 0x305724: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305728u;
        goto label_305728;
    }
    ctx->pc = 0x305720u;
    {
        const bool branch_taken_0x305720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305720) {
            ctx->pc = 0x305724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305720u;
            // 0x305724: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305734u;
            goto label_305734;
        }
    }
    ctx->pc = 0x305728u;
label_305728:
    // 0x305728: 0xc095fce  jal         func_257F38
label_30572c:
    if (ctx->pc == 0x30572Cu) {
        ctx->pc = 0x305730u;
        goto label_305730;
    }
    ctx->pc = 0x305728u;
    SET_GPR_U32(ctx, 31, 0x305730u);
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x305728u, 0x305730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305730u;
label_305730:
    // 0x305730: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305734:
    // 0x305734: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x305734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_305738:
    // 0x305738: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x305738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_30573c:
    // 0x30573c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_305740:
    if (ctx->pc == 0x305740u) {
        ctx->pc = 0x305740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30573Cu;
        // 0x305740: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305744u;
        goto label_305744;
    }
    ctx->pc = 0x30573Cu;
    {
        const bool branch_taken_0x30573c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x305740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30573Cu;
        // 0x305740: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30573c) {
            ctx->pc = 0x305754u;
            goto label_305754;
        }
    }
    ctx->pc = 0x305744u;
label_305744:
    // 0x305744: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_305748:
    if (ctx->pc == 0x305748u) {
        ctx->pc = 0x305748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305744u;
        // 0x305748: 0x240200bc  addiu       $v0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30574Cu;
        goto label_30574c;
    }
    ctx->pc = 0x305744u;
    {
        const bool branch_taken_0x305744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x305748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305744u;
        // 0x305748: 0x240200bc  addiu       $v0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305744) {
            ctx->pc = 0x305754u;
            goto label_305754;
        }
    }
    ctx->pc = 0x30574Cu;
label_30574c:
    // 0x30574c: 0x148200d3  bne         $a0, $v0, . + 4 + (0xD3 << 2)
label_305750:
    if (ctx->pc == 0x305750u) {
        ctx->pc = 0x305750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30574Cu;
        // 0x305750: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305754u;
        goto label_305754;
    }
    ctx->pc = 0x30574Cu;
    {
        const bool branch_taken_0x30574c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x305750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30574Cu;
        // 0x305750: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30574c) {
            ctx->pc = 0x305A9Cu;
            goto label_305a9c;
        }
    }
    ctx->pc = 0x305754u;
label_305754:
    // 0x305754: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x305754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_305758:
    // 0x305758: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x305758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_30575c:
    // 0x30575c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_305760:
    if (ctx->pc == 0x305760u) {
        ctx->pc = 0x305760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30575Cu;
        // 0x305760: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305764u;
        goto label_305764;
    }
    ctx->pc = 0x30575Cu;
    {
        const bool branch_taken_0x30575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30575c) {
            ctx->pc = 0x305760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30575Cu;
            // 0x305760: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305764u;
            goto label_305764;
        }
    }
    ctx->pc = 0x305764u;
label_305764:
    // 0x305764: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x305764u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_305768:
    // 0x305768: 0x1810  mfhi        $v1
    ctx->pc = 0x305768u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_30576c:
    // 0x30576c: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_305770:
    if (ctx->pc == 0x305770u) {
        ctx->pc = 0x305770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30576Cu;
        // 0x305770: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305774u;
        goto label_305774;
    }
    ctx->pc = 0x30576Cu;
    {
        const bool branch_taken_0x30576c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30576Cu;
        // 0x305770: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30576c) {
            ctx->pc = 0x3058B0u;
            goto label_3058b0;
        }
    }
    ctx->pc = 0x305774u;
label_305774:
    // 0x305774: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x305774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_305778:
    // 0x305778: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x305778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_30577c:
    // 0x30577c: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
label_305780:
    if (ctx->pc == 0x305780u) {
        ctx->pc = 0x305780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30577Cu;
        // 0x305780: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305784u;
        goto label_305784;
    }
    ctx->pc = 0x30577Cu;
    {
        const bool branch_taken_0x30577c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x305780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30577Cu;
        // 0x305780: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30577c) {
            ctx->pc = 0x3058B0u;
            goto label_3058b0;
        }
    }
    ctx->pc = 0x305784u;
label_305784:
    // 0x305784: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x305784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_305788:
    // 0x305788: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_30578c:
    // 0x30578c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x30578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_305790:
    // 0x305790: 0x40f809  jalr        $v0
label_305794:
    if (ctx->pc == 0x305794u) {
        ctx->pc = 0x305794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305790u;
        // 0x305794: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305798u;
        goto label_305798;
    }
    ctx->pc = 0x305790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305798u);
        ctx->pc = 0x305794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305790u;
        // 0x305794: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305790u, 0x305798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305798u;
label_305798:
    // 0x305798: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30579c:
    // 0x30579c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x30579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3057a0:
    // 0x3057a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3057a4:
    if (ctx->pc == 0x3057A4u) {
        ctx->pc = 0x3057A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057A0u;
        // 0x3057a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057A8u;
        goto label_3057a8;
    }
    ctx->pc = 0x3057A0u;
    {
        const bool branch_taken_0x3057a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3057A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057A0u;
        // 0x3057a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057a0) {
            ctx->pc = 0x3057B0u;
            goto label_3057b0;
        }
    }
    ctx->pc = 0x3057A8u;
label_3057a8:
    // 0x3057a8: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_3057ac:
    if (ctx->pc == 0x3057ACu) {
        ctx->pc = 0x3057ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057A8u;
        // 0x3057ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057B0u;
        goto label_3057b0;
    }
    ctx->pc = 0x3057A8u;
    {
        const bool branch_taken_0x3057a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3057ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057A8u;
        // 0x3057ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057a8) {
            ctx->pc = 0x3058B0u;
            goto label_3058b0;
        }
    }
    ctx->pc = 0x3057B0u;
label_3057b0:
    // 0x3057b0: 0x92220152  lbu         $v0, 0x152($s1)
    ctx->pc = 0x3057b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 338)));
label_3057b4:
    // 0x3057b4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_3057b8:
    if (ctx->pc == 0x3057B8u) {
        ctx->pc = 0x3057B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057B4u;
        // 0x3057b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057BCu;
        goto label_3057bc;
    }
    ctx->pc = 0x3057B4u;
    {
        const bool branch_taken_0x3057b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3057B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057B4u;
        // 0x3057b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057b4) {
            ctx->pc = 0x3058B0u;
            goto label_3058b0;
        }
    }
    ctx->pc = 0x3057BCu;
label_3057bc:
    // 0x3057bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3057bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3057c0:
    // 0x3057c0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x3057c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_3057c4:
    // 0x3057c4: 0xc0e4060  jal         func_390180
label_3057c8:
    if (ctx->pc == 0x3057C8u) {
        ctx->pc = 0x3057C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057C4u;
        // 0x3057c8: 0x24840364  addiu       $a0, $a0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057CCu;
        goto label_3057cc;
    }
    ctx->pc = 0x3057C4u;
    SET_GPR_U32(ctx, 31, 0x3057CCu);
    ctx->pc = 0x3057C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057C4u;
    // 0x3057c8: 0x24840364  addiu       $a0, $a0, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3057C4u, 0x3057CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057CCu;
label_3057cc:
    // 0x3057cc: 0xc0e57ce  jal         func_395F38
label_3057d0:
    if (ctx->pc == 0x3057D0u) {
        ctx->pc = 0x3057D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057CCu;
        // 0x3057d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057D4u;
        goto label_3057d4;
    }
    ctx->pc = 0x3057CCu;
    SET_GPR_U32(ctx, 31, 0x3057D4u);
    ctx->pc = 0x3057D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057CCu;
    // 0x3057d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3057CCu, 0x3057D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057D4u;
label_3057d4:
    // 0x3057d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3057d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3057d8:
    // 0x3057d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3057dc:
    if (ctx->pc == 0x3057DCu) {
        ctx->pc = 0x3057DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057D8u;
        // 0x3057dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057E0u;
        goto label_3057e0;
    }
    ctx->pc = 0x3057D8u;
    {
        const bool branch_taken_0x3057d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3057DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057D8u;
        // 0x3057dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057d8) {
            ctx->pc = 0x305800u;
            goto label_305800;
        }
    }
    ctx->pc = 0x3057E0u;
label_3057e0:
    // 0x3057e0: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x3057e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_3057e4:
    // 0x3057e4: 0xc0e4546  jal         func_391518
label_3057e8:
    if (ctx->pc == 0x3057E8u) {
        ctx->pc = 0x3057E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057E4u;
        // 0x3057e8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057ECu;
        goto label_3057ec;
    }
    ctx->pc = 0x3057E4u;
    SET_GPR_U32(ctx, 31, 0x3057ECu);
    ctx->pc = 0x3057E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057E4u;
    // 0x3057e8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x3057E4u, 0x3057ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057ECu;
label_3057ec:
    // 0x3057ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3057ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3057f0:
    // 0x3057f0: 0xc10d74c  jal         func_435D30
label_3057f4:
    if (ctx->pc == 0x3057F4u) {
        ctx->pc = 0x3057F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057F0u;
        // 0x3057f4: 0x2605a2d0  addiu       $a1, $s0, -0x5D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3057F8u;
        goto label_3057f8;
    }
    ctx->pc = 0x3057F0u;
    SET_GPR_U32(ctx, 31, 0x3057F8u);
    ctx->pc = 0x3057F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057F0u;
    // 0x3057f4: 0x2605a2d0  addiu       $a1, $s0, -0x5D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x3057F0u, 0x3057F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057F8u;
label_3057f8:
    // 0x3057f8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_3057fc:
    if (ctx->pc == 0x3057FCu) {
        ctx->pc = 0x3057FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057F8u;
        // 0x3057fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305800u;
        goto label_305800;
    }
    ctx->pc = 0x3057F8u;
    {
        const bool branch_taken_0x3057f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3057FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057F8u;
        // 0x3057fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057f8) {
            ctx->pc = 0x3058B0u;
            goto label_3058b0;
        }
    }
    ctx->pc = 0x305800u;
label_305800:
    // 0x305800: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x305800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_305804:
    // 0x305804: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x305804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305808:
    // 0x305808: 0x2603a2d0  addiu       $v1, $s0, -0x5D30
    ctx->pc = 0x305808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943440));
label_30580c:
    // 0x30580c: 0x2442f290  addiu       $v0, $v0, -0xD70
    ctx->pc = 0x30580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
label_305810:
    // 0x305810: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x305810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_305814:
    // 0x305814: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305818:
    // 0x305818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30581c:
    // 0x30581c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30581cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_305820:
    // 0x305820: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x305820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_305824:
    // 0x305824: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x305824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_305828:
    // 0x305828: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30582c:
    // 0x30582c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30582cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305830:
    // 0x305830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x305830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305834:
    // 0x305834: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x305834u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305838:
    // 0x305838: 0xc0a757c  jal         func_29D5F0
label_30583c:
    if (ctx->pc == 0x30583Cu) {
        ctx->pc = 0x30583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305838u;
        // 0x30583c: 0x3c130054  lui         $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305840u;
        goto label_305840;
    }
    ctx->pc = 0x305838u;
    SET_GPR_U32(ctx, 31, 0x305840u);
    ctx->pc = 0x30583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305838u;
    // 0x30583c: 0x3c130054  lui         $s3, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x305838u, 0x305840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305840u;
label_305840:
    // 0x305840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305844:
    // 0x305844: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_305848:
    if (ctx->pc == 0x305848u) {
        ctx->pc = 0x305848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305844u;
        // 0x305848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30584Cu;
        goto label_30584c;
    }
    ctx->pc = 0x305844u;
    {
        const bool branch_taken_0x305844 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x305848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305844u;
        // 0x305848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305844) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x30584Cu;
label_30584c:
    // 0x30584c: 0xc0a3658  jal         func_28D960
label_305850:
    if (ctx->pc == 0x305850u) {
        ctx->pc = 0x305850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30584Cu;
        // 0x305850: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305854u;
        goto label_305854;
    }
    ctx->pc = 0x30584Cu;
    SET_GPR_U32(ctx, 31, 0x305854u);
    ctx->pc = 0x305850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30584Cu;
    // 0x305850: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x30584Cu, 0x305854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305854u;
label_305854:
    // 0x305854: 0x8223002d  lb          $v1, 0x2D($s1)
    ctx->pc = 0x305854u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_305858:
    // 0x305858: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x305858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_30585c:
    // 0x30585c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_305860:
    if (ctx->pc == 0x305860u) {
        ctx->pc = 0x305860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30585Cu;
        // 0x305860: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305864u;
        goto label_305864;
    }
    ctx->pc = 0x30585Cu;
    {
        const bool branch_taken_0x30585c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30585Cu;
        // 0x305860: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30585c) {
            ctx->pc = 0x3058A8u;
            goto label_3058a8;
        }
    }
    ctx->pc = 0x305864u;
label_305864:
    // 0x305864: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x305864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305868:
    // 0x305868: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x305868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30586c:
    // 0x30586c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30586cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_305870:
    // 0x305870: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x305870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_305874:
    // 0x305874: 0x40f809  jalr        $v0
label_305878:
    if (ctx->pc == 0x305878u) {
        ctx->pc = 0x305878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305874u;
        // 0x305878: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30587Cu;
        goto label_30587c;
    }
    ctx->pc = 0x305874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30587Cu);
        ctx->pc = 0x305878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305874u;
        // 0x305878: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305874u, 0x30587Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30587Cu;
label_30587c:
    // 0x30587c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30587cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_305880:
    // 0x305880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305884:
    // 0x305884: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x305884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_305888:
    // 0x305888: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x305888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30588c:
    // 0x30588c: 0x40f809  jalr        $v0
label_305890:
    if (ctx->pc == 0x305890u) {
        ctx->pc = 0x305890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30588Cu;
        // 0x305890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305894u;
        goto label_305894;
    }
    ctx->pc = 0x30588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305894u);
        ctx->pc = 0x305890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30588Cu;
        // 0x305890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30588Cu, 0x305894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305894u;
label_305894:
    // 0x305894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305898:
    // 0x305898: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x305898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30589c:
    // 0x30589c: 0xc0b71c2  jal         func_2DC708
label_3058a0:
    if (ctx->pc == 0x3058A0u) {
        ctx->pc = 0x3058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30589Cu;
        // 0x3058a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058A4u;
        goto label_3058a4;
    }
    ctx->pc = 0x30589Cu;
    SET_GPR_U32(ctx, 31, 0x3058A4u);
    ctx->pc = 0x3058A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30589Cu;
    // 0x3058a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x30589Cu, 0x3058A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058A4u;
label_3058a4:
    // 0x3058a4: 0x2662f2f0  addiu       $v0, $s3, -0xD10
    ctx->pc = 0x3058a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
label_3058a8:
    // 0x3058a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3058a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3058ac:
    // 0x3058ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3058acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3058b0:
    // 0x3058b0: 0x8c450a9c  lw          $a1, 0xA9C($v0)
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
label_3058b4:
    // 0x3058b4: 0x10a00079  beqz        $a1, . + 4 + (0x79 << 2)
label_3058b8:
    if (ctx->pc == 0x3058B8u) {
        ctx->pc = 0x3058B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058B4u;
        // 0x3058b8: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058BCu;
        goto label_3058bc;
    }
    ctx->pc = 0x3058B4u;
    {
        const bool branch_taken_0x3058b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058B4u;
        // 0x3058b8: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058b4) {
            ctx->pc = 0x305A9Cu;
            goto label_305a9c;
        }
    }
    ctx->pc = 0x3058BCu;
label_3058bc:
    // 0x3058bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3058bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3058c0:
    // 0x3058c0: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x3058c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_3058c4:
    // 0x3058c4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3058c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_3058c8:
    // 0x3058c8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3058c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3058cc:
    // 0x3058cc: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_3058d0:
    if (ctx->pc == 0x3058D0u) {
        ctx->pc = 0x3058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058CCu;
        // 0x3058d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058D4u;
        goto label_3058d4;
    }
    ctx->pc = 0x3058CCu;
    {
        const bool branch_taken_0x3058cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058CCu;
        // 0x3058d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058cc) {
            ctx->pc = 0x305AA0u;
            goto label_305aa0;
        }
    }
    ctx->pc = 0x3058D4u;
label_3058d4:
    // 0x3058d4: 0xc0a4822  jal         func_292088
label_3058d8:
    if (ctx->pc == 0x3058D8u) {
        ctx->pc = 0x3058D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058D4u;
        // 0x3058d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058DCu;
        goto label_3058dc;
    }
    ctx->pc = 0x3058D4u;
    SET_GPR_U32(ctx, 31, 0x3058DCu);
    ctx->pc = 0x3058D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058D4u;
    // 0x3058d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292088u, 0x3058D4u, 0x3058DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058DCu;
label_3058dc:
    // 0x3058dc: 0xc08a096  jal         func_228258
label_3058e0:
    if (ctx->pc == 0x3058E0u) {
        ctx->pc = 0x3058E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058DCu;
        // 0x3058e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058E4u;
        goto label_3058e4;
    }
    ctx->pc = 0x3058DCu;
    SET_GPR_U32(ctx, 31, 0x3058E4u);
    ctx->pc = 0x3058E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058DCu;
    // 0x3058e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x3058DCu, 0x3058E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058E4u;
label_3058e4:
    // 0x3058e4: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_3058e8:
    if (ctx->pc == 0x3058E8u) {
        ctx->pc = 0x3058E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058E4u;
        // 0x3058e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058ECu;
        goto label_3058ec;
    }
    ctx->pc = 0x3058E4u;
    {
        const bool branch_taken_0x3058e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058E4u;
        // 0x3058e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058e4) {
            ctx->pc = 0x305AA0u;
            goto label_305aa0;
        }
    }
    ctx->pc = 0x3058ECu;
label_3058ec:
    // 0x3058ec: 0xc08a08a  jal         func_228228
label_3058f0:
    if (ctx->pc == 0x3058F0u) {
        ctx->pc = 0x3058F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058ECu;
        // 0x3058f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058F4u;
        goto label_3058f4;
    }
    ctx->pc = 0x3058ECu;
    SET_GPR_U32(ctx, 31, 0x3058F4u);
    ctx->pc = 0x3058F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058ECu;
    // 0x3058f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3058ECu, 0x3058F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058F4u;
label_3058f4:
    // 0x3058f4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_3058f8:
    if (ctx->pc == 0x3058F8u) {
        ctx->pc = 0x3058F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058F4u;
        // 0x3058f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3058FCu;
        goto label_3058fc;
    }
    ctx->pc = 0x3058F4u;
    {
        const bool branch_taken_0x3058f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058F4u;
        // 0x3058f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058f4) {
            ctx->pc = 0x305AA0u;
            goto label_305aa0;
        }
    }
    ctx->pc = 0x3058FCu;
label_3058fc:
    // 0x3058fc: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x3058fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_305900:
    // 0x305900: 0xc089998  jal         func_226660
label_305904:
    if (ctx->pc == 0x305904u) {
        ctx->pc = 0x305904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305900u;
        // 0x305904: 0x34a5ee60  ori         $a1, $a1, 0xEE60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305908u;
        goto label_305908;
    }
    ctx->pc = 0x305900u;
    SET_GPR_U32(ctx, 31, 0x305908u);
    ctx->pc = 0x305904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305900u;
    // 0x305904: 0x34a5ee60  ori         $a1, $a1, 0xEE60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x305900u, 0x305908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305908u;
label_305908:
    // 0x305908: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_30590c:
    if (ctx->pc == 0x30590Cu) {
        ctx->pc = 0x30590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305908u;
        // 0x30590c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305910u;
        goto label_305910;
    }
    ctx->pc = 0x305908u;
    {
        const bool branch_taken_0x305908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305908u;
        // 0x30590c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305908) {
            ctx->pc = 0x305AA0u;
            goto label_305aa0;
        }
    }
    ctx->pc = 0x305910u;
label_305910:
    // 0x305910: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x305910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_305914:
    // 0x305914: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x305914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305918:
    // 0x305918: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x305918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_30591c:
    // 0x30591c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x30591cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_305920:
    // 0x305920: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_305924:
    if (ctx->pc == 0x305924u) {
        ctx->pc = 0x305924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305920u;
        // 0x305924: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305928u;
        goto label_305928;
    }
    ctx->pc = 0x305920u;
    {
        const bool branch_taken_0x305920 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x305924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305920u;
        // 0x305924: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305920) {
            ctx->pc = 0x305990u;
            goto label_305990;
        }
    }
    ctx->pc = 0x305928u;
label_305928:
    // 0x305928: 0x3c12bbbe  lui         $s2, 0xBBBE
    ctx->pc = 0x305928u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48062 << 16));
label_30592c:
    // 0x30592c: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x30592cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_305930:
    // 0x305930: 0x3652f927  ori         $s2, $s2, 0xF927
    ctx->pc = 0x305930u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)63783);
label_305934:
    // 0x305934: 0x0  nop
    ctx->pc = 0x305934u;
    // NOP
label_305938:
    // 0x305938: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x305938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_30593c:
    // 0x30593c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x30593cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_305940:
    // 0x305940: 0xc0e409a  jal         func_390268
label_305944:
    if (ctx->pc == 0x305944u) {
        ctx->pc = 0x305944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305940u;
        // 0x305944: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305948u;
        goto label_305948;
    }
    ctx->pc = 0x305940u;
    SET_GPR_U32(ctx, 31, 0x305948u);
    ctx->pc = 0x305944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305940u;
    // 0x305944: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x305940u, 0x305948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305948u;
label_305948:
    // 0x305948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30594c:
    // 0x30594c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_305950:
    if (ctx->pc == 0x305950u) {
        ctx->pc = 0x305950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30594Cu;
        // 0x305950: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305954u;
        goto label_305954;
    }
    ctx->pc = 0x30594Cu;
    {
        const bool branch_taken_0x30594c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30594Cu;
        // 0x305950: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30594c) {
            ctx->pc = 0x305978u;
            goto label_305978;
        }
    }
    ctx->pc = 0x305954u;
label_305954:
    // 0x305954: 0xc0e4060  jal         func_390180
label_305958:
    if (ctx->pc == 0x305958u) {
        ctx->pc = 0x305958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305954u;
        // 0x305958: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30595Cu;
        goto label_30595c;
    }
    ctx->pc = 0x305954u;
    SET_GPR_U32(ctx, 31, 0x30595Cu);
    ctx->pc = 0x305958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305954u;
    // 0x305958: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x305954u, 0x30595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30595Cu;
label_30595c:
    // 0x30595c: 0xc0e57ce  jal         func_395F38
label_305960:
    if (ctx->pc == 0x305960u) {
        ctx->pc = 0x305960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30595Cu;
        // 0x305960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305964u;
        goto label_305964;
    }
    ctx->pc = 0x30595Cu;
    SET_GPR_U32(ctx, 31, 0x305964u);
    ctx->pc = 0x305960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30595Cu;
    // 0x305960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x30595Cu, 0x305964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305964u;
label_305964:
    // 0x305964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_305968:
    if (ctx->pc == 0x305968u) {
        ctx->pc = 0x305968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305964u;
        // 0x305968: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30596Cu;
        goto label_30596c;
    }
    ctx->pc = 0x305964u;
    {
        const bool branch_taken_0x305964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305964u;
        // 0x305968: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305964) {
            ctx->pc = 0x305978u;
            goto label_305978;
        }
    }
    ctx->pc = 0x30596Cu;
label_30596c:
    // 0x30596c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x30596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_305970:
    // 0x305970: 0x50520007  beql        $v0, $s2, . + 4 + (0x7 << 2)
label_305974:
    if (ctx->pc == 0x305974u) {
        ctx->pc = 0x305974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305970u;
        // 0x305974: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305978u;
        goto label_305978;
    }
    ctx->pc = 0x305970u;
    {
        const bool branch_taken_0x305970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x305970) {
            ctx->pc = 0x305974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305970u;
            // 0x305974: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305990u;
            goto label_305990;
        }
    }
    ctx->pc = 0x305978u;
label_305978:
    // 0x305978: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x305978u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_30597c:
    // 0x30597c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x30597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_305980:
    // 0x305980: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x305980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_305984:
    // 0x305984: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x305984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_305988:
    // 0x305988: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_30598c:
    if (ctx->pc == 0x30598Cu) {
        ctx->pc = 0x30598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305988u;
        // 0x30598c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305990u;
        goto label_305990;
    }
    ctx->pc = 0x305988u;
    {
        const bool branch_taken_0x305988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305988u;
        // 0x30598c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305988) {
            ctx->pc = 0x305938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305938;
        }
    }
    ctx->pc = 0x305990u;
label_305990:
    // 0x305990: 0x12c00042  beqz        $s6, . + 4 + (0x42 << 2)
label_305994:
    if (ctx->pc == 0x305994u) {
        ctx->pc = 0x305994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305990u;
        // 0x305994: 0x26d50090  addiu       $s5, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305998u;
        goto label_305998;
    }
    ctx->pc = 0x305990u;
    {
        const bool branch_taken_0x305990 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x305994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305990u;
        // 0x305994: 0x26d50090  addiu       $s5, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305990) {
            ctx->pc = 0x305A9Cu;
            goto label_305a9c;
        }
    }
    ctx->pc = 0x305998u;
label_305998:
    // 0x305998: 0x86e40092  lh          $a0, 0x92($s7)
    ctx->pc = 0x305998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_30599c:
    // 0x30599c: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x30599cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_3059a0:
    // 0x3059a0: 0x27d34b00  addiu       $s3, $fp, 0x4B00
    ctx->pc = 0x3059a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_3059a4:
    // 0x3059a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3059a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3059a8:
    // 0x3059a8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3059a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3059ac:
    // 0x3059ac: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3059acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3059b0:
    // 0x3059b0: 0xc0cdb38  jal         func_336CE0
label_3059b4:
    if (ctx->pc == 0x3059B4u) {
        ctx->pc = 0x3059B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059B0u;
        // 0x3059b4: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3059B8u;
        goto label_3059b8;
    }
    ctx->pc = 0x3059B0u;
    SET_GPR_U32(ctx, 31, 0x3059B8u);
    ctx->pc = 0x3059B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059B0u;
    // 0x3059b4: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3059B0u, 0x3059B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059B8u;
label_3059b8:
    // 0x3059b8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3059b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3059bc:
    // 0x3059bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3059bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3059c0:
    // 0x3059c0: 0x0  nop
    ctx->pc = 0x3059c0u;
    // NOP
label_3059c4:
    // 0x3059c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3059c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3059c8:
    // 0x3059c8: 0x0  nop
    ctx->pc = 0x3059c8u;
    // NOP
label_3059cc:
    // 0x3059cc: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_3059d0:
    if (ctx->pc == 0x3059D0u) {
        ctx->pc = 0x3059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059CCu;
        // 0x3059d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3059D4u;
        goto label_3059d4;
    }
    ctx->pc = 0x3059CCu;
    {
        const bool branch_taken_0x3059cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059CCu;
        // 0x3059d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059cc) {
            ctx->pc = 0x305A9Cu;
            goto label_305a9c;
        }
    }
    ctx->pc = 0x3059D4u;
label_3059d4:
    // 0x3059d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3059d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3059d8:
    // 0x3059d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3059d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3059dc:
    // 0x3059dc: 0xc0888a2  jal         func_222288
label_3059e0:
    if (ctx->pc == 0x3059E0u) {
        ctx->pc = 0x3059E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059DCu;
        // 0x3059e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3059E4u;
        goto label_3059e4;
    }
    ctx->pc = 0x3059DCu;
    SET_GPR_U32(ctx, 31, 0x3059E4u);
    ctx->pc = 0x3059E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059DCu;
    // 0x3059e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x3059DCu, 0x3059E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059E4u;
label_3059e4:
    // 0x3059e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3059e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3059e8:
    // 0x3059e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3059ec:
    // 0x3059ec: 0x1602002c  bne         $s0, $v0, . + 4 + (0x2C << 2)
label_3059f0:
    if (ctx->pc == 0x3059F0u) {
        ctx->pc = 0x3059F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059ECu;
        // 0x3059f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3059F4u;
        goto label_3059f4;
    }
    ctx->pc = 0x3059ECu;
    {
        const bool branch_taken_0x3059ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3059F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059ECu;
        // 0x3059f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059ec) {
            ctx->pc = 0x305AA0u;
            goto label_305aa0;
        }
    }
    ctx->pc = 0x3059F4u;
label_3059f4:
    // 0x3059f4: 0xc0a36c8  jal         func_28DB20
label_3059f8:
    if (ctx->pc == 0x3059F8u) {
        ctx->pc = 0x3059F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059F4u;
        // 0x3059f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3059FCu;
        goto label_3059fc;
    }
    ctx->pc = 0x3059F4u;
    SET_GPR_U32(ctx, 31, 0x3059FCu);
    ctx->pc = 0x3059F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059F4u;
    // 0x3059f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3059F4u, 0x3059FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059FCu;
label_3059fc:
    // 0x3059fc: 0x54500019  bnel        $v0, $s0, . + 4 + (0x19 << 2)
label_305a00:
    if (ctx->pc == 0x305A00u) {
        ctx->pc = 0x305A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059FCu;
        // 0x305a00: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A04u;
        goto label_305a04;
    }
    ctx->pc = 0x3059FCu;
    {
        const bool branch_taken_0x3059fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3059fc) {
            ctx->pc = 0x305A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3059FCu;
            // 0x305a00: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A64u;
            goto label_305a64;
        }
    }
    ctx->pc = 0x305A04u;
label_305a04:
    // 0x305a04: 0xc0a367c  jal         func_28D9F0
label_305a08:
    if (ctx->pc == 0x305A08u) {
        ctx->pc = 0x305A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A04u;
        // 0x305a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A0Cu;
        goto label_305a0c;
    }
    ctx->pc = 0x305A04u;
    SET_GPR_U32(ctx, 31, 0x305A0Cu);
    ctx->pc = 0x305A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A04u;
    // 0x305a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x305A04u, 0x305A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A0Cu;
label_305a0c:
    // 0x305a0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305a10:
    // 0x305a10: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_305a14:
    if (ctx->pc == 0x305A14u) {
        ctx->pc = 0x305A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A10u;
        // 0x305a14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A18u;
        goto label_305a18;
    }
    ctx->pc = 0x305A10u;
    {
        const bool branch_taken_0x305a10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A10u;
        // 0x305a14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a10) {
            ctx->pc = 0x305A40u;
            goto label_305a40;
        }
    }
    ctx->pc = 0x305A18u;
label_305a18:
    // 0x305a18: 0x86b00002  lh          $s0, 0x2($s5)
    ctx->pc = 0x305a18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_305a1c:
    // 0x305a1c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x305a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_305a20:
    // 0x305a20: 0xc0884f6  jal         func_2213D8
label_305a24:
    if (ctx->pc == 0x305A24u) {
        ctx->pc = 0x305A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A20u;
        // 0x305a24: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A28u;
        goto label_305a28;
    }
    ctx->pc = 0x305A20u;
    SET_GPR_U32(ctx, 31, 0x305A28u);
    ctx->pc = 0x305A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A20u;
    // 0x305a24: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x305A20u, 0x305A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A28u;
label_305a28:
    // 0x305a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x305a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305a2c:
    // 0x305a2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x305a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305a30:
    // 0x305a30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x305a30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_305a34:
    // 0x305a34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305a38:
    // 0x305a38: 0xc0bf800  jal         func_2FE000
label_305a3c:
    if (ctx->pc == 0x305A3Cu) {
        ctx->pc = 0x305A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A38u;
        // 0x305a3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A40u;
        goto label_305a40;
    }
    ctx->pc = 0x305A38u;
    SET_GPR_U32(ctx, 31, 0x305A40u);
    ctx->pc = 0x305A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A38u;
    // 0x305a3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x305A38u, 0x305A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A40u;
label_305a40:
    // 0x305a40: 0xc0a367c  jal         func_28D9F0
label_305a44:
    if (ctx->pc == 0x305A44u) {
        ctx->pc = 0x305A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A40u;
        // 0x305a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A48u;
        goto label_305a48;
    }
    ctx->pc = 0x305A40u;
    SET_GPR_U32(ctx, 31, 0x305A48u);
    ctx->pc = 0x305A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A40u;
    // 0x305a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x305A40u, 0x305A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A48u;
label_305a48:
    // 0x305a48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_305a4c:
    if (ctx->pc == 0x305A4Cu) {
        ctx->pc = 0x305A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A48u;
        // 0x305a4c: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A50u;
        goto label_305a50;
    }
    ctx->pc = 0x305A48u;
    {
        const bool branch_taken_0x305a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a48) {
            ctx->pc = 0x305A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A48u;
            // 0x305a4c: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A64u;
            goto label_305a64;
        }
    }
    ctx->pc = 0x305A50u;
label_305a50:
    // 0x305a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x305a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305a54:
    // 0x305a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305a58:
    // 0x305a58: 0xc0bebdc  jal         func_2FAF70
label_305a5c:
    if (ctx->pc == 0x305A5Cu) {
        ctx->pc = 0x305A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A58u;
        // 0x305a5c: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A60u;
        goto label_305a60;
    }
    ctx->pc = 0x305A58u;
    SET_GPR_U32(ctx, 31, 0x305A60u);
    ctx->pc = 0x305A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A58u;
    // 0x305a5c: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x305A58u, 0x305A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A60u;
label_305a60:
    // 0x305a60: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x305a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_305a64:
    // 0x305a64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x305a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_305a68:
    // 0x305a68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_305a6c:
    // 0x305a6c: 0x40f809  jalr        $v0
label_305a70:
    if (ctx->pc == 0x305A70u) {
        ctx->pc = 0x305A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A6Cu;
        // 0x305a70: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A74u;
        goto label_305a74;
    }
    ctx->pc = 0x305A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305A74u);
        ctx->pc = 0x305A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A6Cu;
        // 0x305a70: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305A6Cu, 0x305A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305A74u;
label_305a74:
    // 0x305a74: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x305a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_305a78:
    // 0x305a78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305a7c:
    // 0x305a7c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x305a7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305a80:
    // 0x305a80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305a84:
    // 0x305a84: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x305a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_305a88:
    // 0x305a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305a8c:
    // 0x305a8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305a90:
    // 0x305a90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305a94:
    // 0x305a94: 0xc088178  jal         func_2205E0
label_305a98:
    if (ctx->pc == 0x305A98u) {
        ctx->pc = 0x305A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A94u;
        // 0x305a98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A9Cu;
        goto label_305a9c;
    }
    ctx->pc = 0x305A94u;
    SET_GPR_U32(ctx, 31, 0x305A9Cu);
    ctx->pc = 0x305A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A94u;
    // 0x305a98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x305A94u, 0x305A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A9Cu;
label_305a9c:
    // 0x305a9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305aa0:
    // 0x305aa0: 0xc089bfc  jal         func_226FF0
label_305aa4:
    if (ctx->pc == 0x305AA4u) {
        ctx->pc = 0x305AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AA0u;
        // 0x305aa4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AA8u;
        goto label_305aa8;
    }
    ctx->pc = 0x305AA0u;
    SET_GPR_U32(ctx, 31, 0x305AA8u);
    ctx->pc = 0x305AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AA0u;
    // 0x305aa4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x305AA0u, 0x305AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AA8u;
label_305aa8:
    // 0x305aa8: 0xc0e57ce  jal         func_395F38
label_305aac:
    if (ctx->pc == 0x305AACu) {
        ctx->pc = 0x305AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AA8u;
        // 0x305aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AB0u;
        goto label_305ab0;
    }
    ctx->pc = 0x305AA8u;
    SET_GPR_U32(ctx, 31, 0x305AB0u);
    ctx->pc = 0x305AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AA8u;
    // 0x305aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x305AA8u, 0x305AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AB0u;
label_305ab0:
    // 0x305ab0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305ab4:
    // 0x305ab4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x305ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_305ab8:
    // 0x305ab8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x305ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_305abc:
    // 0x305abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305ac0:
    // 0x305ac0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305ac4:
    // 0x305ac4: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x305ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_305ac8:
    // 0x305ac8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x305ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_305acc:
    // 0x305acc: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x305accu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_305ad0:
    // 0x305ad0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x305ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_305ad4:
    // 0x305ad4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x305ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_305ad8:
    // 0x305ad8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x305ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_305adc:
    // 0x305adc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x305adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_305ae0:
    // 0x305ae0: 0xc1067b8  jal         func_419EE0
label_305ae4:
    if (ctx->pc == 0x305AE4u) {
        ctx->pc = 0x305AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AE0u;
        // 0x305ae4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AE8u;
        goto label_305ae8;
    }
    ctx->pc = 0x305AE0u;
    SET_GPR_U32(ctx, 31, 0x305AE8u);
    ctx->pc = 0x305AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AE0u;
    // 0x305ae4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x305AE0u, 0x305AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AE8u;
label_305ae8:
    // 0x305ae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305aec:
    // 0x305aec: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
label_305af0:
    if (ctx->pc == 0x305AF0u) {
        ctx->pc = 0x305AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AECu;
        // 0x305af0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AF4u;
        goto label_305af4;
    }
    ctx->pc = 0x305AECu;
    {
        const bool branch_taken_0x305aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AECu;
        // 0x305af0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305aec) {
            ctx->pc = 0x305BF4u;
            goto label_305bf4;
        }
    }
    ctx->pc = 0x305AF4u;
label_305af4:
    // 0x305af4: 0xc089018  jal         func_224060
label_305af8:
    if (ctx->pc == 0x305AF8u) {
        ctx->pc = 0x305AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AF4u;
        // 0x305af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AFCu;
        goto label_305afc;
    }
    ctx->pc = 0x305AF4u;
    SET_GPR_U32(ctx, 31, 0x305AFCu);
    ctx->pc = 0x305AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AF4u;
    // 0x305af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x305AF4u, 0x305AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AFCu;
label_305afc:
    // 0x305afc: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x305afcu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_305b00:
    // 0x305b00: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_305b04:
    if (ctx->pc == 0x305B04u) {
        ctx->pc = 0x305B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B00u;
        // 0x305b04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B08u;
        goto label_305b08;
    }
    ctx->pc = 0x305B00u;
    {
        const bool branch_taken_0x305b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B00u;
        // 0x305b04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b00) {
            ctx->pc = 0x305BF4u;
            goto label_305bf4;
        }
    }
    ctx->pc = 0x305B08u;
label_305b08:
    // 0x305b08: 0xc08a08a  jal         func_228228
label_305b0c:
    if (ctx->pc == 0x305B0Cu) {
        ctx->pc = 0x305B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B08u;
        // 0x305b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B10u;
        goto label_305b10;
    }
    ctx->pc = 0x305B08u;
    SET_GPR_U32(ctx, 31, 0x305B10u);
    ctx->pc = 0x305B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B08u;
    // 0x305b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x305B08u, 0x305B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B10u;
label_305b10:
    // 0x305b10: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_305b14:
    if (ctx->pc == 0x305B14u) {
        ctx->pc = 0x305B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B10u;
        // 0x305b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B18u;
        goto label_305b18;
    }
    ctx->pc = 0x305B10u;
    {
        const bool branch_taken_0x305b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B10u;
        // 0x305b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b10) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B18u;
label_305b18:
    // 0x305b18: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x305b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_305b1c:
    // 0x305b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305b20:
    // 0x305b20: 0xc089998  jal         func_226660
label_305b24:
    if (ctx->pc == 0x305B24u) {
        ctx->pc = 0x305B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B20u;
        // 0x305b24: 0x34a5ee60  ori         $a1, $a1, 0xEE60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B28u;
        goto label_305b28;
    }
    ctx->pc = 0x305B20u;
    SET_GPR_U32(ctx, 31, 0x305B28u);
    ctx->pc = 0x305B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B20u;
    // 0x305b24: 0x34a5ee60  ori         $a1, $a1, 0xEE60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x305B20u, 0x305B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B28u;
label_305b28:
    // 0x305b28: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_305b2c:
    if (ctx->pc == 0x305B2Cu) {
        ctx->pc = 0x305B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B28u;
        // 0x305b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B30u;
        goto label_305b30;
    }
    ctx->pc = 0x305B28u;
    {
        const bool branch_taken_0x305b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B28u;
        // 0x305b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b28) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B30u;
label_305b30:
    // 0x305b30: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x305b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_305b34:
    // 0x305b34: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x305b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_305b38:
    // 0x305b38: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_305b3c:
    if (ctx->pc == 0x305B3Cu) {
        ctx->pc = 0x305B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B38u;
        // 0x305b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B40u;
        goto label_305b40;
    }
    ctx->pc = 0x305B38u;
    {
        const bool branch_taken_0x305b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b38) {
            ctx->pc = 0x305B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B38u;
            // 0x305b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B40u;
label_305b40:
    // 0x305b40: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_305b44:
    if (ctx->pc == 0x305B44u) {
        ctx->pc = 0x305B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B40u;
        // 0x305b44: 0x922202e5  lbu         $v0, 0x2E5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B48u;
        goto label_305b48;
    }
    ctx->pc = 0x305B40u;
    {
        const bool branch_taken_0x305b40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b40) {
            ctx->pc = 0x305B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B40u;
            // 0x305b44: 0x922202e5  lbu         $v0, 0x2E5($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B54u;
            goto label_305b54;
        }
    }
    ctx->pc = 0x305B48u;
label_305b48:
    // 0x305b48: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
label_305b4c:
    if (ctx->pc == 0x305B4Cu) {
        ctx->pc = 0x305B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B48u;
        // 0x305b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B50u;
        goto label_305b50;
    }
    ctx->pc = 0x305B48u;
    {
        const bool branch_taken_0x305b48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B48u;
        // 0x305b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b48) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B50u;
label_305b50:
    // 0x305b50: 0x922202e5  lbu         $v0, 0x2E5($s1)
    ctx->pc = 0x305b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
label_305b54:
    // 0x305b54: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_305b58:
    if (ctx->pc == 0x305B58u) {
        ctx->pc = 0x305B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B54u;
        // 0x305b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B5Cu;
        goto label_305b5c;
    }
    ctx->pc = 0x305B54u;
    {
        const bool branch_taken_0x305b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B54u;
        // 0x305b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b54) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B5Cu;
label_305b5c:
    // 0x305b5c: 0xc08a08a  jal         func_228228
label_305b60:
    if (ctx->pc == 0x305B60u) {
        ctx->pc = 0x305B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B5Cu;
        // 0x305b60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B64u;
        goto label_305b64;
    }
    ctx->pc = 0x305B5Cu;
    SET_GPR_U32(ctx, 31, 0x305B64u);
    ctx->pc = 0x305B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B5Cu;
    // 0x305b60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x305B5Cu, 0x305B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B64u;
label_305b64:
    // 0x305b64: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_305b68:
    if (ctx->pc == 0x305B68u) {
        ctx->pc = 0x305B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B64u;
        // 0x305b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B6Cu;
        goto label_305b6c;
    }
    ctx->pc = 0x305B64u;
    {
        const bool branch_taken_0x305b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B64u;
        // 0x305b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b64) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B6Cu;
label_305b6c:
    // 0x305b6c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x305b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_305b70:
    // 0x305b70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305b74:
    // 0x305b74: 0xc089998  jal         func_226660
label_305b78:
    if (ctx->pc == 0x305B78u) {
        ctx->pc = 0x305B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B74u;
        // 0x305b78: 0x34a5ee60  ori         $a1, $a1, 0xEE60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B7Cu;
        goto label_305b7c;
    }
    ctx->pc = 0x305B74u;
    SET_GPR_U32(ctx, 31, 0x305B7Cu);
    ctx->pc = 0x305B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B74u;
    // 0x305b78: 0x34a5ee60  ori         $a1, $a1, 0xEE60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x305B74u, 0x305B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B7Cu;
label_305b7c:
    // 0x305b7c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_305b80:
    if (ctx->pc == 0x305B80u) {
        ctx->pc = 0x305B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B7Cu;
        // 0x305b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B84u;
        goto label_305b84;
    }
    ctx->pc = 0x305B7Cu;
    {
        const bool branch_taken_0x305b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B7Cu;
        // 0x305b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b7c) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B84u;
label_305b84:
    // 0x305b84: 0x8ee201a8  lw          $v0, 0x1A8($s7)
    ctx->pc = 0x305b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 424)));
label_305b88:
    // 0x305b88: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_305b8c:
    if (ctx->pc == 0x305B8Cu) {
        ctx->pc = 0x305B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B88u;
        // 0x305b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B90u;
        goto label_305b90;
    }
    ctx->pc = 0x305B88u;
    {
        const bool branch_taken_0x305b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B88u;
        // 0x305b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b88) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305B90u;
label_305b90:
    // 0x305b90: 0xc087502  jal         func_21D408
label_305b94:
    if (ctx->pc == 0x305B94u) {
        ctx->pc = 0x305B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B90u;
        // 0x305b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B98u;
        goto label_305b98;
    }
    ctx->pc = 0x305B90u;
    SET_GPR_U32(ctx, 31, 0x305B98u);
    ctx->pc = 0x305B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B90u;
    // 0x305b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x305B90u, 0x305B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B98u;
label_305b98:
    // 0x305b98: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x305b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_305b9c:
    // 0x305b9c: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x305b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_305ba0:
    // 0x305ba0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_305ba4:
    if (ctx->pc == 0x305BA4u) {
        ctx->pc = 0x305BA8u;
        goto label_305ba8;
    }
    ctx->pc = 0x305BA0u;
    {
        const bool branch_taken_0x305ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305ba0) {
            ctx->pc = 0x305BB4u;
            goto label_305bb4;
        }
    }
    ctx->pc = 0x305BA8u;
label_305ba8:
    // 0x305ba8: 0x92220121  lbu         $v0, 0x121($s1)
    ctx->pc = 0x305ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 289)));
label_305bac:
    // 0x305bac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_305bb0:
    if (ctx->pc == 0x305BB0u) {
        ctx->pc = 0x305BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BACu;
        // 0x305bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BB4u;
        goto label_305bb4;
    }
    ctx->pc = 0x305BACu;
    {
        const bool branch_taken_0x305bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BACu;
        // 0x305bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bac) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305BB4u;
label_305bb4:
    // 0x305bb4: 0xc136b80  jal         func_4DAE00
label_305bb8:
    if (ctx->pc == 0x305BB8u) {
        ctx->pc = 0x305BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BB4u;
        // 0x305bb8: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BBCu;
        goto label_305bbc;
    }
    ctx->pc = 0x305BB4u;
    SET_GPR_U32(ctx, 31, 0x305BBCu);
    ctx->pc = 0x305BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BB4u;
    // 0x305bb8: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x305BB4u, 0x305BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BBCu;
label_305bbc:
    // 0x305bbc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_305bc0:
    if (ctx->pc == 0x305BC0u) {
        ctx->pc = 0x305BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BBCu;
        // 0x305bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BC4u;
        goto label_305bc4;
    }
    ctx->pc = 0x305BBCu;
    {
        const bool branch_taken_0x305bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BBCu;
        // 0x305bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bbc) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305BC4u;
label_305bc4:
    // 0x305bc4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x305bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305bc8:
    // 0x305bc8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x305bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_305bcc:
    // 0x305bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305bd0:
    // 0x305bd0: 0x0  nop
    ctx->pc = 0x305bd0u;
    // NOP
label_305bd4:
    // 0x305bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x305bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305bd8:
    // 0x305bd8: 0x0  nop
    ctx->pc = 0x305bd8u;
    // NOP
label_305bdc:
    // 0x305bdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_305be0:
    if (ctx->pc == 0x305BE0u) {
        ctx->pc = 0x305BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BDCu;
        // 0x305be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BE4u;
        goto label_305be4;
    }
    ctx->pc = 0x305BDCu;
    {
        const bool branch_taken_0x305bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BDCu;
        // 0x305be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bdc) {
            ctx->pc = 0x305BF8u;
            goto label_305bf8;
        }
    }
    ctx->pc = 0x305BE4u;
label_305be4:
    // 0x305be4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x305be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305be8:
    // 0x305be8: 0xc099cb4  jal         func_2672D0
label_305bec:
    if (ctx->pc == 0x305BECu) {
        ctx->pc = 0x305BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BE8u;
        // 0x305bec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BF0u;
        goto label_305bf0;
    }
    ctx->pc = 0x305BE8u;
    SET_GPR_U32(ctx, 31, 0x305BF0u);
    ctx->pc = 0x305BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BE8u;
    // 0x305bec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x305BE8u, 0x305BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BF0u;
label_305bf0:
    // 0x305bf0: 0x2c530001  sltiu       $s3, $v0, 0x1
    ctx->pc = 0x305bf0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_305bf4:
    // 0x305bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305bf8:
    // 0x305bf8: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_305bfc:
    if (ctx->pc == 0x305BFCu) {
        ctx->pc = 0x305BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BF8u;
        // 0x305bfc: 0xa2f301b2  sb          $s3, 0x1B2($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 434), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C00u;
        goto label_305c00;
    }
    ctx->pc = 0x305BF8u;
    {
        const bool branch_taken_0x305bf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x305BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BF8u;
        // 0x305bfc: 0xa2f301b2  sb          $s3, 0x1B2($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 434), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bf8) {
            ctx->pc = 0x305C30u;
            goto label_305c30;
        }
    }
    ctx->pc = 0x305C00u;
label_305c00:
    // 0x305c00: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_305c04:
    if (ctx->pc == 0x305C04u) {
        ctx->pc = 0x305C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C00u;
        // 0x305c04: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C08u;
        goto label_305c08;
    }
    ctx->pc = 0x305C00u;
    {
        const bool branch_taken_0x305c00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C00u;
        // 0x305c04: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c00) {
            ctx->pc = 0x305C14u;
            goto label_305c14;
        }
    }
    ctx->pc = 0x305C08u;
label_305c08:
    // 0x305c08: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_305c0c:
    if (ctx->pc == 0x305C0Cu) {
        ctx->pc = 0x305C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C08u;
        // 0x305c0c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C10u;
        goto label_305c10;
    }
    ctx->pc = 0x305C08u;
    {
        const bool branch_taken_0x305c08 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x305C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C08u;
        // 0x305c0c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c08) {
            ctx->pc = 0x305C1Cu;
            goto label_305c1c;
        }
    }
    ctx->pc = 0x305C10u;
label_305c10:
    // 0x305c10: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x305c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_305c14:
    // 0x305c14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x305c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_305c18:
    // 0x305c18: 0x52200b  movn        $a0, $v0, $s2
    ctx->pc = 0x305c18u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_305c1c:
    // 0x305c1c: 0xc067b9c  jal         func_19EE70
label_305c20:
    if (ctx->pc == 0x305C20u) {
        ctx->pc = 0x305C24u;
        goto label_305c24;
    }
    ctx->pc = 0x305C1Cu;
    SET_GPR_U32(ctx, 31, 0x305C24u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x305C1Cu, 0x305C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C24u;
label_305c24:
    // 0x305c24: 0x26e300e8  addiu       $v1, $s7, 0xE8
    ctx->pc = 0x305c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 232));
label_305c28:
    // 0x305c28: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x305c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_305c2c:
    // 0x305c2c: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x305c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
label_305c30:
    // 0x305c30: 0x8e2502dc  lw          $a1, 0x2DC($s1)
    ctx->pc = 0x305c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_305c34:
    // 0x305c34: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_305c38:
    if (ctx->pc == 0x305C38u) {
        ctx->pc = 0x305C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C34u;
        // 0x305c38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C3Cu;
        goto label_305c3c;
    }
    ctx->pc = 0x305C34u;
    {
        const bool branch_taken_0x305c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C34u;
        // 0x305c38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c34) {
            ctx->pc = 0x305C58u;
            goto label_305c58;
        }
    }
    ctx->pc = 0x305C3Cu;
label_305c3c:
    // 0x305c3c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x305c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_305c40:
    // 0x305c40: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x305c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_305c44:
    // 0x305c44: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x305c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_305c48:
    // 0x305c48: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_305c4c:
    if (ctx->pc == 0x305C4Cu) {
        ctx->pc = 0x305C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C48u;
        // 0x305c4c: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C50u;
        goto label_305c50;
    }
    ctx->pc = 0x305C48u;
    {
        const bool branch_taken_0x305c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c48) {
            ctx->pc = 0x305C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C48u;
            // 0x305c4c: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305C5Cu;
            goto label_305c5c;
        }
    }
    ctx->pc = 0x305C50u;
label_305c50:
    // 0x305c50: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x305c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_305c54:
    // 0x305c54: 0xa22002e4  sb          $zero, 0x2E4($s1)
    ctx->pc = 0x305c54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 0));
label_305c58:
    // 0x305c58: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x305c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_305c5c:
    // 0x305c5c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x305c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_305c60:
    // 0x305c60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_305c64:
    if (ctx->pc == 0x305C64u) {
        ctx->pc = 0x305C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C60u;
        // 0x305c64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C68u;
        goto label_305c68;
    }
    ctx->pc = 0x305C60u;
    {
        const bool branch_taken_0x305c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c60) {
            ctx->pc = 0x305C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C60u;
            // 0x305c64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305C68u;
            goto label_305c68;
        }
    }
    ctx->pc = 0x305C68u;
label_305c68:
    // 0x305c68: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x305c68u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_305c6c:
    // 0x305c6c: 0x1810  mfhi        $v1
    ctx->pc = 0x305c6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_305c70:
    // 0x305c70: 0x546000e7  bnel        $v1, $zero, . + 4 + (0xE7 << 2)
label_305c74:
    if (ctx->pc == 0x305C74u) {
        ctx->pc = 0x305C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C70u;
        // 0x305c74: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C78u;
        goto label_305c78;
    }
    ctx->pc = 0x305C70u;
    {
        const bool branch_taken_0x305c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305c70) {
            ctx->pc = 0x305C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C70u;
            // 0x305c74: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305C78u;
label_305c78:
    // 0x305c78: 0xc08a0d0  jal         func_228340
label_305c7c:
    if (ctx->pc == 0x305C7Cu) {
        ctx->pc = 0x305C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C78u;
        // 0x305c7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C80u;
        goto label_305c80;
    }
    ctx->pc = 0x305C78u;
    SET_GPR_U32(ctx, 31, 0x305C80u);
    ctx->pc = 0x305C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C78u;
    // 0x305c7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x305C78u, 0x305C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C80u;
label_305c80:
    // 0x305c80: 0x544000e3  bnel        $v0, $zero, . + 4 + (0xE3 << 2)
label_305c84:
    if (ctx->pc == 0x305C84u) {
        ctx->pc = 0x305C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C80u;
        // 0x305c84: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C88u;
        goto label_305c88;
    }
    ctx->pc = 0x305C80u;
    {
        const bool branch_taken_0x305c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305c80) {
            ctx->pc = 0x305C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C80u;
            // 0x305c84: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305C88u;
label_305c88:
    // 0x305c88: 0xc08a05a  jal         func_228168
label_305c8c:
    if (ctx->pc == 0x305C8Cu) {
        ctx->pc = 0x305C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C88u;
        // 0x305c8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C90u;
        goto label_305c90;
    }
    ctx->pc = 0x305C88u;
    SET_GPR_U32(ctx, 31, 0x305C90u);
    ctx->pc = 0x305C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C88u;
    // 0x305c8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x305C88u, 0x305C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C90u;
label_305c90:
    // 0x305c90: 0x544000df  bnel        $v0, $zero, . + 4 + (0xDF << 2)
label_305c94:
    if (ctx->pc == 0x305C94u) {
        ctx->pc = 0x305C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C90u;
        // 0x305c94: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C98u;
        goto label_305c98;
    }
    ctx->pc = 0x305C90u;
    {
        const bool branch_taken_0x305c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305c90) {
            ctx->pc = 0x305C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C90u;
            // 0x305c94: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305C98u;
label_305c98:
    // 0x305c98: 0xc08a096  jal         func_228258
label_305c9c:
    if (ctx->pc == 0x305C9Cu) {
        ctx->pc = 0x305C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C98u;
        // 0x305c9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CA0u;
        goto label_305ca0;
    }
    ctx->pc = 0x305C98u;
    SET_GPR_U32(ctx, 31, 0x305CA0u);
    ctx->pc = 0x305C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C98u;
    // 0x305c9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x305C98u, 0x305CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CA0u;
label_305ca0:
    // 0x305ca0: 0x544000db  bnel        $v0, $zero, . + 4 + (0xDB << 2)
label_305ca4:
    if (ctx->pc == 0x305CA4u) {
        ctx->pc = 0x305CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CA0u;
        // 0x305ca4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CA8u;
        goto label_305ca8;
    }
    ctx->pc = 0x305CA0u;
    {
        const bool branch_taken_0x305ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305ca0) {
            ctx->pc = 0x305CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305CA0u;
            // 0x305ca4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305CA8u;
label_305ca8:
    // 0x305ca8: 0xc08a08a  jal         func_228228
label_305cac:
    if (ctx->pc == 0x305CACu) {
        ctx->pc = 0x305CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CA8u;
        // 0x305cac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CB0u;
        goto label_305cb0;
    }
    ctx->pc = 0x305CA8u;
    SET_GPR_U32(ctx, 31, 0x305CB0u);
    ctx->pc = 0x305CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CA8u;
    // 0x305cac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x305CA8u, 0x305CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CB0u;
label_305cb0:
    // 0x305cb0: 0x544000d7  bnel        $v0, $zero, . + 4 + (0xD7 << 2)
label_305cb4:
    if (ctx->pc == 0x305CB4u) {
        ctx->pc = 0x305CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CB0u;
        // 0x305cb4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CB8u;
        goto label_305cb8;
    }
    ctx->pc = 0x305CB0u;
    {
        const bool branch_taken_0x305cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305cb0) {
            ctx->pc = 0x305CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305CB0u;
            // 0x305cb4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305CB8u;
label_305cb8:
    // 0x305cb8: 0xc088e88  jal         func_223A20
label_305cbc:
    if (ctx->pc == 0x305CBCu) {
        ctx->pc = 0x305CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CB8u;
        // 0x305cbc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CC0u;
        goto label_305cc0;
    }
    ctx->pc = 0x305CB8u;
    SET_GPR_U32(ctx, 31, 0x305CC0u);
    ctx->pc = 0x305CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CB8u;
    // 0x305cbc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x305CB8u, 0x305CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CC0u;
label_305cc0:
    // 0x305cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305cc4:
    // 0x305cc4: 0x544300d2  bnel        $v0, $v1, . + 4 + (0xD2 << 2)
label_305cc8:
    if (ctx->pc == 0x305CC8u) {
        ctx->pc = 0x305CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CC4u;
        // 0x305cc8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CCCu;
        goto label_305ccc;
    }
    ctx->pc = 0x305CC4u;
    {
        const bool branch_taken_0x305cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x305cc4) {
            ctx->pc = 0x305CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305CC4u;
            // 0x305cc8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305CCCu;
label_305ccc:
    // 0x305ccc: 0xc0e409a  jal         func_390268
label_305cd0:
    if (ctx->pc == 0x305CD0u) {
        ctx->pc = 0x305CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CCCu;
        // 0x305cd0: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CD4u;
        goto label_305cd4;
    }
    ctx->pc = 0x305CCCu;
    SET_GPR_U32(ctx, 31, 0x305CD4u);
    ctx->pc = 0x305CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CCCu;
    // 0x305cd0: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x305CCCu, 0x305CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CD4u;
label_305cd4:
    // 0x305cd4: 0x544000ce  bnel        $v0, $zero, . + 4 + (0xCE << 2)
label_305cd8:
    if (ctx->pc == 0x305CD8u) {
        ctx->pc = 0x305CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CD4u;
        // 0x305cd8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CDCu;
        goto label_305cdc;
    }
    ctx->pc = 0x305CD4u;
    {
        const bool branch_taken_0x305cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305cd4) {
            ctx->pc = 0x305CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305CD4u;
            // 0x305cd8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305CDCu;
label_305cdc:
    // 0x305cdc: 0xc136b80  jal         func_4DAE00
label_305ce0:
    if (ctx->pc == 0x305CE0u) {
        ctx->pc = 0x305CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CDCu;
        // 0x305ce0: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CE4u;
        goto label_305ce4;
    }
    ctx->pc = 0x305CDCu;
    SET_GPR_U32(ctx, 31, 0x305CE4u);
    ctx->pc = 0x305CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CDCu;
    // 0x305ce0: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x305CDCu, 0x305CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CE4u;
label_305ce4:
    // 0x305ce4: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
label_305ce8:
    if (ctx->pc == 0x305CE8u) {
        ctx->pc = 0x305CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE4u;
        // 0x305ce8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CECu;
        goto label_305cec;
    }
    ctx->pc = 0x305CE4u;
    {
        const bool branch_taken_0x305ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE4u;
        // 0x305ce8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ce4) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305CECu;
label_305cec:
    // 0x305cec: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x305cecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_305cf0:
    // 0x305cf0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_305cf4:
    if (ctx->pc == 0x305CF4u) {
        ctx->pc = 0x305CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CF0u;
        // 0x305cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CF8u;
        goto label_305cf8;
    }
    ctx->pc = 0x305CF0u;
    {
        const bool branch_taken_0x305cf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x305CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CF0u;
        // 0x305cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cf0) {
            ctx->pc = 0x305D08u;
            goto label_305d08;
        }
    }
    ctx->pc = 0x305CF8u;
label_305cf8:
    // 0x305cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_305cfc:
    // 0x305cfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x305cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_305d00:
    // 0x305d00: 0x10000002  b           . + 4 + (0x2 << 2)
label_305d04:
    if (ctx->pc == 0x305D04u) {
        ctx->pc = 0x305D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D00u;
        // 0x305d04: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D08u;
        goto label_305d08;
    }
    ctx->pc = 0x305D00u;
    {
        const bool branch_taken_0x305d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D00u;
        // 0x305d04: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d00) {
            ctx->pc = 0x305D0Cu;
            goto label_305d0c;
        }
    }
    ctx->pc = 0x305D08u;
label_305d08:
    // 0x305d08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x305d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d0c:
    // 0x305d0c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_305d10:
    if (ctx->pc == 0x305D10u) {
        ctx->pc = 0x305D14u;
        goto label_305d14;
    }
    ctx->pc = 0x305D0Cu;
    {
        const bool branch_taken_0x305d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d0c) {
            ctx->pc = 0x305D54u;
            goto label_305d54;
        }
    }
    ctx->pc = 0x305D14u;
label_305d14:
    // 0x305d14: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x305d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_305d18:
    // 0x305d18: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x305d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_305d1c:
    // 0x305d1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x305d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_305d20:
    // 0x305d20: 0x40f809  jalr        $v0
label_305d24:
    if (ctx->pc == 0x305D24u) {
        ctx->pc = 0x305D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D20u;
        // 0x305d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D28u;
        goto label_305d28;
    }
    ctx->pc = 0x305D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305D28u);
        ctx->pc = 0x305D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D20u;
        // 0x305d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305D20u, 0x305D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305D28u;
label_305d28:
    // 0x305d28: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x305d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_305d2c:
    // 0x305d2c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_305d30:
    if (ctx->pc == 0x305D30u) {
        ctx->pc = 0x305D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D2Cu;
        // 0x305d30: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D34u;
        goto label_305d34;
    }
    ctx->pc = 0x305D2Cu;
    {
        const bool branch_taken_0x305d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x305d2c) {
            ctx->pc = 0x305D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D2Cu;
            // 0x305d30: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D54u;
            goto label_305d54;
        }
    }
    ctx->pc = 0x305D34u;
label_305d34:
    // 0x305d34: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x305d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_305d38:
    // 0x305d38: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x305d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_305d3c:
    // 0x305d3c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x305d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_305d40:
    // 0x305d40: 0x40f809  jalr        $v0
label_305d44:
    if (ctx->pc == 0x305D44u) {
        ctx->pc = 0x305D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D40u;
        // 0x305d44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D48u;
        goto label_305d48;
    }
    ctx->pc = 0x305D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305D48u);
        ctx->pc = 0x305D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D40u;
        // 0x305d44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305D40u, 0x305D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305D48u;
label_305d48:
    // 0x305d48: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x305d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_305d4c:
    // 0x305d4c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_305d50:
    if (ctx->pc == 0x305D50u) {
        ctx->pc = 0x305D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D4Cu;
        // 0x305d50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D54u;
        goto label_305d54;
    }
    ctx->pc = 0x305D4Cu;
    {
        const bool branch_taken_0x305d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x305d4c) {
            ctx->pc = 0x305D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D4Cu;
            // 0x305d50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D54u;
            goto label_305d54;
        }
    }
    ctx->pc = 0x305D54u;
label_305d54:
    // 0x305d54: 0x164000ae  bnez        $s2, . + 4 + (0xAE << 2)
label_305d58:
    if (ctx->pc == 0x305D58u) {
        ctx->pc = 0x305D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D54u;
        // 0x305d58: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D5Cu;
        goto label_305d5c;
    }
    ctx->pc = 0x305D54u;
    {
        const bool branch_taken_0x305d54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x305D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D54u;
        // 0x305d58: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d54) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305D5Cu;
label_305d5c:
    // 0x305d5c: 0x26f00090  addiu       $s0, $s7, 0x90
    ctx->pc = 0x305d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
label_305d60:
    // 0x305d60: 0x27d24b00  addiu       $s2, $fp, 0x4B00
    ctx->pc = 0x305d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_305d64:
    // 0x305d64: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x305d64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_305d68:
    // 0x305d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x305d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_305d6c:
    // 0x305d6c: 0xc634013c  lwc1        $f20, 0x13C($s1)
    ctx->pc = 0x305d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_305d70:
    // 0x305d70: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x305d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305d74:
    // 0x305d74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x305d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_305d78:
    // 0x305d78: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x305d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305d7c:
    // 0x305d7c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_305d80:
    // 0x305d80: 0xc0cd8ec  jal         func_3363B0
label_305d84:
    if (ctx->pc == 0x305D84u) {
        ctx->pc = 0x305D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D80u;
        // 0x305d84: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D88u;
        goto label_305d88;
    }
    ctx->pc = 0x305D80u;
    SET_GPR_U32(ctx, 31, 0x305D88u);
    ctx->pc = 0x305D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D80u;
    // 0x305d84: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x305D80u, 0x305D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D88u;
label_305d88:
    // 0x305d88: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x305d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_305d8c:
    // 0x305d8c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_305d90:
    // 0x305d90: 0x7baa0000  lq          $t2, 0x0($sp)
    ctx->pc = 0x305d90u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_305d94:
    // 0x305d94: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_305d98:
    // 0x305d98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x305d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_305d9c:
    // 0x305d9c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x305d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_305da0:
    // 0x305da0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x305da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_305da4:
    // 0x305da4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x305da4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_305da8:
    // 0x305da8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x305da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_305dac:
    // 0x305dac: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x305dacu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
label_305db0:
    // 0x305db0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x305db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_305db4:
    // 0x305db4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x305db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_305db8:
    // 0x305db8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x305db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_305dbc:
    // 0x305dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305dc0:
    // 0x305dc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x305dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_305dc4:
    // 0x305dc4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x305dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_305dc8:
    // 0x305dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305dcc:
    // 0x305dcc: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x305dccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_305dd0:
    // 0x305dd0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x305dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_305dd4:
    // 0x305dd4: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x305dd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_305dd8:
    // 0x305dd8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x305dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_305ddc:
    // 0x305ddc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x305ddcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_305de0:
    // 0x305de0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x305de0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_305de4:
    // 0x305de4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x305de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_305de8:
    // 0x305de8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305dec:
    // 0x305dec: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x305decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_305df0:
    // 0x305df0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x305df0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_305df4:
    // 0x305df4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x305df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_305df8:
    // 0x305df8: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x305df8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_305dfc:
    // 0x305dfc: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x305dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_305e00:
    // 0x305e00: 0x7faa0040  sq          $t2, 0x40($sp)
    ctx->pc = 0x305e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
label_305e04:
    // 0x305e04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x305e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_305e08:
    // 0x305e08: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x305e08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_305e0c:
    // 0x305e0c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x305e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_305e10:
    // 0x305e10: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x305e10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_305e14:
    // 0x305e14: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x305e14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_305e18:
    // 0x305e18: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x305e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_305e1c:
    // 0x305e1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305e20:
    // 0x305e20: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x305e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_305e24:
    // 0x305e24: 0x27a80084  addiu       $t0, $sp, 0x84
    ctx->pc = 0x305e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_305e28:
    // 0x305e28: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x305e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
label_305e2c:
    // 0x305e2c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x305e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_305e30:
    // 0x305e30: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x305e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
label_305e34:
    // 0x305e34: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x305e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_305e38:
    // 0x305e38: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x305e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
label_305e3c:
    // 0x305e3c: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x305e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_305e40:
    // 0x305e40: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x305e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_305e44:
    // 0x305e44: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x305e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_305e48:
    // 0x305e48: 0xc0888dc  jal         func_222370
label_305e4c:
    if (ctx->pc == 0x305E4Cu) {
        ctx->pc = 0x305E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E48u;
        // 0x305e4c: 0xafb40084  sw          $s4, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E50u;
        goto label_305e50;
    }
    ctx->pc = 0x305E48u;
    SET_GPR_U32(ctx, 31, 0x305E50u);
    ctx->pc = 0x305E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E48u;
    // 0x305e4c: 0xafb40084  sw          $s4, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x305E48u, 0x305E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E50u;
label_305e50:
    // 0x305e50: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_305e54:
    if (ctx->pc == 0x305E54u) {
        ctx->pc = 0x305E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E50u;
        // 0x305e54: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E58u;
        goto label_305e58;
    }
    ctx->pc = 0x305E50u;
    {
        const bool branch_taken_0x305e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E50u;
        // 0x305e54: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e50) {
            ctx->pc = 0x305F28u;
            goto label_305f28;
        }
    }
    ctx->pc = 0x305E58u;
label_305e58:
    // 0x305e58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x305e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_305e5c:
    // 0x305e5c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x305e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_305e60:
    // 0x305e60: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x305e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_305e64:
    // 0x305e64: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x305e64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_305e68:
    // 0x305e68: 0xc1067b8  jal         func_419EE0
label_305e6c:
    if (ctx->pc == 0x305E6Cu) {
        ctx->pc = 0x305E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E68u;
        // 0x305e6c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E70u;
        goto label_305e70;
    }
    ctx->pc = 0x305E68u;
    SET_GPR_U32(ctx, 31, 0x305E70u);
    ctx->pc = 0x305E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E68u;
    // 0x305e6c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x305E68u, 0x305E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E70u;
label_305e70:
    // 0x305e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305e74:
    // 0x305e74: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_305e78:
    if (ctx->pc == 0x305E78u) {
        ctx->pc = 0x305E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E74u;
        // 0x305e78: 0xc7a10088  lwc1        $f1, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E7Cu;
        goto label_305e7c;
    }
    ctx->pc = 0x305E74u;
    {
        const bool branch_taken_0x305e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E74u;
        // 0x305e78: 0xc7a10088  lwc1        $f1, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e74) {
            ctx->pc = 0x305F24u;
            goto label_305f24;
        }
    }
    ctx->pc = 0x305E7Cu;
label_305e7c:
    // 0x305e7c: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x305e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_305e80:
    // 0x305e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305e84:
    // 0x305e84: 0x0  nop
    ctx->pc = 0x305e84u;
    // NOP
label_305e88:
    // 0x305e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x305e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305e8c:
    // 0x305e8c: 0x0  nop
    ctx->pc = 0x305e8cu;
    // NOP
label_305e90:
    // 0x305e90: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_305e94:
    if (ctx->pc == 0x305E94u) {
        ctx->pc = 0x305E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E90u;
        // 0x305e94: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E98u;
        goto label_305e98;
    }
    ctx->pc = 0x305E90u;
    {
        const bool branch_taken_0x305e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305e90) {
            ctx->pc = 0x305E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305E90u;
            // 0x305e94: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305F28u;
            goto label_305f28;
        }
    }
    ctx->pc = 0x305E98u;
label_305e98:
    // 0x305e98: 0x8222002e  lb          $v0, 0x2E($s1)
    ctx->pc = 0x305e98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_305e9c:
    // 0x305e9c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x305e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_305ea0:
    // 0x305ea0: 0x5454000e  bnel        $v0, $s4, . + 4 + (0xE << 2)
label_305ea4:
    if (ctx->pc == 0x305EA4u) {
        ctx->pc = 0x305EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EA0u;
        // 0x305ea4: 0x8222002e  lb          $v0, 0x2E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EA8u;
        goto label_305ea8;
    }
    ctx->pc = 0x305EA0u;
    {
        const bool branch_taken_0x305ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x305ea0) {
            ctx->pc = 0x305EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305EA0u;
            // 0x305ea4: 0x8222002e  lb          $v0, 0x2E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305EDCu;
            goto label_305edc;
        }
    }
    ctx->pc = 0x305EA8u;
label_305ea8:
    // 0x305ea8: 0xc0a36c2  jal         func_28DB08
label_305eac:
    if (ctx->pc == 0x305EACu) {
        ctx->pc = 0x305EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EA8u;
        // 0x305eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EB0u;
        goto label_305eb0;
    }
    ctx->pc = 0x305EA8u;
    SET_GPR_U32(ctx, 31, 0x305EB0u);
    ctx->pc = 0x305EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EA8u;
    // 0x305eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x305EA8u, 0x305EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EB0u;
label_305eb0:
    // 0x305eb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x305eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_305eb4:
    // 0x305eb4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x305eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_305eb8:
    // 0x305eb8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x305eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_305ebc:
    // 0x305ebc: 0xa0f809  jalr        $a1
label_305ec0:
    if (ctx->pc == 0x305EC0u) {
        ctx->pc = 0x305EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EBCu;
        // 0x305ec0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EC4u;
        goto label_305ec4;
    }
    ctx->pc = 0x305EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x305EC4u);
        ctx->pc = 0x305EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EBCu;
        // 0x305ec0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305EBCu, 0x305EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305EC4u;
label_305ec4:
    // 0x305ec4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x305ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_305ec8:
    // 0x305ec8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_305ecc:
    if (ctx->pc == 0x305ECCu) {
        ctx->pc = 0x305ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EC8u;
        // 0x305ecc: 0x8222002e  lb          $v0, 0x2E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305ED0u;
        goto label_305ed0;
    }
    ctx->pc = 0x305EC8u;
    {
        const bool branch_taken_0x305ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ec8) {
            ctx->pc = 0x305ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305EC8u;
            // 0x305ecc: 0x8222002e  lb          $v0, 0x2E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305EDCu;
            goto label_305edc;
        }
    }
    ctx->pc = 0x305ED0u;
label_305ed0:
    // 0x305ed0: 0xc0a36c8  jal         func_28DB20
label_305ed4:
    if (ctx->pc == 0x305ED4u) {
        ctx->pc = 0x305ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305ED0u;
        // 0x305ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305ED8u;
        goto label_305ed8;
    }
    ctx->pc = 0x305ED0u;
    SET_GPR_U32(ctx, 31, 0x305ED8u);
    ctx->pc = 0x305ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305ED0u;
    // 0x305ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x305ED0u, 0x305ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305ED8u;
label_305ed8:
    // 0x305ed8: 0x8222002e  lb          $v0, 0x2E($s1)
    ctx->pc = 0x305ed8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_305edc:
    // 0x305edc: 0x5c400012  bgtzl       $v0, . + 4 + (0x12 << 2)
label_305ee0:
    if (ctx->pc == 0x305EE0u) {
        ctx->pc = 0x305EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EDCu;
        // 0x305ee0: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EE4u;
        goto label_305ee4;
    }
    ctx->pc = 0x305EDCu;
    {
        const bool branch_taken_0x305edc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x305edc) {
            ctx->pc = 0x305EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305EDCu;
            // 0x305ee0: 0x86650002  lh          $a1, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305F28u;
            goto label_305f28;
        }
    }
    ctx->pc = 0x305EE4u;
label_305ee4:
    // 0x305ee4: 0xc0a367c  jal         func_28D9F0
label_305ee8:
    if (ctx->pc == 0x305EE8u) {
        ctx->pc = 0x305EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EE4u;
        // 0x305ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EECu;
        goto label_305eec;
    }
    ctx->pc = 0x305EE4u;
    SET_GPR_U32(ctx, 31, 0x305EECu);
    ctx->pc = 0x305EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EE4u;
    // 0x305ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x305EE4u, 0x305EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EECu;
label_305eec:
    // 0x305eec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305ef0:
    // 0x305ef0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_305ef4:
    if (ctx->pc == 0x305EF4u) {
        ctx->pc = 0x305EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EF0u;
        // 0x305ef4: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EF8u;
        goto label_305ef8;
    }
    ctx->pc = 0x305EF0u;
    {
        const bool branch_taken_0x305ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x305EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EF0u;
        // 0x305ef4: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ef0) {
            ctx->pc = 0x305F24u;
            goto label_305f24;
        }
    }
    ctx->pc = 0x305EF8u;
label_305ef8:
    // 0x305ef8: 0x86100092  lh          $s0, 0x92($s0)
    ctx->pc = 0x305ef8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_305efc:
    // 0x305efc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305f00:
    // 0x305f00: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x305f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_305f04:
    // 0x305f04: 0xc0884f6  jal         func_2213D8
label_305f08:
    if (ctx->pc == 0x305F08u) {
        ctx->pc = 0x305F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F04u;
        // 0x305f08: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F0Cu;
        goto label_305f0c;
    }
    ctx->pc = 0x305F04u;
    SET_GPR_U32(ctx, 31, 0x305F0Cu);
    ctx->pc = 0x305F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F04u;
    // 0x305f08: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x305F04u, 0x305F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F0Cu;
label_305f0c:
    // 0x305f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x305f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305f10:
    // 0x305f10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x305f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305f14:
    // 0x305f14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x305f14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_305f18:
    // 0x305f18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305f1c:
    // 0x305f1c: 0xc0bf800  jal         func_2FE000
label_305f20:
    if (ctx->pc == 0x305F20u) {
        ctx->pc = 0x305F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F1Cu;
        // 0x305f20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F24u;
        goto label_305f24;
    }
    ctx->pc = 0x305F1Cu;
    SET_GPR_U32(ctx, 31, 0x305F24u);
    ctx->pc = 0x305F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F1Cu;
    // 0x305f20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x305F1Cu, 0x305F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F24u;
label_305f24:
    // 0x305f24: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x305f24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_305f28:
    // 0x305f28: 0x27d44b00  addiu       $s4, $fp, 0x4B00
    ctx->pc = 0x305f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_305f2c:
    // 0x305f2c: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x305f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_305f30:
    // 0x305f30: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x305f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_305f34:
    // 0x305f34: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x305f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_305f38:
    // 0x305f38: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x305f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_305f3c:
    // 0x305f3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305f40:
    // 0x305f40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x305f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_305f44:
    // 0x305f44: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x305f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_305f48:
    // 0x305f48: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x305f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_305f4c:
    // 0x305f4c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x305f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_305f50:
    // 0x305f50: 0xc136d6c  jal         func_4DB5B0
label_305f54:
    if (ctx->pc == 0x305F54u) {
        ctx->pc = 0x305F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F50u;
        // 0x305f54: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F58u;
        goto label_305f58;
    }
    ctx->pc = 0x305F50u;
    SET_GPR_U32(ctx, 31, 0x305F58u);
    ctx->pc = 0x305F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F50u;
    // 0x305f54: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x305F50u, 0x305F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F58u;
label_305f58:
    // 0x305f58: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x305f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_305f5c:
    // 0x305f5c: 0xc0e409a  jal         func_390268
label_305f60:
    if (ctx->pc == 0x305F60u) {
        ctx->pc = 0x305F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F5Cu;
        // 0x305f60: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F64u;
        goto label_305f64;
    }
    ctx->pc = 0x305F5Cu;
    SET_GPR_U32(ctx, 31, 0x305F64u);
    ctx->pc = 0x305F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F5Cu;
    // 0x305f60: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x305F5Cu, 0x305F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F64u;
label_305f64:
    // 0x305f64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305f68:
    // 0x305f68: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_305f6c:
    if (ctx->pc == 0x305F6Cu) {
        ctx->pc = 0x305F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F68u;
        // 0x305f6c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F70u;
        goto label_305f70;
    }
    ctx->pc = 0x305F68u;
    {
        const bool branch_taken_0x305f68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F68u;
        // 0x305f6c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f68) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305F70u;
label_305f70:
    // 0x305f70: 0xc08a096  jal         func_228258
label_305f74:
    if (ctx->pc == 0x305F74u) {
        ctx->pc = 0x305F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F70u;
        // 0x305f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F78u;
        goto label_305f78;
    }
    ctx->pc = 0x305F70u;
    SET_GPR_U32(ctx, 31, 0x305F78u);
    ctx->pc = 0x305F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F70u;
    // 0x305f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x305F70u, 0x305F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F78u;
label_305f78:
    // 0x305f78: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_305f7c:
    if (ctx->pc == 0x305F7Cu) {
        ctx->pc = 0x305F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F78u;
        // 0x305f7c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F80u;
        goto label_305f80;
    }
    ctx->pc = 0x305F78u;
    {
        const bool branch_taken_0x305f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F78u;
        // 0x305f7c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f78) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305F80u;
label_305f80:
    // 0x305f80: 0xc08a08a  jal         func_228228
label_305f84:
    if (ctx->pc == 0x305F84u) {
        ctx->pc = 0x305F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F80u;
        // 0x305f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F88u;
        goto label_305f88;
    }
    ctx->pc = 0x305F80u;
    SET_GPR_U32(ctx, 31, 0x305F88u);
    ctx->pc = 0x305F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F80u;
    // 0x305f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x305F80u, 0x305F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F88u;
label_305f88:
    // 0x305f88: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_305f8c:
    if (ctx->pc == 0x305F8Cu) {
        ctx->pc = 0x305F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F88u;
        // 0x305f8c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F90u;
        goto label_305f90;
    }
    ctx->pc = 0x305F88u;
    {
        const bool branch_taken_0x305f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F88u;
        // 0x305f8c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f88) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305F90u;
label_305f90:
    // 0x305f90: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x305f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305f94:
    // 0x305f94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_305f98:
    // 0x305f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305f9c:
    // 0x305f9c: 0x0  nop
    ctx->pc = 0x305f9cu;
    // NOP
label_305fa0:
    // 0x305fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x305fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305fa4:
    // 0x305fa4: 0x0  nop
    ctx->pc = 0x305fa4u;
    // NOP
label_305fa8:
    // 0x305fa8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_305fac:
    if (ctx->pc == 0x305FACu) {
        ctx->pc = 0x305FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FA8u;
        // 0x305fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FB0u;
        goto label_305fb0;
    }
    ctx->pc = 0x305FA8u;
    {
        const bool branch_taken_0x305fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FA8u;
        // 0x305fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fa8) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305FB0u;
label_305fb0:
    // 0x305fb0: 0xc0a3658  jal         func_28D960
label_305fb4:
    if (ctx->pc == 0x305FB4u) {
        ctx->pc = 0x305FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FB0u;
        // 0x305fb4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FB8u;
        goto label_305fb8;
    }
    ctx->pc = 0x305FB0u;
    SET_GPR_U32(ctx, 31, 0x305FB8u);
    ctx->pc = 0x305FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FB0u;
    // 0x305fb4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x305FB0u, 0x305FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FB8u;
label_305fb8:
    // 0x305fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305fbc:
    // 0x305fbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_305fc0:
    // 0x305fc0: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_305fc4:
    if (ctx->pc == 0x305FC4u) {
        ctx->pc = 0x305FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FC0u;
        // 0x305fc4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FC8u;
        goto label_305fc8;
    }
    ctx->pc = 0x305FC0u;
    {
        const bool branch_taken_0x305fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x305fc0) {
            ctx->pc = 0x305FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305FC0u;
            // 0x305fc4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305FC8u;
label_305fc8:
    // 0x305fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305fcc:
    // 0x305fcc: 0xc0a3658  jal         func_28D960
label_305fd0:
    if (ctx->pc == 0x305FD0u) {
        ctx->pc = 0x305FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FCCu;
        // 0x305fd0: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FD4u;
        goto label_305fd4;
    }
    ctx->pc = 0x305FCCu;
    SET_GPR_U32(ctx, 31, 0x305FD4u);
    ctx->pc = 0x305FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FCCu;
    // 0x305fd0: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x305FCCu, 0x305FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FD4u;
label_305fd4:
    // 0x305fd4: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
label_305fd8:
    if (ctx->pc == 0x305FD8u) {
        ctx->pc = 0x305FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FD4u;
        // 0x305fd8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FDCu;
        goto label_305fdc;
    }
    ctx->pc = 0x305FD4u;
    {
        const bool branch_taken_0x305fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x305FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FD4u;
        // 0x305fd8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fd4) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305FDCu;
label_305fdc:
    // 0x305fdc: 0xc087502  jal         func_21D408
label_305fe0:
    if (ctx->pc == 0x305FE0u) {
        ctx->pc = 0x305FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FDCu;
        // 0x305fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FE4u;
        goto label_305fe4;
    }
    ctx->pc = 0x305FDCu;
    SET_GPR_U32(ctx, 31, 0x305FE4u);
    ctx->pc = 0x305FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FDCu;
    // 0x305fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x305FDCu, 0x305FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FE4u;
label_305fe4:
    // 0x305fe4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x305fe4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_305fe8:
    // 0x305fe8: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
label_305fec:
    if (ctx->pc == 0x305FECu) {
        ctx->pc = 0x305FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FE8u;
        // 0x305fec: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FF0u;
        goto label_305ff0;
    }
    ctx->pc = 0x305FE8u;
    {
        const bool branch_taken_0x305fe8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x305FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FE8u;
        // 0x305fec: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fe8) {
            ctx->pc = 0x306010u;
            goto label_306010;
        }
    }
    ctx->pc = 0x305FF0u;
label_305ff0:
    // 0x305ff0: 0x86660002  lh          $a2, 0x2($s3)
    ctx->pc = 0x305ff0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_305ff4:
    // 0x305ff4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_305ff8:
    // 0x305ff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x305ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305ffc:
    // 0x305ffc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x305ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306000:
    // 0x306000: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x306000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_306004:
    // 0x306004: 0xc0a2892  jal         func_28A248
label_306008:
    if (ctx->pc == 0x306008u) {
        ctx->pc = 0x306008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306004u;
        // 0x306008: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30600Cu;
        goto label_30600c;
    }
    ctx->pc = 0x306004u;
    SET_GPR_U32(ctx, 31, 0x30600Cu);
    ctx->pc = 0x306008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306004u;
    // 0x306008: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x306004u, 0x30600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30600Cu;
label_30600c:
    // 0x30600c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x30600cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_306010:
    // 0x306010: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x306010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_306014:
    // 0x306014: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x306014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_306018:
    // 0x306018: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x306018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_30601c:
    // 0x30601c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x30601cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_306020:
    // 0x306020: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x306020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_306024:
    // 0x306024: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x306024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_306028:
    // 0x306028: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x306028u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_30602c:
    // 0x30602c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x30602cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_306030:
    // 0x306030: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x306030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_306034:
    // 0x306034: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x306034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_306038:
    // 0x306038: 0x3e00008  jr          $ra
label_30603c:
    if (ctx->pc == 0x30603Cu) {
        ctx->pc = 0x30603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306038u;
        // 0x30603c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306040u;
        goto label_fallthrough_0x306038;
    }
    ctx->pc = 0x306038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306038u;
        // 0x30603c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306038:
    ctx->pc = 0x306040u;
}
