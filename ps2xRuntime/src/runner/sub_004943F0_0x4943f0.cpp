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

// Function: sub_004943F0
// Address: 0x4943f0 - 0x494c60
void sub_004943F0_0x4943f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004943F0_0x4943f0");
#endif

    switch (ctx->pc) {
        case 0x4943f0u: goto label_4943f0;
        case 0x4943f4u: goto label_4943f4;
        case 0x4943f8u: goto label_4943f8;
        case 0x4943fcu: goto label_4943fc;
        case 0x494400u: goto label_494400;
        case 0x494404u: goto label_494404;
        case 0x494408u: goto label_494408;
        case 0x49440cu: goto label_49440c;
        case 0x494410u: goto label_494410;
        case 0x494414u: goto label_494414;
        case 0x494418u: goto label_494418;
        case 0x49441cu: goto label_49441c;
        case 0x494420u: goto label_494420;
        case 0x494424u: goto label_494424;
        case 0x494428u: goto label_494428;
        case 0x49442cu: goto label_49442c;
        case 0x494430u: goto label_494430;
        case 0x494434u: goto label_494434;
        case 0x494438u: goto label_494438;
        case 0x49443cu: goto label_49443c;
        case 0x494440u: goto label_494440;
        case 0x494444u: goto label_494444;
        case 0x494448u: goto label_494448;
        case 0x49444cu: goto label_49444c;
        case 0x494450u: goto label_494450;
        case 0x494454u: goto label_494454;
        case 0x494458u: goto label_494458;
        case 0x49445cu: goto label_49445c;
        case 0x494460u: goto label_494460;
        case 0x494464u: goto label_494464;
        case 0x494468u: goto label_494468;
        case 0x49446cu: goto label_49446c;
        case 0x494470u: goto label_494470;
        case 0x494474u: goto label_494474;
        case 0x494478u: goto label_494478;
        case 0x49447cu: goto label_49447c;
        case 0x494480u: goto label_494480;
        case 0x494484u: goto label_494484;
        case 0x494488u: goto label_494488;
        case 0x49448cu: goto label_49448c;
        case 0x494490u: goto label_494490;
        case 0x494494u: goto label_494494;
        case 0x494498u: goto label_494498;
        case 0x49449cu: goto label_49449c;
        case 0x4944a0u: goto label_4944a0;
        case 0x4944a4u: goto label_4944a4;
        case 0x4944a8u: goto label_4944a8;
        case 0x4944acu: goto label_4944ac;
        case 0x4944b0u: goto label_4944b0;
        case 0x4944b4u: goto label_4944b4;
        case 0x4944b8u: goto label_4944b8;
        case 0x4944bcu: goto label_4944bc;
        case 0x4944c0u: goto label_4944c0;
        case 0x4944c4u: goto label_4944c4;
        case 0x4944c8u: goto label_4944c8;
        case 0x4944ccu: goto label_4944cc;
        case 0x4944d0u: goto label_4944d0;
        case 0x4944d4u: goto label_4944d4;
        case 0x4944d8u: goto label_4944d8;
        case 0x4944dcu: goto label_4944dc;
        case 0x4944e0u: goto label_4944e0;
        case 0x4944e4u: goto label_4944e4;
        case 0x4944e8u: goto label_4944e8;
        case 0x4944ecu: goto label_4944ec;
        case 0x4944f0u: goto label_4944f0;
        case 0x4944f4u: goto label_4944f4;
        case 0x4944f8u: goto label_4944f8;
        case 0x4944fcu: goto label_4944fc;
        case 0x494500u: goto label_494500;
        case 0x494504u: goto label_494504;
        case 0x494508u: goto label_494508;
        case 0x49450cu: goto label_49450c;
        case 0x494510u: goto label_494510;
        case 0x494514u: goto label_494514;
        case 0x494518u: goto label_494518;
        case 0x49451cu: goto label_49451c;
        case 0x494520u: goto label_494520;
        case 0x494524u: goto label_494524;
        case 0x494528u: goto label_494528;
        case 0x49452cu: goto label_49452c;
        case 0x494530u: goto label_494530;
        case 0x494534u: goto label_494534;
        case 0x494538u: goto label_494538;
        case 0x49453cu: goto label_49453c;
        case 0x494540u: goto label_494540;
        case 0x494544u: goto label_494544;
        case 0x494548u: goto label_494548;
        case 0x49454cu: goto label_49454c;
        case 0x494550u: goto label_494550;
        case 0x494554u: goto label_494554;
        case 0x494558u: goto label_494558;
        case 0x49455cu: goto label_49455c;
        case 0x494560u: goto label_494560;
        case 0x494564u: goto label_494564;
        case 0x494568u: goto label_494568;
        case 0x49456cu: goto label_49456c;
        case 0x494570u: goto label_494570;
        case 0x494574u: goto label_494574;
        case 0x494578u: goto label_494578;
        case 0x49457cu: goto label_49457c;
        case 0x494580u: goto label_494580;
        case 0x494584u: goto label_494584;
        case 0x494588u: goto label_494588;
        case 0x49458cu: goto label_49458c;
        case 0x494590u: goto label_494590;
        case 0x494594u: goto label_494594;
        case 0x494598u: goto label_494598;
        case 0x49459cu: goto label_49459c;
        case 0x4945a0u: goto label_4945a0;
        case 0x4945a4u: goto label_4945a4;
        case 0x4945a8u: goto label_4945a8;
        case 0x4945acu: goto label_4945ac;
        case 0x4945b0u: goto label_4945b0;
        case 0x4945b4u: goto label_4945b4;
        case 0x4945b8u: goto label_4945b8;
        case 0x4945bcu: goto label_4945bc;
        case 0x4945c0u: goto label_4945c0;
        case 0x4945c4u: goto label_4945c4;
        case 0x4945c8u: goto label_4945c8;
        case 0x4945ccu: goto label_4945cc;
        case 0x4945d0u: goto label_4945d0;
        case 0x4945d4u: goto label_4945d4;
        case 0x4945d8u: goto label_4945d8;
        case 0x4945dcu: goto label_4945dc;
        case 0x4945e0u: goto label_4945e0;
        case 0x4945e4u: goto label_4945e4;
        case 0x4945e8u: goto label_4945e8;
        case 0x4945ecu: goto label_4945ec;
        case 0x4945f0u: goto label_4945f0;
        case 0x4945f4u: goto label_4945f4;
        case 0x4945f8u: goto label_4945f8;
        case 0x4945fcu: goto label_4945fc;
        case 0x494600u: goto label_494600;
        case 0x494604u: goto label_494604;
        case 0x494608u: goto label_494608;
        case 0x49460cu: goto label_49460c;
        case 0x494610u: goto label_494610;
        case 0x494614u: goto label_494614;
        case 0x494618u: goto label_494618;
        case 0x49461cu: goto label_49461c;
        case 0x494620u: goto label_494620;
        case 0x494624u: goto label_494624;
        case 0x494628u: goto label_494628;
        case 0x49462cu: goto label_49462c;
        case 0x494630u: goto label_494630;
        case 0x494634u: goto label_494634;
        case 0x494638u: goto label_494638;
        case 0x49463cu: goto label_49463c;
        case 0x494640u: goto label_494640;
        case 0x494644u: goto label_494644;
        case 0x494648u: goto label_494648;
        case 0x49464cu: goto label_49464c;
        case 0x494650u: goto label_494650;
        case 0x494654u: goto label_494654;
        case 0x494658u: goto label_494658;
        case 0x49465cu: goto label_49465c;
        case 0x494660u: goto label_494660;
        case 0x494664u: goto label_494664;
        case 0x494668u: goto label_494668;
        case 0x49466cu: goto label_49466c;
        case 0x494670u: goto label_494670;
        case 0x494674u: goto label_494674;
        case 0x494678u: goto label_494678;
        case 0x49467cu: goto label_49467c;
        case 0x494680u: goto label_494680;
        case 0x494684u: goto label_494684;
        case 0x494688u: goto label_494688;
        case 0x49468cu: goto label_49468c;
        case 0x494690u: goto label_494690;
        case 0x494694u: goto label_494694;
        case 0x494698u: goto label_494698;
        case 0x49469cu: goto label_49469c;
        case 0x4946a0u: goto label_4946a0;
        case 0x4946a4u: goto label_4946a4;
        case 0x4946a8u: goto label_4946a8;
        case 0x4946acu: goto label_4946ac;
        case 0x4946b0u: goto label_4946b0;
        case 0x4946b4u: goto label_4946b4;
        case 0x4946b8u: goto label_4946b8;
        case 0x4946bcu: goto label_4946bc;
        case 0x4946c0u: goto label_4946c0;
        case 0x4946c4u: goto label_4946c4;
        case 0x4946c8u: goto label_4946c8;
        case 0x4946ccu: goto label_4946cc;
        case 0x4946d0u: goto label_4946d0;
        case 0x4946d4u: goto label_4946d4;
        case 0x4946d8u: goto label_4946d8;
        case 0x4946dcu: goto label_4946dc;
        case 0x4946e0u: goto label_4946e0;
        case 0x4946e4u: goto label_4946e4;
        case 0x4946e8u: goto label_4946e8;
        case 0x4946ecu: goto label_4946ec;
        case 0x4946f0u: goto label_4946f0;
        case 0x4946f4u: goto label_4946f4;
        case 0x4946f8u: goto label_4946f8;
        case 0x4946fcu: goto label_4946fc;
        case 0x494700u: goto label_494700;
        case 0x494704u: goto label_494704;
        case 0x494708u: goto label_494708;
        case 0x49470cu: goto label_49470c;
        case 0x494710u: goto label_494710;
        case 0x494714u: goto label_494714;
        case 0x494718u: goto label_494718;
        case 0x49471cu: goto label_49471c;
        case 0x494720u: goto label_494720;
        case 0x494724u: goto label_494724;
        case 0x494728u: goto label_494728;
        case 0x49472cu: goto label_49472c;
        case 0x494730u: goto label_494730;
        case 0x494734u: goto label_494734;
        case 0x494738u: goto label_494738;
        case 0x49473cu: goto label_49473c;
        case 0x494740u: goto label_494740;
        case 0x494744u: goto label_494744;
        case 0x494748u: goto label_494748;
        case 0x49474cu: goto label_49474c;
        case 0x494750u: goto label_494750;
        case 0x494754u: goto label_494754;
        case 0x494758u: goto label_494758;
        case 0x49475cu: goto label_49475c;
        case 0x494760u: goto label_494760;
        case 0x494764u: goto label_494764;
        case 0x494768u: goto label_494768;
        case 0x49476cu: goto label_49476c;
        case 0x494770u: goto label_494770;
        case 0x494774u: goto label_494774;
        case 0x494778u: goto label_494778;
        case 0x49477cu: goto label_49477c;
        case 0x494780u: goto label_494780;
        case 0x494784u: goto label_494784;
        case 0x494788u: goto label_494788;
        case 0x49478cu: goto label_49478c;
        case 0x494790u: goto label_494790;
        case 0x494794u: goto label_494794;
        case 0x494798u: goto label_494798;
        case 0x49479cu: goto label_49479c;
        case 0x4947a0u: goto label_4947a0;
        case 0x4947a4u: goto label_4947a4;
        case 0x4947a8u: goto label_4947a8;
        case 0x4947acu: goto label_4947ac;
        case 0x4947b0u: goto label_4947b0;
        case 0x4947b4u: goto label_4947b4;
        case 0x4947b8u: goto label_4947b8;
        case 0x4947bcu: goto label_4947bc;
        case 0x4947c0u: goto label_4947c0;
        case 0x4947c4u: goto label_4947c4;
        case 0x4947c8u: goto label_4947c8;
        case 0x4947ccu: goto label_4947cc;
        case 0x4947d0u: goto label_4947d0;
        case 0x4947d4u: goto label_4947d4;
        case 0x4947d8u: goto label_4947d8;
        case 0x4947dcu: goto label_4947dc;
        case 0x4947e0u: goto label_4947e0;
        case 0x4947e4u: goto label_4947e4;
        case 0x4947e8u: goto label_4947e8;
        case 0x4947ecu: goto label_4947ec;
        case 0x4947f0u: goto label_4947f0;
        case 0x4947f4u: goto label_4947f4;
        case 0x4947f8u: goto label_4947f8;
        case 0x4947fcu: goto label_4947fc;
        case 0x494800u: goto label_494800;
        case 0x494804u: goto label_494804;
        case 0x494808u: goto label_494808;
        case 0x49480cu: goto label_49480c;
        case 0x494810u: goto label_494810;
        case 0x494814u: goto label_494814;
        case 0x494818u: goto label_494818;
        case 0x49481cu: goto label_49481c;
        case 0x494820u: goto label_494820;
        case 0x494824u: goto label_494824;
        case 0x494828u: goto label_494828;
        case 0x49482cu: goto label_49482c;
        case 0x494830u: goto label_494830;
        case 0x494834u: goto label_494834;
        case 0x494838u: goto label_494838;
        case 0x49483cu: goto label_49483c;
        case 0x494840u: goto label_494840;
        case 0x494844u: goto label_494844;
        case 0x494848u: goto label_494848;
        case 0x49484cu: goto label_49484c;
        case 0x494850u: goto label_494850;
        case 0x494854u: goto label_494854;
        case 0x494858u: goto label_494858;
        case 0x49485cu: goto label_49485c;
        case 0x494860u: goto label_494860;
        case 0x494864u: goto label_494864;
        case 0x494868u: goto label_494868;
        case 0x49486cu: goto label_49486c;
        case 0x494870u: goto label_494870;
        case 0x494874u: goto label_494874;
        case 0x494878u: goto label_494878;
        case 0x49487cu: goto label_49487c;
        case 0x494880u: goto label_494880;
        case 0x494884u: goto label_494884;
        case 0x494888u: goto label_494888;
        case 0x49488cu: goto label_49488c;
        case 0x494890u: goto label_494890;
        case 0x494894u: goto label_494894;
        case 0x494898u: goto label_494898;
        case 0x49489cu: goto label_49489c;
        case 0x4948a0u: goto label_4948a0;
        case 0x4948a4u: goto label_4948a4;
        case 0x4948a8u: goto label_4948a8;
        case 0x4948acu: goto label_4948ac;
        case 0x4948b0u: goto label_4948b0;
        case 0x4948b4u: goto label_4948b4;
        case 0x4948b8u: goto label_4948b8;
        case 0x4948bcu: goto label_4948bc;
        case 0x4948c0u: goto label_4948c0;
        case 0x4948c4u: goto label_4948c4;
        case 0x4948c8u: goto label_4948c8;
        case 0x4948ccu: goto label_4948cc;
        case 0x4948d0u: goto label_4948d0;
        case 0x4948d4u: goto label_4948d4;
        case 0x4948d8u: goto label_4948d8;
        case 0x4948dcu: goto label_4948dc;
        case 0x4948e0u: goto label_4948e0;
        case 0x4948e4u: goto label_4948e4;
        case 0x4948e8u: goto label_4948e8;
        case 0x4948ecu: goto label_4948ec;
        case 0x4948f0u: goto label_4948f0;
        case 0x4948f4u: goto label_4948f4;
        case 0x4948f8u: goto label_4948f8;
        case 0x4948fcu: goto label_4948fc;
        case 0x494900u: goto label_494900;
        case 0x494904u: goto label_494904;
        case 0x494908u: goto label_494908;
        case 0x49490cu: goto label_49490c;
        case 0x494910u: goto label_494910;
        case 0x494914u: goto label_494914;
        case 0x494918u: goto label_494918;
        case 0x49491cu: goto label_49491c;
        case 0x494920u: goto label_494920;
        case 0x494924u: goto label_494924;
        case 0x494928u: goto label_494928;
        case 0x49492cu: goto label_49492c;
        case 0x494930u: goto label_494930;
        case 0x494934u: goto label_494934;
        case 0x494938u: goto label_494938;
        case 0x49493cu: goto label_49493c;
        case 0x494940u: goto label_494940;
        case 0x494944u: goto label_494944;
        case 0x494948u: goto label_494948;
        case 0x49494cu: goto label_49494c;
        case 0x494950u: goto label_494950;
        case 0x494954u: goto label_494954;
        case 0x494958u: goto label_494958;
        case 0x49495cu: goto label_49495c;
        case 0x494960u: goto label_494960;
        case 0x494964u: goto label_494964;
        case 0x494968u: goto label_494968;
        case 0x49496cu: goto label_49496c;
        case 0x494970u: goto label_494970;
        case 0x494974u: goto label_494974;
        case 0x494978u: goto label_494978;
        case 0x49497cu: goto label_49497c;
        case 0x494980u: goto label_494980;
        case 0x494984u: goto label_494984;
        case 0x494988u: goto label_494988;
        case 0x49498cu: goto label_49498c;
        case 0x494990u: goto label_494990;
        case 0x494994u: goto label_494994;
        case 0x494998u: goto label_494998;
        case 0x49499cu: goto label_49499c;
        case 0x4949a0u: goto label_4949a0;
        case 0x4949a4u: goto label_4949a4;
        case 0x4949a8u: goto label_4949a8;
        case 0x4949acu: goto label_4949ac;
        case 0x4949b0u: goto label_4949b0;
        case 0x4949b4u: goto label_4949b4;
        case 0x4949b8u: goto label_4949b8;
        case 0x4949bcu: goto label_4949bc;
        case 0x4949c0u: goto label_4949c0;
        case 0x4949c4u: goto label_4949c4;
        case 0x4949c8u: goto label_4949c8;
        case 0x4949ccu: goto label_4949cc;
        case 0x4949d0u: goto label_4949d0;
        case 0x4949d4u: goto label_4949d4;
        case 0x4949d8u: goto label_4949d8;
        case 0x4949dcu: goto label_4949dc;
        case 0x4949e0u: goto label_4949e0;
        case 0x4949e4u: goto label_4949e4;
        case 0x4949e8u: goto label_4949e8;
        case 0x4949ecu: goto label_4949ec;
        case 0x4949f0u: goto label_4949f0;
        case 0x4949f4u: goto label_4949f4;
        case 0x4949f8u: goto label_4949f8;
        case 0x4949fcu: goto label_4949fc;
        case 0x494a00u: goto label_494a00;
        case 0x494a04u: goto label_494a04;
        case 0x494a08u: goto label_494a08;
        case 0x494a0cu: goto label_494a0c;
        case 0x494a10u: goto label_494a10;
        case 0x494a14u: goto label_494a14;
        case 0x494a18u: goto label_494a18;
        case 0x494a1cu: goto label_494a1c;
        case 0x494a20u: goto label_494a20;
        case 0x494a24u: goto label_494a24;
        case 0x494a28u: goto label_494a28;
        case 0x494a2cu: goto label_494a2c;
        case 0x494a30u: goto label_494a30;
        case 0x494a34u: goto label_494a34;
        case 0x494a38u: goto label_494a38;
        case 0x494a3cu: goto label_494a3c;
        case 0x494a40u: goto label_494a40;
        case 0x494a44u: goto label_494a44;
        case 0x494a48u: goto label_494a48;
        case 0x494a4cu: goto label_494a4c;
        case 0x494a50u: goto label_494a50;
        case 0x494a54u: goto label_494a54;
        case 0x494a58u: goto label_494a58;
        case 0x494a5cu: goto label_494a5c;
        case 0x494a60u: goto label_494a60;
        case 0x494a64u: goto label_494a64;
        case 0x494a68u: goto label_494a68;
        case 0x494a6cu: goto label_494a6c;
        case 0x494a70u: goto label_494a70;
        case 0x494a74u: goto label_494a74;
        case 0x494a78u: goto label_494a78;
        case 0x494a7cu: goto label_494a7c;
        case 0x494a80u: goto label_494a80;
        case 0x494a84u: goto label_494a84;
        case 0x494a88u: goto label_494a88;
        case 0x494a8cu: goto label_494a8c;
        case 0x494a90u: goto label_494a90;
        case 0x494a94u: goto label_494a94;
        case 0x494a98u: goto label_494a98;
        case 0x494a9cu: goto label_494a9c;
        case 0x494aa0u: goto label_494aa0;
        case 0x494aa4u: goto label_494aa4;
        case 0x494aa8u: goto label_494aa8;
        case 0x494aacu: goto label_494aac;
        case 0x494ab0u: goto label_494ab0;
        case 0x494ab4u: goto label_494ab4;
        case 0x494ab8u: goto label_494ab8;
        case 0x494abcu: goto label_494abc;
        case 0x494ac0u: goto label_494ac0;
        case 0x494ac4u: goto label_494ac4;
        case 0x494ac8u: goto label_494ac8;
        case 0x494accu: goto label_494acc;
        case 0x494ad0u: goto label_494ad0;
        case 0x494ad4u: goto label_494ad4;
        case 0x494ad8u: goto label_494ad8;
        case 0x494adcu: goto label_494adc;
        case 0x494ae0u: goto label_494ae0;
        case 0x494ae4u: goto label_494ae4;
        case 0x494ae8u: goto label_494ae8;
        case 0x494aecu: goto label_494aec;
        case 0x494af0u: goto label_494af0;
        case 0x494af4u: goto label_494af4;
        case 0x494af8u: goto label_494af8;
        case 0x494afcu: goto label_494afc;
        case 0x494b00u: goto label_494b00;
        case 0x494b04u: goto label_494b04;
        case 0x494b08u: goto label_494b08;
        case 0x494b0cu: goto label_494b0c;
        case 0x494b10u: goto label_494b10;
        case 0x494b14u: goto label_494b14;
        case 0x494b18u: goto label_494b18;
        case 0x494b1cu: goto label_494b1c;
        case 0x494b20u: goto label_494b20;
        case 0x494b24u: goto label_494b24;
        case 0x494b28u: goto label_494b28;
        case 0x494b2cu: goto label_494b2c;
        case 0x494b30u: goto label_494b30;
        case 0x494b34u: goto label_494b34;
        case 0x494b38u: goto label_494b38;
        case 0x494b3cu: goto label_494b3c;
        case 0x494b40u: goto label_494b40;
        case 0x494b44u: goto label_494b44;
        case 0x494b48u: goto label_494b48;
        case 0x494b4cu: goto label_494b4c;
        case 0x494b50u: goto label_494b50;
        case 0x494b54u: goto label_494b54;
        case 0x494b58u: goto label_494b58;
        case 0x494b5cu: goto label_494b5c;
        case 0x494b60u: goto label_494b60;
        case 0x494b64u: goto label_494b64;
        case 0x494b68u: goto label_494b68;
        case 0x494b6cu: goto label_494b6c;
        case 0x494b70u: goto label_494b70;
        case 0x494b74u: goto label_494b74;
        case 0x494b78u: goto label_494b78;
        case 0x494b7cu: goto label_494b7c;
        case 0x494b80u: goto label_494b80;
        case 0x494b84u: goto label_494b84;
        case 0x494b88u: goto label_494b88;
        case 0x494b8cu: goto label_494b8c;
        case 0x494b90u: goto label_494b90;
        case 0x494b94u: goto label_494b94;
        case 0x494b98u: goto label_494b98;
        case 0x494b9cu: goto label_494b9c;
        case 0x494ba0u: goto label_494ba0;
        case 0x494ba4u: goto label_494ba4;
        case 0x494ba8u: goto label_494ba8;
        case 0x494bacu: goto label_494bac;
        case 0x494bb0u: goto label_494bb0;
        case 0x494bb4u: goto label_494bb4;
        case 0x494bb8u: goto label_494bb8;
        case 0x494bbcu: goto label_494bbc;
        case 0x494bc0u: goto label_494bc0;
        case 0x494bc4u: goto label_494bc4;
        case 0x494bc8u: goto label_494bc8;
        case 0x494bccu: goto label_494bcc;
        case 0x494bd0u: goto label_494bd0;
        case 0x494bd4u: goto label_494bd4;
        case 0x494bd8u: goto label_494bd8;
        case 0x494bdcu: goto label_494bdc;
        case 0x494be0u: goto label_494be0;
        case 0x494be4u: goto label_494be4;
        case 0x494be8u: goto label_494be8;
        case 0x494becu: goto label_494bec;
        case 0x494bf0u: goto label_494bf0;
        case 0x494bf4u: goto label_494bf4;
        case 0x494bf8u: goto label_494bf8;
        case 0x494bfcu: goto label_494bfc;
        case 0x494c00u: goto label_494c00;
        case 0x494c04u: goto label_494c04;
        case 0x494c08u: goto label_494c08;
        case 0x494c0cu: goto label_494c0c;
        case 0x494c10u: goto label_494c10;
        case 0x494c14u: goto label_494c14;
        case 0x494c18u: goto label_494c18;
        case 0x494c1cu: goto label_494c1c;
        case 0x494c20u: goto label_494c20;
        case 0x494c24u: goto label_494c24;
        case 0x494c28u: goto label_494c28;
        case 0x494c2cu: goto label_494c2c;
        case 0x494c30u: goto label_494c30;
        case 0x494c34u: goto label_494c34;
        case 0x494c38u: goto label_494c38;
        case 0x494c3cu: goto label_494c3c;
        case 0x494c40u: goto label_494c40;
        case 0x494c44u: goto label_494c44;
        case 0x494c48u: goto label_494c48;
        case 0x494c4cu: goto label_494c4c;
        case 0x494c50u: goto label_494c50;
        case 0x494c54u: goto label_494c54;
        case 0x494c58u: goto label_494c58;
        case 0x494c5cu: goto label_494c5c;
        default: break;
    }

    ctx->pc = 0x4943f0u;

