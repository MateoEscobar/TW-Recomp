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

// Function: sub_003FD600
// Address: 0x3fd600 - 0x3fe490
void sub_003FD600_0x3fd600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD600_0x3fd600");
#endif

    switch (ctx->pc) {
        case 0x3fd600u: goto label_3fd600;
        case 0x3fd604u: goto label_3fd604;
        case 0x3fd608u: goto label_3fd608;
        case 0x3fd60cu: goto label_3fd60c;
        case 0x3fd610u: goto label_3fd610;
        case 0x3fd614u: goto label_3fd614;
        case 0x3fd618u: goto label_3fd618;
        case 0x3fd61cu: goto label_3fd61c;
        case 0x3fd620u: goto label_3fd620;
        case 0x3fd624u: goto label_3fd624;
        case 0x3fd628u: goto label_3fd628;
        case 0x3fd62cu: goto label_3fd62c;
        case 0x3fd630u: goto label_3fd630;
        case 0x3fd634u: goto label_3fd634;
        case 0x3fd638u: goto label_3fd638;
        case 0x3fd63cu: goto label_3fd63c;
        case 0x3fd640u: goto label_3fd640;
        case 0x3fd644u: goto label_3fd644;
        case 0x3fd648u: goto label_3fd648;
        case 0x3fd64cu: goto label_3fd64c;
        case 0x3fd650u: goto label_3fd650;
        case 0x3fd654u: goto label_3fd654;
        case 0x3fd658u: goto label_3fd658;
        case 0x3fd65cu: goto label_3fd65c;
        case 0x3fd660u: goto label_3fd660;
        case 0x3fd664u: goto label_3fd664;
        case 0x3fd668u: goto label_3fd668;
        case 0x3fd66cu: goto label_3fd66c;
        case 0x3fd670u: goto label_3fd670;
        case 0x3fd674u: goto label_3fd674;
        case 0x3fd678u: goto label_3fd678;
        case 0x3fd67cu: goto label_3fd67c;
        case 0x3fd680u: goto label_3fd680;
        case 0x3fd684u: goto label_3fd684;
        case 0x3fd688u: goto label_3fd688;
        case 0x3fd68cu: goto label_3fd68c;
        case 0x3fd690u: goto label_3fd690;
        case 0x3fd694u: goto label_3fd694;
        case 0x3fd698u: goto label_3fd698;
        case 0x3fd69cu: goto label_3fd69c;
        case 0x3fd6a0u: goto label_3fd6a0;
        case 0x3fd6a4u: goto label_3fd6a4;
        case 0x3fd6a8u: goto label_3fd6a8;
        case 0x3fd6acu: goto label_3fd6ac;
        case 0x3fd6b0u: goto label_3fd6b0;
        case 0x3fd6b4u: goto label_3fd6b4;
        case 0x3fd6b8u: goto label_3fd6b8;
        case 0x3fd6bcu: goto label_3fd6bc;
        case 0x3fd6c0u: goto label_3fd6c0;
        case 0x3fd6c4u: goto label_3fd6c4;
        case 0x3fd6c8u: goto label_3fd6c8;
        case 0x3fd6ccu: goto label_3fd6cc;
        case 0x3fd6d0u: goto label_3fd6d0;
        case 0x3fd6d4u: goto label_3fd6d4;
        case 0x3fd6d8u: goto label_3fd6d8;
        case 0x3fd6dcu: goto label_3fd6dc;
        case 0x3fd6e0u: goto label_3fd6e0;
        case 0x3fd6e4u: goto label_3fd6e4;
        case 0x3fd6e8u: goto label_3fd6e8;
        case 0x3fd6ecu: goto label_3fd6ec;
        case 0x3fd6f0u: goto label_3fd6f0;
        case 0x3fd6f4u: goto label_3fd6f4;
        case 0x3fd6f8u: goto label_3fd6f8;
        case 0x3fd6fcu: goto label_3fd6fc;
        case 0x3fd700u: goto label_3fd700;
        case 0x3fd704u: goto label_3fd704;
        case 0x3fd708u: goto label_3fd708;
        case 0x3fd70cu: goto label_3fd70c;
        case 0x3fd710u: goto label_3fd710;
        case 0x3fd714u: goto label_3fd714;
        case 0x3fd718u: goto label_3fd718;
        case 0x3fd71cu: goto label_3fd71c;
        case 0x3fd720u: goto label_3fd720;
        case 0x3fd724u: goto label_3fd724;
        case 0x3fd728u: goto label_3fd728;
        case 0x3fd72cu: goto label_3fd72c;
        case 0x3fd730u: goto label_3fd730;
        case 0x3fd734u: goto label_3fd734;
        case 0x3fd738u: goto label_3fd738;
        case 0x3fd73cu: goto label_3fd73c;
        case 0x3fd740u: goto label_3fd740;
        case 0x3fd744u: goto label_3fd744;
        case 0x3fd748u: goto label_3fd748;
        case 0x3fd74cu: goto label_3fd74c;
        case 0x3fd750u: goto label_3fd750;
        case 0x3fd754u: goto label_3fd754;
        case 0x3fd758u: goto label_3fd758;
        case 0x3fd75cu: goto label_3fd75c;
        case 0x3fd760u: goto label_3fd760;
        case 0x3fd764u: goto label_3fd764;
        case 0x3fd768u: goto label_3fd768;
        case 0x3fd76cu: goto label_3fd76c;
        case 0x3fd770u: goto label_3fd770;
        case 0x3fd774u: goto label_3fd774;
        case 0x3fd778u: goto label_3fd778;
        case 0x3fd77cu: goto label_3fd77c;
        case 0x3fd780u: goto label_3fd780;
        case 0x3fd784u: goto label_3fd784;
        case 0x3fd788u: goto label_3fd788;
        case 0x3fd78cu: goto label_3fd78c;
        case 0x3fd790u: goto label_3fd790;
        case 0x3fd794u: goto label_3fd794;
        case 0x3fd798u: goto label_3fd798;
        case 0x3fd79cu: goto label_3fd79c;
        case 0x3fd7a0u: goto label_3fd7a0;
        case 0x3fd7a4u: goto label_3fd7a4;
        case 0x3fd7a8u: goto label_3fd7a8;
        case 0x3fd7acu: goto label_3fd7ac;
        case 0x3fd7b0u: goto label_3fd7b0;
        case 0x3fd7b4u: goto label_3fd7b4;
        case 0x3fd7b8u: goto label_3fd7b8;
        case 0x3fd7bcu: goto label_3fd7bc;
        case 0x3fd7c0u: goto label_3fd7c0;
        case 0x3fd7c4u: goto label_3fd7c4;
        case 0x3fd7c8u: goto label_3fd7c8;
        case 0x3fd7ccu: goto label_3fd7cc;
        case 0x3fd7d0u: goto label_3fd7d0;
        case 0x3fd7d4u: goto label_3fd7d4;
        case 0x3fd7d8u: goto label_3fd7d8;
        case 0x3fd7dcu: goto label_3fd7dc;
        case 0x3fd7e0u: goto label_3fd7e0;
        case 0x3fd7e4u: goto label_3fd7e4;
        case 0x3fd7e8u: goto label_3fd7e8;
        case 0x3fd7ecu: goto label_3fd7ec;
        case 0x3fd7f0u: goto label_3fd7f0;
        case 0x3fd7f4u: goto label_3fd7f4;
        case 0x3fd7f8u: goto label_3fd7f8;
        case 0x3fd7fcu: goto label_3fd7fc;
        case 0x3fd800u: goto label_3fd800;
        case 0x3fd804u: goto label_3fd804;
        case 0x3fd808u: goto label_3fd808;
        case 0x3fd80cu: goto label_3fd80c;
        case 0x3fd810u: goto label_3fd810;
        case 0x3fd814u: goto label_3fd814;
        case 0x3fd818u: goto label_3fd818;
        case 0x3fd81cu: goto label_3fd81c;
        case 0x3fd820u: goto label_3fd820;
        case 0x3fd824u: goto label_3fd824;
        case 0x3fd828u: goto label_3fd828;
        case 0x3fd82cu: goto label_3fd82c;
        case 0x3fd830u: goto label_3fd830;
        case 0x3fd834u: goto label_3fd834;
        case 0x3fd838u: goto label_3fd838;
        case 0x3fd83cu: goto label_3fd83c;
        case 0x3fd840u: goto label_3fd840;
        case 0x3fd844u: goto label_3fd844;
        case 0x3fd848u: goto label_3fd848;
        case 0x3fd84cu: goto label_3fd84c;
        case 0x3fd850u: goto label_3fd850;
        case 0x3fd854u: goto label_3fd854;
        case 0x3fd858u: goto label_3fd858;
        case 0x3fd85cu: goto label_3fd85c;
        case 0x3fd860u: goto label_3fd860;
        case 0x3fd864u: goto label_3fd864;
        case 0x3fd868u: goto label_3fd868;
        case 0x3fd86cu: goto label_3fd86c;
        case 0x3fd870u: goto label_3fd870;
        case 0x3fd874u: goto label_3fd874;
        case 0x3fd878u: goto label_3fd878;
        case 0x3fd87cu: goto label_3fd87c;
        case 0x3fd880u: goto label_3fd880;
        case 0x3fd884u: goto label_3fd884;
        case 0x3fd888u: goto label_3fd888;
        case 0x3fd88cu: goto label_3fd88c;
        case 0x3fd890u: goto label_3fd890;
        case 0x3fd894u: goto label_3fd894;
        case 0x3fd898u: goto label_3fd898;
        case 0x3fd89cu: goto label_3fd89c;
        case 0x3fd8a0u: goto label_3fd8a0;
        case 0x3fd8a4u: goto label_3fd8a4;
        case 0x3fd8a8u: goto label_3fd8a8;
        case 0x3fd8acu: goto label_3fd8ac;
        case 0x3fd8b0u: goto label_3fd8b0;
        case 0x3fd8b4u: goto label_3fd8b4;
        case 0x3fd8b8u: goto label_3fd8b8;
        case 0x3fd8bcu: goto label_3fd8bc;
        case 0x3fd8c0u: goto label_3fd8c0;
        case 0x3fd8c4u: goto label_3fd8c4;
        case 0x3fd8c8u: goto label_3fd8c8;
        case 0x3fd8ccu: goto label_3fd8cc;
        case 0x3fd8d0u: goto label_3fd8d0;
        case 0x3fd8d4u: goto label_3fd8d4;
        case 0x3fd8d8u: goto label_3fd8d8;
        case 0x3fd8dcu: goto label_3fd8dc;
        case 0x3fd8e0u: goto label_3fd8e0;
        case 0x3fd8e4u: goto label_3fd8e4;
        case 0x3fd8e8u: goto label_3fd8e8;
        case 0x3fd8ecu: goto label_3fd8ec;
        case 0x3fd8f0u: goto label_3fd8f0;
        case 0x3fd8f4u: goto label_3fd8f4;
        case 0x3fd8f8u: goto label_3fd8f8;
        case 0x3fd8fcu: goto label_3fd8fc;
        case 0x3fd900u: goto label_3fd900;
        case 0x3fd904u: goto label_3fd904;
        case 0x3fd908u: goto label_3fd908;
        case 0x3fd90cu: goto label_3fd90c;
        case 0x3fd910u: goto label_3fd910;
        case 0x3fd914u: goto label_3fd914;
        case 0x3fd918u: goto label_3fd918;
        case 0x3fd91cu: goto label_3fd91c;
        case 0x3fd920u: goto label_3fd920;
        case 0x3fd924u: goto label_3fd924;
        case 0x3fd928u: goto label_3fd928;
        case 0x3fd92cu: goto label_3fd92c;
        case 0x3fd930u: goto label_3fd930;
        case 0x3fd934u: goto label_3fd934;
        case 0x3fd938u: goto label_3fd938;
        case 0x3fd93cu: goto label_3fd93c;
        case 0x3fd940u: goto label_3fd940;
        case 0x3fd944u: goto label_3fd944;
        case 0x3fd948u: goto label_3fd948;
        case 0x3fd94cu: goto label_3fd94c;
        case 0x3fd950u: goto label_3fd950;
        case 0x3fd954u: goto label_3fd954;
        case 0x3fd958u: goto label_3fd958;
        case 0x3fd95cu: goto label_3fd95c;
        case 0x3fd960u: goto label_3fd960;
        case 0x3fd964u: goto label_3fd964;
        case 0x3fd968u: goto label_3fd968;
        case 0x3fd96cu: goto label_3fd96c;
        case 0x3fd970u: goto label_3fd970;
        case 0x3fd974u: goto label_3fd974;
        case 0x3fd978u: goto label_3fd978;
        case 0x3fd97cu: goto label_3fd97c;
        case 0x3fd980u: goto label_3fd980;
        case 0x3fd984u: goto label_3fd984;
        case 0x3fd988u: goto label_3fd988;
        case 0x3fd98cu: goto label_3fd98c;
        case 0x3fd990u: goto label_3fd990;
        case 0x3fd994u: goto label_3fd994;
        case 0x3fd998u: goto label_3fd998;
        case 0x3fd99cu: goto label_3fd99c;
        case 0x3fd9a0u: goto label_3fd9a0;
        case 0x3fd9a4u: goto label_3fd9a4;
        case 0x3fd9a8u: goto label_3fd9a8;
        case 0x3fd9acu: goto label_3fd9ac;
        case 0x3fd9b0u: goto label_3fd9b0;
        case 0x3fd9b4u: goto label_3fd9b4;
        case 0x3fd9b8u: goto label_3fd9b8;
        case 0x3fd9bcu: goto label_3fd9bc;
        case 0x3fd9c0u: goto label_3fd9c0;
        case 0x3fd9c4u: goto label_3fd9c4;
        case 0x3fd9c8u: goto label_3fd9c8;
        case 0x3fd9ccu: goto label_3fd9cc;
        case 0x3fd9d0u: goto label_3fd9d0;
        case 0x3fd9d4u: goto label_3fd9d4;
        case 0x3fd9d8u: goto label_3fd9d8;
        case 0x3fd9dcu: goto label_3fd9dc;
        case 0x3fd9e0u: goto label_3fd9e0;
        case 0x3fd9e4u: goto label_3fd9e4;
        case 0x3fd9e8u: goto label_3fd9e8;
        case 0x3fd9ecu: goto label_3fd9ec;
        case 0x3fd9f0u: goto label_3fd9f0;
        case 0x3fd9f4u: goto label_3fd9f4;
        case 0x3fd9f8u: goto label_3fd9f8;
        case 0x3fd9fcu: goto label_3fd9fc;
        case 0x3fda00u: goto label_3fda00;
        case 0x3fda04u: goto label_3fda04;
        case 0x3fda08u: goto label_3fda08;
        case 0x3fda0cu: goto label_3fda0c;
        case 0x3fda10u: goto label_3fda10;
        case 0x3fda14u: goto label_3fda14;
        case 0x3fda18u: goto label_3fda18;
        case 0x3fda1cu: goto label_3fda1c;
        case 0x3fda20u: goto label_3fda20;
        case 0x3fda24u: goto label_3fda24;
        case 0x3fda28u: goto label_3fda28;
        case 0x3fda2cu: goto label_3fda2c;
        case 0x3fda30u: goto label_3fda30;
        case 0x3fda34u: goto label_3fda34;
        case 0x3fda38u: goto label_3fda38;
        case 0x3fda3cu: goto label_3fda3c;
        case 0x3fda40u: goto label_3fda40;
        case 0x3fda44u: goto label_3fda44;
        case 0x3fda48u: goto label_3fda48;
        case 0x3fda4cu: goto label_3fda4c;
        case 0x3fda50u: goto label_3fda50;
        case 0x3fda54u: goto label_3fda54;
        case 0x3fda58u: goto label_3fda58;
        case 0x3fda5cu: goto label_3fda5c;
        case 0x3fda60u: goto label_3fda60;
        case 0x3fda64u: goto label_3fda64;
        case 0x3fda68u: goto label_3fda68;
        case 0x3fda6cu: goto label_3fda6c;
        case 0x3fda70u: goto label_3fda70;
        case 0x3fda74u: goto label_3fda74;
        case 0x3fda78u: goto label_3fda78;
        case 0x3fda7cu: goto label_3fda7c;
        case 0x3fda80u: goto label_3fda80;
        case 0x3fda84u: goto label_3fda84;
        case 0x3fda88u: goto label_3fda88;
        case 0x3fda8cu: goto label_3fda8c;
        case 0x3fda90u: goto label_3fda90;
        case 0x3fda94u: goto label_3fda94;
        case 0x3fda98u: goto label_3fda98;
        case 0x3fda9cu: goto label_3fda9c;
        case 0x3fdaa0u: goto label_3fdaa0;
        case 0x3fdaa4u: goto label_3fdaa4;
        case 0x3fdaa8u: goto label_3fdaa8;
        case 0x3fdaacu: goto label_3fdaac;
        case 0x3fdab0u: goto label_3fdab0;
        case 0x3fdab4u: goto label_3fdab4;
        case 0x3fdab8u: goto label_3fdab8;
        case 0x3fdabcu: goto label_3fdabc;
        case 0x3fdac0u: goto label_3fdac0;
        case 0x3fdac4u: goto label_3fdac4;
        case 0x3fdac8u: goto label_3fdac8;
        case 0x3fdaccu: goto label_3fdacc;
        case 0x3fdad0u: goto label_3fdad0;
        case 0x3fdad4u: goto label_3fdad4;
        case 0x3fdad8u: goto label_3fdad8;
        case 0x3fdadcu: goto label_3fdadc;
        case 0x3fdae0u: goto label_3fdae0;
        case 0x3fdae4u: goto label_3fdae4;
        case 0x3fdae8u: goto label_3fdae8;
        case 0x3fdaecu: goto label_3fdaec;
        case 0x3fdaf0u: goto label_3fdaf0;
        case 0x3fdaf4u: goto label_3fdaf4;
        case 0x3fdaf8u: goto label_3fdaf8;
        case 0x3fdafcu: goto label_3fdafc;
        case 0x3fdb00u: goto label_3fdb00;
        case 0x3fdb04u: goto label_3fdb04;
        case 0x3fdb08u: goto label_3fdb08;
        case 0x3fdb0cu: goto label_3fdb0c;
        case 0x3fdb10u: goto label_3fdb10;
        case 0x3fdb14u: goto label_3fdb14;
        case 0x3fdb18u: goto label_3fdb18;
        case 0x3fdb1cu: goto label_3fdb1c;
        case 0x3fdb20u: goto label_3fdb20;
        case 0x3fdb24u: goto label_3fdb24;
        case 0x3fdb28u: goto label_3fdb28;
        case 0x3fdb2cu: goto label_3fdb2c;
        case 0x3fdb30u: goto label_3fdb30;
        case 0x3fdb34u: goto label_3fdb34;
        case 0x3fdb38u: goto label_3fdb38;
        case 0x3fdb3cu: goto label_3fdb3c;
        case 0x3fdb40u: goto label_3fdb40;
        case 0x3fdb44u: goto label_3fdb44;
        case 0x3fdb48u: goto label_3fdb48;
        case 0x3fdb4cu: goto label_3fdb4c;
        case 0x3fdb50u: goto label_3fdb50;
        case 0x3fdb54u: goto label_3fdb54;
        case 0x3fdb58u: goto label_3fdb58;
        case 0x3fdb5cu: goto label_3fdb5c;
        case 0x3fdb60u: goto label_3fdb60;
        case 0x3fdb64u: goto label_3fdb64;
        case 0x3fdb68u: goto label_3fdb68;
        case 0x3fdb6cu: goto label_3fdb6c;
        case 0x3fdb70u: goto label_3fdb70;
        case 0x3fdb74u: goto label_3fdb74;
        case 0x3fdb78u: goto label_3fdb78;
        case 0x3fdb7cu: goto label_3fdb7c;
        case 0x3fdb80u: goto label_3fdb80;
        case 0x3fdb84u: goto label_3fdb84;
        case 0x3fdb88u: goto label_3fdb88;
        case 0x3fdb8cu: goto label_3fdb8c;
        case 0x3fdb90u: goto label_3fdb90;
        case 0x3fdb94u: goto label_3fdb94;
        case 0x3fdb98u: goto label_3fdb98;
        case 0x3fdb9cu: goto label_3fdb9c;
        case 0x3fdba0u: goto label_3fdba0;
        case 0x3fdba4u: goto label_3fdba4;
        case 0x3fdba8u: goto label_3fdba8;
        case 0x3fdbacu: goto label_3fdbac;
        case 0x3fdbb0u: goto label_3fdbb0;
        case 0x3fdbb4u: goto label_3fdbb4;
        case 0x3fdbb8u: goto label_3fdbb8;
        case 0x3fdbbcu: goto label_3fdbbc;
        case 0x3fdbc0u: goto label_3fdbc0;
        case 0x3fdbc4u: goto label_3fdbc4;
        case 0x3fdbc8u: goto label_3fdbc8;
        case 0x3fdbccu: goto label_3fdbcc;
        case 0x3fdbd0u: goto label_3fdbd0;
        case 0x3fdbd4u: goto label_3fdbd4;
        case 0x3fdbd8u: goto label_3fdbd8;
        case 0x3fdbdcu: goto label_3fdbdc;
        case 0x3fdbe0u: goto label_3fdbe0;
        case 0x3fdbe4u: goto label_3fdbe4;
        case 0x3fdbe8u: goto label_3fdbe8;
        case 0x3fdbecu: goto label_3fdbec;
        case 0x3fdbf0u: goto label_3fdbf0;
        case 0x3fdbf4u: goto label_3fdbf4;
        case 0x3fdbf8u: goto label_3fdbf8;
        case 0x3fdbfcu: goto label_3fdbfc;
        case 0x3fdc00u: goto label_3fdc00;
        case 0x3fdc04u: goto label_3fdc04;
        case 0x3fdc08u: goto label_3fdc08;
        case 0x3fdc0cu: goto label_3fdc0c;
        case 0x3fdc10u: goto label_3fdc10;
        case 0x3fdc14u: goto label_3fdc14;
        case 0x3fdc18u: goto label_3fdc18;
        case 0x3fdc1cu: goto label_3fdc1c;
        case 0x3fdc20u: goto label_3fdc20;
        case 0x3fdc24u: goto label_3fdc24;
        case 0x3fdc28u: goto label_3fdc28;
        case 0x3fdc2cu: goto label_3fdc2c;
        case 0x3fdc30u: goto label_3fdc30;
        case 0x3fdc34u: goto label_3fdc34;
        case 0x3fdc38u: goto label_3fdc38;
        case 0x3fdc3cu: goto label_3fdc3c;
        case 0x3fdc40u: goto label_3fdc40;
        case 0x3fdc44u: goto label_3fdc44;
        case 0x3fdc48u: goto label_3fdc48;
        case 0x3fdc4cu: goto label_3fdc4c;
        case 0x3fdc50u: goto label_3fdc50;
        case 0x3fdc54u: goto label_3fdc54;
        case 0x3fdc58u: goto label_3fdc58;
        case 0x3fdc5cu: goto label_3fdc5c;
        case 0x3fdc60u: goto label_3fdc60;
        case 0x3fdc64u: goto label_3fdc64;
        case 0x3fdc68u: goto label_3fdc68;
        case 0x3fdc6cu: goto label_3fdc6c;
        case 0x3fdc70u: goto label_3fdc70;
        case 0x3fdc74u: goto label_3fdc74;
        case 0x3fdc78u: goto label_3fdc78;
        case 0x3fdc7cu: goto label_3fdc7c;
        case 0x3fdc80u: goto label_3fdc80;
        case 0x3fdc84u: goto label_3fdc84;
        case 0x3fdc88u: goto label_3fdc88;
        case 0x3fdc8cu: goto label_3fdc8c;
        case 0x3fdc90u: goto label_3fdc90;
        case 0x3fdc94u: goto label_3fdc94;
        case 0x3fdc98u: goto label_3fdc98;
        case 0x3fdc9cu: goto label_3fdc9c;
        case 0x3fdca0u: goto label_3fdca0;
        case 0x3fdca4u: goto label_3fdca4;
        case 0x3fdca8u: goto label_3fdca8;
        case 0x3fdcacu: goto label_3fdcac;
        case 0x3fdcb0u: goto label_3fdcb0;
        case 0x3fdcb4u: goto label_3fdcb4;
        case 0x3fdcb8u: goto label_3fdcb8;
        case 0x3fdcbcu: goto label_3fdcbc;
        case 0x3fdcc0u: goto label_3fdcc0;
        case 0x3fdcc4u: goto label_3fdcc4;
        case 0x3fdcc8u: goto label_3fdcc8;
        case 0x3fdcccu: goto label_3fdccc;
        case 0x3fdcd0u: goto label_3fdcd0;
        case 0x3fdcd4u: goto label_3fdcd4;
        case 0x3fdcd8u: goto label_3fdcd8;
        case 0x3fdcdcu: goto label_3fdcdc;
        case 0x3fdce0u: goto label_3fdce0;
        case 0x3fdce4u: goto label_3fdce4;
        case 0x3fdce8u: goto label_3fdce8;
        case 0x3fdcecu: goto label_3fdcec;
        case 0x3fdcf0u: goto label_3fdcf0;
        case 0x3fdcf4u: goto label_3fdcf4;
        case 0x3fdcf8u: goto label_3fdcf8;
        case 0x3fdcfcu: goto label_3fdcfc;
        case 0x3fdd00u: goto label_3fdd00;
        case 0x3fdd04u: goto label_3fdd04;
        case 0x3fdd08u: goto label_3fdd08;
        case 0x3fdd0cu: goto label_3fdd0c;
        case 0x3fdd10u: goto label_3fdd10;
        case 0x3fdd14u: goto label_3fdd14;
        case 0x3fdd18u: goto label_3fdd18;
        case 0x3fdd1cu: goto label_3fdd1c;
        case 0x3fdd20u: goto label_3fdd20;
        case 0x3fdd24u: goto label_3fdd24;
        case 0x3fdd28u: goto label_3fdd28;
        case 0x3fdd2cu: goto label_3fdd2c;
        case 0x3fdd30u: goto label_3fdd30;
        case 0x3fdd34u: goto label_3fdd34;
        case 0x3fdd38u: goto label_3fdd38;
        case 0x3fdd3cu: goto label_3fdd3c;
        case 0x3fdd40u: goto label_3fdd40;
        case 0x3fdd44u: goto label_3fdd44;
        case 0x3fdd48u: goto label_3fdd48;
        case 0x3fdd4cu: goto label_3fdd4c;
        case 0x3fdd50u: goto label_3fdd50;
        case 0x3fdd54u: goto label_3fdd54;
        case 0x3fdd58u: goto label_3fdd58;
        case 0x3fdd5cu: goto label_3fdd5c;
        case 0x3fdd60u: goto label_3fdd60;
        case 0x3fdd64u: goto label_3fdd64;
        case 0x3fdd68u: goto label_3fdd68;
        case 0x3fdd6cu: goto label_3fdd6c;
        case 0x3fdd70u: goto label_3fdd70;
        case 0x3fdd74u: goto label_3fdd74;
        case 0x3fdd78u: goto label_3fdd78;
        case 0x3fdd7cu: goto label_3fdd7c;
        case 0x3fdd80u: goto label_3fdd80;
        case 0x3fdd84u: goto label_3fdd84;
        case 0x3fdd88u: goto label_3fdd88;
        case 0x3fdd8cu: goto label_3fdd8c;
        case 0x3fdd90u: goto label_3fdd90;
        case 0x3fdd94u: goto label_3fdd94;
        case 0x3fdd98u: goto label_3fdd98;
        case 0x3fdd9cu: goto label_3fdd9c;
        case 0x3fdda0u: goto label_3fdda0;
        case 0x3fdda4u: goto label_3fdda4;
        case 0x3fdda8u: goto label_3fdda8;
        case 0x3fddacu: goto label_3fddac;
        case 0x3fddb0u: goto label_3fddb0;
        case 0x3fddb4u: goto label_3fddb4;
        case 0x3fddb8u: goto label_3fddb8;
        case 0x3fddbcu: goto label_3fddbc;
        case 0x3fddc0u: goto label_3fddc0;
        case 0x3fddc4u: goto label_3fddc4;
        case 0x3fddc8u: goto label_3fddc8;
        case 0x3fddccu: goto label_3fddcc;
        case 0x3fddd0u: goto label_3fddd0;
        case 0x3fddd4u: goto label_3fddd4;
        case 0x3fddd8u: goto label_3fddd8;
        case 0x3fdddcu: goto label_3fdddc;
        case 0x3fdde0u: goto label_3fdde0;
        case 0x3fdde4u: goto label_3fdde4;
        case 0x3fdde8u: goto label_3fdde8;
        case 0x3fddecu: goto label_3fddec;
        case 0x3fddf0u: goto label_3fddf0;
        case 0x3fddf4u: goto label_3fddf4;
        case 0x3fddf8u: goto label_3fddf8;
        case 0x3fddfcu: goto label_3fddfc;
        case 0x3fde00u: goto label_3fde00;
        case 0x3fde04u: goto label_3fde04;
        case 0x3fde08u: goto label_3fde08;
        case 0x3fde0cu: goto label_3fde0c;
        case 0x3fde10u: goto label_3fde10;
        case 0x3fde14u: goto label_3fde14;
        case 0x3fde18u: goto label_3fde18;
        case 0x3fde1cu: goto label_3fde1c;
        case 0x3fde20u: goto label_3fde20;
        case 0x3fde24u: goto label_3fde24;
        case 0x3fde28u: goto label_3fde28;
        case 0x3fde2cu: goto label_3fde2c;
        case 0x3fde30u: goto label_3fde30;
        case 0x3fde34u: goto label_3fde34;
        case 0x3fde38u: goto label_3fde38;
        case 0x3fde3cu: goto label_3fde3c;
        case 0x3fde40u: goto label_3fde40;
        case 0x3fde44u: goto label_3fde44;
        case 0x3fde48u: goto label_3fde48;
        case 0x3fde4cu: goto label_3fde4c;
        case 0x3fde50u: goto label_3fde50;
        case 0x3fde54u: goto label_3fde54;
        case 0x3fde58u: goto label_3fde58;
        case 0x3fde5cu: goto label_3fde5c;
        case 0x3fde60u: goto label_3fde60;
        case 0x3fde64u: goto label_3fde64;
        case 0x3fde68u: goto label_3fde68;
        case 0x3fde6cu: goto label_3fde6c;
        case 0x3fde70u: goto label_3fde70;
        case 0x3fde74u: goto label_3fde74;
        case 0x3fde78u: goto label_3fde78;
        case 0x3fde7cu: goto label_3fde7c;
        case 0x3fde80u: goto label_3fde80;
        case 0x3fde84u: goto label_3fde84;
        case 0x3fde88u: goto label_3fde88;
        case 0x3fde8cu: goto label_3fde8c;
        case 0x3fde90u: goto label_3fde90;
        case 0x3fde94u: goto label_3fde94;
        case 0x3fde98u: goto label_3fde98;
        case 0x3fde9cu: goto label_3fde9c;
        case 0x3fdea0u: goto label_3fdea0;
        case 0x3fdea4u: goto label_3fdea4;
        case 0x3fdea8u: goto label_3fdea8;
        case 0x3fdeacu: goto label_3fdeac;
        case 0x3fdeb0u: goto label_3fdeb0;
        case 0x3fdeb4u: goto label_3fdeb4;
        case 0x3fdeb8u: goto label_3fdeb8;
        case 0x3fdebcu: goto label_3fdebc;
        case 0x3fdec0u: goto label_3fdec0;
        case 0x3fdec4u: goto label_3fdec4;
        case 0x3fdec8u: goto label_3fdec8;
        case 0x3fdeccu: goto label_3fdecc;
        case 0x3fded0u: goto label_3fded0;
        case 0x3fded4u: goto label_3fded4;
        case 0x3fded8u: goto label_3fded8;
        case 0x3fdedcu: goto label_3fdedc;
        case 0x3fdee0u: goto label_3fdee0;
        case 0x3fdee4u: goto label_3fdee4;
        case 0x3fdee8u: goto label_3fdee8;
        case 0x3fdeecu: goto label_3fdeec;
        case 0x3fdef0u: goto label_3fdef0;
        case 0x3fdef4u: goto label_3fdef4;
        case 0x3fdef8u: goto label_3fdef8;
        case 0x3fdefcu: goto label_3fdefc;
        case 0x3fdf00u: goto label_3fdf00;
        case 0x3fdf04u: goto label_3fdf04;
        case 0x3fdf08u: goto label_3fdf08;
        case 0x3fdf0cu: goto label_3fdf0c;
        case 0x3fdf10u: goto label_3fdf10;
        case 0x3fdf14u: goto label_3fdf14;
        case 0x3fdf18u: goto label_3fdf18;
        case 0x3fdf1cu: goto label_3fdf1c;
        case 0x3fdf20u: goto label_3fdf20;
        case 0x3fdf24u: goto label_3fdf24;
        case 0x3fdf28u: goto label_3fdf28;
        case 0x3fdf2cu: goto label_3fdf2c;
        case 0x3fdf30u: goto label_3fdf30;
        case 0x3fdf34u: goto label_3fdf34;
        case 0x3fdf38u: goto label_3fdf38;
        case 0x3fdf3cu: goto label_3fdf3c;
        case 0x3fdf40u: goto label_3fdf40;
        case 0x3fdf44u: goto label_3fdf44;
        case 0x3fdf48u: goto label_3fdf48;
        case 0x3fdf4cu: goto label_3fdf4c;
        case 0x3fdf50u: goto label_3fdf50;
        case 0x3fdf54u: goto label_3fdf54;
        case 0x3fdf58u: goto label_3fdf58;
        case 0x3fdf5cu: goto label_3fdf5c;
        case 0x3fdf60u: goto label_3fdf60;
        case 0x3fdf64u: goto label_3fdf64;
        case 0x3fdf68u: goto label_3fdf68;
        case 0x3fdf6cu: goto label_3fdf6c;
        case 0x3fdf70u: goto label_3fdf70;
        case 0x3fdf74u: goto label_3fdf74;
        case 0x3fdf78u: goto label_3fdf78;
        case 0x3fdf7cu: goto label_3fdf7c;
        case 0x3fdf80u: goto label_3fdf80;
        case 0x3fdf84u: goto label_3fdf84;
        case 0x3fdf88u: goto label_3fdf88;
        case 0x3fdf8cu: goto label_3fdf8c;
        case 0x3fdf90u: goto label_3fdf90;
        case 0x3fdf94u: goto label_3fdf94;
        case 0x3fdf98u: goto label_3fdf98;
        case 0x3fdf9cu: goto label_3fdf9c;
        case 0x3fdfa0u: goto label_3fdfa0;
        case 0x3fdfa4u: goto label_3fdfa4;
        case 0x3fdfa8u: goto label_3fdfa8;
        case 0x3fdfacu: goto label_3fdfac;
        case 0x3fdfb0u: goto label_3fdfb0;
        case 0x3fdfb4u: goto label_3fdfb4;
        case 0x3fdfb8u: goto label_3fdfb8;
        case 0x3fdfbcu: goto label_3fdfbc;
        case 0x3fdfc0u: goto label_3fdfc0;
        case 0x3fdfc4u: goto label_3fdfc4;
        case 0x3fdfc8u: goto label_3fdfc8;
        case 0x3fdfccu: goto label_3fdfcc;
        case 0x3fdfd0u: goto label_3fdfd0;
        case 0x3fdfd4u: goto label_3fdfd4;
        case 0x3fdfd8u: goto label_3fdfd8;
        case 0x3fdfdcu: goto label_3fdfdc;
        case 0x3fdfe0u: goto label_3fdfe0;
        case 0x3fdfe4u: goto label_3fdfe4;
        case 0x3fdfe8u: goto label_3fdfe8;
        case 0x3fdfecu: goto label_3fdfec;
        case 0x3fdff0u: goto label_3fdff0;
        case 0x3fdff4u: goto label_3fdff4;
        case 0x3fdff8u: goto label_3fdff8;
        case 0x3fdffcu: goto label_3fdffc;
        case 0x3fe000u: goto label_3fe000;
        case 0x3fe004u: goto label_3fe004;
        case 0x3fe008u: goto label_3fe008;
        case 0x3fe00cu: goto label_3fe00c;
        case 0x3fe010u: goto label_3fe010;
        case 0x3fe014u: goto label_3fe014;
        case 0x3fe018u: goto label_3fe018;
        case 0x3fe01cu: goto label_3fe01c;
        case 0x3fe020u: goto label_3fe020;
        case 0x3fe024u: goto label_3fe024;
        case 0x3fe028u: goto label_3fe028;
        case 0x3fe02cu: goto label_3fe02c;
        case 0x3fe030u: goto label_3fe030;
        case 0x3fe034u: goto label_3fe034;
        case 0x3fe038u: goto label_3fe038;
        case 0x3fe03cu: goto label_3fe03c;
        case 0x3fe040u: goto label_3fe040;
        case 0x3fe044u: goto label_3fe044;
        case 0x3fe048u: goto label_3fe048;
        case 0x3fe04cu: goto label_3fe04c;
        case 0x3fe050u: goto label_3fe050;
        case 0x3fe054u: goto label_3fe054;
        case 0x3fe058u: goto label_3fe058;
        case 0x3fe05cu: goto label_3fe05c;
        case 0x3fe060u: goto label_3fe060;
        case 0x3fe064u: goto label_3fe064;
        case 0x3fe068u: goto label_3fe068;
        case 0x3fe06cu: goto label_3fe06c;
        case 0x3fe070u: goto label_3fe070;
        case 0x3fe074u: goto label_3fe074;
        case 0x3fe078u: goto label_3fe078;
        case 0x3fe07cu: goto label_3fe07c;
        case 0x3fe080u: goto label_3fe080;
        case 0x3fe084u: goto label_3fe084;
        case 0x3fe088u: goto label_3fe088;
        case 0x3fe08cu: goto label_3fe08c;
        case 0x3fe090u: goto label_3fe090;
        case 0x3fe094u: goto label_3fe094;
        case 0x3fe098u: goto label_3fe098;
        case 0x3fe09cu: goto label_3fe09c;
        case 0x3fe0a0u: goto label_3fe0a0;
        case 0x3fe0a4u: goto label_3fe0a4;
        case 0x3fe0a8u: goto label_3fe0a8;
        case 0x3fe0acu: goto label_3fe0ac;
        case 0x3fe0b0u: goto label_3fe0b0;
        case 0x3fe0b4u: goto label_3fe0b4;
        case 0x3fe0b8u: goto label_3fe0b8;
        case 0x3fe0bcu: goto label_3fe0bc;
        case 0x3fe0c0u: goto label_3fe0c0;
        case 0x3fe0c4u: goto label_3fe0c4;
        case 0x3fe0c8u: goto label_3fe0c8;
        case 0x3fe0ccu: goto label_3fe0cc;
        case 0x3fe0d0u: goto label_3fe0d0;
        case 0x3fe0d4u: goto label_3fe0d4;
        case 0x3fe0d8u: goto label_3fe0d8;
        case 0x3fe0dcu: goto label_3fe0dc;
        case 0x3fe0e0u: goto label_3fe0e0;
        case 0x3fe0e4u: goto label_3fe0e4;
        case 0x3fe0e8u: goto label_3fe0e8;
        case 0x3fe0ecu: goto label_3fe0ec;
        case 0x3fe0f0u: goto label_3fe0f0;
        case 0x3fe0f4u: goto label_3fe0f4;
        case 0x3fe0f8u: goto label_3fe0f8;
        case 0x3fe0fcu: goto label_3fe0fc;
        case 0x3fe100u: goto label_3fe100;
        case 0x3fe104u: goto label_3fe104;
        case 0x3fe108u: goto label_3fe108;
        case 0x3fe10cu: goto label_3fe10c;
        case 0x3fe110u: goto label_3fe110;
        case 0x3fe114u: goto label_3fe114;
        case 0x3fe118u: goto label_3fe118;
        case 0x3fe11cu: goto label_3fe11c;
        case 0x3fe120u: goto label_3fe120;
        case 0x3fe124u: goto label_3fe124;
        case 0x3fe128u: goto label_3fe128;
        case 0x3fe12cu: goto label_3fe12c;
        case 0x3fe130u: goto label_3fe130;
        case 0x3fe134u: goto label_3fe134;
        case 0x3fe138u: goto label_3fe138;
        case 0x3fe13cu: goto label_3fe13c;
        case 0x3fe140u: goto label_3fe140;
        case 0x3fe144u: goto label_3fe144;
        case 0x3fe148u: goto label_3fe148;
        case 0x3fe14cu: goto label_3fe14c;
        case 0x3fe150u: goto label_3fe150;
        case 0x3fe154u: goto label_3fe154;
        case 0x3fe158u: goto label_3fe158;
        case 0x3fe15cu: goto label_3fe15c;
        case 0x3fe160u: goto label_3fe160;
        case 0x3fe164u: goto label_3fe164;
        case 0x3fe168u: goto label_3fe168;
        case 0x3fe16cu: goto label_3fe16c;
        case 0x3fe170u: goto label_3fe170;
        case 0x3fe174u: goto label_3fe174;
        case 0x3fe178u: goto label_3fe178;
        case 0x3fe17cu: goto label_3fe17c;
        case 0x3fe180u: goto label_3fe180;
        case 0x3fe184u: goto label_3fe184;
        case 0x3fe188u: goto label_3fe188;
        case 0x3fe18cu: goto label_3fe18c;
        case 0x3fe190u: goto label_3fe190;
        case 0x3fe194u: goto label_3fe194;
        case 0x3fe198u: goto label_3fe198;
        case 0x3fe19cu: goto label_3fe19c;
        case 0x3fe1a0u: goto label_3fe1a0;
        case 0x3fe1a4u: goto label_3fe1a4;
        case 0x3fe1a8u: goto label_3fe1a8;
        case 0x3fe1acu: goto label_3fe1ac;
        case 0x3fe1b0u: goto label_3fe1b0;
        case 0x3fe1b4u: goto label_3fe1b4;
        case 0x3fe1b8u: goto label_3fe1b8;
        case 0x3fe1bcu: goto label_3fe1bc;
        case 0x3fe1c0u: goto label_3fe1c0;
        case 0x3fe1c4u: goto label_3fe1c4;
        case 0x3fe1c8u: goto label_3fe1c8;
        case 0x3fe1ccu: goto label_3fe1cc;
        case 0x3fe1d0u: goto label_3fe1d0;
        case 0x3fe1d4u: goto label_3fe1d4;
        case 0x3fe1d8u: goto label_3fe1d8;
        case 0x3fe1dcu: goto label_3fe1dc;
        case 0x3fe1e0u: goto label_3fe1e0;
        case 0x3fe1e4u: goto label_3fe1e4;
        case 0x3fe1e8u: goto label_3fe1e8;
        case 0x3fe1ecu: goto label_3fe1ec;
        case 0x3fe1f0u: goto label_3fe1f0;
        case 0x3fe1f4u: goto label_3fe1f4;
        case 0x3fe1f8u: goto label_3fe1f8;
        case 0x3fe1fcu: goto label_3fe1fc;
        case 0x3fe200u: goto label_3fe200;
        case 0x3fe204u: goto label_3fe204;
        case 0x3fe208u: goto label_3fe208;
        case 0x3fe20cu: goto label_3fe20c;
        case 0x3fe210u: goto label_3fe210;
        case 0x3fe214u: goto label_3fe214;
        case 0x3fe218u: goto label_3fe218;
        case 0x3fe21cu: goto label_3fe21c;
        case 0x3fe220u: goto label_3fe220;
        case 0x3fe224u: goto label_3fe224;
        case 0x3fe228u: goto label_3fe228;
        case 0x3fe22cu: goto label_3fe22c;
        case 0x3fe230u: goto label_3fe230;
        case 0x3fe234u: goto label_3fe234;
        case 0x3fe238u: goto label_3fe238;
        case 0x3fe23cu: goto label_3fe23c;
        case 0x3fe240u: goto label_3fe240;
        case 0x3fe244u: goto label_3fe244;
        case 0x3fe248u: goto label_3fe248;
        case 0x3fe24cu: goto label_3fe24c;
        case 0x3fe250u: goto label_3fe250;
        case 0x3fe254u: goto label_3fe254;
        case 0x3fe258u: goto label_3fe258;
        case 0x3fe25cu: goto label_3fe25c;
        case 0x3fe260u: goto label_3fe260;
        case 0x3fe264u: goto label_3fe264;
        case 0x3fe268u: goto label_3fe268;
        case 0x3fe26cu: goto label_3fe26c;
        case 0x3fe270u: goto label_3fe270;
        case 0x3fe274u: goto label_3fe274;
        case 0x3fe278u: goto label_3fe278;
        case 0x3fe27cu: goto label_3fe27c;
        case 0x3fe280u: goto label_3fe280;
        case 0x3fe284u: goto label_3fe284;
        case 0x3fe288u: goto label_3fe288;
        case 0x3fe28cu: goto label_3fe28c;
        case 0x3fe290u: goto label_3fe290;
        case 0x3fe294u: goto label_3fe294;
        case 0x3fe298u: goto label_3fe298;
        case 0x3fe29cu: goto label_3fe29c;
        case 0x3fe2a0u: goto label_3fe2a0;
        case 0x3fe2a4u: goto label_3fe2a4;
        case 0x3fe2a8u: goto label_3fe2a8;
        case 0x3fe2acu: goto label_3fe2ac;
        case 0x3fe2b0u: goto label_3fe2b0;
        case 0x3fe2b4u: goto label_3fe2b4;
        case 0x3fe2b8u: goto label_3fe2b8;
        case 0x3fe2bcu: goto label_3fe2bc;
        case 0x3fe2c0u: goto label_3fe2c0;
        case 0x3fe2c4u: goto label_3fe2c4;
        case 0x3fe2c8u: goto label_3fe2c8;
        case 0x3fe2ccu: goto label_3fe2cc;
        case 0x3fe2d0u: goto label_3fe2d0;
        case 0x3fe2d4u: goto label_3fe2d4;
        case 0x3fe2d8u: goto label_3fe2d8;
        case 0x3fe2dcu: goto label_3fe2dc;
        case 0x3fe2e0u: goto label_3fe2e0;
        case 0x3fe2e4u: goto label_3fe2e4;
        case 0x3fe2e8u: goto label_3fe2e8;
        case 0x3fe2ecu: goto label_3fe2ec;
        case 0x3fe2f0u: goto label_3fe2f0;
        case 0x3fe2f4u: goto label_3fe2f4;
        case 0x3fe2f8u: goto label_3fe2f8;
        case 0x3fe2fcu: goto label_3fe2fc;
        case 0x3fe300u: goto label_3fe300;
        case 0x3fe304u: goto label_3fe304;
        case 0x3fe308u: goto label_3fe308;
        case 0x3fe30cu: goto label_3fe30c;
        case 0x3fe310u: goto label_3fe310;
        case 0x3fe314u: goto label_3fe314;
        case 0x3fe318u: goto label_3fe318;
        case 0x3fe31cu: goto label_3fe31c;
        case 0x3fe320u: goto label_3fe320;
        case 0x3fe324u: goto label_3fe324;
        case 0x3fe328u: goto label_3fe328;
        case 0x3fe32cu: goto label_3fe32c;
        case 0x3fe330u: goto label_3fe330;
        case 0x3fe334u: goto label_3fe334;
        case 0x3fe338u: goto label_3fe338;
        case 0x3fe33cu: goto label_3fe33c;
        case 0x3fe340u: goto label_3fe340;
        case 0x3fe344u: goto label_3fe344;
        case 0x3fe348u: goto label_3fe348;
        case 0x3fe34cu: goto label_3fe34c;
        case 0x3fe350u: goto label_3fe350;
        case 0x3fe354u: goto label_3fe354;
        case 0x3fe358u: goto label_3fe358;
        case 0x3fe35cu: goto label_3fe35c;
        case 0x3fe360u: goto label_3fe360;
        case 0x3fe364u: goto label_3fe364;
        case 0x3fe368u: goto label_3fe368;
        case 0x3fe36cu: goto label_3fe36c;
        case 0x3fe370u: goto label_3fe370;
        case 0x3fe374u: goto label_3fe374;
        case 0x3fe378u: goto label_3fe378;
        case 0x3fe37cu: goto label_3fe37c;
        case 0x3fe380u: goto label_3fe380;
        case 0x3fe384u: goto label_3fe384;
        case 0x3fe388u: goto label_3fe388;
        case 0x3fe38cu: goto label_3fe38c;
        case 0x3fe390u: goto label_3fe390;
        case 0x3fe394u: goto label_3fe394;
        case 0x3fe398u: goto label_3fe398;
        case 0x3fe39cu: goto label_3fe39c;
        case 0x3fe3a0u: goto label_3fe3a0;
        case 0x3fe3a4u: goto label_3fe3a4;
        case 0x3fe3a8u: goto label_3fe3a8;
        case 0x3fe3acu: goto label_3fe3ac;
        case 0x3fe3b0u: goto label_3fe3b0;
        case 0x3fe3b4u: goto label_3fe3b4;
        case 0x3fe3b8u: goto label_3fe3b8;
        case 0x3fe3bcu: goto label_3fe3bc;
        case 0x3fe3c0u: goto label_3fe3c0;
        case 0x3fe3c4u: goto label_3fe3c4;
        case 0x3fe3c8u: goto label_3fe3c8;
        case 0x3fe3ccu: goto label_3fe3cc;
        case 0x3fe3d0u: goto label_3fe3d0;
        case 0x3fe3d4u: goto label_3fe3d4;
        case 0x3fe3d8u: goto label_3fe3d8;
        case 0x3fe3dcu: goto label_3fe3dc;
        case 0x3fe3e0u: goto label_3fe3e0;
        case 0x3fe3e4u: goto label_3fe3e4;
        case 0x3fe3e8u: goto label_3fe3e8;
        case 0x3fe3ecu: goto label_3fe3ec;
        case 0x3fe3f0u: goto label_3fe3f0;
        case 0x3fe3f4u: goto label_3fe3f4;
        case 0x3fe3f8u: goto label_3fe3f8;
        case 0x3fe3fcu: goto label_3fe3fc;
        case 0x3fe400u: goto label_3fe400;
        case 0x3fe404u: goto label_3fe404;
        case 0x3fe408u: goto label_3fe408;
        case 0x3fe40cu: goto label_3fe40c;
        case 0x3fe410u: goto label_3fe410;
        case 0x3fe414u: goto label_3fe414;
        case 0x3fe418u: goto label_3fe418;
        case 0x3fe41cu: goto label_3fe41c;
        case 0x3fe420u: goto label_3fe420;
        case 0x3fe424u: goto label_3fe424;
        case 0x3fe428u: goto label_3fe428;
        case 0x3fe42cu: goto label_3fe42c;
        case 0x3fe430u: goto label_3fe430;
        case 0x3fe434u: goto label_3fe434;
        case 0x3fe438u: goto label_3fe438;
        case 0x3fe43cu: goto label_3fe43c;
        case 0x3fe440u: goto label_3fe440;
        case 0x3fe444u: goto label_3fe444;
        case 0x3fe448u: goto label_3fe448;
        case 0x3fe44cu: goto label_3fe44c;
        case 0x3fe450u: goto label_3fe450;
        case 0x3fe454u: goto label_3fe454;
        case 0x3fe458u: goto label_3fe458;
        case 0x3fe45cu: goto label_3fe45c;
        case 0x3fe460u: goto label_3fe460;
        case 0x3fe464u: goto label_3fe464;
        case 0x3fe468u: goto label_3fe468;
        case 0x3fe46cu: goto label_3fe46c;
        case 0x3fe470u: goto label_3fe470;
        case 0x3fe474u: goto label_3fe474;
        case 0x3fe478u: goto label_3fe478;
        case 0x3fe47cu: goto label_3fe47c;
        case 0x3fe480u: goto label_3fe480;
        case 0x3fe484u: goto label_3fe484;
        case 0x3fe488u: goto label_3fe488;
        case 0x3fe48cu: goto label_3fe48c;
        default: break;
    }

    ctx->pc = 0x3fd600u;

