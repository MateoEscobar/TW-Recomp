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

// Function: sub_001DD4D0
// Address: 0x1dd4d0 - 0x1ddbc0
void sub_001DD4D0_0x1dd4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD4D0_0x1dd4d0");
#endif

    switch (ctx->pc) {
        case 0x1dd4d0u: goto label_1dd4d0;
        case 0x1dd4d4u: goto label_1dd4d4;
        case 0x1dd4d8u: goto label_1dd4d8;
        case 0x1dd4dcu: goto label_1dd4dc;
        case 0x1dd4e0u: goto label_1dd4e0;
        case 0x1dd4e4u: goto label_1dd4e4;
        case 0x1dd4e8u: goto label_1dd4e8;
        case 0x1dd4ecu: goto label_1dd4ec;
        case 0x1dd4f0u: goto label_1dd4f0;
        case 0x1dd4f4u: goto label_1dd4f4;
        case 0x1dd4f8u: goto label_1dd4f8;
        case 0x1dd4fcu: goto label_1dd4fc;
        case 0x1dd500u: goto label_1dd500;
        case 0x1dd504u: goto label_1dd504;
        case 0x1dd508u: goto label_1dd508;
        case 0x1dd50cu: goto label_1dd50c;
        case 0x1dd510u: goto label_1dd510;
        case 0x1dd514u: goto label_1dd514;
        case 0x1dd518u: goto label_1dd518;
        case 0x1dd51cu: goto label_1dd51c;
        case 0x1dd520u: goto label_1dd520;
        case 0x1dd524u: goto label_1dd524;
        case 0x1dd528u: goto label_1dd528;
        case 0x1dd52cu: goto label_1dd52c;
        case 0x1dd530u: goto label_1dd530;
        case 0x1dd534u: goto label_1dd534;
        case 0x1dd538u: goto label_1dd538;
        case 0x1dd53cu: goto label_1dd53c;
        case 0x1dd540u: goto label_1dd540;
        case 0x1dd544u: goto label_1dd544;
        case 0x1dd548u: goto label_1dd548;
        case 0x1dd54cu: goto label_1dd54c;
        case 0x1dd550u: goto label_1dd550;
        case 0x1dd554u: goto label_1dd554;
        case 0x1dd558u: goto label_1dd558;
        case 0x1dd55cu: goto label_1dd55c;
        case 0x1dd560u: goto label_1dd560;
        case 0x1dd564u: goto label_1dd564;
        case 0x1dd568u: goto label_1dd568;
        case 0x1dd56cu: goto label_1dd56c;
        case 0x1dd570u: goto label_1dd570;
        case 0x1dd574u: goto label_1dd574;
        case 0x1dd578u: goto label_1dd578;
        case 0x1dd57cu: goto label_1dd57c;
        case 0x1dd580u: goto label_1dd580;
        case 0x1dd584u: goto label_1dd584;
        case 0x1dd588u: goto label_1dd588;
        case 0x1dd58cu: goto label_1dd58c;
        case 0x1dd590u: goto label_1dd590;
        case 0x1dd594u: goto label_1dd594;
        case 0x1dd598u: goto label_1dd598;
        case 0x1dd59cu: goto label_1dd59c;
        case 0x1dd5a0u: goto label_1dd5a0;
        case 0x1dd5a4u: goto label_1dd5a4;
        case 0x1dd5a8u: goto label_1dd5a8;
        case 0x1dd5acu: goto label_1dd5ac;
        case 0x1dd5b0u: goto label_1dd5b0;
        case 0x1dd5b4u: goto label_1dd5b4;
        case 0x1dd5b8u: goto label_1dd5b8;
        case 0x1dd5bcu: goto label_1dd5bc;
        case 0x1dd5c0u: goto label_1dd5c0;
        case 0x1dd5c4u: goto label_1dd5c4;
        case 0x1dd5c8u: goto label_1dd5c8;
        case 0x1dd5ccu: goto label_1dd5cc;
        case 0x1dd5d0u: goto label_1dd5d0;
        case 0x1dd5d4u: goto label_1dd5d4;
        case 0x1dd5d8u: goto label_1dd5d8;
        case 0x1dd5dcu: goto label_1dd5dc;
        case 0x1dd5e0u: goto label_1dd5e0;
        case 0x1dd5e4u: goto label_1dd5e4;
        case 0x1dd5e8u: goto label_1dd5e8;
        case 0x1dd5ecu: goto label_1dd5ec;
        case 0x1dd5f0u: goto label_1dd5f0;
        case 0x1dd5f4u: goto label_1dd5f4;
        case 0x1dd5f8u: goto label_1dd5f8;
        case 0x1dd5fcu: goto label_1dd5fc;
        case 0x1dd600u: goto label_1dd600;
        case 0x1dd604u: goto label_1dd604;
        case 0x1dd608u: goto label_1dd608;
        case 0x1dd60cu: goto label_1dd60c;
        case 0x1dd610u: goto label_1dd610;
        case 0x1dd614u: goto label_1dd614;
        case 0x1dd618u: goto label_1dd618;
        case 0x1dd61cu: goto label_1dd61c;
        case 0x1dd620u: goto label_1dd620;
        case 0x1dd624u: goto label_1dd624;
        case 0x1dd628u: goto label_1dd628;
        case 0x1dd62cu: goto label_1dd62c;
        case 0x1dd630u: goto label_1dd630;
        case 0x1dd634u: goto label_1dd634;
        case 0x1dd638u: goto label_1dd638;
        case 0x1dd63cu: goto label_1dd63c;
        case 0x1dd640u: goto label_1dd640;
        case 0x1dd644u: goto label_1dd644;
        case 0x1dd648u: goto label_1dd648;
        case 0x1dd64cu: goto label_1dd64c;
        case 0x1dd650u: goto label_1dd650;
        case 0x1dd654u: goto label_1dd654;
        case 0x1dd658u: goto label_1dd658;
        case 0x1dd65cu: goto label_1dd65c;
        case 0x1dd660u: goto label_1dd660;
        case 0x1dd664u: goto label_1dd664;
        case 0x1dd668u: goto label_1dd668;
        case 0x1dd66cu: goto label_1dd66c;
        case 0x1dd670u: goto label_1dd670;
        case 0x1dd674u: goto label_1dd674;
        case 0x1dd678u: goto label_1dd678;
        case 0x1dd67cu: goto label_1dd67c;
        case 0x1dd680u: goto label_1dd680;
        case 0x1dd684u: goto label_1dd684;
        case 0x1dd688u: goto label_1dd688;
        case 0x1dd68cu: goto label_1dd68c;
        case 0x1dd690u: goto label_1dd690;
        case 0x1dd694u: goto label_1dd694;
        case 0x1dd698u: goto label_1dd698;
        case 0x1dd69cu: goto label_1dd69c;
        case 0x1dd6a0u: goto label_1dd6a0;
        case 0x1dd6a4u: goto label_1dd6a4;
        case 0x1dd6a8u: goto label_1dd6a8;
        case 0x1dd6acu: goto label_1dd6ac;
        case 0x1dd6b0u: goto label_1dd6b0;
        case 0x1dd6b4u: goto label_1dd6b4;
        case 0x1dd6b8u: goto label_1dd6b8;
        case 0x1dd6bcu: goto label_1dd6bc;
        case 0x1dd6c0u: goto label_1dd6c0;
        case 0x1dd6c4u: goto label_1dd6c4;
        case 0x1dd6c8u: goto label_1dd6c8;
        case 0x1dd6ccu: goto label_1dd6cc;
        case 0x1dd6d0u: goto label_1dd6d0;
        case 0x1dd6d4u: goto label_1dd6d4;
        case 0x1dd6d8u: goto label_1dd6d8;
        case 0x1dd6dcu: goto label_1dd6dc;
        case 0x1dd6e0u: goto label_1dd6e0;
        case 0x1dd6e4u: goto label_1dd6e4;
        case 0x1dd6e8u: goto label_1dd6e8;
        case 0x1dd6ecu: goto label_1dd6ec;
        case 0x1dd6f0u: goto label_1dd6f0;
        case 0x1dd6f4u: goto label_1dd6f4;
        case 0x1dd6f8u: goto label_1dd6f8;
        case 0x1dd6fcu: goto label_1dd6fc;
        case 0x1dd700u: goto label_1dd700;
        case 0x1dd704u: goto label_1dd704;
        case 0x1dd708u: goto label_1dd708;
        case 0x1dd70cu: goto label_1dd70c;
        case 0x1dd710u: goto label_1dd710;
        case 0x1dd714u: goto label_1dd714;
        case 0x1dd718u: goto label_1dd718;
        case 0x1dd71cu: goto label_1dd71c;
        case 0x1dd720u: goto label_1dd720;
        case 0x1dd724u: goto label_1dd724;
        case 0x1dd728u: goto label_1dd728;
        case 0x1dd72cu: goto label_1dd72c;
        case 0x1dd730u: goto label_1dd730;
        case 0x1dd734u: goto label_1dd734;
        case 0x1dd738u: goto label_1dd738;
        case 0x1dd73cu: goto label_1dd73c;
        case 0x1dd740u: goto label_1dd740;
        case 0x1dd744u: goto label_1dd744;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd74cu: goto label_1dd74c;
        case 0x1dd750u: goto label_1dd750;
        case 0x1dd754u: goto label_1dd754;
        case 0x1dd758u: goto label_1dd758;
        case 0x1dd75cu: goto label_1dd75c;
        case 0x1dd760u: goto label_1dd760;
        case 0x1dd764u: goto label_1dd764;
        case 0x1dd768u: goto label_1dd768;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd770u: goto label_1dd770;
        case 0x1dd774u: goto label_1dd774;
        case 0x1dd778u: goto label_1dd778;
        case 0x1dd77cu: goto label_1dd77c;
        case 0x1dd780u: goto label_1dd780;
        case 0x1dd784u: goto label_1dd784;
        case 0x1dd788u: goto label_1dd788;
        case 0x1dd78cu: goto label_1dd78c;
        case 0x1dd790u: goto label_1dd790;
        case 0x1dd794u: goto label_1dd794;
        case 0x1dd798u: goto label_1dd798;
        case 0x1dd79cu: goto label_1dd79c;
        case 0x1dd7a0u: goto label_1dd7a0;
        case 0x1dd7a4u: goto label_1dd7a4;
        case 0x1dd7a8u: goto label_1dd7a8;
        case 0x1dd7acu: goto label_1dd7ac;
        case 0x1dd7b0u: goto label_1dd7b0;
        case 0x1dd7b4u: goto label_1dd7b4;
        case 0x1dd7b8u: goto label_1dd7b8;
        case 0x1dd7bcu: goto label_1dd7bc;
        case 0x1dd7c0u: goto label_1dd7c0;
        case 0x1dd7c4u: goto label_1dd7c4;
        case 0x1dd7c8u: goto label_1dd7c8;
        case 0x1dd7ccu: goto label_1dd7cc;
        case 0x1dd7d0u: goto label_1dd7d0;
        case 0x1dd7d4u: goto label_1dd7d4;
        case 0x1dd7d8u: goto label_1dd7d8;
        case 0x1dd7dcu: goto label_1dd7dc;
        case 0x1dd7e0u: goto label_1dd7e0;
        case 0x1dd7e4u: goto label_1dd7e4;
        case 0x1dd7e8u: goto label_1dd7e8;
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd7f0u: goto label_1dd7f0;
        case 0x1dd7f4u: goto label_1dd7f4;
        case 0x1dd7f8u: goto label_1dd7f8;
        case 0x1dd7fcu: goto label_1dd7fc;
        case 0x1dd800u: goto label_1dd800;
        case 0x1dd804u: goto label_1dd804;
        case 0x1dd808u: goto label_1dd808;
        case 0x1dd80cu: goto label_1dd80c;
        case 0x1dd810u: goto label_1dd810;
        case 0x1dd814u: goto label_1dd814;
        case 0x1dd818u: goto label_1dd818;
        case 0x1dd81cu: goto label_1dd81c;
        case 0x1dd820u: goto label_1dd820;
        case 0x1dd824u: goto label_1dd824;
        case 0x1dd828u: goto label_1dd828;
        case 0x1dd82cu: goto label_1dd82c;
        case 0x1dd830u: goto label_1dd830;
        case 0x1dd834u: goto label_1dd834;
        case 0x1dd838u: goto label_1dd838;
        case 0x1dd83cu: goto label_1dd83c;
        case 0x1dd840u: goto label_1dd840;
        case 0x1dd844u: goto label_1dd844;
        case 0x1dd848u: goto label_1dd848;
        case 0x1dd84cu: goto label_1dd84c;
        case 0x1dd850u: goto label_1dd850;
        case 0x1dd854u: goto label_1dd854;
        case 0x1dd858u: goto label_1dd858;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd860u: goto label_1dd860;
        case 0x1dd864u: goto label_1dd864;
        case 0x1dd868u: goto label_1dd868;
        case 0x1dd86cu: goto label_1dd86c;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd874u: goto label_1dd874;
        case 0x1dd878u: goto label_1dd878;
        case 0x1dd87cu: goto label_1dd87c;
        case 0x1dd880u: goto label_1dd880;
        case 0x1dd884u: goto label_1dd884;
        case 0x1dd888u: goto label_1dd888;
        case 0x1dd88cu: goto label_1dd88c;
        case 0x1dd890u: goto label_1dd890;
        case 0x1dd894u: goto label_1dd894;
        case 0x1dd898u: goto label_1dd898;
        case 0x1dd89cu: goto label_1dd89c;
        case 0x1dd8a0u: goto label_1dd8a0;
        case 0x1dd8a4u: goto label_1dd8a4;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8acu: goto label_1dd8ac;
        case 0x1dd8b0u: goto label_1dd8b0;
        case 0x1dd8b4u: goto label_1dd8b4;
        case 0x1dd8b8u: goto label_1dd8b8;
        case 0x1dd8bcu: goto label_1dd8bc;
        case 0x1dd8c0u: goto label_1dd8c0;
        case 0x1dd8c4u: goto label_1dd8c4;
        case 0x1dd8c8u: goto label_1dd8c8;
        case 0x1dd8ccu: goto label_1dd8cc;
        case 0x1dd8d0u: goto label_1dd8d0;
        case 0x1dd8d4u: goto label_1dd8d4;
        case 0x1dd8d8u: goto label_1dd8d8;
        case 0x1dd8dcu: goto label_1dd8dc;
        case 0x1dd8e0u: goto label_1dd8e0;
        case 0x1dd8e4u: goto label_1dd8e4;
        case 0x1dd8e8u: goto label_1dd8e8;
        case 0x1dd8ecu: goto label_1dd8ec;
        case 0x1dd8f0u: goto label_1dd8f0;
        case 0x1dd8f4u: goto label_1dd8f4;
        case 0x1dd8f8u: goto label_1dd8f8;
        case 0x1dd8fcu: goto label_1dd8fc;
        case 0x1dd900u: goto label_1dd900;
        case 0x1dd904u: goto label_1dd904;
        case 0x1dd908u: goto label_1dd908;
        case 0x1dd90cu: goto label_1dd90c;
        case 0x1dd910u: goto label_1dd910;
        case 0x1dd914u: goto label_1dd914;
        case 0x1dd918u: goto label_1dd918;
        case 0x1dd91cu: goto label_1dd91c;
        case 0x1dd920u: goto label_1dd920;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd928u: goto label_1dd928;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd934u: goto label_1dd934;
        case 0x1dd938u: goto label_1dd938;
        case 0x1dd93cu: goto label_1dd93c;
        case 0x1dd940u: goto label_1dd940;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd948u: goto label_1dd948;
        case 0x1dd94cu: goto label_1dd94c;
        case 0x1dd950u: goto label_1dd950;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd958u: goto label_1dd958;
        case 0x1dd95cu: goto label_1dd95c;
        case 0x1dd960u: goto label_1dd960;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd968u: goto label_1dd968;
        case 0x1dd96cu: goto label_1dd96c;
        case 0x1dd970u: goto label_1dd970;
        case 0x1dd974u: goto label_1dd974;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd97cu: goto label_1dd97c;
        case 0x1dd980u: goto label_1dd980;
        case 0x1dd984u: goto label_1dd984;
        case 0x1dd988u: goto label_1dd988;
        case 0x1dd98cu: goto label_1dd98c;
        case 0x1dd990u: goto label_1dd990;
        case 0x1dd994u: goto label_1dd994;
        case 0x1dd998u: goto label_1dd998;
        case 0x1dd99cu: goto label_1dd99c;
        case 0x1dd9a0u: goto label_1dd9a0;
        case 0x1dd9a4u: goto label_1dd9a4;
        case 0x1dd9a8u: goto label_1dd9a8;
        case 0x1dd9acu: goto label_1dd9ac;
        case 0x1dd9b0u: goto label_1dd9b0;
        case 0x1dd9b4u: goto label_1dd9b4;
        case 0x1dd9b8u: goto label_1dd9b8;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9c0u: goto label_1dd9c0;
        case 0x1dd9c4u: goto label_1dd9c4;
        case 0x1dd9c8u: goto label_1dd9c8;
        case 0x1dd9ccu: goto label_1dd9cc;
        case 0x1dd9d0u: goto label_1dd9d0;
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9d8u: goto label_1dd9d8;
        case 0x1dd9dcu: goto label_1dd9dc;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9e8u: goto label_1dd9e8;
        case 0x1dd9ecu: goto label_1dd9ec;
        case 0x1dd9f0u: goto label_1dd9f0;
        case 0x1dd9f4u: goto label_1dd9f4;
        case 0x1dd9f8u: goto label_1dd9f8;
        case 0x1dd9fcu: goto label_1dd9fc;
        case 0x1dda00u: goto label_1dda00;
        case 0x1dda04u: goto label_1dda04;
        case 0x1dda08u: goto label_1dda08;
        case 0x1dda0cu: goto label_1dda0c;
        case 0x1dda10u: goto label_1dda10;
        case 0x1dda14u: goto label_1dda14;
        case 0x1dda18u: goto label_1dda18;
        case 0x1dda1cu: goto label_1dda1c;
        case 0x1dda20u: goto label_1dda20;
        case 0x1dda24u: goto label_1dda24;
        case 0x1dda28u: goto label_1dda28;
        case 0x1dda2cu: goto label_1dda2c;
        case 0x1dda30u: goto label_1dda30;
        case 0x1dda34u: goto label_1dda34;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda3cu: goto label_1dda3c;
        case 0x1dda40u: goto label_1dda40;
        case 0x1dda44u: goto label_1dda44;
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda4cu: goto label_1dda4c;
        case 0x1dda50u: goto label_1dda50;
        case 0x1dda54u: goto label_1dda54;
        case 0x1dda58u: goto label_1dda58;
        case 0x1dda5cu: goto label_1dda5c;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda64u: goto label_1dda64;
        case 0x1dda68u: goto label_1dda68;
        case 0x1dda6cu: goto label_1dda6c;
        case 0x1dda70u: goto label_1dda70;
        case 0x1dda74u: goto label_1dda74;
        case 0x1dda78u: goto label_1dda78;
        case 0x1dda7cu: goto label_1dda7c;
        case 0x1dda80u: goto label_1dda80;
        case 0x1dda84u: goto label_1dda84;
        case 0x1dda88u: goto label_1dda88;
        case 0x1dda8cu: goto label_1dda8c;
        case 0x1dda90u: goto label_1dda90;
        case 0x1dda94u: goto label_1dda94;
        case 0x1dda98u: goto label_1dda98;
        case 0x1dda9cu: goto label_1dda9c;
        case 0x1ddaa0u: goto label_1ddaa0;
        case 0x1ddaa4u: goto label_1ddaa4;
        case 0x1ddaa8u: goto label_1ddaa8;
        case 0x1ddaacu: goto label_1ddaac;
        case 0x1ddab0u: goto label_1ddab0;
        case 0x1ddab4u: goto label_1ddab4;
        case 0x1ddab8u: goto label_1ddab8;
        case 0x1ddabcu: goto label_1ddabc;
        case 0x1ddac0u: goto label_1ddac0;
        case 0x1ddac4u: goto label_1ddac4;
        case 0x1ddac8u: goto label_1ddac8;
        case 0x1ddaccu: goto label_1ddacc;
        case 0x1ddad0u: goto label_1ddad0;
        case 0x1ddad4u: goto label_1ddad4;
        case 0x1ddad8u: goto label_1ddad8;
        case 0x1ddadcu: goto label_1ddadc;
        case 0x1ddae0u: goto label_1ddae0;
        case 0x1ddae4u: goto label_1ddae4;
        case 0x1ddae8u: goto label_1ddae8;
        case 0x1ddaecu: goto label_1ddaec;
        case 0x1ddaf0u: goto label_1ddaf0;
        case 0x1ddaf4u: goto label_1ddaf4;
        case 0x1ddaf8u: goto label_1ddaf8;
        case 0x1ddafcu: goto label_1ddafc;
        case 0x1ddb00u: goto label_1ddb00;
        case 0x1ddb04u: goto label_1ddb04;
        case 0x1ddb08u: goto label_1ddb08;
        case 0x1ddb0cu: goto label_1ddb0c;
        case 0x1ddb10u: goto label_1ddb10;
        case 0x1ddb14u: goto label_1ddb14;
        case 0x1ddb18u: goto label_1ddb18;
        case 0x1ddb1cu: goto label_1ddb1c;
        case 0x1ddb20u: goto label_1ddb20;
        case 0x1ddb24u: goto label_1ddb24;
        case 0x1ddb28u: goto label_1ddb28;
        case 0x1ddb2cu: goto label_1ddb2c;
        case 0x1ddb30u: goto label_1ddb30;
        case 0x1ddb34u: goto label_1ddb34;
        case 0x1ddb38u: goto label_1ddb38;
        case 0x1ddb3cu: goto label_1ddb3c;
        case 0x1ddb40u: goto label_1ddb40;
        case 0x1ddb44u: goto label_1ddb44;
        case 0x1ddb48u: goto label_1ddb48;
        case 0x1ddb4cu: goto label_1ddb4c;
        case 0x1ddb50u: goto label_1ddb50;
        case 0x1ddb54u: goto label_1ddb54;
        case 0x1ddb58u: goto label_1ddb58;
        case 0x1ddb5cu: goto label_1ddb5c;
        case 0x1ddb60u: goto label_1ddb60;
        case 0x1ddb64u: goto label_1ddb64;
        case 0x1ddb68u: goto label_1ddb68;
        case 0x1ddb6cu: goto label_1ddb6c;
        case 0x1ddb70u: goto label_1ddb70;
        case 0x1ddb74u: goto label_1ddb74;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb7cu: goto label_1ddb7c;
        case 0x1ddb80u: goto label_1ddb80;
        case 0x1ddb84u: goto label_1ddb84;
        case 0x1ddb88u: goto label_1ddb88;
        case 0x1ddb8cu: goto label_1ddb8c;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddb94u: goto label_1ddb94;
        case 0x1ddb98u: goto label_1ddb98;
        case 0x1ddb9cu: goto label_1ddb9c;
        case 0x1ddba0u: goto label_1ddba0;
        case 0x1ddba4u: goto label_1ddba4;
        case 0x1ddba8u: goto label_1ddba8;
        case 0x1ddbacu: goto label_1ddbac;
        case 0x1ddbb0u: goto label_1ddbb0;
        case 0x1ddbb4u: goto label_1ddbb4;
        case 0x1ddbb8u: goto label_1ddbb8;
        case 0x1ddbbcu: goto label_1ddbbc;
        default: break;
    }

    ctx->pc = 0x1dd4d0u;

