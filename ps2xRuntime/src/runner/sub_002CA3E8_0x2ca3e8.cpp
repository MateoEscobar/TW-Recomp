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

// Function: sub_002CA3E8
// Address: 0x2ca3e8 - 0x2cade0
void sub_002CA3E8_0x2ca3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA3E8_0x2ca3e8");
#endif

    switch (ctx->pc) {
        case 0x2ca3e8u: goto label_2ca3e8;
        case 0x2ca3ecu: goto label_2ca3ec;
        case 0x2ca3f0u: goto label_2ca3f0;
        case 0x2ca3f4u: goto label_2ca3f4;
        case 0x2ca3f8u: goto label_2ca3f8;
        case 0x2ca3fcu: goto label_2ca3fc;
        case 0x2ca400u: goto label_2ca400;
        case 0x2ca404u: goto label_2ca404;
        case 0x2ca408u: goto label_2ca408;
        case 0x2ca40cu: goto label_2ca40c;
        case 0x2ca410u: goto label_2ca410;
        case 0x2ca414u: goto label_2ca414;
        case 0x2ca418u: goto label_2ca418;
        case 0x2ca41cu: goto label_2ca41c;
        case 0x2ca420u: goto label_2ca420;
        case 0x2ca424u: goto label_2ca424;
        case 0x2ca428u: goto label_2ca428;
        case 0x2ca42cu: goto label_2ca42c;
        case 0x2ca430u: goto label_2ca430;
        case 0x2ca434u: goto label_2ca434;
        case 0x2ca438u: goto label_2ca438;
        case 0x2ca43cu: goto label_2ca43c;
        case 0x2ca440u: goto label_2ca440;
        case 0x2ca444u: goto label_2ca444;
        case 0x2ca448u: goto label_2ca448;
        case 0x2ca44cu: goto label_2ca44c;
        case 0x2ca450u: goto label_2ca450;
        case 0x2ca454u: goto label_2ca454;
        case 0x2ca458u: goto label_2ca458;
        case 0x2ca45cu: goto label_2ca45c;
        case 0x2ca460u: goto label_2ca460;
        case 0x2ca464u: goto label_2ca464;
        case 0x2ca468u: goto label_2ca468;
        case 0x2ca46cu: goto label_2ca46c;
        case 0x2ca470u: goto label_2ca470;
        case 0x2ca474u: goto label_2ca474;
        case 0x2ca478u: goto label_2ca478;
        case 0x2ca47cu: goto label_2ca47c;
        case 0x2ca480u: goto label_2ca480;
        case 0x2ca484u: goto label_2ca484;
        case 0x2ca488u: goto label_2ca488;
        case 0x2ca48cu: goto label_2ca48c;
        case 0x2ca490u: goto label_2ca490;
        case 0x2ca494u: goto label_2ca494;
        case 0x2ca498u: goto label_2ca498;
        case 0x2ca49cu: goto label_2ca49c;
        case 0x2ca4a0u: goto label_2ca4a0;
        case 0x2ca4a4u: goto label_2ca4a4;
        case 0x2ca4a8u: goto label_2ca4a8;
        case 0x2ca4acu: goto label_2ca4ac;
        case 0x2ca4b0u: goto label_2ca4b0;
        case 0x2ca4b4u: goto label_2ca4b4;
        case 0x2ca4b8u: goto label_2ca4b8;
        case 0x2ca4bcu: goto label_2ca4bc;
        case 0x2ca4c0u: goto label_2ca4c0;
        case 0x2ca4c4u: goto label_2ca4c4;
        case 0x2ca4c8u: goto label_2ca4c8;
        case 0x2ca4ccu: goto label_2ca4cc;
        case 0x2ca4d0u: goto label_2ca4d0;
        case 0x2ca4d4u: goto label_2ca4d4;
        case 0x2ca4d8u: goto label_2ca4d8;
        case 0x2ca4dcu: goto label_2ca4dc;
        case 0x2ca4e0u: goto label_2ca4e0;
        case 0x2ca4e4u: goto label_2ca4e4;
        case 0x2ca4e8u: goto label_2ca4e8;
        case 0x2ca4ecu: goto label_2ca4ec;
        case 0x2ca4f0u: goto label_2ca4f0;
        case 0x2ca4f4u: goto label_2ca4f4;
        case 0x2ca4f8u: goto label_2ca4f8;
        case 0x2ca4fcu: goto label_2ca4fc;
        case 0x2ca500u: goto label_2ca500;
        case 0x2ca504u: goto label_2ca504;
        case 0x2ca508u: goto label_2ca508;
        case 0x2ca50cu: goto label_2ca50c;
        case 0x2ca510u: goto label_2ca510;
        case 0x2ca514u: goto label_2ca514;
        case 0x2ca518u: goto label_2ca518;
        case 0x2ca51cu: goto label_2ca51c;
        case 0x2ca520u: goto label_2ca520;
        case 0x2ca524u: goto label_2ca524;
        case 0x2ca528u: goto label_2ca528;
        case 0x2ca52cu: goto label_2ca52c;
        case 0x2ca530u: goto label_2ca530;
        case 0x2ca534u: goto label_2ca534;
        case 0x2ca538u: goto label_2ca538;
        case 0x2ca53cu: goto label_2ca53c;
        case 0x2ca540u: goto label_2ca540;
        case 0x2ca544u: goto label_2ca544;
        case 0x2ca548u: goto label_2ca548;
        case 0x2ca54cu: goto label_2ca54c;
        case 0x2ca550u: goto label_2ca550;
        case 0x2ca554u: goto label_2ca554;
        case 0x2ca558u: goto label_2ca558;
        case 0x2ca55cu: goto label_2ca55c;
        case 0x2ca560u: goto label_2ca560;
        case 0x2ca564u: goto label_2ca564;
        case 0x2ca568u: goto label_2ca568;
        case 0x2ca56cu: goto label_2ca56c;
        case 0x2ca570u: goto label_2ca570;
        case 0x2ca574u: goto label_2ca574;
        case 0x2ca578u: goto label_2ca578;
        case 0x2ca57cu: goto label_2ca57c;
        case 0x2ca580u: goto label_2ca580;
        case 0x2ca584u: goto label_2ca584;
        case 0x2ca588u: goto label_2ca588;
        case 0x2ca58cu: goto label_2ca58c;
        case 0x2ca590u: goto label_2ca590;
        case 0x2ca594u: goto label_2ca594;
        case 0x2ca598u: goto label_2ca598;
        case 0x2ca59cu: goto label_2ca59c;
        case 0x2ca5a0u: goto label_2ca5a0;
        case 0x2ca5a4u: goto label_2ca5a4;
        case 0x2ca5a8u: goto label_2ca5a8;
        case 0x2ca5acu: goto label_2ca5ac;
        case 0x2ca5b0u: goto label_2ca5b0;
        case 0x2ca5b4u: goto label_2ca5b4;
        case 0x2ca5b8u: goto label_2ca5b8;
        case 0x2ca5bcu: goto label_2ca5bc;
        case 0x2ca5c0u: goto label_2ca5c0;
        case 0x2ca5c4u: goto label_2ca5c4;
        case 0x2ca5c8u: goto label_2ca5c8;
        case 0x2ca5ccu: goto label_2ca5cc;
        case 0x2ca5d0u: goto label_2ca5d0;
        case 0x2ca5d4u: goto label_2ca5d4;
        case 0x2ca5d8u: goto label_2ca5d8;
        case 0x2ca5dcu: goto label_2ca5dc;
        case 0x2ca5e0u: goto label_2ca5e0;
        case 0x2ca5e4u: goto label_2ca5e4;
        case 0x2ca5e8u: goto label_2ca5e8;
        case 0x2ca5ecu: goto label_2ca5ec;
        case 0x2ca5f0u: goto label_2ca5f0;
        case 0x2ca5f4u: goto label_2ca5f4;
        case 0x2ca5f8u: goto label_2ca5f8;
        case 0x2ca5fcu: goto label_2ca5fc;
        case 0x2ca600u: goto label_2ca600;
        case 0x2ca604u: goto label_2ca604;
        case 0x2ca608u: goto label_2ca608;
        case 0x2ca60cu: goto label_2ca60c;
        case 0x2ca610u: goto label_2ca610;
        case 0x2ca614u: goto label_2ca614;
        case 0x2ca618u: goto label_2ca618;
        case 0x2ca61cu: goto label_2ca61c;
        case 0x2ca620u: goto label_2ca620;
        case 0x2ca624u: goto label_2ca624;
        case 0x2ca628u: goto label_2ca628;
        case 0x2ca62cu: goto label_2ca62c;
        case 0x2ca630u: goto label_2ca630;
        case 0x2ca634u: goto label_2ca634;
        case 0x2ca638u: goto label_2ca638;
        case 0x2ca63cu: goto label_2ca63c;
        case 0x2ca640u: goto label_2ca640;
        case 0x2ca644u: goto label_2ca644;
        case 0x2ca648u: goto label_2ca648;
        case 0x2ca64cu: goto label_2ca64c;
        case 0x2ca650u: goto label_2ca650;
        case 0x2ca654u: goto label_2ca654;
        case 0x2ca658u: goto label_2ca658;
        case 0x2ca65cu: goto label_2ca65c;
        case 0x2ca660u: goto label_2ca660;
        case 0x2ca664u: goto label_2ca664;
        case 0x2ca668u: goto label_2ca668;
        case 0x2ca66cu: goto label_2ca66c;
        case 0x2ca670u: goto label_2ca670;
        case 0x2ca674u: goto label_2ca674;
        case 0x2ca678u: goto label_2ca678;
        case 0x2ca67cu: goto label_2ca67c;
        case 0x2ca680u: goto label_2ca680;
        case 0x2ca684u: goto label_2ca684;
        case 0x2ca688u: goto label_2ca688;
        case 0x2ca68cu: goto label_2ca68c;
        case 0x2ca690u: goto label_2ca690;
        case 0x2ca694u: goto label_2ca694;
        case 0x2ca698u: goto label_2ca698;
        case 0x2ca69cu: goto label_2ca69c;
        case 0x2ca6a0u: goto label_2ca6a0;
        case 0x2ca6a4u: goto label_2ca6a4;
        case 0x2ca6a8u: goto label_2ca6a8;
        case 0x2ca6acu: goto label_2ca6ac;
        case 0x2ca6b0u: goto label_2ca6b0;
        case 0x2ca6b4u: goto label_2ca6b4;
        case 0x2ca6b8u: goto label_2ca6b8;
        case 0x2ca6bcu: goto label_2ca6bc;
        case 0x2ca6c0u: goto label_2ca6c0;
        case 0x2ca6c4u: goto label_2ca6c4;
        case 0x2ca6c8u: goto label_2ca6c8;
        case 0x2ca6ccu: goto label_2ca6cc;
        case 0x2ca6d0u: goto label_2ca6d0;
        case 0x2ca6d4u: goto label_2ca6d4;
        case 0x2ca6d8u: goto label_2ca6d8;
        case 0x2ca6dcu: goto label_2ca6dc;
        case 0x2ca6e0u: goto label_2ca6e0;
        case 0x2ca6e4u: goto label_2ca6e4;
        case 0x2ca6e8u: goto label_2ca6e8;
        case 0x2ca6ecu: goto label_2ca6ec;
        case 0x2ca6f0u: goto label_2ca6f0;
        case 0x2ca6f4u: goto label_2ca6f4;
        case 0x2ca6f8u: goto label_2ca6f8;
        case 0x2ca6fcu: goto label_2ca6fc;
        case 0x2ca700u: goto label_2ca700;
        case 0x2ca704u: goto label_2ca704;
        case 0x2ca708u: goto label_2ca708;
        case 0x2ca70cu: goto label_2ca70c;
        case 0x2ca710u: goto label_2ca710;
        case 0x2ca714u: goto label_2ca714;
        case 0x2ca718u: goto label_2ca718;
        case 0x2ca71cu: goto label_2ca71c;
        case 0x2ca720u: goto label_2ca720;
        case 0x2ca724u: goto label_2ca724;
        case 0x2ca728u: goto label_2ca728;
        case 0x2ca72cu: goto label_2ca72c;
        case 0x2ca730u: goto label_2ca730;
        case 0x2ca734u: goto label_2ca734;
        case 0x2ca738u: goto label_2ca738;
        case 0x2ca73cu: goto label_2ca73c;
        case 0x2ca740u: goto label_2ca740;
        case 0x2ca744u: goto label_2ca744;
        case 0x2ca748u: goto label_2ca748;
        case 0x2ca74cu: goto label_2ca74c;
        case 0x2ca750u: goto label_2ca750;
        case 0x2ca754u: goto label_2ca754;
        case 0x2ca758u: goto label_2ca758;
        case 0x2ca75cu: goto label_2ca75c;
        case 0x2ca760u: goto label_2ca760;
        case 0x2ca764u: goto label_2ca764;
        case 0x2ca768u: goto label_2ca768;
        case 0x2ca76cu: goto label_2ca76c;
        case 0x2ca770u: goto label_2ca770;
        case 0x2ca774u: goto label_2ca774;
        case 0x2ca778u: goto label_2ca778;
        case 0x2ca77cu: goto label_2ca77c;
        case 0x2ca780u: goto label_2ca780;
        case 0x2ca784u: goto label_2ca784;
        case 0x2ca788u: goto label_2ca788;
        case 0x2ca78cu: goto label_2ca78c;
        case 0x2ca790u: goto label_2ca790;
        case 0x2ca794u: goto label_2ca794;
        case 0x2ca798u: goto label_2ca798;
        case 0x2ca79cu: goto label_2ca79c;
        case 0x2ca7a0u: goto label_2ca7a0;
        case 0x2ca7a4u: goto label_2ca7a4;
        case 0x2ca7a8u: goto label_2ca7a8;
        case 0x2ca7acu: goto label_2ca7ac;
        case 0x2ca7b0u: goto label_2ca7b0;
        case 0x2ca7b4u: goto label_2ca7b4;
        case 0x2ca7b8u: goto label_2ca7b8;
        case 0x2ca7bcu: goto label_2ca7bc;
        case 0x2ca7c0u: goto label_2ca7c0;
        case 0x2ca7c4u: goto label_2ca7c4;
        case 0x2ca7c8u: goto label_2ca7c8;
        case 0x2ca7ccu: goto label_2ca7cc;
        case 0x2ca7d0u: goto label_2ca7d0;
        case 0x2ca7d4u: goto label_2ca7d4;
        case 0x2ca7d8u: goto label_2ca7d8;
        case 0x2ca7dcu: goto label_2ca7dc;
        case 0x2ca7e0u: goto label_2ca7e0;
        case 0x2ca7e4u: goto label_2ca7e4;
        case 0x2ca7e8u: goto label_2ca7e8;
        case 0x2ca7ecu: goto label_2ca7ec;
        case 0x2ca7f0u: goto label_2ca7f0;
        case 0x2ca7f4u: goto label_2ca7f4;
        case 0x2ca7f8u: goto label_2ca7f8;
        case 0x2ca7fcu: goto label_2ca7fc;
        case 0x2ca800u: goto label_2ca800;
        case 0x2ca804u: goto label_2ca804;
        case 0x2ca808u: goto label_2ca808;
        case 0x2ca80cu: goto label_2ca80c;
        case 0x2ca810u: goto label_2ca810;
        case 0x2ca814u: goto label_2ca814;
        case 0x2ca818u: goto label_2ca818;
        case 0x2ca81cu: goto label_2ca81c;
        case 0x2ca820u: goto label_2ca820;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca828u: goto label_2ca828;
        case 0x2ca82cu: goto label_2ca82c;
        case 0x2ca830u: goto label_2ca830;
        case 0x2ca834u: goto label_2ca834;
        case 0x2ca838u: goto label_2ca838;
        case 0x2ca83cu: goto label_2ca83c;
        case 0x2ca840u: goto label_2ca840;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca848u: goto label_2ca848;
        case 0x2ca84cu: goto label_2ca84c;
        case 0x2ca850u: goto label_2ca850;
        case 0x2ca854u: goto label_2ca854;
        case 0x2ca858u: goto label_2ca858;
        case 0x2ca85cu: goto label_2ca85c;
        case 0x2ca860u: goto label_2ca860;
        case 0x2ca864u: goto label_2ca864;
        case 0x2ca868u: goto label_2ca868;
        case 0x2ca86cu: goto label_2ca86c;
        case 0x2ca870u: goto label_2ca870;
        case 0x2ca874u: goto label_2ca874;
        case 0x2ca878u: goto label_2ca878;
        case 0x2ca87cu: goto label_2ca87c;
        case 0x2ca880u: goto label_2ca880;
        case 0x2ca884u: goto label_2ca884;
        case 0x2ca888u: goto label_2ca888;
        case 0x2ca88cu: goto label_2ca88c;
        case 0x2ca890u: goto label_2ca890;
        case 0x2ca894u: goto label_2ca894;
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca89cu: goto label_2ca89c;
        case 0x2ca8a0u: goto label_2ca8a0;
        case 0x2ca8a4u: goto label_2ca8a4;
        case 0x2ca8a8u: goto label_2ca8a8;
        case 0x2ca8acu: goto label_2ca8ac;
        case 0x2ca8b0u: goto label_2ca8b0;
        case 0x2ca8b4u: goto label_2ca8b4;
        case 0x2ca8b8u: goto label_2ca8b8;
        case 0x2ca8bcu: goto label_2ca8bc;
        case 0x2ca8c0u: goto label_2ca8c0;
        case 0x2ca8c4u: goto label_2ca8c4;
        case 0x2ca8c8u: goto label_2ca8c8;
        case 0x2ca8ccu: goto label_2ca8cc;
        case 0x2ca8d0u: goto label_2ca8d0;
        case 0x2ca8d4u: goto label_2ca8d4;
        case 0x2ca8d8u: goto label_2ca8d8;
        case 0x2ca8dcu: goto label_2ca8dc;
        case 0x2ca8e0u: goto label_2ca8e0;
        case 0x2ca8e4u: goto label_2ca8e4;
        case 0x2ca8e8u: goto label_2ca8e8;
        case 0x2ca8ecu: goto label_2ca8ec;
        case 0x2ca8f0u: goto label_2ca8f0;
        case 0x2ca8f4u: goto label_2ca8f4;
        case 0x2ca8f8u: goto label_2ca8f8;
        case 0x2ca8fcu: goto label_2ca8fc;
        case 0x2ca900u: goto label_2ca900;
        case 0x2ca904u: goto label_2ca904;
        case 0x2ca908u: goto label_2ca908;
        case 0x2ca90cu: goto label_2ca90c;
        case 0x2ca910u: goto label_2ca910;
        case 0x2ca914u: goto label_2ca914;
        case 0x2ca918u: goto label_2ca918;
        case 0x2ca91cu: goto label_2ca91c;
        case 0x2ca920u: goto label_2ca920;
        case 0x2ca924u: goto label_2ca924;
        case 0x2ca928u: goto label_2ca928;
        case 0x2ca92cu: goto label_2ca92c;
        case 0x2ca930u: goto label_2ca930;
        case 0x2ca934u: goto label_2ca934;
        case 0x2ca938u: goto label_2ca938;
        case 0x2ca93cu: goto label_2ca93c;
        case 0x2ca940u: goto label_2ca940;
        case 0x2ca944u: goto label_2ca944;
        case 0x2ca948u: goto label_2ca948;
        case 0x2ca94cu: goto label_2ca94c;
        case 0x2ca950u: goto label_2ca950;
        case 0x2ca954u: goto label_2ca954;
        case 0x2ca958u: goto label_2ca958;
        case 0x2ca95cu: goto label_2ca95c;
        case 0x2ca960u: goto label_2ca960;
        case 0x2ca964u: goto label_2ca964;
        case 0x2ca968u: goto label_2ca968;
        case 0x2ca96cu: goto label_2ca96c;
        case 0x2ca970u: goto label_2ca970;
        case 0x2ca974u: goto label_2ca974;
        case 0x2ca978u: goto label_2ca978;
        case 0x2ca97cu: goto label_2ca97c;
        case 0x2ca980u: goto label_2ca980;
        case 0x2ca984u: goto label_2ca984;
        case 0x2ca988u: goto label_2ca988;
        case 0x2ca98cu: goto label_2ca98c;
        case 0x2ca990u: goto label_2ca990;
        case 0x2ca994u: goto label_2ca994;
        case 0x2ca998u: goto label_2ca998;
        case 0x2ca99cu: goto label_2ca99c;
        case 0x2ca9a0u: goto label_2ca9a0;
        case 0x2ca9a4u: goto label_2ca9a4;
        case 0x2ca9a8u: goto label_2ca9a8;
        case 0x2ca9acu: goto label_2ca9ac;
        case 0x2ca9b0u: goto label_2ca9b0;
        case 0x2ca9b4u: goto label_2ca9b4;
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2ca9bcu: goto label_2ca9bc;
        case 0x2ca9c0u: goto label_2ca9c0;
        case 0x2ca9c4u: goto label_2ca9c4;
        case 0x2ca9c8u: goto label_2ca9c8;
        case 0x2ca9ccu: goto label_2ca9cc;
        case 0x2ca9d0u: goto label_2ca9d0;
        case 0x2ca9d4u: goto label_2ca9d4;
        case 0x2ca9d8u: goto label_2ca9d8;
        case 0x2ca9dcu: goto label_2ca9dc;
        case 0x2ca9e0u: goto label_2ca9e0;
        case 0x2ca9e4u: goto label_2ca9e4;
        case 0x2ca9e8u: goto label_2ca9e8;
        case 0x2ca9ecu: goto label_2ca9ec;
        case 0x2ca9f0u: goto label_2ca9f0;
        case 0x2ca9f4u: goto label_2ca9f4;
        case 0x2ca9f8u: goto label_2ca9f8;
        case 0x2ca9fcu: goto label_2ca9fc;
        case 0x2caa00u: goto label_2caa00;
        case 0x2caa04u: goto label_2caa04;
        case 0x2caa08u: goto label_2caa08;
        case 0x2caa0cu: goto label_2caa0c;
        case 0x2caa10u: goto label_2caa10;
        case 0x2caa14u: goto label_2caa14;
        case 0x2caa18u: goto label_2caa18;
        case 0x2caa1cu: goto label_2caa1c;
        case 0x2caa20u: goto label_2caa20;
        case 0x2caa24u: goto label_2caa24;
        case 0x2caa28u: goto label_2caa28;
        case 0x2caa2cu: goto label_2caa2c;
        case 0x2caa30u: goto label_2caa30;
        case 0x2caa34u: goto label_2caa34;
        case 0x2caa38u: goto label_2caa38;
        case 0x2caa3cu: goto label_2caa3c;
        case 0x2caa40u: goto label_2caa40;
        case 0x2caa44u: goto label_2caa44;
        case 0x2caa48u: goto label_2caa48;
        case 0x2caa4cu: goto label_2caa4c;
        case 0x2caa50u: goto label_2caa50;
        case 0x2caa54u: goto label_2caa54;
        case 0x2caa58u: goto label_2caa58;
        case 0x2caa5cu: goto label_2caa5c;
        case 0x2caa60u: goto label_2caa60;
        case 0x2caa64u: goto label_2caa64;
        case 0x2caa68u: goto label_2caa68;
        case 0x2caa6cu: goto label_2caa6c;
        case 0x2caa70u: goto label_2caa70;
        case 0x2caa74u: goto label_2caa74;
        case 0x2caa78u: goto label_2caa78;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caa80u: goto label_2caa80;
        case 0x2caa84u: goto label_2caa84;
        case 0x2caa88u: goto label_2caa88;
        case 0x2caa8cu: goto label_2caa8c;
        case 0x2caa90u: goto label_2caa90;
        case 0x2caa94u: goto label_2caa94;
        case 0x2caa98u: goto label_2caa98;
        case 0x2caa9cu: goto label_2caa9c;
        case 0x2caaa0u: goto label_2caaa0;
        case 0x2caaa4u: goto label_2caaa4;
        case 0x2caaa8u: goto label_2caaa8;
        case 0x2caaacu: goto label_2caaac;
        case 0x2caab0u: goto label_2caab0;
        case 0x2caab4u: goto label_2caab4;
        case 0x2caab8u: goto label_2caab8;
        case 0x2caabcu: goto label_2caabc;
        case 0x2caac0u: goto label_2caac0;
        case 0x2caac4u: goto label_2caac4;
        case 0x2caac8u: goto label_2caac8;
        case 0x2caaccu: goto label_2caacc;
        case 0x2caad0u: goto label_2caad0;
        case 0x2caad4u: goto label_2caad4;
        case 0x2caad8u: goto label_2caad8;
        case 0x2caadcu: goto label_2caadc;
        case 0x2caae0u: goto label_2caae0;
        case 0x2caae4u: goto label_2caae4;
        case 0x2caae8u: goto label_2caae8;
        case 0x2caaecu: goto label_2caaec;
        case 0x2caaf0u: goto label_2caaf0;
        case 0x2caaf4u: goto label_2caaf4;
        case 0x2caaf8u: goto label_2caaf8;
        case 0x2caafcu: goto label_2caafc;
        case 0x2cab00u: goto label_2cab00;
        case 0x2cab04u: goto label_2cab04;
        case 0x2cab08u: goto label_2cab08;
        case 0x2cab0cu: goto label_2cab0c;
        case 0x2cab10u: goto label_2cab10;
        case 0x2cab14u: goto label_2cab14;
        case 0x2cab18u: goto label_2cab18;
        case 0x2cab1cu: goto label_2cab1c;
        case 0x2cab20u: goto label_2cab20;
        case 0x2cab24u: goto label_2cab24;
        case 0x2cab28u: goto label_2cab28;
        case 0x2cab2cu: goto label_2cab2c;
        case 0x2cab30u: goto label_2cab30;
        case 0x2cab34u: goto label_2cab34;
        case 0x2cab38u: goto label_2cab38;
        case 0x2cab3cu: goto label_2cab3c;
        case 0x2cab40u: goto label_2cab40;
        case 0x2cab44u: goto label_2cab44;
        case 0x2cab48u: goto label_2cab48;
        case 0x2cab4cu: goto label_2cab4c;
        case 0x2cab50u: goto label_2cab50;
        case 0x2cab54u: goto label_2cab54;
        case 0x2cab58u: goto label_2cab58;
        case 0x2cab5cu: goto label_2cab5c;
        case 0x2cab60u: goto label_2cab60;
        case 0x2cab64u: goto label_2cab64;
        case 0x2cab68u: goto label_2cab68;
        case 0x2cab6cu: goto label_2cab6c;
        case 0x2cab70u: goto label_2cab70;
        case 0x2cab74u: goto label_2cab74;
        case 0x2cab78u: goto label_2cab78;
        case 0x2cab7cu: goto label_2cab7c;
        case 0x2cab80u: goto label_2cab80;
        case 0x2cab84u: goto label_2cab84;
        case 0x2cab88u: goto label_2cab88;
        case 0x2cab8cu: goto label_2cab8c;
        case 0x2cab90u: goto label_2cab90;
        case 0x2cab94u: goto label_2cab94;
        case 0x2cab98u: goto label_2cab98;
        case 0x2cab9cu: goto label_2cab9c;
        case 0x2caba0u: goto label_2caba0;
        case 0x2caba4u: goto label_2caba4;
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabacu: goto label_2cabac;
        case 0x2cabb0u: goto label_2cabb0;
        case 0x2cabb4u: goto label_2cabb4;
        case 0x2cabb8u: goto label_2cabb8;
        case 0x2cabbcu: goto label_2cabbc;
        case 0x2cabc0u: goto label_2cabc0;
        case 0x2cabc4u: goto label_2cabc4;
        case 0x2cabc8u: goto label_2cabc8;
        case 0x2cabccu: goto label_2cabcc;
        case 0x2cabd0u: goto label_2cabd0;
        case 0x2cabd4u: goto label_2cabd4;
        case 0x2cabd8u: goto label_2cabd8;
        case 0x2cabdcu: goto label_2cabdc;
        case 0x2cabe0u: goto label_2cabe0;
        case 0x2cabe4u: goto label_2cabe4;
        case 0x2cabe8u: goto label_2cabe8;
        case 0x2cabecu: goto label_2cabec;
        case 0x2cabf0u: goto label_2cabf0;
        case 0x2cabf4u: goto label_2cabf4;
        case 0x2cabf8u: goto label_2cabf8;
        case 0x2cabfcu: goto label_2cabfc;
        case 0x2cac00u: goto label_2cac00;
        case 0x2cac04u: goto label_2cac04;
        case 0x2cac08u: goto label_2cac08;
        case 0x2cac0cu: goto label_2cac0c;
        case 0x2cac10u: goto label_2cac10;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac18u: goto label_2cac18;
        case 0x2cac1cu: goto label_2cac1c;
        case 0x2cac20u: goto label_2cac20;
        case 0x2cac24u: goto label_2cac24;
        case 0x2cac28u: goto label_2cac28;
        case 0x2cac2cu: goto label_2cac2c;
        case 0x2cac30u: goto label_2cac30;
        case 0x2cac34u: goto label_2cac34;
        case 0x2cac38u: goto label_2cac38;
        case 0x2cac3cu: goto label_2cac3c;
        case 0x2cac40u: goto label_2cac40;
        case 0x2cac44u: goto label_2cac44;
        case 0x2cac48u: goto label_2cac48;
        case 0x2cac4cu: goto label_2cac4c;
        case 0x2cac50u: goto label_2cac50;
        case 0x2cac54u: goto label_2cac54;
        case 0x2cac58u: goto label_2cac58;
        case 0x2cac5cu: goto label_2cac5c;
        case 0x2cac60u: goto label_2cac60;
        case 0x2cac64u: goto label_2cac64;
        case 0x2cac68u: goto label_2cac68;
        case 0x2cac6cu: goto label_2cac6c;
        case 0x2cac70u: goto label_2cac70;
        case 0x2cac74u: goto label_2cac74;
        case 0x2cac78u: goto label_2cac78;
        case 0x2cac7cu: goto label_2cac7c;
        case 0x2cac80u: goto label_2cac80;
        case 0x2cac84u: goto label_2cac84;
        case 0x2cac88u: goto label_2cac88;
        case 0x2cac8cu: goto label_2cac8c;
        case 0x2cac90u: goto label_2cac90;
        case 0x2cac94u: goto label_2cac94;
        case 0x2cac98u: goto label_2cac98;
        case 0x2cac9cu: goto label_2cac9c;
        case 0x2caca0u: goto label_2caca0;
        case 0x2caca4u: goto label_2caca4;
        case 0x2caca8u: goto label_2caca8;
        case 0x2cacacu: goto label_2cacac;
        case 0x2cacb0u: goto label_2cacb0;
        case 0x2cacb4u: goto label_2cacb4;
        case 0x2cacb8u: goto label_2cacb8;
        case 0x2cacbcu: goto label_2cacbc;
        case 0x2cacc0u: goto label_2cacc0;
        case 0x2cacc4u: goto label_2cacc4;
        case 0x2cacc8u: goto label_2cacc8;
        case 0x2cacccu: goto label_2caccc;
        case 0x2cacd0u: goto label_2cacd0;
        case 0x2cacd4u: goto label_2cacd4;
        case 0x2cacd8u: goto label_2cacd8;
        case 0x2cacdcu: goto label_2cacdc;
        case 0x2cace0u: goto label_2cace0;
        case 0x2cace4u: goto label_2cace4;
        case 0x2cace8u: goto label_2cace8;
        case 0x2cacecu: goto label_2cacec;
        case 0x2cacf0u: goto label_2cacf0;
        case 0x2cacf4u: goto label_2cacf4;
        case 0x2cacf8u: goto label_2cacf8;
        case 0x2cacfcu: goto label_2cacfc;
        case 0x2cad00u: goto label_2cad00;
        case 0x2cad04u: goto label_2cad04;
        case 0x2cad08u: goto label_2cad08;
        case 0x2cad0cu: goto label_2cad0c;
        case 0x2cad10u: goto label_2cad10;
        case 0x2cad14u: goto label_2cad14;
        case 0x2cad18u: goto label_2cad18;
        case 0x2cad1cu: goto label_2cad1c;
        case 0x2cad20u: goto label_2cad20;
        case 0x2cad24u: goto label_2cad24;
        case 0x2cad28u: goto label_2cad28;
        case 0x2cad2cu: goto label_2cad2c;
        case 0x2cad30u: goto label_2cad30;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad38u: goto label_2cad38;
        case 0x2cad3cu: goto label_2cad3c;
        case 0x2cad40u: goto label_2cad40;
        case 0x2cad44u: goto label_2cad44;
        case 0x2cad48u: goto label_2cad48;
        case 0x2cad4cu: goto label_2cad4c;
        case 0x2cad50u: goto label_2cad50;
        case 0x2cad54u: goto label_2cad54;
        case 0x2cad58u: goto label_2cad58;
        case 0x2cad5cu: goto label_2cad5c;
        case 0x2cad60u: goto label_2cad60;
        case 0x2cad64u: goto label_2cad64;
        case 0x2cad68u: goto label_2cad68;
        case 0x2cad6cu: goto label_2cad6c;
        case 0x2cad70u: goto label_2cad70;
        case 0x2cad74u: goto label_2cad74;
        case 0x2cad78u: goto label_2cad78;
        case 0x2cad7cu: goto label_2cad7c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad84u: goto label_2cad84;
        case 0x2cad88u: goto label_2cad88;
        case 0x2cad8cu: goto label_2cad8c;
        case 0x2cad90u: goto label_2cad90;
        case 0x2cad94u: goto label_2cad94;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cad9cu: goto label_2cad9c;
        case 0x2cada0u: goto label_2cada0;
        case 0x2cada4u: goto label_2cada4;
        case 0x2cada8u: goto label_2cada8;
        case 0x2cadacu: goto label_2cadac;
        case 0x2cadb0u: goto label_2cadb0;
        case 0x2cadb4u: goto label_2cadb4;
        case 0x2cadb8u: goto label_2cadb8;
        case 0x2cadbcu: goto label_2cadbc;
        case 0x2cadc0u: goto label_2cadc0;
        case 0x2cadc4u: goto label_2cadc4;
        case 0x2cadc8u: goto label_2cadc8;
        case 0x2cadccu: goto label_2cadcc;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cadd4u: goto label_2cadd4;
        case 0x2cadd8u: goto label_2cadd8;
        case 0x2caddcu: goto label_2caddc;
        default: break;
    }

    ctx->pc = 0x2ca3e8u;