label_3fd600:
    // 0x3fd600: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x3fd600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_3fd604:
    // 0x3fd604: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x3fd604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_3fd608:
    // 0x3fd608: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x3fd608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
label_3fd60c:
    // 0x3fd60c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fd60cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fd610:
    // 0x3fd610: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x3fd610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_3fd614:
    // 0x3fd614: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3fd614u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fd618:
    // 0x3fd618: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x3fd618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_3fd61c:
    // 0x3fd61c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fd61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fd620:
    // 0x3fd620: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x3fd620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_3fd624:
    // 0x3fd624: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3fd624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3fd628:
    // 0x3fd628: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x3fd628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_3fd62c:
    // 0x3fd62c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3fd62cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3fd630:
    // 0x3fd630: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x3fd630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_3fd634:
    // 0x3fd634: 0x26311740  addiu       $s1, $s1, 0x1740
    ctx->pc = 0x3fd634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
label_3fd638:
    // 0x3fd638: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x3fd638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
label_3fd63c:
    // 0x3fd63c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3fd63cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3fd640:
    // 0x3fd640: 0xe7be01d0  swc1        $f30, 0x1D0($sp)
    ctx->pc = 0x3fd640u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3fd644:
    // 0x3fd644: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3fd644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3fd648:
    // 0x3fd648: 0xe7b901a8  swc1        $f25, 0x1A8($sp)
    ctx->pc = 0x3fd648u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3fd64c:
    // 0x3fd64c: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x3fd64cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_3fd650:
    // 0x3fd650: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x3fd650u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3fd654:
    // 0x3fd654: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x3fd654u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3fd658:
    // 0x3fd658: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x3fd658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3fd65c:
    // 0x3fd65c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x3fd65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_3fd660:
    // 0x3fd660: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x3fd660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_3fd664:
    // 0x3fd664: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x3fd664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_3fd668:
    // 0x3fd668: 0xe7bd01c8  swc1        $f29, 0x1C8($sp)
    ctx->pc = 0x3fd668u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_3fd66c:
    // 0x3fd66c: 0xe7bc01c0  swc1        $f28, 0x1C0($sp)
    ctx->pc = 0x3fd66cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_3fd670:
    // 0x3fd670: 0xe7bb01b8  swc1        $f27, 0x1B8($sp)
    ctx->pc = 0x3fd670u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_3fd674:
    // 0x3fd674: 0xe7ba01b0  swc1        $f26, 0x1B0($sp)
    ctx->pc = 0x3fd674u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_3fd678:
    // 0x3fd678: 0xc0ea12a  jal         func_3A84A8