label_1dd4d0:
    // 0x1dd4d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1dd4d4:
    // 0x1dd4d4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1dd4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1dd4d8:
    // 0x1dd4d8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1dd4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1dd4dc:
    // 0x1dd4dc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1dd4e0:
    // 0x1dd4e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd4e4:
    // 0x1dd4e4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1dd4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1dd4e8:
    // 0x1dd4e8: 0x8e24ee2c  lw          $a0, -0x11D4($s1)
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962732)));
label_1dd4ec:
    // 0x1dd4ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1dd4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd4f0:
    // 0x1dd4f0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1dd4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1dd4f4:
    // 0x1dd4f4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1dd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1dd4f8:
    // 0x1dd4f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1dd4fc:
    // 0x1dd4fc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1dd4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1dd500:
    // 0x1dd500: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1dd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1dd504:
    // 0x1dd504: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1dd504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1dd508:
    // 0x1dd508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dd50c:
    // 0x1dd50c: 0x14800177  bnez        $a0, . + 4 + (0x177 << 2)
label_1dd510:
    if (ctx->pc == 0x1DD510u) {
        ctx->pc = 0x1DD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD50Cu;
        // 0x1dd510: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD514u;
        goto label_1dd514;
    }
    ctx->pc = 0x1DD50Cu;
    {
        const bool branch_taken_0x1dd50c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD50Cu;
        // 0x1dd510: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd50c) {
            ctx->pc = 0x1DDAECu;
            goto label_1ddaec;
        }
    }
    ctx->pc = 0x1DD514u;