label_2ca3e8:
    // 0x2ca3e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ca3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2ca3ec:
    // 0x2ca3ec: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2ca3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2ca3f0:
    // 0x2ca3f0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2ca3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2ca3f4:
    // 0x2ca3f4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2ca3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2ca3f8:
    // 0x2ca3f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca3fc:
    // 0x2ca3fc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2ca3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2ca400:
    // 0x2ca400: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2ca400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2ca404:
    // 0x2ca404: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ca404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2ca408:
    // 0x2ca408: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ca408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ca40c:
    // 0x2ca40c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2ca40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2ca410:
    // 0x2ca410: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2ca410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2ca414:
    // 0x2ca414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ca414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ca418:
    // 0x2ca418: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2ca418u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2ca41c:
    // 0x2ca41c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2ca41cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2ca420:
    // 0x2ca420: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2ca420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2ca424:
    // 0x2ca424: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2ca424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2ca428:
    // 0x2ca428: 0xc0a3678  jal         func_28D9E0
label_2ca42c:
    if (ctx->pc == 0x2CA42Cu) {
        ctx->pc = 0x2CA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA428u;
        // 0x2ca42c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA430u;
        goto label_2ca430;
    }
    ctx->pc = 0x2CA428u;
    SET_GPR_U32(ctx, 31, 0x2CA430u);
    ctx->pc = 0x2CA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA428u;
    // 0x2ca42c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2CA428u, 0x2CA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA430u;
label_2ca430:
    // 0x2ca430: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ca430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca434:
    // 0x2ca434: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ca434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ca438:
    // 0x2ca438: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ca43c:
    // 0x2ca43c: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2ca43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2ca440:
    // 0x2ca440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ca444:
    // 0x2ca444: 0xc0e409a  jal         func_390268
