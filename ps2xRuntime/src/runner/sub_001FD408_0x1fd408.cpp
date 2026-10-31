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

// Function: sub_001FD408
// Address: 0x1fd408 - 0x1fdaf8
void sub_001FD408_0x1fd408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD408_0x1fd408");
#endif

    switch (ctx->pc) {
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd40cu: goto label_1fd40c;
        case 0x1fd410u: goto label_1fd410;
        case 0x1fd414u: goto label_1fd414;
        case 0x1fd418u: goto label_1fd418;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd420u: goto label_1fd420;
        case 0x1fd424u: goto label_1fd424;
        case 0x1fd428u: goto label_1fd428;
        case 0x1fd42cu: goto label_1fd42c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd434u: goto label_1fd434;
        case 0x1fd438u: goto label_1fd438;
        case 0x1fd43cu: goto label_1fd43c;
        case 0x1fd440u: goto label_1fd440;
        case 0x1fd444u: goto label_1fd444;
        case 0x1fd448u: goto label_1fd448;
        case 0x1fd44cu: goto label_1fd44c;
        case 0x1fd450u: goto label_1fd450;
        case 0x1fd454u: goto label_1fd454;
        case 0x1fd458u: goto label_1fd458;
        case 0x1fd45cu: goto label_1fd45c;
        case 0x1fd460u: goto label_1fd460;
        case 0x1fd464u: goto label_1fd464;
        case 0x1fd468u: goto label_1fd468;
        case 0x1fd46cu: goto label_1fd46c;
        case 0x1fd470u: goto label_1fd470;
        case 0x1fd474u: goto label_1fd474;
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd47cu: goto label_1fd47c;
        case 0x1fd480u: goto label_1fd480;
        case 0x1fd484u: goto label_1fd484;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd48cu: goto label_1fd48c;
        case 0x1fd490u: goto label_1fd490;
        case 0x1fd494u: goto label_1fd494;
        case 0x1fd498u: goto label_1fd498;
        case 0x1fd49cu: goto label_1fd49c;
        case 0x1fd4a0u: goto label_1fd4a0;
        case 0x1fd4a4u: goto label_1fd4a4;
        case 0x1fd4a8u: goto label_1fd4a8;
        case 0x1fd4acu: goto label_1fd4ac;
        case 0x1fd4b0u: goto label_1fd4b0;
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4b8u: goto label_1fd4b8;
        case 0x1fd4bcu: goto label_1fd4bc;
        case 0x1fd4c0u: goto label_1fd4c0;
        case 0x1fd4c4u: goto label_1fd4c4;
        case 0x1fd4c8u: goto label_1fd4c8;
        case 0x1fd4ccu: goto label_1fd4cc;
        case 0x1fd4d0u: goto label_1fd4d0;
        case 0x1fd4d4u: goto label_1fd4d4;
        case 0x1fd4d8u: goto label_1fd4d8;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e0u: goto label_1fd4e0;
        case 0x1fd4e4u: goto label_1fd4e4;
        case 0x1fd4e8u: goto label_1fd4e8;
        case 0x1fd4ecu: goto label_1fd4ec;
        case 0x1fd4f0u: goto label_1fd4f0;
        case 0x1fd4f4u: goto label_1fd4f4;
        case 0x1fd4f8u: goto label_1fd4f8;
        case 0x1fd4fcu: goto label_1fd4fc;
        case 0x1fd500u: goto label_1fd500;
        case 0x1fd504u: goto label_1fd504;
        case 0x1fd508u: goto label_1fd508;
        case 0x1fd50cu: goto label_1fd50c;
        case 0x1fd510u: goto label_1fd510;
        case 0x1fd514u: goto label_1fd514;
        case 0x1fd518u: goto label_1fd518;
        case 0x1fd51cu: goto label_1fd51c;
        case 0x1fd520u: goto label_1fd520;
        case 0x1fd524u: goto label_1fd524;
        case 0x1fd528u: goto label_1fd528;
        case 0x1fd52cu: goto label_1fd52c;
        case 0x1fd530u: goto label_1fd530;
        case 0x1fd534u: goto label_1fd534;
        case 0x1fd538u: goto label_1fd538;
        case 0x1fd53cu: goto label_1fd53c;
        case 0x1fd540u: goto label_1fd540;
        case 0x1fd544u: goto label_1fd544;
        case 0x1fd548u: goto label_1fd548;
        case 0x1fd54cu: goto label_1fd54c;
        case 0x1fd550u: goto label_1fd550;
        case 0x1fd554u: goto label_1fd554;
        case 0x1fd558u: goto label_1fd558;
        case 0x1fd55cu: goto label_1fd55c;
        case 0x1fd560u: goto label_1fd560;
        case 0x1fd564u: goto label_1fd564;
        case 0x1fd568u: goto label_1fd568;
        case 0x1fd56cu: goto label_1fd56c;
        case 0x1fd570u: goto label_1fd570;
        case 0x1fd574u: goto label_1fd574;
        case 0x1fd578u: goto label_1fd578;
        case 0x1fd57cu: goto label_1fd57c;
        case 0x1fd580u: goto label_1fd580;
        case 0x1fd584u: goto label_1fd584;
        case 0x1fd588u: goto label_1fd588;
        case 0x1fd58cu: goto label_1fd58c;
        case 0x1fd590u: goto label_1fd590;
        case 0x1fd594u: goto label_1fd594;
        case 0x1fd598u: goto label_1fd598;
        case 0x1fd59cu: goto label_1fd59c;
        case 0x1fd5a0u: goto label_1fd5a0;
        case 0x1fd5a4u: goto label_1fd5a4;
        case 0x1fd5a8u: goto label_1fd5a8;
        case 0x1fd5acu: goto label_1fd5ac;
        case 0x1fd5b0u: goto label_1fd5b0;
        case 0x1fd5b4u: goto label_1fd5b4;
        case 0x1fd5b8u: goto label_1fd5b8;
        case 0x1fd5bcu: goto label_1fd5bc;
        case 0x1fd5c0u: goto label_1fd5c0;
        case 0x1fd5c4u: goto label_1fd5c4;
        case 0x1fd5c8u: goto label_1fd5c8;
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5d0u: goto label_1fd5d0;
        case 0x1fd5d4u: goto label_1fd5d4;
        case 0x1fd5d8u: goto label_1fd5d8;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd5e0u: goto label_1fd5e0;
        case 0x1fd5e4u: goto label_1fd5e4;
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd5ecu: goto label_1fd5ec;
        case 0x1fd5f0u: goto label_1fd5f0;
        case 0x1fd5f4u: goto label_1fd5f4;
        case 0x1fd5f8u: goto label_1fd5f8;
        case 0x1fd5fcu: goto label_1fd5fc;
        case 0x1fd600u: goto label_1fd600;
        case 0x1fd604u: goto label_1fd604;
        case 0x1fd608u: goto label_1fd608;
        case 0x1fd60cu: goto label_1fd60c;
        case 0x1fd610u: goto label_1fd610;
        case 0x1fd614u: goto label_1fd614;
        case 0x1fd618u: goto label_1fd618;
        case 0x1fd61cu: goto label_1fd61c;
        case 0x1fd620u: goto label_1fd620;
        case 0x1fd624u: goto label_1fd624;
        case 0x1fd628u: goto label_1fd628;
        case 0x1fd62cu: goto label_1fd62c;
        case 0x1fd630u: goto label_1fd630;
        case 0x1fd634u: goto label_1fd634;
        case 0x1fd638u: goto label_1fd638;
        case 0x1fd63cu: goto label_1fd63c;
        case 0x1fd640u: goto label_1fd640;
        case 0x1fd644u: goto label_1fd644;
        case 0x1fd648u: goto label_1fd648;
        case 0x1fd64cu: goto label_1fd64c;
        case 0x1fd650u: goto label_1fd650;
        case 0x1fd654u: goto label_1fd654;
        case 0x1fd658u: goto label_1fd658;
        case 0x1fd65cu: goto label_1fd65c;
        case 0x1fd660u: goto label_1fd660;
        case 0x1fd664u: goto label_1fd664;
        case 0x1fd668u: goto label_1fd668;
        case 0x1fd66cu: goto label_1fd66c;
        case 0x1fd670u: goto label_1fd670;
        case 0x1fd674u: goto label_1fd674;
        case 0x1fd678u: goto label_1fd678;
        case 0x1fd67cu: goto label_1fd67c;
        case 0x1fd680u: goto label_1fd680;
        case 0x1fd684u: goto label_1fd684;
        case 0x1fd688u: goto label_1fd688;
        case 0x1fd68cu: goto label_1fd68c;
        case 0x1fd690u: goto label_1fd690;
        case 0x1fd694u: goto label_1fd694;
        case 0x1fd698u: goto label_1fd698;
        case 0x1fd69cu: goto label_1fd69c;
        case 0x1fd6a0u: goto label_1fd6a0;
        case 0x1fd6a4u: goto label_1fd6a4;
        case 0x1fd6a8u: goto label_1fd6a8;
        case 0x1fd6acu: goto label_1fd6ac;
        case 0x1fd6b0u: goto label_1fd6b0;
        case 0x1fd6b4u: goto label_1fd6b4;
        case 0x1fd6b8u: goto label_1fd6b8;
        case 0x1fd6bcu: goto label_1fd6bc;
        case 0x1fd6c0u: goto label_1fd6c0;
        case 0x1fd6c4u: goto label_1fd6c4;
        case 0x1fd6c8u: goto label_1fd6c8;
        case 0x1fd6ccu: goto label_1fd6cc;
        case 0x1fd6d0u: goto label_1fd6d0;
        case 0x1fd6d4u: goto label_1fd6d4;
        case 0x1fd6d8u: goto label_1fd6d8;
        case 0x1fd6dcu: goto label_1fd6dc;
        case 0x1fd6e0u: goto label_1fd6e0;
        case 0x1fd6e4u: goto label_1fd6e4;
        case 0x1fd6e8u: goto label_1fd6e8;
        case 0x1fd6ecu: goto label_1fd6ec;
        case 0x1fd6f0u: goto label_1fd6f0;
        case 0x1fd6f4u: goto label_1fd6f4;
        case 0x1fd6f8u: goto label_1fd6f8;
        case 0x1fd6fcu: goto label_1fd6fc;
        case 0x1fd700u: goto label_1fd700;
        case 0x1fd704u: goto label_1fd704;
        case 0x1fd708u: goto label_1fd708;
        case 0x1fd70cu: goto label_1fd70c;
        case 0x1fd710u: goto label_1fd710;
        case 0x1fd714u: goto label_1fd714;
        case 0x1fd718u: goto label_1fd718;
        case 0x1fd71cu: goto label_1fd71c;
        case 0x1fd720u: goto label_1fd720;
        case 0x1fd724u: goto label_1fd724;
        case 0x1fd728u: goto label_1fd728;
        case 0x1fd72cu: goto label_1fd72c;
        case 0x1fd730u: goto label_1fd730;
        case 0x1fd734u: goto label_1fd734;
        case 0x1fd738u: goto label_1fd738;
        case 0x1fd73cu: goto label_1fd73c;
        case 0x1fd740u: goto label_1fd740;
        case 0x1fd744u: goto label_1fd744;
        case 0x1fd748u: goto label_1fd748;
        case 0x1fd74cu: goto label_1fd74c;
        case 0x1fd750u: goto label_1fd750;
        case 0x1fd754u: goto label_1fd754;
        case 0x1fd758u: goto label_1fd758;
        case 0x1fd75cu: goto label_1fd75c;
        case 0x1fd760u: goto label_1fd760;
        case 0x1fd764u: goto label_1fd764;
        case 0x1fd768u: goto label_1fd768;
        case 0x1fd76cu: goto label_1fd76c;
        case 0x1fd770u: goto label_1fd770;
        case 0x1fd774u: goto label_1fd774;
        case 0x1fd778u: goto label_1fd778;
        case 0x1fd77cu: goto label_1fd77c;
        case 0x1fd780u: goto label_1fd780;
        case 0x1fd784u: goto label_1fd784;
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd78cu: goto label_1fd78c;
        case 0x1fd790u: goto label_1fd790;
        case 0x1fd794u: goto label_1fd794;
        case 0x1fd798u: goto label_1fd798;
        case 0x1fd79cu: goto label_1fd79c;
        case 0x1fd7a0u: goto label_1fd7a0;
        case 0x1fd7a4u: goto label_1fd7a4;
        case 0x1fd7a8u: goto label_1fd7a8;
        case 0x1fd7acu: goto label_1fd7ac;
        case 0x1fd7b0u: goto label_1fd7b0;
        case 0x1fd7b4u: goto label_1fd7b4;
        case 0x1fd7b8u: goto label_1fd7b8;
        case 0x1fd7bcu: goto label_1fd7bc;
        case 0x1fd7c0u: goto label_1fd7c0;
        case 0x1fd7c4u: goto label_1fd7c4;
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd7ccu: goto label_1fd7cc;
        case 0x1fd7d0u: goto label_1fd7d0;
        case 0x1fd7d4u: goto label_1fd7d4;
        case 0x1fd7d8u: goto label_1fd7d8;
        case 0x1fd7dcu: goto label_1fd7dc;
        case 0x1fd7e0u: goto label_1fd7e0;
        case 0x1fd7e4u: goto label_1fd7e4;
        case 0x1fd7e8u: goto label_1fd7e8;
        case 0x1fd7ecu: goto label_1fd7ec;
        case 0x1fd7f0u: goto label_1fd7f0;
        case 0x1fd7f4u: goto label_1fd7f4;
        case 0x1fd7f8u: goto label_1fd7f8;
        case 0x1fd7fcu: goto label_1fd7fc;
        case 0x1fd800u: goto label_1fd800;
        case 0x1fd804u: goto label_1fd804;
        case 0x1fd808u: goto label_1fd808;
        case 0x1fd80cu: goto label_1fd80c;
        case 0x1fd810u: goto label_1fd810;
        case 0x1fd814u: goto label_1fd814;
        case 0x1fd818u: goto label_1fd818;
        case 0x1fd81cu: goto label_1fd81c;
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd824u: goto label_1fd824;
        case 0x1fd828u: goto label_1fd828;
        case 0x1fd82cu: goto label_1fd82c;
        case 0x1fd830u: goto label_1fd830;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd840u: goto label_1fd840;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd850u: goto label_1fd850;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd864u: goto label_1fd864;
        case 0x1fd868u: goto label_1fd868;
        case 0x1fd86cu: goto label_1fd86c;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd874u: goto label_1fd874;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd87cu: goto label_1fd87c;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd884u: goto label_1fd884;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd88cu: goto label_1fd88c;
        case 0x1fd890u: goto label_1fd890;
        case 0x1fd894u: goto label_1fd894;
        case 0x1fd898u: goto label_1fd898;
        case 0x1fd89cu: goto label_1fd89c;
        case 0x1fd8a0u: goto label_1fd8a0;
        case 0x1fd8a4u: goto label_1fd8a4;
        case 0x1fd8a8u: goto label_1fd8a8;
        case 0x1fd8acu: goto label_1fd8ac;
        case 0x1fd8b0u: goto label_1fd8b0;
        case 0x1fd8b4u: goto label_1fd8b4;
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8bcu: goto label_1fd8bc;
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd8d0u: goto label_1fd8d0;
        case 0x1fd8d4u: goto label_1fd8d4;
        case 0x1fd8d8u: goto label_1fd8d8;
        case 0x1fd8dcu: goto label_1fd8dc;
        case 0x1fd8e0u: goto label_1fd8e0;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f0u: goto label_1fd8f0;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd8f8u: goto label_1fd8f8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd900u: goto label_1fd900;
        case 0x1fd904u: goto label_1fd904;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd914u: goto label_1fd914;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd91cu: goto label_1fd91c;
        case 0x1fd920u: goto label_1fd920;
        case 0x1fd924u: goto label_1fd924;
        case 0x1fd928u: goto label_1fd928;
        case 0x1fd92cu: goto label_1fd92c;
        case 0x1fd930u: goto label_1fd930;
        case 0x1fd934u: goto label_1fd934;
        case 0x1fd938u: goto label_1fd938;
        case 0x1fd93cu: goto label_1fd93c;
        case 0x1fd940u: goto label_1fd940;
        case 0x1fd944u: goto label_1fd944;
        case 0x1fd948u: goto label_1fd948;
        case 0x1fd94cu: goto label_1fd94c;
        case 0x1fd950u: goto label_1fd950;
        case 0x1fd954u: goto label_1fd954;
        case 0x1fd958u: goto label_1fd958;
        case 0x1fd95cu: goto label_1fd95c;
        case 0x1fd960u: goto label_1fd960;
        case 0x1fd964u: goto label_1fd964;
        case 0x1fd968u: goto label_1fd968;
        case 0x1fd96cu: goto label_1fd96c;
        case 0x1fd970u: goto label_1fd970;
        case 0x1fd974u: goto label_1fd974;
        case 0x1fd978u: goto label_1fd978;
        case 0x1fd97cu: goto label_1fd97c;
        case 0x1fd980u: goto label_1fd980;
        case 0x1fd984u: goto label_1fd984;
        case 0x1fd988u: goto label_1fd988;
        case 0x1fd98cu: goto label_1fd98c;
        case 0x1fd990u: goto label_1fd990;
        case 0x1fd994u: goto label_1fd994;
        case 0x1fd998u: goto label_1fd998;
        case 0x1fd99cu: goto label_1fd99c;
        case 0x1fd9a0u: goto label_1fd9a0;
        case 0x1fd9a4u: goto label_1fd9a4;
        case 0x1fd9a8u: goto label_1fd9a8;
        case 0x1fd9acu: goto label_1fd9ac;
        case 0x1fd9b0u: goto label_1fd9b0;
        case 0x1fd9b4u: goto label_1fd9b4;
        case 0x1fd9b8u: goto label_1fd9b8;
        case 0x1fd9bcu: goto label_1fd9bc;
        case 0x1fd9c0u: goto label_1fd9c0;
        case 0x1fd9c4u: goto label_1fd9c4;
        case 0x1fd9c8u: goto label_1fd9c8;
        case 0x1fd9ccu: goto label_1fd9cc;
        case 0x1fd9d0u: goto label_1fd9d0;
        case 0x1fd9d4u: goto label_1fd9d4;
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fd9dcu: goto label_1fd9dc;
        case 0x1fd9e0u: goto label_1fd9e0;
        case 0x1fd9e4u: goto label_1fd9e4;
        case 0x1fd9e8u: goto label_1fd9e8;
        case 0x1fd9ecu: goto label_1fd9ec;
        case 0x1fd9f0u: goto label_1fd9f0;
        case 0x1fd9f4u: goto label_1fd9f4;
        case 0x1fd9f8u: goto label_1fd9f8;
        case 0x1fd9fcu: goto label_1fd9fc;
        case 0x1fda00u: goto label_1fda00;
        case 0x1fda04u: goto label_1fda04;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda0cu: goto label_1fda0c;
        case 0x1fda10u: goto label_1fda10;
        case 0x1fda14u: goto label_1fda14;
        case 0x1fda18u: goto label_1fda18;
        case 0x1fda1cu: goto label_1fda1c;
        case 0x1fda20u: goto label_1fda20;
        case 0x1fda24u: goto label_1fda24;
        case 0x1fda28u: goto label_1fda28;
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda30u: goto label_1fda30;
        case 0x1fda34u: goto label_1fda34;
        case 0x1fda38u: goto label_1fda38;
        case 0x1fda3cu: goto label_1fda3c;
        case 0x1fda40u: goto label_1fda40;
        case 0x1fda44u: goto label_1fda44;
        case 0x1fda48u: goto label_1fda48;
        case 0x1fda4cu: goto label_1fda4c;
        case 0x1fda50u: goto label_1fda50;
        case 0x1fda54u: goto label_1fda54;
        case 0x1fda58u: goto label_1fda58;
        case 0x1fda5cu: goto label_1fda5c;
        case 0x1fda60u: goto label_1fda60;
        case 0x1fda64u: goto label_1fda64;
        case 0x1fda68u: goto label_1fda68;
        case 0x1fda6cu: goto label_1fda6c;
        case 0x1fda70u: goto label_1fda70;
        case 0x1fda74u: goto label_1fda74;
        case 0x1fda78u: goto label_1fda78;
        case 0x1fda7cu: goto label_1fda7c;
        case 0x1fda80u: goto label_1fda80;
        case 0x1fda84u: goto label_1fda84;
        case 0x1fda88u: goto label_1fda88;
        case 0x1fda8cu: goto label_1fda8c;
        case 0x1fda90u: goto label_1fda90;
        case 0x1fda94u: goto label_1fda94;
        case 0x1fda98u: goto label_1fda98;
        case 0x1fda9cu: goto label_1fda9c;
        case 0x1fdaa0u: goto label_1fdaa0;
        case 0x1fdaa4u: goto label_1fdaa4;
        case 0x1fdaa8u: goto label_1fdaa8;
        case 0x1fdaacu: goto label_1fdaac;
        case 0x1fdab0u: goto label_1fdab0;
        case 0x1fdab4u: goto label_1fdab4;
        case 0x1fdab8u: goto label_1fdab8;
        case 0x1fdabcu: goto label_1fdabc;
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdac8u: goto label_1fdac8;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdad0u: goto label_1fdad0;
        case 0x1fdad4u: goto label_1fdad4;
        case 0x1fdad8u: goto label_1fdad8;
        case 0x1fdadcu: goto label_1fdadc;
        case 0x1fdae0u: goto label_1fdae0;
        case 0x1fdae4u: goto label_1fdae4;
        case 0x1fdae8u: goto label_1fdae8;
        case 0x1fdaecu: goto label_1fdaec;
        case 0x1fdaf0u: goto label_1fdaf0;
        case 0x1fdaf4u: goto label_1fdaf4;
        default: break;
    }

    ctx->pc = 0x1fd408u;

