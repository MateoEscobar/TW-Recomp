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

// Function: sub_00107458
// Address: 0x107458 - 0x107f10
void sub_00107458_0x107458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107458_0x107458");
#endif

    switch (ctx->pc) {
        case 0x107458u: goto label_107458;
        case 0x10745cu: goto label_10745c;
        case 0x107460u: goto label_107460;
        case 0x107464u: goto label_107464;
        case 0x107468u: goto label_107468;
        case 0x10746cu: goto label_10746c;
        case 0x107470u: goto label_107470;
        case 0x107474u: goto label_107474;
        case 0x107478u: goto label_107478;
        case 0x10747cu: goto label_10747c;
        case 0x107480u: goto label_107480;
        case 0x107484u: goto label_107484;
        case 0x107488u: goto label_107488;
        case 0x10748cu: goto label_10748c;
        case 0x107490u: goto label_107490;
        case 0x107494u: goto label_107494;
        case 0x107498u: goto label_107498;
        case 0x10749cu: goto label_10749c;
        case 0x1074a0u: goto label_1074a0;
        case 0x1074a4u: goto label_1074a4;
        case 0x1074a8u: goto label_1074a8;
        case 0x1074acu: goto label_1074ac;
        case 0x1074b0u: goto label_1074b0;
        case 0x1074b4u: goto label_1074b4;
        case 0x1074b8u: goto label_1074b8;
        case 0x1074bcu: goto label_1074bc;
        case 0x1074c0u: goto label_1074c0;
        case 0x1074c4u: goto label_1074c4;
        case 0x1074c8u: goto label_1074c8;
        case 0x1074ccu: goto label_1074cc;
        case 0x1074d0u: goto label_1074d0;
        case 0x1074d4u: goto label_1074d4;
        case 0x1074d8u: goto label_1074d8;
        case 0x1074dcu: goto label_1074dc;
        case 0x1074e0u: goto label_1074e0;
        case 0x1074e4u: goto label_1074e4;
        case 0x1074e8u: goto label_1074e8;
        case 0x1074ecu: goto label_1074ec;
        case 0x1074f0u: goto label_1074f0;
        case 0x1074f4u: goto label_1074f4;
        case 0x1074f8u: goto label_1074f8;
        case 0x1074fcu: goto label_1074fc;
        case 0x107500u: goto label_107500;
        case 0x107504u: goto label_107504;
        case 0x107508u: goto label_107508;
        case 0x10750cu: goto label_10750c;
        case 0x107510u: goto label_107510;
        case 0x107514u: goto label_107514;
        case 0x107518u: goto label_107518;
        case 0x10751cu: goto label_10751c;
        case 0x107520u: goto label_107520;
        case 0x107524u: goto label_107524;
        case 0x107528u: goto label_107528;
        case 0x10752cu: goto label_10752c;
        case 0x107530u: goto label_107530;
        case 0x107534u: goto label_107534;
        case 0x107538u: goto label_107538;
        case 0x10753cu: goto label_10753c;
        case 0x107540u: goto label_107540;
        case 0x107544u: goto label_107544;
        case 0x107548u: goto label_107548;
        case 0x10754cu: goto label_10754c;
        case 0x107550u: goto label_107550;
        case 0x107554u: goto label_107554;
        case 0x107558u: goto label_107558;
        case 0x10755cu: goto label_10755c;
        case 0x107560u: goto label_107560;
        case 0x107564u: goto label_107564;
        case 0x107568u: goto label_107568;
        case 0x10756cu: goto label_10756c;
        case 0x107570u: goto label_107570;
        case 0x107574u: goto label_107574;
        case 0x107578u: goto label_107578;
        case 0x10757cu: goto label_10757c;
        case 0x107580u: goto label_107580;
        case 0x107584u: goto label_107584;
        case 0x107588u: goto label_107588;
        case 0x10758cu: goto label_10758c;
        case 0x107590u: goto label_107590;
        case 0x107594u: goto label_107594;
        case 0x107598u: goto label_107598;
        case 0x10759cu: goto label_10759c;
        case 0x1075a0u: goto label_1075a0;
        case 0x1075a4u: goto label_1075a4;
        case 0x1075a8u: goto label_1075a8;
        case 0x1075acu: goto label_1075ac;
        case 0x1075b0u: goto label_1075b0;
        case 0x1075b4u: goto label_1075b4;
        case 0x1075b8u: goto label_1075b8;
        case 0x1075bcu: goto label_1075bc;
        case 0x1075c0u: goto label_1075c0;
        case 0x1075c4u: goto label_1075c4;
        case 0x1075c8u: goto label_1075c8;
        case 0x1075ccu: goto label_1075cc;
        case 0x1075d0u: goto label_1075d0;
        case 0x1075d4u: goto label_1075d4;
        case 0x1075d8u: goto label_1075d8;
        case 0x1075dcu: goto label_1075dc;
        case 0x1075e0u: goto label_1075e0;
        case 0x1075e4u: goto label_1075e4;
        case 0x1075e8u: goto label_1075e8;
        case 0x1075ecu: goto label_1075ec;
        case 0x1075f0u: goto label_1075f0;
        case 0x1075f4u: goto label_1075f4;
        case 0x1075f8u: goto label_1075f8;
        case 0x1075fcu: goto label_1075fc;
        case 0x107600u: goto label_107600;
        case 0x107604u: goto label_107604;
        case 0x107608u: goto label_107608;
        case 0x10760cu: goto label_10760c;
        case 0x107610u: goto label_107610;
        case 0x107614u: goto label_107614;
        case 0x107618u: goto label_107618;
        case 0x10761cu: goto label_10761c;
        case 0x107620u: goto label_107620;
        case 0x107624u: goto label_107624;
        case 0x107628u: goto label_107628;
        case 0x10762cu: goto label_10762c;
        case 0x107630u: goto label_107630;
        case 0x107634u: goto label_107634;
        case 0x107638u: goto label_107638;
        case 0x10763cu: goto label_10763c;
        case 0x107640u: goto label_107640;
        case 0x107644u: goto label_107644;
        case 0x107648u: goto label_107648;
        case 0x10764cu: goto label_10764c;
        case 0x107650u: goto label_107650;
        case 0x107654u: goto label_107654;
        case 0x107658u: goto label_107658;
        case 0x10765cu: goto label_10765c;
        case 0x107660u: goto label_107660;
        case 0x107664u: goto label_107664;
        case 0x107668u: goto label_107668;
        case 0x10766cu: goto label_10766c;
        case 0x107670u: goto label_107670;
        case 0x107674u: goto label_107674;
        case 0x107678u: goto label_107678;
        case 0x10767cu: goto label_10767c;
        case 0x107680u: goto label_107680;
        case 0x107684u: goto label_107684;
        case 0x107688u: goto label_107688;
        case 0x10768cu: goto label_10768c;
        case 0x107690u: goto label_107690;
        case 0x107694u: goto label_107694;
        case 0x107698u: goto label_107698;
        case 0x10769cu: goto label_10769c;
        case 0x1076a0u: goto label_1076a0;
        case 0x1076a4u: goto label_1076a4;
        case 0x1076a8u: goto label_1076a8;
        case 0x1076acu: goto label_1076ac;
        case 0x1076b0u: goto label_1076b0;
        case 0x1076b4u: goto label_1076b4;
        case 0x1076b8u: goto label_1076b8;
        case 0x1076bcu: goto label_1076bc;
        case 0x1076c0u: goto label_1076c0;
        case 0x1076c4u: goto label_1076c4;
        case 0x1076c8u: goto label_1076c8;
        case 0x1076ccu: goto label_1076cc;
        case 0x1076d0u: goto label_1076d0;
        case 0x1076d4u: goto label_1076d4;
        case 0x1076d8u: goto label_1076d8;
        case 0x1076dcu: goto label_1076dc;
        case 0x1076e0u: goto label_1076e0;
        case 0x1076e4u: goto label_1076e4;
        case 0x1076e8u: goto label_1076e8;
        case 0x1076ecu: goto label_1076ec;
        case 0x1076f0u: goto label_1076f0;
        case 0x1076f4u: goto label_1076f4;
        case 0x1076f8u: goto label_1076f8;
        case 0x1076fcu: goto label_1076fc;
        case 0x107700u: goto label_107700;
        case 0x107704u: goto label_107704;
        case 0x107708u: goto label_107708;
        case 0x10770cu: goto label_10770c;
        case 0x107710u: goto label_107710;
        case 0x107714u: goto label_107714;
        case 0x107718u: goto label_107718;
        case 0x10771cu: goto label_10771c;
        case 0x107720u: goto label_107720;
        case 0x107724u: goto label_107724;
        case 0x107728u: goto label_107728;
        case 0x10772cu: goto label_10772c;
        case 0x107730u: goto label_107730;
        case 0x107734u: goto label_107734;
        case 0x107738u: goto label_107738;
        case 0x10773cu: goto label_10773c;
        case 0x107740u: goto label_107740;
        case 0x107744u: goto label_107744;
        case 0x107748u: goto label_107748;
        case 0x10774cu: goto label_10774c;
        case 0x107750u: goto label_107750;
        case 0x107754u: goto label_107754;
        case 0x107758u: goto label_107758;
        case 0x10775cu: goto label_10775c;
        case 0x107760u: goto label_107760;
        case 0x107764u: goto label_107764;
        case 0x107768u: goto label_107768;
        case 0x10776cu: goto label_10776c;
        case 0x107770u: goto label_107770;
        case 0x107774u: goto label_107774;
        case 0x107778u: goto label_107778;
        case 0x10777cu: goto label_10777c;
        case 0x107780u: goto label_107780;
        case 0x107784u: goto label_107784;
        case 0x107788u: goto label_107788;
        case 0x10778cu: goto label_10778c;
        case 0x107790u: goto label_107790;
        case 0x107794u: goto label_107794;
        case 0x107798u: goto label_107798;
        case 0x10779cu: goto label_10779c;
        case 0x1077a0u: goto label_1077a0;
        case 0x1077a4u: goto label_1077a4;
        case 0x1077a8u: goto label_1077a8;
        case 0x1077acu: goto label_1077ac;
        case 0x1077b0u: goto label_1077b0;
        case 0x1077b4u: goto label_1077b4;
        case 0x1077b8u: goto label_1077b8;
        case 0x1077bcu: goto label_1077bc;
        case 0x1077c0u: goto label_1077c0;
        case 0x1077c4u: goto label_1077c4;
        case 0x1077c8u: goto label_1077c8;
        case 0x1077ccu: goto label_1077cc;
        case 0x1077d0u: goto label_1077d0;
        case 0x1077d4u: goto label_1077d4;
        case 0x1077d8u: goto label_1077d8;
        case 0x1077dcu: goto label_1077dc;
        case 0x1077e0u: goto label_1077e0;
        case 0x1077e4u: goto label_1077e4;
        case 0x1077e8u: goto label_1077e8;
        case 0x1077ecu: goto label_1077ec;
        case 0x1077f0u: goto label_1077f0;
        case 0x1077f4u: goto label_1077f4;
        case 0x1077f8u: goto label_1077f8;
        case 0x1077fcu: goto label_1077fc;
        case 0x107800u: goto label_107800;
        case 0x107804u: goto label_107804;
        case 0x107808u: goto label_107808;
        case 0x10780cu: goto label_10780c;
        case 0x107810u: goto label_107810;
        case 0x107814u: goto label_107814;
        case 0x107818u: goto label_107818;
        case 0x10781cu: goto label_10781c;
        case 0x107820u: goto label_107820;
        case 0x107824u: goto label_107824;
        case 0x107828u: goto label_107828;
        case 0x10782cu: goto label_10782c;
        case 0x107830u: goto label_107830;
        case 0x107834u: goto label_107834;
        case 0x107838u: goto label_107838;
        case 0x10783cu: goto label_10783c;
        case 0x107840u: goto label_107840;
        case 0x107844u: goto label_107844;
        case 0x107848u: goto label_107848;
        case 0x10784cu: goto label_10784c;
        case 0x107850u: goto label_107850;
        case 0x107854u: goto label_107854;
        case 0x107858u: goto label_107858;
        case 0x10785cu: goto label_10785c;
        case 0x107860u: goto label_107860;
        case 0x107864u: goto label_107864;
        case 0x107868u: goto label_107868;
        case 0x10786cu: goto label_10786c;
        case 0x107870u: goto label_107870;
        case 0x107874u: goto label_107874;
        case 0x107878u: goto label_107878;
        case 0x10787cu: goto label_10787c;
        case 0x107880u: goto label_107880;
        case 0x107884u: goto label_107884;
        case 0x107888u: goto label_107888;
        case 0x10788cu: goto label_10788c;
        case 0x107890u: goto label_107890;
        case 0x107894u: goto label_107894;
        case 0x107898u: goto label_107898;
        case 0x10789cu: goto label_10789c;
        case 0x1078a0u: goto label_1078a0;
        case 0x1078a4u: goto label_1078a4;
        case 0x1078a8u: goto label_1078a8;
        case 0x1078acu: goto label_1078ac;
        case 0x1078b0u: goto label_1078b0;
        case 0x1078b4u: goto label_1078b4;
        case 0x1078b8u: goto label_1078b8;
        case 0x1078bcu: goto label_1078bc;
        case 0x1078c0u: goto label_1078c0;
        case 0x1078c4u: goto label_1078c4;
        case 0x1078c8u: goto label_1078c8;
        case 0x1078ccu: goto label_1078cc;
        case 0x1078d0u: goto label_1078d0;
        case 0x1078d4u: goto label_1078d4;
        case 0x1078d8u: goto label_1078d8;
        case 0x1078dcu: goto label_1078dc;
        case 0x1078e0u: goto label_1078e0;
        case 0x1078e4u: goto label_1078e4;
        case 0x1078e8u: goto label_1078e8;
        case 0x1078ecu: goto label_1078ec;
        case 0x1078f0u: goto label_1078f0;
        case 0x1078f4u: goto label_1078f4;
        case 0x1078f8u: goto label_1078f8;
        case 0x1078fcu: goto label_1078fc;
        case 0x107900u: goto label_107900;
        case 0x107904u: goto label_107904;
        case 0x107908u: goto label_107908;
        case 0x10790cu: goto label_10790c;
        case 0x107910u: goto label_107910;
        case 0x107914u: goto label_107914;
        case 0x107918u: goto label_107918;
        case 0x10791cu: goto label_10791c;
        case 0x107920u: goto label_107920;
        case 0x107924u: goto label_107924;
        case 0x107928u: goto label_107928;
        case 0x10792cu: goto label_10792c;
        case 0x107930u: goto label_107930;
        case 0x107934u: goto label_107934;
        case 0x107938u: goto label_107938;
        case 0x10793cu: goto label_10793c;
        case 0x107940u: goto label_107940;
        case 0x107944u: goto label_107944;
        case 0x107948u: goto label_107948;
        case 0x10794cu: goto label_10794c;
        case 0x107950u: goto label_107950;
        case 0x107954u: goto label_107954;
        case 0x107958u: goto label_107958;
        case 0x10795cu: goto label_10795c;
        case 0x107960u: goto label_107960;
        case 0x107964u: goto label_107964;
        case 0x107968u: goto label_107968;
        case 0x10796cu: goto label_10796c;
        case 0x107970u: goto label_107970;
        case 0x107974u: goto label_107974;
        case 0x107978u: goto label_107978;
        case 0x10797cu: goto label_10797c;
        case 0x107980u: goto label_107980;
        case 0x107984u: goto label_107984;
        case 0x107988u: goto label_107988;
        case 0x10798cu: goto label_10798c;
        case 0x107990u: goto label_107990;
        case 0x107994u: goto label_107994;
        case 0x107998u: goto label_107998;
        case 0x10799cu: goto label_10799c;
        case 0x1079a0u: goto label_1079a0;
        case 0x1079a4u: goto label_1079a4;
        case 0x1079a8u: goto label_1079a8;
        case 0x1079acu: goto label_1079ac;
        case 0x1079b0u: goto label_1079b0;
        case 0x1079b4u: goto label_1079b4;
        case 0x1079b8u: goto label_1079b8;
        case 0x1079bcu: goto label_1079bc;
        case 0x1079c0u: goto label_1079c0;
        case 0x1079c4u: goto label_1079c4;
        case 0x1079c8u: goto label_1079c8;
        case 0x1079ccu: goto label_1079cc;
        case 0x1079d0u: goto label_1079d0;
        case 0x1079d4u: goto label_1079d4;
        case 0x1079d8u: goto label_1079d8;
        case 0x1079dcu: goto label_1079dc;
        case 0x1079e0u: goto label_1079e0;
        case 0x1079e4u: goto label_1079e4;
        case 0x1079e8u: goto label_1079e8;
        case 0x1079ecu: goto label_1079ec;
        case 0x1079f0u: goto label_1079f0;
        case 0x1079f4u: goto label_1079f4;
        case 0x1079f8u: goto label_1079f8;
        case 0x1079fcu: goto label_1079fc;
        case 0x107a00u: goto label_107a00;
        case 0x107a04u: goto label_107a04;
        case 0x107a08u: goto label_107a08;
        case 0x107a0cu: goto label_107a0c;
        case 0x107a10u: goto label_107a10;
        case 0x107a14u: goto label_107a14;
        case 0x107a18u: goto label_107a18;
        case 0x107a1cu: goto label_107a1c;
        case 0x107a20u: goto label_107a20;
        case 0x107a24u: goto label_107a24;
        case 0x107a28u: goto label_107a28;
        case 0x107a2cu: goto label_107a2c;
        case 0x107a30u: goto label_107a30;
        case 0x107a34u: goto label_107a34;
        case 0x107a38u: goto label_107a38;
        case 0x107a3cu: goto label_107a3c;
        case 0x107a40u: goto label_107a40;
        case 0x107a44u: goto label_107a44;
        case 0x107a48u: goto label_107a48;
        case 0x107a4cu: goto label_107a4c;
        case 0x107a50u: goto label_107a50;
        case 0x107a54u: goto label_107a54;
        case 0x107a58u: goto label_107a58;
        case 0x107a5cu: goto label_107a5c;
        case 0x107a60u: goto label_107a60;
        case 0x107a64u: goto label_107a64;
        case 0x107a68u: goto label_107a68;
        case 0x107a6cu: goto label_107a6c;
        case 0x107a70u: goto label_107a70;
        case 0x107a74u: goto label_107a74;
        case 0x107a78u: goto label_107a78;
        case 0x107a7cu: goto label_107a7c;
        case 0x107a80u: goto label_107a80;
        case 0x107a84u: goto label_107a84;
        case 0x107a88u: goto label_107a88;
        case 0x107a8cu: goto label_107a8c;
        case 0x107a90u: goto label_107a90;
        case 0x107a94u: goto label_107a94;
        case 0x107a98u: goto label_107a98;
        case 0x107a9cu: goto label_107a9c;
        case 0x107aa0u: goto label_107aa0;
        case 0x107aa4u: goto label_107aa4;
        case 0x107aa8u: goto label_107aa8;
        case 0x107aacu: goto label_107aac;
        case 0x107ab0u: goto label_107ab0;
        case 0x107ab4u: goto label_107ab4;
        case 0x107ab8u: goto label_107ab8;
        case 0x107abcu: goto label_107abc;
        case 0x107ac0u: goto label_107ac0;
        case 0x107ac4u: goto label_107ac4;
        case 0x107ac8u: goto label_107ac8;
        case 0x107accu: goto label_107acc;
        case 0x107ad0u: goto label_107ad0;
        case 0x107ad4u: goto label_107ad4;
        case 0x107ad8u: goto label_107ad8;
        case 0x107adcu: goto label_107adc;
        case 0x107ae0u: goto label_107ae0;
        case 0x107ae4u: goto label_107ae4;
        case 0x107ae8u: goto label_107ae8;
        case 0x107aecu: goto label_107aec;
        case 0x107af0u: goto label_107af0;
        case 0x107af4u: goto label_107af4;
        case 0x107af8u: goto label_107af8;
        case 0x107afcu: goto label_107afc;
        case 0x107b00u: goto label_107b00;
        case 0x107b04u: goto label_107b04;
        case 0x107b08u: goto label_107b08;
        case 0x107b0cu: goto label_107b0c;
        case 0x107b10u: goto label_107b10;
        case 0x107b14u: goto label_107b14;
        case 0x107b18u: goto label_107b18;
        case 0x107b1cu: goto label_107b1c;
        case 0x107b20u: goto label_107b20;
        case 0x107b24u: goto label_107b24;
        case 0x107b28u: goto label_107b28;
        case 0x107b2cu: goto label_107b2c;
        case 0x107b30u: goto label_107b30;
        case 0x107b34u: goto label_107b34;
        case 0x107b38u: goto label_107b38;
        case 0x107b3cu: goto label_107b3c;
        case 0x107b40u: goto label_107b40;
        case 0x107b44u: goto label_107b44;
        case 0x107b48u: goto label_107b48;
        case 0x107b4cu: goto label_107b4c;
        case 0x107b50u: goto label_107b50;
        case 0x107b54u: goto label_107b54;
        case 0x107b58u: goto label_107b58;
        case 0x107b5cu: goto label_107b5c;
        case 0x107b60u: goto label_107b60;
        case 0x107b64u: goto label_107b64;
        case 0x107b68u: goto label_107b68;
        case 0x107b6cu: goto label_107b6c;
        case 0x107b70u: goto label_107b70;
        case 0x107b74u: goto label_107b74;
        case 0x107b78u: goto label_107b78;
        case 0x107b7cu: goto label_107b7c;
        case 0x107b80u: goto label_107b80;
        case 0x107b84u: goto label_107b84;
        case 0x107b88u: goto label_107b88;
        case 0x107b8cu: goto label_107b8c;
        case 0x107b90u: goto label_107b90;
        case 0x107b94u: goto label_107b94;
        case 0x107b98u: goto label_107b98;
        case 0x107b9cu: goto label_107b9c;
        case 0x107ba0u: goto label_107ba0;
        case 0x107ba4u: goto label_107ba4;
        case 0x107ba8u: goto label_107ba8;
        case 0x107bacu: goto label_107bac;
        case 0x107bb0u: goto label_107bb0;
        case 0x107bb4u: goto label_107bb4;
        case 0x107bb8u: goto label_107bb8;
        case 0x107bbcu: goto label_107bbc;
        case 0x107bc0u: goto label_107bc0;
        case 0x107bc4u: goto label_107bc4;
        case 0x107bc8u: goto label_107bc8;
        case 0x107bccu: goto label_107bcc;
        case 0x107bd0u: goto label_107bd0;
        case 0x107bd4u: goto label_107bd4;
        case 0x107bd8u: goto label_107bd8;
        case 0x107bdcu: goto label_107bdc;
        case 0x107be0u: goto label_107be0;
        case 0x107be4u: goto label_107be4;
        case 0x107be8u: goto label_107be8;
        case 0x107becu: goto label_107bec;
        case 0x107bf0u: goto label_107bf0;
        case 0x107bf4u: goto label_107bf4;
        case 0x107bf8u: goto label_107bf8;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c00u: goto label_107c00;
        case 0x107c04u: goto label_107c04;
        case 0x107c08u: goto label_107c08;
        case 0x107c0cu: goto label_107c0c;
        case 0x107c10u: goto label_107c10;
        case 0x107c14u: goto label_107c14;
        case 0x107c18u: goto label_107c18;
        case 0x107c1cu: goto label_107c1c;
        case 0x107c20u: goto label_107c20;
        case 0x107c24u: goto label_107c24;
        case 0x107c28u: goto label_107c28;
        case 0x107c2cu: goto label_107c2c;
        case 0x107c30u: goto label_107c30;
        case 0x107c34u: goto label_107c34;
        case 0x107c38u: goto label_107c38;
        case 0x107c3cu: goto label_107c3c;
        case 0x107c40u: goto label_107c40;
        case 0x107c44u: goto label_107c44;
        case 0x107c48u: goto label_107c48;
        case 0x107c4cu: goto label_107c4c;
        case 0x107c50u: goto label_107c50;
        case 0x107c54u: goto label_107c54;
        case 0x107c58u: goto label_107c58;
        case 0x107c5cu: goto label_107c5c;
        case 0x107c60u: goto label_107c60;
        case 0x107c64u: goto label_107c64;
        case 0x107c68u: goto label_107c68;
        case 0x107c6cu: goto label_107c6c;
        case 0x107c70u: goto label_107c70;
        case 0x107c74u: goto label_107c74;
        case 0x107c78u: goto label_107c78;
        case 0x107c7cu: goto label_107c7c;
        case 0x107c80u: goto label_107c80;
        case 0x107c84u: goto label_107c84;
        case 0x107c88u: goto label_107c88;
        case 0x107c8cu: goto label_107c8c;
        case 0x107c90u: goto label_107c90;
        case 0x107c94u: goto label_107c94;
        case 0x107c98u: goto label_107c98;
        case 0x107c9cu: goto label_107c9c;
        case 0x107ca0u: goto label_107ca0;
        case 0x107ca4u: goto label_107ca4;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cacu: goto label_107cac;
        case 0x107cb0u: goto label_107cb0;
        case 0x107cb4u: goto label_107cb4;
        case 0x107cb8u: goto label_107cb8;
        case 0x107cbcu: goto label_107cbc;
        case 0x107cc0u: goto label_107cc0;
        case 0x107cc4u: goto label_107cc4;
        case 0x107cc8u: goto label_107cc8;
        case 0x107cccu: goto label_107ccc;
        case 0x107cd0u: goto label_107cd0;
        case 0x107cd4u: goto label_107cd4;
        case 0x107cd8u: goto label_107cd8;
        case 0x107cdcu: goto label_107cdc;
        case 0x107ce0u: goto label_107ce0;
        case 0x107ce4u: goto label_107ce4;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cecu: goto label_107cec;
        case 0x107cf0u: goto label_107cf0;
        case 0x107cf4u: goto label_107cf4;
        case 0x107cf8u: goto label_107cf8;
        case 0x107cfcu: goto label_107cfc;
        case 0x107d00u: goto label_107d00;
        case 0x107d04u: goto label_107d04;
        case 0x107d08u: goto label_107d08;
        case 0x107d0cu: goto label_107d0c;
        case 0x107d10u: goto label_107d10;
        case 0x107d14u: goto label_107d14;
        case 0x107d18u: goto label_107d18;
        case 0x107d1cu: goto label_107d1c;
        case 0x107d20u: goto label_107d20;
        case 0x107d24u: goto label_107d24;
        case 0x107d28u: goto label_107d28;
        case 0x107d2cu: goto label_107d2c;
        case 0x107d30u: goto label_107d30;
        case 0x107d34u: goto label_107d34;
        case 0x107d38u: goto label_107d38;
        case 0x107d3cu: goto label_107d3c;
        case 0x107d40u: goto label_107d40;
        case 0x107d44u: goto label_107d44;
        case 0x107d48u: goto label_107d48;
        case 0x107d4cu: goto label_107d4c;
        case 0x107d50u: goto label_107d50;
        case 0x107d54u: goto label_107d54;
        case 0x107d58u: goto label_107d58;
        case 0x107d5cu: goto label_107d5c;
        case 0x107d60u: goto label_107d60;
        case 0x107d64u: goto label_107d64;
        case 0x107d68u: goto label_107d68;
        case 0x107d6cu: goto label_107d6c;
        case 0x107d70u: goto label_107d70;
        case 0x107d74u: goto label_107d74;
        case 0x107d78u: goto label_107d78;
        case 0x107d7cu: goto label_107d7c;
        case 0x107d80u: goto label_107d80;
        case 0x107d84u: goto label_107d84;
        case 0x107d88u: goto label_107d88;
        case 0x107d8cu: goto label_107d8c;
        case 0x107d90u: goto label_107d90;
        case 0x107d94u: goto label_107d94;
        case 0x107d98u: goto label_107d98;
        case 0x107d9cu: goto label_107d9c;
        case 0x107da0u: goto label_107da0;
        case 0x107da4u: goto label_107da4;
        case 0x107da8u: goto label_107da8;
        case 0x107dacu: goto label_107dac;
        case 0x107db0u: goto label_107db0;
        case 0x107db4u: goto label_107db4;
        case 0x107db8u: goto label_107db8;
        case 0x107dbcu: goto label_107dbc;
        case 0x107dc0u: goto label_107dc0;
        case 0x107dc4u: goto label_107dc4;
        case 0x107dc8u: goto label_107dc8;
        case 0x107dccu: goto label_107dcc;
        case 0x107dd0u: goto label_107dd0;
        case 0x107dd4u: goto label_107dd4;
        case 0x107dd8u: goto label_107dd8;
        case 0x107ddcu: goto label_107ddc;
        case 0x107de0u: goto label_107de0;
        case 0x107de4u: goto label_107de4;
        case 0x107de8u: goto label_107de8;
        case 0x107decu: goto label_107dec;
        case 0x107df0u: goto label_107df0;
        case 0x107df4u: goto label_107df4;
        case 0x107df8u: goto label_107df8;
        case 0x107dfcu: goto label_107dfc;
        case 0x107e00u: goto label_107e00;
        case 0x107e04u: goto label_107e04;
        case 0x107e08u: goto label_107e08;
        case 0x107e0cu: goto label_107e0c;
        case 0x107e10u: goto label_107e10;
        case 0x107e14u: goto label_107e14;
        case 0x107e18u: goto label_107e18;
        case 0x107e1cu: goto label_107e1c;
        case 0x107e20u: goto label_107e20;
        case 0x107e24u: goto label_107e24;
        case 0x107e28u: goto label_107e28;
        case 0x107e2cu: goto label_107e2c;
        case 0x107e30u: goto label_107e30;
        case 0x107e34u: goto label_107e34;
        case 0x107e38u: goto label_107e38;
        case 0x107e3cu: goto label_107e3c;
        case 0x107e40u: goto label_107e40;
        case 0x107e44u: goto label_107e44;
        case 0x107e48u: goto label_107e48;
        case 0x107e4cu: goto label_107e4c;
        case 0x107e50u: goto label_107e50;
        case 0x107e54u: goto label_107e54;
        case 0x107e58u: goto label_107e58;
        case 0x107e5cu: goto label_107e5c;
        case 0x107e60u: goto label_107e60;
        case 0x107e64u: goto label_107e64;
        case 0x107e68u: goto label_107e68;
        case 0x107e6cu: goto label_107e6c;
        case 0x107e70u: goto label_107e70;
        case 0x107e74u: goto label_107e74;
        case 0x107e78u: goto label_107e78;
        case 0x107e7cu: goto label_107e7c;
        case 0x107e80u: goto label_107e80;
        case 0x107e84u: goto label_107e84;
        case 0x107e88u: goto label_107e88;
        case 0x107e8cu: goto label_107e8c;
        case 0x107e90u: goto label_107e90;
        case 0x107e94u: goto label_107e94;
        case 0x107e98u: goto label_107e98;
        case 0x107e9cu: goto label_107e9c;
        case 0x107ea0u: goto label_107ea0;
        case 0x107ea4u: goto label_107ea4;
        case 0x107ea8u: goto label_107ea8;
        case 0x107eacu: goto label_107eac;
        case 0x107eb0u: goto label_107eb0;
        case 0x107eb4u: goto label_107eb4;
        case 0x107eb8u: goto label_107eb8;
        case 0x107ebcu: goto label_107ebc;
        case 0x107ec0u: goto label_107ec0;
        case 0x107ec4u: goto label_107ec4;
        case 0x107ec8u: goto label_107ec8;
        case 0x107eccu: goto label_107ecc;
        case 0x107ed0u: goto label_107ed0;
        case 0x107ed4u: goto label_107ed4;
        case 0x107ed8u: goto label_107ed8;
        case 0x107edcu: goto label_107edc;
        case 0x107ee0u: goto label_107ee0;
        case 0x107ee4u: goto label_107ee4;
        case 0x107ee8u: goto label_107ee8;
        case 0x107eecu: goto label_107eec;
        case 0x107ef0u: goto label_107ef0;
        case 0x107ef4u: goto label_107ef4;
        case 0x107ef8u: goto label_107ef8;
        case 0x107efcu: goto label_107efc;
        case 0x107f00u: goto label_107f00;
        case 0x107f04u: goto label_107f04;
        case 0x107f08u: goto label_107f08;
        case 0x107f0cu: goto label_107f0c;
        default: break;
    }

    ctx->pc = 0x107458u;