label_2ca448:
    if (ctx->pc == 0x2CA448u) {
        ctx->pc = 0x2CA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA444u;
        // 0x2ca448: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA44Cu;
        goto label_2ca44c;
    }
    ctx->pc = 0x2CA444u;
    SET_GPR_U32(ctx, 31, 0x2CA44Cu);
    ctx->pc = 0x2CA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA444u;
    // 0x2ca448: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CA444u, 0x2CA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA44Cu;
label_2ca44c:
    // 0x2ca44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca450:
    // 0x2ca450: 0xc0a34d6  jal         func_28D358
label_2ca454:
    if (ctx->pc == 0x2CA454u) {
        ctx->pc = 0x2CA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA450u;
        // 0x2ca454: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA458u;
        goto label_2ca458;
    }
    ctx->pc = 0x2CA450u;
    SET_GPR_U32(ctx, 31, 0x2CA458u);
    ctx->pc = 0x2CA454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA450u;
    // 0x2ca454: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2CA450u, 0x2CA458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA458u;
label_2ca458:
    // 0x2ca458: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ca458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca45c:
    // 0x2ca45c: 0x1280024f  beqz        $s4, . + 4 + (0x24F << 2)
label_2ca460:
    if (ctx->pc == 0x2CA460u) {
        ctx->pc = 0x2CA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA45Cu;
        // 0x2ca460: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA464u;
        goto label_2ca464;
    }
    ctx->pc = 0x2CA45Cu;
    {
        const bool branch_taken_0x2ca45c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA45Cu;
        // 0x2ca460: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca45c) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA464u;
label_2ca464:
    // 0x2ca464: 0xc087502  jal         func_21D408
label_2ca468:
    if (ctx->pc == 0x2CA468u) {
        ctx->pc = 0x2CA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA464u;
        // 0x2ca468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA46Cu;
        goto label_2ca46c;
    }
    ctx->pc = 0x2CA464u;
    SET_GPR_U32(ctx, 31, 0x2CA46Cu);
    ctx->pc = 0x2CA468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA464u;
    // 0x2ca468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CA464u, 0x2CA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA46Cu;
label_2ca46c:
    // 0x2ca46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca470:
    // 0x2ca470: 0xc0a3792  jal         func_28DE48
label_2ca474:
    if (ctx->pc == 0x2CA474u) {
        ctx->pc = 0x2CA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA470u;
        // 0x2ca474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA478u;
        goto label_2ca478;
    }
    ctx->pc = 0x2CA470u;
    SET_GPR_U32(ctx, 31, 0x2CA478u);
    ctx->pc = 0x2CA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA470u;
    // 0x2ca474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2CA470u, 0x2CA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA478u;
label_2ca478:
    // 0x2ca478: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
label_2ca47c:
    if (ctx->pc == 0x2CA47Cu) {
        ctx->pc = 0x2CA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA478u;
        // 0x2ca47c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA480u;
        goto label_2ca480;
    }
    ctx->pc = 0x2CA478u;
    {
        const bool branch_taken_0x2ca478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA478u;
        // 0x2ca47c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca478) {
            ctx->pc = 0x2CA848u;
            goto label_2ca848;
        }
    }
    ctx->pc = 0x2CA480u;
label_2ca480:
    // 0x2ca480: 0xc088e60  jal         func_223980
label_2ca484:
    if (ctx->pc == 0x2CA484u) {
        ctx->pc = 0x2CA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA480u;
        // 0x2ca484: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA488u;
        goto label_2ca488;
    }
    ctx->pc = 0x2CA480u;
    SET_GPR_U32(ctx, 31, 0x2CA488u);
    ctx->pc = 0x2CA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA480u;
    // 0x2ca484: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2CA480u, 0x2CA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA488u;
label_2ca488:
    // 0x2ca488: 0x1450000f  bne         $v0, $s0, . + 4 + (0xF << 2)
label_2ca48c:
    if (ctx->pc == 0x2CA48Cu) {
        ctx->pc = 0x2CA490u;
        goto label_2ca490;
    }
    ctx->pc = 0x2CA488u;
    {
        const bool branch_taken_0x2ca488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca488) {
            ctx->pc = 0x2CA4C8u;
            goto label_2ca4c8;
        }
    }
    ctx->pc = 0x2CA490u;
label_2ca490:
    // 0x2ca490: 0xc0a4e54  jal         func_293950
label_2ca494:
    if (ctx->pc == 0x2CA494u) {
        ctx->pc = 0x2CA498u;
        goto label_2ca498;
    }
    ctx->pc = 0x2CA490u;
    SET_GPR_U32(ctx, 31, 0x2CA498u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA490u, 0x2CA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA498u;
label_2ca498:
    // 0x2ca498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca49c:
    // 0x2ca49c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2ca4a0:
    if (ctx->pc == 0x2CA4A0u) {
        ctx->pc = 0x2CA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA49Cu;
        // 0x2ca4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4A4u;
        goto label_2ca4a4;
    }
    ctx->pc = 0x2CA49Cu;
    {
        const bool branch_taken_0x2ca49c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA49Cu;
        // 0x2ca4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca49c) {
            ctx->pc = 0x2CA4B4u;
            goto label_2ca4b4;
        }
    }
    ctx->pc = 0x2CA4A4u;
label_2ca4a4:
    // 0x2ca4a4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2ca4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2ca4a8:
    // 0x2ca4a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca4ac:
    // 0x2ca4ac: 0xc0b2b78  jal         func_2CADE0
label_2ca4b0:
    if (ctx->pc == 0x2CA4B0u) {
        ctx->pc = 0x2CA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4ACu;
        // 0x2ca4b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4B4u;
        goto label_2ca4b4;
    }
    ctx->pc = 0x2CA4ACu;
    SET_GPR_U32(ctx, 31, 0x2CA4B4u);
    ctx->pc = 0x2CA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4ACu;
    // 0x2ca4b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADE0u, 0x2CA4ACu, 0x2CA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4B4u;
label_2ca4b4:
    // 0x2ca4b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca4b8:
    // 0x2ca4b8: 0xc0a35d6  jal         func_28D758
label_2ca4bc:
    if (ctx->pc == 0x2CA4BCu) {
        ctx->pc = 0x2CA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4B8u;
        // 0x2ca4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4C0u;
        goto label_2ca4c0;
    }
    ctx->pc = 0x2CA4B8u;
    SET_GPR_U32(ctx, 31, 0x2CA4C0u);
    ctx->pc = 0x2CA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4B8u;
    // 0x2ca4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CA4B8u, 0x2CA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4C0u;
label_2ca4c0:
    // 0x2ca4c0: 0x10000236  b           . + 4 + (0x236 << 2)
label_2ca4c4:
    if (ctx->pc == 0x2CA4C4u) {
        ctx->pc = 0x2CA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4C0u;
        // 0x2ca4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4C8u;
        goto label_2ca4c8;
    }
    ctx->pc = 0x2CA4C0u;
    {
        const bool branch_taken_0x2ca4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4C0u;
        // 0x2ca4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4c0) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA4C8u;
label_2ca4c8:
    // 0x2ca4c8: 0xc088e40  jal         func_223900
label_2ca4cc:
    if (ctx->pc == 0x2CA4CCu) {
        ctx->pc = 0x2CA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4C8u;
        // 0x2ca4cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4D0u;
        goto label_2ca4d0;
    }
    ctx->pc = 0x2CA4C8u;
    SET_GPR_U32(ctx, 31, 0x2CA4D0u);
    ctx->pc = 0x2CA4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4C8u;
    // 0x2ca4cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2CA4C8u, 0x2CA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4D0u;
label_2ca4d0:
    // 0x2ca4d0: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2ca4d4:
    if (ctx->pc == 0x2CA4D4u) {
        ctx->pc = 0x2CA4D8u;
        goto label_2ca4d8;
    }
    ctx->pc = 0x2CA4D0u;
    {
        const bool branch_taken_0x2ca4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca4d0) {
            ctx->pc = 0x2CA500u;
            goto label_2ca500;
        }
    }
    ctx->pc = 0x2CA4D8u;
label_2ca4d8:
    // 0x2ca4d8: 0xc0a4e54  jal         func_293950