label_1fd408:
    // 0x1fd408: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fd408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1fd40c:
    // 0x1fd40c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd410:
    // 0x1fd410: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fd410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1fd414:
    // 0x1fd414: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fd414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd418:
    // 0x1fd418: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fd418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1fd41c:
    // 0x1fd41c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fd41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fd420:
    // 0x1fd420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fd424:
    // 0x1fd424: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1fd424u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1fd428:
    // 0x1fd428: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1fd428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1fd42c:
    // 0x1fd42c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fd430:
    // 0x1fd430: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fd430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fd434:
    // 0x1fd434: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fd434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fd438:
    // 0x1fd438: 0x40f809  jalr        $v0
label_1fd43c:
    if (ctx->pc == 0x1FD43Cu) {
        ctx->pc = 0x1FD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD438u;
        // 0x1fd43c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD440u;
        goto label_1fd440;
    }
    ctx->pc = 0x1FD438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD440u);
        ctx->pc = 0x1FD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD438u;
        // 0x1fd43c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD438u, 0x1FD440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD440u;
label_1fd440:
    // 0x1fd440: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
label_1fd444:
    if (ctx->pc == 0x1FD444u) {
        ctx->pc = 0x1FD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD440u;
        // 0x1fd444: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD448u;
        goto label_1fd448;
    }
    ctx->pc = 0x1FD440u;
    {
        const bool branch_taken_0x1fd440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD440u;
        // 0x1fd444: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd440) {
            ctx->pc = 0x1FDAD8u;
            goto label_1fdad8;
        }
    }
    ctx->pc = 0x1FD448u;