label_107458:
    // 0x107458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x107458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10745c:
    // 0x10745c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_107460:
    // 0x107460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107464:
    // 0x107464: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x107464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_107468:
    // 0x107468: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x107468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_10746c:
    // 0x10746c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_107470:
    // 0x107470: 0xc0420dc  jal         func_108370
label_107474:
    if (ctx->pc == 0x107474u) {
        ctx->pc = 0x107474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107470u;
        // 0x107474: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107478u;
        goto label_107478;
    }
    ctx->pc = 0x107470u;
    SET_GPR_U32(ctx, 31, 0x107478u);
    ctx->pc = 0x107474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107470u;
    // 0x107474: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x107470u, 0x107478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107478u;
label_107478:
    // 0x107478: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x107478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_10747c:
    // 0x10747c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x10747cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_107480:
    // 0x107480: 0xc604002c  lwc1        $f4, 0x2C($s0)
    ctx->pc = 0x107480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_107484:
    // 0x107484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x107484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107488:
    // 0x107488: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x107488u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_10748c:
    // 0x10748c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x10748cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107490:
    // 0x107490: 0x0  nop
    ctx->pc = 0x107490u;
    // NOP
label_107494:
    // 0x107494: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
label_107498:
    if (ctx->pc == 0x107498u) {
        ctx->pc = 0x107498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107494u;
        // 0x107498: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10749Cu;
        goto label_10749c;
    }
    ctx->pc = 0x107494u;
    {
        const bool branch_taken_0x107494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107494) {
            ctx->pc = 0x107498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107494u;
            // 0x107498: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10757Cu;
            goto label_10757c;
        }
    }
    ctx->pc = 0x10749Cu;