label_2ca4dc:
    if (ctx->pc == 0x2CA4DCu) {
        ctx->pc = 0x2CA4E0u;
        goto label_2ca4e0;
    }
    ctx->pc = 0x2CA4D8u;
    SET_GPR_U32(ctx, 31, 0x2CA4E0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA4D8u, 0x2CA4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4E0u;
label_2ca4e0:
    // 0x2ca4e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca4e4:
    // 0x2ca4e4: 0x5200fff4  beql        $s0, $zero, . + 4 + (-0xC << 2)
label_2ca4e8:
    if (ctx->pc == 0x2CA4E8u) {
        ctx->pc = 0x2CA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4E4u;
        // 0x2ca4e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4ECu;
        goto label_2ca4ec;
    }
    ctx->pc = 0x2CA4E4u;
    {
        const bool branch_taken_0x2ca4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca4e4) {
            ctx->pc = 0x2CA4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA4E4u;
            // 0x2ca4e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA4ECu;
label_2ca4ec:
    // 0x2ca4ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca4f0:
    // 0x2ca4f0: 0xc0ad97e  jal         func_2B65F8
label_2ca4f4:
    if (ctx->pc == 0x2CA4F4u) {
        ctx->pc = 0x2CA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4F0u;
        // 0x2ca4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA4F8u;
        goto label_2ca4f8;
    }
    ctx->pc = 0x2CA4F0u;
    SET_GPR_U32(ctx, 31, 0x2CA4F8u);
    ctx->pc = 0x2CA4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4F0u;
    // 0x2ca4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F8u, 0x2CA4F0u, 0x2CA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4F8u;
label_2ca4f8:
    // 0x2ca4f8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_2ca4fc:
    if (ctx->pc == 0x2CA4FCu) {
        ctx->pc = 0x2CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4F8u;
        // 0x2ca4fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA500u;
        goto label_2ca500;
    }
    ctx->pc = 0x2CA4F8u;
    {
        const bool branch_taken_0x2ca4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4F8u;
        // 0x2ca4fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4f8) {
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA500u;
label_2ca500:
    // 0x2ca500: 0xc088e48  jal         func_223920
label_2ca504:
    if (ctx->pc == 0x2CA504u) {
        ctx->pc = 0x2CA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA500u;
        // 0x2ca504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA508u;
        goto label_2ca508;
    }
    ctx->pc = 0x2CA500u;
    SET_GPR_U32(ctx, 31, 0x2CA508u);
    ctx->pc = 0x2CA504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA500u;
    // 0x2ca504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x2CA500u, 0x2CA508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA508u;
label_2ca508:
    // 0x2ca508: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2ca50c:
    if (ctx->pc == 0x2CA50Cu) {
        ctx->pc = 0x2CA510u;
        goto label_2ca510;
    }
    ctx->pc = 0x2CA508u;
    {
        const bool branch_taken_0x2ca508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca508) {
            ctx->pc = 0x2CA538u;
            goto label_2ca538;
        }
    }
    ctx->pc = 0x2CA510u;
label_2ca510:
    // 0x2ca510: 0xc0a4e54  jal         func_293950
label_2ca514:
    if (ctx->pc == 0x2CA514u) {
        ctx->pc = 0x2CA518u;
        goto label_2ca518;
    }
    ctx->pc = 0x2CA510u;
    SET_GPR_U32(ctx, 31, 0x2CA518u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA510u, 0x2CA518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA518u;
label_2ca518:
    // 0x2ca518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca51c:
    // 0x2ca51c: 0x5200ffe6  beql        $s0, $zero, . + 4 + (-0x1A << 2)
label_2ca520:
    if (ctx->pc == 0x2CA520u) {
        ctx->pc = 0x2CA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA51Cu;
        // 0x2ca520: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA524u;
        goto label_2ca524;
    }
    ctx->pc = 0x2CA51Cu;
    {
        const bool branch_taken_0x2ca51c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca51c) {
            ctx->pc = 0x2CA520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA51Cu;
            // 0x2ca520: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA524u;
label_2ca524:
    // 0x2ca524: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca528:
    // 0x2ca528: 0xc0ada06  jal         func_2B6818
label_2ca52c:
    if (ctx->pc == 0x2CA52Cu) {
        ctx->pc = 0x2CA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA528u;
        // 0x2ca52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA530u;
        goto label_2ca530;
    }
    ctx->pc = 0x2CA528u;
    SET_GPR_U32(ctx, 31, 0x2CA530u);
    ctx->pc = 0x2CA52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA528u;
    // 0x2ca52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6818u, 0x2CA528u, 0x2CA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA530u;
label_2ca530:
    // 0x2ca530: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_2ca534:
    if (ctx->pc == 0x2CA534u) {
        ctx->pc = 0x2CA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA530u;
        // 0x2ca534: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA538u;
        goto label_2ca538;
    }
    ctx->pc = 0x2CA530u;
    {
        const bool branch_taken_0x2ca530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA530u;
        // 0x2ca534: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca530) {
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA538u;
label_2ca538:
    // 0x2ca538: 0xc088e38  jal         func_2238E0
label_2ca53c:
    if (ctx->pc == 0x2CA53Cu) {
        ctx->pc = 0x2CA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA538u;
        // 0x2ca53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA540u;
        goto label_2ca540;
    }
    ctx->pc = 0x2CA538u;
    SET_GPR_U32(ctx, 31, 0x2CA540u);
    ctx->pc = 0x2CA53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA538u;
    // 0x2ca53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x2CA538u, 0x2CA540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA540u;
label_2ca540:
    // 0x2ca540: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2ca544:
    if (ctx->pc == 0x2CA544u) {
        ctx->pc = 0x2CA548u;
        goto label_2ca548;
    }
    ctx->pc = 0x2CA540u;
    {
        const bool branch_taken_0x2ca540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca540) {
            ctx->pc = 0x2CA570u;
            goto label_2ca570;
        }
    }
    ctx->pc = 0x2CA548u;
label_2ca548:
    // 0x2ca548: 0xc0a4e54  jal         func_293950
label_2ca54c:
    if (ctx->pc == 0x2CA54Cu) {
        ctx->pc = 0x2CA550u;
        goto label_2ca550;
    }
    ctx->pc = 0x2CA548u;
    SET_GPR_U32(ctx, 31, 0x2CA550u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA548u, 0x2CA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA550u;
label_2ca550:
    // 0x2ca550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca554:
    // 0x2ca554: 0x5200ffd8  beql        $s0, $zero, . + 4 + (-0x28 << 2)
label_2ca558:
    if (ctx->pc == 0x2CA558u) {
        ctx->pc = 0x2CA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA554u;
        // 0x2ca558: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA55Cu;
        goto label_2ca55c;
    }
    ctx->pc = 0x2CA554u;
    {
        const bool branch_taken_0x2ca554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca554) {
            ctx->pc = 0x2CA558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA554u;
            // 0x2ca558: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA55Cu;
label_2ca55c:
    // 0x2ca55c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca560:
    // 0x2ca560: 0xc0adae2  jal         func_2B6B88
label_2ca564:
    if (ctx->pc == 0x2CA564u) {
        ctx->pc = 0x2CA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA560u;
        // 0x2ca564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA568u;
        goto label_2ca568;
    }
    ctx->pc = 0x2CA560u;
    SET_GPR_U32(ctx, 31, 0x2CA568u);
    ctx->pc = 0x2CA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA560u;
    // 0x2ca564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6B88u, 0x2CA560u, 0x2CA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA568u;
label_2ca568:
    // 0x2ca568: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_2ca56c:
    if (ctx->pc == 0x2CA56Cu) {
        ctx->pc = 0x2CA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA568u;
        // 0x2ca56c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA570u;
        goto label_2ca570;
    }
    ctx->pc = 0x2CA568u;
    {
        const bool branch_taken_0x2ca568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA568u;
        // 0x2ca56c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca568) {
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA570u;
label_2ca570:
    // 0x2ca570: 0xc088edc  jal         func_223B70
label_2ca574:
    if (ctx->pc == 0x2CA574u) {
        ctx->pc = 0x2CA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA570u;
        // 0x2ca574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA578u;
        goto label_2ca578;
    }
    ctx->pc = 0x2CA570u;
    SET_GPR_U32(ctx, 31, 0x2CA578u);
    ctx->pc = 0x2CA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA570u;
    // 0x2ca574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2CA570u, 0x2CA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA578u;
label_2ca578:
    // 0x2ca578: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2ca57c:
    if (ctx->pc == 0x2CA57Cu) {
        ctx->pc = 0x2CA580u;
        goto label_2ca580;
    }
    ctx->pc = 0x2CA578u;
    {
        const bool branch_taken_0x2ca578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca578) {
            ctx->pc = 0x2CA5A8u;
            goto label_2ca5a8;
        }
    }
    ctx->pc = 0x2CA580u;
label_2ca580:
    // 0x2ca580: 0xc0a4e54  jal         func_293950
label_2ca584:
    if (ctx->pc == 0x2CA584u) {
        ctx->pc = 0x2CA588u;
        goto label_2ca588;
    }
    ctx->pc = 0x2CA580u;
    SET_GPR_U32(ctx, 31, 0x2CA588u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA580u, 0x2CA588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA588u;
label_2ca588:
    // 0x2ca588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca58c:
    // 0x2ca58c: 0x5200ffca  beql        $s0, $zero, . + 4 + (-0x36 << 2)
label_2ca590:
    if (ctx->pc == 0x2CA590u) {
        ctx->pc = 0x2CA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA58Cu;
        // 0x2ca590: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA594u;
        goto label_2ca594;
    }
    ctx->pc = 0x2CA58Cu;
    {
        const bool branch_taken_0x2ca58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca58c) {
            ctx->pc = 0x2CA590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA58Cu;
            // 0x2ca590: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA594u;
label_2ca594:
    // 0x2ca594: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca598:
    // 0x2ca598: 0xc0adb70  jal         func_2B6DC0
label_2ca59c:
    if (ctx->pc == 0x2CA59Cu) {
        ctx->pc = 0x2CA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA598u;
        // 0x2ca59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5A0u;
        goto label_2ca5a0;
    }
    ctx->pc = 0x2CA598u;
    SET_GPR_U32(ctx, 31, 0x2CA5A0u);
    ctx->pc = 0x2CA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA598u;
    // 0x2ca59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DC0u, 0x2CA598u, 0x2CA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5A0u;
label_2ca5a0:
    // 0x2ca5a0: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_2ca5a4:
    if (ctx->pc == 0x2CA5A4u) {
        ctx->pc = 0x2CA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5A0u;
        // 0x2ca5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5A8u;
        goto label_2ca5a8;
    }
    ctx->pc = 0x2CA5A0u;
    {
        const bool branch_taken_0x2ca5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5A0u;
        // 0x2ca5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5a0) {
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA5A8u;
label_2ca5a8:
    // 0x2ca5a8: 0xc088ee6  jal         func_223B98
label_2ca5ac:
    if (ctx->pc == 0x2CA5ACu) {
        ctx->pc = 0x2CA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5A8u;
        // 0x2ca5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5B0u;
        goto label_2ca5b0;
    }
    ctx->pc = 0x2CA5A8u;
    SET_GPR_U32(ctx, 31, 0x2CA5B0u);
    ctx->pc = 0x2CA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5A8u;
    // 0x2ca5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2CA5A8u, 0x2CA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5B0u;
label_2ca5b0:
    // 0x2ca5b0: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2ca5b4:
    if (ctx->pc == 0x2CA5B4u) {
        ctx->pc = 0x2CA5B8u;
        goto label_2ca5b8;
    }
    ctx->pc = 0x2CA5B0u;
    {
        const bool branch_taken_0x2ca5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca5b0) {
            ctx->pc = 0x2CA5E0u;
            goto label_2ca5e0;
        }
    }
    ctx->pc = 0x2CA5B8u;
label_2ca5b8:
    // 0x2ca5b8: 0xc0a4e54  jal         func_293950
label_2ca5bc:
    if (ctx->pc == 0x2CA5BCu) {
        ctx->pc = 0x2CA5C0u;
        goto label_2ca5c0;
    }
    ctx->pc = 0x2CA5B8u;
    SET_GPR_U32(ctx, 31, 0x2CA5C0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA5B8u, 0x2CA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5C0u;
label_2ca5c0:
    // 0x2ca5c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5c4:
    // 0x2ca5c4: 0x5200ffbc  beql        $s0, $zero, . + 4 + (-0x44 << 2)
label_2ca5c8:
    if (ctx->pc == 0x2CA5C8u) {
        ctx->pc = 0x2CA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5C4u;
        // 0x2ca5c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5CCu;
        goto label_2ca5cc;
    }
    ctx->pc = 0x2CA5C4u;
    {
        const bool branch_taken_0x2ca5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5c4) {
            ctx->pc = 0x2CA5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA5C4u;
            // 0x2ca5c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA5CCu;
label_2ca5cc:
    // 0x2ca5cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca5d0:
    // 0x2ca5d0: 0xc0ad27e  jal         func_2B49F8
label_2ca5d4:
    if (ctx->pc == 0x2CA5D4u) {
        ctx->pc = 0x2CA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5D0u;
        // 0x2ca5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5D8u;
        goto label_2ca5d8;
    }
    ctx->pc = 0x2CA5D0u;
    SET_GPR_U32(ctx, 31, 0x2CA5D8u);
    ctx->pc = 0x2CA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5D0u;
    // 0x2ca5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x2CA5D0u, 0x2CA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5D8u;
label_2ca5d8:
    // 0x2ca5d8: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
label_2ca5dc:
    if (ctx->pc == 0x2CA5DCu) {
        ctx->pc = 0x2CA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5D8u;
        // 0x2ca5dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5E0u;
        goto label_2ca5e0;
    }
    ctx->pc = 0x2CA5D8u;
    {
        const bool branch_taken_0x2ca5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5D8u;
        // 0x2ca5dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5d8) {
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA5E0u;
label_2ca5e0:
    // 0x2ca5e0: 0xc088ef0  jal         func_223BC0
label_2ca5e4:
    if (ctx->pc == 0x2CA5E4u) {
        ctx->pc = 0x2CA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5E0u;
        // 0x2ca5e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5E8u;
        goto label_2ca5e8;
    }
    ctx->pc = 0x2CA5E0u;
    SET_GPR_U32(ctx, 31, 0x2CA5E8u);
    ctx->pc = 0x2CA5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5E0u;
    // 0x2ca5e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2CA5E0u, 0x2CA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5E8u;
label_2ca5e8:
    // 0x2ca5e8: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_2ca5ec:
    if (ctx->pc == 0x2CA5ECu) {
        ctx->pc = 0x2CA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5E8u;
        // 0x2ca5ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA5F0u;
        goto label_2ca5f0;
    }
    ctx->pc = 0x2CA5E8u;
    {
        const bool branch_taken_0x2ca5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ca5e8) {
            ctx->pc = 0x2CA5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA5E8u;
            // 0x2ca5ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA618u;
            goto label_2ca618;
        }
    }
    ctx->pc = 0x2CA5F0u;
label_2ca5f0:
    // 0x2ca5f0: 0xc0a4e54  jal         func_293950
label_2ca5f4:
    if (ctx->pc == 0x2CA5F4u) {
        ctx->pc = 0x2CA5F8u;
        goto label_2ca5f8;
    }
    ctx->pc = 0x2CA5F0u;
    SET_GPR_U32(ctx, 31, 0x2CA5F8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA5F0u, 0x2CA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5F8u;
label_2ca5f8:
    // 0x2ca5f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5fc:
    // 0x2ca5fc: 0x5200ffae  beql        $s0, $zero, . + 4 + (-0x52 << 2)
label_2ca600:
    if (ctx->pc == 0x2CA600u) {
        ctx->pc = 0x2CA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5FCu;
        // 0x2ca600: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA604u;
        goto label_2ca604;
    }
    ctx->pc = 0x2CA5FCu;
    {
        const bool branch_taken_0x2ca5fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5fc) {
            ctx->pc = 0x2CA600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA5FCu;
            // 0x2ca600: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA604u;
label_2ca604:
    // 0x2ca604: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca608:
    // 0x2ca608: 0xc0ad2e2  jal         func_2B4B88
label_2ca60c:
    if (ctx->pc == 0x2CA60Cu) {
        ctx->pc = 0x2CA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA608u;
        // 0x2ca60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA610u;
        goto label_2ca610;
    }
    ctx->pc = 0x2CA608u;
    SET_GPR_U32(ctx, 31, 0x2CA610u);
    ctx->pc = 0x2CA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA608u;
    // 0x2ca60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B88u, 0x2CA608u, 0x2CA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA610u;
label_2ca610:
    // 0x2ca610: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
label_2ca614:
    if (ctx->pc == 0x2CA614u) {
        ctx->pc = 0x2CA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA610u;
        // 0x2ca614: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA618u;
        goto label_2ca618;
    }
    ctx->pc = 0x2CA610u;
    {
        const bool branch_taken_0x2ca610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA610u;
        // 0x2ca614: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca610) {
            ctx->pc = 0x2CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4b8;
        }
    }
    ctx->pc = 0x2CA618u;
label_2ca618:
    // 0x2ca618: 0x84620148  lh          $v0, 0x148($v1)
    ctx->pc = 0x2ca618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
label_2ca61c:
    // 0x2ca61c: 0x2c420013  sltiu       $v0, $v0, 0x13
    ctx->pc = 0x2ca61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_2ca620:
    // 0x2ca620: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2ca624:
    if (ctx->pc == 0x2CA624u) {
        ctx->pc = 0x2CA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA620u;
        // 0x2ca624: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA628u;
        goto label_2ca628;
    }
    ctx->pc = 0x2CA620u;
    {
        const bool branch_taken_0x2ca620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA620u;
        // 0x2ca624: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca620) {
            ctx->pc = 0x2CA690u;
            goto label_2ca690;
        }
    }
    ctx->pc = 0x2CA628u;
label_2ca628:
    // 0x2ca628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca62c:
    // 0x2ca62c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ca62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca630:
    // 0x2ca630: 0xc0891de  jal         func_224778
label_2ca634:
    if (ctx->pc == 0x2CA634u) {
        ctx->pc = 0x2CA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA630u;
        // 0x2ca634: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA638u;
        goto label_2ca638;
    }
    ctx->pc = 0x2CA630u;
    SET_GPR_U32(ctx, 31, 0x2CA638u);
    ctx->pc = 0x2CA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA630u;
    // 0x2ca634: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2CA630u, 0x2CA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA638u;
label_2ca638:
    // 0x2ca638: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca63c:
    // 0x2ca63c: 0x16700014  bne         $s3, $s0, . + 4 + (0x14 << 2)
label_2ca640:
    if (ctx->pc == 0x2CA640u) {
        ctx->pc = 0x2CA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA63Cu;
        // 0x2ca640: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA644u;
        goto label_2ca644;
    }
    ctx->pc = 0x2CA63Cu;
    {
        const bool branch_taken_0x2ca63c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x2CA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA63Cu;
        // 0x2ca640: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca63c) {
            ctx->pc = 0x2CA690u;
            goto label_2ca690;
        }
    }
    ctx->pc = 0x2CA644u;
label_2ca644:
    // 0x2ca644: 0xc087502  jal         func_21D408
label_2ca648:
    if (ctx->pc == 0x2CA648u) {
        ctx->pc = 0x2CA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA644u;
        // 0x2ca648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA64Cu;
        goto label_2ca64c;
    }
    ctx->pc = 0x2CA644u;
    SET_GPR_U32(ctx, 31, 0x2CA64Cu);
    ctx->pc = 0x2CA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA644u;
    // 0x2ca648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CA644u, 0x2CA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA64Cu;
label_2ca64c:
    // 0x2ca64c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca650:
    // 0x2ca650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ca650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca654:
    // 0x2ca654: 0xc0a4402  jal         func_291008
label_2ca658:
    if (ctx->pc == 0x2CA658u) {
        ctx->pc = 0x2CA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA654u;
        // 0x2ca658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA65Cu;
        goto label_2ca65c;
    }
    ctx->pc = 0x2CA654u;
    SET_GPR_U32(ctx, 31, 0x2CA65Cu);
    ctx->pc = 0x2CA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA654u;
    // 0x2ca658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291008u, 0x2CA654u, 0x2CA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA65Cu;
label_2ca65c:
    // 0x2ca65c: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_2ca660:
    if (ctx->pc == 0x2CA660u) {
        ctx->pc = 0x2CA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA65Cu;
        // 0x2ca660: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA664u;
        goto label_2ca664;
    }
    ctx->pc = 0x2CA65Cu;
    {
        const bool branch_taken_0x2ca65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2CA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA65Cu;
        // 0x2ca660: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca65c) {
            ctx->pc = 0x2CA690u;
            goto label_2ca690;
        }
    }
    ctx->pc = 0x2CA664u;
label_2ca664:
    // 0x2ca664: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca668:
    // 0x2ca668: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ca668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca66c:
    // 0x2ca66c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ca66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2ca670:
    // 0x2ca670: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ca670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ca674:
    // 0x2ca674: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2ca674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2ca678:
    // 0x2ca678: 0xc0a3892  jal         func_28E248
label_2ca67c:
    if (ctx->pc == 0x2CA67Cu) {
        ctx->pc = 0x2CA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA678u;
        // 0x2ca67c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA680u;
        goto label_2ca680;
    }
    ctx->pc = 0x2CA678u;
    SET_GPR_U32(ctx, 31, 0x2CA680u);
    ctx->pc = 0x2CA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA678u;
    // 0x2ca67c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2CA678u, 0x2CA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA680u;
label_2ca680:
    // 0x2ca680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ca680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca684:
    // 0x2ca684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca688:
    // 0x2ca688: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_2ca68c:
    if (ctx->pc == 0x2CA68Cu) {
        ctx->pc = 0x2CA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA688u;
        // 0x2ca68c: 0xa4600148  sh          $zero, 0x148($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA690u;
        goto label_2ca690;
    }
    ctx->pc = 0x2CA688u;
    {
        const bool branch_taken_0x2ca688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA688u;
        // 0x2ca68c: 0xa4600148  sh          $zero, 0x148($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca688) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA690u;
label_2ca690:
    // 0x2ca690: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2ca690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2ca694:
    // 0x2ca694: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2ca694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2ca698:
    // 0x2ca698: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ca698u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ca69c:
    // 0x2ca69c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2ca69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2ca6a0:
    // 0x2ca6a0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca6a4:
    // 0x2ca6a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ca6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ca6a8:
    // 0x2ca6a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ca6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ca6ac:
    // 0x2ca6ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ca6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ca6b0:
    // 0x2ca6b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ca6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ca6b4:
    // 0x2ca6b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ca6b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ca6b8:
    // 0x2ca6b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2ca6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2ca6bc:
    // 0x2ca6bc: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2ca6bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2ca6c0:
    // 0x2ca6c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ca6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ca6c4:
    // 0x2ca6c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ca6c8:
    // 0x2ca6c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ca6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ca6cc:
    // 0x2ca6cc: 0xc0cdb38  jal         func_336CE0
label_2ca6d0:
    if (ctx->pc == 0x2CA6D0u) {
        ctx->pc = 0x2CA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6CCu;
        // 0x2ca6d0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA6D4u;
        goto label_2ca6d4;
    }
    ctx->pc = 0x2CA6CCu;
    SET_GPR_U32(ctx, 31, 0x2CA6D4u);
    ctx->pc = 0x2CA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA6CCu;
    // 0x2ca6d0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CA6CCu, 0x2CA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6D4u;
label_2ca6d4:
    // 0x2ca6d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca6d8:
    // 0x2ca6d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ca6d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ca6dc:
    // 0x2ca6dc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2ca6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2ca6e0:
    // 0x2ca6e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ca6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ca6e4:
    // 0x2ca6e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ca6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ca6e8:
    // 0x2ca6e8: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2ca6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca6ec:
    // 0x2ca6ec: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x2ca6ecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2ca6f0:
    // 0x2ca6f0: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2ca6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_2ca6f4:
    // 0x2ca6f4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2ca6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca6f8:
    // 0x2ca6f8: 0x0  nop
    ctx->pc = 0x2ca6f8u;
    // NOP
label_2ca6fc:
    // 0x2ca6fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2ca700:
    if (ctx->pc == 0x2CA700u) {
        ctx->pc = 0x2CA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6FCu;
        // 0x2ca700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA704u;
        goto label_2ca704;
    }
    ctx->pc = 0x2CA6FCu;
    {
        const bool branch_taken_0x2ca6fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6FCu;
        // 0x2ca700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6fc) {
            ctx->pc = 0x2CA724u;
            goto label_2ca724;
        }
    }
    ctx->pc = 0x2CA704u;
label_2ca704:
    // 0x2ca704: 0xc088fa8  jal         func_223EA0
label_2ca708:
    if (ctx->pc == 0x2CA708u) {
        ctx->pc = 0x2CA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA704u;
        // 0x2ca708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA70Cu;
        goto label_2ca70c;
    }
    ctx->pc = 0x2CA704u;
    SET_GPR_U32(ctx, 31, 0x2CA70Cu);
    ctx->pc = 0x2CA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA704u;
    // 0x2ca708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2CA704u, 0x2CA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA70Cu;
label_2ca70c:
    // 0x2ca70c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2ca710:
    if (ctx->pc == 0x2CA710u) {
        ctx->pc = 0x2CA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA70Cu;
        // 0x2ca710: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA714u;
        goto label_2ca714;
    }
    ctx->pc = 0x2CA70Cu;
    {
        const bool branch_taken_0x2ca70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca70c) {
            ctx->pc = 0x2CA710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA70Cu;
            // 0x2ca710: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA728u;
            goto label_2ca728;
        }
    }
    ctx->pc = 0x2CA714u;
label_2ca714:
    // 0x2ca714: 0xc089000  jal         func_224000
label_2ca718:
    if (ctx->pc == 0x2CA718u) {
        ctx->pc = 0x2CA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA714u;
        // 0x2ca718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA71Cu;
        goto label_2ca71c;
    }
    ctx->pc = 0x2CA714u;
    SET_GPR_U32(ctx, 31, 0x2CA71Cu);
    ctx->pc = 0x2CA718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA714u;
    // 0x2ca718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2CA714u, 0x2CA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA71Cu;
label_2ca71c:
    // 0x2ca71c: 0x1040019f  beqz        $v0, . + 4 + (0x19F << 2)
label_2ca720:
    if (ctx->pc == 0x2CA720u) {
        ctx->pc = 0x2CA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA71Cu;
        // 0x2ca720: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA724u;
        goto label_2ca724;
    }
    ctx->pc = 0x2CA71Cu;
    {
        const bool branch_taken_0x2ca71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA71Cu;
        // 0x2ca720: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca71c) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA724u;
label_2ca724:
    // 0x2ca724: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2ca724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ca728:
    // 0x2ca728: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2ca72c:
    // 0x2ca72c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2ca730:
    if (ctx->pc == 0x2CA730u) {
        ctx->pc = 0x2CA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA72Cu;
        // 0x2ca730: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA734u;
        goto label_2ca734;
    }
    ctx->pc = 0x2CA72Cu;
    {
        const bool branch_taken_0x2ca72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca72c) {
            ctx->pc = 0x2CA730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA72Cu;
            // 0x2ca730: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA734u;
            goto label_2ca734;
        }
    }
    ctx->pc = 0x2CA734u;
label_2ca734:
    // 0x2ca734: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2ca734u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2ca738:
    // 0x2ca738: 0x1810  mfhi        $v1
    ctx->pc = 0x2ca738u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2ca73c:
    // 0x2ca73c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2ca740:
    if (ctx->pc == 0x2CA740u) {
        ctx->pc = 0x2CA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA73Cu;
        // 0x2ca740: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA744u;
        goto label_2ca744;
    }
    ctx->pc = 0x2CA73Cu;
    {
        const bool branch_taken_0x2ca73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA73Cu;
        // 0x2ca740: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca73c) {
            ctx->pc = 0x2CA75Cu;
            goto label_2ca75c;
        }
    }
    ctx->pc = 0x2CA744u;
label_2ca744:
    // 0x2ca744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca748:
    // 0x2ca748: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ca748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca74c:
    // 0x2ca74c: 0xc08886c  jal         func_2221B0
label_2ca750:
    if (ctx->pc == 0x2CA750u) {
        ctx->pc = 0x2CA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA74Cu;
        // 0x2ca750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA754u;
        goto label_2ca754;
    }
    ctx->pc = 0x2CA74Cu;
    SET_GPR_U32(ctx, 31, 0x2CA754u);
    ctx->pc = 0x2CA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA74Cu;
    // 0x2ca750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2CA74Cu, 0x2CA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA754u;
label_2ca754:
    // 0x2ca754: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2ca758:
    if (ctx->pc == 0x2CA758u) {
        ctx->pc = 0x2CA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA754u;
        // 0x2ca758: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA75Cu;
        goto label_2ca75c;
    }
    ctx->pc = 0x2CA754u;
    {
        const bool branch_taken_0x2ca754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA754u;
        // 0x2ca758: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca754) {
            ctx->pc = 0x2CA848u;
            goto label_2ca848;
        }
    }
    ctx->pc = 0x2CA75Cu;
label_2ca75c:
    // 0x2ca75c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2ca75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ca760:
    // 0x2ca760: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2ca764:
    // 0x2ca764: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ca768:
    // 0x2ca768: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2ca768u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ca76c:
    // 0x2ca76c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_2ca770:
    if (ctx->pc == 0x2CA770u) {
        ctx->pc = 0x2CA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA76Cu;
        // 0x2ca770: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA774u;
        goto label_2ca774;
    }
    ctx->pc = 0x2CA76Cu;
    {
        const bool branch_taken_0x2ca76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA76Cu;
        // 0x2ca770: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca76c) {
            ctx->pc = 0x2CA7E0u;
            goto label_2ca7e0;
        }
    }
    ctx->pc = 0x2CA774u;
label_2ca774:
    // 0x2ca774: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca778:
    // 0x2ca778: 0xc0a3fa4  jal         func_28FE90
label_2ca77c:
    if (ctx->pc == 0x2CA77Cu) {
        ctx->pc = 0x2CA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA778u;
        // 0x2ca77c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA780u;
        goto label_2ca780;
    }
    ctx->pc = 0x2CA778u;
    SET_GPR_U32(ctx, 31, 0x2CA780u);
    ctx->pc = 0x2CA77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA778u;
    // 0x2ca77c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2CA778u, 0x2CA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA780u;
label_2ca780:
    // 0x2ca780: 0xc0e409a  jal         func_390268
label_2ca784:
    if (ctx->pc == 0x2CA784u) {
        ctx->pc = 0x2CA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA780u;
        // 0x2ca784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA788u;
        goto label_2ca788;
    }
    ctx->pc = 0x2CA780u;
    SET_GPR_U32(ctx, 31, 0x2CA788u);
    ctx->pc = 0x2CA784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA780u;
    // 0x2ca784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CA780u, 0x2CA788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA788u;
label_2ca788:
    // 0x2ca788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca78c:
    // 0x2ca78c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2ca790:
    if (ctx->pc == 0x2CA790u) {
        ctx->pc = 0x2CA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA78Cu;
        // 0x2ca790: 0x8ec3b734  lw          $v1, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA794u;
        goto label_2ca794;
    }
    ctx->pc = 0x2CA78Cu;
    {
        const bool branch_taken_0x2ca78c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA78Cu;
        // 0x2ca790: 0x8ec3b734  lw          $v1, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca78c) {
            ctx->pc = 0x2CA7D4u;
            goto label_2ca7d4;
        }
    }
    ctx->pc = 0x2CA794u;
label_2ca794:
    // 0x2ca794: 0x52140010  beql        $s0, $s4, . + 4 + (0x10 << 2)
label_2ca798:
    if (ctx->pc == 0x2CA798u) {
        ctx->pc = 0x2CA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA794u;
        // 0x2ca798: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA79Cu;
        goto label_2ca79c;
    }
    ctx->pc = 0x2CA794u;
    {
        const bool branch_taken_0x2ca794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ca794) {
            ctx->pc = 0x2CA798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA794u;
            // 0x2ca798: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA79Cu;
label_2ca79c:
    // 0x2ca79c: 0xc087502  jal         func_21D408
label_2ca7a0:
    if (ctx->pc == 0x2CA7A0u) {
        ctx->pc = 0x2CA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA79Cu;
        // 0x2ca7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7A4u;
        goto label_2ca7a4;
    }
    ctx->pc = 0x2CA79Cu;
    SET_GPR_U32(ctx, 31, 0x2CA7A4u);
    ctx->pc = 0x2CA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA79Cu;
    // 0x2ca7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CA79Cu, 0x2CA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7A4u;
label_2ca7a4:
    // 0x2ca7a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca7a8:
    // 0x2ca7a8: 0xc0a404e  jal         func_290138
label_2ca7ac:
    if (ctx->pc == 0x2CA7ACu) {
        ctx->pc = 0x2CA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7A8u;
        // 0x2ca7ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7B0u;
        goto label_2ca7b0;
    }
    ctx->pc = 0x2CA7A8u;
    SET_GPR_U32(ctx, 31, 0x2CA7B0u);
    ctx->pc = 0x2CA7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7A8u;
    // 0x2ca7ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2CA7A8u, 0x2CA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7B0u;
label_2ca7b0:
    // 0x2ca7b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca7b4:
    // 0x2ca7b4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2ca7b8:
    if (ctx->pc == 0x2CA7B8u) {
        ctx->pc = 0x2CA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7B4u;
        // 0x2ca7b8: 0x8ec3b734  lw          $v1, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7BCu;
        goto label_2ca7bc;
    }
    ctx->pc = 0x2CA7B4u;
    {
        const bool branch_taken_0x2ca7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7B4u;
        // 0x2ca7b8: 0x8ec3b734  lw          $v1, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7b4) {
            ctx->pc = 0x2CA7D4u;
            goto label_2ca7d4;
        }
    }
    ctx->pc = 0x2CA7BCu;
label_2ca7bc:
    // 0x2ca7bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca7c0:
    // 0x2ca7c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca7c4:
    // 0x2ca7c4: 0xc0a33f8  jal         func_28CFE0
label_2ca7c8:
    if (ctx->pc == 0x2CA7C8u) {
        ctx->pc = 0x2CA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7C4u;
        // 0x2ca7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7CCu;
        goto label_2ca7cc;
    }
    ctx->pc = 0x2CA7C4u;
    SET_GPR_U32(ctx, 31, 0x2CA7CCu);
    ctx->pc = 0x2CA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7C4u;
    // 0x2ca7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2CA7C4u, 0x2CA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7CCu;
label_2ca7cc:
    // 0x2ca7cc: 0x10000173  b           . + 4 + (0x173 << 2)
label_2ca7d0:
    if (ctx->pc == 0x2CA7D0u) {
        ctx->pc = 0x2CA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7CCu;
        // 0x2ca7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7D4u;
        goto label_2ca7d4;
    }
    ctx->pc = 0x2CA7CCu;
    {
        const bool branch_taken_0x2ca7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7CCu;
        // 0x2ca7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7cc) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA7D4u;
label_2ca7d4:
    // 0x2ca7d4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ca7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ca7d8:
    // 0x2ca7d8: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2ca7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
label_2ca7dc:
    // 0x2ca7dc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2ca7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2ca7e0:
    // 0x2ca7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca7e4:
    // 0x2ca7e4: 0xc0a7c26  jal         func_29F098
label_2ca7e8:
    if (ctx->pc == 0x2CA7E8u) {
        ctx->pc = 0x2CA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7E4u;
        // 0x2ca7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7ECu;
        goto label_2ca7ec;
    }
    ctx->pc = 0x2CA7E4u;
    SET_GPR_U32(ctx, 31, 0x2CA7ECu);
    ctx->pc = 0x2CA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7E4u;
    // 0x2ca7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F098u, 0x2CA7E4u, 0x2CA7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7ECu;
label_2ca7ec:
    // 0x2ca7ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2ca7f0:
    if (ctx->pc == 0x2CA7F0u) {
        ctx->pc = 0x2CA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7ECu;
        // 0x2ca7f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7F4u;
        goto label_2ca7f4;
    }
    ctx->pc = 0x2CA7ECu;
    {
        const bool branch_taken_0x2ca7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca7ec) {
            ctx->pc = 0x2CA7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA7ECu;
            // 0x2ca7f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA810u;
            goto label_2ca810;
        }
    }
    ctx->pc = 0x2CA7F4u;
label_2ca7f4:
    // 0x2ca7f4: 0xc087502  jal         func_21D408
label_2ca7f8:
    if (ctx->pc == 0x2CA7F8u) {
        ctx->pc = 0x2CA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7F4u;
        // 0x2ca7f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA7FCu;
        goto label_2ca7fc;
    }
    ctx->pc = 0x2CA7F4u;
    SET_GPR_U32(ctx, 31, 0x2CA7FCu);
    ctx->pc = 0x2CA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7F4u;
    // 0x2ca7f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CA7F4u, 0x2CA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7FCu;
label_2ca7fc:
    // 0x2ca7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca800:
    // 0x2ca800: 0xc0a445e  jal         func_291178
label_2ca804:
    if (ctx->pc == 0x2CA804u) {
        ctx->pc = 0x2CA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA800u;
        // 0x2ca804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA808u;
        goto label_2ca808;
    }
    ctx->pc = 0x2CA800u;
    SET_GPR_U32(ctx, 31, 0x2CA808u);
    ctx->pc = 0x2CA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA800u;
    // 0x2ca804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2CA800u, 0x2CA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA808u;
label_2ca808:
    // 0x2ca808: 0x10000164  b           . + 4 + (0x164 << 2)
label_2ca80c:
    if (ctx->pc == 0x2CA80Cu) {
        ctx->pc = 0x2CA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA808u;
        // 0x2ca80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA810u;
        goto label_2ca810;
    }
    ctx->pc = 0x2CA808u;
    {
        const bool branch_taken_0x2ca808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA808u;
        // 0x2ca80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca808) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA810u;
label_2ca810:
    // 0x2ca810: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2ca810u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2ca814:
    // 0x2ca814: 0x1c600161  bgtz        $v1, . + 4 + (0x161 << 2)
label_2ca818:
    if (ctx->pc == 0x2CA818u) {
        ctx->pc = 0x2CA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA814u;
        // 0x2ca818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA81Cu;
        goto label_2ca81c;
    }
    ctx->pc = 0x2CA814u;
    {
        const bool branch_taken_0x2ca814 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA814u;
        // 0x2ca818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca814) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA81Cu;
label_2ca81c:
    // 0x2ca81c: 0xc087502  jal         func_21D408
label_2ca820:
    if (ctx->pc == 0x2CA820u) {
        ctx->pc = 0x2CA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA81Cu;
        // 0x2ca820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA824u;
        goto label_2ca824;
    }
    ctx->pc = 0x2CA81Cu;
    SET_GPR_U32(ctx, 31, 0x2CA824u);
    ctx->pc = 0x2CA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA81Cu;
    // 0x2ca820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CA81Cu, 0x2CA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA824u;
label_2ca824:
    // 0x2ca824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca828:
    // 0x2ca828: 0xc0a445e  jal         func_291178
label_2ca82c:
    if (ctx->pc == 0x2CA82Cu) {
        ctx->pc = 0x2CA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA828u;
        // 0x2ca82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA830u;
        goto label_2ca830;
    }
    ctx->pc = 0x2CA828u;
    SET_GPR_U32(ctx, 31, 0x2CA830u);
    ctx->pc = 0x2CA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA828u;
    // 0x2ca82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2CA828u, 0x2CA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA830u;
label_2ca830:
    // 0x2ca830: 0x8ec2b734  lw          $v0, -0x48CC($s6)
    ctx->pc = 0x2ca830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_2ca834:
    // 0x2ca834: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2ca834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2ca838:
    // 0x2ca838: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ca838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ca83c:
    // 0x2ca83c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2ca83cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2ca840:
    // 0x2ca840: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_2ca844:
    if (ctx->pc == 0x2CA844u) {
        ctx->pc = 0x2CA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA840u;
        // 0x2ca844: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA848u;
        goto label_2ca848;
    }
    ctx->pc = 0x2CA840u;
    {
        const bool branch_taken_0x2ca840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca840) {
            ctx->pc = 0x2CA844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA840u;
            // 0x2ca844: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA850u;
            goto label_2ca850;
        }
    }
    ctx->pc = 0x2CA848u;
label_2ca848:
    // 0x2ca848: 0x10000154  b           . + 4 + (0x154 << 2)
label_2ca84c:
    if (ctx->pc == 0x2CA84Cu) {
        ctx->pc = 0x2CA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA848u;
        // 0x2ca84c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA850u;
        goto label_2ca850;
    }
    ctx->pc = 0x2CA848u;
    {
        const bool branch_taken_0x2ca848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA848u;
        // 0x2ca84c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca848) {
            ctx->pc = 0x2CAD9Cu;
            goto label_2cad9c;
        }
    }
    ctx->pc = 0x2CA850u;
label_2ca850:
    // 0x2ca850: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ca850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ca854:
    // 0x2ca854: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2ca858:
    if (ctx->pc == 0x2CA858u) {
        ctx->pc = 0x2CA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA854u;
        // 0x2ca858: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA85Cu;
        goto label_2ca85c;
    }
    ctx->pc = 0x2CA854u;
    {
        const bool branch_taken_0x2ca854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA854u;
        // 0x2ca858: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca854) {
            ctx->pc = 0x2CA874u;
            goto label_2ca874;
        }
    }
    ctx->pc = 0x2CA85Cu;
label_2ca85c:
    // 0x2ca85c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca860:
    // 0x2ca860: 0x68465b17  ldl         $a2, 0x5B17($v0)
    ctx->pc = 0x2ca860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2ca864:
    // 0x2ca864: 0x6c465b10  ldr         $a2, 0x5B10($v0)
    ctx->pc = 0x2ca864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2ca868:
    // 0x2ca868: 0xc0a39c2  jal         func_28E708
label_2ca86c:
    if (ctx->pc == 0x2CA86Cu) {
        ctx->pc = 0x2CA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA868u;
        // 0x2ca86c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA870u;
        goto label_2ca870;
    }
    ctx->pc = 0x2CA868u;
    SET_GPR_U32(ctx, 31, 0x2CA870u);
    ctx->pc = 0x2CA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA868u;
    // 0x2ca86c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2CA868u, 0x2CA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA870u;
label_2ca870:
    // 0x2ca870: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ca870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2ca874:
    // 0x2ca874: 0xc08a6d8  jal         func_229B60
label_2ca878:
    if (ctx->pc == 0x2CA878u) {
        ctx->pc = 0x2CA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA874u;
        // 0x2ca878: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA87Cu;
        goto label_2ca87c;
    }
    ctx->pc = 0x2CA874u;
    SET_GPR_U32(ctx, 31, 0x2CA87Cu);
    ctx->pc = 0x2CA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA874u;
    // 0x2ca878: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x2CA874u, 0x2CA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA87Cu;
label_2ca87c:
    // 0x2ca87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca880:
    // 0x2ca880: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2ca884:
    if (ctx->pc == 0x2CA884u) {
        ctx->pc = 0x2CA888u;
        goto label_2ca888;
    }
    ctx->pc = 0x2CA880u;
    {
        const bool branch_taken_0x2ca880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ca880) {
            ctx->pc = 0x2CA8A4u;
            goto label_2ca8a4;
        }
    }
    ctx->pc = 0x2CA888u;
label_2ca888:
    // 0x2ca888: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2ca888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ca88c:
    // 0x2ca88c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ca890:
    if (ctx->pc == 0x2CA890u) {
        ctx->pc = 0x2CA894u;
        goto label_2ca894;
    }
    ctx->pc = 0x2CA88Cu;
    {
        const bool branch_taken_0x2ca88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca88c) {
            ctx->pc = 0x2CA8A4u;
            goto label_2ca8a4;
        }
    }
    ctx->pc = 0x2CA894u;