label_1fd448:
    // 0x1fd448: 0xc07f88a  jal         func_1FE228
label_1fd44c:
    if (ctx->pc == 0x1FD44Cu) {
        ctx->pc = 0x1FD450u;
        goto label_1fd450;
    }
    ctx->pc = 0x1FD448u;
    SET_GPR_U32(ctx, 31, 0x1FD450u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1FD448u, 0x1FD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD450u;
label_1fd450:
    // 0x1fd450: 0x144001a1  bnez        $v0, . + 4 + (0x1A1 << 2)
label_1fd454:
    if (ctx->pc == 0x1FD454u) {
        ctx->pc = 0x1FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD450u;
        // 0x1fd454: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD458u;
        goto label_1fd458;
    }
    ctx->pc = 0x1FD450u;
    {
        const bool branch_taken_0x1fd450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD450u;
        // 0x1fd454: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd450) {
            ctx->pc = 0x1FDAD8u;
            goto label_1fdad8;
        }
    }
    ctx->pc = 0x1FD458u;
label_1fd458:
    // 0x1fd458: 0xc0750fa  jal         func_1D43E8
label_1fd45c:
    if (ctx->pc == 0x1FD45Cu) {
        ctx->pc = 0x1FD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD458u;
        // 0x1fd45c: 0x8e6400bc  lw          $a0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD460u;
        goto label_1fd460;
    }
    ctx->pc = 0x1FD458u;
    SET_GPR_U32(ctx, 31, 0x1FD460u);
    ctx->pc = 0x1FD45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD458u;
    // 0x1fd45c: 0x8e6400bc  lw          $a0, 0xBC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1FD458u, 0x1FD460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD460u;
label_1fd460:
    // 0x1fd460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd464:
    // 0x1fd464: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1fd464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fd468:
    // 0x1fd468: 0xc0750fc  jal         func_1D43F0
label_1fd46c:
    if (ctx->pc == 0x1FD46Cu) {
        ctx->pc = 0x1FD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD468u;
        // 0x1fd46c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD470u;
        goto label_1fd470;
    }
    ctx->pc = 0x1FD468u;
    SET_GPR_U32(ctx, 31, 0x1FD470u);
    ctx->pc = 0x1FD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD468u;
    // 0x1fd46c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x1FD468u, 0x1FD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD470u;
label_1fd470:
    // 0x1fd470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd474:
    // 0x1fd474: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x1fd474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1fd478:
    // 0x1fd478: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1fd47c:
    if (ctx->pc == 0x1FD47Cu) {
        ctx->pc = 0x1FD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD478u;
        // 0x1fd47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD480u;
        goto label_1fd480;
    }
    ctx->pc = 0x1FD478u;
    {
        const bool branch_taken_0x1fd478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD478u;
        // 0x1fd47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd478) {
            ctx->pc = 0x1FD49Cu;
            goto label_1fd49c;
        }
    }
    ctx->pc = 0x1FD480u;
label_1fd480:
    // 0x1fd480: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x1fd480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_1fd484:
    // 0x1fd484: 0x8e6600c0  lw          $a2, 0xC0($s3)
    ctx->pc = 0x1fd484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1fd488:
    // 0x1fd488: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd48c:
    // 0x1fd48c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd490:
    // 0x1fd490: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd494:
    // 0x1fd494: 0x60f809  jalr        $v1
label_1fd498:
    if (ctx->pc == 0x1FD498u) {
        ctx->pc = 0x1FD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD494u;
        // 0x1fd498: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD49Cu;
        goto label_1fd49c;
    }
    ctx->pc = 0x1FD494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD49Cu);
        ctx->pc = 0x1FD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD494u;
        // 0x1fd498: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD494u, 0x1FD49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD49Cu;
label_1fd49c:
    // 0x1fd49c: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1fd4a0:
    // 0x1fd4a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1fd4a4:
    if (ctx->pc == 0x1FD4A4u) {
        ctx->pc = 0x1FD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4A0u;
        // 0x1fd4a4: 0xae7000a0  sw          $s0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4A8u;
        goto label_1fd4a8;
    }
    ctx->pc = 0x1FD4A0u;
    {
        const bool branch_taken_0x1fd4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4A0u;
        // 0x1fd4a4: 0xae7000a0  sw          $s0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4a0) {
            ctx->pc = 0x1FD508u;
            goto label_1fd508;
        }
    }
    ctx->pc = 0x1FD4A8u;