label_1dd514:
    // 0x1dd514: 0x8e433a74  lw          $v1, 0x3A74($s2)
    ctx->pc = 0x1dd514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1dd518:
    // 0x1dd518: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
label_1dd51c:
    if (ctx->pc == 0x1DD51Cu) {
        ctx->pc = 0x1DD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD518u;
        // 0x1dd51c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD520u;
        goto label_1dd520;
    }
    ctx->pc = 0x1DD518u;
    {
        const bool branch_taken_0x1dd518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD518u;
        // 0x1dd51c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd518) {
            ctx->pc = 0x1DD6ECu;
            goto label_1dd6ec;
        }
    }
    ctx->pc = 0x1DD520u;
label_1dd520:
    // 0x1dd520: 0x8e472af4  lw          $a3, 0x2AF4($s2)
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dd524:
    // 0x1dd524: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1dd524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1dd528:
    // 0x1dd528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd52c:
    // 0x1dd52c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dd52cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd530:
    // 0x1dd530: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd534:
    // 0x1dd534: 0x265020d0  addiu       $s0, $s2, 0x20D0
    ctx->pc = 0x1dd534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
label_1dd538:
    // 0x1dd538: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1dd538u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1dd53c:
    // 0x1dd53c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1dd53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd540:
    // 0x1dd540: 0x84c50018  lh          $a1, 0x18($a2)
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_1dd544:
    // 0x1dd544: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1dd544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd548:
    // 0x1dd548: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1dd548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1dd54c:
    // 0x1dd54c: 0x60f809  jalr        $v1
label_1dd550:
    if (ctx->pc == 0x1DD550u) {
        ctx->pc = 0x1DD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD54Cu;
        // 0x1dd550: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD554u;
        goto label_1dd554;
    }
    ctx->pc = 0x1DD54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD554u);
        ctx->pc = 0x1DD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD54Cu;
        // 0x1dd550: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD54Cu, 0x1DD554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD554u;
label_1dd554:
    // 0x1dd554: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1dd554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd558:
    // 0x1dd558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd55c:
    // 0x1dd55c: 0xc069682  jal         func_1A5A08
label_1dd560:
    if (ctx->pc == 0x1DD560u) {
        ctx->pc = 0x1DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD55Cu;
        // 0x1dd560: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD564u;
        goto label_1dd564;
    }
    ctx->pc = 0x1DD55Cu;
    SET_GPR_U32(ctx, 31, 0x1DD564u);
    ctx->pc = 0x1DD560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD55Cu;
    // 0x1dd560: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A08u, 0x1DD55Cu, 0x1DD564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD564u;
label_1dd564:
    // 0x1dd564: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd568:
    // 0x1dd568: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dd568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd56c:
    // 0x1dd56c: 0xc441ee74  lwc1        $f1, -0x118C($v0)
    ctx->pc = 0x1dd56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd570:
    // 0x1dd570: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1dd570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1dd574:
    // 0x1dd574: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1dd574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd578:
    // 0x1dd578: 0x0  nop
    ctx->pc = 0x1dd578u;
    // NOP
label_1dd57c:
    // 0x1dd57c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1dd580:
    if (ctx->pc == 0x1DD580u) {
        ctx->pc = 0x1DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD57Cu;
        // 0x1dd580: 0xe621ee38  swc1        $f1, -0x11C8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD584u;
        goto label_1dd584;
    }
    ctx->pc = 0x1DD57Cu;
    {
        const bool branch_taken_0x1dd57c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD57Cu;
        // 0x1dd580: 0xe621ee38  swc1        $f1, -0x11C8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd57c) {
            ctx->pc = 0x1DD5C4u;
            goto label_1dd5c4;
        }
    }
    ctx->pc = 0x1DD584u;
label_1dd584:
    // 0x1dd584: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd588:
    // 0x1dd588: 0xc440ee20  lwc1        $f0, -0x11E0($v0)
    ctx->pc = 0x1dd588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd58c:
    // 0x1dd58c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dd58cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd590:
    // 0x1dd590: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dd590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1dd594:
    // 0x1dd594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd598:
    // 0x1dd598: 0x0  nop
    ctx->pc = 0x1dd598u;
    // NOP
label_1dd59c:
    // 0x1dd59c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd5a0:
    if (ctx->pc == 0x1DD5A0u) {
        ctx->pc = 0x1DD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD59Cu;
        // 0x1dd5a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5A4u;
        goto label_1dd5a4;
    }
    ctx->pc = 0x1DD59Cu;
    {
        const bool branch_taken_0x1dd59c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD59Cu;
        // 0x1dd5a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd59c) {
            ctx->pc = 0x1DD5A8u;
            goto label_1dd5a8;
        }
    }
    ctx->pc = 0x1DD5A4u;
label_1dd5a4:
    // 0x1dd5a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd5a8:
    // 0x1dd5a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd5ac:
    // 0x1dd5ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5b0:
    // 0x1dd5b0: 0xc44cee24  lwc1        $f12, -0x11DC($v0)
    ctx->pc = 0x1dd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd5b4:
    // 0x1dd5b4: 0xc077496  jal         func_1DD258
label_1dd5b8:
    if (ctx->pc == 0x1DD5B8u) {
        ctx->pc = 0x1DD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5B4u;
        // 0x1dd5b8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5BCu;
        goto label_1dd5bc;
    }
    ctx->pc = 0x1DD5B4u;
    SET_GPR_U32(ctx, 31, 0x1DD5BCu);
    ctx->pc = 0x1DD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5B4u;
    // 0x1dd5b8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD5B4u, 0x1DD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5BCu;
label_1dd5bc:
    // 0x1dd5bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1dd5c0:
    if (ctx->pc == 0x1DD5C0u) {
        ctx->pc = 0x1DD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5BCu;
        // 0x1dd5c0: 0x8e472af4  lw          $a3, 0x2AF4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5C4u;
        goto label_1dd5c4;
    }
    ctx->pc = 0x1DD5BCu;
    {
        const bool branch_taken_0x1dd5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5BCu;
        // 0x1dd5c0: 0x8e472af4  lw          $a3, 0x2AF4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5bc) {
            ctx->pc = 0x1DD5F0u;
            goto label_1dd5f0;
        }
    }
    ctx->pc = 0x1DD5C4u;
label_1dd5c4:
    // 0x1dd5c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd5c8:
    // 0x1dd5c8: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1dd5cc:
    // 0x1dd5cc: 0xc440ee20  lwc1        $f0, -0x11E0($v0)
    ctx->pc = 0x1dd5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd5d0:
    // 0x1dd5d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dd5d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5d4:
    // 0x1dd5d4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dd5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dd5d8:
    // 0x1dd5d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd5d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd5dc:
    // 0x1dd5dc: 0x0  nop
    ctx->pc = 0x1dd5dcu;
    // NOP
label_1dd5e0:
    // 0x1dd5e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd5e4:
    if (ctx->pc == 0x1DD5E4u) {
        ctx->pc = 0x1DD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5E0u;
        // 0x1dd5e4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5E8u;
        goto label_1dd5e8;
    }
    ctx->pc = 0x1DD5E0u;
    {
        const bool branch_taken_0x1dd5e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5E0u;
        // 0x1dd5e4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5e0) {
            ctx->pc = 0x1DD5ECu;
            goto label_1dd5ec;
        }
    }
    ctx->pc = 0x1DD5E8u;
label_1dd5e8:
    // 0x1dd5e8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd5ec:
    // 0x1dd5ec: 0x8e472af4  lw          $a3, 0x2AF4($s2)
    ctx->pc = 0x1dd5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dd5f0:
    // 0x1dd5f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5f4:
    // 0x1dd5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5f8:
    // 0x1dd5f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dd5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1dd5fc:
    // 0x1dd5fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd600:
    // 0x1dd600: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1dd600u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd604:
    // 0x1dd604: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd608:
    // 0x1dd608: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd60c:
    // 0x1dd60c: 0x60f809  jalr        $v1