label_2ca894:
    // 0x2ca894: 0xc08bfbc  jal         func_22FEF0
label_2ca898:
    if (ctx->pc == 0x2CA898u) {
        ctx->pc = 0x2CA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA894u;
        // 0x2ca898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA89Cu;
        goto label_2ca89c;
    }
    ctx->pc = 0x2CA894u;
    SET_GPR_U32(ctx, 31, 0x2CA89Cu);
    ctx->pc = 0x2CA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA894u;
    // 0x2ca898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2CA894u, 0x2CA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA89Cu;
label_2ca89c:
    // 0x2ca89c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ca8a0:
    if (ctx->pc == 0x2CA8A0u) {
        ctx->pc = 0x2CA8A4u;
        goto label_2ca8a4;
    }
    ctx->pc = 0x2CA89Cu;
    {
        const bool branch_taken_0x2ca89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca89c) {
            ctx->pc = 0x2CA8ACu;
            goto label_2ca8ac;
        }
    }
    ctx->pc = 0x2CA8A4u;
label_2ca8a4:
    // 0x2ca8a4: 0xc08bfa0  jal         func_22FE80
label_2ca8a8:
    if (ctx->pc == 0x2CA8A8u) {
        ctx->pc = 0x2CA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8A4u;
        // 0x2ca8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA8ACu;
        goto label_2ca8ac;
    }
    ctx->pc = 0x2CA8A4u;
    SET_GPR_U32(ctx, 31, 0x2CA8ACu);
    ctx->pc = 0x2CA8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8A4u;
    // 0x2ca8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2CA8A4u, 0x2CA8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8ACu;
label_2ca8ac:
    // 0x2ca8ac: 0xc089018  jal         func_224060
label_2ca8b0:
    if (ctx->pc == 0x2CA8B0u) {
        ctx->pc = 0x2CA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8ACu;
        // 0x2ca8b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA8B4u;
        goto label_2ca8b4;
    }
    ctx->pc = 0x2CA8ACu;
    SET_GPR_U32(ctx, 31, 0x2CA8B4u);
    ctx->pc = 0x2CA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8ACu;
    // 0x2ca8b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2CA8ACu, 0x2CA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8B4u;
label_2ca8b4:
    // 0x2ca8b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca8b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8b8:
    // 0x2ca8b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca8bc:
    // 0x2ca8bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ca8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ca8c0:
    // 0x2ca8c0: 0xc0a41ae  jal         func_2906B8