label_1fd4a8:
    // 0x1fd4a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1fd4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1fd4ac:
    // 0x1fd4ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd4b0:
    // 0x1fd4b0: 0xc06ba26  jal         func_1AE898
label_1fd4b4:
    if (ctx->pc == 0x1FD4B4u) {
        ctx->pc = 0x1FD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4B0u;
        // 0x1fd4b4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4B8u;
        goto label_1fd4b8;
    }
    ctx->pc = 0x1FD4B0u;
    SET_GPR_U32(ctx, 31, 0x1FD4B8u);
    ctx->pc = 0x1FD4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4B0u;
    // 0x1fd4b4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1FD4B0u, 0x1FD4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4B8u;
label_1fd4b8:
    // 0x1fd4b8: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x1fd4b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_1fd4bc:
    // 0x1fd4bc: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
label_1fd4c0:
    if (ctx->pc == 0x1FD4C0u) {
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4C4u;
        goto label_1fd4c4;
    }
    ctx->pc = 0x1FD4BCu;
    {
        const bool branch_taken_0x1fd4bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4bc) {
            ctx->pc = 0x1FD508u;
            goto label_1fd508;
        }
    }
    ctx->pc = 0x1FD4C4u;
label_1fd4c4:
    // 0x1fd4c4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1fd4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1fd4c8:
    // 0x1fd4c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1fd4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1fd4cc:
    // 0x1fd4cc: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x1fd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
label_1fd4d0:
    // 0x1fd4d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4d4:
    // 0x1fd4d4: 0xc0512b4  jal         func_144AD0
label_1fd4d8:
    if (ctx->pc == 0x1FD4D8u) {
        ctx->pc = 0x1FD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4D4u;
        // 0x1fd4d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4DCu;
        goto label_1fd4dc;
    }
    ctx->pc = 0x1FD4D4u;
    SET_GPR_U32(ctx, 31, 0x1FD4DCu);
    ctx->pc = 0x1FD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4D4u;
    // 0x1fd4d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144AD0u, 0x1FD4D4u, 0x1FD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4DCu;
label_1fd4dc:
    // 0x1fd4dc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1fd4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1fd4e0:
    // 0x1fd4e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fd4e4:
    if (ctx->pc == 0x1FD4E4u) {
        ctx->pc = 0x1FD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4E0u;
        // 0x1fd4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4E8u;
        goto label_1fd4e8;
    }
    ctx->pc = 0x1FD4E0u;
    {
        const bool branch_taken_0x1fd4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4E0u;
        // 0x1fd4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4e0) {
            ctx->pc = 0x1FD508u;
            goto label_1fd508;
        }
    }
    ctx->pc = 0x1FD4E8u;
label_1fd4e8:
    // 0x1fd4e8: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x1fd4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_1fd4ec:
    // 0x1fd4ec: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x1fd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
label_1fd4f0:
    // 0x1fd4f0: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1fd4f4:
    // 0x1fd4f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fd4f8:
    // 0x1fd4f8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1fd4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1fd4fc:
    // 0x1fd4fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fd500:
    // 0x1fd500: 0x40f809  jalr        $v0
label_1fd504:
    if (ctx->pc == 0x1FD504u) {
        ctx->pc = 0x1FD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD500u;
        // 0x1fd504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD508u;
        goto label_1fd508;
    }
    ctx->pc = 0x1FD500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD508u);
        ctx->pc = 0x1FD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD500u;
        // 0x1fd504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD500u, 0x1FD508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD508u;
label_1fd508:
    // 0x1fd508: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fd50c:
    // 0x1fd50c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fd50cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1fd510:
    // 0x1fd510: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd514:
    // 0x1fd514: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fd514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fd518:
    // 0x1fd518: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fd51c:
    // 0x1fd51c: 0x60f809  jalr        $v1
label_1fd520:
    if (ctx->pc == 0x1FD520u) {
        ctx->pc = 0x1FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD51Cu;
        // 0x1fd520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD524u;
        goto label_1fd524;
    }
    ctx->pc = 0x1FD51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD524u);
        ctx->pc = 0x1FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD51Cu;
        // 0x1fd520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD51Cu, 0x1FD524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD524u;
label_1fd524:
    // 0x1fd524: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1fd528:
    // 0x1fd528: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fd528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd52c:
    // 0x1fd52c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fd52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fd530:
    // 0x1fd530: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fd530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fd534:
    // 0x1fd534: 0x40f809  jalr        $v0
label_1fd538:
    if (ctx->pc == 0x1FD538u) {
        ctx->pc = 0x1FD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD534u;
        // 0x1fd538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD53Cu;
        goto label_1fd53c;
    }
    ctx->pc = 0x1FD534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD53Cu);
        ctx->pc = 0x1FD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD534u;
        // 0x1fd538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD534u, 0x1FD53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD53Cu;
label_1fd53c:
    // 0x1fd53c: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x1fd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1fd540:
    // 0x1fd540: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x1fd540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1fd544:
    // 0x1fd544: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x1fd544u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fd548:
    // 0x1fd548: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1fd548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fd54c:
    // 0x1fd54c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1fd550:
    if (ctx->pc == 0x1FD550u) {
        ctx->pc = 0x1FD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD54Cu;
        // 0x1fd550: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD554u;
        goto label_1fd554;
    }
    ctx->pc = 0x1FD54Cu;
    {
        const bool branch_taken_0x1fd54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD54Cu;
        // 0x1fd550: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd54c) {
            ctx->pc = 0x1FD584u;
            goto label_1fd584;
        }
    }
    ctx->pc = 0x1FD554u;
label_1fd554:
    // 0x1fd554: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1fd558:
    // 0x1fd558: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fd558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd55c:
    // 0x1fd55c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fd55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fd560:
    // 0x1fd560: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fd564:
    // 0x1fd564: 0x40f809  jalr        $v0
label_1fd568:
    if (ctx->pc == 0x1FD568u) {
        ctx->pc = 0x1FD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD564u;
        // 0x1fd568: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD56Cu;
        goto label_1fd56c;
    }
    ctx->pc = 0x1FD564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD56Cu);
        ctx->pc = 0x1FD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD564u;
        // 0x1fd568: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD564u, 0x1FD56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD56Cu;
label_1fd56c:
    // 0x1fd56c: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x1fd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_1fd570:
    // 0x1fd570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd574:
    // 0x1fd574: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x1fd574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_1fd578:
    // 0x1fd578: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1fd578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1fd57c:
    // 0x1fd57c: 0xae630098  sw          $v1, 0x98($s3)
    ctx->pc = 0x1fd57cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
label_1fd580:
    // 0x1fd580: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1fd580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fd584:
    // 0x1fd584: 0x8e640098  lw          $a0, 0x98($s3)
    ctx->pc = 0x1fd584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_1fd588:
    // 0x1fd588: 0x8c43d310  lw          $v1, -0x2CF0($v0)
    ctx->pc = 0x1fd588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1fd58c:
    // 0x1fd58c: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1fd590:
    if (ctx->pc == 0x1FD590u) {
        ctx->pc = 0x1FD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD58Cu;
        // 0x1fd590: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD594u;
        goto label_1fd594;
    }
    ctx->pc = 0x1FD58Cu;
    {
        const bool branch_taken_0x1fd58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD58Cu;
        // 0x1fd590: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd58c) {
            ctx->pc = 0x1FD614u;
            goto label_1fd614;
        }
    }
    ctx->pc = 0x1FD594u;
label_1fd594:
    // 0x1fd594: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1fd598:
    if (ctx->pc == 0x1FD598u) {
        ctx->pc = 0x1FD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD594u;
        // 0x1fd598: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD59Cu;
        goto label_1fd59c;
    }
    ctx->pc = 0x1FD594u;
    {
        const bool branch_taken_0x1fd594 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD594u;
        // 0x1fd598: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd594) {
            ctx->pc = 0x1FD5B0u;
            goto label_1fd5b0;
        }
    }
    ctx->pc = 0x1FD59Cu;
label_1fd59c:
    // 0x1fd59c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1fd59cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd5a0:
    // 0x1fd5a0: 0x0  nop
    ctx->pc = 0x1fd5a0u;
    // NOP
label_1fd5a4:
    // 0x1fd5a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fd5a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fd5a8:
    // 0x1fd5a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fd5ac:
    if (ctx->pc == 0x1FD5ACu) {
        ctx->pc = 0x1FD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A8u;
        // 0x1fd5ac: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5B0u;
        goto label_1fd5b0;
    }
    ctx->pc = 0x1FD5A8u;
    {
        const bool branch_taken_0x1fd5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A8u;
        // 0x1fd5ac: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5a8) {
            ctx->pc = 0x1FD5CCu;
            goto label_1fd5cc;
        }
    }
    ctx->pc = 0x1FD5B0u;
label_1fd5b0:
    // 0x1fd5b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1fd5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1fd5b4:
    // 0x1fd5b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fd5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fd5b8:
    // 0x1fd5b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd5bc:
    // 0x1fd5bc: 0x0  nop
    ctx->pc = 0x1fd5bcu;
    // NOP