label_10749c:
    // 0x10749c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x10749cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1074a0:
    // 0x1074a0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1074a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1074a4:
    // 0x1074a4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_1074a8:
    if (ctx->pc == 0x1074A8u) {
        ctx->pc = 0x1074A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074A4u;
        // 0x1074a8: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074ACu;
        goto label_1074ac;
    }
    ctx->pc = 0x1074A4u;
    {
        const bool branch_taken_0x1074a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1074A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074A4u;
        // 0x1074a8: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074a4) {
            ctx->pc = 0x107510u;
            goto label_107510;
        }
    }
    ctx->pc = 0x1074ACu;
label_1074ac:
    // 0x1074ac: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1074acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1074b0:
    // 0x1074b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1074b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1074b4:
    // 0x1074b4: 0x0  nop
    ctx->pc = 0x1074b4u;
    // NOP
label_1074b8:
    // 0x1074b8: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
label_1074bc:
    if (ctx->pc == 0x1074BCu) {
        ctx->pc = 0x1074BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074B8u;
        // 0x1074bc: 0xe603002c  swc1        $f3, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074C0u;
        goto label_1074c0;
    }
    ctx->pc = 0x1074B8u;
    {
        const bool branch_taken_0x1074b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1074b8) {
            ctx->pc = 0x1074BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1074B8u;
            // 0x1074bc: 0xe603002c  swc1        $f3, 0x2C($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107578u;
            goto label_107578;
        }
    }
    ctx->pc = 0x1074C0u;
label_1074c0:
    // 0x1074c0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1074c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_1074c4:
    // 0x1074c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1074c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1074c8:
    // 0x1074c8: 0x0  nop
    ctx->pc = 0x1074c8u;
    // NOP
label_1074cc:
    // 0x1074cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1074ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1074d0:
    // 0x1074d0: 0x0  nop
    ctx->pc = 0x1074d0u;
    // NOP
label_1074d4:
    // 0x1074d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1074d8:
    if (ctx->pc == 0x1074D8u) {
        ctx->pc = 0x1074DCu;
        goto label_1074dc;
    }
    ctx->pc = 0x1074D4u;
    {
        const bool branch_taken_0x1074d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1074d4) {
            ctx->pc = 0x1074ECu;
            goto label_1074ec;
        }
    }
    ctx->pc = 0x1074DCu;
label_1074dc:
    // 0x1074dc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1074dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1074e0:
    // 0x1074e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1074e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1074e4:
    // 0x1074e4: 0x0  nop
    ctx->pc = 0x1074e4u;
    // NOP
label_1074e8:
    // 0x1074e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1074e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1074ec:
    // 0x1074ec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1074ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1074f0:
    // 0x1074f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1074f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1074f4:
    // 0x1074f4: 0x0  nop
    ctx->pc = 0x1074f4u;
    // NOP
label_1074f8:
    // 0x1074f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1074f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1074fc:
    // 0x1074fc: 0x0  nop
    ctx->pc = 0x1074fcu;
    // NOP
label_107500:
    // 0x107500: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_107504:
    if (ctx->pc == 0x107504u) {
        ctx->pc = 0x107504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107500u;
        // 0x107504: 0x46010840  add.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107508u;
        goto label_107508;
    }
    ctx->pc = 0x107500u;
    {
        const bool branch_taken_0x107500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107500) {
            ctx->pc = 0x107504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107500u;
            // 0x107504: 0x46010840  add.s       $f1, $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x107508u;
            goto label_107508;
        }
    }
    ctx->pc = 0x107508u;
label_107508:
    // 0x107508: 0x1000001a  b           . + 4 + (0x1A << 2)
label_10750c:
    if (ctx->pc == 0x10750Cu) {
        ctx->pc = 0x10750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107508u;
        // 0x10750c: 0x46012001  sub.s       $f0, $f4, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107510u;
        goto label_107510;
    }
    ctx->pc = 0x107508u;
    {
        const bool branch_taken_0x107508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107508u;
        // 0x10750c: 0x46012001  sub.s       $f0, $f4, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107508) {
            ctx->pc = 0x107574u;
            goto label_107574;
        }
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x107510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107514:
    // 0x107514: 0x0  nop
    ctx->pc = 0x107514u;
    // NOP
label_107518:
    // 0x107518: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_10751c:
    if (ctx->pc == 0x10751Cu) {
        ctx->pc = 0x107520u;
        goto label_107520;
    }
    ctx->pc = 0x107518u;
    {
        const bool branch_taken_0x107518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107518) {
            ctx->pc = 0x107528u;
            goto label_107528;
        }
    }
    ctx->pc = 0x107520u;
label_107520:
    // 0x107520: 0x10000015  b           . + 4 + (0x15 << 2)
label_107524:
    if (ctx->pc == 0x107524u) {
        ctx->pc = 0x107524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107520u;
        // 0x107524: 0xe603002c  swc1        $f3, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107528u;
        goto label_107528;
    }
    ctx->pc = 0x107520u;
    {
        const bool branch_taken_0x107520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107520u;
        // 0x107524: 0xe603002c  swc1        $f3, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107520) {
            ctx->pc = 0x107578u;
            goto label_107578;
        }
    }
    ctx->pc = 0x107528u;
label_107528:
    // 0x107528: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x107528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_10752c:
    // 0x10752c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10752cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107530:
    // 0x107530: 0x0  nop
    ctx->pc = 0x107530u;
    // NOP
label_107534:
    // 0x107534: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x107534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107538:
    // 0x107538: 0x0  nop
    ctx->pc = 0x107538u;
    // NOP
label_10753c:
    // 0x10753c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_107540:
    if (ctx->pc == 0x107540u) {
        ctx->pc = 0x107544u;
        goto label_107544;
    }
    ctx->pc = 0x10753Cu;
    {
        const bool branch_taken_0x10753c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10753c) {
            ctx->pc = 0x107554u;
            goto label_107554;
        }
    }
    ctx->pc = 0x107544u;
label_107544:
    // 0x107544: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x107544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_107548:
    // 0x107548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10754c:
    // 0x10754c: 0x0  nop
    ctx->pc = 0x10754cu;
    // NOP
label_107550:
    // 0x107550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x107550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_107554:
    // 0x107554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_107558:
    // 0x107558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10755c:
    // 0x10755c: 0x0  nop
    ctx->pc = 0x10755cu;
    // NOP
label_107560:
    // 0x107560: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x107560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107564:
    // 0x107564: 0x0  nop
    ctx->pc = 0x107564u;
    // NOP
label_107568:
    // 0x107568: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10756c:
    if (ctx->pc == 0x10756Cu) {
        ctx->pc = 0x10756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107568u;
        // 0x10756c: 0x46010840  add.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107570u;
        goto label_107570;
    }
    ctx->pc = 0x107568u;
    {
        const bool branch_taken_0x107568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107568) {
            ctx->pc = 0x10756Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107568u;
            // 0x10756c: 0x46010840  add.s       $f1, $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x107570u;
            goto label_107570;
        }
    }
    ctx->pc = 0x107570u;
label_107570:
    // 0x107570: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x107570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_107574:
    // 0x107574: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x107574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_107578:
    // 0x107578: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x107578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10757c:
    // 0x10757c: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x10757cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_107580:
    // 0x107580: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x107580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_107584:
    // 0x107584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107588:
    // 0x107588: 0x0  nop
    ctx->pc = 0x107588u;
    // NOP
label_10758c:
    // 0x10758c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10758cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107590:
    // 0x107590: 0x0  nop
    ctx->pc = 0x107590u;
    // NOP
label_107594:
    // 0x107594: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_107598:
    if (ctx->pc == 0x107598u) {
        ctx->pc = 0x10759Cu;
        goto label_10759c;
    }
    ctx->pc = 0x107594u;
    {
        const bool branch_taken_0x107594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107594) {
            ctx->pc = 0x1075DCu;
            goto label_1075dc;
        }
    }
    ctx->pc = 0x10759Cu;
label_10759c:
    // 0x10759c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1075a0:
    // 0x1075a0: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1075a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1075a4:
    // 0x1075a4: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x1075a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_1075a8:
    // 0x1075a8: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1075a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1075ac:
    // 0x1075ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1075acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1075b0:
    // 0x1075b0: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1075b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1075b4:
    // 0x1075b4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1075b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1075b8:
    // 0x1075b8: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x1075b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_1075bc:
    // 0x1075bc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1075bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1075c0:
    // 0x1075c0: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1075c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1075c4:
    // 0x1075c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1075c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1075c8:
    // 0x1075c8: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1075c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1075cc:
    // 0x1075cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1075ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1075d0:
    // 0x1075d0: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1075d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1075d4:
    // 0x1075d4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1075d8:
    if (ctx->pc == 0x1075D8u) {
        ctx->pc = 0x1075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075D4u;
        // 0x1075d8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075DCu;
        goto label_1075dc;
    }
    ctx->pc = 0x1075D4u;
    {
        const bool branch_taken_0x1075d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075D4u;
        // 0x1075d8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075d4) {
            ctx->pc = 0x1076D0u;
            goto label_1076d0;
        }
    }
    ctx->pc = 0x1075DCu;