label_4943f0:
    // 0x4943f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4943f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4943f4:
    // 0x4943f4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4943f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_4943f8:
    // 0x4943f8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4943f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_4943fc:
    // 0x4943fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4943fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_494400:
    // 0x494400: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x494400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_494404:
    // 0x494404: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x494404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_494408:
    // 0x494408: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x494408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_49440c:
    // 0x49440c: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x49440cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
label_494410:
    // 0x494410: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x494410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_494414:
    // 0x494414: 0x39202  srl         $s2, $v1, 8
    ctx->pc = 0x494414u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_494418:
    // 0x494418: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x494418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_49441c:
    // 0x49441c: 0x321000fb  andi        $s0, $s0, 0xFB
    ctx->pc = 0x49441cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)251);
label_494420:
    // 0x494420: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x494420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_494424:
    // 0x494424: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x494424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_494428:
    // 0x494428: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x494428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_49442c:
    // 0x49442c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_494430:
    // 0x494430: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x494430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_494434:
    // 0x494434: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x494434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_494438:
    // 0x494438: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x494438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49443c:
    // 0x49443c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_494440:
    if (ctx->pc == 0x494440u) {
        ctx->pc = 0x494440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49443Cu;
        // 0x494440: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494444u;
        goto label_494444;
    }
    ctx->pc = 0x49443Cu;
    {
        const bool branch_taken_0x49443c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x494440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49443Cu;
        // 0x494440: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49443c) {
            ctx->pc = 0x494474u;
            goto label_494474;
        }
    }
    ctx->pc = 0x494444u;