label_1dd610:
    if (ctx->pc == 0x1DD610u) {
        ctx->pc = 0x1DD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD60Cu;
        // 0x1dd610: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD614u;
        goto label_1dd614;
    }
    ctx->pc = 0x1DD60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD614u);
        ctx->pc = 0x1DD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD60Cu;
        // 0x1dd610: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD60Cu, 0x1DD614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD614u;
label_1dd614:
    // 0x1dd614: 0x8e462af8  lw          $a2, 0x2AF8($s2)
    ctx->pc = 0x1dd614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dd618:
    // 0x1dd618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd61c:
    // 0x1dd61c: 0xae02ee48  sw          $v0, -0x11B8($s0)
    ctx->pc = 0x1dd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294962760), GPR_U32(ctx, 2));
label_1dd620:
    // 0x1dd620: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dd620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dd624:
    // 0x1dd624: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dd628:
    // 0x1dd628: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1dd628u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1dd62c:
    // 0x1dd62c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1dd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1dd630:
    // 0x1dd630: 0x60f809  jalr        $v1
label_1dd634:
    if (ctx->pc == 0x1DD634u) {
        ctx->pc = 0x1DD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD630u;
        // 0x1dd634: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD638u;
        goto label_1dd638;
    }
    ctx->pc = 0x1DD630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD638u);
        ctx->pc = 0x1DD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD630u;
        // 0x1dd634: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD630u, 0x1DD638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD638u;
label_1dd638:
    // 0x1dd638: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1dd638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd63c:
    // 0x1dd63c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dd63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1dd640:
    // 0x1dd640: 0xc6a1ee38  lwc1        $f1, -0x11C8($s5)
    ctx->pc = 0x1dd640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294962744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd644:
    // 0x1dd644: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dd644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1dd648:
    // 0x1dd648: 0xc460ee3c  lwc1        $f0, -0x11C4($v1)
    ctx->pc = 0x1dd648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd64c:
    // 0x1dd64c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1dd64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1dd650:
    // 0x1dd650: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1dd650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd654:
    // 0x1dd654: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dd654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd658:
    // 0x1dd658: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1dd658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd65c:
    // 0x1dd65c: 0x0  nop
    ctx->pc = 0x1dd65cu;
    // NOP
label_1dd660:
    // 0x1dd660: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1dd664:
    if (ctx->pc == 0x1DD664u) {
        ctx->pc = 0x1DD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD660u;
        // 0x1dd664: 0xe481ee44  swc1        $f1, -0x11BC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD668u;
        goto label_1dd668;
    }
    ctx->pc = 0x1DD660u;
    {
        const bool branch_taken_0x1dd660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD660u;
        // 0x1dd664: 0xe481ee44  swc1        $f1, -0x11BC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd660) {
            ctx->pc = 0x1DD698u;
            goto label_1dd698;
        }
    }
    ctx->pc = 0x1DD668u;
label_1dd668:
    // 0x1dd668: 0xc680ee20  lwc1        $f0, -0x11E0($s4)
    ctx->pc = 0x1dd668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd66c:
    // 0x1dd66c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dd66cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1dd670:
    // 0x1dd670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd674:
    // 0x1dd674: 0x0  nop
    ctx->pc = 0x1dd674u;
    // NOP
label_1dd678:
    // 0x1dd678: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd67c:
    if (ctx->pc == 0x1DD67Cu) {
        ctx->pc = 0x1DD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD678u;
        // 0x1dd67c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD680u;
        goto label_1dd680;
    }
    ctx->pc = 0x1DD678u;
    {
        const bool branch_taken_0x1dd678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD678u;
        // 0x1dd67c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd678) {
            ctx->pc = 0x1DD684u;
            goto label_1dd684;
        }
    }
    ctx->pc = 0x1DD680u;
label_1dd680:
    // 0x1dd680: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd684:
    // 0x1dd684: 0xc7ccee24  lwc1        $f12, -0x11DC($fp)
    ctx->pc = 0x1dd684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd688:
    // 0x1dd688: 0xc077496  jal         func_1DD258
label_1dd68c:
    if (ctx->pc == 0x1DD68Cu) {
        ctx->pc = 0x1DD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD688u;
        // 0x1dd68c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD690u;
        goto label_1dd690;
    }
    ctx->pc = 0x1DD688u;
    SET_GPR_U32(ctx, 31, 0x1DD690u);
    ctx->pc = 0x1DD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD688u;
    // 0x1dd68c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD688u, 0x1DD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD690u;
label_1dd690:
    // 0x1dd690: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dd694:
    if (ctx->pc == 0x1DD694u) {
        ctx->pc = 0x1DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD690u;
        // 0x1dd694: 0x8e472af8  lw          $a3, 0x2AF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD698u;
        goto label_1dd698;
    }
    ctx->pc = 0x1DD690u;
    {
        const bool branch_taken_0x1dd690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD690u;
        // 0x1dd694: 0x8e472af8  lw          $a3, 0x2AF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd690) {
            ctx->pc = 0x1DD6B8u;
            goto label_1dd6b8;
        }
    }
    ctx->pc = 0x1DD698u;
label_1dd698:
    // 0x1dd698: 0xc680ee20  lwc1        $f0, -0x11E0($s4)
    ctx->pc = 0x1dd698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd69c:
    // 0x1dd69c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dd69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dd6a0:
    // 0x1dd6a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd6a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd6a4:
    // 0x1dd6a4: 0x0  nop
    ctx->pc = 0x1dd6a4u;
    // NOP
label_1dd6a8:
    // 0x1dd6a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd6ac:
    if (ctx->pc == 0x1DD6ACu) {
        ctx->pc = 0x1DD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A8u;
        // 0x1dd6ac: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6B0u;
        goto label_1dd6b0;
    }
    ctx->pc = 0x1DD6A8u;
    {
        const bool branch_taken_0x1dd6a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A8u;
        // 0x1dd6ac: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6a8) {
            ctx->pc = 0x1DD6B4u;
            goto label_1dd6b4;
        }
    }
    ctx->pc = 0x1DD6B0u;
label_1dd6b0:
    // 0x1dd6b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd6b4:
    // 0x1dd6b4: 0x8e472af8  lw          $a3, 0x2AF8($s2)
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dd6b8:
    // 0x1dd6b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6bc:
    // 0x1dd6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6c0:
    // 0x1dd6c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dd6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dd6c4:
    // 0x1dd6c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd6c8:
    // 0x1dd6c8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd6cc:
    // 0x1dd6cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd6d0:
    // 0x1dd6d0: 0x60f809  jalr        $v1
label_1dd6d4:
    if (ctx->pc == 0x1DD6D4u) {
        ctx->pc = 0x1DD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D0u;
        // 0x1dd6d4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6D8u;
        goto label_1dd6d8;
    }
    ctx->pc = 0x1DD6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD6D8u);
        ctx->pc = 0x1DD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D0u;
        // 0x1dd6d4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6D0u, 0x1DD6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD6D8u;
label_1dd6d8:
    // 0x1dd6d8: 0xc7ccee24  lwc1        $f12, -0x11DC($fp)
    ctx->pc = 0x1dd6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd6dc:
    // 0x1dd6dc: 0xc077496  jal         func_1DD258
label_1dd6e0:
    if (ctx->pc == 0x1DD6E0u) {
        ctx->pc = 0x1DD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6DCu;
        // 0x1dd6e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6E4u;
        goto label_1dd6e4;
    }
    ctx->pc = 0x1DD6DCu;
    SET_GPR_U32(ctx, 31, 0x1DD6E4u);
    ctx->pc = 0x1DD6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6DCu;
    // 0x1dd6e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD6DCu, 0x1DD6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6E4u;
label_1dd6e4:
    // 0x1dd6e4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1dd6e8:
    if (ctx->pc == 0x1DD6E8u) {
        ctx->pc = 0x1DD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E4u;
        // 0x1dd6e8: 0x26442430  addiu       $a0, $s2, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6ECu;
        goto label_1dd6ec;
    }
    ctx->pc = 0x1DD6E4u;
    {
        const bool branch_taken_0x1dd6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E4u;
        // 0x1dd6e8: 0x26442430  addiu       $a0, $s2, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6e4) {
            ctx->pc = 0x1DD864u;
            goto label_1dd864;
        }
    }
    ctx->pc = 0x1DD6ECu;
label_1dd6ec:
    // 0x1dd6ec: 0x14700065  bne         $v1, $s0, . + 4 + (0x65 << 2)
label_1dd6f0:
    if (ctx->pc == 0x1DD6F0u) {
        ctx->pc = 0x1DD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ECu;
        // 0x1dd6f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6F4u;
        goto label_1dd6f4;
    }
    ctx->pc = 0x1DD6ECu;
    {
        const bool branch_taken_0x1dd6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ECu;
        // 0x1dd6f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ec) {
            ctx->pc = 0x1DD884u;
            goto label_1dd884;
        }
    }
    ctx->pc = 0x1DD6F4u;
label_1dd6f4:
    // 0x1dd6f4: 0x8e462af4  lw          $a2, 0x2AF4($s2)
    ctx->pc = 0x1dd6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dd6f8:
    // 0x1dd6f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1dd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1dd6fc:
    // 0x1dd6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd700:
    // 0x1dd700: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dd700u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd704:
    // 0x1dd704: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dd704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dd708:
    // 0x1dd708: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1dd70c:
    // 0x1dd70c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1dd70cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1dd710:
    // 0x1dd710: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1dd714:
    // 0x1dd714: 0x84650018  lh          $a1, 0x18($v1)
    ctx->pc = 0x1dd714u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1dd718:
    // 0x1dd718: 0x26512430  addiu       $s1, $s2, 0x2430
    ctx->pc = 0x1dd718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
label_1dd71c:
    // 0x1dd71c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1dd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1dd720:
    // 0x1dd720: 0x40f809  jalr        $v0
label_1dd724:
    if (ctx->pc == 0x1DD724u) {
        ctx->pc = 0x1DD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD720u;
        // 0x1dd724: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD728u;
        goto label_1dd728;
    }
    ctx->pc = 0x1DD720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD728u);
        ctx->pc = 0x1DD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD720u;
        // 0x1dd724: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD720u, 0x1DD728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD728u;
label_1dd728:
    // 0x1dd728: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1dd728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd72c:
    // 0x1dd72c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd730:
    // 0x1dd730: 0xc441ee34  lwc1        $f1, -0x11CC($v0)
    ctx->pc = 0x1dd730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd734:
    // 0x1dd734: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1dd734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1dd738:
    // 0x1dd738: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dd738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd73c:
    // 0x1dd73c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1dd73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd740:
    // 0x1dd740: 0x0  nop
    ctx->pc = 0x1dd740u;
    // NOP
label_1dd744:
    // 0x1dd744: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1dd748:
    if (ctx->pc == 0x1DD748u) {
        ctx->pc = 0x1DD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD744u;
        // 0x1dd748: 0xc680ee20  lwc1        $f0, -0x11E0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD74Cu;
        goto label_1dd74c;
    }
    ctx->pc = 0x1DD744u;
    {
        const bool branch_taken_0x1dd744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD744u;
        // 0x1dd748: 0xc680ee20  lwc1        $f0, -0x11E0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd744) {
            ctx->pc = 0x1DD794u;
            goto label_1dd794;
        }
    }
    ctx->pc = 0x1DD74Cu;