label_1075dc:
    // 0x1075dc: 0x3c013fc1  lui         $at, 0x3FC1
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16321 << 16));
label_1075e0:
    // 0x1075e0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1075e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1075e4:
    // 0x1075e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1075e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1075e8:
    // 0x1075e8: 0x0  nop
    ctx->pc = 0x1075e8u;
    // NOP
label_1075ec:
    // 0x1075ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1075ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1075f0:
    // 0x1075f0: 0x0  nop
    ctx->pc = 0x1075f0u;
    // NOP
label_1075f4:
    // 0x1075f4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1075f8:
    if (ctx->pc == 0x1075F8u) {
        ctx->pc = 0x1075FCu;
        goto label_1075fc;
    }
    ctx->pc = 0x1075F4u;
    {
        const bool branch_taken_0x1075f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1075f4) {
            ctx->pc = 0x10763Cu;
            goto label_10763c;
        }
    }
    ctx->pc = 0x1075FCu;
label_1075fc:
    // 0x1075fc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1075fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_107600:
    // 0x107600: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x107600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107604:
    // 0x107604: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_107608:
    // 0x107608: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x107608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10760c:
    // 0x10760c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107610:
    // 0x107610: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x107610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107614:
    // 0x107614: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x107614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_107618:
    // 0x107618: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x107618u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_10761c:
    // 0x10761c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x10761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107620:
    // 0x107620: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x107620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107624:
    // 0x107624: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_107628:
    // 0x107628: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x107628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10762c:
    // 0x10762c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x10762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107630:
    // 0x107630: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x107630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107634:
    // 0x107634: 0x10000026  b           . + 4 + (0x26 << 2)
label_107638:
    if (ctx->pc == 0x107638u) {
        ctx->pc = 0x107638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107634u;
        // 0x107638: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10763Cu;
        goto label_10763c;
    }
    ctx->pc = 0x107634u;
    {
        const bool branch_taken_0x107634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107634u;
        // 0x107638: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107634) {
            ctx->pc = 0x1076D0u;
            goto label_1076d0;
        }
    }
    ctx->pc = 0x10763Cu;
label_10763c:
    // 0x10763c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x10763cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_107640:
    // 0x107640: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x107640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_107644:
    // 0x107644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107648:
    // 0x107648: 0x0  nop
    ctx->pc = 0x107648u;
    // NOP
label_10764c:
    // 0x10764c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10764cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107650:
    // 0x107650: 0x0  nop
    ctx->pc = 0x107650u;
    // NOP
label_107654:
    // 0x107654: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_107658:
    if (ctx->pc == 0x107658u) {
        ctx->pc = 0x107658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107654u;
        // 0x107658: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10765Cu;
        goto label_10765c;
    }
    ctx->pc = 0x107654u;
    {
        const bool branch_taken_0x107654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107654u;
        // 0x107658: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107654) {
            ctx->pc = 0x107698u;
            goto label_107698;
        }
    }
    ctx->pc = 0x10765Cu;
label_10765c:
    // 0x10765c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10765cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107660:
    // 0x107660: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_107664:
    // 0x107664: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x107664u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_107668:
    // 0x107668: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10766c:
    // 0x10766c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10766cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107670:
    // 0x107670: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_107674:
    // 0x107674: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x107674u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_107678:
    // 0x107678: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x107678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10767c:
    // 0x10767c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10767cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107680:
    // 0x107680: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x107680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_107684:
    // 0x107684: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x107684u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_107688:
    // 0x107688: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_10768c:
    // 0x10768c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10768cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107690:
    // 0x107690: 0x1000000f  b           . + 4 + (0xF << 2)
label_107694:
    if (ctx->pc == 0x107694u) {
        ctx->pc = 0x107694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107690u;
        // 0x107694: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107698u;
        goto label_107698;
    }
    ctx->pc = 0x107690u;
    {
        const bool branch_taken_0x107690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107690u;
        // 0x107694: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107690) {
            ctx->pc = 0x1076D0u;
            goto label_1076d0;
        }
    }
    ctx->pc = 0x107698u;
label_107698:
    // 0x107698: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x107698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_10769c:
    // 0x10769c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1076a0:
    // 0x1076a0: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1076a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1076a4:
    // 0x1076a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1076a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1076a8:
    // 0x1076a8: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1076a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1076ac:
    // 0x1076ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1076acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1076b0:
    // 0x1076b0: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x1076b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_1076b4:
    // 0x1076b4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1076b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1076b8:
    // 0x1076b8: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1076b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1076bc:
    // 0x1076bc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1076bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1076c0:
    // 0x1076c0: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1076c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1076c4:
    // 0x1076c4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1076c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1076c8:
    // 0x1076c8: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1076c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1076cc:
    // 0x1076cc: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x1076ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_1076d0:
    // 0x1076d0: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x1076d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_1076d4:
    // 0x1076d4: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x1076d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1076d8:
    // 0x1076d8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1076d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1076dc:
    // 0x1076dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1076dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1076e0:
    // 0x1076e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1076e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1076e4:
    // 0x1076e4: 0x0  nop
    ctx->pc = 0x1076e4u;
    // NOP
label_1076e8:
    // 0x1076e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1076e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1076ec:
    // 0x1076ec: 0x0  nop
    ctx->pc = 0x1076ecu;
    // NOP
label_1076f0:
    // 0x1076f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1076f4:
    if (ctx->pc == 0x1076F4u) {
        ctx->pc = 0x1076F8u;
        goto label_1076f8;
    }
    ctx->pc = 0x1076F0u;
    {
        const bool branch_taken_0x1076f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1076f0) {
            ctx->pc = 0x10774Cu;
            goto label_10774c;
        }
    }
    ctx->pc = 0x1076F8u;
label_1076f8:
    // 0x1076f8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1076f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1076fc:
    // 0x1076fc: 0xc041128  jal         func_1044A0
label_107700:
    if (ctx->pc == 0x107700u) {
        ctx->pc = 0x107700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076FCu;
        // 0x107700: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107704u;
        goto label_107704;
    }
    ctx->pc = 0x1076FCu;
    SET_GPR_U32(ctx, 31, 0x107704u);
    ctx->pc = 0x107700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076FCu;
    // 0x107700: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x1076FCu, 0x107704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107704u;
label_107704:
    // 0x107704: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_107708:
    // 0x107708: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107708u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10770c:
    // 0x10770c: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x10770cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107710:
    // 0x107710: 0x0  nop
    ctx->pc = 0x107710u;
    // NOP
label_107714:
    // 0x107714: 0x450301f8  bc1tl       . + 4 + (0x1F8 << 2)
label_107718:
    if (ctx->pc == 0x107718u) {
        ctx->pc = 0x107718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107714u;
        // 0x107718: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10771Cu;
        goto label_10771c;
    }
    ctx->pc = 0x107714u;
    {
        const bool branch_taken_0x107714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107714) {
            ctx->pc = 0x107718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107714u;
            // 0x107718: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x10771Cu;
label_10771c:
    // 0x10771c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x10771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107720:
    // 0x107720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x107720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_107724:
    // 0x107724: 0xc0e409a  jal         func_390268
label_107728:
    if (ctx->pc == 0x107728u) {
        ctx->pc = 0x107728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107724u;
        // 0x107728: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10772Cu;
        goto label_10772c;
    }
    ctx->pc = 0x107724u;
    SET_GPR_U32(ctx, 31, 0x10772Cu);
    ctx->pc = 0x107728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107724u;
    // 0x107728: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107724u, 0x10772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10772Cu;
label_10772c:
    // 0x10772c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_107730:
    // 0x107730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107734:
    // 0x107734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107738:
    // 0x107738: 0xc04115c  jal         func_104570
label_10773c:
    if (ctx->pc == 0x10773Cu) {
        ctx->pc = 0x10773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107738u;
        // 0x10773c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107740u;
        goto label_107740;
    }
    ctx->pc = 0x107738u;
    SET_GPR_U32(ctx, 31, 0x107740u);
    ctx->pc = 0x10773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107738u;
    // 0x10773c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107738u, 0x107740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107740u;
label_107740:
    // 0x107740: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x107740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_107744:
    // 0x107744: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_107748:
    if (ctx->pc == 0x107748u) {
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107744u;
        // 0x107748: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10774Cu;
        goto label_10774c;
    }
    ctx->pc = 0x107744u;
    {
        const bool branch_taken_0x107744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107744u;
        // 0x107748: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107744) {
            ctx->pc = 0x107DE8u;
            goto label_107de8;
        }
    }
    ctx->pc = 0x10774Cu;
label_10774c:
    // 0x10774c: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
label_107750:
    // 0x107750: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x107750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_107754:
    // 0x107754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107758:
    // 0x107758: 0x0  nop
    ctx->pc = 0x107758u;
    // NOP
label_10775c:
    // 0x10775c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10775cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107760:
    // 0x107760: 0x0  nop
    ctx->pc = 0x107760u;
    // NOP
label_107764:
    // 0x107764: 0x45000070  bc1f        . + 4 + (0x70 << 2)
label_107768:
    if (ctx->pc == 0x107768u) {
        ctx->pc = 0x10776Cu;
        goto label_10776c;
    }
    ctx->pc = 0x107764u;
    {
        const bool branch_taken_0x107764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107764) {
            ctx->pc = 0x107928u;
            goto label_107928;
        }
    }
    ctx->pc = 0x10776Cu;
label_10776c:
    // 0x10776c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x10776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107770:
    // 0x107770: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x107770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107774:
    // 0x107774: 0x0  nop
    ctx->pc = 0x107774u;
    // NOP
label_107778:
    // 0x107778: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_10777c:
    if (ctx->pc == 0x10777Cu) {
        ctx->pc = 0x10777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107778u;
        // 0x10777c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107780u;
        goto label_107780;
    }
    ctx->pc = 0x107778u;
    {
        const bool branch_taken_0x107778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107778) {
            ctx->pc = 0x10777Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107778u;
            // 0x10777c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1077A0u;
            goto label_1077a0;
        }
    }
    ctx->pc = 0x107780u;
label_107780:
    // 0x107780: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x107780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
label_107784:
    // 0x107784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107788:
    // 0x107788: 0x0  nop
    ctx->pc = 0x107788u;
    // NOP
label_10778c:
    // 0x10778c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x10778cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107790:
    // 0x107790: 0x0  nop
    ctx->pc = 0x107790u;
    // NOP
label_107794:
    // 0x107794: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
label_107798:
    if (ctx->pc == 0x107798u) {
        ctx->pc = 0x107798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107794u;
        // 0x107798: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10779Cu;
        goto label_10779c;
    }
    ctx->pc = 0x107794u;
    {
        const bool branch_taken_0x107794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107794) {
            ctx->pc = 0x107798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107794u;
            // 0x107798: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107844u;
            goto label_107844;
        }
    }
    ctx->pc = 0x10779Cu;
label_10779c:
    // 0x10779c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1077a0:
    // 0x1077a0: 0xc041128  jal         func_1044A0
label_1077a4:
    if (ctx->pc == 0x1077A4u) {
        ctx->pc = 0x1077A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A0u;
        // 0x1077a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077A8u;
        goto label_1077a8;
    }
    ctx->pc = 0x1077A0u;
    SET_GPR_U32(ctx, 31, 0x1077A8u);
    ctx->pc = 0x1077A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077A0u;
    // 0x1077a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x1077A0u, 0x1077A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077A8u;
label_1077a8:
    // 0x1077a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1077a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1077ac:
    // 0x1077ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1077acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1077b0:
    // 0x1077b0: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x1077b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1077b4:
    // 0x1077b4: 0x0  nop
    ctx->pc = 0x1077b4u;
    // NOP
label_1077b8:
    // 0x1077b8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_1077bc:
    if (ctx->pc == 0x1077BCu) {
        ctx->pc = 0x1077BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077B8u;
        // 0x1077bc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077C0u;
        goto label_1077c0;
    }
    ctx->pc = 0x1077B8u;
    {
        const bool branch_taken_0x1077b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1077b8) {
            ctx->pc = 0x1077BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1077B8u;
            // 0x1077bc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1077F4u;
            goto label_1077f4;
        }
    }
    ctx->pc = 0x1077C0u;
label_1077c0:
    // 0x1077c0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1077c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1077c4:
    // 0x1077c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1077c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1077c8:
    // 0x1077c8: 0xc04115c  jal         func_104570
label_1077cc:
    if (ctx->pc == 0x1077CCu) {
        ctx->pc = 0x1077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077C8u;
        // 0x1077cc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077D0u;
        goto label_1077d0;
    }
    ctx->pc = 0x1077C8u;
    SET_GPR_U32(ctx, 31, 0x1077D0u);
    ctx->pc = 0x1077CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077C8u;
    // 0x1077cc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x1077C8u, 0x1077D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077D0u;
label_1077d0:
    // 0x1077d0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1077d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1077d4:
    // 0x1077d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1077d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1077d8:
    // 0x1077d8: 0xc04115c  jal         func_104570
label_1077dc:
    if (ctx->pc == 0x1077DCu) {
        ctx->pc = 0x1077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077D8u;
        // 0x1077dc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077E0u;
        goto label_1077e0;
    }
    ctx->pc = 0x1077D8u;
    SET_GPR_U32(ctx, 31, 0x1077E0u);
    ctx->pc = 0x1077DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077D8u;
    // 0x1077dc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x1077D8u, 0x1077E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077E0u;
label_1077e0:
    // 0x1077e0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1077e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1077e4:
    // 0x1077e4: 0xc041128  jal         func_1044A0
label_1077e8:
    if (ctx->pc == 0x1077E8u) {
        ctx->pc = 0x1077E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E4u;
        // 0x1077e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077ECu;
        goto label_1077ec;
    }
    ctx->pc = 0x1077E4u;
    SET_GPR_U32(ctx, 31, 0x1077ECu);
    ctx->pc = 0x1077E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077E4u;
    // 0x1077e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x1077E4u, 0x1077ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077ECu;
label_1077ec:
    // 0x1077ec: 0x1000019c  b           . + 4 + (0x19C << 2)