label_1fd5c0:
    // 0x1fd5c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fd5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fd5c4:
    // 0x1fd5c4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fd5c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fd5c8:
    // 0x1fd5c8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1fd5cc:
    // 0x1fd5cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fd5d0:
    if (ctx->pc == 0x1FD5D0u) {
        ctx->pc = 0x1FD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5CCu;
        // 0x1fd5d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5D4u;
        goto label_1fd5d4;
    }
    ctx->pc = 0x1FD5CCu;
    {
        const bool branch_taken_0x1fd5cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5CCu;
        // 0x1fd5d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5cc) {
            ctx->pc = 0x1FD5E8u;
            goto label_1fd5e8;
        }
    }
    ctx->pc = 0x1FD5D4u;
label_1fd5d4:
    // 0x1fd5d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fd5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fd5d8:
    // 0x1fd5d8: 0x0  nop
    ctx->pc = 0x1fd5d8u;
    // NOP
label_1fd5dc:
    // 0x1fd5dc: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fd5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fd5e0:
    // 0x1fd5e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fd5e4:
    if (ctx->pc == 0x1FD5E4u) {
        ctx->pc = 0x1FD5E8u;
        goto label_1fd5e8;
    }
    ctx->pc = 0x1FD5E0u;
    {
        const bool branch_taken_0x1fd5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5e0) {
            ctx->pc = 0x1FD600u;
            goto label_1fd600;
        }
    }
    ctx->pc = 0x1FD5E8u;
label_1fd5e8:
    // 0x1fd5e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fd5ec:
    // 0x1fd5ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fd5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fd5f0:
    // 0x1fd5f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fd5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fd5f4:
    // 0x1fd5f4: 0x0  nop
    ctx->pc = 0x1fd5f4u;
    // NOP
label_1fd5f8:
    // 0x1fd5f8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fd5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fd5fc:
    // 0x1fd5fc: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1fd5fcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1fd600:
    // 0x1fd600: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fd600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fd604:
    // 0x1fd604: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1fd604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1fd608:
    // 0x1fd608: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1fd608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1fd60c:
    // 0x1fd60c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1fd610:
    if (ctx->pc == 0x1FD610u) {
        ctx->pc = 0x1FD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD60Cu;
        // 0x1fd610: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD614u;
        goto label_1fd614;
    }
    ctx->pc = 0x1FD60Cu;
    {
        const bool branch_taken_0x1fd60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD60Cu;
        // 0x1fd610: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd60c) {
            ctx->pc = 0x1FD690u;
            goto label_1fd690;
        }
    }
    ctx->pc = 0x1FD614u;
label_1fd614:
    // 0x1fd614: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1fd618:
    if (ctx->pc == 0x1FD618u) {
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD614u;
        // 0x1fd618: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD61Cu;
        goto label_1fd61c;
    }
    ctx->pc = 0x1FD614u;
    {
        const bool branch_taken_0x1fd614 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD614u;
        // 0x1fd618: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd614) {
            ctx->pc = 0x1FD630u;
            goto label_1fd630;
        }
    }
    ctx->pc = 0x1FD61Cu;
label_1fd61c:
    // 0x1fd61c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1fd61cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd620:
    // 0x1fd620: 0x0  nop
    ctx->pc = 0x1fd620u;
    // NOP
label_1fd624:
    // 0x1fd624: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fd624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fd628:
    // 0x1fd628: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fd62c:
    if (ctx->pc == 0x1FD62Cu) {
        ctx->pc = 0x1FD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD628u;
        // 0x1fd62c: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD630u;
        goto label_1fd630;
    }
    ctx->pc = 0x1FD628u;
    {
        const bool branch_taken_0x1fd628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD628u;
        // 0x1fd62c: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd628) {
            ctx->pc = 0x1FD64Cu;
            goto label_1fd64c;
        }
    }
    ctx->pc = 0x1FD630u;
label_1fd630:
    // 0x1fd630: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1fd630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1fd634:
    // 0x1fd634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fd634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fd638:
    // 0x1fd638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd63c:
    // 0x1fd63c: 0x0  nop
    ctx->pc = 0x1fd63cu;
    // NOP
label_1fd640:
    // 0x1fd640: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fd640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fd644:
    // 0x1fd644: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fd644u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fd648:
    // 0x1fd648: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1fd648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1fd64c:
    // 0x1fd64c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fd650:
    if (ctx->pc == 0x1FD650u) {
        ctx->pc = 0x1FD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD64Cu;
        // 0x1fd650: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD654u;
        goto label_1fd654;
    }
    ctx->pc = 0x1FD64Cu;
    {
        const bool branch_taken_0x1fd64c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD64Cu;
        // 0x1fd650: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd64c) {
            ctx->pc = 0x1FD668u;
            goto label_1fd668;
        }
    }
    ctx->pc = 0x1FD654u;
label_1fd654:
    // 0x1fd654: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fd654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fd658:
    // 0x1fd658: 0x0  nop
    ctx->pc = 0x1fd658u;
    // NOP
label_1fd65c:
    // 0x1fd65c: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fd65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fd660:
    // 0x1fd660: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fd664:
    if (ctx->pc == 0x1FD664u) {
        ctx->pc = 0x1FD668u;
        goto label_1fd668;
    }
    ctx->pc = 0x1FD660u;
    {
        const bool branch_taken_0x1fd660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd660) {
            ctx->pc = 0x1FD680u;
            goto label_1fd680;
        }
    }
    ctx->pc = 0x1FD668u;
label_1fd668:
    // 0x1fd668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fd66c:
    // 0x1fd66c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fd66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fd670:
    // 0x1fd670: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fd670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fd674:
    // 0x1fd674: 0x0  nop
    ctx->pc = 0x1fd674u;
    // NOP
label_1fd678:
    // 0x1fd678: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fd678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fd67c:
    // 0x1fd67c: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1fd67cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1fd680:
    // 0x1fd680: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fd680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fd684:
    // 0x1fd684: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1fd684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1fd688:
    // 0x1fd688: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1fd688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1fd68c:
    // 0x1fd68c: 0x46006c06  mov.s       $f16, $f13
    ctx->pc = 0x1fd68cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_1fd690:
    // 0x1fd690: 0xc0cdd5a  jal         func_337568
label_1fd694:
    if (ctx->pc == 0x1FD694u) {
        ctx->pc = 0x1FD698u;
        goto label_1fd698;
    }
    ctx->pc = 0x1FD690u;
    SET_GPR_U32(ctx, 31, 0x1FD698u);
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1FD690u, 0x1FD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD698u;
label_1fd698:
    // 0x1fd698: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fd698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1fd69c:
    // 0x1fd69c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1fd69cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1fd6a0:
    // 0x1fd6a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd6a4:
    // 0x1fd6a4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1fd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_1fd6a8:
    // 0x1fd6a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1fd6ac:
    // 0x1fd6ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fd6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1fd6b0:
    // 0x1fd6b0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1fd6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1fd6b4:
    // 0x1fd6b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fd6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1fd6b8:
    // 0x1fd6b8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fd6bc:
    // 0x1fd6bc: 0x8e6600c0  lw          $a2, 0xC0($s3)
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1fd6c0:
    // 0x1fd6c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd6c4:
    // 0x1fd6c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd6c8:
    // 0x1fd6c8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1fd6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1fd6cc:
    // 0x1fd6cc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1fd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1fd6d0:
    // 0x1fd6d0: 0x60f809  jalr        $v1
label_1fd6d4:
    if (ctx->pc == 0x1FD6D4u) {
        ctx->pc = 0x1FD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6D0u;
        // 0x1fd6d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD6D8u;
        goto label_1fd6d8;
    }
    ctx->pc = 0x1FD6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD6D8u);
        ctx->pc = 0x1FD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6D0u;
        // 0x1fd6d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD6D0u, 0x1FD6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD6D8u;
label_1fd6d8:
    // 0x1fd6d8: 0x8e6500c0  lw          $a1, 0xC0($s3)
    ctx->pc = 0x1fd6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1fd6dc:
    // 0x1fd6dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd6e0:
    // 0x1fd6e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fd6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fd6e4:
    // 0x1fd6e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fd6e8:
    // 0x1fd6e8: 0x60f809  jalr        $v1
label_1fd6ec:
    if (ctx->pc == 0x1FD6ECu) {
        ctx->pc = 0x1FD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6E8u;
        // 0x1fd6ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD6F0u;
        goto label_1fd6f0;
    }
    ctx->pc = 0x1FD6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD6F0u);
        ctx->pc = 0x1FD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6E8u;
        // 0x1fd6ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD6E8u, 0x1FD6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD6F0u;
label_1fd6f0:
    // 0x1fd6f0: 0x16200035  bnez        $s1, . + 4 + (0x35 << 2)
label_1fd6f4:
    if (ctx->pc == 0x1FD6F4u) {
        ctx->pc = 0x1FD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6F0u;
        // 0x1fd6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD6F8u;
        goto label_1fd6f8;
    }
    ctx->pc = 0x1FD6F0u;
    {
        const bool branch_taken_0x1fd6f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6F0u;
        // 0x1fd6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6f0) {
            ctx->pc = 0x1FD7C8u;
            goto label_1fd7c8;
        }
    }
    ctx->pc = 0x1FD6F8u;