label_3fd67c:
    if (ctx->pc == 0x3FD67Cu) {
        ctx->pc = 0x3FD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD678u;
        // 0x3fd67c: 0xe7b801a0  swc1        $f24, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD680u;
        goto label_3fd680;
    }
    ctx->pc = 0x3FD678u;
    SET_GPR_U32(ctx, 31, 0x3FD680u);
    ctx->pc = 0x3FD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD678u;
    // 0x3fd67c: 0xe7b801a0  swc1        $f24, 0x1A0($sp) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FD678u, 0x3FD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD680u;
label_3fd680:
    // 0x3fd680: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3fd680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3fd684:
    // 0x3fd684: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fd684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fd688:
    // 0x3fd688: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3fd688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3fd68c:
    // 0x3fd68c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3fd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fd690:
    // 0x3fd690: 0xc0ea12a  jal         func_3A84A8
label_3fd694:
    if (ctx->pc == 0x3FD694u) {
        ctx->pc = 0x3FD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD690u;
        // 0x3fd694: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD698u;
        goto label_3fd698;
    }
    ctx->pc = 0x3FD690u;
    SET_GPR_U32(ctx, 31, 0x3FD698u);
    ctx->pc = 0x3FD694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD690u;
    // 0x3fd694: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FD690u, 0x3FD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD698u;
label_3fd698:
    // 0x3fd698: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3fd698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3fd69c:
    // 0x3fd69c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fd69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fd6a0:
    // 0x3fd6a0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fd6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fd6a4:
    // 0x3fd6a4: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x3fd6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fd6a8:
    // 0x3fd6a8: 0xc0ea146  jal         func_3A8518
label_3fd6ac:
    if (ctx->pc == 0x3FD6ACu) {
        ctx->pc = 0x3FD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6A8u;
        // 0x3fd6ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD6B0u;
        goto label_3fd6b0;
    }
    ctx->pc = 0x3FD6A8u;
    SET_GPR_U32(ctx, 31, 0x3FD6B0u);
    ctx->pc = 0x3FD6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6A8u;
    // 0x3fd6ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FD6A8u, 0x3FD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6B0u;
label_3fd6b0:
    // 0x3fd6b0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3fd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_3fd6b4:
    // 0x3fd6b4: 0xc0ea146  jal         func_3A8518
label_3fd6b8:
    if (ctx->pc == 0x3FD6B8u) {
        ctx->pc = 0x3FD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6B4u;
        // 0x3fd6b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD6BCu;
        goto label_3fd6bc;
    }
    ctx->pc = 0x3FD6B4u;
    SET_GPR_U32(ctx, 31, 0x3FD6BCu);
    ctx->pc = 0x3FD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6B4u;
    // 0x3fd6b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FD6B4u, 0x3FD6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6BCu;
label_3fd6bc:
    // 0x3fd6bc: 0x4600cf86  mov.s       $f30, $f25
    ctx->pc = 0x3fd6bcu;
    ctx->f[30] = FPU_MOV_S(ctx->f[25]);
label_3fd6c0:
    // 0x3fd6c0: 0xc0ea14c  jal         func_3A8530
label_3fd6c4:
    if (ctx->pc == 0x3FD6C4u) {
        ctx->pc = 0x3FD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6C0u;
        // 0x3fd6c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD6C8u;
        goto label_3fd6c8;
    }
    ctx->pc = 0x3FD6C0u;
    SET_GPR_U32(ctx, 31, 0x3FD6C8u);
    ctx->pc = 0x3FD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6C0u;
    // 0x3fd6c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FD6C0u, 0x3FD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6C8u;
label_3fd6c8:
    // 0x3fd6c8: 0xc0ea14c  jal         func_3A8530
label_3fd6cc:
    if (ctx->pc == 0x3FD6CCu) {
        ctx->pc = 0x3FD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6C8u;
        // 0x3fd6cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD6D0u;
        goto label_3fd6d0;
    }
    ctx->pc = 0x3FD6C8u;
    SET_GPR_U32(ctx, 31, 0x3FD6D0u);
    ctx->pc = 0x3FD6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6C8u;
    // 0x3fd6cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FD6C8u, 0x3FD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6D0u;
label_3fd6d0:
    // 0x3fd6d0: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3fd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3fd6d4:
    // 0x3fd6d4: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3fd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3fd6d8:
    // 0x3fd6d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3fd6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3fd6dc:
    // 0x3fd6dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fd6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fd6e0:
    // 0x3fd6e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fd6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3fd6e4:
    // 0x3fd6e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3fd6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fd6e8:
    // 0x3fd6e8: 0xc0e92f4  jal         func_3A4BD0
label_3fd6ec:
    if (ctx->pc == 0x3FD6ECu) {
        ctx->pc = 0x3FD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6E8u;
        // 0x3fd6ec: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD6F0u;
        goto label_3fd6f0;
    }
    ctx->pc = 0x3FD6E8u;
    SET_GPR_U32(ctx, 31, 0x3FD6F0u);
    ctx->pc = 0x3FD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6E8u;
    // 0x3fd6ec: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3FD6E8u, 0x3FD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6F0u;
label_3fd6f0:
    // 0x3fd6f0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3fd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3fd6f4:
    // 0x3fd6f4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3fd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3fd6f8:
    // 0x3fd6f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fd6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fd6fc:
    // 0x3fd6fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fd6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fd700:
    // 0x3fd700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fd700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd704:
    // 0x3fd704: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3fd704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fd708:
    // 0x3fd708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fd708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3fd70c:
    // 0x3fd70c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x3fd70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3fd710:
    // 0x3fd710: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x3fd710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
label_3fd714:
    // 0x3fd714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd718:
    // 0x3fd718: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3fd718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3fd71c:
    // 0x3fd71c: 0x84c500a0  lh          $a1, 0xA0($a2)
    ctx->pc = 0x3fd71cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
label_3fd720:
    // 0x3fd720: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x3fd720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_3fd724:
    // 0x3fd724: 0x40f809  jalr        $v0
label_3fd728:
    if (ctx->pc == 0x3FD728u) {
        ctx->pc = 0x3FD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD724u;
        // 0x3fd728: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD72Cu;
        goto label_3fd72c;
    }
    ctx->pc = 0x3FD724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD72Cu);
        ctx->pc = 0x3FD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD724u;
        // 0x3fd728: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD724u, 0x3FD72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD72Cu;
label_3fd72c:
    // 0x3fd72c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fd72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3fd730:
    // 0x3fd730: 0xc0e8e26  jal         func_3A3898
label_3fd734:
    if (ctx->pc == 0x3FD734u) {
        ctx->pc = 0x3FD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD730u;
        // 0x3fd734: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD738u;
        goto label_3fd738;
    }
    ctx->pc = 0x3FD730u;
    SET_GPR_U32(ctx, 31, 0x3FD738u);
    ctx->pc = 0x3FD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD730u;
    // 0x3fd734: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3FD730u, 0x3FD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD738u;
label_3fd738:
    // 0x3fd738: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fd738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fd73c:
    // 0x3fd73c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fd73cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fd740:
    // 0x3fd740: 0xc136b24  jal         func_4DAC90
label_3fd744:
    if (ctx->pc == 0x3FD744u) {
        ctx->pc = 0x3FD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD740u;
        // 0x3fd744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD748u;
        goto label_3fd748;
    }
    ctx->pc = 0x3FD740u;
    SET_GPR_U32(ctx, 31, 0x3FD748u);
    ctx->pc = 0x3FD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD740u;
    // 0x3fd744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FD740u, 0x3FD748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD748u;
label_3fd748:
    // 0x3fd748: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3fd748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fd74c:
    // 0x3fd74c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3fd74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3fd750:
    // 0x3fd750: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3fd750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fd754:
    // 0x3fd754: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x3fd754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_3fd758:
    // 0x3fd758: 0xc136b30  jal         func_4DACC0
label_3fd75c:
    if (ctx->pc == 0x3FD75Cu) {
        ctx->pc = 0x3FD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD758u;
        // 0x3fd75c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD760u;
        goto label_3fd760;
    }
    ctx->pc = 0x3FD758u;
    SET_GPR_U32(ctx, 31, 0x3FD760u);
    ctx->pc = 0x3FD75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD758u;
    // 0x3fd75c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3FD758u, 0x3FD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD760u;
label_3fd760:
    // 0x3fd760: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3fd760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fd764:
    // 0x3fd764: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3fd764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3fd768:
    // 0x3fd768: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3fd768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fd76c:
    // 0x3fd76c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fd76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd770:
    // 0x3fd770: 0xc136b18  jal         func_4DAC60
label_3fd774:
    if (ctx->pc == 0x3FD774u) {
        ctx->pc = 0x3FD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD770u;
        // 0x3fd774: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD778u;
        goto label_3fd778;
    }
    ctx->pc = 0x3FD770u;
    SET_GPR_U32(ctx, 31, 0x3FD778u);
    ctx->pc = 0x3FD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD770u;
    // 0x3fd774: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FD770u, 0x3FD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD778u;
label_3fd778:
    // 0x3fd778: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3fd778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fd77c:
    // 0x3fd77c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3fd77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3fd780:
    // 0x3fd780: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3fd780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fd784:
    // 0x3fd784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fd784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd788:
    // 0x3fd788: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3fd788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3fd78c:
    // 0x3fd78c: 0xc136b30  jal         func_4DACC0
label_3fd790:
    if (ctx->pc == 0x3FD790u) {
        ctx->pc = 0x3FD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD78Cu;
        // 0x3fd790: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD794u;
        goto label_3fd794;
    }
    ctx->pc = 0x3FD78Cu;
    SET_GPR_U32(ctx, 31, 0x3FD794u);
    ctx->pc = 0x3FD790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD78Cu;
    // 0x3fd790: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3FD78Cu, 0x3FD794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD794u;
label_3fd794:
    // 0x3fd794: 0x7ba60080  lq          $a2, 0x80($sp)
    ctx->pc = 0x3fd794u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fd798:
    // 0x3fd798: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3fd798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3fd79c:
    // 0x3fd79c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3fd79cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fd7a0:
    // 0x3fd7a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3fd7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fd7a4:
    // 0x3fd7a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3fd7a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fd7a8:
    // 0x3fd7a8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3fd7a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fd7ac:
    // 0x3fd7ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3fd7acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fd7b0:
    // 0x3fd7b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3fd7b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fd7b4:
    // 0x3fd7b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3fd7b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3fd7b8:
    // 0x3fd7b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3fd7b8u;
    // VWAITQ (Q already resolved in this runtime)
label_3fd7bc:
    // 0x3fd7bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3fd7bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3fd7c0:
    // 0x3fd7c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3fd7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3fd7c4:
    // 0x3fd7c4: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3fd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
label_3fd7c8:
    // 0x3fd7c8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fd7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fd7cc:
    // 0x3fd7cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3fd7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3fd7d0:
    // 0x3fd7d0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3fd7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3fd7d4:
    // 0x3fd7d4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3fd7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3fd7d8:
    // 0x3fd7d8: 0xc136afa  jal         func_4DABE8