label_1077f0:
    if (ctx->pc == 0x1077F0u) {
        ctx->pc = 0x1077F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077ECu;
        // 0x1077f0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077F4u;
        goto label_1077f4;
    }
    ctx->pc = 0x1077ECu;
    {
        const bool branch_taken_0x1077ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077ECu;
        // 0x1077f0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077ec) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x1077F4u;
label_1077f4:
    // 0x1077f4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1077f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1077f8:
    // 0x1077f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1077f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1077fc:
    // 0x1077fc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1077fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107800:
    // 0x107800: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x107800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107804:
    // 0x107804: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x107804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_107808:
    // 0x107808: 0x0  nop
    ctx->pc = 0x107808u;
    // NOP
label_10780c:
    // 0x10780c: 0x0  nop
    ctx->pc = 0x10780cu;
    // NOP
label_107810:
    // 0x107810: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107810u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107814:
    // 0x107814: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x107814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_107818:
    // 0x107818: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10781c:
    // 0x10781c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10781cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107820:
    // 0x107820: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x107820u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_107824:
    // 0x107824: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x107824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107828:
    // 0x107828: 0x0  nop
    ctx->pc = 0x107828u;
    // NOP
label_10782c:
    // 0x10782c: 0x4500018d  bc1f        . + 4 + (0x18D << 2)
label_107830:
    if (ctx->pc == 0x107830u) {
        ctx->pc = 0x107834u;
        goto label_107834;
    }
    ctx->pc = 0x10782Cu;
    {
        const bool branch_taken_0x10782c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10782c) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107834u;
label_107834:
    // 0x107834: 0xc04115c  jal         func_104570
label_107838:
    if (ctx->pc == 0x107838u) {
        ctx->pc = 0x107838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107834u;
        // 0x107838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10783Cu;
        goto label_10783c;
    }
    ctx->pc = 0x107834u;
    SET_GPR_U32(ctx, 31, 0x10783Cu);
    ctx->pc = 0x107838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107834u;
    // 0x107838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107834u, 0x10783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10783Cu;
label_10783c:
    // 0x10783c: 0x10000188  b           . + 4 + (0x188 << 2)
label_107840:
    if (ctx->pc == 0x107840u) {
        ctx->pc = 0x107840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10783Cu;
        // 0x107840: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107844u;
        goto label_107844;
    }
    ctx->pc = 0x10783Cu;
    {
        const bool branch_taken_0x10783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10783Cu;
        // 0x107840: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10783c) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107844u;
label_107844:
    // 0x107844: 0xc041128  jal         func_1044A0
label_107848:
    if (ctx->pc == 0x107848u) {
        ctx->pc = 0x107848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107844u;
        // 0x107848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10784Cu;
        goto label_10784c;
    }
    ctx->pc = 0x107844u;
    SET_GPR_U32(ctx, 31, 0x10784Cu);
    ctx->pc = 0x107848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107844u;
    // 0x107848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107844u, 0x10784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10784Cu;
label_10784c:
    // 0x10784c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10784cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_107850:
    // 0x107850: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107850u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107854:
    // 0x107854: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x107854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107858:
    // 0x107858: 0x0  nop
    ctx->pc = 0x107858u;
    // NOP
label_10785c:
    // 0x10785c: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_107860:
    if (ctx->pc == 0x107860u) {
        ctx->pc = 0x107860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10785Cu;
        // 0x107860: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107864u;
        goto label_107864;
    }
    ctx->pc = 0x10785Cu;
    {
        const bool branch_taken_0x10785c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10785c) {
            ctx->pc = 0x107860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10785Cu;
            // 0x107860: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1078D8u;
            goto label_1078d8;
        }
    }
    ctx->pc = 0x107864u;
label_107864:
    // 0x107864: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107868:
    // 0x107868: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x107868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_10786c:
    // 0x10786c: 0xc0e409a  jal         func_390268
label_107870:
    if (ctx->pc == 0x107870u) {
        ctx->pc = 0x107870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10786Cu;
        // 0x107870: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107874u;
        goto label_107874;
    }
    ctx->pc = 0x10786Cu;
    SET_GPR_U32(ctx, 31, 0x107874u);
    ctx->pc = 0x107870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10786Cu;
    // 0x107870: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10786Cu, 0x107874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107874u;
label_107874:
    // 0x107874: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x107874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_107878:
    // 0x107878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10787c:
    // 0x10787c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10787cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107880:
    // 0x107880: 0xc04115c  jal         func_104570
label_107884:
    if (ctx->pc == 0x107884u) {
        ctx->pc = 0x107884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107880u;
        // 0x107884: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107888u;
        goto label_107888;
    }
    ctx->pc = 0x107880u;
    SET_GPR_U32(ctx, 31, 0x107888u);
    ctx->pc = 0x107884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107880u;
    // 0x107884: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107880u, 0x107888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107888u;
label_107888:
    // 0x107888: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10788c:
    // 0x10788c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10788cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107890:
    // 0x107890: 0xc04115c  jal         func_104570
label_107894:
    if (ctx->pc == 0x107894u) {
        ctx->pc = 0x107894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107890u;
        // 0x107894: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107898u;
        goto label_107898;
    }
    ctx->pc = 0x107890u;
    SET_GPR_U32(ctx, 31, 0x107898u);
    ctx->pc = 0x107894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107890u;
    // 0x107894: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107890u, 0x107898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107898u;
label_107898:
    // 0x107898: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x107898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10789c:
    // 0x10789c: 0xc041128  jal         func_1044A0
label_1078a0:
    if (ctx->pc == 0x1078A0u) {
        ctx->pc = 0x1078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10789Cu;
        // 0x1078a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078A4u;
        goto label_1078a4;
    }
    ctx->pc = 0x10789Cu;
    SET_GPR_U32(ctx, 31, 0x1078A4u);
    ctx->pc = 0x1078A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10789Cu;
    // 0x1078a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10789Cu, 0x1078A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078A4u;
label_1078a4:
    // 0x1078a4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1078a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1078a8:
    // 0x1078a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1078a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1078ac:
    // 0x1078ac: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1078b0:
    // 0x1078b0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1078b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1078b4:
    // 0x1078b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1078b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1078b8:
    // 0x1078b8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1078b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1078bc:
    // 0x1078bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1078bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1078c0:
    // 0x1078c0: 0x0  nop
    ctx->pc = 0x1078c0u;
    // NOP
label_1078c4:
    // 0x1078c4: 0x0  nop
    ctx->pc = 0x1078c4u;
    // NOP
label_1078c8:
    // 0x1078c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1078c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1078cc:
    // 0x1078cc: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x1078ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1078d0:
    // 0x1078d0: 0x10000143  b           . + 4 + (0x143 << 2)
label_1078d4:
    if (ctx->pc == 0x1078D4u) {
        ctx->pc = 0x1078D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078D0u;
        // 0x1078d4: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078D8u;
        goto label_1078d8;
    }
    ctx->pc = 0x1078D0u;
    {
        const bool branch_taken_0x1078d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078D0u;
        // 0x1078d4: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078d0) {
            ctx->pc = 0x107DE0u;
            goto label_107de0;
        }
    }
    ctx->pc = 0x1078D8u;
label_1078d8:
    // 0x1078d8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1078d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1078dc:
    // 0x1078dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1078dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1078e0:
    // 0x1078e0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1078e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1078e4:
    // 0x1078e4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1078e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1078e8:
    // 0x1078e8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1078e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1078ec:
    // 0x1078ec: 0x0  nop
    ctx->pc = 0x1078ecu;
    // NOP
label_1078f0:
    // 0x1078f0: 0x0  nop
    ctx->pc = 0x1078f0u;
    // NOP
label_1078f4:
    // 0x1078f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1078f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1078f8:
    // 0x1078f8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1078f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1078fc:
    // 0x1078fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1078fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107900:
    // 0x107900: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107900u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107904:
    // 0x107904: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x107904u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_107908:
    // 0x107908: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x107908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10790c:
    // 0x10790c: 0x0  nop
    ctx->pc = 0x10790cu;
    // NOP
label_107910:
    // 0x107910: 0x45000154  bc1f        . + 4 + (0x154 << 2)
label_107914:
    if (ctx->pc == 0x107914u) {
        ctx->pc = 0x107918u;
        goto label_107918;
    }
    ctx->pc = 0x107910u;
    {
        const bool branch_taken_0x107910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107910) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107918u;
label_107918:
    // 0x107918: 0xc04115c  jal         func_104570
label_10791c:
    if (ctx->pc == 0x10791Cu) {
        ctx->pc = 0x10791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107918u;
        // 0x10791c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107920u;
        goto label_107920;
    }
    ctx->pc = 0x107918u;
    SET_GPR_U32(ctx, 31, 0x107920u);
    ctx->pc = 0x10791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107918u;
    // 0x10791c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107918u, 0x107920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107920u;
label_107920:
    // 0x107920: 0x1000014f  b           . + 4 + (0x14F << 2)
label_107924:
    if (ctx->pc == 0x107924u) {
        ctx->pc = 0x107924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107920u;
        // 0x107924: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107928u;
        goto label_107928;
    }
    ctx->pc = 0x107920u;
    {
        const bool branch_taken_0x107920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107920u;
        // 0x107924: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107920) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107928u;
label_107928:
    // 0x107928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10792c:
    // 0x10792c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x10792cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_107930:
    // 0x107930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107934:
    // 0x107934: 0x0  nop
    ctx->pc = 0x107934u;
    // NOP
label_107938:
    // 0x107938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10793c:
    // 0x10793c: 0x0  nop
    ctx->pc = 0x10793cu;
    // NOP
label_107940:
    // 0x107940: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_107944:
    if (ctx->pc == 0x107944u) {
        ctx->pc = 0x107948u;
        goto label_107948;
    }
    ctx->pc = 0x107940u;
    {
        const bool branch_taken_0x107940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107940) {
            ctx->pc = 0x1079B0u;
            goto label_1079b0;
        }
    }
    ctx->pc = 0x107948u;
label_107948:
    // 0x107948: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10794c:
    // 0x10794c: 0xc041128  jal         func_1044A0
label_107950:
    if (ctx->pc == 0x107950u) {
        ctx->pc = 0x107950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10794Cu;
        // 0x107950: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107954u;
        goto label_107954;
    }
    ctx->pc = 0x10794Cu;
    SET_GPR_U32(ctx, 31, 0x107954u);
    ctx->pc = 0x107950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10794Cu;
    // 0x107950: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10794Cu, 0x107954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107954u;
label_107954:
    // 0x107954: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_107958:
    // 0x107958: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107958u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10795c:
    // 0x10795c: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x10795cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107960:
    // 0x107960: 0x0  nop
    ctx->pc = 0x107960u;
    // NOP
label_107964:
    // 0x107964: 0x45030164  bc1tl       . + 4 + (0x164 << 2)
label_107968:
    if (ctx->pc == 0x107968u) {
        ctx->pc = 0x107968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107964u;
        // 0x107968: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10796Cu;
        goto label_10796c;
    }
    ctx->pc = 0x107964u;
    {
        const bool branch_taken_0x107964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107964) {
            ctx->pc = 0x107968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107964u;
            // 0x107968: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x10796Cu;
label_10796c:
    // 0x10796c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x10796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107970:
    // 0x107970: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x107970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_107974:
    // 0x107974: 0xc0e409a  jal         func_390268
label_107978:
    if (ctx->pc == 0x107978u) {
        ctx->pc = 0x107978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107974u;
        // 0x107978: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10797Cu;
        goto label_10797c;
    }
    ctx->pc = 0x107974u;
    SET_GPR_U32(ctx, 31, 0x10797Cu);
    ctx->pc = 0x107978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107974u;
    // 0x107978: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107974u, 0x10797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10797Cu;
label_10797c:
    // 0x10797c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_107980:
    if (ctx->pc == 0x107980u) {
        ctx->pc = 0x107980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10797Cu;
        // 0x107980: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107984u;
        goto label_107984;
    }
    ctx->pc = 0x10797Cu;
    {
        const bool branch_taken_0x10797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10797c) {
            ctx->pc = 0x107980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10797Cu;
            // 0x107980: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10799Cu;
            goto label_10799c;
        }
    }
    ctx->pc = 0x107984u;
label_107984:
    // 0x107984: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x107984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_107988:
    // 0x107988: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_10798c:
    if (ctx->pc == 0x10798Cu) {
        ctx->pc = 0x10798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107988u;
        // 0x10798c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107990u;
        goto label_107990;
    }
    ctx->pc = 0x107988u;
    {
        const bool branch_taken_0x107988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107988) {
            ctx->pc = 0x10798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107988u;
            // 0x10798c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10799Cu;
            goto label_10799c;
        }
    }
    ctx->pc = 0x107990u;
label_107990:
    // 0x107990: 0x60f809  jalr        $v1
label_107994:
    if (ctx->pc == 0x107994u) {
        ctx->pc = 0x107994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107990u;
        // 0x107994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107998u;
        goto label_107998;
    }
    ctx->pc = 0x107990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107998u);
        ctx->pc = 0x107994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107990u;
        // 0x107994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107990u, 0x107998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107998u;
label_107998:
    // 0x107998: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10799c:
    // 0x10799c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10799cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1079a0:
    // 0x1079a0: 0xc04115c  jal         func_104570
label_1079a4:
    if (ctx->pc == 0x1079A4u) {
        ctx->pc = 0x1079A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079A0u;
        // 0x1079a4: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079A8u;
        goto label_1079a8;
    }
    ctx->pc = 0x1079A0u;
    SET_GPR_U32(ctx, 31, 0x1079A8u);
    ctx->pc = 0x1079A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079A0u;
    // 0x1079a4: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x1079A0u, 0x1079A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079A8u;
label_1079a8:
    // 0x1079a8: 0x1000012d  b           . + 4 + (0x12D << 2)
label_1079ac:
    if (ctx->pc == 0x1079ACu) {
        ctx->pc = 0x1079ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079A8u;
        // 0x1079ac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079B0u;
        goto label_1079b0;
    }
    ctx->pc = 0x1079A8u;
    {
        const bool branch_taken_0x1079a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079A8u;
        // 0x1079ac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079a8) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x1079B0u;
label_1079b0:
    // 0x1079b0: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x1079b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
label_1079b4:
    // 0x1079b4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1079b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1079b8:
    // 0x1079b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1079b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1079bc:
    // 0x1079bc: 0x0  nop
    ctx->pc = 0x1079bcu;
    // NOP
label_1079c0:
    // 0x1079c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1079c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1079c4:
    // 0x1079c4: 0x0  nop
    ctx->pc = 0x1079c4u;
    // NOP
label_1079c8:
    // 0x1079c8: 0x45000076  bc1f        . + 4 + (0x76 << 2)
label_1079cc:
    if (ctx->pc == 0x1079CCu) {
        ctx->pc = 0x1079D0u;
        goto label_1079d0;
    }
    ctx->pc = 0x1079C8u;
    {
        const bool branch_taken_0x1079c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1079c8) {
            ctx->pc = 0x107BA4u;
            goto label_107ba4;
        }
    }
    ctx->pc = 0x1079D0u;