label_2ca8c4:
    if (ctx->pc == 0x2CA8C4u) {
        ctx->pc = 0x2CA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8C0u;
        // 0x2ca8c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA8C8u;
        goto label_2ca8c8;
    }
    ctx->pc = 0x2CA8C0u;
    SET_GPR_U32(ctx, 31, 0x2CA8C8u);
    ctx->pc = 0x2CA8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8C0u;
    // 0x2ca8c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2CA8C0u, 0x2CA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8C8u;
label_2ca8c8:
    // 0x2ca8c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ca8c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8cc:
    // 0x2ca8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca8d0:
    // 0x2ca8d0: 0x16a200c2  bne         $s5, $v0, . + 4 + (0xC2 << 2)
label_2ca8d4:
    if (ctx->pc == 0x2CA8D4u) {
        ctx->pc = 0x2CA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8D0u;
        // 0x2ca8d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA8D8u;
        goto label_2ca8d8;
    }
    ctx->pc = 0x2CA8D0u;
    {
        const bool branch_taken_0x2ca8d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8D0u;
        // 0x2ca8d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8d0) {
            ctx->pc = 0x2CABDCu;
            goto label_2cabdc;
        }
    }
    ctx->pc = 0x2CA8D8u;
label_2ca8d8:
    // 0x2ca8d8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ca8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ca8dc:
    // 0x2ca8dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8e0:
    // 0x2ca8e0: 0xc08c24c  jal         func_230930
label_2ca8e4:
    if (ctx->pc == 0x2CA8E4u) {
        ctx->pc = 0x2CA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8E0u;
        // 0x2ca8e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA8E8u;
        goto label_2ca8e8;
    }
    ctx->pc = 0x2CA8E0u;
    SET_GPR_U32(ctx, 31, 0x2CA8E8u);
    ctx->pc = 0x2CA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8E0u;
    // 0x2ca8e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230930u, 0x2CA8E0u, 0x2CA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8E8u;
label_2ca8e8:
    // 0x2ca8e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ca8e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca8ec:
    // 0x2ca8ec: 0x0  nop
    ctx->pc = 0x2ca8ecu;
    // NOP
label_2ca8f0:
    // 0x2ca8f0: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_2ca8f4:
    if (ctx->pc == 0x2CA8F4u) {
        ctx->pc = 0x2CA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8F0u;
        // 0x2ca8f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA8F8u;
        goto label_2ca8f8;
    }
    ctx->pc = 0x2CA8F0u;
    {
        const bool branch_taken_0x2ca8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca8f0) {
            ctx->pc = 0x2CA8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA8F0u;
            // 0x2ca8f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA94Cu;
            goto label_2ca94c;
        }
    }
    ctx->pc = 0x2CA8F8u;
label_2ca8f8:
    // 0x2ca8f8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ca8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2ca8fc:
    // 0x2ca8fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ca8fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2ca900:
    // 0x2ca900: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ca900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2ca904:
    // 0x2ca904: 0x0  nop
    ctx->pc = 0x2ca904u;
    // NOP
label_2ca908:
    // 0x2ca908: 0x0  nop
    ctx->pc = 0x2ca908u;
    // NOP
label_2ca90c:
    // 0x2ca90c: 0x46000504  c1          0x504
    ctx->pc = 0x2ca90cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2ca910:
    // 0x2ca910: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2ca910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca914:
    // 0x2ca914: 0x0  nop
    ctx->pc = 0x2ca914u;
    // NOP
label_2ca918:
    // 0x2ca918: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2ca91c:
    if (ctx->pc == 0x2CA91Cu) {
        ctx->pc = 0x2CA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA918u;
        // 0x2ca91c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA920u;
        goto label_2ca920;
    }
    ctx->pc = 0x2CA918u;
    {
        const bool branch_taken_0x2ca918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca918) {
            ctx->pc = 0x2CA91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA918u;
            // 0x2ca91c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA920u;
            goto label_2ca920;
        }
    }
    ctx->pc = 0x2CA920u;
label_2ca920:
    // 0x2ca920: 0xc0a367c  jal         func_28D9F0
label_2ca924:
    if (ctx->pc == 0x2CA924u) {
        ctx->pc = 0x2CA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA920u;
        // 0x2ca924: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA928u;
        goto label_2ca928;
    }
    ctx->pc = 0x2CA920u;
    SET_GPR_U32(ctx, 31, 0x2CA928u);
    ctx->pc = 0x2CA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA920u;
    // 0x2ca924: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CA920u, 0x2CA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA928u;
label_2ca928:
    // 0x2ca928: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
label_2ca92c:
    if (ctx->pc == 0x2CA92Cu) {
        ctx->pc = 0x2CA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA928u;
        // 0x2ca92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA930u;
        goto label_2ca930;
    }
    ctx->pc = 0x2CA928u;
    {
        const bool branch_taken_0x2ca928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA928u;
        // 0x2ca92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca928) {
            ctx->pc = 0x2CAD98u;
            goto label_2cad98;
        }
    }
    ctx->pc = 0x2CA930u;
label_2ca930:
    // 0x2ca930: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca934:
    // 0x2ca934: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ca934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca938:
    // 0x2ca938: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ca938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2ca93c:
    // 0x2ca93c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2ca93cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2ca940:
    // 0x2ca940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ca940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca944:
    // 0x2ca944: 0x10000112  b           . + 4 + (0x112 << 2)
label_2ca948:
    if (ctx->pc == 0x2CA948u) {
        ctx->pc = 0x2CA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA944u;
        // 0x2ca948: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA94Cu;
        goto label_2ca94c;
    }
    ctx->pc = 0x2CA944u;
    {
        const bool branch_taken_0x2ca944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA944u;
        // 0x2ca948: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca944) {
            ctx->pc = 0x2CAD90u;
            goto label_2cad90;
        }
    }
    ctx->pc = 0x2CA94Cu;
label_2ca94c:
    // 0x2ca94c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ca94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2ca950:
    // 0x2ca950: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ca950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ca954:
    // 0x2ca954: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ca954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ca958:
    // 0x2ca958: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ca958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ca95c:
    // 0x2ca95c: 0x40f809  jalr        $v0
label_2ca960:
    if (ctx->pc == 0x2CA960u) {
        ctx->pc = 0x2CA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA95Cu;
        // 0x2ca960: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA964u;
        goto label_2ca964;
    }
    ctx->pc = 0x2CA95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CA964u);
        ctx->pc = 0x2CA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA95Cu;
        // 0x2ca960: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA95Cu, 0x2CA964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA964u;
label_2ca964:
    // 0x2ca964: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca968:
    // 0x2ca968: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ca968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ca96c:
    // 0x2ca96c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ca96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ca970:
    // 0x2ca970: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_2ca974:
    if (ctx->pc == 0x2CA974u) {
        ctx->pc = 0x2CA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA970u;
        // 0x2ca974: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA978u;
        goto label_2ca978;
    }
    ctx->pc = 0x2CA970u;
    {
        const bool branch_taken_0x2ca970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA970u;
        // 0x2ca974: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca970) {
            ctx->pc = 0x2CAAC4u;
            goto label_2caac4;
        }
    }
    ctx->pc = 0x2CA978u;
label_2ca978:
    // 0x2ca978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca97c:
    // 0x2ca97c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2ca97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ca980:
    // 0x2ca980: 0xc0a3fa4  jal         func_28FE90
label_2ca984:
    if (ctx->pc == 0x2CA984u) {
        ctx->pc = 0x2CA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA980u;
        // 0x2ca984: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA988u;
        goto label_2ca988;
    }
    ctx->pc = 0x2CA980u;
    SET_GPR_U32(ctx, 31, 0x2CA988u);
    ctx->pc = 0x2CA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA980u;
    // 0x2ca984: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2CA980u, 0x2CA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA988u;
label_2ca988:
    // 0x2ca988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca98c:
    // 0x2ca98c: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x2ca98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2ca990:
    // 0x2ca990: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ca994:
    // 0x2ca994: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2ca998:
    if (ctx->pc == 0x2CA998u) {
        ctx->pc = 0x2CA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA994u;
        // 0x2ca998: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA99Cu;
        goto label_2ca99c;
    }
    ctx->pc = 0x2CA994u;
    {
        const bool branch_taken_0x2ca994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca994) {
            ctx->pc = 0x2CA998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA994u;
            // 0x2ca998: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9B4u;
            goto label_2ca9b4;
        }
    }
    ctx->pc = 0x2CA99Cu;
label_2ca99c:
    // 0x2ca99c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca9a0:
    // 0x2ca9a0: 0xc0a3782  jal         func_28DE08
label_2ca9a4:
    if (ctx->pc == 0x2CA9A4u) {
        ctx->pc = 0x2CA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9A0u;
        // 0x2ca9a4: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9A8u;
        goto label_2ca9a8;
    }
    ctx->pc = 0x2CA9A0u;
    SET_GPR_U32(ctx, 31, 0x2CA9A8u);
    ctx->pc = 0x2CA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9A0u;
    // 0x2ca9a4: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2CA9A0u, 0x2CA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9A8u;
label_2ca9a8:
    // 0x2ca9a8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2ca9ac:
    if (ctx->pc == 0x2CA9ACu) {
        ctx->pc = 0x2CA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9A8u;
        // 0x2ca9ac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9B0u;
        goto label_2ca9b0;
    }
    ctx->pc = 0x2CA9A8u;
    {
        const bool branch_taken_0x2ca9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9a8) {
            ctx->pc = 0x2CA9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA9A8u;
            // 0x2ca9ac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA9B0u;
label_2ca9b0:
    // 0x2ca9b0: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x2ca9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_2ca9b4:
    // 0x2ca9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ca9b8:
    // 0x2ca9b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2ca9bc:
    if (ctx->pc == 0x2CA9BCu) {
        ctx->pc = 0x2CA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9B8u;
        // 0x2ca9bc: 0x9602001c  lhu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9C0u;
        goto label_2ca9c0;
    }
    ctx->pc = 0x2CA9B8u;
    {
        const bool branch_taken_0x2ca9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9b8) {
            ctx->pc = 0x2CA9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA9B8u;
            // 0x2ca9bc: 0x9602001c  lhu         $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9D8u;
            goto label_2ca9d8;
        }
    }
    ctx->pc = 0x2CA9C0u;
label_2ca9c0:
    // 0x2ca9c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca9c4:
    // 0x2ca9c4: 0xc0a3782  jal         func_28DE08
label_2ca9c8:
    if (ctx->pc == 0x2CA9C8u) {
        ctx->pc = 0x2CA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9C4u;
        // 0x2ca9c8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9CCu;
        goto label_2ca9cc;
    }
    ctx->pc = 0x2CA9C4u;
    SET_GPR_U32(ctx, 31, 0x2CA9CCu);
    ctx->pc = 0x2CA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9C4u;
    // 0x2ca9c8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2CA9C4u, 0x2CA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9CCu;
label_2ca9cc:
    // 0x2ca9cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2ca9d0:
    if (ctx->pc == 0x2CA9D0u) {
        ctx->pc = 0x2CA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9CCu;
        // 0x2ca9d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9D4u;
        goto label_2ca9d4;
    }
    ctx->pc = 0x2CA9CCu;
    {
        const bool branch_taken_0x2ca9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9cc) {
            ctx->pc = 0x2CA9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA9CCu;
            // 0x2ca9d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA9D4u;
label_2ca9d4:
    // 0x2ca9d4: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2ca9d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_2ca9d8:
    // 0x2ca9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ca9dc:
    // 0x2ca9dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ca9e0:
    if (ctx->pc == 0x2CA9E0u) {
        ctx->pc = 0x2CA9E4u;
        goto label_2ca9e4;
    }
    ctx->pc = 0x2CA9DCu;
    {
        const bool branch_taken_0x2ca9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9dc) {
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA9E4u;
label_2ca9e4:
    // 0x2ca9e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca9e8:
    // 0x2ca9e8: 0xc0a3782  jal         func_28DE08
label_2ca9ec:
    if (ctx->pc == 0x2CA9ECu) {
        ctx->pc = 0x2CA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9E8u;
        // 0x2ca9ec: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9F0u;
        goto label_2ca9f0;
    }
    ctx->pc = 0x2CA9E8u;
    SET_GPR_U32(ctx, 31, 0x2CA9F0u);
    ctx->pc = 0x2CA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9E8u;
    // 0x2ca9ec: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2CA9E8u, 0x2CA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9F0u;
label_2ca9f0:
    // 0x2ca9f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ca9f4:
    if (ctx->pc == 0x2CA9F4u) {
        ctx->pc = 0x2CA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9F0u;
        // 0x2ca9f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA9F8u;
        goto label_2ca9f8;
    }
    ctx->pc = 0x2CA9F0u;
    {
        const bool branch_taken_0x2ca9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9f0) {
            ctx->pc = 0x2CA9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA9F0u;
            // 0x2ca9f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA9F8u;
            goto label_2ca9f8;
        }
    }
    ctx->pc = 0x2CA9F8u;
label_2ca9f8:
    // 0x2ca9f8: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
label_2ca9fc:
    if (ctx->pc == 0x2CA9FCu) {
        ctx->pc = 0x2CA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9F8u;
        // 0x2ca9fc: 0x96020034  lhu         $v0, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA00u;
        goto label_2caa00;
    }
    ctx->pc = 0x2CA9F8u;
    {
        const bool branch_taken_0x2ca9f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9f8) {
            ctx->pc = 0x2CA9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA9F8u;
            // 0x2ca9fc: 0x96020034  lhu         $v0, 0x34($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA14u;
            goto label_2caa14;
        }
    }
    ctx->pc = 0x2CAA00u;
label_2caa00:
    // 0x2caa00: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x2caa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_2caa04:
    // 0x2caa04: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x2caa04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_2caa08:
    // 0x2caa08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2caa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2caa0c:
    // 0x2caa0c: 0x10000017  b           . + 4 + (0x17 << 2)
label_2caa10:
    if (ctx->pc == 0x2CAA10u) {
        ctx->pc = 0x2CAA14u;
        goto label_2caa14;
    }
    ctx->pc = 0x2CAA0Cu;
    {
        const bool branch_taken_0x2caa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa0c) {
            ctx->pc = 0x2CAA6Cu;
            goto label_2caa6c;
        }
    }
    ctx->pc = 0x2CAA14u;
label_2caa14:
    // 0x2caa14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2caa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2caa18:
    // 0x2caa18: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2caa1c:
    if (ctx->pc == 0x2CAA1Cu) {
        ctx->pc = 0x2CAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA18u;
        // 0x2caa1c: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA20u;
        goto label_2caa20;
    }
    ctx->pc = 0x2CAA18u;
    {
        const bool branch_taken_0x2caa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa18) {
            ctx->pc = 0x2CAA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAA18u;
            // 0x2caa1c: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA48u;
            goto label_2caa48;
        }
    }
    ctx->pc = 0x2CAA20u;
label_2caa20:
    // 0x2caa20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2caa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2caa24:
    // 0x2caa24: 0xc0a3782  jal         func_28DE08
label_2caa28:
    if (ctx->pc == 0x2CAA28u) {
        ctx->pc = 0x2CAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA24u;
        // 0x2caa28: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA2Cu;
        goto label_2caa2c;
    }
    ctx->pc = 0x2CAA24u;
    SET_GPR_U32(ctx, 31, 0x2CAA2Cu);
    ctx->pc = 0x2CAA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA24u;
    // 0x2caa28: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2CAA24u, 0x2CAA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA2Cu;
label_2caa2c:
    // 0x2caa2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2caa30:
    if (ctx->pc == 0x2CAA30u) {
        ctx->pc = 0x2CAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA2Cu;
        // 0x2caa30: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA34u;
        goto label_2caa34;
    }
    ctx->pc = 0x2CAA2Cu;
    {
        const bool branch_taken_0x2caa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa2c) {
            ctx->pc = 0x2CAA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAA2Cu;
            // 0x2caa30: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAA48u;
            goto label_2caa48;
        }
    }
    ctx->pc = 0x2CAA34u;
label_2caa34:
    // 0x2caa34: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2caa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2caa38:
    // 0x2caa38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2caa38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2caa3c:
    // 0x2caa3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2caa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2caa40:
    // 0x2caa40: 0x1000000a  b           . + 4 + (0xA << 2)
label_2caa44:
    if (ctx->pc == 0x2CAA44u) {
        ctx->pc = 0x2CAA48u;
        goto label_2caa48;
    }
    ctx->pc = 0x2CAA40u;
    {
        const bool branch_taken_0x2caa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa40) {
            ctx->pc = 0x2CAA6Cu;
            goto label_2caa6c;
        }
    }
    ctx->pc = 0x2CAA48u;
label_2caa48:
    // 0x2caa48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2caa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2caa4c:
    // 0x2caa4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2caa50:
    if (ctx->pc == 0x2CAA50u) {
        ctx->pc = 0x2CAA54u;
        goto label_2caa54;
    }
    ctx->pc = 0x2CAA4Cu;
    {
        const bool branch_taken_0x2caa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa4c) {
            ctx->pc = 0x2CAA6Cu;
            goto label_2caa6c;
        }
    }
    ctx->pc = 0x2CAA54u;
label_2caa54:
    // 0x2caa54: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2caa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2caa58:
    // 0x2caa58: 0xc0a3782  jal         func_28DE08
label_2caa5c:
    if (ctx->pc == 0x2CAA5Cu) {
        ctx->pc = 0x2CAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA58u;
        // 0x2caa5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA60u;
        goto label_2caa60;
    }
    ctx->pc = 0x2CAA58u;
    SET_GPR_U32(ctx, 31, 0x2CAA60u);
    ctx->pc = 0x2CAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA58u;
    // 0x2caa5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2CAA58u, 0x2CAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA60u;
label_2caa60:
    // 0x2caa60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2caa64:
    if (ctx->pc == 0x2CAA64u) {
        ctx->pc = 0x2CAA68u;
        goto label_2caa68;
    }
    ctx->pc = 0x2CAA60u;
    {
        const bool branch_taken_0x2caa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa60) {
            ctx->pc = 0x2CAA6Cu;
            goto label_2caa6c;
        }
    }
    ctx->pc = 0x2CAA68u;
label_2caa68:
    // 0x2caa68: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2caa68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2caa6c:
    // 0x2caa6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2caa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2caa70:
    // 0x2caa70: 0x0  nop
    ctx->pc = 0x2caa70u;
    // NOP