label_3fd7dc:
    if (ctx->pc == 0x3FD7DCu) {
        ctx->pc = 0x3FD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD7D8u;
        // 0x3fd7dc: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD7E0u;
        goto label_3fd7e0;
    }
    ctx->pc = 0x3FD7D8u;
    SET_GPR_U32(ctx, 31, 0x3FD7E0u);
    ctx->pc = 0x3FD7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD7D8u;
    // 0x3fd7dc: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3FD7D8u, 0x3FD7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD7E0u;
label_3fd7e0:
    // 0x3fd7e0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3fd7e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fd7e4:
    // 0x3fd7e4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x3fd7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3fd7e8:
    // 0x3fd7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd7ec:
    // 0x3fd7ec: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd7f0:
    // 0x3fd7f0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3fd7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3fd7f4:
    // 0x3fd7f4: 0xc0cd518  jal         func_335460
label_3fd7f8:
    if (ctx->pc == 0x3FD7F8u) {
        ctx->pc = 0x3FD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD7F4u;
        // 0x3fd7f8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD7FCu;
        goto label_3fd7fc;
    }
    ctx->pc = 0x3FD7F4u;
    SET_GPR_U32(ctx, 31, 0x3FD7FCu);
    ctx->pc = 0x3FD7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD7F4u;
    // 0x3fd7f8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD7F4u, 0x3FD7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD7FCu;
label_3fd7fc:
    // 0x3fd7fc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3fd7fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd800:
    // 0x3fd800: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3fd800u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3fd804:
    // 0x3fd804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd808:
    // 0x3fd808: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd80c:
    // 0x3fd80c: 0xc0cd518  jal         func_335460
label_3fd810:
    if (ctx->pc == 0x3FD810u) {
        ctx->pc = 0x3FD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD80Cu;
        // 0x3fd810: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD814u;
        goto label_3fd814;
    }
    ctx->pc = 0x3FD80Cu;
    SET_GPR_U32(ctx, 31, 0x3FD814u);
    ctx->pc = 0x3FD810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD80Cu;
    // 0x3fd810: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD80Cu, 0x3FD814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD814u;
label_3fd814:
    // 0x3fd814: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fd814u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fd818:
    // 0x3fd818: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd81c:
    // 0x3fd81c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3fd81cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3fd820:
    // 0x3fd820: 0xc0cd518  jal         func_335460
label_3fd824:
    if (ctx->pc == 0x3FD824u) {
        ctx->pc = 0x3FD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD820u;
        // 0x3fd824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD828u;
        goto label_3fd828;
    }
    ctx->pc = 0x3FD820u;
    SET_GPR_U32(ctx, 31, 0x3FD828u);
    ctx->pc = 0x3FD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD820u;
    // 0x3fd824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD820u, 0x3FD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD828u;
label_3fd828:
    // 0x3fd828: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3fd828u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3fd82c:
    // 0x3fd82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fd82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd830:
    // 0x3fd830: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fd830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fd834:
    // 0x3fd834: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fd834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3fd838:
    // 0x3fd838: 0xc0cd55c  jal         func_335570
label_3fd83c:
    if (ctx->pc == 0x3FD83Cu) {
        ctx->pc = 0x3FD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD838u;
        // 0x3fd83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD840u;
        goto label_3fd840;
    }
    ctx->pc = 0x3FD838u;
    SET_GPR_U32(ctx, 31, 0x3FD840u);
    ctx->pc = 0x3FD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD838u;
    // 0x3fd83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FD838u, 0x3FD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD840u;
label_3fd840:
    // 0x3fd840: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x3fd840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_3fd844:
    // 0x3fd844: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fd844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fd848:
    // 0x3fd848: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3fd848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3fd84c:
    // 0x3fd84c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fd84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fd850:
    // 0x3fd850: 0xc0cd518  jal         func_335460
label_3fd854:
    if (ctx->pc == 0x3FD854u) {
        ctx->pc = 0x3FD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD850u;
        // 0x3fd854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD858u;
        goto label_3fd858;
    }
    ctx->pc = 0x3FD850u;
    SET_GPR_U32(ctx, 31, 0x3FD858u);
    ctx->pc = 0x3FD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD850u;
    // 0x3fd854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD850u, 0x3FD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD858u;
label_3fd858:
    // 0x3fd858: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fd858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fd85c:
    // 0x3fd85c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3fd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fd860:
    // 0x3fd860: 0xc136b24  jal         func_4DAC90
label_3fd864:
    if (ctx->pc == 0x3FD864u) {
        ctx->pc = 0x3FD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD860u;
        // 0x3fd864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD868u;
        goto label_3fd868;
    }
    ctx->pc = 0x3FD860u;
    SET_GPR_U32(ctx, 31, 0x3FD868u);
    ctx->pc = 0x3FD864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD860u;
    // 0x3fd864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FD860u, 0x3FD868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD868u;
label_3fd868:
    // 0x3fd868: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fd868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fd86c:
    // 0x3fd86c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3fd86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3fd870:
    // 0x3fd870: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3fd870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3fd874:
    // 0x3fd874: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fd874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fd878:
    // 0x3fd878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd87c:
    // 0x3fd87c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3fd87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3fd880:
    // 0x3fd880: 0xc0f15f6  jal         func_3C57D8
label_3fd884:
    if (ctx->pc == 0x3FD884u) {
        ctx->pc = 0x3FD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD880u;
        // 0x3fd884: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD888u;
        goto label_3fd888;
    }
    ctx->pc = 0x3FD880u;
    SET_GPR_U32(ctx, 31, 0x3FD888u);
    ctx->pc = 0x3FD884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD880u;
    // 0x3fd884: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FD880u, 0x3FD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD888u;
label_3fd888:
    // 0x3fd888: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3fd888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3fd88c:
    // 0x3fd88c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fd88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fd890:
    // 0x3fd890: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3fd890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3fd894:
    // 0x3fd894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd898:
    // 0x3fd898: 0xc0f15f6  jal         func_3C57D8
label_3fd89c:
    if (ctx->pc == 0x3FD89Cu) {
        ctx->pc = 0x3FD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD898u;
        // 0x3fd89c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD8A0u;
        goto label_3fd8a0;
    }
    ctx->pc = 0x3FD898u;
    SET_GPR_U32(ctx, 31, 0x3FD8A0u);
    ctx->pc = 0x3FD89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD898u;
    // 0x3fd89c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FD898u, 0x3FD8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD8A0u;
label_3fd8a0:
    // 0x3fd8a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3fd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3fd8a4:
    // 0x3fd8a4: 0x8ea400c8  lw          $a0, 0xC8($s5)
    ctx->pc = 0x3fd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_3fd8a8:
    // 0x3fd8a8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3fd8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3fd8ac:
    // 0x3fd8ac: 0x3c03f9c9  lui         $v1, 0xF9C9
    ctx->pc = 0x3fd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63945 << 16));
label_3fd8b0:
    // 0x3fd8b0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3fd8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3fd8b4:
    // 0x3fd8b4: 0x8eb300c4  lw          $s3, 0xC4($s5)
    ctx->pc = 0x3fd8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_3fd8b8:
    // 0x3fd8b8: 0x346343b0  ori         $v1, $v1, 0x43B0
    ctx->pc = 0x3fd8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17328);
label_3fd8bc:
    // 0x3fd8bc: 0x12630008  beq         $s3, $v1, . + 4 + (0x8 << 2)
label_3fd8c0:
    if (ctx->pc == 0x3FD8C0u) {
        ctx->pc = 0x3FD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD8BCu;
        // 0x3fd8c0: 0xaea400cc  sw          $a0, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD8C4u;
        goto label_3fd8c4;
    }
    ctx->pc = 0x3FD8BCu;
    {
        const bool branch_taken_0x3fd8bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD8BCu;
        // 0x3fd8c0: 0xaea400cc  sw          $a0, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd8bc) {
            ctx->pc = 0x3FD8E0u;
            goto label_3fd8e0;
        }
    }
    ctx->pc = 0x3FD8C4u;
label_3fd8c4:
    // 0x3fd8c4: 0x3c029a28  lui         $v0, 0x9A28
    ctx->pc = 0x3fd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39464 << 16));
label_3fd8c8:
    // 0x3fd8c8: 0x34429744  ori         $v0, $v0, 0x9744
    ctx->pc = 0x3fd8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38724);
label_3fd8cc:
    // 0x3fd8cc: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_3fd8d0:
    if (ctx->pc == 0x3FD8D0u) {
        ctx->pc = 0x3FD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD8CCu;
        // 0x3fd8d0: 0x3c02126f  lui         $v0, 0x126F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4719 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD8D4u;
        goto label_3fd8d4;
    }
    ctx->pc = 0x3FD8CCu;
    {
        const bool branch_taken_0x3fd8cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD8CCu;
        // 0x3fd8d0: 0x3c02126f  lui         $v0, 0x126F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4719 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd8cc) {
            ctx->pc = 0x3FD8E0u;
            goto label_3fd8e0;
        }
    }
    ctx->pc = 0x3FD8D4u;
label_3fd8d4:
    // 0x3fd8d4: 0x34428c34  ori         $v0, $v0, 0x8C34
    ctx->pc = 0x3fd8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35892);
label_3fd8d8:
    // 0x3fd8d8: 0x1662006a  bne         $s3, $v0, . + 4 + (0x6A << 2)
label_3fd8dc:
    if (ctx->pc == 0x3FD8DCu) {
        ctx->pc = 0x3FD8E0u;
        goto label_3fd8e0;
    }
    ctx->pc = 0x3FD8D8u;
    {
        const bool branch_taken_0x3fd8d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fd8d8) {
            ctx->pc = 0x3FDA84u;
            goto label_3fda84;
        }
    }
    ctx->pc = 0x3FD8E0u;
label_3fd8e0:
    // 0x3fd8e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd8e4:
    // 0x3fd8e4: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x3fd8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_3fd8e8:
    // 0x3fd8e8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3fd8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3fd8ec:
    // 0x3fd8ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3fd8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3fd8f0:
    // 0x3fd8f0: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3fd8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3fd8f4:
    // 0x3fd8f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fd8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fd8f8:
    // 0x3fd8f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fd8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fd8fc:
    // 0x3fd8fc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3fd8fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd900:
    // 0x3fd900: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3fd900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3fd904:
    // 0x3fd904: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x3fd904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_3fd908:
    // 0x3fd908: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3fd908u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fd90c:
    // 0x3fd90c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3fd90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3fd910:
    // 0x3fd910: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3fd910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3fd914:
    // 0x3fd914: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x3fd914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fd918:
    // 0x3fd918: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3fd918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3fd91c:
    // 0x3fd91c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fd91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fd920:
    // 0x3fd920: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3fd920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3fd924:
    // 0x3fd924: 0x3652001b  ori         $s2, $s2, 0x1B
    ctx->pc = 0x3fd924u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)27);
label_3fd928:
    // 0x3fd928: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3fd928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3fd92c:
    // 0x3fd92c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fd92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fd930:
    // 0x3fd930: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3fd930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3fd934:
    // 0x3fd934: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fd934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fd938:
    // 0x3fd938: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fd938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fd93c:
    // 0x3fd93c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3fd93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3fd940:
    // 0x3fd940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd944:
    // 0x3fd944: 0x0  nop
    ctx->pc = 0x3fd944u;
    // NOP
label_3fd948:
    // 0x3fd948: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd948u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd94c:
    // 0x3fd94c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3fd94cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3fd950:
    // 0x3fd950: 0xc0cd518  jal         func_335460
label_3fd954:
    if (ctx->pc == 0x3FD954u) {
        ctx->pc = 0x3FD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD950u;
        // 0x3fd954: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD958u;
        goto label_3fd958;
    }
    ctx->pc = 0x3FD950u;
    SET_GPR_U32(ctx, 31, 0x3FD958u);
    ctx->pc = 0x3FD954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD950u;
    // 0x3fd954: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD950u, 0x3FD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD958u;
label_3fd958:
    // 0x3fd958: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3fd958u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3fd95c:
    // 0x3fd95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd960:
    // 0x3fd960: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd964:
    // 0x3fd964: 0xc0cd518  jal         func_335460
label_3fd968:
    if (ctx->pc == 0x3FD968u) {
        ctx->pc = 0x3FD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD964u;
        // 0x3fd968: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD96Cu;
        goto label_3fd96c;
    }
    ctx->pc = 0x3FD964u;
    SET_GPR_U32(ctx, 31, 0x3FD96Cu);
    ctx->pc = 0x3FD968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD964u;
    // 0x3fd968: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD964u, 0x3FD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD96Cu;
label_3fd96c:
    // 0x3fd96c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fd96cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fd970:
    // 0x3fd970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd974:
    // 0x3fd974: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x3fd974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
label_3fd978:
    // 0x3fd978: 0xc0cd518  jal         func_335460
label_3fd97c:
    if (ctx->pc == 0x3FD97Cu) {
        ctx->pc = 0x3FD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD978u;
        // 0x3fd97c: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD980u;
        goto label_3fd980;
    }
    ctx->pc = 0x3FD978u;
    SET_GPR_U32(ctx, 31, 0x3FD980u);
    ctx->pc = 0x3FD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD978u;
    // 0x3fd97c: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD978u, 0x3FD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD980u;
label_3fd980:
    // 0x3fd980: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3fd980u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3fd984:
    // 0x3fd984: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fd984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fd988:
    // 0x3fd988: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fd988u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3fd98c:
    // 0x3fd98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fd98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd990:
    // 0x3fd990: 0xc0cd55c  jal         func_335570
label_3fd994:
    if (ctx->pc == 0x3FD994u) {
        ctx->pc = 0x3FD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD990u;
        // 0x3fd994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD998u;
        goto label_3fd998;
    }
    ctx->pc = 0x3FD990u;
    SET_GPR_U32(ctx, 31, 0x3FD998u);
    ctx->pc = 0x3FD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD990u;
    // 0x3fd994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FD990u, 0x3FD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD998u;
label_3fd998:
    // 0x3fd998: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3fd998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3fd99c:
    // 0x3fd99c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3fd99cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3fd9a0:
    // 0x3fd9a0: 0xc0cd518  jal         func_335460
label_3fd9a4:
    if (ctx->pc == 0x3FD9A4u) {
        ctx->pc = 0x3FD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9A0u;
        // 0x3fd9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD9A8u;
        goto label_3fd9a8;
    }
    ctx->pc = 0x3FD9A0u;
    SET_GPR_U32(ctx, 31, 0x3FD9A8u);
    ctx->pc = 0x3FD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9A0u;
    // 0x3fd9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD9A0u, 0x3FD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD9A8u;
label_3fd9a8:
    // 0x3fd9a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fd9a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fd9ac:
    // 0x3fd9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9b0:
    // 0x3fd9b0: 0xc0cd4ee  jal         func_3353B8
label_3fd9b4:
    if (ctx->pc == 0x3FD9B4u) {
        ctx->pc = 0x3FD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9B0u;
        // 0x3fd9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD9B8u;
        goto label_3fd9b8;
    }
    ctx->pc = 0x3FD9B0u;
    SET_GPR_U32(ctx, 31, 0x3FD9B8u);
    ctx->pc = 0x3FD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9B0u;
    // 0x3fd9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FD9B0u, 0x3FD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD9B8u;
label_3fd9b8:
    // 0x3fd9b8: 0x3c07c3a0  lui         $a3, 0xC3A0
    ctx->pc = 0x3fd9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50080 << 16));
label_3fd9bc:
    // 0x3fd9bc: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x3fd9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3fd9c0:
    // 0x3fd9c0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3fd9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3fd9c4:
    // 0x3fd9c4: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x3fd9c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_3fd9c8:
    // 0x3fd9c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fd9c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9cc:
    // 0x3fd9cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fd9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9d0:
    // 0x3fd9d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fd9d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3fd9d4:
    // 0x3fd9d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fd9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9d8:
    // 0x3fd9d8: 0xc0f1618  jal         func_3C5860
label_3fd9dc:
    if (ctx->pc == 0x3FD9DCu) {
        ctx->pc = 0x3FD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9D8u;
        // 0x3fd9dc: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD9E0u;
        goto label_3fd9e0;
    }
    ctx->pc = 0x3FD9D8u;
    SET_GPR_U32(ctx, 31, 0x3FD9E0u);
    ctx->pc = 0x3FD9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9D8u;
    // 0x3fd9dc: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3FD9D8u, 0x3FD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD9E0u;
label_3fd9e0:
    // 0x3fd9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9e4:
    // 0x3fd9e4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd9e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd9e8:
    // 0x3fd9e8: 0xc0cd518  jal         func_335460
label_3fd9ec:
    if (ctx->pc == 0x3FD9ECu) {
        ctx->pc = 0x3FD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9E8u;
        // 0x3fd9ec: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD9F0u;
        goto label_3fd9f0;
    }
    ctx->pc = 0x3FD9E8u;
    SET_GPR_U32(ctx, 31, 0x3FD9F0u);
    ctx->pc = 0x3FD9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9E8u;
    // 0x3fd9ec: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD9E8u, 0x3FD9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD9F0u;
label_3fd9f0:
    // 0x3fd9f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3fd9f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3fd9f4:
    // 0x3fd9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9f8:
    // 0x3fd9f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fd9f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fd9fc:
    // 0x3fd9fc: 0xc0cd518  jal         func_335460
label_3fda00:
    if (ctx->pc == 0x3FDA00u) {
        ctx->pc = 0x3FDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9FCu;
        // 0x3fda00: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA04u;
        goto label_3fda04;
    }
    ctx->pc = 0x3FD9FCu;
    SET_GPR_U32(ctx, 31, 0x3FDA04u);
    ctx->pc = 0x3FDA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9FCu;
    // 0x3fda00: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FD9FCu, 0x3FDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA04u;
label_3fda04:
    // 0x3fda04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fda04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fda08:
    // 0x3fda08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fda08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fda0c:
    // 0x3fda0c: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x3fda0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
label_3fda10:
    // 0x3fda10: 0xc0cd518  jal         func_335460
label_3fda14:
    if (ctx->pc == 0x3FDA14u) {
        ctx->pc = 0x3FDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA10u;
        // 0x3fda14: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA18u;
        goto label_3fda18;
    }
    ctx->pc = 0x3FDA10u;
    SET_GPR_U32(ctx, 31, 0x3FDA18u);
    ctx->pc = 0x3FDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA10u;
    // 0x3fda14: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDA10u, 0x3FDA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA18u;
label_3fda18:
    // 0x3fda18: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3fda18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3fda1c:
    // 0x3fda1c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fda1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3fda20:
    // 0x3fda20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fda20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fda24:
    // 0x3fda24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fda24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fda28:
    // 0x3fda28: 0xc0cd55c  jal         func_335570
label_3fda2c:
    if (ctx->pc == 0x3FDA2Cu) {
        ctx->pc = 0x3FDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA28u;
        // 0x3fda2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA30u;
        goto label_3fda30;
    }
    ctx->pc = 0x3FDA28u;
    SET_GPR_U32(ctx, 31, 0x3FDA30u);
    ctx->pc = 0x3FDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA28u;
    // 0x3fda2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FDA28u, 0x3FDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA30u;
label_3fda30:
    // 0x3fda30: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3fda30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3fda34:
    // 0x3fda34: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3fda34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3fda38:
    // 0x3fda38: 0xc0cd518  jal         func_335460
label_3fda3c:
    if (ctx->pc == 0x3FDA3Cu) {
        ctx->pc = 0x3FDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA38u;
        // 0x3fda3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA40u;
        goto label_3fda40;
    }
    ctx->pc = 0x3FDA38u;
    SET_GPR_U32(ctx, 31, 0x3FDA40u);
    ctx->pc = 0x3FDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA38u;
    // 0x3fda3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDA38u, 0x3FDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA40u;
label_3fda40:
    // 0x3fda40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fda40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fda44:
    // 0x3fda44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fda44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fda48:
    // 0x3fda48: 0xc0cd4ee  jal         func_3353B8
label_3fda4c:
    if (ctx->pc == 0x3FDA4Cu) {
        ctx->pc = 0x3FDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA48u;
        // 0x3fda4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA50u;
        goto label_3fda50;
    }
    ctx->pc = 0x3FDA48u;
    SET_GPR_U32(ctx, 31, 0x3FDA50u);
    ctx->pc = 0x3FDA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA48u;
    // 0x3fda4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FDA48u, 0x3FDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA50u;
label_3fda50:
    // 0x3fda50: 0x3c07715d  lui         $a3, 0x715D
    ctx->pc = 0x3fda50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)29021 << 16));
label_3fda54:
    // 0x3fda54: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x3fda54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3fda58:
    // 0x3fda58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fda58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3fda5c:
    // 0x3fda5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fda5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fda60:
    // 0x3fda60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fda60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fda64:
    // 0x3fda64: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x3fda64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_3fda68:
    // 0x3fda68: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3fda68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3fda6c:
    // 0x3fda6c: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3fda6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3fda70:
    // 0x3fda70: 0xc0f1618  jal         func_3C5860
label_3fda74:
    if (ctx->pc == 0x3FDA74u) {
        ctx->pc = 0x3FDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA70u;
        // 0x3fda74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA78u;
        goto label_3fda78;
    }
    ctx->pc = 0x3FDA70u;
    SET_GPR_U32(ctx, 31, 0x3FDA78u);
    ctx->pc = 0x3FDA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA70u;
    // 0x3fda74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3FDA70u, 0x3FDA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA78u;
label_3fda78:
    // 0x3fda78: 0x2ec20006  sltiu       $v0, $s6, 0x6
    ctx->pc = 0x3fda78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3fda7c:
    // 0x3fda7c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_3fda80:
    if (ctx->pc == 0x3FDA80u) {
        ctx->pc = 0x3FDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA7Cu;
        // 0x3fda80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA84u;
        goto label_3fda84;
    }
    ctx->pc = 0x3FDA7Cu;
    {
        const bool branch_taken_0x3fda7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA7Cu;
        // 0x3fda80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda7c) {
            ctx->pc = 0x3FD948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd948;
        }
    }
    ctx->pc = 0x3FDA84u;