label_1dd74c:
    // 0x1dd74c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dd74cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dd750:
    // 0x1dd750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd754:
    // 0x1dd754: 0x0  nop
    ctx->pc = 0x1dd754u;
    // NOP
label_1dd758:
    // 0x1dd758: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd75c:
    if (ctx->pc == 0x1DD75Cu) {
        ctx->pc = 0x1DD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD758u;
        // 0x1dd75c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD760u;
        goto label_1dd760;
    }
    ctx->pc = 0x1DD758u;
    {
        const bool branch_taken_0x1dd758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD758u;
        // 0x1dd75c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd758) {
            ctx->pc = 0x1DD764u;
            goto label_1dd764;
        }
    }
    ctx->pc = 0x1DD760u;
label_1dd760:
    // 0x1dd760: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd764:
    // 0x1dd764: 0x8e472af4  lw          $a3, 0x2AF4($s2)
    ctx->pc = 0x1dd764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dd768:
    // 0x1dd768: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd76c:
    // 0x1dd76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd770:
    // 0x1dd770: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd774:
    // 0x1dd774: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd778:
    // 0x1dd778: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd77c:
    // 0x1dd77c: 0x60f809  jalr        $v1
label_1dd780:
    if (ctx->pc == 0x1DD780u) {
        ctx->pc = 0x1DD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD77Cu;
        // 0x1dd780: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD784u;
        goto label_1dd784;
    }
    ctx->pc = 0x1DD77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD784u);
        ctx->pc = 0x1DD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD77Cu;
        // 0x1dd780: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD77Cu, 0x1DD784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD784u;
label_1dd784:
    // 0x1dd784: 0xc7ccee24  lwc1        $f12, -0x11DC($fp)
    ctx->pc = 0x1dd784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd788:
    // 0x1dd788: 0xc077496  jal         func_1DD258
label_1dd78c:
    if (ctx->pc == 0x1DD78Cu) {
        ctx->pc = 0x1DD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD788u;
        // 0x1dd78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD790u;
        goto label_1dd790;
    }
    ctx->pc = 0x1DD788u;
    SET_GPR_U32(ctx, 31, 0x1DD790u);
    ctx->pc = 0x1DD78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD788u;
    // 0x1dd78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD788u, 0x1DD790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD790u;
label_1dd790:
    // 0x1dd790: 0xaed0ee48  sw          $s0, -0x11B8($s6)
    ctx->pc = 0x1dd790u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962760), GPR_U32(ctx, 16));
label_1dd794:
    // 0x1dd794: 0x8e462af8  lw          $a2, 0x2AF8($s2)
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dd798:
    // 0x1dd798: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dd798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dd79c:
    // 0x1dd79c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1dd7a0:
    // 0x1dd7a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dd7a4:
    // 0x1dd7a4: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1dd7a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1dd7a8:
    // 0x1dd7a8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1dd7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1dd7ac:
    // 0x1dd7ac: 0x60f809  jalr        $v1
label_1dd7b0:
    if (ctx->pc == 0x1DD7B0u) {
        ctx->pc = 0x1DD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7ACu;
        // 0x1dd7b0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD7B4u;
        goto label_1dd7b4;
    }
    ctx->pc = 0x1DD7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD7B4u);
        ctx->pc = 0x1DD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7ACu;
        // 0x1dd7b0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7ACu, 0x1DD7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD7B4u;
label_1dd7b4:
    // 0x1dd7b4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1dd7b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd7b8:
    // 0x1dd7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7bc:
    // 0x1dd7bc: 0xc069682  jal         func_1A5A08
label_1dd7c0:
    if (ctx->pc == 0x1DD7C0u) {
        ctx->pc = 0x1DD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7BCu;
        // 0x1dd7c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD7C4u;
        goto label_1dd7c4;
    }
    ctx->pc = 0x1DD7BCu;
    SET_GPR_U32(ctx, 31, 0x1DD7C4u);
    ctx->pc = 0x1DD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7BCu;
    // 0x1dd7c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A08u, 0x1DD7BCu, 0x1DD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7C4u;
label_1dd7c4:
    // 0x1dd7c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd7c8:
    // 0x1dd7c8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dd7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd7cc:
    // 0x1dd7cc: 0xc441ee78  lwc1        $f1, -0x1188($v0)
    ctx->pc = 0x1dd7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd7d0:
    // 0x1dd7d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1dd7d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1dd7d4:
    // 0x1dd7d4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1dd7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd7d8:
    // 0x1dd7d8: 0x0  nop
    ctx->pc = 0x1dd7d8u;
    // NOP
label_1dd7dc:
    // 0x1dd7dc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1dd7e0:
    if (ctx->pc == 0x1DD7E0u) {
        ctx->pc = 0x1DD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7DCu;
        // 0x1dd7e0: 0xe601ee44  swc1        $f1, -0x11BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD7E4u;
        goto label_1dd7e4;
    }
    ctx->pc = 0x1DD7DCu;
    {
        const bool branch_taken_0x1dd7dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7DCu;
        // 0x1dd7e0: 0xe601ee44  swc1        $f1, -0x11BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7dc) {
            ctx->pc = 0x1DD814u;
            goto label_1dd814;
        }
    }
    ctx->pc = 0x1DD7E4u;
label_1dd7e4:
    // 0x1dd7e4: 0xc680ee20  lwc1        $f0, -0x11E0($s4)
    ctx->pc = 0x1dd7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd7e8:
    // 0x1dd7e8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dd7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1dd7ec:
    // 0x1dd7ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd7f0:
    // 0x1dd7f0: 0x0  nop
    ctx->pc = 0x1dd7f0u;
    // NOP
label_1dd7f4:
    // 0x1dd7f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd7f8:
    if (ctx->pc == 0x1DD7F8u) {
        ctx->pc = 0x1DD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F4u;
        // 0x1dd7f8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD7FCu;
        goto label_1dd7fc;
    }
    ctx->pc = 0x1DD7F4u;
    {
        const bool branch_taken_0x1dd7f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F4u;
        // 0x1dd7f8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7f4) {
            ctx->pc = 0x1DD800u;
            goto label_1dd800;
        }
    }
    ctx->pc = 0x1DD7FCu;
label_1dd7fc:
    // 0x1dd7fc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd800:
    // 0x1dd800: 0xc7ccee24  lwc1        $f12, -0x11DC($fp)
    ctx->pc = 0x1dd800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd804:
    // 0x1dd804: 0xc077496  jal         func_1DD258
label_1dd808:
    if (ctx->pc == 0x1DD808u) {
        ctx->pc = 0x1DD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD804u;
        // 0x1dd808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD80Cu;
        goto label_1dd80c;
    }
    ctx->pc = 0x1DD804u;
    SET_GPR_U32(ctx, 31, 0x1DD80Cu);
    ctx->pc = 0x1DD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD804u;
    // 0x1dd808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD804u, 0x1DD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD80Cu;
label_1dd80c:
    // 0x1dd80c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1dd810:
    if (ctx->pc == 0x1DD810u) {
        ctx->pc = 0x1DD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD80Cu;
        // 0x1dd810: 0x8e472af8  lw          $a3, 0x2AF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD814u;
        goto label_1dd814;
    }
    ctx->pc = 0x1DD80Cu;
    {
        const bool branch_taken_0x1dd80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD80Cu;
        // 0x1dd810: 0x8e472af8  lw          $a3, 0x2AF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd80c) {
            ctx->pc = 0x1DD840u;
            goto label_1dd840;
        }
    }
    ctx->pc = 0x1DD814u;
label_1dd814:
    // 0x1dd814: 0xc680ee20  lwc1        $f0, -0x11E0($s4)
    ctx->pc = 0x1dd814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd818:
    // 0x1dd818: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dd818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dd81c:
    // 0x1dd81c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd81cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd820:
    // 0x1dd820: 0x0  nop
    ctx->pc = 0x1dd820u;
    // NOP
label_1dd824:
    // 0x1dd824: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd828:
    if (ctx->pc == 0x1DD828u) {
        ctx->pc = 0x1DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD824u;
        // 0x1dd828: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD82Cu;
        goto label_1dd82c;
    }
    ctx->pc = 0x1DD824u;
    {
        const bool branch_taken_0x1dd824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD824u;
        // 0x1dd828: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd824) {
            ctx->pc = 0x1DD830u;
            goto label_1dd830;
        }
    }
    ctx->pc = 0x1DD82Cu;
label_1dd82c:
    // 0x1dd82c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd830:
    // 0x1dd830: 0xc7ccee24  lwc1        $f12, -0x11DC($fp)
    ctx->pc = 0x1dd830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd834:
    // 0x1dd834: 0xc077496  jal         func_1DD258
label_1dd838:
    if (ctx->pc == 0x1DD838u) {
        ctx->pc = 0x1DD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD834u;
        // 0x1dd838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD83Cu;
        goto label_1dd83c;
    }
    ctx->pc = 0x1DD834u;
    SET_GPR_U32(ctx, 31, 0x1DD83Cu);
    ctx->pc = 0x1DD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD834u;
    // 0x1dd838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD834u, 0x1DD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD83Cu;
label_1dd83c:
    // 0x1dd83c: 0x8e472af8  lw          $a3, 0x2AF8($s2)
    ctx->pc = 0x1dd83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dd840:
    // 0x1dd840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd844:
    // 0x1dd844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd848:
    // 0x1dd848: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dd848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dd84c:
    // 0x1dd84c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd850:
    // 0x1dd850: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd854:
    // 0x1dd854: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd858:
    // 0x1dd858: 0x60f809  jalr        $v1
label_1dd85c:
    if (ctx->pc == 0x1DD85Cu) {
        ctx->pc = 0x1DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD858u;
        // 0x1dd85c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD860u;
        goto label_1dd860;
    }
    ctx->pc = 0x1DD858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD860u);
        ctx->pc = 0x1DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD858u;
        // 0x1dd85c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD858u, 0x1DD860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD860u;
label_1dd860:
    // 0x1dd860: 0x264420d0  addiu       $a0, $s2, 0x20D0
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
label_1dd864:
    // 0x1dd864: 0xc07747e  jal         func_1DD1F8
label_1dd868:
    if (ctx->pc == 0x1DD868u) {
        ctx->pc = 0x1DD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD864u;
        // 0x1dd868: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD86Cu;
        goto label_1dd86c;
    }
    ctx->pc = 0x1DD864u;
    SET_GPR_U32(ctx, 31, 0x1DD86Cu);
    ctx->pc = 0x1DD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD864u;
    // 0x1dd868: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DD864u, 0x1DD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD86Cu;
label_1dd86c:
    // 0x1dd86c: 0x26442790  addiu       $a0, $s2, 0x2790
    ctx->pc = 0x1dd86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10128));
label_1dd870:
    // 0x1dd870: 0xc07747e  jal         func_1DD1F8