label_1fd6f8:
    // 0x1fd6f8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1fd6fc:
    // 0x1fd6fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fd6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fd700:
    // 0x1fd700: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fd700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fd704:
    // 0x1fd704: 0xc620f4bc  lwc1        $f0, -0xB44($s1)
    ctx->pc = 0x1fd704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd708:
    // 0x1fd708: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1fd70c:
    // 0x1fd70c: 0xc601f4c4  lwc1        $f1, -0xB3C($s0)
    ctx->pc = 0x1fd70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd710:
    // 0x1fd710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd714:
    // 0x1fd714: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1fd714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1fd718:
    // 0x1fd718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fd71c:
    // 0x1fd71c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fd71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fd720:
    // 0x1fd720: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1fd720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd724:
    // 0x1fd724: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1fd724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fd728:
    // 0x1fd728: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd72c:
    // 0x1fd72c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fd72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1fd730:
    // 0x1fd730: 0xc068846  jal         func_1A2118
label_1fd734:
    if (ctx->pc == 0x1FD734u) {
        ctx->pc = 0x1FD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD730u;
        // 0x1fd734: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD738u;
        goto label_1fd738;
    }
    ctx->pc = 0x1FD730u;
    SET_GPR_U32(ctx, 31, 0x1FD738u);
    ctx->pc = 0x1FD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD730u;
    // 0x1fd734: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD730u, 0x1FD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD738u;
label_1fd738:
    // 0x1fd738: 0x8e6700b0  lw          $a3, 0xB0($s3)
    ctx->pc = 0x1fd738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd73c:
    // 0x1fd73c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd740:
    // 0x1fd740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd744:
    // 0x1fd744: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd748:
    // 0x1fd748: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd74c:
    // 0x1fd74c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd750:
    // 0x1fd750: 0x60f809  jalr        $v1
label_1fd754:
    if (ctx->pc == 0x1FD754u) {
        ctx->pc = 0x1FD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD750u;
        // 0x1fd754: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD758u;
        goto label_1fd758;
    }
    ctx->pc = 0x1FD750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD758u);
        ctx->pc = 0x1FD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD750u;
        // 0x1fd754: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD750u, 0x1FD758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD758u;
label_1fd758:
    // 0x1fd758: 0xc620f4bc  lwc1        $f0, -0xB44($s1)
    ctx->pc = 0x1fd758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd75c:
    // 0x1fd75c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd760:
    // 0x1fd760: 0xc601f4c4  lwc1        $f1, -0xB3C($s0)
    ctx->pc = 0x1fd760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd764:
    // 0x1fd764: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1fd764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1fd768:
    // 0x1fd768: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x1fd768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fd76c:
    // 0x1fd76c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1fd76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fd770:
    // 0x1fd770: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1fd770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1fd774:
    // 0x1fd774: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd778:
    // 0x1fd778: 0xc068846  jal         func_1A2118
label_1fd77c:
    if (ctx->pc == 0x1FD77Cu) {
        ctx->pc = 0x1FD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD778u;
        // 0x1fd77c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD780u;
        goto label_1fd780;
    }
    ctx->pc = 0x1FD778u;
    SET_GPR_U32(ctx, 31, 0x1FD780u);
    ctx->pc = 0x1FD77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD778u;
    // 0x1fd77c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD778u, 0x1FD780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD780u;
label_1fd780:
    // 0x1fd780: 0x8e6700b8  lw          $a3, 0xB8($s3)
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fd784:
    // 0x1fd784: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd788:
    // 0x1fd788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd78c:
    // 0x1fd78c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd790:
    // 0x1fd790: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd794:
    // 0x1fd794: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd798:
    // 0x1fd798: 0x60f809  jalr        $v1
label_1fd79c:
    if (ctx->pc == 0x1FD79Cu) {
        ctx->pc = 0x1FD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD798u;
        // 0x1fd79c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7A0u;
        goto label_1fd7a0;
    }
    ctx->pc = 0x1FD798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD7A0u);
        ctx->pc = 0x1FD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD798u;
        // 0x1fd79c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD798u, 0x1FD7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD7A0u;
label_1fd7a0:
    // 0x1fd7a0: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd7a4:
    // 0x1fd7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd7a8:
    // 0x1fd7a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd7ac:
    // 0x1fd7ac: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd7b0:
    // 0x1fd7b0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd7b4:
    // 0x1fd7b4: 0x60f809  jalr        $v1
label_1fd7b8:
    if (ctx->pc == 0x1FD7B8u) {
        ctx->pc = 0x1FD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7B4u;
        // 0x1fd7b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7BCu;
        goto label_1fd7bc;
    }
    ctx->pc = 0x1FD7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD7BCu);
        ctx->pc = 0x1FD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7B4u;
        // 0x1fd7b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD7B4u, 0x1FD7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD7BCu;
label_1fd7bc:
    // 0x1fd7bc: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x1fd7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd7c0:
    // 0x1fd7c0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1fd7c4:
    if (ctx->pc == 0x1FD7C4u) {
        ctx->pc = 0x1FD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C0u;
        // 0x1fd7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7C8u;
        goto label_1fd7c8;
    }
    ctx->pc = 0x1FD7C0u;
    {
        const bool branch_taken_0x1fd7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C0u;
        // 0x1fd7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7c0) {
            ctx->pc = 0x1FD8F8u;
            goto label_1fd8f8;
        }
    }
    ctx->pc = 0x1FD7C8u;
label_1fd7c8:
    // 0x1fd7c8: 0x16220059  bne         $s1, $v0, . + 4 + (0x59 << 2)
label_1fd7cc:
    if (ctx->pc == 0x1FD7CCu) {
        ctx->pc = 0x1FD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C8u;
        // 0x1fd7cc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7D0u;
        goto label_1fd7d0;
    }
    ctx->pc = 0x1FD7C8u;
    {
        const bool branch_taken_0x1fd7c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C8u;
        // 0x1fd7cc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7c8) {
            ctx->pc = 0x1FD930u;
            goto label_1fd930;
        }
    }
    ctx->pc = 0x1FD7D0u;
label_1fd7d0:
    // 0x1fd7d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1fd7d4:
    // 0x1fd7d4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1fd7d8:
    // 0x1fd7d8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1fd7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1fd7dc:
    // 0x1fd7dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fd7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fd7e0:
    // 0x1fd7e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fd7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fd7e4:
    // 0x1fd7e4: 0xc642f4c0  lwc1        $f2, -0xB40($s2)
    ctx->pc = 0x1fd7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294964416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd7e8:
    // 0x1fd7e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd7ec:
    // 0x1fd7ec: 0xc600f4bc  lwc1        $f0, -0xB44($s0)
    ctx->pc = 0x1fd7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd7f0:
    // 0x1fd7f0: 0xc621f4c4  lwc1        $f1, -0xB3C($s1)
    ctx->pc = 0x1fd7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd7f4:
    // 0x1fd7f4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1fd7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1fd7f8:
    // 0x1fd7f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fd7fc:
    // 0x1fd7fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fd7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fd800:
    // 0x1fd800: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fd800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1fd804:
    // 0x1fd804: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1fd804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd808:
    // 0x1fd808: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fd808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1fd80c:
    // 0x1fd80c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd810:
    // 0x1fd810: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1fd810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fd814:
    // 0x1fd814: 0xc068846  jal         func_1A2118
label_1fd818:
    if (ctx->pc == 0x1FD818u) {
        ctx->pc = 0x1FD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD814u;
        // 0x1fd818: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD81Cu;
        goto label_1fd81c;
    }
    ctx->pc = 0x1FD814u;
    SET_GPR_U32(ctx, 31, 0x1FD81Cu);
    ctx->pc = 0x1FD818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD814u;
    // 0x1fd818: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD814u, 0x1FD81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD81Cu;
label_1fd81c:
    // 0x1fd81c: 0x8e6700b0  lw          $a3, 0xB0($s3)
    ctx->pc = 0x1fd81cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd820:
    // 0x1fd820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd824:
    // 0x1fd824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd828:
    // 0x1fd828: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd82c:
    // 0x1fd82c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd830:
    // 0x1fd830: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd834:
    // 0x1fd834: 0x60f809  jalr        $v1
label_1fd838:
    if (ctx->pc == 0x1FD838u) {
        ctx->pc = 0x1FD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD834u;
        // 0x1fd838: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD83Cu;
        goto label_1fd83c;
    }
    ctx->pc = 0x1FD834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD83Cu);
        ctx->pc = 0x1FD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD834u;
        // 0x1fd838: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD834u, 0x1FD83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD83Cu;
label_1fd83c:
    // 0x1fd83c: 0xc642f4c0  lwc1        $f2, -0xB40($s2)
    ctx->pc = 0x1fd83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294964416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd840:
    // 0x1fd840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd844:
    // 0x1fd844: 0xc600f4bc  lwc1        $f0, -0xB44($s0)
    ctx->pc = 0x1fd844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd848:
    // 0x1fd848: 0xc621f4c4  lwc1        $f1, -0xB3C($s1)
    ctx->pc = 0x1fd848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd84c:
    // 0x1fd84c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1fd84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1fd850:
    // 0x1fd850: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd854:
    // 0x1fd854: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fd854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1fd858:
    // 0x1fd858: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fd858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1fd85c:
    // 0x1fd85c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1fd85cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1fd860:
    // 0x1fd860: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd864:
    // 0x1fd864: 0xc068846  jal         func_1A2118