label_3fda84:
    // 0x3fda84: 0x3c028246  lui         $v0, 0x8246
    ctx->pc = 0x3fda84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33350 << 16));
label_3fda88:
    // 0x3fda88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3fda88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fda8c:
    // 0x3fda8c: 0x3442960d  ori         $v0, $v0, 0x960D
    ctx->pc = 0x3fda8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38413);
label_3fda90:
    // 0x3fda90: 0x16620015  bne         $s3, $v0, . + 4 + (0x15 << 2)
label_3fda94:
    if (ctx->pc == 0x3FDA94u) {
        ctx->pc = 0x3FDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA90u;
        // 0x3fda94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDA98u;
        goto label_3fda98;
    }
    ctx->pc = 0x3FDA90u;
    {
        const bool branch_taken_0x3fda90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA90u;
        // 0x3fda94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda90) {
            ctx->pc = 0x3FDAE8u;
            goto label_3fdae8;
        }
    }
    ctx->pc = 0x3FDA98u;
label_3fda98:
    // 0x3fda98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fda98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fda9c:
    // 0x3fda9c: 0xc0e90ca  jal         func_3A4328
label_3fdaa0:
    if (ctx->pc == 0x3FDAA0u) {
        ctx->pc = 0x3FDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA9Cu;
        // 0x3fdaa0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDAA4u;
        goto label_3fdaa4;
    }
    ctx->pc = 0x3FDA9Cu;
    SET_GPR_U32(ctx, 31, 0x3FDAA4u);
    ctx->pc = 0x3FDAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA9Cu;
    // 0x3fdaa0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FDA9Cu, 0x3FDAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDAA4u;
label_3fdaa4:
    // 0x3fdaa4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3fdaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3fdaa8:
    // 0x3fdaa8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3fdaa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3fdaac:
    // 0x3fdaac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fdaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fdab0:
    // 0x3fdab0: 0x3c064d14  lui         $a2, 0x4D14
    ctx->pc = 0x3fdab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19732 << 16));
label_3fdab4:
    // 0x3fdab4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fdab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fdab8:
    // 0x3fdab8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fdab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fdabc:
    // 0x3fdabc: 0x34c61aff  ori         $a2, $a2, 0x1AFF
    ctx->pc = 0x3fdabcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6911);
label_3fdac0:
    // 0x3fdac0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fdac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fdac4:
    // 0x3fdac4: 0xc0f1658  jal         func_3C5960
label_3fdac8:
    if (ctx->pc == 0x3FDAC8u) {
        ctx->pc = 0x3FDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDAC4u;
        // 0x3fdac8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDACCu;
        goto label_3fdacc;
    }
    ctx->pc = 0x3FDAC4u;
    SET_GPR_U32(ctx, 31, 0x3FDACCu);
    ctx->pc = 0x3FDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDAC4u;
    // 0x3fdac8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3FDAC4u, 0x3FDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDACCu;
label_3fdacc:
    // 0x3fdacc: 0x3c064d14  lui         $a2, 0x4D14
    ctx->pc = 0x3fdaccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19732 << 16));
label_3fdad0:
    // 0x3fdad0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3fdad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fdad4:
    // 0x3fdad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fdad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fdad8:
    // 0x3fdad8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fdad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fdadc:
    // 0x3fdadc: 0x34c61aff  ori         $a2, $a2, 0x1AFF
    ctx->pc = 0x3fdadcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6911);
label_3fdae0:
    // 0x3fdae0: 0xc0f1658  jal         func_3C5960
label_3fdae4:
    if (ctx->pc == 0x3FDAE4u) {
        ctx->pc = 0x3FDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDAE0u;
        // 0x3fdae4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDAE8u;
        goto label_3fdae8;
    }
    ctx->pc = 0x3FDAE0u;
    SET_GPR_U32(ctx, 31, 0x3FDAE8u);
    ctx->pc = 0x3FDAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDAE0u;
    // 0x3fdae4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3FDAE0u, 0x3FDAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDAE8u;
label_3fdae8:
    // 0x3fdae8: 0x3c021b09  lui         $v0, 0x1B09
    ctx->pc = 0x3fdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6921 << 16));
label_3fdaec:
    // 0x3fdaec: 0x3442cdd4  ori         $v0, $v0, 0xCDD4
    ctx->pc = 0x3fdaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52692);
label_3fdaf0:
    // 0x3fdaf0: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
label_3fdaf4:
    if (ctx->pc == 0x3FDAF4u) {
        ctx->pc = 0x3FDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDAF0u;
        // 0x3fdaf4: 0x3c0269d8  lui         $v0, 0x69D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDAF8u;
        goto label_3fdaf8;
    }
    ctx->pc = 0x3FDAF0u;
    {
        const bool branch_taken_0x3fdaf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDAF0u;
        // 0x3fdaf4: 0x3c0269d8  lui         $v0, 0x69D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdaf0) {
            ctx->pc = 0x3FDB1Cu;
            goto label_3fdb1c;
        }
    }
    ctx->pc = 0x3FDAF8u;
label_3fdaf8:
    // 0x3fdaf8: 0x3c12bea7  lui         $s2, 0xBEA7
    ctx->pc = 0x3fdaf8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48807 << 16));
label_3fdafc:
    // 0x3fdafc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdb00:
    // 0x3fdb00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdb04:
    // 0x3fdb04: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3fdb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3fdb08:
    // 0x3fdb08: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdb0c:
    // 0x3fdb0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdb0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdb10:
    // 0x3fdb10: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3fdb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fdb14:
    // 0x3fdb14: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdb14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdb18:
    // 0x3fdb18: 0x365280ff  ori         $s2, $s2, 0x80FF
    ctx->pc = 0x3fdb18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)33023);
label_3fdb1c:
    // 0x3fdb1c: 0x3442bd59  ori         $v0, $v0, 0xBD59
    ctx->pc = 0x3fdb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48473);
label_3fdb20:
    // 0x3fdb20: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
label_3fdb24:
    if (ctx->pc == 0x3FDB24u) {
        ctx->pc = 0x3FDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB20u;
        // 0x3fdb24: 0x3c12211e  lui         $s2, 0x211E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8478 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDB28u;
        goto label_3fdb28;
    }
    ctx->pc = 0x3FDB20u;
    {
        const bool branch_taken_0x3fdb20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fdb20) {
            ctx->pc = 0x3FDB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDB20u;
            // 0x3fdb24: 0x3c12211e  lui         $s2, 0x211E (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8478 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDB3Cu;
            goto label_3fdb3c;
        }
    }
    ctx->pc = 0x3FDB28u;
label_3fdb28:
    // 0x3fdb28: 0x3c02f0d1  lui         $v0, 0xF0D1
    ctx->pc = 0x3fdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61649 << 16));
label_3fdb2c:
    // 0x3fdb2c: 0x3442ece3  ori         $v0, $v0, 0xECE3
    ctx->pc = 0x3fdb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60643);
label_3fdb30:
    // 0x3fdb30: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_3fdb34:
    if (ctx->pc == 0x3FDB34u) {
        ctx->pc = 0x3FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB30u;
        // 0x3fdb34: 0x3c0278a8  lui         $v0, 0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30888 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDB38u;
        goto label_3fdb38;
    }
    ctx->pc = 0x3FDB30u;
    {
        const bool branch_taken_0x3fdb30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB30u;
        // 0x3fdb34: 0x3c0278a8  lui         $v0, 0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30888 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdb30) {
            ctx->pc = 0x3FDB60u;
            goto label_3fdb60;
        }
    }
    ctx->pc = 0x3FDB38u;
label_3fdb38:
    // 0x3fdb38: 0x3c12211e  lui         $s2, 0x211E
    ctx->pc = 0x3fdb38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8478 << 16));
label_3fdb3c:
    // 0x3fdb3c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdb40:
    // 0x3fdb40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdb40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdb44:
    // 0x3fdb44: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3fdb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3fdb48:
    // 0x3fdb48: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdb4c:
    // 0x3fdb4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdb4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdb50:
    // 0x3fdb50: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3fdb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fdb54:
    // 0x3fdb54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdb54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdb58:
    // 0x3fdb58: 0x36521eff  ori         $s2, $s2, 0x1EFF
    ctx->pc = 0x3fdb58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)7935);
label_3fdb5c:
    // 0x3fdb5c: 0x3c0278a8  lui         $v0, 0x78A8
    ctx->pc = 0x3fdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30888 << 16));
label_3fdb60:
    // 0x3fdb60: 0x34421d52  ori         $v0, $v0, 0x1D52
    ctx->pc = 0x3fdb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7506);
label_3fdb64:
    // 0x3fdb64: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
label_3fdb68:
    if (ctx->pc == 0x3FDB68u) {
        ctx->pc = 0x3FDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB64u;
        // 0x3fdb68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDB6Cu;
        goto label_3fdb6c;
    }
    ctx->pc = 0x3FDB64u;
    {
        const bool branch_taken_0x3fdb64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB64u;
        // 0x3fdb68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdb64) {
            ctx->pc = 0x3FDBC0u;
            goto label_3fdbc0;
        }
    }
    ctx->pc = 0x3FDB6Cu;
label_3fdb6c:
    // 0x3fdb6c: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3fdb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3fdb70:
    // 0x3fdb70: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3fdb70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3fdb74:
    // 0x3fdb74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fdb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fdb78:
    // 0x3fdb78: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3fdb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3fdb7c:
    // 0x3fdb7c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fdb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fdb80:
    // 0x3fdb80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdb80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdb84:
    // 0x3fdb84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdb88:
    // 0x3fdb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fdb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fdb8c:
    // 0x3fdb8c: 0xc0cd518  jal         func_335460
label_3fdb90:
    if (ctx->pc == 0x3FDB90u) {
        ctx->pc = 0x3FDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB8Cu;
        // 0x3fdb90: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDB94u;
        goto label_3fdb94;
    }
    ctx->pc = 0x3FDB8Cu;
    SET_GPR_U32(ctx, 31, 0x3FDB94u);
    ctx->pc = 0x3FDB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDB8Cu;
    // 0x3fdb90: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDB8Cu, 0x3FDB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDB94u;
label_3fdb94:
    // 0x3fdb94: 0x3c12bea7  lui         $s2, 0xBEA7
    ctx->pc = 0x3fdb94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48807 << 16));
label_3fdb98:
    // 0x3fdb98: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdb9c:
    // 0x3fdb9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdba0:
    // 0x3fdba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdba4:
    // 0x3fdba4: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x3fdba4u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_3fdba8:
    // 0x3fdba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fdba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fdbac:
    // 0x3fdbac: 0xc0cd518  jal         func_335460
label_3fdbb0:
    if (ctx->pc == 0x3FDBB0u) {
        ctx->pc = 0x3FDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBACu;
        // 0x3fdbb0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDBB4u;
        goto label_3fdbb4;
    }
    ctx->pc = 0x3FDBACu;
    SET_GPR_U32(ctx, 31, 0x3FDBB4u);
    ctx->pc = 0x3FDBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDBACu;
    // 0x3fdbb0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDBACu, 0x3FDBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDBB4u;
label_3fdbb4:
    // 0x3fdbb4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdbb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdbb8:
    // 0x3fdbb8: 0x365280ff  ori         $s2, $s2, 0x80FF
    ctx->pc = 0x3fdbb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)33023);
label_3fdbbc:
    // 0x3fdbbc: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3fdbbcu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_3fdbc0:
    // 0x3fdbc0: 0x3c02df86  lui         $v0, 0xDF86
    ctx->pc = 0x3fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57222 << 16));
label_3fdbc4:
    // 0x3fdbc4: 0x34429cc5  ori         $v0, $v0, 0x9CC5
    ctx->pc = 0x3fdbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40133);
label_3fdbc8:
    // 0x3fdbc8: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_3fdbcc:
    if (ctx->pc == 0x3FDBCCu) {
        ctx->pc = 0x3FDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBC8u;
        // 0x3fdbcc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDBD0u;
        goto label_3fdbd0;
    }
    ctx->pc = 0x3FDBC8u;
    {
        const bool branch_taken_0x3fdbc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBC8u;
        // 0x3fdbcc: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdbc8) {
            ctx->pc = 0x3FDC00u;
            goto label_3fdc00;
        }
    }
    ctx->pc = 0x3FDBD0u;
label_3fdbd0:
    // 0x3fdbd0: 0x3c0292a4  lui         $v0, 0x92A4
    ctx->pc = 0x3fdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37540 << 16));
label_3fdbd4:
    // 0x3fdbd4: 0x3442471e  ori         $v0, $v0, 0x471E
    ctx->pc = 0x3fdbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18206);
label_3fdbd8:
    // 0x3fdbd8: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_3fdbdc:
    if (ctx->pc == 0x3FDBDCu) {
        ctx->pc = 0x3FDBE0u;
        goto label_3fdbe0;
    }
    ctx->pc = 0x3FDBD8u;
    {
        const bool branch_taken_0x3fdbd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fdbd8) {
            ctx->pc = 0x3FDC00u;
            goto label_3fdc00;
        }
    }
    ctx->pc = 0x3FDBE0u;
label_3fdbe0:
    // 0x3fdbe0: 0x3c029fdf  lui         $v0, 0x9FDF
    ctx->pc = 0x3fdbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40927 << 16));
label_3fdbe4:
    // 0x3fdbe4: 0x34420a12  ori         $v0, $v0, 0xA12
    ctx->pc = 0x3fdbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2578);
label_3fdbe8:
    // 0x3fdbe8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_3fdbec:
    if (ctx->pc == 0x3FDBECu) {
        ctx->pc = 0x3FDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBE8u;
        // 0x3fdbec: 0x3c023a51  lui         $v0, 0x3A51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14929 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDBF0u;
        goto label_3fdbf0;
    }
    ctx->pc = 0x3FDBE8u;
    {
        const bool branch_taken_0x3fdbe8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBE8u;
        // 0x3fdbec: 0x3c023a51  lui         $v0, 0x3A51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14929 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdbe8) {
            ctx->pc = 0x3FDC00u;
            goto label_3fdc00;
        }
    }
    ctx->pc = 0x3FDBF0u;
label_3fdbf0:
    // 0x3fdbf0: 0x34425456  ori         $v0, $v0, 0x5456
    ctx->pc = 0x3fdbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21590);
label_3fdbf4:
    // 0x3fdbf4: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
label_3fdbf8:
    if (ctx->pc == 0x3FDBF8u) {
        ctx->pc = 0x3FDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBF4u;
        // 0x3fdbf8: 0x3c026c9c  lui         $v0, 0x6C9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27804 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDBFCu;
        goto label_3fdbfc;
    }
    ctx->pc = 0x3FDBF4u;
    {
        const bool branch_taken_0x3fdbf4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDBF4u;
        // 0x3fdbf8: 0x3c026c9c  lui         $v0, 0x6C9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdbf4) {
            ctx->pc = 0x3FDC5Cu;
            goto label_3fdc5c;
        }
    }
    ctx->pc = 0x3FDBFCu;
label_3fdbfc:
    // 0x3fdbfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fdbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fdc00:
    // 0x3fdc00: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3fdc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3fdc04:
    // 0x3fdc04: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3fdc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3fdc08:
    // 0x3fdc08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdc0c:
    // 0x3fdc0c: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x3fdc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3fdc10:
    // 0x3fdc10: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3fdc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3fdc14:
    // 0x3fdc14: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3fdc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3fdc18:
    // 0x3fdc18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fdc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fdc1c:
    // 0x3fdc1c: 0x3c12847c  lui         $s2, 0x847C
    ctx->pc = 0x3fdc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33916 << 16));
label_3fdc20:
    // 0x3fdc20: 0xc0cd518  jal         func_335460
label_3fdc24:
    if (ctx->pc == 0x3FDC24u) {
        ctx->pc = 0x3FDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC20u;
        // 0x3fdc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDC28u;
        goto label_3fdc28;
    }
    ctx->pc = 0x3FDC20u;
    SET_GPR_U32(ctx, 31, 0x3FDC28u);
    ctx->pc = 0x3FDC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDC20u;
    // 0x3fdc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDC20u, 0x3FDC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDC28u;
label_3fdc28:
    // 0x3fdc28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdc28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdc2c:
    // 0x3fdc2c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fdc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fdc30:
    // 0x3fdc30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdc30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdc34:
    // 0x3fdc34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdc38:
    // 0x3fdc38: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x3fdc38u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_3fdc3c:
    // 0x3fdc3c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdc40:
    // 0x3fdc40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdc44:
    // 0x3fdc44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fdc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fdc48:
    // 0x3fdc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fdc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fdc4c:
    // 0x3fdc4c: 0xc0cd518  jal         func_335460
label_3fdc50:
    if (ctx->pc == 0x3FDC50u) {
        ctx->pc = 0x3FDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC4Cu;
        // 0x3fdc50: 0x365278ff  ori         $s2, $s2, 0x78FF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30975);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDC54u;
        goto label_3fdc54;
    }
    ctx->pc = 0x3FDC4Cu;
    SET_GPR_U32(ctx, 31, 0x3FDC54u);
    ctx->pc = 0x3FDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDC4Cu;
    // 0x3fdc50: 0x365278ff  ori         $s2, $s2, 0x78FF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30975);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDC4Cu, 0x3FDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDC54u;
label_3fdc54:
    // 0x3fdc54: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3fdc54u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_3fdc58:
    // 0x3fdc58: 0x3c026c9c  lui         $v0, 0x6C9C
    ctx->pc = 0x3fdc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27804 << 16));
label_3fdc5c:
    // 0x3fdc5c: 0x34423da4  ori         $v0, $v0, 0x3DA4
    ctx->pc = 0x3fdc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15780);
label_3fdc60:
    // 0x3fdc60: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_3fdc64:
    if (ctx->pc == 0x3FDC64u) {
        ctx->pc = 0x3FDC68u;
        goto label_3fdc68;
    }
    ctx->pc = 0x3FDC60u;
    {
        const bool branch_taken_0x3fdc60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fdc60) {
            ctx->pc = 0x3FDC78u;
            goto label_3fdc78;
        }
    }
    ctx->pc = 0x3FDC68u;
label_3fdc68:
    // 0x3fdc68: 0x3c02bd5e  lui         $v0, 0xBD5E
    ctx->pc = 0x3fdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48478 << 16));
label_3fdc6c:
    // 0x3fdc6c: 0x344286ed  ori         $v0, $v0, 0x86ED
    ctx->pc = 0x3fdc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34541);
label_3fdc70:
    // 0x3fdc70: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_3fdc74:
    if (ctx->pc == 0x3FDC74u) {
        ctx->pc = 0x3FDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC70u;
        // 0x3fdc74: 0x3c0270e3  lui         $v0, 0x70E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28899 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDC78u;
        goto label_3fdc78;
    }
    ctx->pc = 0x3FDC70u;
    {
        const bool branch_taken_0x3fdc70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDC70u;
        // 0x3fdc74: 0x3c0270e3  lui         $v0, 0x70E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28899 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdc70) {
            ctx->pc = 0x3FDC98u;
            goto label_3fdc98;
        }
    }
    ctx->pc = 0x3FDC78u;
label_3fdc78:
    // 0x3fdc78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdc7c:
    // 0x3fdc7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdc80:
    // 0x3fdc80: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3fdc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fdc84:
    // 0x3fdc84: 0x3c12847c  lui         $s2, 0x847C
    ctx->pc = 0x3fdc84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33916 << 16));
label_3fdc88:
    // 0x3fdc88: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdc88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdc8c:
    // 0x3fdc8c: 0x365278ff  ori         $s2, $s2, 0x78FF
    ctx->pc = 0x3fdc8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30975);
label_3fdc90:
    // 0x3fdc90: 0x4600cf86  mov.s       $f30, $f25
    ctx->pc = 0x3fdc90u;
    ctx->f[30] = FPU_MOV_S(ctx->f[25]);
label_3fdc94:
    // 0x3fdc94: 0x3c0270e3  lui         $v0, 0x70E3
    ctx->pc = 0x3fdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28899 << 16));
label_3fdc98:
    // 0x3fdc98: 0x3442305e  ori         $v0, $v0, 0x305E
    ctx->pc = 0x3fdc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12382);
label_3fdc9c:
    // 0x3fdc9c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_3fdca0:
    if (ctx->pc == 0x3FDCA0u) {
        ctx->pc = 0x3FDCA4u;
        goto label_3fdca4;
    }
    ctx->pc = 0x3FDC9Cu;
    {
        const bool branch_taken_0x3fdc9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fdc9c) {
            ctx->pc = 0x3FDCC0u;
            goto label_3fdcc0;
        }
    }
    ctx->pc = 0x3FDCA4u;
label_3fdca4:
    // 0x3fdca4: 0x3c028aeb  lui         $v0, 0x8AEB
    ctx->pc = 0x3fdca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35563 << 16));
label_3fdca8:
    // 0x3fdca8: 0x344260f9  ori         $v0, $v0, 0x60F9
    ctx->pc = 0x3fdca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24825);
label_3fdcac:
    // 0x3fdcac: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_3fdcb0:
    if (ctx->pc == 0x3FDCB0u) {
        ctx->pc = 0x3FDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCACu;
        // 0x3fdcb0: 0x3c0274d3  lui         $v0, 0x74D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29907 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDCB4u;
        goto label_3fdcb4;
    }
    ctx->pc = 0x3FDCACu;
    {
        const bool branch_taken_0x3fdcac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCACu;
        // 0x3fdcb0: 0x3c0274d3  lui         $v0, 0x74D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29907 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdcac) {
            ctx->pc = 0x3FDCC0u;
            goto label_3fdcc0;
        }
    }
    ctx->pc = 0x3FDCB4u;
label_3fdcb4:
    // 0x3fdcb4: 0x34421a43  ori         $v0, $v0, 0x1A43
    ctx->pc = 0x3fdcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6723);