label_494444:
    // 0x494444: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x494444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_494448:
    // 0x494448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_49444c:
    if (ctx->pc == 0x49444Cu) {
        ctx->pc = 0x49444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494448u;
        // 0x49444c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494450u;
        goto label_494450;
    }
    ctx->pc = 0x494448u;
    {
        const bool branch_taken_0x494448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494448u;
        // 0x49444c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494448) {
            ctx->pc = 0x494460u;
            goto label_494460;
        }
    }
    ctx->pc = 0x494450u;
label_494450:
    // 0x494450: 0x50620123  beql        $v1, $v0, . + 4 + (0x123 << 2)
label_494454:
    if (ctx->pc == 0x494454u) {
        ctx->pc = 0x494454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494450u;
        // 0x494454: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494458u;
        goto label_494458;
    }
    ctx->pc = 0x494450u;
    {
        const bool branch_taken_0x494450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494450) {
            ctx->pc = 0x494454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494450u;
            // 0x494454: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4948E0u;
            goto label_4948e0;
        }
    }
    ctx->pc = 0x494458u;
label_494458:
    // 0x494458: 0x10000125  b           . + 4 + (0x125 << 2)
label_49445c:
    if (ctx->pc == 0x49445Cu) {
        ctx->pc = 0x49445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494458u;
        // 0x49445c: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494460u;
        goto label_494460;
    }
    ctx->pc = 0x494458u;
    {
        const bool branch_taken_0x494458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494458u;
        // 0x49445c: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494458) {
            ctx->pc = 0x4948F0u;
            goto label_4948f0;
        }
    }
    ctx->pc = 0x494460u;
label_494460:
    // 0x494460: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x494460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_494464:
    // 0x494464: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
label_494468:
    if (ctx->pc == 0x494468u) {
        ctx->pc = 0x494468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494464u;
        // 0x494468: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49446Cu;
        goto label_49446c;
    }
    ctx->pc = 0x494464u;
    {
        const bool branch_taken_0x494464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x494468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494464u;
        // 0x494468: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494464) {
            ctx->pc = 0x494684u;
            goto label_494684;
        }
    }
    ctx->pc = 0x49446Cu;
label_49446c:
    // 0x49446c: 0x10000121  b           . + 4 + (0x121 << 2)
label_494470:
    if (ctx->pc == 0x494470u) {
        ctx->pc = 0x494470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49446Cu;
        // 0x494470: 0x2239821  addu        $s3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494474u;
        goto label_494474;
    }
    ctx->pc = 0x49446Cu;
    {
        const bool branch_taken_0x49446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49446Cu;
        // 0x494470: 0x2239821  addu        $s3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49446c) {
            ctx->pc = 0x4948F4u;
            goto label_4948f4;
        }
    }
    ctx->pc = 0x494474u;
label_494474:
    // 0x494474: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x494474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_494478:
    // 0x494478: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x494478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_49447c:
    // 0x49447c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_494480:
    if (ctx->pc == 0x494480u) {
        ctx->pc = 0x494480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49447Cu;
        // 0x494480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494484u;
        goto label_494484;
    }
    ctx->pc = 0x49447Cu;
    {
        const bool branch_taken_0x49447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49447Cu;
        // 0x494480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49447c) {
            ctx->pc = 0x494498u;
            goto label_494498;
        }
    }
    ctx->pc = 0x494484u;
label_494484:
    // 0x494484: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x494484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_494488:
    // 0x494488: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x494488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_49448c:
    // 0x49448c: 0x10000121  b           . + 4 + (0x121 << 2)
label_494490:
    if (ctx->pc == 0x494490u) {
        ctx->pc = 0x494490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49448Cu;
        // 0x494490: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494494u;
        goto label_494494;
    }
    ctx->pc = 0x49448Cu;
    {
        const bool branch_taken_0x49448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49448Cu;
        // 0x494490: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49448c) {
            ctx->pc = 0x494914u;
            goto label_494914;
        }
    }
    ctx->pc = 0x494494u;
label_494494:
    // 0x494494: 0x0  nop
    ctx->pc = 0x494494u;
    // NOP
label_494498:
    // 0x494498: 0x1640011b  bnez        $s2, . + 4 + (0x11B << 2)
label_49449c:
    if (ctx->pc == 0x49449Cu) {
        ctx->pc = 0x4944A0u;
        goto label_4944a0;
    }
    ctx->pc = 0x494498u;
    {
        const bool branch_taken_0x494498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x494498) {
            ctx->pc = 0x494908u;
            goto label_494908;
        }
    }
    ctx->pc = 0x4944A0u;
label_4944a0:
    // 0x4944a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4944a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4944a4:
    // 0x4944a4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_4944a8:
    if (ctx->pc == 0x4944A8u) {
        ctx->pc = 0x4944A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4944A4u;
        // 0x4944a8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4944ACu;
        goto label_4944ac;
    }
    ctx->pc = 0x4944A4u;
    {
        const bool branch_taken_0x4944a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4944A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4944A4u;
        // 0x4944a8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4944a4) {
            ctx->pc = 0x49454Cu;
            goto label_49454c;
        }
    }
    ctx->pc = 0x4944ACu;
label_4944ac:
    // 0x4944ac: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
label_4944b0:
    if (ctx->pc == 0x4944B0u) {
        ctx->pc = 0x4944B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4944ACu;
        // 0x4944b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4944B4u;
        goto label_4944b4;
    }
    ctx->pc = 0x4944ACu;
    {
        const bool branch_taken_0x4944ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4944B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4944ACu;
        // 0x4944b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4944ac) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x4944B4u;
label_4944b4:
    // 0x4944b4: 0xc123142  jal         func_48C508
label_4944b8:
    if (ctx->pc == 0x4944B8u) {
        ctx->pc = 0x4944BCu;
        goto label_4944bc;
    }
    ctx->pc = 0x4944B4u;
    SET_GPR_U32(ctx, 31, 0x4944BCu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4944B4u, 0x4944BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4944BCu;
label_4944bc:
    // 0x4944bc: 0xc123142  jal         func_48C508
label_4944c0:
    if (ctx->pc == 0x4944C0u) {
        ctx->pc = 0x4944C4u;
        goto label_4944c4;
    }
    ctx->pc = 0x4944BCu;
    SET_GPR_U32(ctx, 31, 0x4944C4u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4944BCu, 0x4944C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4944C4u;
label_4944c4:
    // 0x4944c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4944c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4944c8:
    // 0x4944c8: 0xc10c10e  jal         func_430438
label_4944cc:
    if (ctx->pc == 0x4944CCu) {
        ctx->pc = 0x4944CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4944C8u;
        // 0x4944cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4944D0u;
        goto label_4944d0;
    }
    ctx->pc = 0x4944C8u;
    SET_GPR_U32(ctx, 31, 0x4944D0u);
    ctx->pc = 0x4944CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4944C8u;
    // 0x4944cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x4944C8u, 0x4944D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4944D0u;
label_4944d0:
    // 0x4944d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4944d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4944d4:
    // 0x4944d4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4944d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_4944d8:
    // 0x4944d8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4944d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4944dc:
    // 0x4944dc: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x4944dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_4944e0:
    // 0x4944e0: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x4944e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4944e4:
    // 0x4944e4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4944e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4944e8:
    // 0x4944e8: 0x8636001e  lh          $s6, 0x1E($s1)
    ctx->pc = 0x4944e8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_4944ec:
    // 0x4944ec: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x4944ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4944f0:
    // 0x4944f0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4944f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_4944f4:
    // 0x4944f4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x4944f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4944f8:
    // 0x4944f8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_4944fc:
    if (ctx->pc == 0x4944FCu) {
        ctx->pc = 0x4944FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4944F8u;
        // 0x4944fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494500u;
        goto label_494500;
    }
    ctx->pc = 0x4944F8u;
    {
        const bool branch_taken_0x4944f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4944f8) {
            ctx->pc = 0x4944FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4944F8u;
            // 0x4944fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x494500u;
            goto label_494500;
        }
    }
    ctx->pc = 0x494500u;
label_494500:
    // 0x494500: 0x1812  mflo        $v1
    ctx->pc = 0x494500u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_494504:
    // 0x494504: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x494504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_494508:
    // 0x494508: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x494508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_49450c:
    // 0x49450c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_494510:
    if (ctx->pc == 0x494510u) {
        ctx->pc = 0x494510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49450Cu;
        // 0x494510: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x494514u;
        goto label_494514;
    }
    ctx->pc = 0x49450Cu;
    {
        const bool branch_taken_0x49450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49450Cu;
        // 0x494510: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49450c) {
            ctx->pc = 0x494554u;
            goto label_494554;
        }
    }
    ctx->pc = 0x494514u;
label_494514:
    // 0x494514: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x494514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_494518:
    // 0x494518: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_49451c:
    if (ctx->pc == 0x49451Cu) {
        ctx->pc = 0x494520u;
        goto label_494520;
    }
    ctx->pc = 0x494518u;
    {
        const bool branch_taken_0x494518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494518) {
            ctx->pc = 0x494544u;
            goto label_494544;
        }
    }
    ctx->pc = 0x494520u;
label_494520:
    // 0x494520: 0x42023  negu        $a0, $a0
    ctx->pc = 0x494520u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_494524:
    // 0x494524: 0x0  nop
    ctx->pc = 0x494524u;
    // NOP