label_1079d0:
    // 0x1079d0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1079d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1079d4:
    // 0x1079d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1079d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1079d8:
    // 0x1079d8: 0x0  nop
    ctx->pc = 0x1079d8u;
    // NOP
label_1079dc:
    // 0x1079dc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_1079e0:
    if (ctx->pc == 0x1079E0u) {
        ctx->pc = 0x1079E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079DCu;
        // 0x1079e0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079E4u;
        goto label_1079e4;
    }
    ctx->pc = 0x1079DCu;
    {
        const bool branch_taken_0x1079dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1079dc) {
            ctx->pc = 0x1079E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079DCu;
            // 0x1079e0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107A04u;
            goto label_107a04;
        }
    }
    ctx->pc = 0x1079E4u;
label_1079e4:
    // 0x1079e4: 0x3c013ff0  lui         $at, 0x3FF0
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16368 << 16));
label_1079e8:
    // 0x1079e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1079e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1079ec:
    // 0x1079ec: 0x0  nop
    ctx->pc = 0x1079ecu;
    // NOP
label_1079f0:
    // 0x1079f0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1079f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1079f4:
    // 0x1079f4: 0x0  nop
    ctx->pc = 0x1079f4u;
    // NOP
label_1079f8:
    // 0x1079f8: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
label_1079fc:
    if (ctx->pc == 0x1079FCu) {
        ctx->pc = 0x1079FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079F8u;
        // 0x1079fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A00u;
        goto label_107a00;
    }
    ctx->pc = 0x1079F8u;
    {
        const bool branch_taken_0x1079f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1079f8) {
            ctx->pc = 0x1079FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079F8u;
            // 0x1079fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107AE8u;
            goto label_107ae8;
        }
    }
    ctx->pc = 0x107A00u;
label_107a00:
    // 0x107a00: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107a04:
    // 0x107a04: 0xc041128  jal         func_1044A0
label_107a08:
    if (ctx->pc == 0x107A08u) {
        ctx->pc = 0x107A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A04u;
        // 0x107a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A0Cu;
        goto label_107a0c;
    }
    ctx->pc = 0x107A04u;
    SET_GPR_U32(ctx, 31, 0x107A0Cu);
    ctx->pc = 0x107A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A04u;
    // 0x107a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107A04u, 0x107A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A0Cu;
label_107a0c:
    // 0x107a0c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x107a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_107a10:
    // 0x107a10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107a10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107a14:
    // 0x107a14: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x107a14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107a18:
    // 0x107a18: 0x0  nop
    ctx->pc = 0x107a18u;
    // NOP
label_107a1c:
    // 0x107a1c: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_107a20:
    if (ctx->pc == 0x107A20u) {
        ctx->pc = 0x107A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A1Cu;
        // 0x107a20: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A24u;
        goto label_107a24;
    }
    ctx->pc = 0x107A1Cu;
    {
        const bool branch_taken_0x107a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107a1c) {
            ctx->pc = 0x107A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A1Cu;
            // 0x107a20: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107A98u;
            goto label_107a98;
        }
    }
    ctx->pc = 0x107A24u;
label_107a24:
    // 0x107a24: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107a28:
    // 0x107a28: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x107a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_107a2c:
    // 0x107a2c: 0xc0e409a  jal         func_390268
label_107a30:
    if (ctx->pc == 0x107A30u) {
        ctx->pc = 0x107A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A2Cu;
        // 0x107a30: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A34u;
        goto label_107a34;
    }
    ctx->pc = 0x107A2Cu;
    SET_GPR_U32(ctx, 31, 0x107A34u);
    ctx->pc = 0x107A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A2Cu;
    // 0x107a30: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107A2Cu, 0x107A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A34u;
label_107a34:
    // 0x107a34: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107a38:
    // 0x107a38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107a3c:
    // 0x107a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107a40:
    // 0x107a40: 0xc04115c  jal         func_104570
label_107a44:
    if (ctx->pc == 0x107A44u) {
        ctx->pc = 0x107A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A40u;
        // 0x107a44: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A48u;
        goto label_107a48;
    }
    ctx->pc = 0x107A40u;
    SET_GPR_U32(ctx, 31, 0x107A48u);
    ctx->pc = 0x107A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A40u;
    // 0x107a44: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107A40u, 0x107A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A48u;
label_107a48:
    // 0x107a48: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107a4c:
    // 0x107a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107a50:
    // 0x107a50: 0xc04115c  jal         func_104570
label_107a54:
    if (ctx->pc == 0x107A54u) {
        ctx->pc = 0x107A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A50u;
        // 0x107a54: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A58u;
        goto label_107a58;
    }
    ctx->pc = 0x107A50u;
    SET_GPR_U32(ctx, 31, 0x107A58u);
    ctx->pc = 0x107A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A50u;
    // 0x107a54: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107A50u, 0x107A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A58u;
label_107a58:
    // 0x107a58: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107a5c:
    // 0x107a5c: 0xc041128  jal         func_1044A0
label_107a60:
    if (ctx->pc == 0x107A60u) {
        ctx->pc = 0x107A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A5Cu;
        // 0x107a60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A64u;
        goto label_107a64;
    }
    ctx->pc = 0x107A5Cu;
    SET_GPR_U32(ctx, 31, 0x107A64u);
    ctx->pc = 0x107A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A5Cu;
    // 0x107a60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107A5Cu, 0x107A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A64u;
label_107a64:
    // 0x107a64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x107a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107a68:
    // 0x107a68: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107a6c:
    // 0x107a6c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_107a70:
    // 0x107a70: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x107a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107a74:
    // 0x107a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107a78:
    // 0x107a78: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107a7c:
    // 0x107a7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107a80:
    // 0x107a80: 0x0  nop
    ctx->pc = 0x107a80u;
    // NOP
label_107a84:
    // 0x107a84: 0x0  nop
    ctx->pc = 0x107a84u;
    // NOP
label_107a88:
    // 0x107a88: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107a88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107a8c:
    // 0x107a8c: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x107a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107a90:
    // 0x107a90: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_107a94:
    if (ctx->pc == 0x107A94u) {
        ctx->pc = 0x107A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A90u;
        // 0x107a94: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A98u;
        goto label_107a98;
    }
    ctx->pc = 0x107A90u;
    {
        const bool branch_taken_0x107a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A90u;
        // 0x107a94: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a90) {
            ctx->pc = 0x107DE0u;
            goto label_107de0;
        }
    }
    ctx->pc = 0x107A98u;
label_107a98:
    // 0x107a98: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107a9c:
    // 0x107a9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107aa0:
    // 0x107aa0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x107aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107aa4:
    // 0x107aa4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x107aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107aa8:
    // 0x107aa8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x107aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_107aac:
    // 0x107aac: 0x0  nop
    ctx->pc = 0x107aacu;
    // NOP
label_107ab0:
    // 0x107ab0: 0x0  nop
    ctx->pc = 0x107ab0u;
    // NOP
label_107ab4:
    // 0x107ab4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107ab4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107ab8:
    // 0x107ab8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x107ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_107abc:
    // 0x107abc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107ac0:
    // 0x107ac0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107ac0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107ac4:
    // 0x107ac4: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x107ac4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_107ac8:
    // 0x107ac8: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x107ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107acc:
    // 0x107acc: 0x0  nop
    ctx->pc = 0x107accu;
    // NOP
label_107ad0:
    // 0x107ad0: 0x450000e4  bc1f        . + 4 + (0xE4 << 2)
label_107ad4:
    if (ctx->pc == 0x107AD4u) {
        ctx->pc = 0x107AD8u;
        goto label_107ad8;
    }
    ctx->pc = 0x107AD0u;
    {
        const bool branch_taken_0x107ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107ad0) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107AD8u;
label_107ad8:
    // 0x107ad8: 0xc04115c  jal         func_104570
label_107adc:
    if (ctx->pc == 0x107ADCu) {
        ctx->pc = 0x107ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AD8u;
        // 0x107adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AE0u;
        goto label_107ae0;
    }
    ctx->pc = 0x107AD8u;
    SET_GPR_U32(ctx, 31, 0x107AE0u);
    ctx->pc = 0x107ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107AD8u;
    // 0x107adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107AD8u, 0x107AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107AE0u;
label_107ae0:
    // 0x107ae0: 0x100000df  b           . + 4 + (0xDF << 2)
label_107ae4:
    if (ctx->pc == 0x107AE4u) {
        ctx->pc = 0x107AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE0u;
        // 0x107ae4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AE8u;
        goto label_107ae8;
    }
    ctx->pc = 0x107AE0u;
    {
        const bool branch_taken_0x107ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE0u;
        // 0x107ae4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ae0) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107AE8u;
label_107ae8:
    // 0x107ae8: 0xc041128  jal         func_1044A0
label_107aec:
    if (ctx->pc == 0x107AECu) {
        ctx->pc = 0x107AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE8u;
        // 0x107aec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AF0u;
        goto label_107af0;
    }
    ctx->pc = 0x107AE8u;
    SET_GPR_U32(ctx, 31, 0x107AF0u);
    ctx->pc = 0x107AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107AE8u;
    // 0x107aec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107AE8u, 0x107AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107AF0u;
label_107af0:
    // 0x107af0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x107af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_107af4:
    // 0x107af4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107af8:
    // 0x107af8: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x107af8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107afc:
    // 0x107afc: 0x0  nop
    ctx->pc = 0x107afcu;
    // NOP
label_107b00:
    // 0x107b00: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_107b04:
    if (ctx->pc == 0x107B04u) {
        ctx->pc = 0x107B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B00u;
        // 0x107b04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B08u;
        goto label_107b08;
    }
    ctx->pc = 0x107B00u;
    {
        const bool branch_taken_0x107b00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107b00) {
            ctx->pc = 0x107B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107B00u;
            // 0x107b04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B54u;
            goto label_107b54;
        }
    }
    ctx->pc = 0x107B08u;
label_107b08:
    // 0x107b08: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107b0c:
    // 0x107b0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x107b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_107b10:
    // 0x107b10: 0xc0e409a  jal         func_390268
label_107b14:
    if (ctx->pc == 0x107B14u) {
        ctx->pc = 0x107B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B10u;
        // 0x107b14: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B18u;
        goto label_107b18;
    }
    ctx->pc = 0x107B10u;
    SET_GPR_U32(ctx, 31, 0x107B18u);
    ctx->pc = 0x107B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B10u;
    // 0x107b14: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107B10u, 0x107B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B18u;
label_107b18:
    // 0x107b18: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107b1c:
    // 0x107b1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b20:
    // 0x107b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107b24:
    // 0x107b24: 0xc04115c  jal         func_104570
label_107b28:
    if (ctx->pc == 0x107B28u) {
        ctx->pc = 0x107B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B24u;
        // 0x107b28: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B2Cu;
        goto label_107b2c;
    }
    ctx->pc = 0x107B24u;
    SET_GPR_U32(ctx, 31, 0x107B2Cu);
    ctx->pc = 0x107B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B24u;
    // 0x107b28: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107B24u, 0x107B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B2Cu;
label_107b2c:
    // 0x107b2c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107b30:
    // 0x107b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107b34:
    // 0x107b34: 0xc04115c  jal         func_104570
label_107b38:
    if (ctx->pc == 0x107B38u) {
        ctx->pc = 0x107B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B34u;
        // 0x107b38: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B3Cu;
        goto label_107b3c;
    }
    ctx->pc = 0x107B34u;
    SET_GPR_U32(ctx, 31, 0x107B3Cu);
    ctx->pc = 0x107B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B34u;
    // 0x107b38: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107B34u, 0x107B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B3Cu;
label_107b3c:
    // 0x107b3c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x107b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107b40:
    // 0x107b40: 0xc041128  jal         func_1044A0
label_107b44:
    if (ctx->pc == 0x107B44u) {
        ctx->pc = 0x107B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B40u;
        // 0x107b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B48u;
        goto label_107b48;
    }
    ctx->pc = 0x107B40u;
    SET_GPR_U32(ctx, 31, 0x107B48u);
    ctx->pc = 0x107B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B40u;
    // 0x107b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107B40u, 0x107B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B48u;
label_107b48:
    // 0x107b48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107b4c:
    // 0x107b4c: 0x1000009a  b           . + 4 + (0x9A << 2)
label_107b50:
    if (ctx->pc == 0x107B50u) {
        ctx->pc = 0x107B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B4Cu;
        // 0x107b50: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B54u;
        goto label_107b54;
    }
    ctx->pc = 0x107B4Cu;
    {
        const bool branch_taken_0x107b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B4Cu;
        // 0x107b50: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b4c) {
            ctx->pc = 0x107DB8u;
            goto label_107db8;
        }
    }
    ctx->pc = 0x107B54u;
label_107b54:
    // 0x107b54: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107b58:
    // 0x107b58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107b5c:
    // 0x107b5c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x107b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107b60:
    // 0x107b60: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x107b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107b64:
    // 0x107b64: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x107b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_107b68:
    // 0x107b68: 0x0  nop
    ctx->pc = 0x107b68u;
    // NOP
label_107b6c:
    // 0x107b6c: 0x0  nop
    ctx->pc = 0x107b6cu;
    // NOP
label_107b70:
    // 0x107b70: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107b70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107b74:
    // 0x107b74: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x107b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_107b78:
    // 0x107b78: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107b7c:
    // 0x107b7c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107b7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107b80:
    // 0x107b80: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x107b80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_107b84:
    // 0x107b84: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x107b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107b88:
    // 0x107b88: 0x0  nop
    ctx->pc = 0x107b88u;
    // NOP
label_107b8c:
    // 0x107b8c: 0x450000b5  bc1f        . + 4 + (0xB5 << 2)
label_107b90:
    if (ctx->pc == 0x107B90u) {
        ctx->pc = 0x107B94u;
        goto label_107b94;
    }
    ctx->pc = 0x107B8Cu;
    {
        const bool branch_taken_0x107b8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107b8c) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107B94u;
label_107b94:
    // 0x107b94: 0xc04115c  jal         func_104570