label_2caa74:
    // 0x2caa74: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2caa74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2caa78:
    // 0x2caa78: 0x0  nop
    ctx->pc = 0x2caa78u;
    // NOP
label_2caa7c:
    // 0x2caa7c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_2caa80:
    if (ctx->pc == 0x2CAA80u) {
        ctx->pc = 0x2CAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA7Cu;
        // 0x2caa80: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA84u;
        goto label_2caa84;
    }
    ctx->pc = 0x2CAA7Cu;
    {
        const bool branch_taken_0x2caa7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA7Cu;
        // 0x2caa80: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa7c) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAA84u;
label_2caa84:
    // 0x2caa84: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2caa84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2caa88:
    // 0x2caa88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2caa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2caa8c:
    // 0x2caa8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2caa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2caa90:
    // 0x2caa90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2caa94:
    // 0x2caa94: 0xc0cd8ec  jal         func_3363B0
label_2caa98:
    if (ctx->pc == 0x2CAA98u) {
        ctx->pc = 0x2CAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA94u;
        // 0x2caa98: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAA9Cu;
        goto label_2caa9c;
    }
    ctx->pc = 0x2CAA94u;
    SET_GPR_U32(ctx, 31, 0x2CAA9Cu);
    ctx->pc = 0x2CAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA94u;
    // 0x2caa98: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2CAA94u, 0x2CAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA9Cu;
label_2caa9c:
    // 0x2caa9c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2caa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2caaa0:
    // 0x2caaa0: 0xc0cd5ea  jal         func_3357A8
label_2caaa4:
    if (ctx->pc == 0x2CAAA4u) {
        ctx->pc = 0x2CAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAA0u;
        // 0x2caaa4: 0xc7ad0020  lwc1        $f13, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAA8u;
        goto label_2caaa8;
    }
    ctx->pc = 0x2CAAA0u;
    SET_GPR_U32(ctx, 31, 0x2CAAA8u);
    ctx->pc = 0x2CAAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAAA0u;
    // 0x2caaa4: 0xc7ad0020  lwc1        $f13, 0x20($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2CAAA0u, 0x2CAAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAA8u;
label_2caaa8:
    // 0x2caaa8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2caaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2caaac:
    // 0x2caaac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2caaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2caab0:
    // 0x2caab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2caab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2caab4:
    // 0x2caab4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2caab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2caab8:
    // 0x2caab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2caab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2caabc:
    // 0x2caabc: 0x10000030  b           . + 4 + (0x30 << 2)
label_2caac0:
    if (ctx->pc == 0x2CAAC0u) {
        ctx->pc = 0x2CAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAABCu;
        // 0x2caac0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAC4u;
        goto label_2caac4;
    }
    ctx->pc = 0x2CAABCu;
    {
        const bool branch_taken_0x2caabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAABCu;
        // 0x2caac0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caabc) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAAC4u;
label_2caac4:
    // 0x2caac4: 0x14760017  bne         $v1, $s6, . + 4 + (0x17 << 2)
label_2caac8:
    if (ctx->pc == 0x2CAAC8u) {
        ctx->pc = 0x2CAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAC4u;
        // 0x2caac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAACCu;
        goto label_2caacc;
    }
    ctx->pc = 0x2CAAC4u;
    {
        const bool branch_taken_0x2caac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x2CAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAC4u;
        // 0x2caac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caac4) {
            ctx->pc = 0x2CAB24u;
            goto label_2cab24;
        }
    }
    ctx->pc = 0x2CAACCu;
label_2caacc:
    // 0x2caacc: 0xc087502  jal         func_21D408
label_2caad0:
    if (ctx->pc == 0x2CAAD0u) {
        ctx->pc = 0x2CAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAACCu;
        // 0x2caad0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAD4u;
        goto label_2caad4;
    }
    ctx->pc = 0x2CAACCu;
    SET_GPR_U32(ctx, 31, 0x2CAAD4u);
    ctx->pc = 0x2CAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAACCu;
    // 0x2caad0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CAACCu, 0x2CAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAD4u;
label_2caad4:
    // 0x2caad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2caad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2caad8:
    // 0x2caad8: 0xc0a3fa4  jal         func_28FE90
label_2caadc:
    if (ctx->pc == 0x2CAADCu) {
        ctx->pc = 0x2CAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAD8u;
        // 0x2caadc: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAE0u;
        goto label_2caae0;
    }
    ctx->pc = 0x2CAAD8u;
    SET_GPR_U32(ctx, 31, 0x2CAAE0u);
    ctx->pc = 0x2CAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAAD8u;
    // 0x2caadc: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2CAAD8u, 0x2CAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAE0u;
label_2caae0:
    // 0x2caae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2caae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2caae4:
    // 0x2caae4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2caae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2caae8:
    // 0x2caae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2caaec:
    // 0x2caaec: 0xc0a7ab6  jal         func_29EAD8
label_2caaf0:
    if (ctx->pc == 0x2CAAF0u) {
        ctx->pc = 0x2CAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAECu;
        // 0x2caaf0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAF4u;
        goto label_2caaf4;
    }
    ctx->pc = 0x2CAAECu;
    SET_GPR_U32(ctx, 31, 0x2CAAF4u);
    ctx->pc = 0x2CAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAAECu;
    // 0x2caaf0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2CAAECu, 0x2CAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAF4u;
label_2caaf4:
    // 0x2caaf4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2caaf8:
    if (ctx->pc == 0x2CAAF8u) {
        ctx->pc = 0x2CAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAF4u;
        // 0x2caaf8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAFCu;
        goto label_2caafc;
    }
    ctx->pc = 0x2CAAF4u;
    {
        const bool branch_taken_0x2caaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caaf4) {
            ctx->pc = 0x2CAAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAF4u;
            // 0x2caaf8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB14u;
            goto label_2cab14;
        }
    }
    ctx->pc = 0x2CAAFCu;
label_2caafc:
    // 0x2caafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cab00:
    // 0x2cab00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cab00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cab04:
    // 0x2cab04: 0xc0a7ab6  jal         func_29EAD8
label_2cab08:
    if (ctx->pc == 0x2CAB08u) {
        ctx->pc = 0x2CAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB04u;
        // 0x2cab08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB0Cu;
        goto label_2cab0c;
    }
    ctx->pc = 0x2CAB04u;
    SET_GPR_U32(ctx, 31, 0x2CAB0Cu);
    ctx->pc = 0x2CAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB04u;
    // 0x2cab08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2CAB04u, 0x2CAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB0Cu;
label_2cab0c:
    // 0x2cab0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2cab10:
    if (ctx->pc == 0x2CAB10u) {
        ctx->pc = 0x2CAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB0Cu;
        // 0x2cab10: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB14u;
        goto label_2cab14;
    }
    ctx->pc = 0x2CAB0Cu;
    {
        const bool branch_taken_0x2cab0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cab0c) {
            ctx->pc = 0x2CAB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB0Cu;
            // 0x2cab10: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB14u;
            goto label_2cab14;
        }
    }
    ctx->pc = 0x2CAB14u;
label_2cab14:
    // 0x2cab14: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_2cab18:
    if (ctx->pc == 0x2CAB18u) {
        ctx->pc = 0x2CAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB14u;
        // 0x2cab18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB1Cu;
        goto label_2cab1c;
    }
    ctx->pc = 0x2CAB14u;
    {
        const bool branch_taken_0x2cab14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB14u;
        // 0x2cab18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab14) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAB1Cu;
label_2cab1c:
    // 0x2cab1c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2cab20:
    if (ctx->pc == 0x2CAB20u) {
        ctx->pc = 0x2CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB1Cu;
        // 0x2cab20: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB24u;
        goto label_2cab24;
    }
    ctx->pc = 0x2CAB1Cu;
    {
        const bool branch_taken_0x2cab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB1Cu;
        // 0x2cab20: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab1c) {
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAB24u;
label_2cab24:
    // 0x2cab24: 0xc08a200  jal         func_228800
label_2cab28:
    if (ctx->pc == 0x2CAB28u) {
        ctx->pc = 0x2CAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB24u;
        // 0x2cab28: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB2Cu;
        goto label_2cab2c;
    }
    ctx->pc = 0x2CAB24u;
    SET_GPR_U32(ctx, 31, 0x2CAB2Cu);
    ctx->pc = 0x2CAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB24u;
    // 0x2cab28: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2CAB24u, 0x2CAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB2Cu;
label_2cab2c:
    // 0x2cab2c: 0x90430134  lbu         $v1, 0x134($v0)
    ctx->pc = 0x2cab2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 308)));
label_2cab30:
    // 0x2cab30: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_2cab34:
    if (ctx->pc == 0x2CAB34u) {
        ctx->pc = 0x2CAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB30u;
        // 0x2cab34: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB38u;
        goto label_2cab38;
    }
    ctx->pc = 0x2CAB30u;
    {
        const bool branch_taken_0x2cab30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab30) {
            ctx->pc = 0x2CAB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB30u;
            // 0x2cab34: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB38u;
label_2cab38:
    // 0x2cab38: 0xc087502  jal         func_21D408
label_2cab3c:
    if (ctx->pc == 0x2CAB3Cu) {
        ctx->pc = 0x2CAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB38u;
        // 0x2cab3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB40u;
        goto label_2cab40;
    }
    ctx->pc = 0x2CAB38u;
    SET_GPR_U32(ctx, 31, 0x2CAB40u);
    ctx->pc = 0x2CAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB38u;
    // 0x2cab3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CAB38u, 0x2CAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB40u;
label_2cab40:
    // 0x2cab40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cab44:
    // 0x2cab44: 0xc0a3fa4  jal         func_28FE90
label_2cab48:
    if (ctx->pc == 0x2CAB48u) {
        ctx->pc = 0x2CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB44u;
        // 0x2cab48: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB4Cu;
        goto label_2cab4c;
    }
    ctx->pc = 0x2CAB44u;
    SET_GPR_U32(ctx, 31, 0x2CAB4Cu);
    ctx->pc = 0x2CAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB44u;
    // 0x2cab48: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2CAB44u, 0x2CAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB4Cu;
label_2cab4c:
    // 0x2cab4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cab50:
    // 0x2cab50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cab50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cab54:
    // 0x2cab54: 0xc0a7ab6  jal         func_29EAD8
label_2cab58:
    if (ctx->pc == 0x2CAB58u) {
        ctx->pc = 0x2CAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB54u;
        // 0x2cab58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB5Cu;
        goto label_2cab5c;
    }
    ctx->pc = 0x2CAB54u;
    SET_GPR_U32(ctx, 31, 0x2CAB5Cu);
    ctx->pc = 0x2CAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB54u;
    // 0x2cab58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2CAB54u, 0x2CAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB5Cu;
label_2cab5c:
    // 0x2cab5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cab60:
    // 0x2cab60: 0x56150008  bnel        $s0, $s5, . + 4 + (0x8 << 2)
label_2cab64:
    if (ctx->pc == 0x2CAB64u) {
        ctx->pc = 0x2CAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB60u;
        // 0x2cab64: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB68u;
        goto label_2cab68;
    }
    ctx->pc = 0x2CAB60u;
    {
        const bool branch_taken_0x2cab60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x2cab60) {
            ctx->pc = 0x2CAB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB60u;
            // 0x2cab64: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB84u;
            goto label_2cab84;
        }
    }
    ctx->pc = 0x2CAB68u;
label_2cab68:
    // 0x2cab68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cab6c:
    // 0x2cab6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cab70:
    // 0x2cab70: 0xc0891de  jal         func_224778
label_2cab74:
    if (ctx->pc == 0x2CAB74u) {
        ctx->pc = 0x2CAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB70u;
        // 0x2cab74: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB78u;
        goto label_2cab78;
    }
    ctx->pc = 0x2CAB70u;
    SET_GPR_U32(ctx, 31, 0x2CAB78u);
    ctx->pc = 0x2CAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB70u;
    // 0x2cab74: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2CAB70u, 0x2CAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB78u;
label_2cab78:
    // 0x2cab78: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_2cab7c:
    if (ctx->pc == 0x2CAB7Cu) {
        ctx->pc = 0x2CAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB78u;
        // 0x2cab7c: 0xae360010  sw          $s6, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB80u;
        goto label_2cab80;
    }
    ctx->pc = 0x2CAB78u;
    {
        const bool branch_taken_0x2cab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2cab78) {
            ctx->pc = 0x2CAB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB78u;
            // 0x2cab7c: 0xae360010  sw          $s6, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB80u;
            goto label_2cab80;
        }
    }
    ctx->pc = 0x2CAB80u;
label_2cab80:
    // 0x2cab80: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2cab80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2cab84:
    // 0x2cab84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cab88:
    // 0x2cab88: 0xc0891de  jal         func_224778
label_2cab8c:
    if (ctx->pc == 0x2CAB8Cu) {
        ctx->pc = 0x2CAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB88u;
        // 0x2cab8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB90u;
        goto label_2cab90;
    }
    ctx->pc = 0x2CAB88u;
    SET_GPR_U32(ctx, 31, 0x2CAB90u);
    ctx->pc = 0x2CAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB88u;
    // 0x2cab8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2CAB88u, 0x2CAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB90u;
label_2cab90:
    // 0x2cab90: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2cab94:
    if (ctx->pc == 0x2CAB94u) {
        ctx->pc = 0x2CAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB90u;
        // 0x2cab94: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB98u;
        goto label_2cab98;
    }
    ctx->pc = 0x2CAB90u;
    {
        const bool branch_taken_0x2cab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cab90) {
            ctx->pc = 0x2CAB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB90u;
            // 0x2cab94: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CABB8u;
            goto label_2cabb8;
        }
    }
    ctx->pc = 0x2CAB98u;
label_2cab98:
    // 0x2cab98: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2cab9c:
    // 0x2cab9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2caba0:
    // 0x2caba0: 0x68465b1f  ldl         $a2, 0x5B1F($v0)
    ctx->pc = 0x2caba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2caba4:
    // 0x2caba4: 0x6c465b18  ldr         $a2, 0x5B18($v0)
    ctx->pc = 0x2caba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2caba8:
    // 0x2caba8: 0xc0a39c2  jal         func_28E708
label_2cabac:
    if (ctx->pc == 0x2CABACu) {
        ctx->pc = 0x2CABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABA8u;
        // 0x2cabac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABB0u;
        goto label_2cabb0;
    }
    ctx->pc = 0x2CABA8u;
    SET_GPR_U32(ctx, 31, 0x2CABB0u);
    ctx->pc = 0x2CABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABA8u;
    // 0x2cabac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2CABA8u, 0x2CABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABB0u;
label_2cabb0:
    // 0x2cabb0: 0x10000079  b           . + 4 + (0x79 << 2)
label_2cabb4:
    if (ctx->pc == 0x2CABB4u) {
        ctx->pc = 0x2CABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABB0u;
        // 0x2cabb4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABB8u;
        goto label_2cabb8;
    }
    ctx->pc = 0x2CABB0u;
    {
        const bool branch_taken_0x2cabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABB0u;
        // 0x2cabb4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabb0) {
            ctx->pc = 0x2CAD98u;
            goto label_2cad98;
        }
    }
    ctx->pc = 0x2CABB8u;
label_2cabb8:
    // 0x2cabb8: 0x2410002d  addiu       $s0, $zero, 0x2D
    ctx->pc = 0x2cabb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2cabbc:
    // 0x2cabbc: 0x10d00076  beq         $a2, $s0, . + 4 + (0x76 << 2)
label_2cabc0:
    if (ctx->pc == 0x2CABC0u) {
        ctx->pc = 0x2CABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABBCu;
        // 0x2cabc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABC4u;
        goto label_2cabc4;
    }
    ctx->pc = 0x2CABBCu;
    {
        const bool branch_taken_0x2cabbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABBCu;
        // 0x2cabc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabbc) {
            ctx->pc = 0x2CAD98u;
            goto label_2cad98;
        }
    }
    ctx->pc = 0x2CABC4u;
label_2cabc4:
    // 0x2cabc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cabc8:
    // 0x2cabc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cabc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2cabcc:
    // 0x2cabcc: 0xc0a3892  jal         func_28E248
label_2cabd0:
    if (ctx->pc == 0x2CABD0u) {
        ctx->pc = 0x2CABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABCCu;
        // 0x2cabd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABD4u;
        goto label_2cabd4;
    }
    ctx->pc = 0x2CABCCu;
    SET_GPR_U32(ctx, 31, 0x2CABD4u);
    ctx->pc = 0x2CABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABCCu;
    // 0x2cabd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2CABCCu, 0x2CABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABD4u;
label_2cabd4:
    // 0x2cabd4: 0x10000070  b           . + 4 + (0x70 << 2)
label_2cabd8:
    if (ctx->pc == 0x2CABD8u) {
        ctx->pc = 0x2CABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABD4u;
        // 0x2cabd8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABDCu;
        goto label_2cabdc;
    }
    ctx->pc = 0x2CABD4u;
    {
        const bool branch_taken_0x2cabd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABD4u;
        // 0x2cabd8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabd4) {
            ctx->pc = 0x2CAD98u;
            goto label_2cad98;
        }
    }
    ctx->pc = 0x2CABDCu;
label_2cabdc:
    // 0x2cabdc: 0xc087502  jal         func_21D408
label_2cabe0:
    if (ctx->pc == 0x2CABE0u) {
        ctx->pc = 0x2CABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABDCu;
        // 0x2cabe0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABE4u;
        goto label_2cabe4;
    }
    ctx->pc = 0x2CABDCu;
    SET_GPR_U32(ctx, 31, 0x2CABE4u);
    ctx->pc = 0x2CABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABDCu;
    // 0x2cabe0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CABDCu, 0x2CABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABE4u;
label_2cabe4:
    // 0x2cabe4: 0x245001a4  addiu       $s0, $v0, 0x1A4
    ctx->pc = 0x2cabe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
label_2cabe8:
    // 0x2cabe8: 0xc0e409a  jal         func_390268
label_2cabec:
    if (ctx->pc == 0x2CABECu) {
        ctx->pc = 0x2CABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABE8u;
        // 0x2cabec: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABF0u;
        goto label_2cabf0;
    }
    ctx->pc = 0x2CABE8u;
    SET_GPR_U32(ctx, 31, 0x2CABF0u);
    ctx->pc = 0x2CABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABE8u;
    // 0x2cabec: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CABE8u, 0x2CABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABF0u;