label_3fdcb8:
    // 0x3fdcb8: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_3fdcbc:
    if (ctx->pc == 0x3FDCBCu) {
        ctx->pc = 0x3FDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCB8u;
        // 0x3fdcbc: 0x3c0266ee  lui         $v0, 0x66EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26350 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDCC0u;
        goto label_3fdcc0;
    }
    ctx->pc = 0x3FDCB8u;
    {
        const bool branch_taken_0x3fdcb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCB8u;
        // 0x3fdcbc: 0x3c0266ee  lui         $v0, 0x66EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26350 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdcb8) {
            ctx->pc = 0x3FDCE0u;
            goto label_3fdce0;
        }
    }
    ctx->pc = 0x3FDCC0u;
label_3fdcc0:
    // 0x3fdcc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdcc4:
    // 0x3fdcc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdcc8:
    // 0x3fdcc8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3fdcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fdccc:
    // 0x3fdccc: 0x3c125844  lui         $s2, 0x5844
    ctx->pc = 0x3fdcccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)22596 << 16));
label_3fdcd0:
    // 0x3fdcd0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdcd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdcd4:
    // 0x3fdcd4: 0x365238ff  ori         $s2, $s2, 0x38FF
    ctx->pc = 0x3fdcd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)14591);
label_3fdcd8:
    // 0x3fdcd8: 0x4600cf86  mov.s       $f30, $f25
    ctx->pc = 0x3fdcd8u;
    ctx->f[30] = FPU_MOV_S(ctx->f[25]);
label_3fdcdc:
    // 0x3fdcdc: 0x3c0266ee  lui         $v0, 0x66EE
    ctx->pc = 0x3fdcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26350 << 16));
label_3fdce0:
    // 0x3fdce0: 0x3442f8e4  ori         $v0, $v0, 0xF8E4
    ctx->pc = 0x3fdce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63716);
label_3fdce4:
    // 0x3fdce4: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_3fdce8:
    if (ctx->pc == 0x3FDCE8u) {
        ctx->pc = 0x3FDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCE4u;
        // 0x3fdce8: 0x3c0221e2  lui         $v0, 0x21E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8674 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDCECu;
        goto label_3fdcec;
    }
    ctx->pc = 0x3FDCE4u;
    {
        const bool branch_taken_0x3fdce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCE4u;
        // 0x3fdce8: 0x3c0221e2  lui         $v0, 0x21E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8674 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdce4) {
            ctx->pc = 0x3FDD08u;
            goto label_3fdd08;
        }
    }
    ctx->pc = 0x3FDCECu;
label_3fdcec:
    // 0x3fdcec: 0x34429dc8  ori         $v0, $v0, 0x9DC8
    ctx->pc = 0x3fdcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40392);
label_3fdcf0:
    // 0x3fdcf0: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
label_3fdcf4:
    if (ctx->pc == 0x3FDCF4u) {
        ctx->pc = 0x3FDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDCF0u;
        // 0x3fdcf4: 0x3c12482f  lui         $s2, 0x482F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDCF8u;
        goto label_3fdcf8;
    }
    ctx->pc = 0x3FDCF0u;
    {
        const bool branch_taken_0x3fdcf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fdcf0) {
            ctx->pc = 0x3FDCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDCF0u;
            // 0x3fdcf4: 0x3c12482f  lui         $s2, 0x482F (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18479 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDD0Cu;
            goto label_3fdd0c;
        }
    }
    ctx->pc = 0x3FDCF8u;
label_3fdcf8:
    // 0x3fdcf8: 0x3c029e07  lui         $v0, 0x9E07
    ctx->pc = 0x3fdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40455 << 16));
label_3fdcfc:
    // 0x3fdcfc: 0x3442bf18  ori         $v0, $v0, 0xBF18
    ctx->pc = 0x3fdcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48920);
label_3fdd00:
    // 0x3fdd00: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
label_3fdd04:
    if (ctx->pc == 0x3FDD04u) {
        ctx->pc = 0x3FDD08u;
        goto label_3fdd08;
    }
    ctx->pc = 0x3FDD00u;
    {
        const bool branch_taken_0x3fdd00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fdd00) {
            ctx->pc = 0x3FDD2Cu;
            goto label_3fdd2c;
        }
    }
    ctx->pc = 0x3FDD08u;
label_3fdd08:
    // 0x3fdd08: 0x3c12482f  lui         $s2, 0x482F
    ctx->pc = 0x3fdd08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18479 << 16));
label_3fdd0c:
    // 0x3fdd0c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdd10:
    // 0x3fdd10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdd14:
    // 0x3fdd14: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3fdd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3fdd18:
    // 0x3fdd18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdd1c:
    // 0x3fdd1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdd1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdd20:
    // 0x3fdd20: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3fdd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fdd24:
    // 0x3fdd24: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdd24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdd28:
    // 0x3fdd28: 0x365223ff  ori         $s2, $s2, 0x23FF
    ctx->pc = 0x3fdd28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)9215);
label_3fdd2c:
    // 0x3fdd2c: 0x3c02c328  lui         $v0, 0xC328
    ctx->pc = 0x3fdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49960 << 16));
label_3fdd30:
    // 0x3fdd30: 0x3442e9c6  ori         $v0, $v0, 0xE9C6
    ctx->pc = 0x3fdd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59846);
label_3fdd34:
    // 0x3fdd34: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
label_3fdd38:
    if (ctx->pc == 0x3FDD38u) {
        ctx->pc = 0x3FDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD34u;
        // 0x3fdd38: 0x3c022385  lui         $v0, 0x2385 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9093 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDD3Cu;
        goto label_3fdd3c;
    }
    ctx->pc = 0x3FDD34u;
    {
        const bool branch_taken_0x3fdd34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD34u;
        // 0x3fdd38: 0x3c022385  lui         $v0, 0x2385 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9093 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdd34) {
            ctx->pc = 0x3FDD94u;
            goto label_3fdd94;
        }
    }
    ctx->pc = 0x3FDD3Cu;
label_3fdd3c:
    // 0x3fdd3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fdd40:
    // 0x3fdd40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdd44:
    // 0x3fdd44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdd48:
    // 0x3fdd48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fdd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fdd4c:
    // 0x3fdd4c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fdd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fdd50:
    // 0x3fdd50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdd54:
    // 0x3fdd54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3fdd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3fdd58:
    // 0x3fdd58: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3fdd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3fdd5c:
    // 0x3fdd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fdd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fdd60:
    // 0x3fdd60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fdd60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fdd64:
    // 0x3fdd64: 0x3c12f786  lui         $s2, 0xF786
    ctx->pc = 0x3fdd64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63366 << 16));
label_3fdd68:
    // 0x3fdd68: 0xc0cd518  jal         func_335460
label_3fdd6c:
    if (ctx->pc == 0x3FDD6Cu) {
        ctx->pc = 0x3FDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD68u;
        // 0x3fdd6c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDD70u;
        goto label_3fdd70;
    }
    ctx->pc = 0x3FDD68u;
    SET_GPR_U32(ctx, 31, 0x3FDD70u);
    ctx->pc = 0x3FDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDD68u;
    // 0x3fdd6c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDD68u, 0x3FDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDD70u;
label_3fdd70:
    // 0x3fdd70: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdd70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdd74:
    // 0x3fdd74: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x3fdd74u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_3fdd78:
    // 0x3fdd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fdd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fdd7c:
    // 0x3fdd7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fdd7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fdd80:
    // 0x3fdd80: 0xc0cd518  jal         func_335460
label_3fdd84:
    if (ctx->pc == 0x3FDD84u) {
        ctx->pc = 0x3FDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD80u;
        // 0x3fdd84: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDD88u;
        goto label_3fdd88;
    }
    ctx->pc = 0x3FDD80u;
    SET_GPR_U32(ctx, 31, 0x3FDD88u);
    ctx->pc = 0x3FDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDD80u;
    // 0x3fdd84: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDD80u, 0x3FDD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDD88u;
label_3fdd88:
    // 0x3fdd88: 0x365217ff  ori         $s2, $s2, 0x17FF
    ctx->pc = 0x3fdd88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)6143);
label_3fdd8c:
    // 0x3fdd8c: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3fdd8cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_3fdd90:
    // 0x3fdd90: 0x3c022385  lui         $v0, 0x2385
    ctx->pc = 0x3fdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9093 << 16));
label_3fdd94:
    // 0x3fdd94: 0x344235b4  ori         $v0, $v0, 0x35B4
    ctx->pc = 0x3fdd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13748);
label_3fdd98:
    // 0x3fdd98: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_3fdd9c:
    if (ctx->pc == 0x3FDD9Cu) {
        ctx->pc = 0x3FDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD98u;
        // 0x3fdd9c: 0x3c0253ef  lui         $v0, 0x53EF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21487 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDA0u;
        goto label_3fdda0;
    }
    ctx->pc = 0x3FDD98u;
    {
        const bool branch_taken_0x3fdd98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDD98u;
        // 0x3fdd9c: 0x3c0253ef  lui         $v0, 0x53EF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdd98) {
            ctx->pc = 0x3FDDACu;
            goto label_3fddac;
        }
    }
    ctx->pc = 0x3FDDA0u;
label_3fdda0:
    // 0x3fdda0: 0x3442c13b  ori         $v0, $v0, 0xC13B
    ctx->pc = 0x3fdda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49467);
label_3fdda4:
    // 0x3fdda4: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
label_3fdda8:
    if (ctx->pc == 0x3FDDA8u) {
        ctx->pc = 0x3FDDACu;
        goto label_3fddac;
    }
    ctx->pc = 0x3FDDA4u;
    {
        const bool branch_taken_0x3fdda4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fdda4) {
            ctx->pc = 0x3FDE04u;
            goto label_3fde04;
        }
    }
    ctx->pc = 0x3FDDACu;
label_3fddac:
    // 0x3fddac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3fddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3fddb0:
    // 0x3fddb0: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3fddb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3fddb4:
    // 0x3fddb4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3fddb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3fddb8:
    // 0x3fddb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fddb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fddbc:
    // 0x3fddbc: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x3fddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3fddc0:
    // 0x3fddc0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fddc4:
    // 0x3fddc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fddc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fddc8:
    // 0x3fddc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fddc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fddcc:
    // 0x3fddcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fddd0:
    // 0x3fddd0: 0xc0cd518  jal         func_335460
label_3fddd4:
    if (ctx->pc == 0x3FDDD4u) {
        ctx->pc = 0x3FDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDD0u;
        // 0x3fddd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDD8u;
        goto label_3fddd8;
    }
    ctx->pc = 0x3FDDD0u;
    SET_GPR_U32(ctx, 31, 0x3FDDD8u);
    ctx->pc = 0x3FDDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDDD0u;
    // 0x3fddd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDDD0u, 0x3FDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDDD8u;
label_3fddd8:
    // 0x3fddd8: 0x3c121010  lui         $s2, 0x1010
    ctx->pc = 0x3fddd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4112 << 16));
label_3fdddc:
    // 0x3fdddc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdde0:
    // 0x3fdde0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdde0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdde4:
    // 0x3fdde4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdde8:
    // 0x3fdde8: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x3fdde8u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_3fddec:
    // 0x3fddec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fddecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fddf0:
    // 0x3fddf0: 0xc0cd518  jal         func_335460
label_3fddf4:
    if (ctx->pc == 0x3FDDF4u) {
        ctx->pc = 0x3FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDDF0u;
        // 0x3fddf4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDDF8u;
        goto label_3fddf8;
    }
    ctx->pc = 0x3FDDF0u;
    SET_GPR_U32(ctx, 31, 0x3FDDF8u);
    ctx->pc = 0x3FDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDDF0u;
    // 0x3fddf4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDDF0u, 0x3FDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDDF8u;
label_3fddf8:
    // 0x3fddf8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fddf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fddfc:
    // 0x3fddfc: 0x365210ff  ori         $s2, $s2, 0x10FF
    ctx->pc = 0x3fddfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4351);
label_3fde00:
    // 0x3fde00: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3fde00u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_3fde04:
    // 0x3fde04: 0x3c02ba8c  lui         $v0, 0xBA8C
    ctx->pc = 0x3fde04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47756 << 16));
label_3fde08:
    // 0x3fde08: 0x3442640e  ori         $v0, $v0, 0x640E
    ctx->pc = 0x3fde08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25614);
label_3fde0c:
    // 0x3fde0c: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
label_3fde10:
    if (ctx->pc == 0x3FDE10u) {
        ctx->pc = 0x3FDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE0Cu;
        // 0x3fde10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE14u;
        goto label_3fde14;
    }
    ctx->pc = 0x3FDE0Cu;
    {
        const bool branch_taken_0x3fde0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE0Cu;
        // 0x3fde10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fde0c) {
            ctx->pc = 0x3FDE68u;
            goto label_3fde68;
        }
    }
    ctx->pc = 0x3FDE14u;
label_3fde14:
    // 0x3fde14: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3fde14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3fde18:
    // 0x3fde18: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3fde18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3fde1c:
    // 0x3fde1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fde1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fde20:
    // 0x3fde20: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3fde20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3fde24:
    // 0x3fde24: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fde24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fde28:
    // 0x3fde28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fde28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fde2c:
    // 0x3fde2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fde2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fde30:
    // 0x3fde30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fde30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fde34:
    // 0x3fde34: 0xc0cd518  jal         func_335460
label_3fde38:
    if (ctx->pc == 0x3FDE38u) {
        ctx->pc = 0x3FDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE34u;
        // 0x3fde38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE3Cu;
        goto label_3fde3c;
    }
    ctx->pc = 0x3FDE34u;
    SET_GPR_U32(ctx, 31, 0x3FDE3Cu);
    ctx->pc = 0x3FDE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDE34u;
    // 0x3fde38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDE34u, 0x3FDE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDE3Cu;
label_3fde3c:
    // 0x3fde3c: 0x3c127e2b  lui         $s2, 0x7E2B
    ctx->pc = 0x3fde3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32299 << 16));
label_3fde40:
    // 0x3fde40: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fde40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fde44:
    // 0x3fde44: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fde44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fde48:
    // 0x3fde48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fde48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fde4c:
    // 0x3fde4c: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x3fde4cu;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_3fde50:
    // 0x3fde50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fde50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fde54:
    // 0x3fde54: 0xc0cd518  jal         func_335460
label_3fde58:
    if (ctx->pc == 0x3FDE58u) {
        ctx->pc = 0x3FDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE54u;
        // 0x3fde58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE5Cu;
        goto label_3fde5c;
    }
    ctx->pc = 0x3FDE54u;
    SET_GPR_U32(ctx, 31, 0x3FDE5Cu);
    ctx->pc = 0x3FDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDE54u;
    // 0x3fde58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDE54u, 0x3FDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDE5Cu;
label_3fde5c:
    // 0x3fde5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fde5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fde60:
    // 0x3fde60: 0x365225ff  ori         $s2, $s2, 0x25FF
    ctx->pc = 0x3fde60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)9727);
label_3fde64:
    // 0x3fde64: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3fde64u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_3fde68:
    // 0x3fde68: 0x3c02cd8b  lui         $v0, 0xCD8B
    ctx->pc = 0x3fde68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52619 << 16));
label_3fde6c:
    // 0x3fde6c: 0x34425498  ori         $v0, $v0, 0x5498
    ctx->pc = 0x3fde6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21656);
label_3fde70:
    // 0x3fde70: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
label_3fde74:
    if (ctx->pc == 0x3FDE74u) {
        ctx->pc = 0x3FDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE70u;
        // 0x3fde74: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDE78u;
        goto label_3fde78;
    }
    ctx->pc = 0x3FDE70u;
    {
        const bool branch_taken_0x3fde70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE70u;
        // 0x3fde74: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fde70) {
            ctx->pc = 0x3FDECCu;
            goto label_3fdecc;
        }
    }
    ctx->pc = 0x3FDE78u;
label_3fde78:
    // 0x3fde78: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3fde78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3fde7c:
    // 0x3fde7c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3fde7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3fde80:
    // 0x3fde80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fde80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fde84:
    // 0x3fde84: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x3fde84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3fde88:
    // 0x3fde88: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fde88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fde8c:
    // 0x3fde8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fde8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fde90:
    // 0x3fde90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fde90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fde94:
    // 0x3fde94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fde94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fde98:
    // 0x3fde98: 0xc0cd518  jal         func_335460
label_3fde9c:
    if (ctx->pc == 0x3FDE9Cu) {
        ctx->pc = 0x3FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDE98u;
        // 0x3fde9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDEA0u;
        goto label_3fdea0;
    }
    ctx->pc = 0x3FDE98u;
    SET_GPR_U32(ctx, 31, 0x3FDEA0u);
    ctx->pc = 0x3FDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDE98u;
    // 0x3fde9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDE98u, 0x3FDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDEA0u;
label_3fdea0:
    // 0x3fdea0: 0x3c129f6f  lui         $s2, 0x9F6F
    ctx->pc = 0x3fdea0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40815 << 16));
label_3fdea4:
    // 0x3fdea4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdea8:
    // 0x3fdea8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdeac:
    // 0x3fdeac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdeb0:
    // 0x3fdeb0: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x3fdeb0u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_3fdeb4:
    // 0x3fdeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fdeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fdeb8:
    // 0x3fdeb8: 0xc0cd518  jal         func_335460
label_3fdebc:
    if (ctx->pc == 0x3FDEBCu) {
        ctx->pc = 0x3FDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDEB8u;
        // 0x3fdebc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDEC0u;
        goto label_3fdec0;
    }
    ctx->pc = 0x3FDEB8u;
    SET_GPR_U32(ctx, 31, 0x3FDEC0u);
    ctx->pc = 0x3FDEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDEB8u;
    // 0x3fdebc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FDEB8u, 0x3FDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDEC0u;
label_3fdec0:
    // 0x3fdec0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdec4:
    // 0x3fdec4: 0x365252ff  ori         $s2, $s2, 0x52FF
    ctx->pc = 0x3fdec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)21247);
label_3fdec8:
    // 0x3fdec8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3fdec8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_3fdecc:
    // 0x3fdecc: 0x3c02e2ad  lui         $v0, 0xE2AD
    ctx->pc = 0x3fdeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58029 << 16));
label_3fded0:
    // 0x3fded0: 0x3c05a8cd  lui         $a1, 0xA8CD
    ctx->pc = 0x3fded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43213 << 16));
label_3fded4:
    // 0x3fded4: 0x3442457e  ori         $v0, $v0, 0x457E
    ctx->pc = 0x3fded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17790);
label_3fded8:
    // 0x3fded8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3fded8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fdedc:
    // 0x3fdedc: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x3fdedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
label_3fdee0:
    // 0x3fdee0: 0x34a567b7  ori         $a1, $a1, 0x67B7
    ctx->pc = 0x3fdee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26551);
label_3fdee4:
    // 0x3fdee4: 0x3c04f33c  lui         $a0, 0xF33C
    ctx->pc = 0x3fdee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62268 << 16));
label_3fdee8:
    // 0x3fdee8: 0xc2a00a  movz        $s4, $a2, $v0
    ctx->pc = 0x3fdee8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
label_3fdeec:
    // 0x3fdeec: 0x2652826  xor         $a1, $s3, $a1
    ctx->pc = 0x3fdeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 5));
label_3fdef0:
    // 0x3fdef0: 0x34843c5b  ori         $a0, $a0, 0x3C5B
    ctx->pc = 0x3fdef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15451);
label_3fdef4:
    // 0x3fdef4: 0x3c033c39  lui         $v1, 0x3C39
    ctx->pc = 0x3fdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15417 << 16));
label_3fdef8:
    // 0x3fdef8: 0xc5a00a  movz        $s4, $a2, $a1
    ctx->pc = 0x3fdef8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
label_3fdefc:
    // 0x3fdefc: 0x2642026  xor         $a0, $s3, $a0
    ctx->pc = 0x3fdefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 4));
label_3fdf00:
    // 0x3fdf00: 0x346390e0  ori         $v1, $v1, 0x90E0
    ctx->pc = 0x3fdf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37088);
label_3fdf04:
    // 0x3fdf04: 0x3c024b95  lui         $v0, 0x4B95
    ctx->pc = 0x3fdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19349 << 16));
label_3fdf08:
    // 0x3fdf08: 0xc4a00a  movz        $s4, $a2, $a0
    ctx->pc = 0x3fdf08u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
label_3fdf0c:
    // 0x3fdf0c: 0x2631826  xor         $v1, $s3, $v1
    ctx->pc = 0x3fdf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 3));
label_3fdf10:
    // 0x3fdf10: 0x3442d669  ori         $v0, $v0, 0xD669
    ctx->pc = 0x3fdf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54889);
label_3fdf14:
    // 0x3fdf14: 0xc3a00a  movz        $s4, $a2, $v1
    ctx->pc = 0x3fdf14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
label_3fdf18:
    // 0x3fdf18: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x3fdf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
label_3fdf1c:
    // 0x3fdf1c: 0xc2a00a  movz        $s4, $a2, $v0
    ctx->pc = 0x3fdf1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
label_3fdf20:
    // 0x3fdf20: 0x1686000a  bne         $s4, $a2, . + 4 + (0xA << 2)
label_3fdf24:
    if (ctx->pc == 0x3FDF24u) {
        ctx->pc = 0x3FDF28u;
        goto label_3fdf28;
    }
    ctx->pc = 0x3FDF20u;
    {
        const bool branch_taken_0x3fdf20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 6));
        if (branch_taken_0x3fdf20) {
            ctx->pc = 0x3FDF4Cu;
            goto label_3fdf4c;
        }
    }
    ctx->pc = 0x3FDF28u;
label_3fdf28:
    // 0x3fdf28: 0x3c128164  lui         $s2, 0x8164
    ctx->pc = 0x3fdf28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33124 << 16));