label_494528:
    // 0x494528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x494528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49452c:
    // 0x49452c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x49452cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_494530:
    // 0x494530: 0x0  nop
    ctx->pc = 0x494530u;
    // NOP
label_494534:
    // 0x494534: 0x0  nop
    ctx->pc = 0x494534u;
    // NOP
label_494538:
    // 0x494538: 0x0  nop
    ctx->pc = 0x494538u;
    // NOP
label_49453c:
    // 0x49453c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_494540:
    if (ctx->pc == 0x494540u) {
        ctx->pc = 0x494540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49453Cu;
        // 0x494540: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494544u;
        goto label_494544;
    }
    ctx->pc = 0x49453Cu;
    {
        const bool branch_taken_0x49453c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49453Cu;
        // 0x494540: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49453c) {
            ctx->pc = 0x494528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494528;
        }
    }
    ctx->pc = 0x494544u;
label_494544:
    // 0x494544: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_494548:
    if (ctx->pc == 0x494548u) {
        ctx->pc = 0x494548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494544u;
        // 0x494548: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49454Cu;
        goto label_49454c;
    }
    ctx->pc = 0x494544u;
    {
        const bool branch_taken_0x494544 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x494544) {
            ctx->pc = 0x494548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494544u;
            // 0x494548: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49455Cu;
            goto label_49455c;
        }
    }
    ctx->pc = 0x49454Cu;
label_49454c:
    // 0x49454c: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_494550:
    if (ctx->pc == 0x494550u) {
        ctx->pc = 0x494550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49454Cu;
        // 0x494550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494554u;
        goto label_494554;
    }
    ctx->pc = 0x49454Cu;
    {
        const bool branch_taken_0x49454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49454Cu;
        // 0x494550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49454c) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494554u;
label_494554:
    // 0x494554: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x494554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_494558:
    // 0x494558: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x494558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_49455c:
    // 0x49455c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x49455cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_494560:
    // 0x494560: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x494560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_494564:
    // 0x494564: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x494564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_494568:
    // 0x494568: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x494568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_49456c:
    // 0x49456c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x49456cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_494570:
    // 0x494570: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x494570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_494574:
    // 0x494574: 0xc10f644  jal         func_43D910
label_494578:
    if (ctx->pc == 0x494578u) {
        ctx->pc = 0x494578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494574u;
        // 0x494578: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49457Cu;
        goto label_49457c;
    }
    ctx->pc = 0x494574u;
    SET_GPR_U32(ctx, 31, 0x49457Cu);
    ctx->pc = 0x494578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494574u;
    // 0x494578: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x494574u, 0x49457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49457Cu;
label_49457c:
    // 0x49457c: 0x128000cb  beqz        $s4, . + 4 + (0xCB << 2)
label_494580:
    if (ctx->pc == 0x494580u) {
        ctx->pc = 0x494580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49457Cu;
        // 0x494580: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494584u;
        goto label_494584;
    }
    ctx->pc = 0x49457Cu;
    {
        const bool branch_taken_0x49457c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x494580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49457Cu;
        // 0x494580: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49457c) {
            ctx->pc = 0x4948ACu;
            goto label_4948ac;
        }
    }
    ctx->pc = 0x494584u;
label_494584:
    // 0x494584: 0x24570480  addiu       $s7, $v0, 0x480
    ctx->pc = 0x494584u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_494588:
    // 0x494588: 0xdf8686f0  ld          $a2, -0x7910($gp)
    ctx->pc = 0x494588u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
label_49458c:
    // 0x49458c: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x49458cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_494590:
    // 0x494590: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x494590u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_494594:
    // 0x494594: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x494594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_494598:
    // 0x494598: 0x63e3a  dsrl        $a3, $a2, 24
    ctx->pc = 0x494598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) >> 24);
label_49459c:
    // 0x49459c: 0x30c501ff  andi        $a1, $a2, 0x1FF
    ctx->pc = 0x49459cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
label_4945a0:
    // 0x4945a0: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x4945a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
label_4945a4:
    // 0x4945a4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x4945a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_4945a8:
    // 0x4945a8: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x4945a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_4945ac:
    // 0x4945ac: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x4945acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
label_4945b0:
    // 0x4945b0: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x4945b0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4945b4:
    // 0x4945b4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x4945b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_4945b8:
    // 0x4945b8: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4945b8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
label_4945bc:
    // 0x4945bc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4945bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_4945c0:
    // 0x4945c0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x4945c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_4945c4:
    // 0x4945c4: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x4945c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_4945c8:
    // 0x4945c8: 0xc12aaa2  jal         func_4AAA88
label_4945cc:
    if (ctx->pc == 0x4945CCu) {
        ctx->pc = 0x4945CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4945C8u;
        // 0x4945cc: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4945D0u;
        goto label_4945d0;
    }
    ctx->pc = 0x4945C8u;
    SET_GPR_U32(ctx, 31, 0x4945D0u);
    ctx->pc = 0x4945CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4945C8u;
    // 0x4945cc: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA88u, 0x4945C8u, 0x4945D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4945D0u;
label_4945d0:
    // 0x4945d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4945d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4945d4:
    // 0x4945d4: 0xc10f644  jal         func_43D910
label_4945d8:
    if (ctx->pc == 0x4945D8u) {
        ctx->pc = 0x4945D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4945D4u;
        // 0x4945d8: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4945DCu;
        goto label_4945dc;
    }
    ctx->pc = 0x4945D4u;
    SET_GPR_U32(ctx, 31, 0x4945DCu);
    ctx->pc = 0x4945D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4945D4u;
    // 0x4945d8: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4945D4u, 0x4945DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4945DCu;
label_4945dc:
    // 0x4945dc: 0x0  nop
    ctx->pc = 0x4945dcu;
    // NOP
label_4945e0:
    // 0x4945e0: 0xc12adc8  jal         func_4AB720
label_4945e4:
    if (ctx->pc == 0x4945E4u) {
        ctx->pc = 0x4945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4945E0u;
        // 0x4945e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4945E8u;
        goto label_4945e8;
    }
    ctx->pc = 0x4945E0u;
    SET_GPR_U32(ctx, 31, 0x4945E8u);
    ctx->pc = 0x4945E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4945E0u;
    // 0x4945e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x4945E0u, 0x4945E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4945E8u;
label_4945e8:
    // 0x4945e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4945ec:
    // 0x4945ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4945ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4945f0:
    // 0x4945f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_4945f4:
    if (ctx->pc == 0x4945F4u) {
        ctx->pc = 0x4945F8u;
        goto label_4945f8;
    }
    ctx->pc = 0x4945F0u;
    {
        const bool branch_taken_0x4945f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4945f0) {
            ctx->pc = 0x4945E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4945e0;
        }
    }
    ctx->pc = 0x4945F8u;
label_4945f8:
    // 0x4945f8: 0xc12adc8  jal         func_4AB720
label_4945fc:
    if (ctx->pc == 0x4945FCu) {
        ctx->pc = 0x4945FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4945F8u;
        // 0x4945fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494600u;
        goto label_494600;
    }
    ctx->pc = 0x4945F8u;
    SET_GPR_U32(ctx, 31, 0x494600u);
    ctx->pc = 0x4945FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4945F8u;
    // 0x4945fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x4945F8u, 0x494600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494600u;
label_494600:
    // 0x494600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494604:
    // 0x494604: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x494604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_494608:
    // 0x494608: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_49460c:
    if (ctx->pc == 0x49460Cu) {
        ctx->pc = 0x49460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494608u;
        // 0x49460c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494610u;
        goto label_494610;
    }
    ctx->pc = 0x494608u;
    {
        const bool branch_taken_0x494608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494608u;
        // 0x49460c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494608) {
            ctx->pc = 0x4945F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4945f8;
        }
    }
    ctx->pc = 0x494610u;
label_494610:
    // 0x494610: 0xc10c10e  jal         func_430438
label_494614:
    if (ctx->pc == 0x494614u) {
        ctx->pc = 0x494614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494610u;
        // 0x494614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494618u;
        goto label_494618;
    }
    ctx->pc = 0x494610u;
    SET_GPR_U32(ctx, 31, 0x494618u);
    ctx->pc = 0x494614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494610u;
    // 0x494614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x494610u, 0x494618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494618u;
label_494618:
    // 0x494618: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x494618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_49461c:
    // 0x49461c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x49461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_494620:
    // 0x494620: 0x24730480  addiu       $s3, $v1, 0x480
    ctx->pc = 0x494620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_494624:
    // 0x494624: 0xc12aaf2  jal         func_4AABC8
label_494628:
    if (ctx->pc == 0x494628u) {
        ctx->pc = 0x494628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494624u;
        // 0x494628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49462Cu;
        goto label_49462c;
    }
    ctx->pc = 0x494624u;
    SET_GPR_U32(ctx, 31, 0x49462Cu);
    ctx->pc = 0x494628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494624u;
    // 0x494628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AABC8u, 0x494624u, 0x49462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49462Cu;
label_49462c:
    // 0x49462c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49462cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494630:
    // 0x494630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x494630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494634:
    // 0x494634: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_494638:
    if (ctx->pc == 0x494638u) {
        ctx->pc = 0x494638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494634u;
        // 0x494638: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49463Cu;
        goto label_49463c;
    }
    ctx->pc = 0x494634u;
    {
        const bool branch_taken_0x494634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x494634) {
            ctx->pc = 0x494638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494634u;
            // 0x494638: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494654u;
            goto label_494654;
        }
    }
    ctx->pc = 0x49463Cu;
label_49463c:
    // 0x49463c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_494640:
    // 0x494640: 0xc12aaf2  jal         func_4AABC8
label_494644:
    if (ctx->pc == 0x494644u) {
        ctx->pc = 0x494644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494640u;
        // 0x494644: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494648u;
        goto label_494648;
    }
    ctx->pc = 0x494640u;
    SET_GPR_U32(ctx, 31, 0x494648u);
    ctx->pc = 0x494644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494640u;
    // 0x494644: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AABC8u, 0x494640u, 0x494648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494648u;
label_494648:
    // 0x494648: 0x10500179  beq         $v0, $s0, . + 4 + (0x179 << 2)
label_49464c:
    if (ctx->pc == 0x49464Cu) {
        ctx->pc = 0x49464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494648u;
        // 0x49464c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494650u;
        goto label_494650;
    }
    ctx->pc = 0x494648u;
    {
        const bool branch_taken_0x494648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x49464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494648u;
        // 0x49464c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494648) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494650u;
label_494650:
    // 0x494650: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x494650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_494654:
    // 0x494654: 0x292a023  subu        $s4, $s4, $s2
    ctx->pc = 0x494654u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_494658:
    // 0x494658: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x494658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49465c:
    // 0x49465c: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x49465cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_494660:
    // 0x494660: 0x292202a  slt         $a0, $s4, $s2
    ctx->pc = 0x494660u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_494664:
    // 0x494664: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x494664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_494668:
    // 0x494668: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x494668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_49466c:
    // 0x49466c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x49466cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_494670:
    // 0x494670: 0x284900b  movn        $s2, $s4, $a0
    ctx->pc = 0x494670u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 20));
label_494674:
    // 0x494674: 0x1680ffc4  bnez        $s4, . + 4 + (-0x3C << 2)
label_494678:
    if (ctx->pc == 0x494678u) {
        ctx->pc = 0x494678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494674u;
        // 0x494678: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49467Cu;
        goto label_49467c;
    }
    ctx->pc = 0x494674u;
    {
        const bool branch_taken_0x494674 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x494678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494674u;
        // 0x494678: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494674) {
            ctx->pc = 0x494588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494588;
        }
    }
    ctx->pc = 0x49467Cu;
label_49467c:
    // 0x49467c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_494680:
    if (ctx->pc == 0x494680u) {
        ctx->pc = 0x494680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49467Cu;
        // 0x494680: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494684u;
        goto label_494684;
    }
    ctx->pc = 0x49467Cu;
    {
        const bool branch_taken_0x49467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49467Cu;
        // 0x494680: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49467c) {
            ctx->pc = 0x4948B0u;
            goto label_4948b0;
        }
    }
    ctx->pc = 0x494684u;