label_1dd874:
    if (ctx->pc == 0x1DD874u) {
        ctx->pc = 0x1DD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD870u;
        // 0x1dd874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD878u;
        goto label_1dd878;
    }
    ctx->pc = 0x1DD870u;
    SET_GPR_U32(ctx, 31, 0x1DD878u);
    ctx->pc = 0x1DD874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD870u;
    // 0x1dd874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DD870u, 0x1DD878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD878u;
label_1dd878:
    // 0x1dd878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd87c:
    // 0x1dd87c: 0x10000091  b           . + 4 + (0x91 << 2)
label_1dd880:
    if (ctx->pc == 0x1DD880u) {
        ctx->pc = 0x1DD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD87Cu;
        // 0x1dd880: 0xaec2ee48  sw          $v0, -0x11B8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294962760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD884u;
        goto label_1dd884;
    }
    ctx->pc = 0x1DD87Cu;
    {
        const bool branch_taken_0x1dd87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD87Cu;
        // 0x1dd880: 0xaec2ee48  sw          $v0, -0x11B8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294962760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd87c) {
            ctx->pc = 0x1DDAC4u;
            goto label_1ddac4;
        }
    }
    ctx->pc = 0x1DD884u;
label_1dd884:
    // 0x1dd884: 0x14620077  bne         $v1, $v0, . + 4 + (0x77 << 2)
label_1dd888:
    if (ctx->pc == 0x1DD888u) {
        ctx->pc = 0x1DD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD884u;
        // 0x1dd888: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD88Cu;
        goto label_1dd88c;
    }
    ctx->pc = 0x1DD884u;
    {
        const bool branch_taken_0x1dd884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD884u;
        // 0x1dd888: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd884) {
            ctx->pc = 0x1DDA64u;
            goto label_1dda64;
        }
    }
    ctx->pc = 0x1DD88Cu;
label_1dd88c:
    // 0x1dd88c: 0x8e462af8  lw          $a2, 0x2AF8($s2)
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dd890:
    // 0x1dd890: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1dd894:
    // 0x1dd894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd898:
    // 0x1dd898: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dd898u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd89c:
    // 0x1dd89c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dd8a0:
    // 0x1dd8a0: 0x84650018  lh          $a1, 0x18($v1)
    ctx->pc = 0x1dd8a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1dd8a4:
    // 0x1dd8a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1dd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1dd8a8:
    // 0x1dd8a8: 0x40f809  jalr        $v0
label_1dd8ac:
    if (ctx->pc == 0x1DD8ACu) {
        ctx->pc = 0x1DD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8A8u;
        // 0x1dd8ac: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8B0u;
        goto label_1dd8b0;
    }
    ctx->pc = 0x1DD8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD8B0u);
        ctx->pc = 0x1DD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8A8u;
        // 0x1dd8ac: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8A8u, 0x1DD8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD8B0u;
label_1dd8b0:
    // 0x1dd8b0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1dd8b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd8b4:
    // 0x1dd8b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd8b8:
    // 0x1dd8b8: 0xc441ee40  lwc1        $f1, -0x11C0($v0)
    ctx->pc = 0x1dd8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd8bc:
    // 0x1dd8bc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1dd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1dd8c0:
    // 0x1dd8c0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dd8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd8c4:
    // 0x1dd8c4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1dd8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd8c8:
    // 0x1dd8c8: 0x0  nop
    ctx->pc = 0x1dd8c8u;
    // NOP
label_1dd8cc:
    // 0x1dd8cc: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_1dd8d0:
    if (ctx->pc == 0x1DD8D0u) {
        ctx->pc = 0x1DD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8CCu;
        // 0x1dd8d0: 0x26502430  addiu       $s0, $s2, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8D4u;
        goto label_1dd8d4;
    }
    ctx->pc = 0x1DD8CCu;
    {
        const bool branch_taken_0x1dd8cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd8cc) {
            ctx->pc = 0x1DD8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD8CCu;
            // 0x1dd8d0: 0x26502430  addiu       $s0, $s2, 0x2430 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD938u;
            goto label_1dd938;
        }
    }
    ctx->pc = 0x1DD8D4u;
label_1dd8d4:
    // 0x1dd8d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd8d8:
    // 0x1dd8d8: 0xc440ee20  lwc1        $f0, -0x11E0($v0)
    ctx->pc = 0x1dd8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd8dc:
    // 0x1dd8dc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dd8dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dd8e0:
    // 0x1dd8e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd8e4:
    // 0x1dd8e4: 0x0  nop
    ctx->pc = 0x1dd8e4u;
    // NOP
label_1dd8e8:
    // 0x1dd8e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd8ec:
    if (ctx->pc == 0x1DD8ECu) {
        ctx->pc = 0x1DD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8E8u;
        // 0x1dd8ec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8F0u;
        goto label_1dd8f0;
    }
    ctx->pc = 0x1DD8E8u;
    {
        const bool branch_taken_0x1dd8e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8E8u;
        // 0x1dd8ec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8e8) {
            ctx->pc = 0x1DD8F4u;
            goto label_1dd8f4;
        }
    }
    ctx->pc = 0x1DD8F0u;
label_1dd8f0:
    // 0x1dd8f0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd8f4:
    // 0x1dd8f4: 0x8e472af8  lw          $a3, 0x2AF8($s2)
    ctx->pc = 0x1dd8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11000)));
label_1dd8f8:
    // 0x1dd8f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8fc:
    // 0x1dd8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd900:
    // 0x1dd900: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dd904:
    // 0x1dd904: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd908:
    // 0x1dd908: 0x26512430  addiu       $s1, $s2, 0x2430
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
label_1dd90c:
    // 0x1dd90c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd910:
    // 0x1dd910: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd914:
    // 0x1dd914: 0x60f809  jalr        $v1
label_1dd918:
    if (ctx->pc == 0x1DD918u) {
        ctx->pc = 0x1DD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD914u;
        // 0x1dd918: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD91Cu;
        goto label_1dd91c;
    }
    ctx->pc = 0x1DD914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD91Cu);
        ctx->pc = 0x1DD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD914u;
        // 0x1dd918: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD914u, 0x1DD91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD91Cu;
label_1dd91c:
    // 0x1dd91c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd920:
    // 0x1dd920: 0x26442790  addiu       $a0, $s2, 0x2790
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10128));
label_1dd924:
    // 0x1dd924: 0xc077496  jal         func_1DD258
label_1dd928:
    if (ctx->pc == 0x1DD928u) {
        ctx->pc = 0x1DD928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD924u;
        // 0x1dd928: 0xc44cee24  lwc1        $f12, -0x11DC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD92Cu;
        goto label_1dd92c;
    }
    ctx->pc = 0x1DD924u;
    SET_GPR_U32(ctx, 31, 0x1DD92Cu);
    ctx->pc = 0x1DD928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD924u;
    // 0x1dd928: 0xc44cee24  lwc1        $f12, -0x11DC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD924u, 0x1DD92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD92Cu;
label_1dd92c:
    // 0x1dd92c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd930:
    // 0x1dd930: 0x10000019  b           . + 4 + (0x19 << 2)
label_1dd934:
    if (ctx->pc == 0x1DD934u) {
        ctx->pc = 0x1DD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD930u;
        // 0x1dd934: 0xac50ee48  sw          $s0, -0x11B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962760), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD938u;
        goto label_1dd938;
    }
    ctx->pc = 0x1DD930u;
    {
        const bool branch_taken_0x1dd930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD930u;
        // 0x1dd934: 0xac50ee48  sw          $s0, -0x11B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962760), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd930) {
            ctx->pc = 0x1DD998u;
            goto label_1dd998;
        }
    }
    ctx->pc = 0x1DD938u;
label_1dd938:
    // 0x1dd938: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd93c:
    // 0x1dd93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd940:
    // 0x1dd940: 0xc07747e  jal         func_1DD1F8
label_1dd944:
    if (ctx->pc == 0x1DD944u) {
        ctx->pc = 0x1DD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD940u;
        // 0x1dd944: 0x26532790  addiu       $s3, $s2, 0x2790 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 10128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD948u;
        goto label_1dd948;
    }
    ctx->pc = 0x1DD940u;
    SET_GPR_U32(ctx, 31, 0x1DD948u);
    ctx->pc = 0x1DD944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD940u;
    // 0x1dd944: 0x26532790  addiu       $s3, $s2, 0x2790 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 10128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DD940u, 0x1DD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD948u;
label_1dd948:
    // 0x1dd948: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1dd948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd94c:
    // 0x1dd94c: 0x8e422790  lw          $v0, 0x2790($s2)
    ctx->pc = 0x1dd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10128)));
label_1dd950:
    // 0x1dd950: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dd950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dd954:
    // 0x1dd954: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1dd954u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1dd958:
    // 0x1dd958: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1dd958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1dd95c:
    // 0x1dd95c: 0x60f809  jalr        $v1
label_1dd960:
    if (ctx->pc == 0x1DD960u) {
        ctx->pc = 0x1DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD95Cu;
        // 0x1dd960: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD964u;
        goto label_1dd964;
    }
    ctx->pc = 0x1DD95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD964u);
        ctx->pc = 0x1DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD95Cu;
        // 0x1dd960: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD95Cu, 0x1DD964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD964u;
label_1dd964:
    // 0x1dd964: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd968:
    // 0x1dd968: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1dd968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd96c:
    // 0x1dd96c: 0xc440ee44  lwc1        $f0, -0x11BC($v0)
    ctx->pc = 0x1dd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd970:
    // 0x1dd970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd974:
    // 0x1dd974: 0x0  nop
    ctx->pc = 0x1dd974u;
    // NOP
label_1dd978:
    // 0x1dd978: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1dd97c:
    if (ctx->pc == 0x1DD97Cu) {
        ctx->pc = 0x1DD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD978u;
        // 0x1dd97c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD980u;
        goto label_1dd980;
    }
    ctx->pc = 0x1DD978u;
    {
        const bool branch_taken_0x1dd978 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD978u;
        // 0x1dd97c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd978) {
            ctx->pc = 0x1DD984u;
            goto label_1dd984;
        }
    }
    ctx->pc = 0x1DD980u;
label_1dd980:
    // 0x1dd980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd984:
    // 0x1dd984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd988:
    if (ctx->pc == 0x1DD988u) {
        ctx->pc = 0x1DD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD984u;
        // 0x1dd988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD98Cu;
        goto label_1dd98c;
    }
    ctx->pc = 0x1DD984u;
    {
        const bool branch_taken_0x1dd984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD984u;
        // 0x1dd988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd984) {
            ctx->pc = 0x1DD998u;
            goto label_1dd998;
        }
    }
    ctx->pc = 0x1DD98Cu;
label_1dd98c:
    // 0x1dd98c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd990:
    // 0x1dd990: 0xc077496  jal         func_1DD258
label_1dd994:
    if (ctx->pc == 0x1DD994u) {
        ctx->pc = 0x1DD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD990u;
        // 0x1dd994: 0xc44cee20  lwc1        $f12, -0x11E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD998u;
        goto label_1dd998;
    }
    ctx->pc = 0x1DD990u;
    SET_GPR_U32(ctx, 31, 0x1DD998u);
    ctx->pc = 0x1DD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD990u;
    // 0x1dd994: 0xc44cee20  lwc1        $f12, -0x11E0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD990u, 0x1DD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD998u;