label_3fdf2c:
    // 0x3fdf2c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fdf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fdf30:
    // 0x3fdf30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fdf30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fdf34:
    // 0x3fdf34: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3fdf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3fdf38:
    // 0x3fdf38: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3fdf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3fdf3c:
    // 0x3fdf3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3fdf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3fdf40:
    // 0x3fdf40: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3fdf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3fdf44:
    // 0x3fdf44: 0x365252ff  ori         $s2, $s2, 0x52FF
    ctx->pc = 0x3fdf44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)21247);
label_3fdf48:
    // 0x3fdf48: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3fdf48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdf4c:
    // 0x3fdf4c: 0x3c02cacf  lui         $v0, 0xCACF
    ctx->pc = 0x3fdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51919 << 16));
label_3fdf50:
    // 0x3fdf50: 0x344233da  ori         $v0, $v0, 0x33DA
    ctx->pc = 0x3fdf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13274);
label_3fdf54:
    // 0x3fdf54: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_3fdf58:
    if (ctx->pc == 0x3FDF58u) {
        ctx->pc = 0x3FDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF54u;
        // 0x3fdf58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF5Cu;
        goto label_3fdf5c;
    }
    ctx->pc = 0x3FDF54u;
    {
        const bool branch_taken_0x3fdf54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF54u;
        // 0x3fdf58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdf54) {
            ctx->pc = 0x3FDF8Cu;
            goto label_3fdf8c;
        }
    }
    ctx->pc = 0x3FDF5Cu;
label_3fdf5c:
    // 0x3fdf5c: 0xc0e90ca  jal         func_3A4328
label_3fdf60:
    if (ctx->pc == 0x3FDF60u) {
        ctx->pc = 0x3FDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF5Cu;
        // 0x3fdf60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF64u;
        goto label_3fdf64;
    }
    ctx->pc = 0x3FDF5Cu;
    SET_GPR_U32(ctx, 31, 0x3FDF64u);
    ctx->pc = 0x3FDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF5Cu;
    // 0x3fdf60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FDF5Cu, 0x3FDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDF64u;
label_3fdf64:
    // 0x3fdf64: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x3fdf64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fdf68:
    // 0x3fdf68: 0x3c06240b  lui         $a2, 0x240B
    ctx->pc = 0x3fdf68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9227 << 16));
label_3fdf6c:
    // 0x3fdf6c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3fdf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3fdf70:
    // 0x3fdf70: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3fdf70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3fdf74:
    // 0x3fdf74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fdf74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fdf78:
    // 0x3fdf78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fdf7c:
    // 0x3fdf7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fdf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fdf80:
    // 0x3fdf80: 0x34c606ff  ori         $a2, $a2, 0x6FF
    ctx->pc = 0x3fdf80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1791);
label_3fdf84:
    // 0x3fdf84: 0xc0f1658  jal         func_3C5960
label_3fdf88:
    if (ctx->pc == 0x3FDF88u) {
        ctx->pc = 0x3FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF84u;
        // 0x3fdf88: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF8Cu;
        goto label_3fdf8c;
    }
    ctx->pc = 0x3FDF84u;
    SET_GPR_U32(ctx, 31, 0x3FDF8Cu);
    ctx->pc = 0x3FDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDF84u;
    // 0x3fdf88: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3FDF84u, 0x3FDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDF8Cu;
label_3fdf8c:
    // 0x3fdf8c: 0x3c02c04f  lui         $v0, 0xC04F
    ctx->pc = 0x3fdf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49231 << 16));
label_3fdf90:
    // 0x3fdf90: 0x344232d9  ori         $v0, $v0, 0x32D9
    ctx->pc = 0x3fdf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13017);
label_3fdf94:
    // 0x3fdf94: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
label_3fdf98:
    if (ctx->pc == 0x3FDF98u) {
        ctx->pc = 0x3FDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF94u;
        // 0x3fdf98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDF9Cu;
        goto label_3fdf9c;
    }
    ctx->pc = 0x3FDF94u;
    {
        const bool branch_taken_0x3fdf94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDF94u;
        // 0x3fdf98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdf94) {
            ctx->pc = 0x3FDFFCu;
            goto label_3fdffc;
        }
    }
    ctx->pc = 0x3FDF9Cu;
label_3fdf9c:
    // 0x3fdf9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fdf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fdfa0:
    // 0x3fdfa0: 0xc0e90ca  jal         func_3A4328
label_3fdfa4:
    if (ctx->pc == 0x3FDFA4u) {
        ctx->pc = 0x3FDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFA0u;
        // 0x3fdfa4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFA8u;
        goto label_3fdfa8;
    }
    ctx->pc = 0x3FDFA0u;
    SET_GPR_U32(ctx, 31, 0x3FDFA8u);
    ctx->pc = 0x3FDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDFA0u;
    // 0x3fdfa4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FDFA0u, 0x3FDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDFA8u;
label_3fdfa8:
    // 0x3fdfa8: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3fdfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3fdfac:
    // 0x3fdfac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3fdfacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3fdfb0:
    // 0x3fdfb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fdfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fdfb4:
    // 0x3fdfb4: 0x3c066a58  lui         $a2, 0x6A58
    ctx->pc = 0x3fdfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27224 << 16));
label_3fdfb8:
    // 0x3fdfb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fdfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdfbc:
    // 0x3fdfbc: 0x34c648ff  ori         $a2, $a2, 0x48FF
    ctx->pc = 0x3fdfbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)18687);
label_3fdfc0:
    // 0x3fdfc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fdfc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fdfc4:
    // 0x3fdfc4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fdfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fdfc8:
    // 0x3fdfc8: 0xc0f1658  jal         func_3C5960
label_3fdfcc:
    if (ctx->pc == 0x3FDFCCu) {
        ctx->pc = 0x3FDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFC8u;
        // 0x3fdfcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFD0u;
        goto label_3fdfd0;
    }
    ctx->pc = 0x3FDFC8u;
    SET_GPR_U32(ctx, 31, 0x3FDFD0u);
    ctx->pc = 0x3FDFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDFC8u;
    // 0x3fdfcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3FDFC8u, 0x3FDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDFD0u;
label_3fdfd0:
    // 0x3fdfd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fdfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fdfd4:
    // 0x3fdfd4: 0xc0e90ca  jal         func_3A4328
label_3fdfd8:
    if (ctx->pc == 0x3FDFD8u) {
        ctx->pc = 0x3FDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFD4u;
        // 0x3fdfd8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFDCu;
        goto label_3fdfdc;
    }
    ctx->pc = 0x3FDFD4u;
    SET_GPR_U32(ctx, 31, 0x3FDFDCu);
    ctx->pc = 0x3FDFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDFD4u;
    // 0x3fdfd8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FDFD4u, 0x3FDFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDFDCu;
label_3fdfdc:
    // 0x3fdfdc: 0x3c067136  lui         $a2, 0x7136
    ctx->pc = 0x3fdfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28982 << 16));
label_3fdfe0:
    // 0x3fdfe0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fdfe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fdfe4:
    // 0x3fdfe4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fdfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fdfe8:
    // 0x3fdfe8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fdfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fdfec:
    // 0x3fdfec: 0x34c621a0  ori         $a2, $a2, 0x21A0
    ctx->pc = 0x3fdfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8608);
label_3fdff0:
    // 0x3fdff0: 0xc0f1658  jal         func_3C5960
label_3fdff4:
    if (ctx->pc == 0x3FDFF4u) {
        ctx->pc = 0x3FDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFF0u;
        // 0x3fdff4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FDFF8u;
        goto label_3fdff8;
    }
    ctx->pc = 0x3FDFF0u;
    SET_GPR_U32(ctx, 31, 0x3FDFF8u);
    ctx->pc = 0x3FDFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDFF0u;
    // 0x3fdff4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3FDFF0u, 0x3FDFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDFF8u;
label_3fdff8:
    // 0x3fdff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fdffc:
    // 0x3fdffc: 0x1682006c  bne         $s4, $v0, . + 4 + (0x6C << 2)
label_3fe000:
    if (ctx->pc == 0x3FE000u) {
        ctx->pc = 0x3FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFFCu;
        // 0x3fe000: 0x3c024366  lui         $v0, 0x4366 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE004u;
        goto label_3fe004;
    }
    ctx->pc = 0x3FDFFCu;
    {
        const bool branch_taken_0x3fdffc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDFFCu;
        // 0x3fe000: 0x3c024366  lui         $v0, 0x4366 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdffc) {
            ctx->pc = 0x3FE1B0u;
            goto label_3fe1b0;
        }
    }
    ctx->pc = 0x3FE004u;
label_3fe004:
    // 0x3fe004: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3fe004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3fe008:
    // 0x3fe008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe00c:
    // 0x3fe00c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3fe00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fe010:
    // 0x3fe010: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3fe010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe014:
    // 0x3fe014: 0xc136b24  jal         func_4DAC90
label_3fe018:
    if (ctx->pc == 0x3FE018u) {
        ctx->pc = 0x3FE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE014u;
        // 0x3fe018: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE01Cu;
        goto label_3fe01c;
    }
    ctx->pc = 0x3FE014u;
    SET_GPR_U32(ctx, 31, 0x3FE01Cu);
    ctx->pc = 0x3FE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE014u;
    // 0x3fe018: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE014u, 0x3FE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE01Cu;
label_3fe01c:
    // 0x3fe01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fe01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fe020:
    // 0x3fe020: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3fe020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3fe024:
    // 0x3fe024: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fe024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe028:
    // 0x3fe028: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x3fe028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fe02c:
    // 0x3fe02c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fe02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe030:
    // 0x3fe030: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x3fe030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3fe034:
    // 0x3fe034: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fe034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fe038:
    // 0x3fe038: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3fe038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe03c:
    // 0x3fe03c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fe03cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe040:
    // 0x3fe040: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3fe040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe044:
    // 0x3fe044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe048:
    // 0x3fe048: 0xc0f1686  jal         func_3C5A18
label_3fe04c:
    if (ctx->pc == 0x3FE04Cu) {
        ctx->pc = 0x3FE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE048u;
        // 0x3fe04c: 0x4600f306  mov.s       $f12, $f30 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE050u;
        goto label_3fe050;
    }
    ctx->pc = 0x3FE048u;
    SET_GPR_U32(ctx, 31, 0x3FE050u);
    ctx->pc = 0x3FE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE048u;
    // 0x3fe04c: 0x4600f306  mov.s       $f12, $f30 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x3FE048u, 0x3FE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE050u;
label_3fe050:
    // 0x3fe050: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fe050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fe054:
    // 0x3fe054: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fe054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fe058:
    // 0x3fe058: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe05c:
    // 0x3fe05c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3fe05cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3fe060:
    // 0x3fe060: 0x2444b8b8  addiu       $a0, $v0, -0x4748
    ctx->pc = 0x3fe060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3fe064:
    // 0x3fe064: 0xc0cd518  jal         func_335460
label_3fe068:
    if (ctx->pc == 0x3FE068u) {
        ctx->pc = 0x3FE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE064u;
        // 0x3fe068: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE06Cu;
        goto label_3fe06c;
    }
    ctx->pc = 0x3FE064u;
    SET_GPR_U32(ctx, 31, 0x3FE06Cu);
    ctx->pc = 0x3FE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE064u;
    // 0x3fe068: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE064u, 0x3FE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE06Cu;
label_3fe06c:
    // 0x3fe06c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3fe06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3fe070:
    // 0x3fe070: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fe070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fe074:
    // 0x3fe074: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3fe074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3fe078:
    // 0x3fe078: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fe078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fe07c:
    // 0x3fe07c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3fe07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe080:
    // 0x3fe080: 0x3c013de3  lui         $at, 0x3DE3
    ctx->pc = 0x3fe080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15843 << 16));
label_3fe084:
    // 0x3fe084: 0x342153f8  ori         $at, $at, 0x53F8
    ctx->pc = 0x3fe084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21496);
label_3fe088:
    // 0x3fe088: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3fe088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3fe08c:
    // 0x3fe08c: 0xc136b24  jal         func_4DAC90
label_3fe090:
    if (ctx->pc == 0x3FE090u) {
        ctx->pc = 0x3FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE08Cu;
        // 0x3fe090: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE094u;
        goto label_3fe094;
    }
    ctx->pc = 0x3FE08Cu;
    SET_GPR_U32(ctx, 31, 0x3FE094u);
    ctx->pc = 0x3FE090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE08Cu;
    // 0x3fe090: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE08Cu, 0x3FE094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE094u;
label_3fe094:
    // 0x3fe094: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3fe094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3fe098:
    // 0x3fe098: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fe098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fe09c:
    // 0x3fe09c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fe09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fe0a0:
    // 0x3fe0a0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fe0a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe0a4:
    // 0x3fe0a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fe0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0a8:
    // 0x3fe0a8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3fe0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0ac:
    // 0x3fe0ac: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x3fe0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3fe0b0:
    // 0x3fe0b0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fe0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fe0b4:
    // 0x3fe0b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fe0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0b8:
    // 0x3fe0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0bc:
    // 0x3fe0bc: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3fe0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3fe0c0:
    // 0x3fe0c0: 0xc0f1686  jal         func_3C5A18
label_3fe0c4:
    if (ctx->pc == 0x3FE0C4u) {
        ctx->pc = 0x3FE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0C0u;
        // 0x3fe0c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0C8u;
        goto label_3fe0c8;
    }
    ctx->pc = 0x3FE0C0u;
    SET_GPR_U32(ctx, 31, 0x3FE0C8u);
    ctx->pc = 0x3FE0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE0C0u;
    // 0x3fe0c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x3FE0C0u, 0x3FE0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE0C8u;
label_3fe0c8:
    // 0x3fe0c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3fe0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3fe0cc:
    // 0x3fe0cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3fe0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe0d0:
    // 0x3fe0d0: 0x24651740  addiu       $a1, $v1, 0x1740
    ctx->pc = 0x3fe0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_3fe0d4:
    // 0x3fe0d4: 0xc136b24  jal         func_4DAC90
label_3fe0d8:
    if (ctx->pc == 0x3FE0D8u) {
        ctx->pc = 0x3FE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0D4u;
        // 0x3fe0d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0DCu;
        goto label_3fe0dc;
    }
    ctx->pc = 0x3FE0D4u;
    SET_GPR_U32(ctx, 31, 0x3FE0DCu);
    ctx->pc = 0x3FE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE0D4u;
    // 0x3fe0d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE0D4u, 0x3FE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE0DCu;
label_3fe0dc:
    // 0x3fe0dc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fe0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe0e0:
    // 0x3fe0e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3fe0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3fe0e4:
    // 0x3fe0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fe0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0e8:
    // 0x3fe0e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3fe0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe0ec:
    // 0x3fe0ec: 0xc136b18  jal         func_4DAC60
label_3fe0f0:
    if (ctx->pc == 0x3FE0F0u) {
        ctx->pc = 0x3FE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE0ECu;
        // 0x3fe0f0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE0F4u;
        goto label_3fe0f4;
    }
    ctx->pc = 0x3FE0ECu;
    SET_GPR_U32(ctx, 31, 0x3FE0F4u);
    ctx->pc = 0x3FE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE0ECu;
    // 0x3fe0f0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FE0ECu, 0x3FE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE0F4u;
label_3fe0f4:
    // 0x3fe0f4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3fe0f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe0f8:
    // 0x3fe0f8: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x3fe0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe0fc:
    // 0x3fe0fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3fe0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3fe100:
    // 0x3fe100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe104:
    // 0x3fe104: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fe104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fe108:
    // 0x3fe108: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3fe108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3fe10c:
    // 0x3fe10c: 0xc136b24  jal         func_4DAC90
label_3fe110:
    if (ctx->pc == 0x3FE110u) {
        ctx->pc = 0x3FE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE10Cu;
        // 0x3fe110: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE114u;
        goto label_3fe114;
    }
    ctx->pc = 0x3FE10Cu;
    SET_GPR_U32(ctx, 31, 0x3FE114u);
    ctx->pc = 0x3FE110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE10Cu;
    // 0x3fe110: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE10Cu, 0x3FE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE114u;
label_3fe114:
    // 0x3fe114: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3fe114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3fe118:
    // 0x3fe118: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x3fe118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3fe11c:
    // 0x3fe11c: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3fe11cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3fe120:
    // 0x3fe120: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3fe120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3fe124:
    // 0x3fe124: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3fe124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3fe128:
    // 0x3fe128: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x3fe128u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_3fe12c:
    // 0x3fe12c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x3fe12cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_3fe130:
    // 0x3fe130: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3fe130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3fe134:
    // 0x3fe134: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3fe134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fe138:
    // 0x3fe138: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fe138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fe13c:
    // 0x3fe13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fe13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe140:
    // 0x3fe140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fe140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe144:
    // 0x3fe144: 0xc0f16c0  jal         func_3C5B00
label_3fe148:
    if (ctx->pc == 0x3FE148u) {
        ctx->pc = 0x3FE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE144u;
        // 0x3fe148: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE14Cu;
        goto label_3fe14c;
    }
    ctx->pc = 0x3FE144u;
    SET_GPR_U32(ctx, 31, 0x3FE14Cu);
    ctx->pc = 0x3FE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE144u;
    // 0x3fe148: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3FE144u, 0x3FE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE14Cu;
label_3fe14c:
    // 0x3fe14c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3fe14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fe150:
    // 0x3fe150: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3fe150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe154:
    // 0x3fe154: 0xc136b18  jal         func_4DAC60
label_3fe158:
    if (ctx->pc == 0x3FE158u) {
        ctx->pc = 0x3FE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE154u;
        // 0x3fe158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE15Cu;
        goto label_3fe15c;
    }
    ctx->pc = 0x3FE154u;
    SET_GPR_U32(ctx, 31, 0x3FE15Cu);
    ctx->pc = 0x3FE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE154u;
    // 0x3fe158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FE154u, 0x3FE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE15Cu;
label_3fe15c:
    // 0x3fe15c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3fe15cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe160:
    // 0x3fe160: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fe160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fe164:
    // 0x3fe164: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3fe164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3fe168:
    // 0x3fe168: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe16c:
    // 0x3fe16c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fe16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fe170:
    // 0x3fe170: 0xc136b24  jal         func_4DAC90
label_3fe174:
    if (ctx->pc == 0x3FE174u) {
        ctx->pc = 0x3FE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE170u;
        // 0x3fe174: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE178u;
        goto label_3fe178;
    }
    ctx->pc = 0x3FE170u;
    SET_GPR_U32(ctx, 31, 0x3FE178u);
    ctx->pc = 0x3FE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE170u;
    // 0x3fe174: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE170u, 0x3FE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE178u;
label_3fe178:
    // 0x3fe178: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3fe178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3fe17c:
    // 0x3fe17c: 0x3c075c3f  lui         $a3, 0x5C3F
    ctx->pc = 0x3fe17cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23615 << 16));
label_3fe180:
    // 0x3fe180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fe180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe184:
    // 0x3fe184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fe184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe188:
    // 0x3fe188: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3fe188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3fe18c:
    // 0x3fe18c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fe18cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fe190:
    // 0x3fe190: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3fe190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3fe194:
    // 0x3fe194: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x3fe194u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_3fe198:
    // 0x3fe198: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x3fe198u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_3fe19c:
    // 0x3fe19c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3fe19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe1a0:
    // 0x3fe1a0: 0x34e727ff  ori         $a3, $a3, 0x27FF
    ctx->pc = 0x3fe1a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10239);
label_3fe1a4:
    // 0x3fe1a4: 0xc0f16c0  jal         func_3C5B00
label_3fe1a8:
    if (ctx->pc == 0x3FE1A8u) {
        ctx->pc = 0x3FE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1A4u;
        // 0x3fe1a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1ACu;
        goto label_3fe1ac;
    }
    ctx->pc = 0x3FE1A4u;
    SET_GPR_U32(ctx, 31, 0x3FE1ACu);
    ctx->pc = 0x3FE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE1A4u;
    // 0x3fe1a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3FE1A4u, 0x3FE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE1ACu;
label_3fe1ac:
    // 0x3fe1ac: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x3fe1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_3fe1b0:
    // 0x3fe1b0: 0x3442fc57  ori         $v0, $v0, 0xFC57
    ctx->pc = 0x3fe1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64599);
label_3fe1b4:
    // 0x3fe1b4: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_3fe1b8:
    if (ctx->pc == 0x3FE1B8u) {
        ctx->pc = 0x3FE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1B4u;
        // 0x3fe1b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1BCu;
        goto label_3fe1bc;
    }
    ctx->pc = 0x3FE1B4u;
    {
        const bool branch_taken_0x3fe1b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1B4u;
        // 0x3fe1b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe1b4) {
            ctx->pc = 0x3FE1C4u;
            goto label_3fe1c4;
        }
    }
    ctx->pc = 0x3FE1BCu;
label_3fe1bc:
    // 0x3fe1bc: 0x1682002c  bne         $s4, $v0, . + 4 + (0x2C << 2)
label_3fe1c0:
    if (ctx->pc == 0x3FE1C0u) {
        ctx->pc = 0x3FE1C4u;
        goto label_3fe1c4;
    }
    ctx->pc = 0x3FE1BCu;
    {
        const bool branch_taken_0x3fe1bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fe1bc) {
            ctx->pc = 0x3FE270u;
            goto label_3fe270;
        }
    }
    ctx->pc = 0x3FE1C4u;
label_3fe1c4:
    // 0x3fe1c4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3fe1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3fe1c8:
    // 0x3fe1c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe1cc:
    // 0x3fe1cc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3fe1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fe1d0:
    // 0x3fe1d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3fe1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe1d4:
    // 0x3fe1d4: 0xc136b24  jal         func_4DAC90
label_3fe1d8:
    if (ctx->pc == 0x3FE1D8u) {
        ctx->pc = 0x3FE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE1D4u;
        // 0x3fe1d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE1DCu;
        goto label_3fe1dc;
    }
    ctx->pc = 0x3FE1D4u;
    SET_GPR_U32(ctx, 31, 0x3FE1DCu);
    ctx->pc = 0x3FE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE1D4u;
    // 0x3fe1d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE1D4u, 0x3FE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE1DCu;