label_107b98:
    if (ctx->pc == 0x107B98u) {
        ctx->pc = 0x107B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B94u;
        // 0x107b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B9Cu;
        goto label_107b9c;
    }
    ctx->pc = 0x107B94u;
    SET_GPR_U32(ctx, 31, 0x107B9Cu);
    ctx->pc = 0x107B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B94u;
    // 0x107b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107B94u, 0x107B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B9Cu;
label_107b9c:
    // 0x107b9c: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_107ba0:
    if (ctx->pc == 0x107BA0u) {
        ctx->pc = 0x107BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B9Cu;
        // 0x107ba0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BA4u;
        goto label_107ba4;
    }
    ctx->pc = 0x107B9Cu;
    {
        const bool branch_taken_0x107b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B9Cu;
        // 0x107ba0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b9c) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107BA4u;
label_107ba4:
    // 0x107ba4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x107ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_107ba8:
    // 0x107ba8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x107ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_107bac:
    // 0x107bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107bb0:
    // 0x107bb0: 0x0  nop
    ctx->pc = 0x107bb0u;
    // NOP
label_107bb4:
    // 0x107bb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107bb8:
    // 0x107bb8: 0x0  nop
    ctx->pc = 0x107bb8u;
    // NOP
label_107bbc:
    // 0x107bbc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_107bc0:
    if (ctx->pc == 0x107BC0u) {
        ctx->pc = 0x107BC4u;
        goto label_107bc4;
    }
    ctx->pc = 0x107BBCu;
    {
        const bool branch_taken_0x107bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107bbc) {
            ctx->pc = 0x107C18u;
            goto label_107c18;
        }
    }
    ctx->pc = 0x107BC4u;
label_107bc4:
    // 0x107bc4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107bc8:
    // 0x107bc8: 0xc041128  jal         func_1044A0
label_107bcc:
    if (ctx->pc == 0x107BCCu) {
        ctx->pc = 0x107BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BC8u;
        // 0x107bcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BD0u;
        goto label_107bd0;
    }
    ctx->pc = 0x107BC8u;
    SET_GPR_U32(ctx, 31, 0x107BD0u);
    ctx->pc = 0x107BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BC8u;
    // 0x107bcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107BC8u, 0x107BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BD0u;
label_107bd0:
    // 0x107bd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_107bd4:
    // 0x107bd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107bd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107bd8:
    // 0x107bd8: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x107bd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107bdc:
    // 0x107bdc: 0x0  nop
    ctx->pc = 0x107bdcu;
    // NOP
label_107be0:
    // 0x107be0: 0x450300c5  bc1tl       . + 4 + (0xC5 << 2)
label_107be4:
    if (ctx->pc == 0x107BE4u) {
        ctx->pc = 0x107BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE0u;
        // 0x107be4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BE8u;
        goto label_107be8;
    }
    ctx->pc = 0x107BE0u;
    {
        const bool branch_taken_0x107be0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107be0) {
            ctx->pc = 0x107BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107BE0u;
            // 0x107be4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107BE8u;
label_107be8:
    // 0x107be8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107bec:
    // 0x107bec: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x107becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_107bf0:
    // 0x107bf0: 0xc0e409a  jal         func_390268
label_107bf4:
    if (ctx->pc == 0x107BF4u) {
        ctx->pc = 0x107BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BF0u;
        // 0x107bf4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BF8u;
        goto label_107bf8;
    }
    ctx->pc = 0x107BF0u;
    SET_GPR_U32(ctx, 31, 0x107BF8u);
    ctx->pc = 0x107BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF0u;
    // 0x107bf4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107BF0u, 0x107BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BF8u;
label_107bf8:
    // 0x107bf8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107bfc:
    // 0x107bfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107c00:
    // 0x107c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107c04:
    // 0x107c04: 0xc04115c  jal         func_104570
label_107c08:
    if (ctx->pc == 0x107C08u) {
        ctx->pc = 0x107C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C04u;
        // 0x107c08: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C0Cu;
        goto label_107c0c;
    }
    ctx->pc = 0x107C04u;
    SET_GPR_U32(ctx, 31, 0x107C0Cu);
    ctx->pc = 0x107C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C04u;
    // 0x107c08: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107C04u, 0x107C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C0Cu;
label_107c0c:
    // 0x107c0c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107c10:
    // 0x107c10: 0x10000075  b           . + 4 + (0x75 << 2)
label_107c14:
    if (ctx->pc == 0x107C14u) {
        ctx->pc = 0x107C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C10u;
        // 0x107c14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C18u;
        goto label_107c18;
    }
    ctx->pc = 0x107C10u;
    {
        const bool branch_taken_0x107c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C10u;
        // 0x107c14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c10) {
            ctx->pc = 0x107DE8u;
            goto label_107de8;
        }
    }
    ctx->pc = 0x107C18u;
label_107c18:
    // 0x107c18: 0x3c01403f  lui         $at, 0x403F
    ctx->pc = 0x107c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16447 << 16));
label_107c1c:
    // 0x107c1c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x107c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_107c20:
    // 0x107c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107c24:
    // 0x107c24: 0x0  nop
    ctx->pc = 0x107c24u;
    // NOP
label_107c28:
    // 0x107c28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x107c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107c2c:
    // 0x107c2c: 0x0  nop
    ctx->pc = 0x107c2cu;
    // NOP
label_107c30:
    // 0x107c30: 0x45000090  bc1f        . + 4 + (0x90 << 2)
label_107c34:
    if (ctx->pc == 0x107C34u) {
        ctx->pc = 0x107C38u;
        goto label_107c38;
    }
    ctx->pc = 0x107C30u;
    {
        const bool branch_taken_0x107c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107c30) {
            ctx->pc = 0x107E74u;
            goto label_107e74;
        }
    }
    ctx->pc = 0x107C38u;
label_107c38:
    // 0x107c38: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x107c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107c3c:
    // 0x107c3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x107c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107c40:
    // 0x107c40: 0x0  nop
    ctx->pc = 0x107c40u;
    // NOP
label_107c44:
    // 0x107c44: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
label_107c48:
    if (ctx->pc == 0x107C48u) {
        ctx->pc = 0x107C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C44u;
        // 0x107c48: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C4Cu;
        goto label_107c4c;
    }
    ctx->pc = 0x107C44u;
    {
        const bool branch_taken_0x107c44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107c44) {
            ctx->pc = 0x107C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C44u;
            // 0x107c48: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D50u;
            goto label_107d50;
        }
    }
    ctx->pc = 0x107C4Cu;
label_107c4c:
    // 0x107c4c: 0x3c014008  lui         $at, 0x4008
    ctx->pc = 0x107c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16392 << 16));
label_107c50:
    // 0x107c50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_107c54:
    // 0x107c54: 0x0  nop
    ctx->pc = 0x107c54u;
    // NOP
label_107c58:
    // 0x107c58: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x107c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107c5c:
    // 0x107c5c: 0x0  nop
    ctx->pc = 0x107c5cu;
    // NOP
label_107c60:
    // 0x107c60: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
label_107c64:
    if (ctx->pc == 0x107C64u) {
        ctx->pc = 0x107C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C60u;
        // 0x107c64: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C68u;
        goto label_107c68;
    }
    ctx->pc = 0x107C60u;
    {
        const bool branch_taken_0x107c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107c60) {
            ctx->pc = 0x107C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C60u;
            // 0x107c64: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D50u;
            goto label_107d50;
        }
    }
    ctx->pc = 0x107C68u;
label_107c68:
    // 0x107c68: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107c6c:
    // 0x107c6c: 0xc041128  jal         func_1044A0
label_107c70:
    if (ctx->pc == 0x107C70u) {
        ctx->pc = 0x107C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C6Cu;
        // 0x107c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C74u;
        goto label_107c74;
    }
    ctx->pc = 0x107C6Cu;
    SET_GPR_U32(ctx, 31, 0x107C74u);
    ctx->pc = 0x107C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C6Cu;
    // 0x107c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107C6Cu, 0x107C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C74u;
label_107c74:
    // 0x107c74: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x107c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_107c78:
    // 0x107c78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107c78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107c7c:
    // 0x107c7c: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x107c7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107c80:
    // 0x107c80: 0x0  nop
    ctx->pc = 0x107c80u;
    // NOP
label_107c84:
    // 0x107c84: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_107c88:
    if (ctx->pc == 0x107C88u) {
        ctx->pc = 0x107C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C84u;
        // 0x107c88: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C8Cu;
        goto label_107c8c;
    }
    ctx->pc = 0x107C84u;
    {
        const bool branch_taken_0x107c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107c84) {
            ctx->pc = 0x107C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C84u;
            // 0x107c88: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D00u;
            goto label_107d00;
        }
    }
    ctx->pc = 0x107C8Cu;
label_107c8c:
    // 0x107c8c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107c90:
    // 0x107c90: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_107c94:
    // 0x107c94: 0xc0e409a  jal         func_390268
label_107c98:
    if (ctx->pc == 0x107C98u) {
        ctx->pc = 0x107C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C94u;
        // 0x107c98: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C9Cu;
        goto label_107c9c;
    }
    ctx->pc = 0x107C94u;
    SET_GPR_U32(ctx, 31, 0x107C9Cu);
    ctx->pc = 0x107C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C94u;
    // 0x107c98: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107C94u, 0x107C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C9Cu;
label_107c9c:
    // 0x107c9c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107ca0:
    // 0x107ca0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107ca4:
    // 0x107ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107ca8:
    // 0x107ca8: 0xc04115c  jal         func_104570
label_107cac:
    if (ctx->pc == 0x107CACu) {
        ctx->pc = 0x107CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA8u;
        // 0x107cac: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CB0u;
        goto label_107cb0;
    }
    ctx->pc = 0x107CA8u;
    SET_GPR_U32(ctx, 31, 0x107CB0u);
    ctx->pc = 0x107CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CA8u;
    // 0x107cac: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107CA8u, 0x107CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CB0u;
label_107cb0:
    // 0x107cb0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107cb4:
    // 0x107cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107cb8:
    // 0x107cb8: 0xc04115c  jal         func_104570
label_107cbc:
    if (ctx->pc == 0x107CBCu) {
        ctx->pc = 0x107CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CB8u;
        // 0x107cbc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CC0u;
        goto label_107cc0;
    }
    ctx->pc = 0x107CB8u;
    SET_GPR_U32(ctx, 31, 0x107CC0u);
    ctx->pc = 0x107CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CB8u;
    // 0x107cbc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107CB8u, 0x107CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CC0u;
label_107cc0:
    // 0x107cc0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107cc4:
    // 0x107cc4: 0xc041128  jal         func_1044A0
label_107cc8:
    if (ctx->pc == 0x107CC8u) {
        ctx->pc = 0x107CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CC4u;
        // 0x107cc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CCCu;
        goto label_107ccc;
    }
    ctx->pc = 0x107CC4u;
    SET_GPR_U32(ctx, 31, 0x107CCCu);
    ctx->pc = 0x107CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CC4u;
    // 0x107cc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107CC4u, 0x107CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CCCu;
label_107ccc:
    // 0x107ccc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x107cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107cd0:
    // 0x107cd0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107cd4:
    // 0x107cd4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_107cd8:
    // 0x107cd8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x107cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107cdc:
    // 0x107cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107ce0:
    // 0x107ce0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107ce4:
    // 0x107ce4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107ce8:
    // 0x107ce8: 0x0  nop
    ctx->pc = 0x107ce8u;
    // NOP
label_107cec:
    // 0x107cec: 0x0  nop
    ctx->pc = 0x107cecu;
    // NOP
label_107cf0:
    // 0x107cf0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107cf0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107cf4:
    // 0x107cf4: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x107cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107cf8:
    // 0x107cf8: 0x10000039  b           . + 4 + (0x39 << 2)
label_107cfc:
    if (ctx->pc == 0x107CFCu) {
        ctx->pc = 0x107CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF8u;
        // 0x107cfc: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D00u;
        goto label_107d00;
    }
    ctx->pc = 0x107CF8u;
    {
        const bool branch_taken_0x107cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF8u;
        // 0x107cfc: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cf8) {
            ctx->pc = 0x107DE0u;
            goto label_107de0;
        }
    }
    ctx->pc = 0x107D00u;
label_107d00:
    // 0x107d00: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107d04:
    // 0x107d04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107d08:
    // 0x107d08: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x107d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107d0c:
    // 0x107d0c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x107d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107d10:
    // 0x107d10: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_107d14:
    // 0x107d14: 0x0  nop
    ctx->pc = 0x107d14u;
    // NOP
label_107d18:
    // 0x107d18: 0x0  nop
    ctx->pc = 0x107d18u;
    // NOP
label_107d1c:
    // 0x107d1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107d1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107d20:
    // 0x107d20: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x107d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_107d24:
    // 0x107d24: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107d28:
    // 0x107d28: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107d28u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107d2c:
    // 0x107d2c: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x107d2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_107d30:
    // 0x107d30: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x107d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107d34:
    // 0x107d34: 0x0  nop
    ctx->pc = 0x107d34u;
    // NOP
label_107d38:
    // 0x107d38: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
label_107d3c:
    if (ctx->pc == 0x107D3Cu) {
        ctx->pc = 0x107D40u;
        goto label_107d40;
    }
    ctx->pc = 0x107D38u;
    {
        const bool branch_taken_0x107d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107d38) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107D40u;
label_107d40:
    // 0x107d40: 0xc04115c  jal         func_104570
label_107d44:
    if (ctx->pc == 0x107D44u) {
        ctx->pc = 0x107D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D40u;
        // 0x107d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D48u;
        goto label_107d48;
    }
    ctx->pc = 0x107D40u;
    SET_GPR_U32(ctx, 31, 0x107D48u);
    ctx->pc = 0x107D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D40u;
    // 0x107d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107D40u, 0x107D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D48u;
label_107d48:
    // 0x107d48: 0x10000045  b           . + 4 + (0x45 << 2)