label_1dd998:
    // 0x1dd998: 0x8e432af4  lw          $v1, 0x2AF4($s2)
    ctx->pc = 0x1dd998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dd99c:
    // 0x1dd99c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dd99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9a0:
    // 0x1dd9a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd9a4:
    // 0x1dd9a4: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1dd9a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1dd9a8:
    // 0x1dd9a8: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1dd9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1dd9ac:
    // 0x1dd9ac: 0xc0f809  jalr        $a2
label_1dd9b0:
    if (ctx->pc == 0x1DD9B0u) {
        ctx->pc = 0x1DD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9ACu;
        // 0x1dd9b0: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD9B4u;
        goto label_1dd9b4;
    }
    ctx->pc = 0x1DD9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1DD9B4u);
        ctx->pc = 0x1DD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9ACu;
        // 0x1dd9b0: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9ACu, 0x1DD9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD9B4u;
label_1dd9b4:
    // 0x1dd9b4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1dd9b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd9b8:
    // 0x1dd9b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dd9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dd9bc:
    // 0x1dd9bc: 0xc441ee34  lwc1        $f1, -0x11CC($v0)
    ctx->pc = 0x1dd9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd9c0:
    // 0x1dd9c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1dd9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1dd9c4:
    // 0x1dd9c4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dd9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd9c8:
    // 0x1dd9c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1dd9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd9cc:
    // 0x1dd9cc: 0x0  nop
    ctx->pc = 0x1dd9ccu;
    // NOP
label_1dd9d0:
    // 0x1dd9d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1dd9d4:
    if (ctx->pc == 0x1DD9D4u) {
        ctx->pc = 0x1DD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D0u;
        // 0x1dd9d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD9D8u;
        goto label_1dd9d8;
    }
    ctx->pc = 0x1DD9D0u;
    {
        const bool branch_taken_0x1dd9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D0u;
        // 0x1dd9d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9d0) {
            ctx->pc = 0x1DDA24u;
            goto label_1dda24;
        }
    }
    ctx->pc = 0x1DD9D8u;
label_1dd9d8:
    // 0x1dd9d8: 0xc440ee20  lwc1        $f0, -0x11E0($v0)
    ctx->pc = 0x1dd9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd9dc:
    // 0x1dd9dc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dd9dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1dd9e0:
    // 0x1dd9e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dd9e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd9e4:
    // 0x1dd9e4: 0x0  nop
    ctx->pc = 0x1dd9e4u;
    // NOP
label_1dd9e8:
    // 0x1dd9e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd9ec:
    if (ctx->pc == 0x1DD9ECu) {
        ctx->pc = 0x1DD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9E8u;
        // 0x1dd9ec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD9F0u;
        goto label_1dd9f0;
    }
    ctx->pc = 0x1DD9E8u;
    {
        const bool branch_taken_0x1dd9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9E8u;
        // 0x1dd9ec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9e8) {
            ctx->pc = 0x1DD9F4u;
            goto label_1dd9f4;
        }
    }
    ctx->pc = 0x1DD9F0u;
label_1dd9f0:
    // 0x1dd9f0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd9f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd9f4:
    // 0x1dd9f4: 0x8e472af4  lw          $a3, 0x2AF4($s2)
    ctx->pc = 0x1dd9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10996)));
label_1dd9f8:
    // 0x1dd9f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9fc:
    // 0x1dd9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dda00:
    // 0x1dda00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1dda00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1dda04:
    // 0x1dda04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dda04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dda08:
    // 0x1dda08: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dda08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dda0c:
    // 0x1dda0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dda10:
    // 0x1dda10: 0x60f809  jalr        $v1
label_1dda14:
    if (ctx->pc == 0x1DDA14u) {
        ctx->pc = 0x1DDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA10u;
        // 0x1dda14: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA18u;
        goto label_1dda18;
    }
    ctx->pc = 0x1DDA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDA18u);
        ctx->pc = 0x1DDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA10u;
        // 0x1dda14: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA10u, 0x1DDA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDA18u;
label_1dda18:
    // 0x1dda18: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1dda1c:
    // 0x1dda1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dda20:
    // 0x1dda20: 0xac82ee48  sw          $v0, -0x11B8($a0)
    ctx->pc = 0x1dda20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294962760), GPR_U32(ctx, 2));
label_1dda24:
    // 0x1dda24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dda24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dda28:
    // 0x1dda28: 0x264420d0  addiu       $a0, $s2, 0x20D0
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
label_1dda2c:
    // 0x1dda2c: 0xc07747e  jal         func_1DD1F8
label_1dda30:
    if (ctx->pc == 0x1DDA30u) {
        ctx->pc = 0x1DDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA2Cu;
        // 0x1dda30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA34u;
        goto label_1dda34;
    }
    ctx->pc = 0x1DDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA34u);
    ctx->pc = 0x1DDA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA2Cu;
    // 0x1dda30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DDA2Cu, 0x1DDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA34u;
label_1dda34:
    // 0x1dda34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dda34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1dda38:
    // 0x1dda38: 0xc07747e  jal         func_1DD1F8
label_1dda3c:
    if (ctx->pc == 0x1DDA3Cu) {
        ctx->pc = 0x1DDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA38u;
        // 0x1dda3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA40u;
        goto label_1dda40;
    }
    ctx->pc = 0x1DDA38u;
    SET_GPR_U32(ctx, 31, 0x1DDA40u);
    ctx->pc = 0x1DDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA38u;
    // 0x1dda3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DDA38u, 0x1DDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA40u;
label_1dda40:
    // 0x1dda40: 0x6810021  bgez        $s4, . + 4 + (0x21 << 2)
label_1dda44:
    if (ctx->pc == 0x1DDA44u) {
        ctx->pc = 0x1DDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA40u;
        // 0x1dda44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA48u;
        goto label_1dda48;
    }
    ctx->pc = 0x1DDA40u;
    {
        const bool branch_taken_0x1dda40 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1DDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA40u;
        // 0x1dda44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda40) {
            ctx->pc = 0x1DDAC8u;
            goto label_1ddac8;
        }
    }
    ctx->pc = 0x1DDA48u;
label_1dda48:
    // 0x1dda48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dda48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dda4c:
    // 0x1dda4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dda4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dda50:
    // 0x1dda50: 0xc44cee24  lwc1        $f12, -0x11DC($v0)
    ctx->pc = 0x1dda50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dda54:
    // 0x1dda54: 0xc077496  jal         func_1DD258
label_1dda58:
    if (ctx->pc == 0x1DDA58u) {
        ctx->pc = 0x1DDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA54u;
        // 0x1dda58: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA5Cu;
        goto label_1dda5c;
    }
    ctx->pc = 0x1DDA54u;
    SET_GPR_U32(ctx, 31, 0x1DDA5Cu);
    ctx->pc = 0x1DDA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA54u;
    // 0x1dda58: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA54u, 0x1DDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA5Cu;
label_1dda5c:
    // 0x1dda5c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1dda60:
    if (ctx->pc == 0x1DDA60u) {
        ctx->pc = 0x1DDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA5Cu;
        // 0x1dda60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA64u;
        goto label_1dda64;
    }
    ctx->pc = 0x1DDA5Cu;
    {
        const bool branch_taken_0x1dda5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA5Cu;
        // 0x1dda60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda5c) {
            ctx->pc = 0x1DDAC8u;
            goto label_1ddac8;
        }
    }
    ctx->pc = 0x1DDA64u;
label_1dda64:
    // 0x1dda64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dda64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dda68:
    // 0x1dda68: 0xc44c535c  lwc1        $f12, 0x535C($v0)
    ctx->pc = 0x1dda68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dda6c:
    // 0x1dda6c: 0xc0774b8  jal         func_1DD2E0
label_1dda70:
    if (ctx->pc == 0x1DDA70u) {
        ctx->pc = 0x1DDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA6Cu;
        // 0x1dda70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA74u;
        goto label_1dda74;
    }
    ctx->pc = 0x1DDA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA74u);
    ctx->pc = 0x1DDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA6Cu;
    // 0x1dda70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD2E0u, 0x1DDA6Cu, 0x1DDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA74u;
label_1dda74:
    // 0x1dda74: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1dda74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1dda78:
    // 0x1dda78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dda78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dda7c:
    // 0x1dda7c: 0xc44c5360  lwc1        $f12, 0x5360($v0)
    ctx->pc = 0x1dda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dda80:
    // 0x1dda80: 0xc0774b8  jal         func_1DD2E0
label_1dda84:
    if (ctx->pc == 0x1DDA84u) {
        ctx->pc = 0x1DDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA80u;
        // 0x1dda84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA88u;
        goto label_1dda88;
    }
    ctx->pc = 0x1DDA80u;
    SET_GPR_U32(ctx, 31, 0x1DDA88u);
    ctx->pc = 0x1DDA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA80u;
    // 0x1dda84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD2E0u, 0x1DDA80u, 0x1DDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA88u;
label_1dda88:
    // 0x1dda88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dda88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1dda8c:
    // 0x1dda8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dda8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dda90:
    // 0x1dda90: 0xc44cee08  lwc1        $f12, -0x11F8($v0)
    ctx->pc = 0x1dda90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dda94:
    // 0x1dda94: 0xc0774f6  jal         func_1DD3D8
label_1dda98:
    if (ctx->pc == 0x1DDA98u) {
        ctx->pc = 0x1DDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA94u;
        // 0x1dda98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA9Cu;
        goto label_1dda9c;
    }
    ctx->pc = 0x1DDA94u;
    SET_GPR_U32(ctx, 31, 0x1DDA9Cu);
    ctx->pc = 0x1DDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA94u;
    // 0x1dda98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D8u, 0x1DDA94u, 0x1DDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA9Cu;
label_1dda9c:
    // 0x1dda9c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1ddaa0:
    // 0x1ddaa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ddaa4:
    // 0x1ddaa4: 0xc44c5364  lwc1        $f12, 0x5364($v0)
    ctx->pc = 0x1ddaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ddaa8:
    // 0x1ddaa8: 0xc0774b8  jal         func_1DD2E0
label_1ddaac:
    if (ctx->pc == 0x1DDAACu) {
        ctx->pc = 0x1DDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAA8u;
        // 0x1ddaac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDAB0u;
        goto label_1ddab0;
    }
    ctx->pc = 0x1DDAA8u;
    SET_GPR_U32(ctx, 31, 0x1DDAB0u);
    ctx->pc = 0x1DDAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAA8u;
    // 0x1ddaac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD2E0u, 0x1DDAA8u, 0x1DDAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAB0u;
label_1ddab0:
    // 0x1ddab0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ddab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ddab4:
    // 0x1ddab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ddab8:
    // 0x1ddab8: 0xc44cee00  lwc1        $f12, -0x1200($v0)
    ctx->pc = 0x1ddab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ddabc:
    // 0x1ddabc: 0xc0774f6  jal         func_1DD3D8