label_1fd868:
    if (ctx->pc == 0x1FD868u) {
        ctx->pc = 0x1FD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD864u;
        // 0x1fd868: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD86Cu;
        goto label_1fd86c;
    }
    ctx->pc = 0x1FD864u;
    SET_GPR_U32(ctx, 31, 0x1FD86Cu);
    ctx->pc = 0x1FD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD864u;
    // 0x1fd868: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD864u, 0x1FD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD86Cu;
label_1fd86c:
    // 0x1fd86c: 0x8e6700b4  lw          $a3, 0xB4($s3)
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd870:
    // 0x1fd870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd874:
    // 0x1fd874: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd878:
    // 0x1fd878: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd87c:
    // 0x1fd87c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd880:
    // 0x1fd880: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd884:
    // 0x1fd884: 0x60f809  jalr        $v1
label_1fd888:
    if (ctx->pc == 0x1FD888u) {
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD884u;
        // 0x1fd888: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD88Cu;
        goto label_1fd88c;
    }
    ctx->pc = 0x1FD884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD88Cu);
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD884u;
        // 0x1fd888: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD884u, 0x1FD88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD88Cu;
label_1fd88c:
    // 0x1fd88c: 0xc600f4bc  lwc1        $f0, -0xB44($s0)
    ctx->pc = 0x1fd88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd890:
    // 0x1fd890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd894:
    // 0x1fd894: 0xc621f4c4  lwc1        $f1, -0xB3C($s1)
    ctx->pc = 0x1fd894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd898:
    // 0x1fd898: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1fd898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1fd89c:
    // 0x1fd89c: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fd8a0:
    // 0x1fd8a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1fd8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fd8a4:
    // 0x1fd8a4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1fd8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1fd8a8:
    // 0x1fd8a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd8ac:
    // 0x1fd8ac: 0xc068846  jal         func_1A2118
label_1fd8b0:
    if (ctx->pc == 0x1FD8B0u) {
        ctx->pc = 0x1FD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8ACu;
        // 0x1fd8b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8B4u;
        goto label_1fd8b4;
    }
    ctx->pc = 0x1FD8ACu;
    SET_GPR_U32(ctx, 31, 0x1FD8B4u);
    ctx->pc = 0x1FD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8ACu;
    // 0x1fd8b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD8ACu, 0x1FD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8B4u;
label_1fd8b4:
    // 0x1fd8b4: 0x8e6700b8  lw          $a3, 0xB8($s3)
    ctx->pc = 0x1fd8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fd8b8:
    // 0x1fd8b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd8bc:
    // 0x1fd8bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd8c0:
    // 0x1fd8c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd8c4:
    // 0x1fd8c4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd8c8:
    // 0x1fd8c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd8cc:
    // 0x1fd8cc: 0x60f809  jalr        $v1
label_1fd8d0:
    if (ctx->pc == 0x1FD8D0u) {
        ctx->pc = 0x1FD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8CCu;
        // 0x1fd8d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8D4u;
        goto label_1fd8d4;
    }
    ctx->pc = 0x1FD8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD8D4u);
        ctx->pc = 0x1FD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8CCu;
        // 0x1fd8d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD8CCu, 0x1FD8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD8D4u;
label_1fd8d4:
    // 0x1fd8d4: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd8d8:
    // 0x1fd8d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd8dc:
    // 0x1fd8dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd8e0:
    // 0x1fd8e0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd8e4:
    // 0x1fd8e4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd8e8:
    // 0x1fd8e8: 0x60f809  jalr        $v1
label_1fd8ec:
    if (ctx->pc == 0x1FD8ECu) {
        ctx->pc = 0x1FD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8E8u;
        // 0x1fd8ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8F0u;
        goto label_1fd8f0;
    }
    ctx->pc = 0x1FD8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD8F0u);
        ctx->pc = 0x1FD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8E8u;
        // 0x1fd8ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD8E8u, 0x1FD8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD8F0u;
label_1fd8f0:
    // 0x1fd8f0: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x1fd8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd8f4:
    // 0x1fd8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd8f8:
    // 0x1fd8f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd8fc:
    // 0x1fd8fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd900:
    // 0x1fd900: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd904:
    // 0x1fd904: 0x60f809  jalr        $v1
label_1fd908:
    if (ctx->pc == 0x1FD908u) {
        ctx->pc = 0x1FD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD904u;
        // 0x1fd908: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD90Cu;
        goto label_1fd90c;
    }
    ctx->pc = 0x1FD904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD90Cu);
        ctx->pc = 0x1FD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD904u;
        // 0x1fd908: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD904u, 0x1FD90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD90Cu;
label_1fd90c:
    // 0x1fd90c: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x1fd90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fd910:
    // 0x1fd910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd914:
    // 0x1fd914: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd918:
    // 0x1fd918: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd91c:
    // 0x1fd91c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd920:
    // 0x1fd920: 0x60f809  jalr        $v1
label_1fd924:
    if (ctx->pc == 0x1FD924u) {
        ctx->pc = 0x1FD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD920u;
        // 0x1fd924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD928u;
        goto label_1fd928;
    }
    ctx->pc = 0x1FD920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD928u);
        ctx->pc = 0x1FD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD920u;
        // 0x1fd924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD920u, 0x1FD928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD928u;
label_1fd928:
    // 0x1fd928: 0x10000040  b           . + 4 + (0x40 << 2)
label_1fd92c:
    if (ctx->pc == 0x1FD92Cu) {
        ctx->pc = 0x1FD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD928u;
        // 0x1fd92c: 0x8e6500c4  lw          $a1, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD930u;
        goto label_1fd930;
    }
    ctx->pc = 0x1FD928u;
    {
        const bool branch_taken_0x1fd928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD928u;
        // 0x1fd92c: 0x8e6500c4  lw          $a1, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd928) {
            ctx->pc = 0x1FDA2Cu;
            goto label_1fda2c;
        }
    }
    ctx->pc = 0x1FD930u;
label_1fd930:
    // 0x1fd930: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fd930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fd934:
    // 0x1fd934: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fd934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fd938:
    // 0x1fd938: 0xc620f4bc  lwc1        $f0, -0xB44($s1)
    ctx->pc = 0x1fd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd93c:
    // 0x1fd93c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fd93cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1fd940:
    // 0x1fd940: 0xc601f4c4  lwc1        $f1, -0xB3C($s0)
    ctx->pc = 0x1fd940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd944:
    // 0x1fd944: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd948:
    // 0x1fd948: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1fd948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1fd94c:
    // 0x1fd94c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fd950:
    // 0x1fd950: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fd950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fd954:
    // 0x1fd954: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x1fd954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd958:
    // 0x1fd958: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1fd958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fd95c:
    // 0x1fd95c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd960:
    // 0x1fd960: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fd960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1fd964:
    // 0x1fd964: 0xc068846  jal         func_1A2118
label_1fd968:
    if (ctx->pc == 0x1FD968u) {
        ctx->pc = 0x1FD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD964u;
        // 0x1fd968: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD96Cu;
        goto label_1fd96c;
    }
    ctx->pc = 0x1FD964u;
    SET_GPR_U32(ctx, 31, 0x1FD96Cu);
    ctx->pc = 0x1FD968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD964u;
    // 0x1fd968: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD964u, 0x1FD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD96Cu;
label_1fd96c:
    // 0x1fd96c: 0x8e6700b0  lw          $a3, 0xB0($s3)
    ctx->pc = 0x1fd96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd970:
    // 0x1fd970: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd974:
    // 0x1fd974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd978:
    // 0x1fd978: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd97c:
    // 0x1fd97c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd980:
    // 0x1fd980: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd984:
    // 0x1fd984: 0x60f809  jalr        $v1
label_1fd988:
    if (ctx->pc == 0x1FD988u) {
        ctx->pc = 0x1FD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD984u;
        // 0x1fd988: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD98Cu;
        goto label_1fd98c;
    }
    ctx->pc = 0x1FD984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD98Cu);
        ctx->pc = 0x1FD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD984u;
        // 0x1fd988: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD984u, 0x1FD98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD98Cu;
label_1fd98c:
    // 0x1fd98c: 0xc620f4bc  lwc1        $f0, -0xB44($s1)
    ctx->pc = 0x1fd98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd990:
    // 0x1fd990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd994:
    // 0x1fd994: 0xc601f4c4  lwc1        $f1, -0xB3C($s0)
    ctx->pc = 0x1fd994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd998:
    // 0x1fd998: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1fd998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1fd99c:
    // 0x1fd99c: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1fd99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd9a0:
    // 0x1fd9a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1fd9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fd9a4:
    // 0x1fd9a4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1fd9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1fd9a8:
    // 0x1fd9a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fd9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd9ac:
    // 0x1fd9ac: 0xc068846  jal         func_1A2118