label_107d4c:
    if (ctx->pc == 0x107D4Cu) {
        ctx->pc = 0x107D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D48u;
        // 0x107d4c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D50u;
        goto label_107d50;
    }
    ctx->pc = 0x107D48u;
    {
        const bool branch_taken_0x107d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D48u;
        // 0x107d4c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d48) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107D50u;
label_107d50:
    // 0x107d50: 0xc041128  jal         func_1044A0
label_107d54:
    if (ctx->pc == 0x107D54u) {
        ctx->pc = 0x107D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D50u;
        // 0x107d54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D58u;
        goto label_107d58;
    }
    ctx->pc = 0x107D50u;
    SET_GPR_U32(ctx, 31, 0x107D58u);
    ctx->pc = 0x107D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D50u;
    // 0x107d54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107D50u, 0x107D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D58u;
label_107d58:
    // 0x107d58: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x107d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_107d5c:
    // 0x107d5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107d5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107d60:
    // 0x107d60: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x107d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107d64:
    // 0x107d64: 0x0  nop
    ctx->pc = 0x107d64u;
    // NOP
label_107d68:
    // 0x107d68: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_107d6c:
    if (ctx->pc == 0x107D6Cu) {
        ctx->pc = 0x107D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D68u;
        // 0x107d6c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D70u;
        goto label_107d70;
    }
    ctx->pc = 0x107D68u;
    {
        const bool branch_taken_0x107d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107d68) {
            ctx->pc = 0x107D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D68u;
            // 0x107d6c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107E14u;
            goto label_107e14;
        }
    }
    ctx->pc = 0x107D70u;
label_107d70:
    // 0x107d70: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107d74:
    // 0x107d74: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_107d78:
    // 0x107d78: 0xc0e409a  jal         func_390268
label_107d7c:
    if (ctx->pc == 0x107D7Cu) {
        ctx->pc = 0x107D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D78u;
        // 0x107d7c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D80u;
        goto label_107d80;
    }
    ctx->pc = 0x107D78u;
    SET_GPR_U32(ctx, 31, 0x107D80u);
    ctx->pc = 0x107D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D78u;
    // 0x107d7c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107D78u, 0x107D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D80u;
label_107d80:
    // 0x107d80: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107d84:
    // 0x107d84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107d88:
    // 0x107d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107d8c:
    // 0x107d8c: 0xc04115c  jal         func_104570
label_107d90:
    if (ctx->pc == 0x107D90u) {
        ctx->pc = 0x107D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D8Cu;
        // 0x107d90: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D94u;
        goto label_107d94;
    }
    ctx->pc = 0x107D8Cu;
    SET_GPR_U32(ctx, 31, 0x107D94u);
    ctx->pc = 0x107D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D8Cu;
    // 0x107d90: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107D8Cu, 0x107D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D94u;
label_107d94:
    // 0x107d94: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107d98:
    // 0x107d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107d9c:
    // 0x107d9c: 0xc04115c  jal         func_104570
label_107da0:
    if (ctx->pc == 0x107DA0u) {
        ctx->pc = 0x107DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D9Cu;
        // 0x107da0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DA4u;
        goto label_107da4;
    }
    ctx->pc = 0x107D9Cu;
    SET_GPR_U32(ctx, 31, 0x107DA4u);
    ctx->pc = 0x107DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D9Cu;
    // 0x107da0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107D9Cu, 0x107DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DA4u;
label_107da4:
    // 0x107da4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107da8:
    // 0x107da8: 0xc041128  jal         func_1044A0
label_107dac:
    if (ctx->pc == 0x107DACu) {
        ctx->pc = 0x107DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA8u;
        // 0x107dac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DB0u;
        goto label_107db0;
    }
    ctx->pc = 0x107DA8u;
    SET_GPR_U32(ctx, 31, 0x107DB0u);
    ctx->pc = 0x107DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DA8u;
    // 0x107dac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107DA8u, 0x107DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DB0u;
label_107db0:
    // 0x107db0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107db4:
    // 0x107db4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x107db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107db8:
    // 0x107db8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107dbc:
    // 0x107dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107dc0:
    // 0x107dc0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x107dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107dc4:
    // 0x107dc4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x107dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107dc8:
    // 0x107dc8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x107dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_107dcc:
    // 0x107dcc: 0x0  nop
    ctx->pc = 0x107dccu;
    // NOP
label_107dd0:
    // 0x107dd0: 0x0  nop
    ctx->pc = 0x107dd0u;
    // NOP
label_107dd4:
    // 0x107dd4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107dd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107dd8:
    // 0x107dd8: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x107dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107ddc:
    // 0x107ddc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x107ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107de0:
    // 0x107de0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107de0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107de4:
    // 0x107de4: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x107de4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_107de8:
    // 0x107de8: 0xc041128  jal         func_1044A0
label_107dec:
    if (ctx->pc == 0x107DECu) {
        ctx->pc = 0x107DF0u;
        goto label_107df0;
    }
    ctx->pc = 0x107DE8u;
    SET_GPR_U32(ctx, 31, 0x107DF0u);
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107DE8u, 0x107DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DF0u;
label_107df0:
    // 0x107df0: 0x52200041  beql        $s1, $zero, . + 4 + (0x41 << 2)
label_107df4:
    if (ctx->pc == 0x107DF4u) {
        ctx->pc = 0x107DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DF0u;
        // 0x107df4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DF8u;
        goto label_107df8;
    }
    ctx->pc = 0x107DF0u;
    {
        const bool branch_taken_0x107df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x107df0) {
            ctx->pc = 0x107DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107DF0u;
            // 0x107df4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107DF8u;
label_107df8:
    // 0x107df8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_107dfc:
    // 0x107dfc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_107e00:
    if (ctx->pc == 0x107E00u) {
        ctx->pc = 0x107E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DFCu;
        // 0x107e00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E04u;
        goto label_107e04;
    }
    ctx->pc = 0x107DFCu;
    {
        const bool branch_taken_0x107dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DFCu;
        // 0x107e00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dfc) {
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107E04u;
label_107e04:
    // 0x107e04: 0x40f809  jalr        $v0
label_107e08:
    if (ctx->pc == 0x107E08u) {
        ctx->pc = 0x107E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E04u;
        // 0x107e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E0Cu;
        goto label_107e0c;
    }
    ctx->pc = 0x107E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107E0Cu);
        ctx->pc = 0x107E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E04u;
        // 0x107e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107E04u, 0x107E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107E0Cu;
label_107e0c:
    // 0x107e0c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_107e10:
    if (ctx->pc == 0x107E10u) {
        ctx->pc = 0x107E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E0Cu;
        // 0x107e10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E14u;
        goto label_107e14;
    }
    ctx->pc = 0x107E0Cu;
    {
        const bool branch_taken_0x107e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E0Cu;
        // 0x107e10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e0c) {
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107E14u;
label_107e14:
    // 0x107e14: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107e18:
    // 0x107e18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107e1c:
    // 0x107e1c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x107e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107e20:
    // 0x107e20: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x107e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107e24:
    // 0x107e24: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_107e28:
    // 0x107e28: 0x0  nop
    ctx->pc = 0x107e28u;
    // NOP
label_107e2c:
    // 0x107e2c: 0x0  nop
    ctx->pc = 0x107e2cu;
    // NOP
label_107e30:
    // 0x107e30: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x107e30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_107e34:
    // 0x107e34: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x107e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_107e38:
    // 0x107e38: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x107e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107e3c:
    // 0x107e3c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x107e3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_107e40:
    // 0x107e40: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x107e40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_107e44:
    // 0x107e44: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x107e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107e48:
    // 0x107e48: 0x0  nop
    ctx->pc = 0x107e48u;
    // NOP
label_107e4c:
    // 0x107e4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_107e50:
    if (ctx->pc == 0x107E50u) {
        ctx->pc = 0x107E54u;
        goto label_107e54;
    }
    ctx->pc = 0x107E4Cu;
    {
        const bool branch_taken_0x107e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107e4c) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107E54u;
label_107e54:
    // 0x107e54: 0xc04115c  jal         func_104570
label_107e58:
    if (ctx->pc == 0x107E58u) {
        ctx->pc = 0x107E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E54u;
        // 0x107e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E5Cu;
        goto label_107e5c;
    }
    ctx->pc = 0x107E54u;
    SET_GPR_U32(ctx, 31, 0x107E5Cu);
    ctx->pc = 0x107E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E54u;
    // 0x107e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107E54u, 0x107E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E5Cu;
label_107e5c:
    // 0x107e5c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107e60:
    // 0x107e60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x107e60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_107e64:
    // 0x107e64: 0xc041128  jal         func_1044A0
label_107e68:
    if (ctx->pc == 0x107E68u) {
        ctx->pc = 0x107E6Cu;
        goto label_107e6c;
    }
    ctx->pc = 0x107E64u;
    SET_GPR_U32(ctx, 31, 0x107E6Cu);
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107E64u, 0x107E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E6Cu;
label_107e6c:
    // 0x107e6c: 0x10000022  b           . + 4 + (0x22 << 2)
label_107e70:
    if (ctx->pc == 0x107E70u) {
        ctx->pc = 0x107E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E6Cu;
        // 0x107e70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E74u;
        goto label_107e74;
    }
    ctx->pc = 0x107E6Cu;
    {
        const bool branch_taken_0x107e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E6Cu;
        // 0x107e70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e6c) {
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107E74u;
label_107e74:
    // 0x107e74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x107e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107e78:
    // 0x107e78: 0x0  nop
    ctx->pc = 0x107e78u;
    // NOP
label_107e7c:
    // 0x107e7c: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
label_107e80:
    if (ctx->pc == 0x107E80u) {
        ctx->pc = 0x107E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E7Cu;
        // 0x107e80: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E84u;
        goto label_107e84;
    }
    ctx->pc = 0x107E7Cu;
    {
        const bool branch_taken_0x107e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107e7c) {
            ctx->pc = 0x107E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107E7Cu;
            // 0x107e80: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107E84u;
label_107e84:
    // 0x107e84: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107e88:
    // 0x107e88: 0xc041128  jal         func_1044A0
label_107e8c:
    if (ctx->pc == 0x107E8Cu) {
        ctx->pc = 0x107E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E88u;
        // 0x107e8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E90u;
        goto label_107e90;
    }
    ctx->pc = 0x107E88u;
    SET_GPR_U32(ctx, 31, 0x107E90u);
    ctx->pc = 0x107E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E88u;
    // 0x107e8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107E88u, 0x107E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E90u;
label_107e90:
    // 0x107e90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_107e94:
    // 0x107e94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107e94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_107e98:
    // 0x107e98: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x107e98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107e9c:
    // 0x107e9c: 0x0  nop
    ctx->pc = 0x107e9cu;
    // NOP
label_107ea0:
    // 0x107ea0: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_107ea4:
    if (ctx->pc == 0x107EA4u) {
        ctx->pc = 0x107EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EA0u;
        // 0x107ea4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EA8u;
        goto label_107ea8;
    }
    ctx->pc = 0x107EA0u;
    {
        const bool branch_taken_0x107ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107ea0) {
            ctx->pc = 0x107EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107EA0u;
            // 0x107ea4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107EA8u;
label_107ea8:
    // 0x107ea8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x107ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_107eac:
    // 0x107eac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x107eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_107eb0:
    // 0x107eb0: 0xc0e409a  jal         func_390268
label_107eb4:
    if (ctx->pc == 0x107EB4u) {
        ctx->pc = 0x107EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB0u;
        // 0x107eb4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EB8u;
        goto label_107eb8;
    }
    ctx->pc = 0x107EB0u;
    SET_GPR_U32(ctx, 31, 0x107EB8u);
    ctx->pc = 0x107EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EB0u;
    // 0x107eb4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x107EB0u, 0x107EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EB8u;
label_107eb8:
    // 0x107eb8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107ebc:
    // 0x107ebc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107ec0:
    // 0x107ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107ec4:
    // 0x107ec4: 0xc04115c  jal         func_104570
label_107ec8:
    if (ctx->pc == 0x107EC8u) {
        ctx->pc = 0x107EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EC4u;
        // 0x107ec8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107ECCu;
        goto label_107ecc;
    }
    ctx->pc = 0x107EC4u;
    SET_GPR_U32(ctx, 31, 0x107ECCu);
    ctx->pc = 0x107EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EC4u;
    // 0x107ec8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x107EC4u, 0x107ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ECCu;
label_107ecc:
    // 0x107ecc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x107eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107ed0:
    // 0x107ed0: 0xc041128  jal         func_1044A0
label_107ed4:
    if (ctx->pc == 0x107ED4u) {
        ctx->pc = 0x107ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ED0u;
        // 0x107ed4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107ED8u;
        goto label_107ed8;
    }
    ctx->pc = 0x107ED0u;
    SET_GPR_U32(ctx, 31, 0x107ED8u);
    ctx->pc = 0x107ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107ED0u;
    // 0x107ed4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x107ED0u, 0x107ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ED8u;
label_107ed8:
    // 0x107ed8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_107edc:
    if (ctx->pc == 0x107EDCu) {
        ctx->pc = 0x107EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ED8u;
        // 0x107edc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EE0u;
        goto label_107ee0;
    }
    ctx->pc = 0x107ED8u;
    {
        const bool branch_taken_0x107ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ed8) {
            ctx->pc = 0x107EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107ED8u;
            // 0x107edc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107EE0u;
label_107ee0:
    // 0x107ee0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_107ee4:
    // 0x107ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_107ee8:
    if (ctx->pc == 0x107EE8u) {
        ctx->pc = 0x107EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE4u;
        // 0x107ee8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EECu;
        goto label_107eec;
    }
    ctx->pc = 0x107EE4u;
    {
        const bool branch_taken_0x107ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE4u;
        // 0x107ee8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ee4) {
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107EECu;
label_107eec:
    // 0x107eec: 0x40f809  jalr        $v0
label_107ef0:
    if (ctx->pc == 0x107EF0u) {
        ctx->pc = 0x107EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EECu;
        // 0x107ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EF4u;
        goto label_107ef4;
    }
    ctx->pc = 0x107EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107EF4u);
        ctx->pc = 0x107EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EECu;
        // 0x107ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107EECu, 0x107EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107EF4u;
label_107ef4:
    // 0x107ef4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x107ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_107ef8:
    // 0x107ef8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x107ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_107efc:
    // 0x107efc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_107f00:
    // 0x107f00: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x107f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_107f04:
    // 0x107f04: 0x3e00008  jr          $ra
label_107f08:
    if (ctx->pc == 0x107F08u) {
        ctx->pc = 0x107F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F04u;
        // 0x107f08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F0Cu;
        goto label_107f0c;
    }
    ctx->pc = 0x107F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F04u;
        // 0x107f08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107F0Cu;
label_107f0c:
    // 0x107f0c: 0x0  nop
    ctx->pc = 0x107f0cu;
    // NOP
    ctx->pc = 0x107f10u;
}