label_1ddac0:
    if (ctx->pc == 0x1DDAC0u) {
        ctx->pc = 0x1DDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDABCu;
        // 0x1ddac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDAC4u;
        goto label_1ddac4;
    }
    ctx->pc = 0x1DDABCu;
    SET_GPR_U32(ctx, 31, 0x1DDAC4u);
    ctx->pc = 0x1DDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDABCu;
    // 0x1ddac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D8u, 0x1DDABCu, 0x1DDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAC4u;
label_1ddac4:
    // 0x1ddac4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ddac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ddac8:
    // 0x1ddac8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ddac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ddacc:
    // 0x1ddacc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ddaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ddad0:
    // 0x1ddad0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ddad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ddad4:
    // 0x1ddad4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ddad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ddad8:
    // 0x1ddad8: 0x40f809  jalr        $v0
label_1ddadc:
    if (ctx->pc == 0x1DDADCu) {
        ctx->pc = 0x1DDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAD8u;
        // 0x1ddadc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDAE0u;
        goto label_1ddae0;
    }
    ctx->pc = 0x1DDAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DDAE0u);
        ctx->pc = 0x1DDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAD8u;
        // 0x1ddadc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDAD8u, 0x1DDAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDAE0u;
label_1ddae0:
    // 0x1ddae0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ddae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ddae4:
    // 0x1ddae4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ddae8:
    if (ctx->pc == 0x1DDAE8u) {
        ctx->pc = 0x1DDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAE4u;
        // 0x1ddae8: 0xac62ee2c  sw          $v0, -0x11D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDAECu;
        goto label_1ddaec;
    }
    ctx->pc = 0x1DDAE4u;
    {
        const bool branch_taken_0x1ddae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAE4u;
        // 0x1ddae8: 0xac62ee2c  sw          $v0, -0x11D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddae4) {
            ctx->pc = 0x1DDB88u;
            goto label_1ddb88;
        }
    }
    ctx->pc = 0x1DDAECu;
label_1ddaec:
    // 0x1ddaec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ddaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ddaf0:
    // 0x1ddaf0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ddaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ddaf4:
    // 0x1ddaf4: 0x8c46b8b8  lw          $a2, -0x4748($v0)
    ctx->pc = 0x1ddaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ddaf8:
    // 0x1ddaf8: 0x8c70ee7c  lw          $s0, -0x1184($v1)
    ctx->pc = 0x1ddaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962812)));
label_1ddafc:
    // 0x1ddafc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1ddafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ddb00:
    // 0x1ddb00: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1ddb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1ddb04:
    // 0x1ddb04: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1ddb04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1ddb08:
    // 0x1ddb08: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1ddb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1ddb0c:
    // 0x1ddb0c: 0x40f809  jalr        $v0
label_1ddb10:
    if (ctx->pc == 0x1DDB10u) {
        ctx->pc = 0x1DDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB0Cu;
        // 0x1ddb10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB14u;
        goto label_1ddb14;
    }
    ctx->pc = 0x1DDB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DDB14u);
        ctx->pc = 0x1DDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB0Cu;
        // 0x1ddb10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB0Cu, 0x1DDB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDB14u;
label_1ddb14:
    // 0x1ddb14: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1ddb14u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ddb18:
    // 0x1ddb18: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_1ddb1c:
    if (ctx->pc == 0x1DDB1Cu) {
        ctx->pc = 0x1DDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB18u;
        // 0x1ddb1c: 0xae20ee2c  sw          $zero, -0x11D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294962732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB20u;
        goto label_1ddb20;
    }
    ctx->pc = 0x1DDB18u;
    {
        const bool branch_taken_0x1ddb18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb18) {
            ctx->pc = 0x1DDB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDB18u;
            // 0x1ddb1c: 0xae20ee2c  sw          $zero, -0x11D4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294962732), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDB20u;
            goto label_1ddb20;
        }
    }
    ctx->pc = 0x1DDB20u;
label_1ddb20:
    // 0x1ddb20: 0x8e433a74  lw          $v1, 0x3A74($s2)
    ctx->pc = 0x1ddb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14964)));
label_1ddb24:
    // 0x1ddb24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1ddb28:
    if (ctx->pc == 0x1DDB28u) {
        ctx->pc = 0x1DDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB24u;
        // 0x1ddb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB2Cu;
        goto label_1ddb2c;
    }
    ctx->pc = 0x1DDB24u;
    {
        const bool branch_taken_0x1ddb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB24u;
        // 0x1ddb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb24) {
            ctx->pc = 0x1DDB38u;
            goto label_1ddb38;
        }
    }
    ctx->pc = 0x1DDB2Cu;
label_1ddb2c:
    // 0x1ddb2c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ddb2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ddb30:
    // 0x1ddb30: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ddb34:
    if (ctx->pc == 0x1DDB34u) {
        ctx->pc = 0x1DDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB30u;
        // 0x1ddb34: 0x26442430  addiu       $a0, $s2, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB38u;
        goto label_1ddb38;
    }
    ctx->pc = 0x1DDB30u;
    {
        const bool branch_taken_0x1ddb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB30u;
        // 0x1ddb34: 0x26442430  addiu       $a0, $s2, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb30) {
            ctx->pc = 0x1DDB48u;
            goto label_1ddb48;
        }
    }
    ctx->pc = 0x1DDB38u;
label_1ddb38:
    // 0x1ddb38: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1ddb3c:
    if (ctx->pc == 0x1DDB3Cu) {
        ctx->pc = 0x1DDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB38u;
        // 0x1ddb3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB40u;
        goto label_1ddb40;
    }
    ctx->pc = 0x1DDB38u;
    {
        const bool branch_taken_0x1ddb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB38u;
        // 0x1ddb3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb38) {
            ctx->pc = 0x1DDB64u;
            goto label_1ddb64;
        }
    }
    ctx->pc = 0x1DDB40u;
label_1ddb40:
    // 0x1ddb40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ddb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ddb44:
    // 0x1ddb44: 0x264420d0  addiu       $a0, $s2, 0x20D0
    ctx->pc = 0x1ddb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
label_1ddb48:
    // 0x1ddb48: 0xc07747e  jal         func_1DD1F8
label_1ddb4c:
    if (ctx->pc == 0x1DDB4Cu) {
        ctx->pc = 0x1DDB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB48u;
        // 0x1ddb4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB50u;
        goto label_1ddb50;
    }
    ctx->pc = 0x1DDB48u;
    SET_GPR_U32(ctx, 31, 0x1DDB50u);
    ctx->pc = 0x1DDB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB48u;
    // 0x1ddb4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DDB48u, 0x1DDB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB50u;
label_1ddb50:
    // 0x1ddb50: 0x26442790  addiu       $a0, $s2, 0x2790
    ctx->pc = 0x1ddb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10128));
label_1ddb54:
    // 0x1ddb54: 0xc07747e  jal         func_1DD1F8
label_1ddb58:
    if (ctx->pc == 0x1DDB58u) {
        ctx->pc = 0x1DDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB54u;
        // 0x1ddb58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB5Cu;
        goto label_1ddb5c;
    }
    ctx->pc = 0x1DDB54u;
    SET_GPR_U32(ctx, 31, 0x1DDB5Cu);
    ctx->pc = 0x1DDB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB54u;
    // 0x1ddb58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DDB54u, 0x1DDB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB5Cu;
label_1ddb5c:
    // 0x1ddb5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ddb60:
    if (ctx->pc == 0x1DDB60u) {
        ctx->pc = 0x1DDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB5Cu;
        // 0x1ddb60: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB64u;
        goto label_1ddb64;
    }
    ctx->pc = 0x1DDB5Cu;
    {
        const bool branch_taken_0x1ddb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB5Cu;
        // 0x1ddb60: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb5c) {
            ctx->pc = 0x1DDB8Cu;
            goto label_1ddb8c;
        }
    }
    ctx->pc = 0x1DDB64u;
label_1ddb64:
    // 0x1ddb64: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1ddb68:
    if (ctx->pc == 0x1DDB68u) {
        ctx->pc = 0x1DDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB64u;
        // 0x1ddb68: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB6Cu;
        goto label_1ddb6c;
    }
    ctx->pc = 0x1DDB64u;
    {
        const bool branch_taken_0x1ddb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB64u;
        // 0x1ddb68: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb64) {
            ctx->pc = 0x1DDB8Cu;
            goto label_1ddb8c;
        }
    }
    ctx->pc = 0x1DDB6Cu;
label_1ddb6c:
    // 0x1ddb6c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ddb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ddb70:
    // 0x1ddb70: 0x264420d0  addiu       $a0, $s2, 0x20D0
    ctx->pc = 0x1ddb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
label_1ddb74:
    // 0x1ddb74: 0xc07747e  jal         func_1DD1F8
label_1ddb78:
    if (ctx->pc == 0x1DDB78u) {
        ctx->pc = 0x1DDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB74u;
        // 0x1ddb78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB7Cu;
        goto label_1ddb7c;
    }
    ctx->pc = 0x1DDB74u;
    SET_GPR_U32(ctx, 31, 0x1DDB7Cu);
    ctx->pc = 0x1DDB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB74u;
    // 0x1ddb78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DDB74u, 0x1DDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB7Cu;
label_1ddb7c:
    // 0x1ddb7c: 0x26442430  addiu       $a0, $s2, 0x2430
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9264));
label_1ddb80:
    // 0x1ddb80: 0xc07747e  jal         func_1DD1F8
label_1ddb84:
    if (ctx->pc == 0x1DDB84u) {
        ctx->pc = 0x1DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB80u;
        // 0x1ddb84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB88u;
        goto label_1ddb88;
    }
    ctx->pc = 0x1DDB80u;
    SET_GPR_U32(ctx, 31, 0x1DDB88u);
    ctx->pc = 0x1DDB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB80u;
    // 0x1ddb84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DDB80u, 0x1DDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB88u;
label_1ddb88:
    // 0x1ddb88: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1ddb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ddb8c:
    // 0x1ddb8c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1ddb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ddb90:
    // 0x1ddb90: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1ddb90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ddb94:
    // 0x1ddb94: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1ddb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ddb98:
    // 0x1ddb98: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ddb98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ddb9c:
    // 0x1ddb9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ddb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ddba0:
    // 0x1ddba0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1ddba0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ddba4:
    // 0x1ddba4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1ddba4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ddba8:
    // 0x1ddba8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1ddba8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ddbac:
    // 0x1ddbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ddbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ddbb0:
    // 0x1ddbb0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1ddbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ddbb4:
    // 0x1ddbb4: 0x3e00008  jr          $ra
label_1ddbb8:
    if (ctx->pc == 0x1DDBB8u) {
        ctx->pc = 0x1DDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBB4u;
        // 0x1ddbb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBBCu;
        goto label_1ddbbc;
    }
    ctx->pc = 0x1DDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBB4u;
        // 0x1ddbb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDBBCu;
label_1ddbbc:
    // 0x1ddbbc: 0x0  nop
    ctx->pc = 0x1ddbbcu;
    // NOP
    ctx->pc = 0x1ddbc0u;
}