label_1fd9b0:
    if (ctx->pc == 0x1FD9B0u) {
        ctx->pc = 0x1FD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9ACu;
        // 0x1fd9b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD9B4u;
        goto label_1fd9b4;
    }
    ctx->pc = 0x1FD9ACu;
    SET_GPR_U32(ctx, 31, 0x1FD9B4u);
    ctx->pc = 0x1FD9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD9ACu;
    // 0x1fd9b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1FD9ACu, 0x1FD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9B4u;
label_1fd9b4:
    // 0x1fd9b4: 0x8e6700b4  lw          $a3, 0xB4($s3)
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd9b8:
    // 0x1fd9b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9bc:
    // 0x1fd9bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd9c0:
    // 0x1fd9c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd9c4:
    // 0x1fd9c4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fd9c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd9c8:
    // 0x1fd9c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fd9cc:
    // 0x1fd9cc: 0x60f809  jalr        $v1
label_1fd9d0:
    if (ctx->pc == 0x1FD9D0u) {
        ctx->pc = 0x1FD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9CCu;
        // 0x1fd9d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD9D4u;
        goto label_1fd9d4;
    }
    ctx->pc = 0x1FD9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD9D4u);
        ctx->pc = 0x1FD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9CCu;
        // 0x1fd9d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD9CCu, 0x1FD9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD9D4u;
label_1fd9d4:
    // 0x1fd9d4: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fd9d8:
    // 0x1fd9d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd9dc:
    // 0x1fd9dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd9e0:
    // 0x1fd9e0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd9e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fd9e4:
    // 0x1fd9e4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fd9e8:
    // 0x1fd9e8: 0x60f809  jalr        $v1
label_1fd9ec:
    if (ctx->pc == 0x1FD9ECu) {
        ctx->pc = 0x1FD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9E8u;
        // 0x1fd9ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD9F0u;
        goto label_1fd9f0;
    }
    ctx->pc = 0x1FD9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD9F0u);
        ctx->pc = 0x1FD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9E8u;
        // 0x1fd9ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD9E8u, 0x1FD9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD9F0u;
label_1fd9f0:
    // 0x1fd9f0: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x1fd9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fd9f4:
    // 0x1fd9f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd9f8:
    // 0x1fd9f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd9fc:
    // 0x1fd9fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fda00:
    // 0x1fda00: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fda04:
    // 0x1fda04: 0x60f809  jalr        $v1
label_1fda08:
    if (ctx->pc == 0x1FDA08u) {
        ctx->pc = 0x1FDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA04u;
        // 0x1fda08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA0Cu;
        goto label_1fda0c;
    }
    ctx->pc = 0x1FDA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDA0Cu);
        ctx->pc = 0x1FDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA04u;
        // 0x1fda08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA04u, 0x1FDA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA0Cu;
label_1fda0c:
    // 0x1fda0c: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x1fda0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fda10:
    // 0x1fda10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fda10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fda14:
    // 0x1fda14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fda18:
    // 0x1fda18: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fda18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fda1c:
    // 0x1fda1c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fda20:
    // 0x1fda20: 0x60f809  jalr        $v1
label_1fda24:
    if (ctx->pc == 0x1FDA24u) {
        ctx->pc = 0x1FDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA20u;
        // 0x1fda24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA28u;
        goto label_1fda28;
    }
    ctx->pc = 0x1FDA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDA28u);
        ctx->pc = 0x1FDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA20u;
        // 0x1fda24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA20u, 0x1FDA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA28u;
label_1fda28:
    // 0x1fda28: 0x8e6500c4  lw          $a1, 0xC4($s3)
    ctx->pc = 0x1fda28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1fda2c:
    // 0x1fda2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fda30:
    // 0x1fda30: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fda30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fda34:
    // 0x1fda34: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fda38:
    // 0x1fda38: 0x60f809  jalr        $v1
label_1fda3c:
    if (ctx->pc == 0x1FDA3Cu) {
        ctx->pc = 0x1FDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA38u;
        // 0x1fda3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA40u;
        goto label_1fda40;
    }
    ctx->pc = 0x1FDA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDA40u);
        ctx->pc = 0x1FDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA38u;
        // 0x1fda3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA38u, 0x1FDA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA40u;
label_1fda40:
    // 0x1fda40: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1fda44:
    // 0x1fda44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fda48:
    // 0x1fda48: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fda4c:
    // 0x1fda4c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fda50:
    // 0x1fda50: 0x60f809  jalr        $v1
label_1fda54:
    if (ctx->pc == 0x1FDA54u) {
        ctx->pc = 0x1FDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA50u;
        // 0x1fda54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA58u;
        goto label_1fda58;
    }
    ctx->pc = 0x1FDA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDA58u);
        ctx->pc = 0x1FDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA50u;
        // 0x1fda54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA50u, 0x1FDA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA58u;
label_1fda58:
    // 0x1fda58: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x1fda58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1fda5c:
    // 0x1fda5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fda60:
    // 0x1fda60: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fda60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fda64:
    // 0x1fda64: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fda68:
    // 0x1fda68: 0x60f809  jalr        $v1
label_1fda6c:
    if (ctx->pc == 0x1FDA6Cu) {
        ctx->pc = 0x1FDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA68u;
        // 0x1fda6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA70u;
        goto label_1fda70;
    }
    ctx->pc = 0x1FDA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDA70u);
        ctx->pc = 0x1FDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA68u;
        // 0x1fda6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA68u, 0x1FDA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA70u;
label_1fda70:
    // 0x1fda70: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x1fda70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1fda74:
    // 0x1fda74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fda74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fda78:
    // 0x1fda78: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fda7c:
    // 0x1fda7c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fda80:
    // 0x1fda80: 0x60f809  jalr        $v1
label_1fda84:
    if (ctx->pc == 0x1FDA84u) {
        ctx->pc = 0x1FDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA80u;
        // 0x1fda84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA88u;
        goto label_1fda88;
    }
    ctx->pc = 0x1FDA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDA88u);
        ctx->pc = 0x1FDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA80u;
        // 0x1fda84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA80u, 0x1FDA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA88u;
label_1fda88:
    // 0x1fda88: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x1fda88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_1fda8c:
    // 0x1fda8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fda90:
    // 0x1fda90: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fda90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fda94:
    // 0x1fda94: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fda94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fda98:
    // 0x1fda98: 0x60f809  jalr        $v1
label_1fda9c:
    if (ctx->pc == 0x1FDA9Cu) {
        ctx->pc = 0x1FDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA98u;
        // 0x1fda9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAA0u;
        goto label_1fdaa0;
    }
    ctx->pc = 0x1FDA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDAA0u);
        ctx->pc = 0x1FDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA98u;
        // 0x1fda9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA98u, 0x1FDAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDAA0u;
label_1fdaa0:
    // 0x1fdaa0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fdaa4:
    // 0x1fdaa4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fdaa8:
    // 0x1fdaa8: 0x8e6400a8  lw          $a0, 0xA8($s3)
    ctx->pc = 0x1fdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_1fdaac:
    // 0x1fdaac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fdaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdab0:
    // 0x1fdab0: 0xc44cf4cc  lwc1        $f12, -0xB34($v0)
    ctx->pc = 0x1fdab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fdab4:
    // 0x1fdab4: 0xc068848  jal         func_1A2120
label_1fdab8:
    if (ctx->pc == 0x1FDAB8u) {
        ctx->pc = 0x1FDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAB4u;
        // 0x1fdab8: 0xc46df4d0  lwc1        $f13, -0xB30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDABCu;
        goto label_1fdabc;
    }
    ctx->pc = 0x1FDAB4u;
    SET_GPR_U32(ctx, 31, 0x1FDABCu);
    ctx->pc = 0x1FDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDAB4u;
    // 0x1fdab8: 0xc46df4d0  lwc1        $f13, -0xB30($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1FDAB4u, 0x1FDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDABCu;
label_1fdabc:
    // 0x1fdabc: 0x8e6500c8  lw          $a1, 0xC8($s3)
    ctx->pc = 0x1fdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_1fdac0:
    // 0x1fdac0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdac4:
    // 0x1fdac4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fdac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fdac8:
    // 0x1fdac8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fdacc:
    // 0x1fdacc: 0x60f809  jalr        $v1
label_1fdad0:
    if (ctx->pc == 0x1FDAD0u) {
        ctx->pc = 0x1FDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDACCu;
        // 0x1fdad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAD4u;
        goto label_1fdad4;
    }
    ctx->pc = 0x1FDACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDAD4u);
        ctx->pc = 0x1FDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDACCu;
        // 0x1fdad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDACCu, 0x1FDAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDAD4u;
label_1fdad4:
    // 0x1fdad4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fdad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fdad8:
    // 0x1fdad8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fdad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fdadc:
    // 0x1fdadc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fdadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdae0:
    // 0x1fdae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fdae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdae4:
    // 0x1fdae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdae8:
    // 0x1fdae8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1fdae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fdaec:
    // 0x1fdaec: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1fdaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fdaf0:
    // 0x1fdaf0: 0x3e00008  jr          $ra
label_1fdaf4:
    if (ctx->pc == 0x1FDAF4u) {
        ctx->pc = 0x1FDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAF0u;
        // 0x1fdaf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAF8u;
        goto label_fallthrough_0x1fdaf0;
    }
    ctx->pc = 0x1FDAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAF0u;
        // 0x1fdaf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fdaf0:
    ctx->pc = 0x1FDAF8u;
}