label_494684:
    // 0x494684: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x494684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_494688:
    // 0x494688: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x494688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_49468c:
    // 0x49468c: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_494690:
    if (ctx->pc == 0x494690u) {
        ctx->pc = 0x494690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49468Cu;
        // 0x494690: 0x223f021  addu        $fp, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494694u;
        goto label_494694;
    }
    ctx->pc = 0x49468Cu;
    {
        const bool branch_taken_0x49468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49468Cu;
        // 0x494690: 0x223f021  addu        $fp, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49468c) {
            ctx->pc = 0x49454Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49454c;
        }
    }
    ctx->pc = 0x494694u;
label_494694:
    // 0x494694: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x494694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_494698:
    // 0x494698: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x494698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_49469c:
    // 0x49469c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4946a0:
    if (ctx->pc == 0x4946A0u) {
        ctx->pc = 0x4946A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49469Cu;
        // 0x4946a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4946A4u;
        goto label_4946a4;
    }
    ctx->pc = 0x49469Cu;
    {
        const bool branch_taken_0x49469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4946A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49469Cu;
        // 0x4946a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49469c) {
            ctx->pc = 0x4946B8u;
            goto label_4946b8;
        }
    }
    ctx->pc = 0x4946A4u;
label_4946a4:
    // 0x4946a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4946a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4946a8:
    // 0x4946a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4946a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4946ac:
    // 0x4946ac: 0x10000099  b           . + 4 + (0x99 << 2)
label_4946b0:
    if (ctx->pc == 0x4946B0u) {
        ctx->pc = 0x4946B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946ACu;
        // 0x4946b0: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4946B4u;
        goto label_4946b4;
    }
    ctx->pc = 0x4946ACu;
    {
        const bool branch_taken_0x4946ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4946B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946ACu;
        // 0x4946b0: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4946ac) {
            ctx->pc = 0x494914u;
            goto label_494914;
        }
    }
    ctx->pc = 0x4946B4u;
label_4946b4:
    // 0x4946b4: 0x0  nop
    ctx->pc = 0x4946b4u;
    // NOP
label_4946b8:
    // 0x4946b8: 0x8fc20058  lw          $v0, 0x58($fp)
    ctx->pc = 0x4946b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
label_4946bc:
    // 0x4946bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4946c0:
    if (ctx->pc == 0x4946C0u) {
        ctx->pc = 0x4946C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946BCu;
        // 0x4946c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4946C4u;
        goto label_4946c4;
    }
    ctx->pc = 0x4946BCu;
    {
        const bool branch_taken_0x4946bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4946C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946BCu;
        // 0x4946c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4946bc) {
            ctx->pc = 0x4946D8u;
            goto label_4946d8;
        }
    }
    ctx->pc = 0x4946C4u;
label_4946c4:
    // 0x4946c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4946c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4946c8:
    // 0x4946c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4946c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4946cc:
    // 0x4946cc: 0x10000091  b           . + 4 + (0x91 << 2)
label_4946d0:
    if (ctx->pc == 0x4946D0u) {
        ctx->pc = 0x4946D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946CCu;
        // 0x4946d0: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4946D4u;
        goto label_4946d4;
    }
    ctx->pc = 0x4946CCu;
    {
        const bool branch_taken_0x4946cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4946D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946CCu;
        // 0x4946d0: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4946cc) {
            ctx->pc = 0x494914u;
            goto label_494914;
        }
    }
    ctx->pc = 0x4946D4u;
label_4946d4:
    // 0x4946d4: 0x0  nop
    ctx->pc = 0x4946d4u;
    // NOP
label_4946d8:
    // 0x4946d8: 0x1640008b  bnez        $s2, . + 4 + (0x8B << 2)
label_4946dc:
    if (ctx->pc == 0x4946DCu) {
        ctx->pc = 0x4946E0u;
        goto label_4946e0;
    }
    ctx->pc = 0x4946D8u;
    {
        const bool branch_taken_0x4946d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4946d8) {
            ctx->pc = 0x494908u;
            goto label_494908;
        }
    }
    ctx->pc = 0x4946E0u;
label_4946e0:
    // 0x4946e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4946e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4946e4:
    // 0x4946e4: 0x1040ff99  beqz        $v0, . + 4 + (-0x67 << 2)
label_4946e8:
    if (ctx->pc == 0x4946E8u) {
        ctx->pc = 0x4946E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946E4u;
        // 0x4946e8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4946ECu;
        goto label_4946ec;
    }
    ctx->pc = 0x4946E4u;
    {
        const bool branch_taken_0x4946e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4946E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946E4u;
        // 0x4946e8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4946e4) {
            ctx->pc = 0x49454Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49454c;
        }
    }
    ctx->pc = 0x4946ECu;
label_4946ec:
    // 0x4946ec: 0x14400150  bnez        $v0, . + 4 + (0x150 << 2)
label_4946f0:
    if (ctx->pc == 0x4946F0u) {
        ctx->pc = 0x4946F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946ECu;
        // 0x4946f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4946F4u;
        goto label_4946f4;
    }
    ctx->pc = 0x4946ECu;
    {
        const bool branch_taken_0x4946ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4946F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4946ECu;
        // 0x4946f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4946ec) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x4946F4u;
label_4946f4:
    // 0x4946f4: 0xc123142  jal         func_48C508
label_4946f8:
    if (ctx->pc == 0x4946F8u) {
        ctx->pc = 0x4946FCu;
        goto label_4946fc;
    }
    ctx->pc = 0x4946F4u;
    SET_GPR_U32(ctx, 31, 0x4946FCu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4946F4u, 0x4946FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4946FCu;
label_4946fc:
    // 0x4946fc: 0xc123142  jal         func_48C508
label_494700:
    if (ctx->pc == 0x494700u) {
        ctx->pc = 0x494704u;
        goto label_494704;
    }
    ctx->pc = 0x4946FCu;
    SET_GPR_U32(ctx, 31, 0x494704u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4946FCu, 0x494704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494704u;
label_494704:
    // 0x494704: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x494704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494708:
    // 0x494708: 0xc10c10e  jal         func_430438
label_49470c:
    if (ctx->pc == 0x49470Cu) {
        ctx->pc = 0x49470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494708u;
        // 0x49470c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494710u;
        goto label_494710;
    }
    ctx->pc = 0x494708u;
    SET_GPR_U32(ctx, 31, 0x494710u);
    ctx->pc = 0x49470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494708u;
    // 0x49470c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x494708u, 0x494710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494710u;
label_494710:
    // 0x494710: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x494710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_494714:
    // 0x494714: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x494714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_494718:
    // 0x494718: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x494718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49471c:
    // 0x49471c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x49471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_494720:
    // 0x494720: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x494720u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_494724:
    // 0x494724: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x494724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_494728:
    // 0x494728: 0x8636001e  lh          $s6, 0x1E($s1)
    ctx->pc = 0x494728u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_49472c:
    // 0x49472c: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x49472cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_494730:
    // 0x494730: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x494730u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_494734:
    // 0x494734: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x494734u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_494738:
    // 0x494738: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_49473c:
    if (ctx->pc == 0x49473Cu) {
        ctx->pc = 0x49473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494738u;
        // 0x49473c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494740u;
        goto label_494740;
    }
    ctx->pc = 0x494738u;
    {
        const bool branch_taken_0x494738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494738) {
            ctx->pc = 0x49473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494738u;
            // 0x49473c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x494740u;
            goto label_494740;
        }
    }
    ctx->pc = 0x494740u;
label_494740:
    // 0x494740: 0x1812  mflo        $v1
    ctx->pc = 0x494740u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_494744:
    // 0x494744: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x494744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_494748:
    // 0x494748: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x494748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_49474c:
    // 0x49474c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_494750:
    if (ctx->pc == 0x494750u) {
        ctx->pc = 0x494750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49474Cu;
        // 0x494750: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x494754u;
        goto label_494754;
    }
    ctx->pc = 0x49474Cu;
    {
        const bool branch_taken_0x49474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49474Cu;
        // 0x494750: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49474c) {
            ctx->pc = 0x494794u;
            goto label_494794;
        }
    }
    ctx->pc = 0x494754u;
label_494754:
    // 0x494754: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x494754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_494758:
    // 0x494758: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_49475c:
    if (ctx->pc == 0x49475Cu) {
        ctx->pc = 0x494760u;
        goto label_494760;
    }
    ctx->pc = 0x494758u;
    {
        const bool branch_taken_0x494758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494758) {
            ctx->pc = 0x494784u;
            goto label_494784;
        }
    }
    ctx->pc = 0x494760u;
label_494760:
    // 0x494760: 0x42023  negu        $a0, $a0
    ctx->pc = 0x494760u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_494764:
    // 0x494764: 0x0  nop
    ctx->pc = 0x494764u;
    // NOP
label_494768:
    // 0x494768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x494768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49476c:
    // 0x49476c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x49476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_494770:
    // 0x494770: 0x0  nop
    ctx->pc = 0x494770u;
    // NOP
label_494774:
    // 0x494774: 0x0  nop
    ctx->pc = 0x494774u;
    // NOP
label_494778:
    // 0x494778: 0x0  nop
    ctx->pc = 0x494778u;
    // NOP
label_49477c:
    // 0x49477c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_494780:
    if (ctx->pc == 0x494780u) {
        ctx->pc = 0x494780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49477Cu;
        // 0x494780: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494784u;
        goto label_494784;
    }
    ctx->pc = 0x49477Cu;
    {
        const bool branch_taken_0x49477c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49477Cu;
        // 0x494780: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49477c) {
            ctx->pc = 0x494768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494768;
        }
    }
    ctx->pc = 0x494784u;
label_494784:
    // 0x494784: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_494788:
    if (ctx->pc == 0x494788u) {
        ctx->pc = 0x494788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494784u;
        // 0x494788: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49478Cu;
        goto label_49478c;
    }
    ctx->pc = 0x494784u;
    {
        const bool branch_taken_0x494784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x494784) {
            ctx->pc = 0x494788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494784u;
            // 0x494788: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49479Cu;
            goto label_49479c;
        }
    }
    ctx->pc = 0x49478Cu;
label_49478c:
    // 0x49478c: 0x10000128  b           . + 4 + (0x128 << 2)
label_494790:
    if (ctx->pc == 0x494790u) {
        ctx->pc = 0x494790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49478Cu;
        // 0x494790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494794u;
        goto label_494794;
    }
    ctx->pc = 0x49478Cu;
    {
        const bool branch_taken_0x49478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49478Cu;
        // 0x494790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49478c) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494794u;
label_494794:
    // 0x494794: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x494794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_494798:
    // 0x494798: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x494798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_49479c:
    // 0x49479c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x49479cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4947a0:
    // 0x4947a0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4947a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4947a4:
    // 0x4947a4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4947a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4947a8:
    // 0x4947a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4947a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4947ac:
    // 0x4947ac: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4947acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_4947b0:
    // 0x4947b0: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x4947b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4947b4:
    // 0x4947b4: 0xc10f644  jal         func_43D910
label_4947b8:
    if (ctx->pc == 0x4947B8u) {
        ctx->pc = 0x4947B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4947B4u;
        // 0x4947b8: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4947BCu;
        goto label_4947bc;
    }
    ctx->pc = 0x4947B4u;
    SET_GPR_U32(ctx, 31, 0x4947BCu);
    ctx->pc = 0x4947B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4947B4u;
    // 0x4947b8: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4947B4u, 0x4947BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4947BCu;
label_4947bc:
    // 0x4947bc: 0x1280003b  beqz        $s4, . + 4 + (0x3B << 2)
label_4947c0:
    if (ctx->pc == 0x4947C0u) {
        ctx->pc = 0x4947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4947BCu;
        // 0x4947c0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4947C4u;
        goto label_4947c4;
    }
    ctx->pc = 0x4947BCu;
    {
        const bool branch_taken_0x4947bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4947BCu;
        // 0x4947c0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4947bc) {
            ctx->pc = 0x4948ACu;
            goto label_4948ac;
        }
    }
    ctx->pc = 0x4947C4u;
label_4947c4:
    // 0x4947c4: 0x24570480  addiu       $s7, $v0, 0x480
    ctx->pc = 0x4947c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_4947c8:
    // 0x4947c8: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x4947c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_4947cc:
    // 0x4947cc: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x4947ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_4947d0:
    // 0x4947d0: 0x97c50008  lhu         $a1, 0x8($fp)
    ctx->pc = 0x4947d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