label_2cabf0:
    // 0x2cabf0: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
label_2cabf4:
    if (ctx->pc == 0x2CABF4u) {
        ctx->pc = 0x2CABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABF0u;
        // 0x2cabf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABF8u;
        goto label_2cabf8;
    }
    ctx->pc = 0x2CABF0u;
    {
        const bool branch_taken_0x2cabf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cabf0) {
            ctx->pc = 0x2CABF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CABF0u;
            // 0x2cabf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC2Cu;
            goto label_2cac2c;
        }
    }
    ctx->pc = 0x2CABF8u;
label_2cabf8:
    // 0x2cabf8: 0x5052000b  beql        $v0, $s2, . + 4 + (0xB << 2)
label_2cabfc:
    if (ctx->pc == 0x2CABFCu) {
        ctx->pc = 0x2CABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABF8u;
        // 0x2cabfc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC00u;
        goto label_2cac00;
    }
    ctx->pc = 0x2CABF8u;
    {
        const bool branch_taken_0x2cabf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2cabf8) {
            ctx->pc = 0x2CABFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CABF8u;
            // 0x2cabfc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC28u;
            goto label_2cac28;
        }
    }
    ctx->pc = 0x2CAC00u;
label_2cac00:
    // 0x2cac00: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2cac04:
    if (ctx->pc == 0x2CAC04u) {
        ctx->pc = 0x2CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC00u;
        // 0x2cac04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC08u;
        goto label_2cac08;
    }
    ctx->pc = 0x2CAC00u;
    {
        const bool branch_taken_0x2cac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC00u;
        // 0x2cac04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac00) {
            ctx->pc = 0x2CAC2Cu;
            goto label_2cac2c;
        }
    }
    ctx->pc = 0x2CAC08u;
label_2cac08:
    // 0x2cac08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cac0c:
    // 0x2cac0c: 0xc137866  jal         func_4DE198
label_2cac10:
    if (ctx->pc == 0x2CAC10u) {
        ctx->pc = 0x2CAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC0Cu;
        // 0x2cac10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC14u;
        goto label_2cac14;
    }
    ctx->pc = 0x2CAC0Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC14u);
    ctx->pc = 0x2CAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC0Cu;
    // 0x2cac10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2CAC0Cu, 0x2CAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC14u;
label_2cac14:
    // 0x2cac14: 0xc0e409a  jal         func_390268
label_2cac18:
    if (ctx->pc == 0x2CAC18u) {
        ctx->pc = 0x2CAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC14u;
        // 0x2cac18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC1Cu;
        goto label_2cac1c;
    }
    ctx->pc = 0x2CAC14u;
    SET_GPR_U32(ctx, 31, 0x2CAC1Cu);
    ctx->pc = 0x2CAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC14u;
    // 0x2cac18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CAC14u, 0x2CAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC1Cu;
label_2cac1c:
    // 0x2cac1c: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2cac20:
    if (ctx->pc == 0x2CAC20u) {
        ctx->pc = 0x2CAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC1Cu;
        // 0x2cac20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC24u;
        goto label_2cac24;
    }
    ctx->pc = 0x2CAC1Cu;
    {
        const bool branch_taken_0x2cac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC1Cu;
        // 0x2cac20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac1c) {
            ctx->pc = 0x2CAC2Cu;
            goto label_2cac2c;
        }
    }
    ctx->pc = 0x2CAC24u;
label_2cac24:
    // 0x2cac24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2cac24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cac28:
    // 0x2cac28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cac2c:
    // 0x2cac2c: 0x56a2000a  bnel        $s5, $v0, . + 4 + (0xA << 2)
label_2cac30:
    if (ctx->pc == 0x2CAC30u) {
        ctx->pc = 0x2CAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC2Cu;
        // 0x2cac30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC34u;
        goto label_2cac34;
    }
    ctx->pc = 0x2CAC2Cu;
    {
        const bool branch_taken_0x2cac2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cac2c) {
            ctx->pc = 0x2CAC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC2Cu;
            // 0x2cac30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC58u;
            goto label_2cac58;
        }
    }
    ctx->pc = 0x2CAC34u;
label_2cac34:
    // 0x2cac34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cac38:
    // 0x2cac38: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2cac38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2cac3c:
    // 0x2cac3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cac3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cac40:
    // 0x2cac40: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2cac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cac44:
    // 0x2cac44: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2cac48:
    // 0x2cac48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2cac48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2cac4c:
    // 0x2cac4c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2cac4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2cac50:
    // 0x2cac50: 0x10000013  b           . + 4 + (0x13 << 2)
label_2cac54:
    if (ctx->pc == 0x2CAC54u) {
        ctx->pc = 0x2CAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC50u;
        // 0x2cac54: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC58u;
        goto label_2cac58;
    }
    ctx->pc = 0x2CAC50u;
    {
        const bool branch_taken_0x2cac50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC50u;
        // 0x2cac54: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac50) {
            ctx->pc = 0x2CACA0u;
            goto label_2caca0;
        }
    }
    ctx->pc = 0x2CAC58u;
label_2cac58:
    // 0x2cac58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cac5c:
    // 0x2cac5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cac5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cac60:
    // 0x2cac60: 0x0  nop
    ctx->pc = 0x2cac60u;
    // NOP
label_2cac64:
    // 0x2cac64: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2cac64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cac68:
    // 0x2cac68: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2cac68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2cac6c:
    // 0x2cac6c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2cac6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2cac70:
    // 0x2cac70: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2cac74:
    if (ctx->pc == 0x2CAC74u) {
        ctx->pc = 0x2CAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC70u;
        // 0x2cac74: 0xc4960140  lwc1        $f22, 0x140($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC78u;
        goto label_2cac78;
    }
    ctx->pc = 0x2CAC70u;
    {
        const bool branch_taken_0x2cac70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC70u;
        // 0x2cac74: 0xc4960140  lwc1        $f22, 0x140($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac70) {
            ctx->pc = 0x2CACA0u;
            goto label_2caca0;
        }
    }
    ctx->pc = 0x2CAC78u;
label_2cac78:
    // 0x2cac78: 0xc0a367c  jal         func_28D9F0
label_2cac7c:
    if (ctx->pc == 0x2CAC7Cu) {
        ctx->pc = 0x2CAC80u;
        goto label_2cac80;
    }
    ctx->pc = 0x2CAC78u;
    SET_GPR_U32(ctx, 31, 0x2CAC80u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CAC78u, 0x2CAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC80u;
label_2cac80:
    // 0x2cac80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2cac84:
    if (ctx->pc == 0x2CAC84u) {
        ctx->pc = 0x2CAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC80u;
        // 0x2cac84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC88u;
        goto label_2cac88;
    }
    ctx->pc = 0x2CAC80u;
    {
        const bool branch_taken_0x2cac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC80u;
        // 0x2cac84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac80) {
            ctx->pc = 0x2CACA0u;
            goto label_2caca0;
        }
    }
    ctx->pc = 0x2CAC88u;
label_2cac88:
    // 0x2cac88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cac88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cac8c:
    // 0x2cac8c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2cac90:
    // 0x2cac90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cac90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cac94:
    // 0x2cac94: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2cac94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2cac98:
    // 0x2cac98: 0xc0bec3c  jal         func_2FB0F0
label_2cac9c:
    if (ctx->pc == 0x2CAC9Cu) {
        ctx->pc = 0x2CAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC98u;
        // 0x2cac9c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACA0u;
        goto label_2caca0;
    }
    ctx->pc = 0x2CAC98u;
    SET_GPR_U32(ctx, 31, 0x2CACA0u);
    ctx->pc = 0x2CAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC98u;
    // 0x2cac9c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2CAC98u, 0x2CACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACA0u;
label_2caca0:
    // 0x2caca0: 0x8ec3b734  lw          $v1, -0x48CC($s6)
    ctx->pc = 0x2caca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_2caca4:
    // 0x2caca4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2caca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2caca8:
    // 0x2caca8: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2caca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2cacac:
    // 0x2cacac: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2cacacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2cacb0:
    // 0x2cacb0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2cacb4:
    if (ctx->pc == 0x2CACB4u) {
        ctx->pc = 0x2CACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACB0u;
        // 0x2cacb4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACB8u;
        goto label_2cacb8;
    }
    ctx->pc = 0x2CACB0u;
    {
        const bool branch_taken_0x2cacb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACB0u;
        // 0x2cacb4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacb0) {
            ctx->pc = 0x2CAD3Cu;
            goto label_2cad3c;
        }
    }
    ctx->pc = 0x2CACB8u;
label_2cacb8:
    // 0x2cacb8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2cacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2cacbc:
    // 0x2cacbc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2cacbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2cacc0:
    // 0x2cacc0: 0xc0cd4fc  jal         func_3353F0
label_2cacc4:
    if (ctx->pc == 0x2CACC4u) {
        ctx->pc = 0x2CACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACC0u;
        // 0x2cacc4: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACC8u;
        goto label_2cacc8;
    }
    ctx->pc = 0x2CACC0u;
    SET_GPR_U32(ctx, 31, 0x2CACC8u);
    ctx->pc = 0x2CACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACC0u;
    // 0x2cacc4: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CACC0u, 0x2CACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACC8u;
label_2cacc8:
    // 0x2cacc8: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2cacc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_2caccc:
    // 0x2caccc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2cacccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2cacd0:
    // 0x2cacd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cacd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cacd4:
    // 0x2cacd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2cacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2cacd8:
    // 0x2cacd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cacd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cacdc:
    // 0x2cacdc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2cacdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cace0:
    // 0x2cace0: 0x0  nop
    ctx->pc = 0x2cace0u;
    // NOP
label_2cace4:
    // 0x2cace4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_2cace8:
    if (ctx->pc == 0x2CACE8u) {
        ctx->pc = 0x2CACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACE4u;
        // 0x2cace8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACECu;
        goto label_2cacec;
    }
    ctx->pc = 0x2CACE4u;
    {
        const bool branch_taken_0x2cace4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACE4u;
        // 0x2cace8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cace4) {
            ctx->pc = 0x2CAD3Cu;
            goto label_2cad3c;
        }
    }
    ctx->pc = 0x2CACECu;
label_2cacec:
    // 0x2cacec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cacecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cacf0:
    // 0x2cacf0: 0xc136b80  jal         func_4DAE00
label_2cacf4:
    if (ctx->pc == 0x2CACF4u) {
        ctx->pc = 0x2CACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACF0u;
        // 0x2cacf4: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CACF8u;
        goto label_2cacf8;
    }
    ctx->pc = 0x2CACF0u;
    SET_GPR_U32(ctx, 31, 0x2CACF8u);
    ctx->pc = 0x2CACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACF0u;
    // 0x2cacf4: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2CACF0u, 0x2CACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACF8u;
label_2cacf8:
    // 0x2cacf8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2cacf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2cacfc:
    // 0x2cacfc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2cad00:
    if (ctx->pc == 0x2CAD00u) {
        ctx->pc = 0x2CAD04u;
        goto label_2cad04;
    }
    ctx->pc = 0x2CACFCu;
    {
        const bool branch_taken_0x2cacfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cacfc) {
            ctx->pc = 0x2CAD3Cu;
            goto label_2cad3c;
        }
    }
    ctx->pc = 0x2CAD04u;
label_2cad04:
    // 0x2cad04: 0x16a0000d  bnez        $s5, . + 4 + (0xD << 2)
label_2cad08:
    if (ctx->pc == 0x2CAD08u) {
        ctx->pc = 0x2CAD0Cu;
        goto label_2cad0c;
    }
    ctx->pc = 0x2CAD04u;
    {
        const bool branch_taken_0x2cad04 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cad04) {
            ctx->pc = 0x2CAD3Cu;
            goto label_2cad3c;
        }
    }
    ctx->pc = 0x2CAD0Cu;
label_2cad0c:
    // 0x2cad0c: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
label_2cad10:
    if (ctx->pc == 0x2CAD10u) {
        ctx->pc = 0x2CAD14u;
        goto label_2cad14;
    }
    ctx->pc = 0x2CAD0Cu;
    {
        const bool branch_taken_0x2cad0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cad0c) {
            ctx->pc = 0x2CAD3Cu;
            goto label_2cad3c;
        }
    }
    ctx->pc = 0x2CAD14u;
label_2cad14:
    // 0x2cad14: 0xc0a367c  jal         func_28D9F0
label_2cad18:
    if (ctx->pc == 0x2CAD18u) {
        ctx->pc = 0x2CAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD14u;
        // 0x2cad18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD1Cu;
        goto label_2cad1c;
    }
    ctx->pc = 0x2CAD14u;
    SET_GPR_U32(ctx, 31, 0x2CAD1Cu);
    ctx->pc = 0x2CAD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD14u;
    // 0x2cad18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CAD14u, 0x2CAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD1Cu;
label_2cad1c:
    // 0x2cad1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2cad20:
    if (ctx->pc == 0x2CAD20u) {
        ctx->pc = 0x2CAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD1Cu;
        // 0x2cad20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD24u;
        goto label_2cad24;
    }
    ctx->pc = 0x2CAD1Cu;
    {
        const bool branch_taken_0x2cad1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD1Cu;
        // 0x2cad20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad1c) {
            ctx->pc = 0x2CAD3Cu;
            goto label_2cad3c;
        }
    }
    ctx->pc = 0x2CAD24u;
label_2cad24:
    // 0x2cad24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cad24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cad28:
    // 0x2cad28: 0x2406025b  addiu       $a2, $zero, 0x25B
    ctx->pc = 0x2cad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
label_2cad2c:
    // 0x2cad2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cad2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cad30:
    // 0x2cad30: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2cad30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2cad34:
    // 0x2cad34: 0xc0be7d2  jal         func_2F9F48
label_2cad38:
    if (ctx->pc == 0x2CAD38u) {
        ctx->pc = 0x2CAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD34u;
        // 0x2cad38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD3Cu;
        goto label_2cad3c;
    }
    ctx->pc = 0x2CAD34u;
    SET_GPR_U32(ctx, 31, 0x2CAD3Cu);
    ctx->pc = 0x2CAD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD34u;
    // 0x2cad38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2CAD34u, 0x2CAD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD3Cu;
label_2cad3c:
    // 0x2cad3c: 0xc0a367c  jal         func_28D9F0
label_2cad40:
    if (ctx->pc == 0x2CAD40u) {
        ctx->pc = 0x2CAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD3Cu;
        // 0x2cad40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD44u;
        goto label_2cad44;
    }
    ctx->pc = 0x2CAD3Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD44u);
    ctx->pc = 0x2CAD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD3Cu;
    // 0x2cad40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CAD3Cu, 0x2CAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD44u;
label_2cad44:
    // 0x2cad44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cad48:
    // 0x2cad48: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2cad4c:
    if (ctx->pc == 0x2CAD4Cu) {
        ctx->pc = 0x2CAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD48u;
        // 0x2cad4c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD50u;
        goto label_2cad50;
    }
    ctx->pc = 0x2CAD48u;
    {
        const bool branch_taken_0x2cad48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD48u;
        // 0x2cad4c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad48) {
            ctx->pc = 0x2CAD98u;
            goto label_2cad98;
        }
    }
    ctx->pc = 0x2CAD50u;
label_2cad50:
    // 0x2cad50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cad50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cad54:
    // 0x2cad54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cad54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2cad58:
    // 0x2cad58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2cad58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2cad5c:
    // 0x2cad5c: 0xc0cd508  jal         func_335420
label_2cad60:
    if (ctx->pc == 0x2CAD60u) {
        ctx->pc = 0x2CAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD5Cu;
        // 0x2cad60: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD64u;
        goto label_2cad64;
    }
    ctx->pc = 0x2CAD5Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD64u);
    ctx->pc = 0x2CAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD5Cu;
    // 0x2cad60: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2CAD5Cu, 0x2CAD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD64u;
label_2cad64:
    // 0x2cad64: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2cad64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_2cad68:
    // 0x2cad68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cad68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cad6c:
    // 0x2cad6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cad70:
    // 0x2cad70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cad74:
    // 0x2cad74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cad74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cad78:
    // 0x2cad78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cad78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cad7c:
    // 0x2cad7c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2cad7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_2cad80:
    // 0x2cad80: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2cad80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_2cad84:
    // 0x2cad84: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x2cad84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2cad88:
    // 0x2cad88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cad88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2cad8c:
    // 0x2cad8c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2cad8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2cad90:
    // 0x2cad90: 0xc0bf3d4  jal         func_2FCF50
label_2cad94:
    if (ctx->pc == 0x2CAD94u) {
        ctx->pc = 0x2CAD98u;
        goto label_2cad98;
    }
    ctx->pc = 0x2CAD90u;
    SET_GPR_U32(ctx, 31, 0x2CAD98u);
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2CAD90u, 0x2CAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD98u;
label_2cad98:
    // 0x2cad98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cad98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cad9c:
    // 0x2cad9c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2cad9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2cada0:
    // 0x2cada0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2cada0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2cada4:
    // 0x2cada4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2cada4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cada8:
    // 0x2cada8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2cada8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cadac:
    // 0x2cadac: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2cadacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cadb0:
    // 0x2cadb0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2cadb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cadb4:
    // 0x2cadb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cadb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cadb8:
    // 0x2cadb8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2cadb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cadbc:
    // 0x2cadbc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2cadbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cadc0:
    // 0x2cadc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cadc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cadc4:
    // 0x2cadc4: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2cadc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cadc8:
    // 0x2cadc8: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2cadc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cadcc:
    // 0x2cadcc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2cadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cadd0:
    // 0x2cadd0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2cadd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cadd4:
    // 0x2cadd4: 0x3e00008  jr          $ra
label_2cadd8:
    if (ctx->pc == 0x2CADD8u) {
        ctx->pc = 0x2CADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADD4u;
        // 0x2cadd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CADDCu;
        goto label_2caddc;
    }
    ctx->pc = 0x2CADD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADD4u;
        // 0x2cadd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CADD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CADDCu;
label_2caddc:
    // 0x2caddc: 0x0  nop
    ctx->pc = 0x2caddcu;
    // NOP
    ctx->pc = 0x2cade0u;
}