label_3fe1dc:
    // 0x3fe1dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fe1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fe1e0:
    // 0x3fe1e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fe1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fe1e4:
    // 0x3fe1e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fe1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fe1e8:
    // 0x3fe1e8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fe1e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe1ec:
    // 0x3fe1ec: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3fe1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fe1f0:
    // 0x3fe1f0: 0x3c08a1a8  lui         $t0, 0xA1A8
    ctx->pc = 0x3fe1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41384 << 16));
label_3fe1f4:
    // 0x3fe1f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fe1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe1f8:
    // 0x3fe1f8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fe1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fe1fc:
    // 0x3fe1fc: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x3fe1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3fe200:
    // 0x3fe200: 0x3508b4ff  ori         $t0, $t0, 0xB4FF
    ctx->pc = 0x3fe200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)46335);
label_3fe204:
    // 0x3fe204: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fe204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fe208:
    // 0x3fe208: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3fe208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe20c:
    // 0x3fe20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fe20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe210:
    // 0x3fe210: 0xc0f1686  jal         func_3C5A18
label_3fe214:
    if (ctx->pc == 0x3FE214u) {
        ctx->pc = 0x3FE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE210u;
        // 0x3fe214: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE218u;
        goto label_3fe218;
    }
    ctx->pc = 0x3FE210u;
    SET_GPR_U32(ctx, 31, 0x3FE218u);
    ctx->pc = 0x3FE214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE210u;
    // 0x3fe214: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x3FE210u, 0x3FE218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE218u;
label_3fe218:
    // 0x3fe218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe21c:
    // 0x3fe21c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fe21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fe220:
    // 0x3fe220: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe224:
    // 0x3fe224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fe224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fe228:
    // 0x3fe228: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fe228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fe22c:
    // 0x3fe22c: 0xc0cd518  jal         func_335460
label_3fe230:
    if (ctx->pc == 0x3FE230u) {
        ctx->pc = 0x3FE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE22Cu;
        // 0x3fe230: 0x2444b8b8  addiu       $a0, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE234u;
        goto label_3fe234;
    }
    ctx->pc = 0x3FE22Cu;
    SET_GPR_U32(ctx, 31, 0x3FE234u);
    ctx->pc = 0x3FE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE22Cu;
    // 0x3fe230: 0x2444b8b8  addiu       $a0, $v0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE22Cu, 0x3FE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE234u;
label_3fe234:
    // 0x3fe234: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fe234u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fe238:
    // 0x3fe238: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3fe238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe23c:
    // 0x3fe23c: 0xc136b24  jal         func_4DAC90
label_3fe240:
    if (ctx->pc == 0x3FE240u) {
        ctx->pc = 0x3FE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE23Cu;
        // 0x3fe240: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE244u;
        goto label_3fe244;
    }
    ctx->pc = 0x3FE23Cu;
    SET_GPR_U32(ctx, 31, 0x3FE244u);
    ctx->pc = 0x3FE240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE23Cu;
    // 0x3fe240: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE23Cu, 0x3FE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE244u;
label_3fe244:
    // 0x3fe244: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3fe244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe248:
    // 0x3fe248: 0x3c08a1a8  lui         $t0, 0xA1A8
    ctx->pc = 0x3fe248u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41384 << 16));
label_3fe24c:
    // 0x3fe24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fe24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe250:
    // 0x3fe250: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fe250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe254:
    // 0x3fe254: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3fe254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3fe258:
    // 0x3fe258: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fe258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fe25c:
    // 0x3fe25c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3fe25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe260:
    // 0x3fe260: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x3fe260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3fe264:
    // 0x3fe264: 0x3508b4ff  ori         $t0, $t0, 0xB4FF
    ctx->pc = 0x3fe264u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)46335);
label_3fe268:
    // 0x3fe268: 0xc0f1686  jal         func_3C5A18
label_3fe26c:
    if (ctx->pc == 0x3FE26Cu) {
        ctx->pc = 0x3FE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE268u;
        // 0x3fe26c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE270u;
        goto label_3fe270;
    }
    ctx->pc = 0x3FE268u;
    SET_GPR_U32(ctx, 31, 0x3FE270u);
    ctx->pc = 0x3FE26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE268u;
    // 0x3fe26c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A18u, 0x3FE268u, 0x3FE270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE270u;
label_3fe270:
    // 0x3fe270: 0x3c02bc65  lui         $v0, 0xBC65
    ctx->pc = 0x3fe270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48229 << 16));
label_3fe274:
    // 0x3fe274: 0x344278ae  ori         $v0, $v0, 0x78AE
    ctx->pc = 0x3fe274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30894);
label_3fe278:
    // 0x3fe278: 0x5662000e  bnel        $s3, $v0, . + 4 + (0xE << 2)
label_3fe27c:
    if (ctx->pc == 0x3FE27Cu) {
        ctx->pc = 0x3FE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE278u;
        // 0x3fe27c: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE280u;
        goto label_3fe280;
    }
    ctx->pc = 0x3FE278u;
    {
        const bool branch_taken_0x3fe278 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fe278) {
            ctx->pc = 0x3FE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE278u;
            // 0x3fe27c: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE2B4u;
            goto label_3fe2b4;
        }
    }
    ctx->pc = 0x3FE280u;
label_3fe280:
    // 0x3fe280: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fe280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe284:
    // 0x3fe284: 0xc0e90ca  jal         func_3A4328
label_3fe288:
    if (ctx->pc == 0x3FE288u) {
        ctx->pc = 0x3FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE284u;
        // 0x3fe288: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE28Cu;
        goto label_3fe28c;
    }
    ctx->pc = 0x3FE284u;
    SET_GPR_U32(ctx, 31, 0x3FE28Cu);
    ctx->pc = 0x3FE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE284u;
    // 0x3fe288: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FE284u, 0x3FE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE28Cu;
label_3fe28c:
    // 0x3fe28c: 0x3c06ffb8  lui         $a2, 0xFFB8
    ctx->pc = 0x3fe28cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65464 << 16));
label_3fe290:
    // 0x3fe290: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3fe290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3fe294:
    // 0x3fe294: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fe294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fe298:
    // 0x3fe298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe29c:
    // 0x3fe29c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fe29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fe2a0:
    // 0x3fe2a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fe2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe2a4:
    // 0x3fe2a4: 0x34c6caff  ori         $a2, $a2, 0xCAFF
    ctx->pc = 0x3fe2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51967);
label_3fe2a8:
    // 0x3fe2a8: 0xc0f1658  jal         func_3C5960
label_3fe2ac:
    if (ctx->pc == 0x3FE2ACu) {
        ctx->pc = 0x3FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2A8u;
        // 0x3fe2ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE2B0u;
        goto label_3fe2b0;
    }
    ctx->pc = 0x3FE2A8u;
    SET_GPR_U32(ctx, 31, 0x3FE2B0u);
    ctx->pc = 0x3FE2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE2A8u;
    // 0x3fe2ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3FE2A8u, 0x3FE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE2B0u;
label_3fe2b0:
    // 0x3fe2b0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3fe2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3fe2b4:
    // 0x3fe2b4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3fe2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3fe2b8:
    // 0x3fe2b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fe2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3fe2bc:
    // 0x3fe2bc: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3fe2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3fe2c0:
    // 0x3fe2c0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3fe2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3fe2c4:
    // 0x3fe2c4: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x3fe2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3fe2c8:
    // 0x3fe2c8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3fe2cc:
    if (ctx->pc == 0x3FE2CCu) {
        ctx->pc = 0x3FE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2C8u;
        // 0x3fe2cc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE2D0u;
        goto label_3fe2d0;
    }
    ctx->pc = 0x3FE2C8u;
    {
        const bool branch_taken_0x3fe2c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2C8u;
        // 0x3fe2cc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe2c8) {
            ctx->pc = 0x3FE2E8u;
            goto label_3fe2e8;
        }
    }
    ctx->pc = 0x3FE2D0u;
label_3fe2d0:
    // 0x3fe2d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3fe2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3fe2d4:
    // 0x3fe2d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3fe2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fe2d8:
    // 0x3fe2d8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fe2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fe2dc:
    // 0x3fe2dc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fe2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fe2e0:
    // 0x3fe2e0: 0x60f809  jalr        $v1
label_3fe2e4:
    if (ctx->pc == 0x3FE2E4u) {
        ctx->pc = 0x3FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2E0u;
        // 0x3fe2e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE2E8u;
        goto label_3fe2e8;
    }
    ctx->pc = 0x3FE2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FE2E8u);
        ctx->pc = 0x3FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2E0u;
        // 0x3fe2e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE2E0u, 0x3FE2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE2E8u;
label_3fe2e8:
    // 0x3fe2e8: 0x3c026eff  lui         $v0, 0x6EFF
    ctx->pc = 0x3fe2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28415 << 16));
label_3fe2ec:
    // 0x3fe2ec: 0x3442eee0  ori         $v0, $v0, 0xEEE0
    ctx->pc = 0x3fe2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61152);
label_3fe2f0:
    // 0x3fe2f0: 0x1662004a  bne         $s3, $v0, . + 4 + (0x4A << 2)
label_3fe2f4:
    if (ctx->pc == 0x3FE2F4u) {
        ctx->pc = 0x3FE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2F0u;
        // 0x3fe2f4: 0x8fa300d4  lw          $v1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE2F8u;
        goto label_3fe2f8;
    }
    ctx->pc = 0x3FE2F0u;
    {
        const bool branch_taken_0x3fe2f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE2F0u;
        // 0x3fe2f4: 0x8fa300d4  lw          $v1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe2f0) {
            ctx->pc = 0x3FE41Cu;
            goto label_3fe41c;
        }
    }
    ctx->pc = 0x3FE2F8u;
label_3fe2f8:
    // 0x3fe2f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fe2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fe2fc:
    // 0x3fe2fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3fe2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fe300:
    // 0x3fe300: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3fe300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3fe304:
    // 0x3fe304: 0xc0cd4ee  jal         func_3353B8
label_3fe308:
    if (ctx->pc == 0x3FE308u) {
        ctx->pc = 0x3FE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE304u;
        // 0x3fe308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE30Cu;
        goto label_3fe30c;
    }
    ctx->pc = 0x3FE304u;
    SET_GPR_U32(ctx, 31, 0x3FE30Cu);
    ctx->pc = 0x3FE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE304u;
    // 0x3fe308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FE304u, 0x3FE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE30Cu;
label_3fe30c:
    // 0x3fe30c: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x3fe30cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3fe310:
    // 0x3fe310: 0x1a800041  blez        $s4, . + 4 + (0x41 << 2)
label_3fe314:
    if (ctx->pc == 0x3FE314u) {
        ctx->pc = 0x3FE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE310u;
        // 0x3fe314: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE318u;
        goto label_3fe318;
    }
    ctx->pc = 0x3FE310u;
    {
        const bool branch_taken_0x3fe310 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3FE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE310u;
        // 0x3fe314: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe310) {
            ctx->pc = 0x3FE418u;
            goto label_3fe418;
        }
    }
    ctx->pc = 0x3FE318u;
label_3fe318:
    // 0x3fe318: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x3fe318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_3fe31c:
    // 0x3fe31c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3fe31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3fe320:
    // 0x3fe320: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3fe320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3fe324:
    // 0x3fe324: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3fe324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3fe328:
    // 0x3fe328: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3fe328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3fe32c:
    // 0x3fe32c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3fe32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3fe330:
    // 0x3fe330: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x3fe330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3fe334:
    // 0x3fe334: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3fe334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3fe338:
    // 0x3fe338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe33c:
    // 0x3fe33c: 0x0  nop
    ctx->pc = 0x3fe33cu;
    // NOP
label_3fe340:
    // 0x3fe340: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fe340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fe344:
    // 0x3fe344: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3fe344u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3fe348:
    // 0x3fe348: 0xc0cd518  jal         func_335460
label_3fe34c:
    if (ctx->pc == 0x3FE34Cu) {
        ctx->pc = 0x3FE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE348u;
        // 0x3fe34c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE350u;
        goto label_3fe350;
    }
    ctx->pc = 0x3FE348u;
    SET_GPR_U32(ctx, 31, 0x3FE350u);
    ctx->pc = 0x3FE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE348u;
    // 0x3fe34c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE348u, 0x3FE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE350u;
label_3fe350:
    // 0x3fe350: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3fe350u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3fe354:
    // 0x3fe354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe358:
    // 0x3fe358: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fe358u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fe35c:
    // 0x3fe35c: 0xc0cd518  jal         func_335460
label_3fe360:
    if (ctx->pc == 0x3FE360u) {
        ctx->pc = 0x3FE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE35Cu;
        // 0x3fe360: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE364u;
        goto label_3fe364;
    }
    ctx->pc = 0x3FE35Cu;
    SET_GPR_U32(ctx, 31, 0x3FE364u);
    ctx->pc = 0x3FE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE35Cu;
    // 0x3fe360: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE35Cu, 0x3FE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE364u;
label_3fe364:
    // 0x3fe364: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fe364u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fe368:
    // 0x3fe368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe36c:
    // 0x3fe36c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3fe36cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3fe370:
    // 0x3fe370: 0xc0cd518  jal         func_335460
label_3fe374:
    if (ctx->pc == 0x3FE374u) {
        ctx->pc = 0x3FE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE370u;
        // 0x3fe374: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE378u;
        goto label_3fe378;
    }
    ctx->pc = 0x3FE370u;
    SET_GPR_U32(ctx, 31, 0x3FE378u);
    ctx->pc = 0x3FE374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE370u;
    // 0x3fe374: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE370u, 0x3FE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE378u;
label_3fe378:
    // 0x3fe378: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3fe378u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3fe37c:
    // 0x3fe37c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3fe37cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3fe380:
    // 0x3fe380: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3fe380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3fe384:
    // 0x3fe384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe388:
    // 0x3fe388: 0xc0cd55c  jal         func_335570
label_3fe38c:
    if (ctx->pc == 0x3FE38Cu) {
        ctx->pc = 0x3FE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE388u;
        // 0x3fe38c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE390u;
        goto label_3fe390;
    }
    ctx->pc = 0x3FE388u;
    SET_GPR_U32(ctx, 31, 0x3FE390u);
    ctx->pc = 0x3FE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE388u;
    // 0x3fe38c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FE388u, 0x3FE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE390u;
label_3fe390:
    // 0x3fe390: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3fe390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3fe394:
    // 0x3fe394: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3fe394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fe398:
    // 0x3fe398: 0xc136b18  jal         func_4DAC60
label_3fe39c:
    if (ctx->pc == 0x3FE39Cu) {
        ctx->pc = 0x3FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE398u;
        // 0x3fe39c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE3A0u;
        goto label_3fe3a0;
    }
    ctx->pc = 0x3FE398u;
    SET_GPR_U32(ctx, 31, 0x3FE3A0u);
    ctx->pc = 0x3FE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE398u;
    // 0x3fe39c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FE398u, 0x3FE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE3A0u;
label_3fe3a0:
    // 0x3fe3a0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3fe3a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe3a4:
    // 0x3fe3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe3a8:
    // 0x3fe3a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fe3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fe3ac:
    // 0x3fe3ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fe3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fe3b0:
    // 0x3fe3b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3fe3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3fe3b4:
    // 0x3fe3b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe3b8:
    // 0x3fe3b8: 0xc0cd518  jal         func_335460
label_3fe3bc:
    if (ctx->pc == 0x3FE3BCu) {
        ctx->pc = 0x3FE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE3B8u;
        // 0x3fe3bc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE3C0u;
        goto label_3fe3c0;
    }
    ctx->pc = 0x3FE3B8u;
    SET_GPR_U32(ctx, 31, 0x3FE3C0u);
    ctx->pc = 0x3FE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE3B8u;
    // 0x3fe3bc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE3B8u, 0x3FE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE3C0u;
label_3fe3c0:
    // 0x3fe3c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fe3c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fe3c4:
    // 0x3fe3c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fe3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fe3c8:
    // 0x3fe3c8: 0xc136b24  jal         func_4DAC90
label_3fe3cc:
    if (ctx->pc == 0x3FE3CCu) {
        ctx->pc = 0x3FE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE3C8u;
        // 0x3fe3cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE3D0u;
        goto label_3fe3d0;
    }
    ctx->pc = 0x3FE3C8u;
    SET_GPR_U32(ctx, 31, 0x3FE3D0u);
    ctx->pc = 0x3FE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE3C8u;
    // 0x3fe3cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE3C8u, 0x3FE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE3D0u;
label_3fe3d0:
    // 0x3fe3d0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3fe3d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3fe3d4:
    // 0x3fe3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe3d8:
    // 0x3fe3d8: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x3fe3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_3fe3dc:
    // 0x3fe3dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3fe3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3fe3e0:
    // 0x3fe3e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe3e4:
    // 0x3fe3e4: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x3fe3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_3fe3e8:
    // 0x3fe3e8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3fe3e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3fe3ec:
    // 0x3fe3ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fe3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fe3f0:
    // 0x3fe3f0: 0xc0cd518  jal         func_335460
label_3fe3f4:
    if (ctx->pc == 0x3FE3F4u) {
        ctx->pc = 0x3FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE3F0u;
        // 0x3fe3f4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE3F8u;
        goto label_3fe3f8;
    }
    ctx->pc = 0x3FE3F0u;
    SET_GPR_U32(ctx, 31, 0x3FE3F8u);
    ctx->pc = 0x3FE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE3F0u;
    // 0x3fe3f4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE3F0u, 0x3FE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE3F8u;
label_3fe3f8:
    // 0x3fe3f8: 0x3c066f4d  lui         $a2, 0x6F4D
    ctx->pc = 0x3fe3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28493 << 16));
label_3fe3fc:
    // 0x3fe3fc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fe3fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fe400:
    // 0x3fe400: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fe400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3fe404:
    // 0x3fe404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fe404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fe408:
    // 0x3fe408: 0xc0f1706  jal         func_3C5C18
label_3fe40c:
    if (ctx->pc == 0x3FE40Cu) {
        ctx->pc = 0x3FE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE408u;
        // 0x3fe40c: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE410u;
        goto label_3fe410;
    }
    ctx->pc = 0x3FE408u;
    SET_GPR_U32(ctx, 31, 0x3FE410u);
    ctx->pc = 0x3FE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE408u;
    // 0x3fe40c: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5C18u, 0x3FE408u, 0x3FE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE410u;
label_3fe410:
    // 0x3fe410: 0x1620ffcb  bnez        $s1, . + 4 + (-0x35 << 2)
label_3fe414:
    if (ctx->pc == 0x3FE414u) {
        ctx->pc = 0x3FE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE410u;
        // 0x3fe414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE418u;
        goto label_3fe418;
    }
    ctx->pc = 0x3FE410u;
    {
        const bool branch_taken_0x3fe410 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE410u;
        // 0x3fe414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe410) {
            ctx->pc = 0x3FE340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe340;
        }
    }
    ctx->pc = 0x3FE418u;
label_3fe418:
    // 0x3fe418: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x3fe418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3fe41c:
    // 0x3fe41c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3fe41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3fe420:
    // 0x3fe420: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3fe424:
    if (ctx->pc == 0x3FE424u) {
        ctx->pc = 0x3FE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE420u;
        // 0x3fe424: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE428u;
        goto label_3fe428;
    }
    ctx->pc = 0x3FE420u;
    {
        const bool branch_taken_0x3fe420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE420u;
        // 0x3fe424: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe420) {
            ctx->pc = 0x3FE430u;
            goto label_3fe430;
        }
    }
    ctx->pc = 0x3FE428u;
label_3fe428:
    // 0x3fe428: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3fe428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3fe42c:
    // 0x3fe42c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3fe42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_3fe430:
    // 0x3fe430: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x3fe430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3fe434:
    // 0x3fe434: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x3fe434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3fe438:
    // 0x3fe438: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x3fe438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3fe43c:
    // 0x3fe43c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x3fe43cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3fe440:
    // 0x3fe440: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x3fe440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3fe444:
    // 0x3fe444: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x3fe444u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3fe448:
    // 0x3fe448: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x3fe448u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3fe44c:
    // 0x3fe44c: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x3fe44cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3fe450:
    // 0x3fe450: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x3fe450u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3fe454:
    // 0x3fe454: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x3fe454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3fe458:
    // 0x3fe458: 0xc7be01d0  lwc1        $f30, 0x1D0($sp)
    ctx->pc = 0x3fe458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3fe45c:
    // 0x3fe45c: 0xc7bd01c8  lwc1        $f29, 0x1C8($sp)
    ctx->pc = 0x3fe45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3fe460:
    // 0x3fe460: 0xc7bc01c0  lwc1        $f28, 0x1C0($sp)
    ctx->pc = 0x3fe460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3fe464:
    // 0x3fe464: 0xc7bb01b8  lwc1        $f27, 0x1B8($sp)
    ctx->pc = 0x3fe464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3fe468:
    // 0x3fe468: 0xc7ba01b0  lwc1        $f26, 0x1B0($sp)
    ctx->pc = 0x3fe468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3fe46c:
    // 0x3fe46c: 0xc7b901a8  lwc1        $f25, 0x1A8($sp)
    ctx->pc = 0x3fe46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3fe470:
    // 0x3fe470: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x3fe470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3fe474:
    // 0x3fe474: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x3fe474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3fe478:
    // 0x3fe478: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x3fe478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3fe47c:
    // 0x3fe47c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x3fe47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3fe480:
    // 0x3fe480: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x3fe480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fe484:
    // 0x3fe484: 0x3e00008  jr          $ra
label_3fe488:
    if (ctx->pc == 0x3FE488u) {
        ctx->pc = 0x3FE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE484u;
        // 0x3fe488: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE48Cu;
        goto label_3fe48c;
    }
    ctx->pc = 0x3FE484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE484u;
        // 0x3fe488: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE48Cu;
label_3fe48c:
    // 0x3fe48c: 0x0  nop
    ctx->pc = 0x3fe48cu;
    // NOP
    ctx->pc = 0x3fe490u;
}