label_4947d4:
    // 0x4947d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4947d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4947d8:
    // 0x4947d8: 0x63d02  srl         $a3, $a2, 20
    ctx->pc = 0x4947d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
label_4947dc:
    // 0x4947dc: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x4947dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_4947e0:
    // 0x4947e0: 0x63382  srl         $a2, $a2, 14
    ctx->pc = 0x4947e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
label_4947e4:
    // 0x4947e4: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x4947e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4947e8:
    // 0x4947e8: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x4947e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_4947ec:
    // 0x4947ec: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4947ecu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
label_4947f0:
    // 0x4947f0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x4947f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_4947f4:
    // 0x4947f4: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x4947f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
label_4947f8:
    // 0x4947f8: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x4947f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_4947fc:
    // 0x4947fc: 0xc12aaa2  jal         func_4AAA88
label_494800:
    if (ctx->pc == 0x494800u) {
        ctx->pc = 0x494800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4947FCu;
        // 0x494800: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494804u;
        goto label_494804;
    }
    ctx->pc = 0x4947FCu;
    SET_GPR_U32(ctx, 31, 0x494804u);
    ctx->pc = 0x494800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4947FCu;
    // 0x494800: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA88u, 0x4947FCu, 0x494804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494804u;
label_494804:
    // 0x494804: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x494804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_494808:
    // 0x494808: 0xc10f644  jal         func_43D910
label_49480c:
    if (ctx->pc == 0x49480Cu) {
        ctx->pc = 0x49480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494808u;
        // 0x49480c: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494810u;
        goto label_494810;
    }
    ctx->pc = 0x494808u;
    SET_GPR_U32(ctx, 31, 0x494810u);
    ctx->pc = 0x49480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494808u;
    // 0x49480c: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x494808u, 0x494810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494810u;
label_494810:
    // 0x494810: 0xc12adc8  jal         func_4AB720
label_494814:
    if (ctx->pc == 0x494814u) {
        ctx->pc = 0x494814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494810u;
        // 0x494814: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494818u;
        goto label_494818;
    }
    ctx->pc = 0x494810u;
    SET_GPR_U32(ctx, 31, 0x494818u);
    ctx->pc = 0x494814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494810u;
    // 0x494814: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x494810u, 0x494818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494818u;
label_494818:
    // 0x494818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49481c:
    // 0x49481c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x49481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_494820:
    // 0x494820: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_494824:
    if (ctx->pc == 0x494824u) {
        ctx->pc = 0x494828u;
        goto label_494828;
    }
    ctx->pc = 0x494820u;
    {
        const bool branch_taken_0x494820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x494820) {
            ctx->pc = 0x494810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494810;
        }
    }
    ctx->pc = 0x494828u;
label_494828:
    // 0x494828: 0xc12adc8  jal         func_4AB720
label_49482c:
    if (ctx->pc == 0x49482Cu) {
        ctx->pc = 0x49482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494828u;
        // 0x49482c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494830u;
        goto label_494830;
    }
    ctx->pc = 0x494828u;
    SET_GPR_U32(ctx, 31, 0x494830u);
    ctx->pc = 0x49482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494828u;
    // 0x49482c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB720u, 0x494828u, 0x494830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494830u;
label_494830:
    // 0x494830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494834:
    // 0x494834: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x494834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_494838:
    // 0x494838: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_49483c:
    if (ctx->pc == 0x49483Cu) {
        ctx->pc = 0x49483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494838u;
        // 0x49483c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494840u;
        goto label_494840;
    }
    ctx->pc = 0x494838u;
    {
        const bool branch_taken_0x494838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494838u;
        // 0x49483c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494838) {
            ctx->pc = 0x494828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494828;
        }
    }
    ctx->pc = 0x494840u;
label_494840:
    // 0x494840: 0xc10c10e  jal         func_430438
label_494844:
    if (ctx->pc == 0x494844u) {
        ctx->pc = 0x494844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494840u;
        // 0x494844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494848u;
        goto label_494848;
    }
    ctx->pc = 0x494840u;
    SET_GPR_U32(ctx, 31, 0x494848u);
    ctx->pc = 0x494844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494840u;
    // 0x494844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430438u, 0x494840u, 0x494848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494848u;
label_494848:
    // 0x494848: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x494848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_49484c:
    // 0x49484c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x49484cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_494850:
    // 0x494850: 0x24730480  addiu       $s3, $v1, 0x480
    ctx->pc = 0x494850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_494854:
    // 0x494854: 0xc12aaf2  jal         func_4AABC8
label_494858:
    if (ctx->pc == 0x494858u) {
        ctx->pc = 0x494858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494854u;
        // 0x494858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49485Cu;
        goto label_49485c;
    }
    ctx->pc = 0x494854u;
    SET_GPR_U32(ctx, 31, 0x49485Cu);
    ctx->pc = 0x494858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494854u;
    // 0x494858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AABC8u, 0x494854u, 0x49485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49485Cu;
label_49485c:
    // 0x49485c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49485cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494860:
    // 0x494860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x494860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494864:
    // 0x494864: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_494868:
    if (ctx->pc == 0x494868u) {
        ctx->pc = 0x494868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494864u;
        // 0x494868: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49486Cu;
        goto label_49486c;
    }
    ctx->pc = 0x494864u;
    {
        const bool branch_taken_0x494864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x494864) {
            ctx->pc = 0x494868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494864u;
            // 0x494868: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494884u;
            goto label_494884;
        }
    }
    ctx->pc = 0x49486Cu;
label_49486c:
    // 0x49486c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_494870:
    // 0x494870: 0xc12aaf2  jal         func_4AABC8
label_494874:
    if (ctx->pc == 0x494874u) {
        ctx->pc = 0x494874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494870u;
        // 0x494874: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494878u;
        goto label_494878;
    }
    ctx->pc = 0x494870u;
    SET_GPR_U32(ctx, 31, 0x494878u);
    ctx->pc = 0x494874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494870u;
    // 0x494874: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AABC8u, 0x494870u, 0x494878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494878u;
label_494878:
    // 0x494878: 0x105000ed  beq         $v0, $s0, . + 4 + (0xED << 2)
label_49487c:
    if (ctx->pc == 0x49487Cu) {
        ctx->pc = 0x49487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494878u;
        // 0x49487c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494880u;
        goto label_494880;
    }
    ctx->pc = 0x494878u;
    {
        const bool branch_taken_0x494878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x49487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494878u;
        // 0x49487c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494878) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494880u;
label_494880:
    // 0x494880: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x494880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_494884:
    // 0x494884: 0x292a023  subu        $s4, $s4, $s2
    ctx->pc = 0x494884u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_494888:
    // 0x494888: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x494888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49488c:
    // 0x49488c: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x49488cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_494890:
    // 0x494890: 0x292202a  slt         $a0, $s4, $s2
    ctx->pc = 0x494890u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_494894:
    // 0x494894: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x494894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_494898:
    // 0x494898: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x494898u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_49489c:
    // 0x49489c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x49489cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4948a0:
    // 0x4948a0: 0x284900b  movn        $s2, $s4, $a0
    ctx->pc = 0x4948a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 20));
label_4948a4:
    // 0x4948a4: 0x1680ffc8  bnez        $s4, . + 4 + (-0x38 << 2)
label_4948a8:
    if (ctx->pc == 0x4948A8u) {
        ctx->pc = 0x4948A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948A4u;
        // 0x4948a8: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4948ACu;
        goto label_4948ac;
    }
    ctx->pc = 0x4948A4u;
    {
        const bool branch_taken_0x4948a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4948A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948A4u;
        // 0x4948a8: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4948a4) {
            ctx->pc = 0x4947C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4947c8;
        }
    }
    ctx->pc = 0x4948ACu;
label_4948ac:
    // 0x4948ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4948acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4948b0:
    // 0x4948b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4948b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4948b4:
    // 0x4948b4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4948b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4948b8:
    // 0x4948b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4948b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4948bc:
    // 0x4948bc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4948bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4948c0:
    // 0x4948c0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x4948c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_4948c4:
    // 0x4948c4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x4948c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_4948c8:
    // 0x4948c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4948c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4948cc:
    // 0x4948cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4948ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_4948d0:
    // 0x4948d0: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x4948d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_4948d4:
    // 0x4948d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4948d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4948d8:
    // 0x4948d8: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_4948dc:
    if (ctx->pc == 0x4948DCu) {
        ctx->pc = 0x4948DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948D8u;
        // 0x4948dc: 0xa2230022  sb          $v1, 0x22($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4948E0u;
        goto label_4948e0;
    }
    ctx->pc = 0x4948D8u;
    {
        const bool branch_taken_0x4948d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4948DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948D8u;
        // 0x4948dc: 0xa2230022  sb          $v1, 0x22($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4948d8) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x4948E0u;
label_4948e0:
    // 0x4948e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4948e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4948e4:
    // 0x4948e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_4948e8:
    if (ctx->pc == 0x4948E8u) {
        ctx->pc = 0x4948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948E4u;
        // 0x4948e8: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4948ECu;
        goto label_4948ec;
    }
    ctx->pc = 0x4948E4u;
    {
        const bool branch_taken_0x4948e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948E4u;
        // 0x4948e8: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4948e4) {
            ctx->pc = 0x494914u;
            goto label_494914;
        }
    }
    ctx->pc = 0x4948ECu;
label_4948ec:
    // 0x4948ec: 0x0  nop
    ctx->pc = 0x4948ecu;
    // NOP
label_4948f0:
    // 0x4948f0: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x4948f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4948f4:
    // 0x4948f4: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x4948f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_4948f8:
    // 0x4948f8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4948f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4948fc:
    // 0x4948fc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x4948fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_494900:
    // 0x494900: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_494904:
    if (ctx->pc == 0x494904u) {
        ctx->pc = 0x494904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494900u;
        // 0x494904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494908u;
        goto label_494908;
    }
    ctx->pc = 0x494900u;
    {
        const bool branch_taken_0x494900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494900u;
        // 0x494904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494900) {
            ctx->pc = 0x494930u;
            goto label_494930;
        }
    }
    ctx->pc = 0x494908u;
label_494908:
    // 0x494908: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x494908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_49490c:
    // 0x49490c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_494910:
    // 0x494910: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x494910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_494914:
    // 0x494914: 0xc11eff2  jal         func_47BFC8
label_494918:
    if (ctx->pc == 0x494918u) {
        ctx->pc = 0x49491Cu;
        goto label_49491c;
    }
    ctx->pc = 0x494914u;
    SET_GPR_U32(ctx, 31, 0x49491Cu);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x494914u, 0x49491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49491Cu;
label_49491c:
    // 0x49491c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_494920:
    // 0x494920: 0xc11f024  jal         func_47C090
label_494924:
    if (ctx->pc == 0x494924u) {
        ctx->pc = 0x494924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494920u;
        // 0x494924: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494928u;
        goto label_494928;
    }
    ctx->pc = 0x494920u;
    SET_GPR_U32(ctx, 31, 0x494928u);
    ctx->pc = 0x494924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494920u;
    // 0x494924: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x494920u, 0x494928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494928u;
label_494928:
    // 0x494928: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_49492c:
    if (ctx->pc == 0x49492Cu) {
        ctx->pc = 0x49492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494928u;
        // 0x49492c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494930u;
        goto label_494930;
    }
    ctx->pc = 0x494928u;
    {
        const bool branch_taken_0x494928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494928u;
        // 0x49492c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494928) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494930u;
label_494930:
    // 0x494930: 0x32150001  andi        $s5, $s0, 0x1
    ctx->pc = 0x494930u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_494934:
    // 0x494934: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
label_494938:
    if (ctx->pc == 0x494938u) {
        ctx->pc = 0x494938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494934u;
        // 0x494938: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49493Cu;
        goto label_49493c;
    }
    ctx->pc = 0x494934u;
    {
        const bool branch_taken_0x494934 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x494934) {
            ctx->pc = 0x494938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494934u;
            // 0x494938: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494948u;
            goto label_494948;
        }
    }
    ctx->pc = 0x49493Cu;
label_49493c:
    // 0x49493c: 0xc128fd6  jal         func_4A3F58
label_494940:
    if (ctx->pc == 0x494940u) {
        ctx->pc = 0x494940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49493Cu;
        // 0x494940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494944u;
        goto label_494944;
    }
    ctx->pc = 0x49493Cu;
    SET_GPR_U32(ctx, 31, 0x494944u);
    ctx->pc = 0x494940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49493Cu;
    // 0x494940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3F58u, 0x49493Cu, 0x494944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494944u;
label_494944:
    // 0x494944: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x494944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_494948:
    // 0x494948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x494948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49494c:
    // 0x49494c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_494950:
    if (ctx->pc == 0x494950u) {
        ctx->pc = 0x494950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49494Cu;
        // 0x494950: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494954u;
        goto label_494954;
    }
    ctx->pc = 0x49494Cu;
    {
        const bool branch_taken_0x49494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49494c) {
            ctx->pc = 0x494950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49494Cu;
            // 0x494950: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4949FCu;
            goto label_4949fc;
        }
    }
    ctx->pc = 0x494954u;
label_494954:
    // 0x494954: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x494954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_494958:
    // 0x494958: 0x32140008  andi        $s4, $s0, 0x8
    ctx->pc = 0x494958u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_49495c:
    // 0x49495c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49495cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494960:
    // 0x494960: 0x32100002  andi        $s0, $s0, 0x2
    ctx->pc = 0x494960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_494964:
    // 0x494964: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x494964u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_494968:
    // 0x494968: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_49496c:
    if (ctx->pc == 0x49496Cu) {
        ctx->pc = 0x49496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494968u;
        // 0x49496c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494970u;
        goto label_494970;
    }
    ctx->pc = 0x494968u;
    {
        const bool branch_taken_0x494968 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494968u;
        // 0x49496c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494968) {
            ctx->pc = 0x4949D0u;
            goto label_4949d0;
        }
    }
    ctx->pc = 0x494970u;
label_494970:
    // 0x494970: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x494970u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_494974:
    // 0x494974: 0x8e2c0014  lw          $t4, 0x14($s1)
    ctx->pc = 0x494974u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_494978:
    // 0x494978: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x494978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_49497c:
    // 0x49497c: 0x356bfff0  ori         $t3, $t3, 0xFFF0
    ctx->pc = 0x49497cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65520);
label_494980:
    // 0x494980: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x494980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_494984:
    // 0x494984: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x494984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_494988:
    // 0x494988: 0x1862018  mult        $a0, $t4, $a2
    ctx->pc = 0x494988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49498c:
    // 0x49498c: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x49498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_494990:
    // 0x494990: 0x4b2824  and         $a1, $v0, $t3
    ctx->pc = 0x494990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_494994:
    // 0x494994: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x494994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_494998:
    // 0x494998: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x494998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_49499c:
    // 0x49499c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x49499cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_4949a0:
    // 0x4949a0: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x4949a0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_4949a4:
    // 0x4949a4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4949a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_4949a8:
    // 0x4949a8: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4949a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_4949ac:
    // 0x4949ac: 0x132182b  sltu        $v1, $t1, $s2
    ctx->pc = 0x4949acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4949b0:
    // 0x4949b0: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x4949b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4949b4:
    // 0x4949b4: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x4949b4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
label_4949b8:
    // 0x4949b8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4949bc:
    if (ctx->pc == 0x4949BCu) {
        ctx->pc = 0x4949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4949B8u;
        // 0x4949bc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4949C0u;
        goto label_4949c0;
    }
    ctx->pc = 0x4949B8u;
    {
        const bool branch_taken_0x4949b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4949B8u;
        // 0x4949bc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4949b8) {
            ctx->pc = 0x494988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494988;
        }
    }
    ctx->pc = 0x4949C0u;
label_4949c0:
    // 0x4949c0: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x4949c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_4949c4:
    // 0x4949c4: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x4949c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
label_4949c8:
    // 0x4949c8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x4949c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_4949cc:
    // 0x4949cc: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x4949ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_4949d0:
    // 0x4949d0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4949d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4949d4:
    // 0x4949d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4949d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4949d8:
    // 0x4949d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4949d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4949dc:
    // 0x4949dc: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x4949dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_4949e0:
    // 0x4949e0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x4949e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4949e4:
    // 0x4949e4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4949e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_4949e8:
    // 0x4949e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4949e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4949ec:
    // 0x4949ec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4949ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4949f0:
    // 0x4949f0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4949f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_4949f4:
    // 0x4949f4: 0x10000055  b           . + 4 + (0x55 << 2)
label_4949f8:
    if (ctx->pc == 0x4949F8u) {
        ctx->pc = 0x4949F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4949F4u;
        // 0x4949f8: 0xae240018  sw          $a0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4949FCu;
        goto label_4949fc;
    }
    ctx->pc = 0x4949F4u;
    {
        const bool branch_taken_0x4949f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4949F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4949F4u;
        // 0x4949f8: 0xae240018  sw          $a0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4949f4) {
            ctx->pc = 0x494B4Cu;
            goto label_494b4c;
        }
    }
    ctx->pc = 0x4949FCu;
label_4949fc:
    // 0x4949fc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x4949fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_494a00:
    // 0x494a00: 0x92680036  lbu         $t0, 0x36($s3)
    ctx->pc = 0x494a00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_494a04:
    // 0x494a04: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x494a04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_494a08:
    // 0x494a08: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x494a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_494a0c:
    // 0x494a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494a10:
    // 0x494a10: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x494a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_494a14:
    // 0x494a14: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x494a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_494a18:
    // 0x494a18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_494a1c:
    if (ctx->pc == 0x494A1Cu) {
        ctx->pc = 0x494A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A18u;
        // 0x494a1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A20u;
        goto label_494a20;
    }
    ctx->pc = 0x494A18u;
    {
        const bool branch_taken_0x494a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A18u;
        // 0x494a1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494a18) {
            ctx->pc = 0x494A58u;
            goto label_494a58;
        }
    }
    ctx->pc = 0x494A20u;
label_494a20:
    // 0x494a20: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x494a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_494a24:
    // 0x494a24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_494a28:
    // 0x494a28: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x494a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_494a2c:
    // 0x494a2c: 0x2463f9f0  addiu       $v1, $v1, -0x610
    ctx->pc = 0x494a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965744));
label_494a30:
    // 0x494a30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x494a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_494a34:
    // 0x494a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_494a38:
    // 0x494a38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x494a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494a3c:
    // 0x494a3c: 0x800008  jr          $a0
label_494a40:
    if (ctx->pc == 0x494A40u) {
        ctx->pc = 0x494A44u;
        goto label_494a44;
    }
    ctx->pc = 0x494A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494A3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x494A44u;
label_494a44:
    // 0x494a44: 0x10000004  b           . + 4 + (0x4 << 2)
label_494a48:
    if (ctx->pc == 0x494A48u) {
        ctx->pc = 0x494A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A44u;
        // 0x494a48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A4Cu;
        goto label_494a4c;
    }
    ctx->pc = 0x494A44u;
    {
        const bool branch_taken_0x494a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A44u;
        // 0x494a48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494a44) {
            ctx->pc = 0x494A58u;
            goto label_494a58;
        }
    }
    ctx->pc = 0x494A4Cu;
label_494a4c:
    // 0x494a4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_494a50:
    if (ctx->pc == 0x494A50u) {
        ctx->pc = 0x494A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A4Cu;
        // 0x494a50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A54u;
        goto label_494a54;
    }
    ctx->pc = 0x494A4Cu;
    {
        const bool branch_taken_0x494a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A4Cu;
        // 0x494a50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494a4c) {
            ctx->pc = 0x494A58u;
            goto label_494a58;
        }
    }
    ctx->pc = 0x494A54u;
label_494a54:
    // 0x494a54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x494a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_494a58:
    // 0x494a58: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x494a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
label_494a5c:
    // 0x494a5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_494a60:
    if (ctx->pc == 0x494A60u) {
        ctx->pc = 0x494A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A5Cu;
        // 0x494a60: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A64u;
        goto label_494a64;
    }
    ctx->pc = 0x494A5Cu;
    {
        const bool branch_taken_0x494a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A5Cu;
        // 0x494a60: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494a5c) {
            ctx->pc = 0x494A74u;
            goto label_494a74;
        }
    }
    ctx->pc = 0x494A64u;
label_494a64:
    // 0x494a64: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_494a68:
    if (ctx->pc == 0x494A68u) {
        ctx->pc = 0x494A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A64u;
        // 0x494a68: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A6Cu;
        goto label_494a6c;
    }
    ctx->pc = 0x494A64u;
    {
        const bool branch_taken_0x494a64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x494A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A64u;
        // 0x494a68: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494a64) {
            ctx->pc = 0x494A78u;
            goto label_494a78;
        }
    }
    ctx->pc = 0x494A6Cu;
label_494a6c:
    // 0x494a6c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x494a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_494a70:
    // 0x494a70: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x494a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_494a74:
    // 0x494a74: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x494a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_494a78:
    // 0x494a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_494a7c:
    if (ctx->pc == 0x494A7Cu) {
        ctx->pc = 0x494A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A78u;
        // 0x494a7c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A80u;
        goto label_494a80;
    }
    ctx->pc = 0x494A78u;
    {
        const bool branch_taken_0x494a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A78u;
        // 0x494a7c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494a78) {
            ctx->pc = 0x494A90u;
            goto label_494a90;
        }
    }
    ctx->pc = 0x494A80u;
label_494a80:
    // 0x494a80: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
label_494a84:
    if (ctx->pc == 0x494A84u) {
        ctx->pc = 0x494A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494A80u;
        // 0x494a84: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494A88u;
        goto label_494a88;
    }
    ctx->pc = 0x494A80u;
    {
        const bool branch_taken_0x494a80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x494a80) {
            ctx->pc = 0x494A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494A80u;
            // 0x494a84: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494A94u;
            goto label_494a94;
        }
    }
    ctx->pc = 0x494A88u;
label_494a88:
    // 0x494a88: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x494a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_494a8c:
    // 0x494a8c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x494a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_494a90:
    // 0x494a90: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x494a90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_494a94:
    // 0x494a94: 0x32140008  andi        $s4, $s0, 0x8
    ctx->pc = 0x494a94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_494a98:
    // 0x494a98: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x494a98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_494a9c:
    // 0x494a9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x494a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494aa0:
    // 0x494aa0: 0x32100002  andi        $s0, $s0, 0x2
    ctx->pc = 0x494aa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_494aa4:
    // 0x494aa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x494aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_494aa8:
    // 0x494aa8: 0x8e2c000c  lw          $t4, 0xC($s1)
    ctx->pc = 0x494aa8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_494aac:
    // 0x494aac: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x494aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_494ab0:
    // 0x494ab0: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x494ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_494ab4:
    // 0x494ab4: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_494ab8:
    if (ctx->pc == 0x494AB8u) {
        ctx->pc = 0x494AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494AB4u;
        // 0x494ab8: 0x8e2b0010  lw          $t3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494ABCu;
        goto label_494abc;
    }
    ctx->pc = 0x494AB4u;
    {
        const bool branch_taken_0x494ab4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x494AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494AB4u;
        // 0x494ab8: 0x8e2b0010  lw          $t3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ab4) {
            ctx->pc = 0x494B28u;
            goto label_494b28;
        }
    }
    ctx->pc = 0x494ABCu;
label_494abc:
    // 0x494abc: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x494abcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_494ac0:
    // 0x494ac0: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x494ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_494ac4:
    // 0x494ac4: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x494ac4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_494ac8:
    // 0x494ac8: 0x8e2d0014  lw          $t5, 0x14($s1)
    ctx->pc = 0x494ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_494acc:
    // 0x494acc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x494accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_494ad0:
    // 0x494ad0: 0xea182a  slt         $v1, $a3, $t2
    ctx->pc = 0x494ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_494ad4:
    // 0x494ad4: 0x10e282a  slt         $a1, $t0, $t6
    ctx->pc = 0x494ad4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_494ad8:
    // 0x494ad8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x494ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_494adc:
    // 0x494adc: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x494adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_494ae0:
    // 0x494ae0: 0xe3200a  movz        $a0, $a3, $v1
    ctx->pc = 0x494ae0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_494ae4:
    // 0x494ae4: 0x105100a  movz        $v0, $t0, $a1
    ctx->pc = 0x494ae4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
label_494ae8:
    // 0x494ae8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x494ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_494aec:
    // 0x494aec: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x494aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_494af0:
    // 0x494af0: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x494af0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_494af4:
    // 0x494af4: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x494af4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
label_494af8:
    // 0x494af8: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x494af8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_494afc:
    // 0x494afc: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x494afcu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
label_494b00:
    // 0x494b00: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x494b00u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_494b04:
    // 0x494b04: 0x132102b  sltu        $v0, $t1, $s2
    ctx->pc = 0x494b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_494b08:
    // 0x494b08: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x494b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_494b0c:
    // 0x494b0c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x494b0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_494b10:
    // 0x494b10: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x494b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_494b14:
    // 0x494b14: 0x8f2024  and         $a0, $a0, $t7
    ctx->pc = 0x494b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
label_494b18:
    // 0x494b18: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x494b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_494b1c:
    // 0x494b1c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_494b20:
    if (ctx->pc == 0x494B20u) {
        ctx->pc = 0x494B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B1Cu;
        // 0x494b20: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B24u;
        goto label_494b24;
    }
    ctx->pc = 0x494B1Cu;
    {
        const bool branch_taken_0x494b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B1Cu;
        // 0x494b20: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494b1c) {
            ctx->pc = 0x494AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494ad0;
        }
    }
    ctx->pc = 0x494B24u;
label_494b24:
    // 0x494b24: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x494b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
label_494b28:
    // 0x494b28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x494b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_494b2c:
    // 0x494b2c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x494b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_494b30:
    // 0x494b30: 0xe3202a  slt         $a0, $a3, $v1
    ctx->pc = 0x494b30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_494b34:
    // 0x494b34: 0xae2c000c  sw          $t4, 0xC($s1)
    ctx->pc = 0x494b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 12));
label_494b38:
    // 0x494b38: 0xe4180a  movz        $v1, $a3, $a0
    ctx->pc = 0x494b38u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_494b3c:
    // 0x494b3c: 0xae2b0010  sw          $t3, 0x10($s1)
    ctx->pc = 0x494b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 11));
label_494b40:
    // 0x494b40: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x494b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_494b44:
    // 0x494b44: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x494b44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_494b48:
    // 0x494b48: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x494b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_494b4c:
    // 0x494b4c: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_494b50:
    if (ctx->pc == 0x494B50u) {
        ctx->pc = 0x494B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B4Cu;
        // 0x494b50: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B54u;
        goto label_494b54;
    }
    ctx->pc = 0x494B4Cu;
    {
        const bool branch_taken_0x494b4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b4c) {
            ctx->pc = 0x494B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494B4Cu;
            // 0x494b50: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494BE8u;
            goto label_494be8;
        }
    }
    ctx->pc = 0x494B54u;
label_494b54:
    // 0x494b54: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x494b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_494b58:
    // 0x494b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x494b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494b5c:
    // 0x494b5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x494b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_494b60:
    // 0x494b60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_494b64:
    if (ctx->pc == 0x494B64u) {
        ctx->pc = 0x494B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B60u;
        // 0x494b64: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B68u;
        goto label_494b68;
    }
    ctx->pc = 0x494B60u;
    {
        const bool branch_taken_0x494b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B60u;
        // 0x494b64: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494b60) {
            ctx->pc = 0x494BA4u;
            goto label_494ba4;
        }
    }
    ctx->pc = 0x494B68u;
label_494b68:
    // 0x494b68: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x494b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_494b6c:
    // 0x494b6c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x494b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_494b70:
    // 0x494b70: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x494b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_494b74:
    // 0x494b74: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_494b78:
    if (ctx->pc == 0x494B78u) {
        ctx->pc = 0x494B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B74u;
        // 0x494b78: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B7Cu;
        goto label_494b7c;
    }
    ctx->pc = 0x494B74u;
    {
        const bool branch_taken_0x494b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x494B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B74u;
        // 0x494b78: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494b74) {
            ctx->pc = 0x494BA8u;
            goto label_494ba8;
        }
    }
    ctx->pc = 0x494B7Cu;
label_494b7c:
    // 0x494b7c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x494b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_494b80:
    // 0x494b80: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x494b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_494b84:
    // 0x494b84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_494b88:
    if (ctx->pc == 0x494B88u) {
        ctx->pc = 0x494B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B84u;
        // 0x494b88: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B8Cu;
        goto label_494b8c;
    }
    ctx->pc = 0x494B84u;
    {
        const bool branch_taken_0x494b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B84u;
        // 0x494b88: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494b84) {
            ctx->pc = 0x494BA8u;
            goto label_494ba8;
        }
    }
    ctx->pc = 0x494B8Cu;
label_494b8c:
    // 0x494b8c: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_494b90:
    if (ctx->pc == 0x494B90u) {
        ctx->pc = 0x494B94u;
        goto label_494b94;
    }
    ctx->pc = 0x494B8Cu;
    {
        const bool branch_taken_0x494b8c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x494b8c) {
            ctx->pc = 0x494BA8u;
            goto label_494ba8;
        }
    }
    ctx->pc = 0x494B94u;
label_494b94:
    // 0x494b94: 0xc124e42  jal         func_493908
label_494b98:
    if (ctx->pc == 0x494B98u) {
        ctx->pc = 0x494B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B94u;
        // 0x494b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B9Cu;
        goto label_494b9c;
    }
    ctx->pc = 0x494B94u;
    SET_GPR_U32(ctx, 31, 0x494B9Cu);
    ctx->pc = 0x494B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494B94u;
    // 0x494b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493908u, 0x494B94u, 0x494B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494B9Cu;
label_494b9c:
    // 0x494b9c: 0x10000012  b           . + 4 + (0x12 << 2)
label_494ba0:
    if (ctx->pc == 0x494BA0u) {
        ctx->pc = 0x494BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B9Cu;
        // 0x494ba0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BA4u;
        goto label_494ba4;
    }
    ctx->pc = 0x494B9Cu;
    {
        const bool branch_taken_0x494b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B9Cu;
        // 0x494ba0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494b9c) {
            ctx->pc = 0x494BE8u;
            goto label_494be8;
        }
    }
    ctx->pc = 0x494BA4u;
label_494ba4:
    // 0x494ba4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x494ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_494ba8:
    // 0x494ba8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_494bac:
    if (ctx->pc == 0x494BACu) {
        ctx->pc = 0x494BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BA8u;
        // 0x494bac: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BB0u;
        goto label_494bb0;
    }
    ctx->pc = 0x494BA8u;
    {
        const bool branch_taken_0x494ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BA8u;
        // 0x494bac: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ba8) {
            ctx->pc = 0x494BE4u;
            goto label_494be4;
        }
    }
    ctx->pc = 0x494BB0u;
label_494bb0:
    // 0x494bb0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x494bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_494bb4:
    // 0x494bb4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x494bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_494bb8:
    // 0x494bb8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x494bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_494bbc:
    // 0x494bbc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_494bc0:
    if (ctx->pc == 0x494BC0u) {
        ctx->pc = 0x494BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BBCu;
        // 0x494bc0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BC4u;
        goto label_494bc4;
    }
    ctx->pc = 0x494BBCu;
    {
        const bool branch_taken_0x494bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x494bbc) {
            ctx->pc = 0x494BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494BBCu;
            // 0x494bc0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494BE8u;
            goto label_494be8;
        }
    }
    ctx->pc = 0x494BC4u;
label_494bc4:
    // 0x494bc4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x494bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_494bc8:
    // 0x494bc8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x494bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_494bcc:
    // 0x494bcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_494bd0:
    if (ctx->pc == 0x494BD0u) {
        ctx->pc = 0x494BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BCCu;
        // 0x494bd0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BD4u;
        goto label_494bd4;
    }
    ctx->pc = 0x494BCCu;
    {
        const bool branch_taken_0x494bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494bcc) {
            ctx->pc = 0x494BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494BCCu;
            // 0x494bd0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494BE8u;
            goto label_494be8;
        }
    }
    ctx->pc = 0x494BD4u;
label_494bd4:
    // 0x494bd4: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
label_494bd8:
    if (ctx->pc == 0x494BD8u) {
        ctx->pc = 0x494BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BD4u;
        // 0x494bd8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BDCu;
        goto label_494bdc;
    }
    ctx->pc = 0x494BD4u;
    {
        const bool branch_taken_0x494bd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x494bd4) {
            ctx->pc = 0x494BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494BD4u;
            // 0x494bd8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494BE8u;
            goto label_494be8;
        }
    }
    ctx->pc = 0x494BDCu;
label_494bdc:
    // 0x494bdc: 0xc124ed4  jal         func_493B50
label_494be0:
    if (ctx->pc == 0x494BE0u) {
        ctx->pc = 0x494BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BDCu;
        // 0x494be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BE4u;
        goto label_494be4;
    }
    ctx->pc = 0x494BDCu;
    SET_GPR_U32(ctx, 31, 0x494BE4u);
    ctx->pc = 0x494BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494BDCu;
    // 0x494be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493B50u, 0x494BDCu, 0x494BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494BE4u;
label_494be4:
    // 0x494be4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x494be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_494be8:
    // 0x494be8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x494be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_494bec:
    // 0x494bec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x494becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_494bf0:
    // 0x494bf0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_494bf4:
    if (ctx->pc == 0x494BF4u) {
        ctx->pc = 0x494BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BF0u;
        // 0x494bf4: 0xa2720035  sb          $s2, 0x35($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494BF8u;
        goto label_494bf8;
    }
    ctx->pc = 0x494BF0u;
    {
        const bool branch_taken_0x494bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x494BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494BF0u;
        // 0x494bf4: 0xa2720035  sb          $s2, 0x35($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494bf0) {
            ctx->pc = 0x494C04u;
            goto label_494c04;
        }
    }
    ctx->pc = 0x494BF8u;
label_494bf8:
    // 0x494bf8: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x494bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_494bfc:
    // 0x494bfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x494bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_494c00:
    // 0x494c00: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x494c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_494c04:
    // 0x494c04: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_494c08:
    if (ctx->pc == 0x494C08u) {
        ctx->pc = 0x494C0Cu;
        goto label_494c0c;
    }
    ctx->pc = 0x494C04u;
    {
        const bool branch_taken_0x494c04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c04) {
            ctx->pc = 0x494C18u;
            goto label_494c18;
        }
    }
    ctx->pc = 0x494C0Cu;
label_494c0c:
    // 0x494c0c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x494c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_494c10:
    // 0x494c10: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x494c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_494c14:
    // 0x494c14: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x494c14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_494c18:
    // 0x494c18: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_494c1c:
    if (ctx->pc == 0x494C1Cu) {
        ctx->pc = 0x494C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C18u;
        // 0x494c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494C20u;
        goto label_494c20;
    }
    ctx->pc = 0x494C18u;
    {
        const bool branch_taken_0x494c18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x494C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C18u;
        // 0x494c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494c18) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494C20u;
label_494c20:
    // 0x494c20: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x494c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_494c24:
    // 0x494c24: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x494c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_494c28:
    // 0x494c28: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x494c28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_494c2c:
    // 0x494c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494c30:
    // 0x494c30: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x494c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_494c34:
    // 0x494c34: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x494c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_494c38:
    // 0x494c38: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x494c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_494c3c:
    // 0x494c3c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x494c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_494c40:
    // 0x494c40: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x494c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_494c44:
    // 0x494c44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x494c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_494c48:
    // 0x494c48: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x494c48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_494c4c:
    // 0x494c4c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x494c4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_494c50:
    // 0x494c50: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x494c50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_494c54:
    // 0x494c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x494c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_494c58:
    // 0x494c58: 0x3e00008  jr          $ra
label_494c5c:
    if (ctx->pc == 0x494C5Cu) {
        ctx->pc = 0x494C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C58u;
        // 0x494c5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494C60u;
        goto label_fallthrough_0x494c58;
    }
    ctx->pc = 0x494C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C58u;
        // 0x494c5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x494c58:
    ctx->pc = 0x494C60u;
}
