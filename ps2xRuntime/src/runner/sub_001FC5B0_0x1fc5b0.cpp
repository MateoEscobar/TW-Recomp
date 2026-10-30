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

// Function: sub_001FC5B0
// Address: 0x1fc5b0 - 0x1fcff8
void sub_001FC5B0_0x1fc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC5B0_0x1fc5b0");
#endif

    switch (ctx->pc) {
        case 0x1fc5b0u: goto label_1fc5b0;
        case 0x1fc5b4u: goto label_1fc5b4;
        case 0x1fc5b8u: goto label_1fc5b8;
        case 0x1fc5bcu: goto label_1fc5bc;
        case 0x1fc5c0u: goto label_1fc5c0;
        case 0x1fc5c4u: goto label_1fc5c4;
        case 0x1fc5c8u: goto label_1fc5c8;
        case 0x1fc5ccu: goto label_1fc5cc;
        case 0x1fc5d0u: goto label_1fc5d0;
        case 0x1fc5d4u: goto label_1fc5d4;
        case 0x1fc5d8u: goto label_1fc5d8;
        case 0x1fc5dcu: goto label_1fc5dc;
        case 0x1fc5e0u: goto label_1fc5e0;
        case 0x1fc5e4u: goto label_1fc5e4;
        case 0x1fc5e8u: goto label_1fc5e8;
        case 0x1fc5ecu: goto label_1fc5ec;
        case 0x1fc5f0u: goto label_1fc5f0;
        case 0x1fc5f4u: goto label_1fc5f4;
        case 0x1fc5f8u: goto label_1fc5f8;
        case 0x1fc5fcu: goto label_1fc5fc;
        case 0x1fc600u: goto label_1fc600;
        case 0x1fc604u: goto label_1fc604;
        case 0x1fc608u: goto label_1fc608;
        case 0x1fc60cu: goto label_1fc60c;
        case 0x1fc610u: goto label_1fc610;
        case 0x1fc614u: goto label_1fc614;
        case 0x1fc618u: goto label_1fc618;
        case 0x1fc61cu: goto label_1fc61c;
        case 0x1fc620u: goto label_1fc620;
        case 0x1fc624u: goto label_1fc624;
        case 0x1fc628u: goto label_1fc628;
        case 0x1fc62cu: goto label_1fc62c;
        case 0x1fc630u: goto label_1fc630;
        case 0x1fc634u: goto label_1fc634;
        case 0x1fc638u: goto label_1fc638;
        case 0x1fc63cu: goto label_1fc63c;
        case 0x1fc640u: goto label_1fc640;
        case 0x1fc644u: goto label_1fc644;
        case 0x1fc648u: goto label_1fc648;
        case 0x1fc64cu: goto label_1fc64c;
        case 0x1fc650u: goto label_1fc650;
        case 0x1fc654u: goto label_1fc654;
        case 0x1fc658u: goto label_1fc658;
        case 0x1fc65cu: goto label_1fc65c;
        case 0x1fc660u: goto label_1fc660;
        case 0x1fc664u: goto label_1fc664;
        case 0x1fc668u: goto label_1fc668;
        case 0x1fc66cu: goto label_1fc66c;
        case 0x1fc670u: goto label_1fc670;
        case 0x1fc674u: goto label_1fc674;
        case 0x1fc678u: goto label_1fc678;
        case 0x1fc67cu: goto label_1fc67c;
        case 0x1fc680u: goto label_1fc680;
        case 0x1fc684u: goto label_1fc684;
        case 0x1fc688u: goto label_1fc688;
        case 0x1fc68cu: goto label_1fc68c;
        case 0x1fc690u: goto label_1fc690;
        case 0x1fc694u: goto label_1fc694;
        case 0x1fc698u: goto label_1fc698;
        case 0x1fc69cu: goto label_1fc69c;
        case 0x1fc6a0u: goto label_1fc6a0;
        case 0x1fc6a4u: goto label_1fc6a4;
        case 0x1fc6a8u: goto label_1fc6a8;
        case 0x1fc6acu: goto label_1fc6ac;
        case 0x1fc6b0u: goto label_1fc6b0;
        case 0x1fc6b4u: goto label_1fc6b4;
        case 0x1fc6b8u: goto label_1fc6b8;
        case 0x1fc6bcu: goto label_1fc6bc;
        case 0x1fc6c0u: goto label_1fc6c0;
        case 0x1fc6c4u: goto label_1fc6c4;
        case 0x1fc6c8u: goto label_1fc6c8;
        case 0x1fc6ccu: goto label_1fc6cc;
        case 0x1fc6d0u: goto label_1fc6d0;
        case 0x1fc6d4u: goto label_1fc6d4;
        case 0x1fc6d8u: goto label_1fc6d8;
        case 0x1fc6dcu: goto label_1fc6dc;
        case 0x1fc6e0u: goto label_1fc6e0;
        case 0x1fc6e4u: goto label_1fc6e4;
        case 0x1fc6e8u: goto label_1fc6e8;
        case 0x1fc6ecu: goto label_1fc6ec;
        case 0x1fc6f0u: goto label_1fc6f0;
        case 0x1fc6f4u: goto label_1fc6f4;
        case 0x1fc6f8u: goto label_1fc6f8;
        case 0x1fc6fcu: goto label_1fc6fc;
        case 0x1fc700u: goto label_1fc700;
        case 0x1fc704u: goto label_1fc704;
        case 0x1fc708u: goto label_1fc708;
        case 0x1fc70cu: goto label_1fc70c;
        case 0x1fc710u: goto label_1fc710;
        case 0x1fc714u: goto label_1fc714;
        case 0x1fc718u: goto label_1fc718;
        case 0x1fc71cu: goto label_1fc71c;
        case 0x1fc720u: goto label_1fc720;
        case 0x1fc724u: goto label_1fc724;
        case 0x1fc728u: goto label_1fc728;
        case 0x1fc72cu: goto label_1fc72c;
        case 0x1fc730u: goto label_1fc730;
        case 0x1fc734u: goto label_1fc734;
        case 0x1fc738u: goto label_1fc738;
        case 0x1fc73cu: goto label_1fc73c;
        case 0x1fc740u: goto label_1fc740;
        case 0x1fc744u: goto label_1fc744;
        case 0x1fc748u: goto label_1fc748;
        case 0x1fc74cu: goto label_1fc74c;
        case 0x1fc750u: goto label_1fc750;
        case 0x1fc754u: goto label_1fc754;
        case 0x1fc758u: goto label_1fc758;
        case 0x1fc75cu: goto label_1fc75c;
        case 0x1fc760u: goto label_1fc760;
        case 0x1fc764u: goto label_1fc764;
        case 0x1fc768u: goto label_1fc768;
        case 0x1fc76cu: goto label_1fc76c;
        case 0x1fc770u: goto label_1fc770;
        case 0x1fc774u: goto label_1fc774;
        case 0x1fc778u: goto label_1fc778;
        case 0x1fc77cu: goto label_1fc77c;
        case 0x1fc780u: goto label_1fc780;
        case 0x1fc784u: goto label_1fc784;
        case 0x1fc788u: goto label_1fc788;
        case 0x1fc78cu: goto label_1fc78c;
        case 0x1fc790u: goto label_1fc790;
        case 0x1fc794u: goto label_1fc794;
        case 0x1fc798u: goto label_1fc798;
        case 0x1fc79cu: goto label_1fc79c;
        case 0x1fc7a0u: goto label_1fc7a0;
        case 0x1fc7a4u: goto label_1fc7a4;
        case 0x1fc7a8u: goto label_1fc7a8;
        case 0x1fc7acu: goto label_1fc7ac;
        case 0x1fc7b0u: goto label_1fc7b0;
        case 0x1fc7b4u: goto label_1fc7b4;
        case 0x1fc7b8u: goto label_1fc7b8;
        case 0x1fc7bcu: goto label_1fc7bc;
        case 0x1fc7c0u: goto label_1fc7c0;
        case 0x1fc7c4u: goto label_1fc7c4;
        case 0x1fc7c8u: goto label_1fc7c8;
        case 0x1fc7ccu: goto label_1fc7cc;
        case 0x1fc7d0u: goto label_1fc7d0;
        case 0x1fc7d4u: goto label_1fc7d4;
        case 0x1fc7d8u: goto label_1fc7d8;
        case 0x1fc7dcu: goto label_1fc7dc;
        case 0x1fc7e0u: goto label_1fc7e0;
        case 0x1fc7e4u: goto label_1fc7e4;
        case 0x1fc7e8u: goto label_1fc7e8;
        case 0x1fc7ecu: goto label_1fc7ec;
        case 0x1fc7f0u: goto label_1fc7f0;
        case 0x1fc7f4u: goto label_1fc7f4;
        case 0x1fc7f8u: goto label_1fc7f8;
        case 0x1fc7fcu: goto label_1fc7fc;
        case 0x1fc800u: goto label_1fc800;
        case 0x1fc804u: goto label_1fc804;
        case 0x1fc808u: goto label_1fc808;
        case 0x1fc80cu: goto label_1fc80c;
        case 0x1fc810u: goto label_1fc810;
        case 0x1fc814u: goto label_1fc814;
        case 0x1fc818u: goto label_1fc818;
        case 0x1fc81cu: goto label_1fc81c;
        case 0x1fc820u: goto label_1fc820;
        case 0x1fc824u: goto label_1fc824;
        case 0x1fc828u: goto label_1fc828;
        case 0x1fc82cu: goto label_1fc82c;
        case 0x1fc830u: goto label_1fc830;
        case 0x1fc834u: goto label_1fc834;
        case 0x1fc838u: goto label_1fc838;
        case 0x1fc83cu: goto label_1fc83c;
        case 0x1fc840u: goto label_1fc840;
        case 0x1fc844u: goto label_1fc844;
        case 0x1fc848u: goto label_1fc848;
        case 0x1fc84cu: goto label_1fc84c;
        case 0x1fc850u: goto label_1fc850;
        case 0x1fc854u: goto label_1fc854;
        case 0x1fc858u: goto label_1fc858;
        case 0x1fc85cu: goto label_1fc85c;
        case 0x1fc860u: goto label_1fc860;
        case 0x1fc864u: goto label_1fc864;
        case 0x1fc868u: goto label_1fc868;
        case 0x1fc86cu: goto label_1fc86c;
        case 0x1fc870u: goto label_1fc870;
        case 0x1fc874u: goto label_1fc874;
        case 0x1fc878u: goto label_1fc878;
        case 0x1fc87cu: goto label_1fc87c;
        case 0x1fc880u: goto label_1fc880;
        case 0x1fc884u: goto label_1fc884;
        case 0x1fc888u: goto label_1fc888;
        case 0x1fc88cu: goto label_1fc88c;
        case 0x1fc890u: goto label_1fc890;
        case 0x1fc894u: goto label_1fc894;
        case 0x1fc898u: goto label_1fc898;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8a0u: goto label_1fc8a0;
        case 0x1fc8a4u: goto label_1fc8a4;
        case 0x1fc8a8u: goto label_1fc8a8;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8b0u: goto label_1fc8b0;
        case 0x1fc8b4u: goto label_1fc8b4;
        case 0x1fc8b8u: goto label_1fc8b8;
        case 0x1fc8bcu: goto label_1fc8bc;
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc8c4u: goto label_1fc8c4;
        case 0x1fc8c8u: goto label_1fc8c8;
        case 0x1fc8ccu: goto label_1fc8cc;
        case 0x1fc8d0u: goto label_1fc8d0;
        case 0x1fc8d4u: goto label_1fc8d4;
        case 0x1fc8d8u: goto label_1fc8d8;
        case 0x1fc8dcu: goto label_1fc8dc;
        case 0x1fc8e0u: goto label_1fc8e0;
        case 0x1fc8e4u: goto label_1fc8e4;
        case 0x1fc8e8u: goto label_1fc8e8;
        case 0x1fc8ecu: goto label_1fc8ec;
        case 0x1fc8f0u: goto label_1fc8f0;
        case 0x1fc8f4u: goto label_1fc8f4;
        case 0x1fc8f8u: goto label_1fc8f8;
        case 0x1fc8fcu: goto label_1fc8fc;
        case 0x1fc900u: goto label_1fc900;
        case 0x1fc904u: goto label_1fc904;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc90cu: goto label_1fc90c;
        case 0x1fc910u: goto label_1fc910;
        case 0x1fc914u: goto label_1fc914;
        case 0x1fc918u: goto label_1fc918;
        case 0x1fc91cu: goto label_1fc91c;
        case 0x1fc920u: goto label_1fc920;
        case 0x1fc924u: goto label_1fc924;
        case 0x1fc928u: goto label_1fc928;
        case 0x1fc92cu: goto label_1fc92c;
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc934u: goto label_1fc934;
        case 0x1fc938u: goto label_1fc938;
        case 0x1fc93cu: goto label_1fc93c;
        case 0x1fc940u: goto label_1fc940;
        case 0x1fc944u: goto label_1fc944;
        case 0x1fc948u: goto label_1fc948;
        case 0x1fc94cu: goto label_1fc94c;
        case 0x1fc950u: goto label_1fc950;
        case 0x1fc954u: goto label_1fc954;
        case 0x1fc958u: goto label_1fc958;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc960u: goto label_1fc960;
        case 0x1fc964u: goto label_1fc964;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc96cu: goto label_1fc96c;
        case 0x1fc970u: goto label_1fc970;
        case 0x1fc974u: goto label_1fc974;
        case 0x1fc978u: goto label_1fc978;
        case 0x1fc97cu: goto label_1fc97c;
        case 0x1fc980u: goto label_1fc980;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc988u: goto label_1fc988;
        case 0x1fc98cu: goto label_1fc98c;
        case 0x1fc990u: goto label_1fc990;
        case 0x1fc994u: goto label_1fc994;
        case 0x1fc998u: goto label_1fc998;
        case 0x1fc99cu: goto label_1fc99c;
        case 0x1fc9a0u: goto label_1fc9a0;
        case 0x1fc9a4u: goto label_1fc9a4;
        case 0x1fc9a8u: goto label_1fc9a8;
        case 0x1fc9acu: goto label_1fc9ac;
        case 0x1fc9b0u: goto label_1fc9b0;
        case 0x1fc9b4u: goto label_1fc9b4;
        case 0x1fc9b8u: goto label_1fc9b8;
        case 0x1fc9bcu: goto label_1fc9bc;
        case 0x1fc9c0u: goto label_1fc9c0;
        case 0x1fc9c4u: goto label_1fc9c4;
        case 0x1fc9c8u: goto label_1fc9c8;
        case 0x1fc9ccu: goto label_1fc9cc;
        case 0x1fc9d0u: goto label_1fc9d0;
        case 0x1fc9d4u: goto label_1fc9d4;
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9dcu: goto label_1fc9dc;
        case 0x1fc9e0u: goto label_1fc9e0;
        case 0x1fc9e4u: goto label_1fc9e4;
        case 0x1fc9e8u: goto label_1fc9e8;
        case 0x1fc9ecu: goto label_1fc9ec;
        case 0x1fc9f0u: goto label_1fc9f0;
        case 0x1fc9f4u: goto label_1fc9f4;
        case 0x1fc9f8u: goto label_1fc9f8;
        case 0x1fc9fcu: goto label_1fc9fc;
        case 0x1fca00u: goto label_1fca00;
        case 0x1fca04u: goto label_1fca04;
        case 0x1fca08u: goto label_1fca08;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca10u: goto label_1fca10;
        case 0x1fca14u: goto label_1fca14;
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca1cu: goto label_1fca1c;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca28u: goto label_1fca28;
        case 0x1fca2cu: goto label_1fca2c;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca34u: goto label_1fca34;
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca3cu: goto label_1fca3c;
        case 0x1fca40u: goto label_1fca40;
        case 0x1fca44u: goto label_1fca44;
        case 0x1fca48u: goto label_1fca48;
        case 0x1fca4cu: goto label_1fca4c;
        case 0x1fca50u: goto label_1fca50;
        case 0x1fca54u: goto label_1fca54;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fca60u: goto label_1fca60;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca68u: goto label_1fca68;
        case 0x1fca6cu: goto label_1fca6c;
        case 0x1fca70u: goto label_1fca70;
        case 0x1fca74u: goto label_1fca74;
        case 0x1fca78u: goto label_1fca78;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca80u: goto label_1fca80;
        case 0x1fca84u: goto label_1fca84;
        case 0x1fca88u: goto label_1fca88;
        case 0x1fca8cu: goto label_1fca8c;
        case 0x1fca90u: goto label_1fca90;
        case 0x1fca94u: goto label_1fca94;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fca9cu: goto label_1fca9c;
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaa4u: goto label_1fcaa4;
        case 0x1fcaa8u: goto label_1fcaa8;
        case 0x1fcaacu: goto label_1fcaac;
        case 0x1fcab0u: goto label_1fcab0;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcab8u: goto label_1fcab8;
        case 0x1fcabcu: goto label_1fcabc;
        case 0x1fcac0u: goto label_1fcac0;
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaccu: goto label_1fcacc;
        case 0x1fcad0u: goto label_1fcad0;
        case 0x1fcad4u: goto label_1fcad4;
        case 0x1fcad8u: goto label_1fcad8;
        case 0x1fcadcu: goto label_1fcadc;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcae4u: goto label_1fcae4;
        case 0x1fcae8u: goto label_1fcae8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcaf0u: goto label_1fcaf0;
        case 0x1fcaf4u: goto label_1fcaf4;
        case 0x1fcaf8u: goto label_1fcaf8;
        case 0x1fcafcu: goto label_1fcafc;
        case 0x1fcb00u: goto label_1fcb00;
        case 0x1fcb04u: goto label_1fcb04;
        case 0x1fcb08u: goto label_1fcb08;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb10u: goto label_1fcb10;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb1cu: goto label_1fcb1c;
        case 0x1fcb20u: goto label_1fcb20;
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb28u: goto label_1fcb28;
        case 0x1fcb2cu: goto label_1fcb2c;
        case 0x1fcb30u: goto label_1fcb30;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb38u: goto label_1fcb38;
        case 0x1fcb3cu: goto label_1fcb3c;
        case 0x1fcb40u: goto label_1fcb40;
        case 0x1fcb44u: goto label_1fcb44;
        case 0x1fcb48u: goto label_1fcb48;
        case 0x1fcb4cu: goto label_1fcb4c;
        case 0x1fcb50u: goto label_1fcb50;
        case 0x1fcb54u: goto label_1fcb54;
        case 0x1fcb58u: goto label_1fcb58;
        case 0x1fcb5cu: goto label_1fcb5c;
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcb64u: goto label_1fcb64;
        case 0x1fcb68u: goto label_1fcb68;
        case 0x1fcb6cu: goto label_1fcb6c;
        case 0x1fcb70u: goto label_1fcb70;
        case 0x1fcb74u: goto label_1fcb74;
        case 0x1fcb78u: goto label_1fcb78;
        case 0x1fcb7cu: goto label_1fcb7c;
        case 0x1fcb80u: goto label_1fcb80;
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcb88u: goto label_1fcb88;
        case 0x1fcb8cu: goto label_1fcb8c;
        case 0x1fcb90u: goto label_1fcb90;
        case 0x1fcb94u: goto label_1fcb94;
        case 0x1fcb98u: goto label_1fcb98;
        case 0x1fcb9cu: goto label_1fcb9c;
        case 0x1fcba0u: goto label_1fcba0;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcba8u: goto label_1fcba8;
        case 0x1fcbacu: goto label_1fcbac;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbb4u: goto label_1fcbb4;
        case 0x1fcbb8u: goto label_1fcbb8;
        case 0x1fcbbcu: goto label_1fcbbc;
        case 0x1fcbc0u: goto label_1fcbc0;
        case 0x1fcbc4u: goto label_1fcbc4;
        case 0x1fcbc8u: goto label_1fcbc8;
        case 0x1fcbccu: goto label_1fcbcc;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbd4u: goto label_1fcbd4;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbdcu: goto label_1fcbdc;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbe4u: goto label_1fcbe4;
        case 0x1fcbe8u: goto label_1fcbe8;
        case 0x1fcbecu: goto label_1fcbec;
        case 0x1fcbf0u: goto label_1fcbf0;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcbf8u: goto label_1fcbf8;
        case 0x1fcbfcu: goto label_1fcbfc;
        case 0x1fcc00u: goto label_1fcc00;
        case 0x1fcc04u: goto label_1fcc04;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc0cu: goto label_1fcc0c;
        case 0x1fcc10u: goto label_1fcc10;
        case 0x1fcc14u: goto label_1fcc14;
        case 0x1fcc18u: goto label_1fcc18;
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fcc20u: goto label_1fcc20;
        case 0x1fcc24u: goto label_1fcc24;
        case 0x1fcc28u: goto label_1fcc28;
        case 0x1fcc2cu: goto label_1fcc2c;
        case 0x1fcc30u: goto label_1fcc30;
        case 0x1fcc34u: goto label_1fcc34;
        case 0x1fcc38u: goto label_1fcc38;
        case 0x1fcc3cu: goto label_1fcc3c;
        case 0x1fcc40u: goto label_1fcc40;
        case 0x1fcc44u: goto label_1fcc44;
        case 0x1fcc48u: goto label_1fcc48;
        case 0x1fcc4cu: goto label_1fcc4c;
        case 0x1fcc50u: goto label_1fcc50;
        case 0x1fcc54u: goto label_1fcc54;
        case 0x1fcc58u: goto label_1fcc58;
        case 0x1fcc5cu: goto label_1fcc5c;
        case 0x1fcc60u: goto label_1fcc60;
        case 0x1fcc64u: goto label_1fcc64;
        case 0x1fcc68u: goto label_1fcc68;
        case 0x1fcc6cu: goto label_1fcc6c;
        case 0x1fcc70u: goto label_1fcc70;
        case 0x1fcc74u: goto label_1fcc74;
        case 0x1fcc78u: goto label_1fcc78;
        case 0x1fcc7cu: goto label_1fcc7c;
        case 0x1fcc80u: goto label_1fcc80;
        case 0x1fcc84u: goto label_1fcc84;
        case 0x1fcc88u: goto label_1fcc88;
        case 0x1fcc8cu: goto label_1fcc8c;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fcc94u: goto label_1fcc94;
        case 0x1fcc98u: goto label_1fcc98;
        case 0x1fcc9cu: goto label_1fcc9c;
        case 0x1fcca0u: goto label_1fcca0;
        case 0x1fcca4u: goto label_1fcca4;
        case 0x1fcca8u: goto label_1fcca8;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb0u: goto label_1fccb0;
        case 0x1fccb4u: goto label_1fccb4;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccbcu: goto label_1fccbc;
        case 0x1fccc0u: goto label_1fccc0;
        case 0x1fccc4u: goto label_1fccc4;
        case 0x1fccc8u: goto label_1fccc8;
        case 0x1fccccu: goto label_1fcccc;
        case 0x1fccd0u: goto label_1fccd0;
        case 0x1fccd4u: goto label_1fccd4;
        case 0x1fccd8u: goto label_1fccd8;
        case 0x1fccdcu: goto label_1fccdc;
        case 0x1fcce0u: goto label_1fcce0;
        case 0x1fcce4u: goto label_1fcce4;
        case 0x1fcce8u: goto label_1fcce8;
        case 0x1fccecu: goto label_1fccec;
        case 0x1fccf0u: goto label_1fccf0;
        case 0x1fccf4u: goto label_1fccf4;
        case 0x1fccf8u: goto label_1fccf8;
        case 0x1fccfcu: goto label_1fccfc;
        case 0x1fcd00u: goto label_1fcd00;
        case 0x1fcd04u: goto label_1fcd04;
        case 0x1fcd08u: goto label_1fcd08;
        case 0x1fcd0cu: goto label_1fcd0c;
        case 0x1fcd10u: goto label_1fcd10;
        case 0x1fcd14u: goto label_1fcd14;
        case 0x1fcd18u: goto label_1fcd18;
        case 0x1fcd1cu: goto label_1fcd1c;
        case 0x1fcd20u: goto label_1fcd20;
        case 0x1fcd24u: goto label_1fcd24;
        case 0x1fcd28u: goto label_1fcd28;
        case 0x1fcd2cu: goto label_1fcd2c;
        case 0x1fcd30u: goto label_1fcd30;
        case 0x1fcd34u: goto label_1fcd34;
        case 0x1fcd38u: goto label_1fcd38;
        case 0x1fcd3cu: goto label_1fcd3c;
        case 0x1fcd40u: goto label_1fcd40;
        case 0x1fcd44u: goto label_1fcd44;
        case 0x1fcd48u: goto label_1fcd48;
        case 0x1fcd4cu: goto label_1fcd4c;
        case 0x1fcd50u: goto label_1fcd50;
        case 0x1fcd54u: goto label_1fcd54;
        case 0x1fcd58u: goto label_1fcd58;
        case 0x1fcd5cu: goto label_1fcd5c;
        case 0x1fcd60u: goto label_1fcd60;
        case 0x1fcd64u: goto label_1fcd64;
        case 0x1fcd68u: goto label_1fcd68;
        case 0x1fcd6cu: goto label_1fcd6c;
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd74u: goto label_1fcd74;
        case 0x1fcd78u: goto label_1fcd78;
        case 0x1fcd7cu: goto label_1fcd7c;
        case 0x1fcd80u: goto label_1fcd80;
        case 0x1fcd84u: goto label_1fcd84;
        case 0x1fcd88u: goto label_1fcd88;
        case 0x1fcd8cu: goto label_1fcd8c;
        case 0x1fcd90u: goto label_1fcd90;
        case 0x1fcd94u: goto label_1fcd94;
        case 0x1fcd98u: goto label_1fcd98;
        case 0x1fcd9cu: goto label_1fcd9c;
        case 0x1fcda0u: goto label_1fcda0;
        case 0x1fcda4u: goto label_1fcda4;
        case 0x1fcda8u: goto label_1fcda8;
        case 0x1fcdacu: goto label_1fcdac;
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdb4u: goto label_1fcdb4;
        case 0x1fcdb8u: goto label_1fcdb8;
        case 0x1fcdbcu: goto label_1fcdbc;
        case 0x1fcdc0u: goto label_1fcdc0;
        case 0x1fcdc4u: goto label_1fcdc4;
        case 0x1fcdc8u: goto label_1fcdc8;
        case 0x1fcdccu: goto label_1fcdcc;
        case 0x1fcdd0u: goto label_1fcdd0;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdd8u: goto label_1fcdd8;
        case 0x1fcddcu: goto label_1fcddc;
        case 0x1fcde0u: goto label_1fcde0;
        case 0x1fcde4u: goto label_1fcde4;
        case 0x1fcde8u: goto label_1fcde8;
        case 0x1fcdecu: goto label_1fcdec;
        case 0x1fcdf0u: goto label_1fcdf0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fcdf8u: goto label_1fcdf8;
        case 0x1fcdfcu: goto label_1fcdfc;
        case 0x1fce00u: goto label_1fce00;
        case 0x1fce04u: goto label_1fce04;
        case 0x1fce08u: goto label_1fce08;
        case 0x1fce0cu: goto label_1fce0c;
        case 0x1fce10u: goto label_1fce10;
        case 0x1fce14u: goto label_1fce14;
        case 0x1fce18u: goto label_1fce18;
        case 0x1fce1cu: goto label_1fce1c;
        case 0x1fce20u: goto label_1fce20;
        case 0x1fce24u: goto label_1fce24;
        case 0x1fce28u: goto label_1fce28;
        case 0x1fce2cu: goto label_1fce2c;
        case 0x1fce30u: goto label_1fce30;
        case 0x1fce34u: goto label_1fce34;
        case 0x1fce38u: goto label_1fce38;
        case 0x1fce3cu: goto label_1fce3c;
        case 0x1fce40u: goto label_1fce40;
        case 0x1fce44u: goto label_1fce44;
        case 0x1fce48u: goto label_1fce48;
        case 0x1fce4cu: goto label_1fce4c;
        case 0x1fce50u: goto label_1fce50;
        case 0x1fce54u: goto label_1fce54;
        case 0x1fce58u: goto label_1fce58;
        case 0x1fce5cu: goto label_1fce5c;
        case 0x1fce60u: goto label_1fce60;
        case 0x1fce64u: goto label_1fce64;
        case 0x1fce68u: goto label_1fce68;
        case 0x1fce6cu: goto label_1fce6c;
        case 0x1fce70u: goto label_1fce70;
        case 0x1fce74u: goto label_1fce74;
        case 0x1fce78u: goto label_1fce78;
        case 0x1fce7cu: goto label_1fce7c;
        case 0x1fce80u: goto label_1fce80;
        case 0x1fce84u: goto label_1fce84;
        case 0x1fce88u: goto label_1fce88;
        case 0x1fce8cu: goto label_1fce8c;
        case 0x1fce90u: goto label_1fce90;
        case 0x1fce94u: goto label_1fce94;
        case 0x1fce98u: goto label_1fce98;
        case 0x1fce9cu: goto label_1fce9c;
        case 0x1fcea0u: goto label_1fcea0;
        case 0x1fcea4u: goto label_1fcea4;
        case 0x1fcea8u: goto label_1fcea8;
        case 0x1fceacu: goto label_1fceac;
        case 0x1fceb0u: goto label_1fceb0;
        case 0x1fceb4u: goto label_1fceb4;
        case 0x1fceb8u: goto label_1fceb8;
        case 0x1fcebcu: goto label_1fcebc;
        case 0x1fcec0u: goto label_1fcec0;
        case 0x1fcec4u: goto label_1fcec4;
        case 0x1fcec8u: goto label_1fcec8;
        case 0x1fceccu: goto label_1fcecc;
        case 0x1fced0u: goto label_1fced0;
        case 0x1fced4u: goto label_1fced4;
        case 0x1fced8u: goto label_1fced8;
        case 0x1fcedcu: goto label_1fcedc;
        case 0x1fcee0u: goto label_1fcee0;
        case 0x1fcee4u: goto label_1fcee4;
        case 0x1fcee8u: goto label_1fcee8;
        case 0x1fceecu: goto label_1fceec;
        case 0x1fcef0u: goto label_1fcef0;
        case 0x1fcef4u: goto label_1fcef4;
        case 0x1fcef8u: goto label_1fcef8;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf00u: goto label_1fcf00;
        case 0x1fcf04u: goto label_1fcf04;
        case 0x1fcf08u: goto label_1fcf08;
        case 0x1fcf0cu: goto label_1fcf0c;
        case 0x1fcf10u: goto label_1fcf10;
        case 0x1fcf14u: goto label_1fcf14;
        case 0x1fcf18u: goto label_1fcf18;
        case 0x1fcf1cu: goto label_1fcf1c;
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf24u: goto label_1fcf24;
        case 0x1fcf28u: goto label_1fcf28;
        case 0x1fcf2cu: goto label_1fcf2c;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf34u: goto label_1fcf34;
        case 0x1fcf38u: goto label_1fcf38;
        case 0x1fcf3cu: goto label_1fcf3c;
        case 0x1fcf40u: goto label_1fcf40;
        case 0x1fcf44u: goto label_1fcf44;
        case 0x1fcf48u: goto label_1fcf48;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf50u: goto label_1fcf50;
        case 0x1fcf54u: goto label_1fcf54;
        case 0x1fcf58u: goto label_1fcf58;
        case 0x1fcf5cu: goto label_1fcf5c;
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf68u: goto label_1fcf68;
        case 0x1fcf6cu: goto label_1fcf6c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcf74u: goto label_1fcf74;
        case 0x1fcf78u: goto label_1fcf78;
        case 0x1fcf7cu: goto label_1fcf7c;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf84u: goto label_1fcf84;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcf90u: goto label_1fcf90;
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcf98u: goto label_1fcf98;
        case 0x1fcf9cu: goto label_1fcf9c;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fcfa4u: goto label_1fcfa4;
        case 0x1fcfa8u: goto label_1fcfa8;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfb4u: goto label_1fcfb4;
        case 0x1fcfb8u: goto label_1fcfb8;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fcfc4u: goto label_1fcfc4;
        case 0x1fcfc8u: goto label_1fcfc8;
        case 0x1fcfccu: goto label_1fcfcc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fcfd4u: goto label_1fcfd4;
        case 0x1fcfd8u: goto label_1fcfd8;
        case 0x1fcfdcu: goto label_1fcfdc;
        case 0x1fcfe0u: goto label_1fcfe0;
        case 0x1fcfe4u: goto label_1fcfe4;
        case 0x1fcfe8u: goto label_1fcfe8;
        case 0x1fcfecu: goto label_1fcfec;
        case 0x1fcff0u: goto label_1fcff0;
        case 0x1fcff4u: goto label_1fcff4;
        default: break;
    }

    ctx->pc = 0x1fc5b0u;

label_1fc5b0:
    // 0x1fc5b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1fc5b4:
    // 0x1fc5b4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1fc5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1fc5b8:
    // 0x1fc5b8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1fc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1fc5bc:
    // 0x1fc5bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fc5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc5c0:
    // 0x1fc5c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1fc5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1fc5c4:
    // 0x1fc5c4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1fc5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1fc5c8:
    // 0x1fc5c8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1fc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1fc5cc:
    // 0x1fc5cc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1fc5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1fc5d0:
    // 0x1fc5d0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1fc5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1fc5d4:
    // 0x1fc5d4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fc5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1fc5d8:
    // 0x1fc5d8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1fc5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1fc5dc:
    // 0x1fc5dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fc5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fc5e0:
    // 0x1fc5e0: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1fc5e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1fc5e4:
    // 0x1fc5e4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1fc5e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fc5e8:
    // 0x1fc5e8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1fc5e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fc5ec:
    // 0x1fc5ec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1fc5f0:
    // 0x1fc5f0: 0x14400273  bnez        $v0, . + 4 + (0x273 << 2)
label_1fc5f4:
    if (ctx->pc == 0x1FC5F4u) {
        ctx->pc = 0x1FC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5F0u;
        // 0x1fc5f4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5F8u;
        goto label_1fc5f8;
    }
    ctx->pc = 0x1FC5F0u;
    {
        const bool branch_taken_0x1fc5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5F0u;
        // 0x1fc5f4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5f0) {
            ctx->pc = 0x1FCFC0u;
            goto label_1fcfc0;
        }
    }
    ctx->pc = 0x1FC5F8u;
label_1fc5f8:
    // 0x1fc5f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fc5fc:
    // 0x1fc5fc: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1fc5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1fc600:
    // 0x1fc600: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fc604:
    // 0x1fc604: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1fc604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1fc608:
    // 0x1fc608: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1fc60c:
    if (ctx->pc == 0x1FC60Cu) {
        ctx->pc = 0x1FC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC608u;
        // 0x1fc60c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC610u;
        goto label_1fc610;
    }
    ctx->pc = 0x1FC608u;
    {
        const bool branch_taken_0x1fc608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC608u;
        // 0x1fc60c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc608) {
            ctx->pc = 0x1FC660u;
            goto label_1fc660;
        }
    }
    ctx->pc = 0x1FC610u;
label_1fc610:
    // 0x1fc610: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1fc610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_1fc614:
    // 0x1fc614: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1fc614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1fc618:
    // 0x1fc618: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fc618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fc61c:
    // 0x1fc61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fc620:
    if (ctx->pc == 0x1FC620u) {
        ctx->pc = 0x1FC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC61Cu;
        // 0x1fc620: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC624u;
        goto label_1fc624;
    }
    ctx->pc = 0x1FC61Cu;
    {
        const bool branch_taken_0x1fc61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC61Cu;
        // 0x1fc620: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc61c) {
            ctx->pc = 0x1FC630u;
            goto label_1fc630;
        }
    }
    ctx->pc = 0x1FC624u;
label_1fc624:
    // 0x1fc624: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_1fc628:
    // 0x1fc628: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1fc628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1fc62c:
    // 0x1fc62c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fc62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fc630:
    // 0x1fc630: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1fc630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1fc634:
    // 0x1fc634: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1fc634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1fc638:
    // 0x1fc638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fc638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc63c:
    // 0x1fc63c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fc640:
    // 0x1fc640: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_1fc644:
    // 0x1fc644: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1fc644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1fc648:
    // 0x1fc648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fc648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fc64c:
    // 0x1fc64c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fc650:
    // 0x1fc650: 0xe440f4cc  swc1        $f0, -0xB34($v0)
    ctx->pc = 0x1fc650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964428), bits); }
label_1fc654:
    // 0x1fc654: 0xe461f4d0  swc1        $f1, -0xB30($v1)
    ctx->pc = 0x1fc654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964432), bits); }
label_1fc658:
    // 0x1fc658: 0x10000025  b           . + 4 + (0x25 << 2)
label_1fc65c:
    if (ctx->pc == 0x1FC65Cu) {
        ctx->pc = 0x1FC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC658u;
        // 0x1fc65c: 0xe482f4c8  swc1        $f2, -0xB38($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964424), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC660u;
        goto label_1fc660;
    }
    ctx->pc = 0x1FC658u;
    {
        const bool branch_taken_0x1fc658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC658u;
        // 0x1fc65c: 0xe482f4c8  swc1        $f2, -0xB38($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc658) {
            ctx->pc = 0x1FC6F0u;
            goto label_1fc6f0;
        }
    }
    ctx->pc = 0x1FC660u;
label_1fc660:
    // 0x1fc660: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1fc660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1fc664:
    // 0x1fc664: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_1fc668:
    if (ctx->pc == 0x1FC668u) {
        ctx->pc = 0x1FC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC664u;
        // 0x1fc668: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC66Cu;
        goto label_1fc66c;
    }
    ctx->pc = 0x1FC664u;
    {
        const bool branch_taken_0x1fc664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc664) {
            ctx->pc = 0x1FC668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC664u;
            // 0x1fc668: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC6F4u;
            goto label_1fc6f4;
        }
    }
    ctx->pc = 0x1FC66Cu;
label_1fc66c:
    // 0x1fc66c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1fc66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1fc670:
    // 0x1fc670: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1fc674:
    if (ctx->pc == 0x1FC674u) {
        ctx->pc = 0x1FC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC670u;
        // 0x1fc674: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC678u;
        goto label_1fc678;
    }
    ctx->pc = 0x1FC670u;
    {
        const bool branch_taken_0x1fc670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC670u;
        // 0x1fc674: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc670) {
            ctx->pc = 0x1FC6B4u;
            goto label_1fc6b4;
        }
    }
    ctx->pc = 0x1FC678u;
label_1fc678:
    // 0x1fc678: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_1fc67c:
    // 0x1fc67c: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1fc67cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1fc680:
    // 0x1fc680: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fc680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fc684:
    // 0x1fc684: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_1fc688:
    // 0x1fc688: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1fc688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1fc68c:
    // 0x1fc68c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fc68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc690:
    // 0x1fc690: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fc694:
    // 0x1fc694: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1fc694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1fc698:
    // 0x1fc698: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fc698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1fc69c:
    // 0x1fc69c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fc69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fc6a0:
    // 0x1fc6a0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1fc6a4:
    // 0x1fc6a4: 0xe482f4c8  swc1        $f2, -0xB38($a0)
    ctx->pc = 0x1fc6a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964424), bits); }
label_1fc6a8:
    // 0x1fc6a8: 0xe440f4cc  swc1        $f0, -0xB34($v0)
    ctx->pc = 0x1fc6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964428), bits); }
label_1fc6ac:
    // 0x1fc6ac: 0x10000010  b           . + 4 + (0x10 << 2)
label_1fc6b0:
    if (ctx->pc == 0x1FC6B0u) {
        ctx->pc = 0x1FC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6ACu;
        // 0x1fc6b0: 0xe461f4d0  swc1        $f1, -0xB30($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC6B4u;
        goto label_1fc6b4;
    }
    ctx->pc = 0x1FC6ACu;
    {
        const bool branch_taken_0x1fc6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6ACu;
        // 0x1fc6b0: 0xe461f4d0  swc1        $f1, -0xB30($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6ac) {
            ctx->pc = 0x1FC6F0u;
            goto label_1fc6f0;
        }
    }
    ctx->pc = 0x1FC6B4u;
label_1fc6b4:
    // 0x1fc6b4: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_1fc6b8:
    // 0x1fc6b8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1fc6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1fc6bc:
    // 0x1fc6bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fc6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fc6c0:
    // 0x1fc6c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fc6c4:
    // 0x1fc6c4: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_1fc6c8:
    // 0x1fc6c8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1fc6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1fc6cc:
    // 0x1fc6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fc6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fc6d0:
    // 0x1fc6d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fc6d4:
    // 0x1fc6d4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1fc6d8:
    // 0x1fc6d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fc6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1fc6dc:
    // 0x1fc6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fc6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc6e0:
    // 0x1fc6e0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1fc6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1fc6e4:
    // 0x1fc6e4: 0xe461f4cc  swc1        $f1, -0xB34($v1)
    ctx->pc = 0x1fc6e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964428), bits); }
label_1fc6e8:
    // 0x1fc6e8: 0xe440f4d0  swc1        $f0, -0xB30($v0)
    ctx->pc = 0x1fc6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964432), bits); }
label_1fc6ec:
    // 0x1fc6ec: 0xe4e2f4c8  swc1        $f2, -0xB38($a3)
    ctx->pc = 0x1fc6ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964424), bits); }
label_1fc6f0:
    // 0x1fc6f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fc6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fc6f4:
    // 0x1fc6f4: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x1fc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_1fc6f8:
    // 0x1fc6f8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1fc6fc:
    // 0x1fc6fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1fc700:
    // 0x1fc700: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x1fc700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
label_1fc704:
    // 0x1fc704: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x1fc704u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_1fc708:
    // 0x1fc708: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x1fc708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_1fc70c:
    // 0x1fc70c: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x1fc70cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_1fc710:
    // 0x1fc710: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x1fc710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_1fc714:
    // 0x1fc714: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1fc714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc718:
    // 0x1fc718: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x1fc718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_1fc71c:
    // 0x1fc71c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fc71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fc720:
    // 0x1fc720: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fc720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fc724:
    // 0x1fc724: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fc724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc728:
    // 0x1fc728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fc728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fc72c:
    // 0x1fc72c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fc72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fc730:
    // 0x1fc730: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fc734:
    // 0x1fc734: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fc738:
    // 0x1fc738: 0x40f809  jalr        $v0
label_1fc73c:
    if (ctx->pc == 0x1FC73Cu) {
        ctx->pc = 0x1FC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC738u;
        // 0x1fc73c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC740u;
        goto label_1fc740;
    }
    ctx->pc = 0x1FC738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC740u);
        ctx->pc = 0x1FC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC738u;
        // 0x1fc73c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC738u, 0x1FC740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC740u;
label_1fc740:
    // 0x1fc740: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fc740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1fc744:
    // 0x1fc744: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1fc744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1fc748:
    // 0x1fc748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fc748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1fc74c:
    // 0x1fc74c: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x1fc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_1fc750:
    // 0x1fc750: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x1fc750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
label_1fc754:
    // 0x1fc754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc758:
    // 0x1fc758: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fc75c:
    // 0x1fc75c: 0xc06ba36  jal         func_1AE8D8
label_1fc760:
    if (ctx->pc == 0x1FC760u) {
        ctx->pc = 0x1FC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC75Cu;
        // 0x1fc760: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC764u;
        goto label_1fc764;
    }
    ctx->pc = 0x1FC75Cu;
    SET_GPR_U32(ctx, 31, 0x1FC764u);
    ctx->pc = 0x1FC760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC75Cu;
    // 0x1fc760: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1FC75Cu, 0x1FC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC764u;
label_1fc764:
    // 0x1fc764: 0xc07f15a  jal         func_1FC568
label_1fc768:
    if (ctx->pc == 0x1FC768u) {
        ctx->pc = 0x1FC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC764u;
        // 0x1fc768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC76Cu;
        goto label_1fc76c;
    }
    ctx->pc = 0x1FC764u;
    SET_GPR_U32(ctx, 31, 0x1FC76Cu);
    ctx->pc = 0x1FC768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC764u;
    // 0x1fc768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC568u, 0x1FC764u, 0x1FC76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC76Cu;
label_1fc76c:
    // 0x1fc76c: 0xc07f728  jal         func_1FDCA0
label_1fc770:
    if (ctx->pc == 0x1FC770u) {
        ctx->pc = 0x1FC774u;
        goto label_1fc774;
    }
    ctx->pc = 0x1FC76Cu;
    SET_GPR_U32(ctx, 31, 0x1FC774u);
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1FC76Cu, 0x1FC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC774u;
label_1fc774:
    // 0x1fc774: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1fc774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fc778:
    // 0x1fc778: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1fc778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fc77c:
    // 0x1fc77c: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1fc780:
    // 0x1fc780: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fc780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc784:
    // 0x1fc784: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fc784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fc788:
    // 0x1fc788: 0x26257fe0  addiu       $a1, $s1, 0x7FE0
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32736));
label_1fc78c:
    // 0x1fc78c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1fc790:
    // 0x1fc790: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fc790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fc794:
    // 0x1fc794: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1fc794u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc798:
    // 0x1fc798: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fc798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc79c:
    // 0x1fc79c: 0x26487ff0  addiu       $t0, $s2, 0x7FF0
    ctx->pc = 0x1fc79cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32752));
label_1fc7a0:
    // 0x1fc7a0: 0x24090082  addiu       $t1, $zero, 0x82
    ctx->pc = 0x1fc7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_1fc7a4:
    // 0x1fc7a4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fc7a8:
    // 0x1fc7a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fc7a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7ac:
    // 0x1fc7ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fc7acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7b0:
    // 0x1fc7b0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fc7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fc7b4:
    // 0x1fc7b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fc7b8:
    // 0x1fc7b8: 0x40f809  jalr        $v0
label_1fc7bc:
    if (ctx->pc == 0x1FC7BCu) {
        ctx->pc = 0x1FC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B8u;
        // 0x1fc7bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7C0u;
        goto label_1fc7c0;
    }
    ctx->pc = 0x1FC7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC7C0u);
        ctx->pc = 0x1FC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B8u;
        // 0x1fc7bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC7B8u, 0x1FC7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC7C0u;
label_1fc7c0:
    // 0x1fc7c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fc7c4:
    if (ctx->pc == 0x1FC7C4u) {
        ctx->pc = 0x1FC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7C0u;
        // 0x1fc7c4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7C8u;
        goto label_1fc7c8;
    }
    ctx->pc = 0x1FC7C0u;
    {
        const bool branch_taken_0x1fc7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7C0u;
        // 0x1fc7c4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7c0) {
            ctx->pc = 0x1FC7D4u;
            goto label_1fc7d4;
        }
    }
    ctx->pc = 0x1FC7C8u;
label_1fc7c8:
    // 0x1fc7c8: 0xc0733e2  jal         func_1CCF88
label_1fc7cc:
    if (ctx->pc == 0x1FC7CCu) {
        ctx->pc = 0x1FC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7C8u;
        // 0x1fc7cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7D0u;
        goto label_1fc7d0;
    }
    ctx->pc = 0x1FC7C8u;
    SET_GPR_U32(ctx, 31, 0x1FC7D0u);
    ctx->pc = 0x1FC7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7C8u;
    // 0x1fc7cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1FC7C8u, 0x1FC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7D0u;
label_1fc7d0:
    // 0x1fc7d0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1fc7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fc7d4:
    // 0x1fc7d4: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1fc7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1fc7d8:
    // 0x1fc7d8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1fc7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1fc7dc:
    // 0x1fc7dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fc7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fc7e0:
    // 0x1fc7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7e4:
    // 0x1fc7e4: 0xc05e602  jal         func_179808
label_1fc7e8:
    if (ctx->pc == 0x1FC7E8u) {
        ctx->pc = 0x1FC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7E4u;
        // 0x1fc7e8: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7ECu;
        goto label_1fc7ec;
    }
    ctx->pc = 0x1FC7E4u;
    SET_GPR_U32(ctx, 31, 0x1FC7ECu);
    ctx->pc = 0x1FC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7E4u;
    // 0x1fc7e8: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1FC7E4u, 0x1FC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7ECu;
label_1fc7ec:
    // 0x1fc7ec: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_1fc7f0:
    // 0x1fc7f0: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x1fc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1fc7f4:
    // 0x1fc7f4: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1fc7f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fc7f8:
    // 0x1fc7f8: 0x8e27d310  lw          $a3, -0x2CF0($s1)
    ctx->pc = 0x1fc7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955792)));
label_1fc7fc:
    // 0x1fc7fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fc7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc800:
    // 0x1fc800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc804:
    // 0x1fc804: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fc804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fc808:
    // 0x1fc808: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc80c:
    // 0x1fc80c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fc80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc810:
    // 0x1fc810: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fc814:
    // 0x1fc814: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fc818:
    // 0x1fc818: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x1fc818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_1fc81c:
    // 0x1fc81c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1fc81cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc820:
    // 0x1fc820: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fc824:
    // 0x1fc824: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fc824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc828:
    // 0x1fc828: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fc82c:
    // 0x1fc82c: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1fc82cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1fc830:
    // 0x1fc830: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x1fc830u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
label_1fc834:
    // 0x1fc834: 0x40f809  jalr        $v0
label_1fc838:
    if (ctx->pc == 0x1FC838u) {
        ctx->pc = 0x1FC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC834u;
        // 0x1fc838: 0x3c11001c  lui         $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC83Cu;
        goto label_1fc83c;
    }
    ctx->pc = 0x1FC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC83Cu);
        ctx->pc = 0x1FC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC834u;
        // 0x1fc838: 0x3c11001c  lui         $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC834u, 0x1FC83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC83Cu;
label_1fc83c:
    // 0x1fc83c: 0x36100005  ori         $s0, $s0, 0x5
    ctx->pc = 0x1fc83cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5);
label_1fc840:
    // 0x1fc840: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1fc840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1fc844:
    // 0x1fc844: 0xc067b9c  jal         func_19EE70
label_1fc848:
    if (ctx->pc == 0x1FC848u) {
        ctx->pc = 0x1FC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC844u;
        // 0x1fc848: 0x36520014  ori         $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC84Cu;
        goto label_1fc84c;
    }
    ctx->pc = 0x1FC844u;
    SET_GPR_U32(ctx, 31, 0x1FC84Cu);
    ctx->pc = 0x1FC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC844u;
    // 0x1fc848: 0x36520014  ori         $s2, $s2, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FC844u, 0x1FC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC84Cu;
label_1fc84c:
    // 0x1fc84c: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x1fc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1fc850:
    // 0x1fc850: 0xc073478  jal         func_1CD1E0
label_1fc854:
    if (ctx->pc == 0x1FC854u) {
        ctx->pc = 0x1FC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC850u;
        // 0x1fc854: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC858u;
        goto label_1fc858;
    }
    ctx->pc = 0x1FC850u;
    SET_GPR_U32(ctx, 31, 0x1FC858u);
    ctx->pc = 0x1FC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC850u;
    // 0x1fc854: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FC850u, 0x1FC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC858u;
label_1fc858:
    // 0x1fc858: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fc85c:
    // 0x1fc85c: 0xe6940008  swc1        $f20, 0x8($s4)
    ctx->pc = 0x1fc85cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1fc860:
    // 0x1fc860: 0xe695000c  swc1        $f21, 0xC($s4)
    ctx->pc = 0x1fc860u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1fc864:
    // 0x1fc864: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fc864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc868:
    // 0x1fc868: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1fc86c:
    // 0x1fc86c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1fc86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fc870:
    // 0x1fc870: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1fc870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1fc874:
    // 0x1fc874: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1fc878:
    // 0x1fc878: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_1fc87c:
    if (ctx->pc == 0x1FC87Cu) {
        ctx->pc = 0x1FC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC878u;
        // 0x1fc87c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC880u;
        goto label_1fc880;
    }
    ctx->pc = 0x1FC878u;
    {
        const bool branch_taken_0x1fc878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC878u;
        // 0x1fc87c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc878) {
            ctx->pc = 0x1FC8F8u;
            goto label_1fc8f8;
        }
    }
    ctx->pc = 0x1FC880u;
label_1fc880:
    // 0x1fc880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fc884:
    if (ctx->pc == 0x1FC884u) {
        ctx->pc = 0x1FC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC880u;
        // 0x1fc884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC888u;
        goto label_1fc888;
    }
    ctx->pc = 0x1FC880u;
    {
        const bool branch_taken_0x1fc880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC880u;
        // 0x1fc884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc880) {
            ctx->pc = 0x1FC898u;
            goto label_1fc898;
        }
    }
    ctx->pc = 0x1FC888u;
label_1fc888:
    // 0x1fc888: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1fc88c:
    if (ctx->pc == 0x1FC88Cu) {
        ctx->pc = 0x1FC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC888u;
        // 0x1fc88c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC890u;
        goto label_1fc890;
    }
    ctx->pc = 0x1FC888u;
    {
        const bool branch_taken_0x1fc888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC888u;
        // 0x1fc88c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc888) {
            ctx->pc = 0x1FC8B4u;
            goto label_1fc8b4;
        }
    }
    ctx->pc = 0x1FC890u;
label_1fc890:
    // 0x1fc890: 0x10000021  b           . + 4 + (0x21 << 2)
label_1fc894:
    if (ctx->pc == 0x1FC894u) {
        ctx->pc = 0x1FC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC890u;
        // 0x1fc894: 0x26d77ff0  addiu       $s7, $s6, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC898u;
        goto label_1fc898;
    }
    ctx->pc = 0x1FC890u;
    {
        const bool branch_taken_0x1fc890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC890u;
        // 0x1fc894: 0x26d77ff0  addiu       $s7, $s6, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc890) {
            ctx->pc = 0x1FC918u;
            goto label_1fc918;
        }
    }
    ctx->pc = 0x1FC898u;
label_1fc898:
    // 0x1fc898: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fc898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fc89c:
    // 0x1fc89c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1fc8a0:
    if (ctx->pc == 0x1FC8A0u) {
        ctx->pc = 0x1FC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC89Cu;
        // 0x1fc8a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8A4u;
        goto label_1fc8a4;
    }
    ctx->pc = 0x1FC89Cu;
    {
        const bool branch_taken_0x1fc89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC89Cu;
        // 0x1fc8a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc89c) {
            ctx->pc = 0x1FC8E4u;
            goto label_1fc8e4;
        }
    }
    ctx->pc = 0x1FC8A4u;
label_1fc8a4:
    // 0x1fc8a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1fc8a8:
    if (ctx->pc == 0x1FC8A8u) {
        ctx->pc = 0x1FC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8A4u;
        // 0x1fc8a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8ACu;
        goto label_1fc8ac;
    }
    ctx->pc = 0x1FC8A4u;
    {
        const bool branch_taken_0x1fc8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8A4u;
        // 0x1fc8a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8a4) {
            ctx->pc = 0x1FC8C8u;
            goto label_1fc8c8;
        }
    }
    ctx->pc = 0x1FC8ACu;
label_1fc8ac:
    // 0x1fc8ac: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1fc8b0:
    if (ctx->pc == 0x1FC8B0u) {
        ctx->pc = 0x1FC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8ACu;
        // 0x1fc8b0: 0x26d77ff0  addiu       $s7, $s6, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8B4u;
        goto label_1fc8b4;
    }
    ctx->pc = 0x1FC8ACu;
    {
        const bool branch_taken_0x1fc8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8ACu;
        // 0x1fc8b0: 0x26d77ff0  addiu       $s7, $s6, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8ac) {
            ctx->pc = 0x1FC918u;
            goto label_1fc918;
        }
    }
    ctx->pc = 0x1FC8B4u;
label_1fc8b4:
    // 0x1fc8b4: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1fc8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1fc8b8:
    // 0x1fc8b8: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1fc8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1fc8bc:
    // 0x1fc8bc: 0x36310004  ori         $s1, $s1, 0x4
    ctx->pc = 0x1fc8bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
label_1fc8c0:
    // 0x1fc8c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1fc8c4:
    if (ctx->pc == 0x1FC8C4u) {
        ctx->pc = 0x1FC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8C0u;
        // 0x1fc8c4: 0x36100009  ori         $s0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8C8u;
        goto label_1fc8c8;
    }
    ctx->pc = 0x1FC8C0u;
    {
        const bool branch_taken_0x1fc8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8C0u;
        // 0x1fc8c4: 0x36100009  ori         $s0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8c0) {
            ctx->pc = 0x1FC910u;
            goto label_1fc910;
        }
    }
    ctx->pc = 0x1FC8C8u;
label_1fc8c8:
    // 0x1fc8c8: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1fc8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1fc8cc:
    // 0x1fc8cc: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1fc8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1fc8d0:
    // 0x1fc8d0: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x1fc8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
label_1fc8d4:
    // 0x1fc8d4: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x1fc8d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
label_1fc8d8:
    // 0x1fc8d8: 0x36100007  ori         $s0, $s0, 0x7
    ctx->pc = 0x1fc8d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7);
label_1fc8dc:
    // 0x1fc8dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fc8e0:
    if (ctx->pc == 0x1FC8E0u) {
        ctx->pc = 0x1FC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8DCu;
        // 0x1fc8e0: 0x36520016  ori         $s2, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8E4u;
        goto label_1fc8e4;
    }
    ctx->pc = 0x1FC8DCu;
    {
        const bool branch_taken_0x1fc8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8DCu;
        // 0x1fc8e0: 0x36520016  ori         $s2, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8dc) {
            ctx->pc = 0x1FC910u;
            goto label_1fc910;
        }
    }
    ctx->pc = 0x1FC8E4u;
label_1fc8e4:
    // 0x1fc8e4: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1fc8e8:
    // 0x1fc8e8: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1fc8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1fc8ec:
    // 0x1fc8ec: 0x36310003  ori         $s1, $s1, 0x3
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
label_1fc8f0:
    // 0x1fc8f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fc8f4:
    if (ctx->pc == 0x1FC8F4u) {
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8F8u;
        goto label_1fc8f8;
    }
    ctx->pc = 0x1FC8F0u;
    {
        const bool branch_taken_0x1fc8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8f0) {
            ctx->pc = 0x1FC910u;
            goto label_1fc910;
        }
    }
    ctx->pc = 0x1FC8F8u;
label_1fc8f8:
    // 0x1fc8f8: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1fc8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1fc8fc:
    // 0x1fc8fc: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1fc8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1fc900:
    // 0x1fc900: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
label_1fc904:
    // 0x1fc904: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1fc904u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_1fc908:
    // 0x1fc908: 0x36100006  ori         $s0, $s0, 0x6
    ctx->pc = 0x1fc908u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
label_1fc90c:
    // 0x1fc90c: 0x36520015  ori         $s2, $s2, 0x15
    ctx->pc = 0x1fc90cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)21);
label_1fc910:
    // 0x1fc910: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fc910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fc914:
    // 0x1fc914: 0x26d77ff0  addiu       $s7, $s6, 0x7FF0
    ctx->pc = 0x1fc914u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 32752));
label_1fc918:
    // 0x1fc918: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1fc91c:
    // 0x1fc91c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc920:
    // 0x1fc920: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x1fc920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_1fc924:
    // 0x1fc924: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1fc924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fc928:
    // 0x1fc928: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1fc928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1fc92c:
    // 0x1fc92c: 0x245e8028  addiu       $fp, $v0, -0x7FD8
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934568));
label_1fc930:
    // 0x1fc930: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1fc930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fc934:
    // 0x1fc934: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fc934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fc938:
    // 0x1fc938: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fc938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fc93c:
    // 0x1fc93c: 0x240900a6  addiu       $t1, $zero, 0xA6
    ctx->pc = 0x1fc93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_1fc940:
    // 0x1fc940: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fc944:
    // 0x1fc944: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fc944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc948:
    // 0x1fc948: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1fc94c:
    // 0x1fc94c: 0x40f809  jalr        $v0
label_1fc950:
    if (ctx->pc == 0x1FC950u) {
        ctx->pc = 0x1FC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC94Cu;
        // 0x1fc950: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC954u;
        goto label_1fc954;
    }
    ctx->pc = 0x1FC94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC954u);
        ctx->pc = 0x1FC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC94Cu;
        // 0x1fc950: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC94Cu, 0x1FC954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC954u;
label_1fc954:
    // 0x1fc954: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1fc954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc958:
    // 0x1fc958: 0x50e00005  beql        $a3, $zero, . + 4 + (0x5 << 2)
label_1fc95c:
    if (ctx->pc == 0x1FC95Cu) {
        ctx->pc = 0x1FC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC958u;
        // 0x1fc95c: 0xae6700b0  sw          $a3, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC960u;
        goto label_1fc960;
    }
    ctx->pc = 0x1FC958u;
    {
        const bool branch_taken_0x1fc958 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc958) {
            ctx->pc = 0x1FC95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC958u;
            // 0x1fc95c: 0xae6700b0  sw          $a3, 0xB0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC970u;
            goto label_1fc970;
        }
    }
    ctx->pc = 0x1FC960u;
label_1fc960:
    // 0x1fc960: 0xc0686fe  jal         func_1A1BF8
label_1fc964:
    if (ctx->pc == 0x1FC964u) {
        ctx->pc = 0x1FC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC960u;
        // 0x1fc964: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC968u;
        goto label_1fc968;
    }
    ctx->pc = 0x1FC960u;
    SET_GPR_U32(ctx, 31, 0x1FC968u);
    ctx->pc = 0x1FC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC960u;
    // 0x1fc964: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1FC960u, 0x1FC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC968u;
label_1fc968:
    // 0x1fc968: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1fc968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc96c:
    // 0x1fc96c: 0xae6700b0  sw          $a3, 0xB0($s3)
    ctx->pc = 0x1fc96cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 7));
label_1fc970:
    // 0x1fc970: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc974:
    // 0x1fc974: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fc974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fc978:
    // 0x1fc978: 0x8eb5d310  lw          $s5, -0x2CF0($s5)
    ctx->pc = 0x1fc978u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955792)));
label_1fc97c:
    // 0x1fc97c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fc97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fc980:
    // 0x1fc980: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fc980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fc984:
    // 0x1fc984: 0xc44cf4ac  lwc1        $f12, -0xB54($v0)
    ctx->pc = 0x1fc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fc988:
    // 0x1fc988: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1fc988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc98c:
    // 0x1fc98c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fc990:
    // 0x1fc990: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fc990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fc994:
    // 0x1fc994: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1fc994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1fc998:
    // 0x1fc998: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fc998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc99c:
    // 0x1fc99c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1fc99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1fc9a0:
    // 0x1fc9a0: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x1fc9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
label_1fc9a4:
    // 0x1fc9a4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1fc9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fc9a8:
    // 0x1fc9a8: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1fc9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1fc9ac:
    // 0x1fc9ac: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1fc9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1fc9b0:
    // 0x1fc9b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fc9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fc9b4:
    // 0x1fc9b4: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1fc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1fc9b8:
    // 0x1fc9b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fc9b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc9bc:
    // 0x1fc9bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fc9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc9c0:
    // 0x1fc9c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1fc9c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1fc9c4:
    // 0x1fc9c4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fc9c8:
    // 0x1fc9c8: 0x40f809  jalr        $v0
label_1fc9cc:
    if (ctx->pc == 0x1FC9CCu) {
        ctx->pc = 0x1FC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C8u;
        // 0x1fc9cc: 0x8e6a00a4  lw          $t2, 0xA4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC9D0u;
        goto label_1fc9d0;
    }
    ctx->pc = 0x1FC9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC9D0u);
        ctx->pc = 0x1FC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C8u;
        // 0x1fc9cc: 0x8e6a00a4  lw          $t2, 0xA4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC9C8u, 0x1FC9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC9D0u;
label_1fc9d0:
    // 0x1fc9d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fc9d4:
    // 0x1fc9d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fc9d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc9d8:
    // 0x1fc9d8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1fc9dc:
    // 0x1fc9dc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1fc9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fc9e0:
    // 0x1fc9e0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fc9e4:
    // 0x1fc9e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fc9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc9e8:
    // 0x1fc9e8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fc9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fc9ec:
    // 0x1fc9ec: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fc9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fc9f0:
    // 0x1fc9f0: 0x240900a8  addiu       $t1, $zero, 0xA8
    ctx->pc = 0x1fc9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1fc9f4:
    // 0x1fc9f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fc9f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc9f8:
    // 0x1fc9f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fc9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fc9fc:
    // 0x1fc9fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fca00:
    // 0x1fca00: 0x40f809  jalr        $v0
label_1fca04:
    if (ctx->pc == 0x1FCA04u) {
        ctx->pc = 0x1FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA00u;
        // 0x1fca04: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA08u;
        goto label_1fca08;
    }
    ctx->pc = 0x1FCA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCA08u);
        ctx->pc = 0x1FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA00u;
        // 0x1fca04: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA00u, 0x1FCA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCA08u;
label_1fca08:
    // 0x1fca08: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1fca08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fca0c:
    // 0x1fca0c: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_1fca10:
    if (ctx->pc == 0x1FCA10u) {
        ctx->pc = 0x1FCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA0Cu;
        // 0x1fca10: 0xae6b00b4  sw          $t3, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA14u;
        goto label_1fca14;
    }
    ctx->pc = 0x1FCA0Cu;
    {
        const bool branch_taken_0x1fca0c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fca0c) {
            ctx->pc = 0x1FCA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA0Cu;
            // 0x1fca10: 0xae6b00b4  sw          $t3, 0xB4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCA24u;
            goto label_1fca24;
        }
    }
    ctx->pc = 0x1FCA14u;
label_1fca14:
    // 0x1fca14: 0xc0686fe  jal         func_1A1BF8
label_1fca18:
    if (ctx->pc == 0x1FCA18u) {
        ctx->pc = 0x1FCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA14u;
        // 0x1fca18: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA1Cu;
        goto label_1fca1c;
    }
    ctx->pc = 0x1FCA14u;
    SET_GPR_U32(ctx, 31, 0x1FCA1Cu);
    ctx->pc = 0x1FCA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA14u;
    // 0x1fca18: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1FCA14u, 0x1FCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA1Cu;
label_1fca1c:
    // 0x1fca1c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1fca1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fca20:
    // 0x1fca20: 0xae6b00b4  sw          $t3, 0xB4($s3)
    ctx->pc = 0x1fca20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 11));
label_1fca24:
    // 0x1fca24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fca28:
    // 0x1fca28: 0xc44cf4b0  lwc1        $f12, -0xB50($v0)
    ctx->pc = 0x1fca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fca2c:
    // 0x1fca2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fca30:
    // 0x1fca30: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1fca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1fca34:
    // 0x1fca34: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fca38:
    // 0x1fca38: 0x8e6a00a4  lw          $t2, 0xA4($s3)
    ctx->pc = 0x1fca38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1fca3c:
    // 0x1fca3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1fca3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fca40:
    // 0x1fca40: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fca40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fca44:
    // 0x1fca44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fca44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fca48:
    // 0x1fca48: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1fca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1fca4c:
    // 0x1fca4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fca4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fca50:
    // 0x1fca50: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x1fca50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
label_1fca54:
    // 0x1fca54: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1fca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1fca58:
    // 0x1fca58: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fca58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fca5c:
    // 0x1fca5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fca5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fca60:
    // 0x1fca60: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fca60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fca64:
    // 0x1fca64: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fca68:
    // 0x1fca68: 0x40f809  jalr        $v0
label_1fca6c:
    if (ctx->pc == 0x1FCA6Cu) {
        ctx->pc = 0x1FCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA68u;
        // 0x1fca6c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA70u;
        goto label_1fca70;
    }
    ctx->pc = 0x1FCA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCA70u);
        ctx->pc = 0x1FCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA68u;
        // 0x1fca6c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA68u, 0x1FCA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCA70u;
label_1fca70:
    // 0x1fca70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fca70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fca74:
    // 0x1fca74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fca74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fca78:
    // 0x1fca78: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1fca78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1fca7c:
    // 0x1fca7c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1fca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fca80:
    // 0x1fca80: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1fca80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fca84:
    // 0x1fca84: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fca88:
    // 0x1fca88: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fca8c:
    // 0x1fca8c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fca8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fca90:
    // 0x1fca90: 0x240900aa  addiu       $t1, $zero, 0xAA
    ctx->pc = 0x1fca90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1fca94:
    // 0x1fca94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fca94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fca98:
    // 0x1fca98: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fca9c:
    // 0x1fca9c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fcaa0:
    // 0x1fcaa0: 0x40f809  jalr        $v0
label_1fcaa4:
    if (ctx->pc == 0x1FCAA4u) {
        ctx->pc = 0x1FCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAA0u;
        // 0x1fcaa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCAA8u;
        goto label_1fcaa8;
    }
    ctx->pc = 0x1FCAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCAA8u);
        ctx->pc = 0x1FCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAA0u;
        // 0x1fcaa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCAA0u, 0x1FCAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCAA8u;
label_1fcaa8:
    // 0x1fcaa8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1fcaa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcaac:
    // 0x1fcaac: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_1fcab0:
    if (ctx->pc == 0x1FCAB0u) {
        ctx->pc = 0x1FCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAACu;
        // 0x1fcab0: 0xae6b00b8  sw          $t3, 0xB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCAB4u;
        goto label_1fcab4;
    }
    ctx->pc = 0x1FCAACu;
    {
        const bool branch_taken_0x1fcaac = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcaac) {
            ctx->pc = 0x1FCAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCAACu;
            // 0x1fcab0: 0xae6b00b8  sw          $t3, 0xB8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCAC4u;
            goto label_1fcac4;
        }
    }
    ctx->pc = 0x1FCAB4u;
label_1fcab4:
    // 0x1fcab4: 0xc0686fe  jal         func_1A1BF8
label_1fcab8:
    if (ctx->pc == 0x1FCAB8u) {
        ctx->pc = 0x1FCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAB4u;
        // 0x1fcab8: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCABCu;
        goto label_1fcabc;
    }
    ctx->pc = 0x1FCAB4u;
    SET_GPR_U32(ctx, 31, 0x1FCABCu);
    ctx->pc = 0x1FCAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCAB4u;
    // 0x1fcab8: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1FCAB4u, 0x1FCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCABCu;
label_1fcabc:
    // 0x1fcabc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1fcabcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcac0:
    // 0x1fcac0: 0xae6b00b8  sw          $t3, 0xB8($s3)
    ctx->pc = 0x1fcac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 11));
label_1fcac4:
    // 0x1fcac4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fcac8:
    // 0x1fcac8: 0xc44cf4b4  lwc1        $f12, -0xB4C($v0)
    ctx->pc = 0x1fcac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fcacc:
    // 0x1fcacc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fcaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fcad0:
    // 0x1fcad0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1fcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1fcad4:
    // 0x1fcad4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fcad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fcad8:
    // 0x1fcad8: 0x8e6a00a4  lw          $t2, 0xA4($s3)
    ctx->pc = 0x1fcad8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1fcadc:
    // 0x1fcadc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1fcadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fcae0:
    // 0x1fcae0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fcae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fcae4:
    // 0x1fcae4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fcae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fcae8:
    // 0x1fcae8: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1fcae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1fcaec:
    // 0x1fcaec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fcaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcaf0:
    // 0x1fcaf0: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x1fcaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
label_1fcaf4:
    // 0x1fcaf4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1fcaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1fcaf8:
    // 0x1fcaf8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fcaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fcafc:
    // 0x1fcafc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcb00:
    // 0x1fcb00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fcb00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb04:
    // 0x1fcb04: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fcb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fcb08:
    // 0x1fcb08: 0x40f809  jalr        $v0
label_1fcb0c:
    if (ctx->pc == 0x1FCB0Cu) {
        ctx->pc = 0x1FCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB08u;
        // 0x1fcb0c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB10u;
        goto label_1fcb10;
    }
    ctx->pc = 0x1FCB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCB10u);
        ctx->pc = 0x1FCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB08u;
        // 0x1fcb0c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB08u, 0x1FCB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCB10u;
label_1fcb10:
    // 0x1fcb10: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fcb14:
    // 0x1fcb14: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fcb14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb18:
    // 0x1fcb18: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1fcb18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1fcb1c:
    // 0x1fcb1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1fcb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb20:
    // 0x1fcb20: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1fcb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fcb24:
    // 0x1fcb24: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fcb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fcb28:
    // 0x1fcb28: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fcb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fcb2c:
    // 0x1fcb2c: 0x240900ac  addiu       $t1, $zero, 0xAC
    ctx->pc = 0x1fcb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1fcb30:
    // 0x1fcb30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fcb30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb34:
    // 0x1fcb34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fcb34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb38:
    // 0x1fcb38: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fcb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fcb3c:
    // 0x1fcb3c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fcb40:
    // 0x1fcb40: 0x40f809  jalr        $v0
label_1fcb44:
    if (ctx->pc == 0x1FCB44u) {
        ctx->pc = 0x1FCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB40u;
        // 0x1fcb44: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB48u;
        goto label_1fcb48;
    }
    ctx->pc = 0x1FCB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCB48u);
        ctx->pc = 0x1FCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB40u;
        // 0x1fcb44: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB40u, 0x1FCB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCB48u;
label_1fcb48:
    // 0x1fcb48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fcb48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb4c:
    // 0x1fcb4c: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_1fcb50:
    if (ctx->pc == 0x1FCB50u) {
        ctx->pc = 0x1FCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB4Cu;
        // 0x1fcb50: 0xae6800a8  sw          $t0, 0xA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB54u;
        goto label_1fcb54;
    }
    ctx->pc = 0x1FCB4Cu;
    {
        const bool branch_taken_0x1fcb4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb4c) {
            ctx->pc = 0x1FCB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCB4Cu;
            // 0x1fcb50: 0xae6800a8  sw          $t0, 0xA8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCB64u;
            goto label_1fcb64;
        }
    }
    ctx->pc = 0x1FCB54u;
label_1fcb54:
    // 0x1fcb54: 0xc0686fe  jal         func_1A1BF8
label_1fcb58:
    if (ctx->pc == 0x1FCB58u) {
        ctx->pc = 0x1FCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB54u;
        // 0x1fcb58: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB5Cu;
        goto label_1fcb5c;
    }
    ctx->pc = 0x1FCB54u;
    SET_GPR_U32(ctx, 31, 0x1FCB5Cu);
    ctx->pc = 0x1FCB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB54u;
    // 0x1fcb58: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1FCB54u, 0x1FCB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB5Cu;
label_1fcb5c:
    // 0x1fcb5c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fcb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb60:
    // 0x1fcb60: 0xae6800a8  sw          $t0, 0xA8($s3)
    ctx->pc = 0x1fcb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 8));
label_1fcb64:
    // 0x1fcb64: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fcb68:
    // 0x1fcb68: 0x8e6a00a4  lw          $t2, 0xA4($s3)
    ctx->pc = 0x1fcb68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1fcb6c:
    // 0x1fcb6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fcb70:
    // 0x1fcb70: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1fcb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fcb74:
    // 0x1fcb74: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1fcb74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1fcb78:
    // 0x1fcb78: 0xc44cf4b8  lwc1        $f12, -0xB48($v0)
    ctx->pc = 0x1fcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fcb7c:
    // 0x1fcb7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fcb80:
    // 0x1fcb80: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fcb84:
    // 0x1fcb84: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fcb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb88:
    // 0x1fcb88: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1fcb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1fcb8c:
    // 0x1fcb8c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1fcb8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1fcb90:
    // 0x1fcb90: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1fcb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1fcb94:
    // 0x1fcb94: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1fcb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1fcb98:
    // 0x1fcb98: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x1fcb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
label_1fcb9c:
    // 0x1fcb9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcba0:
    // 0x1fcba0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcba4:
    // 0x1fcba4: 0x3529001d  ori         $t1, $t1, 0x1D
    ctx->pc = 0x1fcba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)29);
label_1fcba8:
    // 0x1fcba8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fcbac:
    // 0x1fcbac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fcbb0:
    // 0x1fcbb0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fcbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fcbb4:
    // 0x1fcbb4: 0x40f809  jalr        $v0
label_1fcbb8:
    if (ctx->pc == 0x1FCBB8u) {
        ctx->pc = 0x1FCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBB4u;
        // 0x1fcbb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBBCu;
        goto label_1fcbbc;
    }
    ctx->pc = 0x1FCBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCBBCu);
        ctx->pc = 0x1FCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBB4u;
        // 0x1fcbb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCBB4u, 0x1FCBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCBBCu;
label_1fcbbc:
    // 0x1fcbbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fcbc0:
    // 0x1fcbc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fcbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fcbc4:
    // 0x1fcbc4: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x1fcbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_1fcbc8:
    // 0x1fcbc8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1fcbcc:
    // 0x1fcbcc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1fcbccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1fcbd0:
    // 0x1fcbd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fcbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fcbd4:
    // 0x1fcbd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fcbd8:
    // 0x1fcbd8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1fcbd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1fcbdc:
    // 0x1fcbdc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1fcbe0:
    // 0x1fcbe0: 0x60f809  jalr        $v1
label_1fcbe4:
    if (ctx->pc == 0x1FCBE4u) {
        ctx->pc = 0x1FCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBE0u;
        // 0x1fcbe4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBE8u;
        goto label_1fcbe8;
    }
    ctx->pc = 0x1FCBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FCBE8u);
        ctx->pc = 0x1FCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBE0u;
        // 0x1fcbe4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCBE0u, 0x1FCBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCBE8u;
label_1fcbe8:
    // 0x1fcbe8: 0x8e6600a8  lw          $a2, 0xA8($s3)
    ctx->pc = 0x1fcbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_1fcbec:
    // 0x1fcbec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fcbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcbf0:
    // 0x1fcbf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fcbf4:
    // 0x1fcbf4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1fcbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1fcbf8:
    // 0x1fcbf8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1fcbfc:
    // 0x1fcbfc: 0x60f809  jalr        $v1
label_1fcc00:
    if (ctx->pc == 0x1FCC00u) {
        ctx->pc = 0x1FCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBFCu;
        // 0x1fcc00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC04u;
        goto label_1fcc04;
    }
    ctx->pc = 0x1FCBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FCC04u);
        ctx->pc = 0x1FCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBFCu;
        // 0x1fcc00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCBFCu, 0x1FCC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCC04u;
label_1fcc04:
    // 0x1fcc04: 0xc07f734  jal         func_1FDCD0
label_1fcc08:
    if (ctx->pc == 0x1FCC08u) {
        ctx->pc = 0x1FCC0Cu;
        goto label_1fcc0c;
    }
    ctx->pc = 0x1FCC04u;
    SET_GPR_U32(ctx, 31, 0x1FCC0Cu);
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1FCC04u, 0x1FCC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC0Cu;
label_1fcc0c:
    // 0x1fcc0c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1fcc0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fcc10:
    // 0x1fcc10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fcc14:
    // 0x1fcc14: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1fcc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1fcc18:
    // 0x1fcc18: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1fcc1c:
    // 0x1fcc1c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1fcc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1fcc20:
    // 0x1fcc20: 0x24a58038  addiu       $a1, $a1, -0x7FC8
    ctx->pc = 0x1fcc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
label_1fcc24:
    // 0x1fcc24: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1fcc24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1fcc28:
    // 0x1fcc28: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1fcc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1fcc2c:
    // 0x1fcc2c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1fcc2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1fcc30:
    // 0x1fcc30: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fcc34:
    // 0x1fcc34: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fcc34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc38:
    // 0x1fcc38: 0x240900b3  addiu       $t1, $zero, 0xB3
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_1fcc3c:
    // 0x1fcc3c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fcc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fcc40:
    // 0x1fcc40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fcc40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc44:
    // 0x1fcc44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fcc44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc48:
    // 0x1fcc48: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fcc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fcc4c:
    // 0x1fcc4c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fcc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fcc50:
    // 0x1fcc50: 0x40f809  jalr        $v0
label_1fcc54:
    if (ctx->pc == 0x1FCC54u) {
        ctx->pc = 0x1FCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC50u;
        // 0x1fcc54: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC58u;
        goto label_1fcc58;
    }
    ctx->pc = 0x1FCC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCC58u);
        ctx->pc = 0x1FCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC50u;
        // 0x1fcc54: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC50u, 0x1FCC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCC58u;
label_1fcc58:
    // 0x1fcc58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1fcc5c:
    if (ctx->pc == 0x1FCC5Cu) {
        ctx->pc = 0x1FCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC58u;
        // 0x1fcc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC60u;
        goto label_1fcc60;
    }
    ctx->pc = 0x1FCC58u;
    {
        const bool branch_taken_0x1fcc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc58) {
            ctx->pc = 0x1FCC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC58u;
            // 0x1fcc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC6Cu;
            goto label_1fcc6c;
        }
    }
    ctx->pc = 0x1FCC60u;
label_1fcc60:
    // 0x1fcc60: 0xc073a9c  jal         func_1CEA70
label_1fcc64:
    if (ctx->pc == 0x1FCC64u) {
        ctx->pc = 0x1FCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC60u;
        // 0x1fcc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC68u;
        goto label_1fcc68;
    }
    ctx->pc = 0x1FCC60u;
    SET_GPR_U32(ctx, 31, 0x1FCC68u);
    ctx->pc = 0x1FCC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC60u;
    // 0x1fcc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1FCC60u, 0x1FCC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC68u;
label_1fcc68:
    // 0x1fcc68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc6c:
    // 0x1fcc6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fcc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc70:
    // 0x1fcc70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fcc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc74:
    // 0x1fcc74: 0xc073ad0  jal         func_1CEB40
label_1fcc78:
    if (ctx->pc == 0x1FCC78u) {
        ctx->pc = 0x1FCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC74u;
        // 0x1fcc78: 0xae6200c8  sw          $v0, 0xC8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC7Cu;
        goto label_1fcc7c;
    }
    ctx->pc = 0x1FCC74u;
    SET_GPR_U32(ctx, 31, 0x1FCC7Cu);
    ctx->pc = 0x1FCC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC74u;
    // 0x1fcc78: 0xae6200c8  sw          $v0, 0xC8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1FCC74u, 0x1FCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC7Cu;
label_1fcc7c:
    // 0x1fcc7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fcc80:
    // 0x1fcc80: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1fcc84:
    // 0x1fcc84: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1fcc88:
    // 0x1fcc88: 0x24857fe0  addiu       $a1, $a0, 0x7FE0
    ctx->pc = 0x1fcc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32736));
label_1fcc8c:
    // 0x1fcc8c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fcc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fcc90:
    // 0x1fcc90: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fcc94:
    // 0x1fcc94: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fcc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fcc98:
    // 0x1fcc98: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fcc98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc9c:
    // 0x1fcc9c: 0x240900b7  addiu       $t1, $zero, 0xB7
    ctx->pc = 0x1fcc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_1fcca0:
    // 0x1fcca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fcca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcca4:
    // 0x1fcca4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fcca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fcca8:
    // 0x1fcca8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fcca8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fccac:
    // 0x1fccac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fccb0:
    // 0x1fccb0: 0x40f809  jalr        $v0
label_1fccb4:
    if (ctx->pc == 0x1FCCB4u) {
        ctx->pc = 0x1FCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB0u;
        // 0x1fccb4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCB8u;
        goto label_1fccb8;
    }
    ctx->pc = 0x1FCCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCCB8u);
        ctx->pc = 0x1FCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB0u;
        // 0x1fccb4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCCB0u, 0x1FCCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCCB8u;
label_1fccb8:
    // 0x1fccb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fccbc:
    if (ctx->pc == 0x1FCCBCu) {
        ctx->pc = 0x1FCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB8u;
        // 0x1fccbc: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCC0u;
        goto label_1fccc0;
    }
    ctx->pc = 0x1FCCB8u;
    {
        const bool branch_taken_0x1fccb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB8u;
        // 0x1fccbc: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccb8) {
            ctx->pc = 0x1FCCCCu;
            goto label_1fcccc;
        }
    }
    ctx->pc = 0x1FCCC0u;
label_1fccc0:
    // 0x1fccc0: 0xc0733e2  jal         func_1CCF88
label_1fccc4:
    if (ctx->pc == 0x1FCCC4u) {
        ctx->pc = 0x1FCCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCC0u;
        // 0x1fccc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCC8u;
        goto label_1fccc8;
    }
    ctx->pc = 0x1FCCC0u;
    SET_GPR_U32(ctx, 31, 0x1FCCC8u);
    ctx->pc = 0x1FCCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCC0u;
    // 0x1fccc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1FCCC0u, 0x1FCCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCC8u;
label_1fccc8:
    // 0x1fccc8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1fccc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1fcccc:
    // 0x1fcccc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1fccd0:
    // 0x1fccd0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fccd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1fccd4:
    // 0x1fccd4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1fccd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1fccd8:
    // 0x1fccd8: 0xc4e0f4c8  lwc1        $f0, -0xB38($a3)
    ctx->pc = 0x1fccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fccdc:
    // 0x1fccdc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fcce0:
    // 0x1fcce0: 0xae6200c0  sw          $v0, 0xC0($s3)
    ctx->pc = 0x1fcce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
label_1fcce4:
    // 0x1fcce4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fcce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fcce8:
    // 0x1fcce8: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1fcce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1fccec:
    // 0x1fccec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fccecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fccf0:
    // 0x1fccf0: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1fccf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fccf4:
    // 0x1fccf4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1fccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1fccf8:
    // 0x1fccf8: 0xc05e602  jal         func_179808
label_1fccfc:
    if (ctx->pc == 0x1FCCFCu) {
        ctx->pc = 0x1FCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCF8u;
        // 0x1fccfc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD00u;
        goto label_1fcd00;
    }
    ctx->pc = 0x1FCCF8u;
    SET_GPR_U32(ctx, 31, 0x1FCD00u);
    ctx->pc = 0x1FCCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCF8u;
    // 0x1fccfc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1FCCF8u, 0x1FCD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD00u;
label_1fcd00:
    // 0x1fcd00: 0x8e6c00c0  lw          $t4, 0xC0($s3)
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1fcd04:
    // 0x1fcd04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fcd08:
    // 0x1fcd08: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fcd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fcd0c:
    // 0x1fcd0c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1fcd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd10:
    // 0x1fcd10: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fcd14:
    // 0x1fcd14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcd18:
    // 0x1fcd18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcd18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd1c:
    // 0x1fcd1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fcd1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd20:
    // 0x1fcd20: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1fcd24:
    // 0x1fcd24: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1fcd24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fcd28:
    // 0x1fcd28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fcd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1fcd2c:
    // 0x1fcd2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fcd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd30:
    // 0x1fcd30: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1fcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1fcd34:
    // 0x1fcd34: 0x40f809  jalr        $v0
label_1fcd38:
    if (ctx->pc == 0x1FCD38u) {
        ctx->pc = 0x1FCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD34u;
        // 0x1fcd38: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD3Cu;
        goto label_1fcd3c;
    }
    ctx->pc = 0x1FCD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCD3Cu);
        ctx->pc = 0x1FCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD34u;
        // 0x1fcd38: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCD34u, 0x1FCD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCD3Cu;
label_1fcd3c:
    // 0x1fcd3c: 0xc067b9c  jal         func_19EE70
label_1fcd40:
    if (ctx->pc == 0x1FCD40u) {
        ctx->pc = 0x1FCD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD3Cu;
        // 0x1fcd40: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD44u;
        goto label_1fcd44;
    }
    ctx->pc = 0x1FCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD44u);
    ctx->pc = 0x1FCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD3Cu;
    // 0x1fcd40: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FCD3Cu, 0x1FCD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD44u;
label_1fcd44:
    // 0x1fcd44: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x1fcd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1fcd48:
    // 0x1fcd48: 0xc073478  jal         func_1CD1E0
label_1fcd4c:
    if (ctx->pc == 0x1FCD4Cu) {
        ctx->pc = 0x1FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD48u;
        // 0x1fcd4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD50u;
        goto label_1fcd50;
    }
    ctx->pc = 0x1FCD48u;
    SET_GPR_U32(ctx, 31, 0x1FCD50u);
    ctx->pc = 0x1FCD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD48u;
    // 0x1fcd4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FCD48u, 0x1FCD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD50u;
label_1fcd50:
    // 0x1fcd50: 0x8e6600c0  lw          $a2, 0xC0($s3)
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1fcd54:
    // 0x1fcd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd58:
    // 0x1fcd58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fcd5c:
    // 0x1fcd5c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fcd5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fcd60:
    // 0x1fcd60: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fcd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fcd64:
    // 0x1fcd64: 0x60f809  jalr        $v1
label_1fcd68:
    if (ctx->pc == 0x1FCD68u) {
        ctx->pc = 0x1FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD64u;
        // 0x1fcd68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD6Cu;
        goto label_1fcd6c;
    }
    ctx->pc = 0x1FCD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FCD6Cu);
        ctx->pc = 0x1FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD64u;
        // 0x1fcd68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCD64u, 0x1FCD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCD6Cu;
label_1fcd6c:
    // 0x1fcd6c: 0xc07f7d8  jal         func_1FDF60
label_1fcd70:
    if (ctx->pc == 0x1FCD70u) {
        ctx->pc = 0x1FCD74u;
        goto label_1fcd74;
    }
    ctx->pc = 0x1FCD6Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD74u);
    ctx->pc = 0x1FDF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF60u, 0x1FCD6Cu, 0x1FCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD74u;
label_1fcd74:
    // 0x1fcd74: 0xc07f7e0  jal         func_1FDF80
label_1fcd78:
    if (ctx->pc == 0x1FCD78u) {
        ctx->pc = 0x1FCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD74u;
        // 0x1fcd78: 0x2c2880b  movn        $s1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD7Cu;
        goto label_1fcd7c;
    }
    ctx->pc = 0x1FCD74u;
    SET_GPR_U32(ctx, 31, 0x1FCD7Cu);
    ctx->pc = 0x1FCD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD74u;
    // 0x1fcd78: 0x2c2880b  movn        $s1, $s6, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF80u, 0x1FCD74u, 0x1FCD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD7Cu;
label_1fcd7c:
    // 0x1fcd7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fcd80:
    if (ctx->pc == 0x1FCD80u) {
        ctx->pc = 0x1FCD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD7Cu;
        // 0x1fcd80: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD84u;
        goto label_1fcd84;
    }
    ctx->pc = 0x1FCD7Cu;
    {
        const bool branch_taken_0x1fcd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD7Cu;
        // 0x1fcd80: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd7c) {
            ctx->pc = 0x1FCD88u;
            goto label_1fcd88;
        }
    }
    ctx->pc = 0x1FCD84u;
label_1fcd84:
    // 0x1fcd84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1fcd84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1fcd88:
    // 0x1fcd88: 0xc07f7e8  jal         func_1FDFA0
label_1fcd8c:
    if (ctx->pc == 0x1FCD8Cu) {
        ctx->pc = 0x1FCD90u;
        goto label_1fcd90;
    }
    ctx->pc = 0x1FCD88u;
    SET_GPR_U32(ctx, 31, 0x1FCD90u);
    ctx->pc = 0x1FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFA0u, 0x1FCD88u, 0x1FCD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD90u;
label_1fcd90:
    // 0x1fcd90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fcd94:
    if (ctx->pc == 0x1FCD94u) {
        ctx->pc = 0x1FCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD90u;
        // 0x1fcd94: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD98u;
        goto label_1fcd98;
    }
    ctx->pc = 0x1FCD90u;
    {
        const bool branch_taken_0x1fcd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD90u;
        // 0x1fcd94: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd90) {
            ctx->pc = 0x1FCD9Cu;
            goto label_1fcd9c;
        }
    }
    ctx->pc = 0x1FCD98u;
label_1fcd98:
    // 0x1fcd98: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1fcd98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1fcd9c:
    // 0x1fcd9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fcda0:
    // 0x1fcda0: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x1fcda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
label_1fcda4:
    // 0x1fcda4: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1fcda4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1fcda8:
    // 0x1fcda8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1fcda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1fcdac:
    // 0x1fcdac: 0x24a58048  addiu       $a1, $a1, -0x7FB8
    ctx->pc = 0x1fcdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934600));
label_1fcdb0:
    // 0x1fcdb0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fcdb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdb4:
    // 0x1fcdb4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fcdb8:
    // 0x1fcdb8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fcdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fcdbc:
    // 0x1fcdbc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fcdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fcdc0:
    // 0x1fcdc0: 0x240900cc  addiu       $t1, $zero, 0xCC
    ctx->pc = 0x1fcdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1fcdc4:
    // 0x1fcdc4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fcdc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fcdc8:
    // 0x1fcdc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fcdc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdcc:
    // 0x1fcdcc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fcdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fcdd0:
    // 0x1fcdd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fcdd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdd4:
    // 0x1fcdd4: 0x40f809  jalr        $v0
label_1fcdd8:
    if (ctx->pc == 0x1FCDD8u) {
        ctx->pc = 0x1FCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDD4u;
        // 0x1fcdd8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDDCu;
        goto label_1fcddc;
    }
    ctx->pc = 0x1FCDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCDDCu);
        ctx->pc = 0x1FCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDD4u;
        // 0x1fcdd8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCDD4u, 0x1FCDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCDDCu;
label_1fcddc:
    // 0x1fcddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fcde0:
    if (ctx->pc == 0x1FCDE0u) {
        ctx->pc = 0x1FCDE4u;
        goto label_1fcde4;
    }
    ctx->pc = 0x1FCDDCu;
    {
        const bool branch_taken_0x1fcddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcddc) {
            ctx->pc = 0x1FCDECu;
            goto label_1fcdec;
        }
    }
    ctx->pc = 0x1FCDE4u;
label_1fcde4:
    // 0x1fcde4: 0xc074fbc  jal         func_1D3EF0
label_1fcde8:
    if (ctx->pc == 0x1FCDE8u) {
        ctx->pc = 0x1FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE4u;
        // 0x1fcde8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDECu;
        goto label_1fcdec;
    }
    ctx->pc = 0x1FCDE4u;
    SET_GPR_U32(ctx, 31, 0x1FCDECu);
    ctx->pc = 0x1FCDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDE4u;
    // 0x1fcde8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1FCDE4u, 0x1FCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDECu;
label_1fcdec:
    // 0x1fcdec: 0xc07f72c  jal         func_1FDCB0
label_1fcdf0:
    if (ctx->pc == 0x1FCDF0u) {
        ctx->pc = 0x1FCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDECu;
        // 0x1fcdf0: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDF4u;
        goto label_1fcdf4;
    }
    ctx->pc = 0x1FCDECu;
    SET_GPR_U32(ctx, 31, 0x1FCDF4u);
    ctx->pc = 0x1FCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDECu;
    // 0x1fcdf0: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCB0u, 0x1FCDECu, 0x1FCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDF4u;
label_1fcdf4:
    // 0x1fcdf4: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1fcdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fcdf8:
    // 0x1fcdf8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fcdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fcdfc:
    // 0x1fcdfc: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1fcdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1fce00:
    // 0x1fce00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fce04:
    // 0x1fce04: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1fce04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1fce08:
    // 0x1fce08: 0x26670050  addiu       $a3, $s3, 0x50
    ctx->pc = 0x1fce08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1fce0c:
    // 0x1fce0c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1fce0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fce10:
    // 0x1fce10: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1fce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fce14:
    // 0x1fce14: 0xc075044  jal         func_1D4110
label_1fce18:
    if (ctx->pc == 0x1FCE18u) {
        ctx->pc = 0x1FCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE14u;
        // 0x1fce18: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE1Cu;
        goto label_1fce1c;
    }
    ctx->pc = 0x1FCE14u;
    SET_GPR_U32(ctx, 31, 0x1FCE1Cu);
    ctx->pc = 0x1FCE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE14u;
    // 0x1fce18: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1FCE14u, 0x1FCE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE1Cu;
label_1fce1c:
    // 0x1fce1c: 0xc07f7d8  jal         func_1FDF60
label_1fce20:
    if (ctx->pc == 0x1FCE20u) {
        ctx->pc = 0x1FCE24u;
        goto label_1fce24;
    }
    ctx->pc = 0x1FCE1Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE24u);
    ctx->pc = 0x1FDF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF60u, 0x1FCE1Cu, 0x1FCE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE24u;
label_1fce24:
    // 0x1fce24: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1fce28:
    if (ctx->pc == 0x1FCE28u) {
        ctx->pc = 0x1FCE2Cu;
        goto label_1fce2c;
    }
    ctx->pc = 0x1FCE24u;
    {
        const bool branch_taken_0x1fce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce24) {
            ctx->pc = 0x1FCE68u;
            goto label_1fce68;
        }
    }
    ctx->pc = 0x1FCE2Cu;
label_1fce2c:
    // 0x1fce2c: 0xc067b9c  jal         func_19EE70
label_1fce30:
    if (ctx->pc == 0x1FCE30u) {
        ctx->pc = 0x1FCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE2Cu;
        // 0x1fce30: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE34u;
        goto label_1fce34;
    }
    ctx->pc = 0x1FCE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE34u);
    ctx->pc = 0x1FCE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE2Cu;
    // 0x1fce30: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FCE2Cu, 0x1FCE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE34u;
label_1fce34:
    // 0x1fce34: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fce34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fce38:
    // 0x1fce38: 0x2e260002  sltiu       $a2, $s1, 0x2
    ctx->pc = 0x1fce38u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fce3c:
    // 0x1fce3c: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1fce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fce40:
    // 0x1fce40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fce44:
    // 0x1fce44: 0x8c6ad320  lw          $t2, -0x2CE0($v1)
    ctx->pc = 0x1fce44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1fce48:
    // 0x1fce48: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fce48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fce4c:
    // 0x1fce4c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1fce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1fce50:
    // 0x1fce50: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1fce50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_1fce54:
    // 0x1fce54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fce54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fce58:
    // 0x1fce58: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fce5c:
    // 0x1fce5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fce5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fce60:
    // 0x1fce60: 0xc07508c  jal         func_1D4230
label_1fce64:
    if (ctx->pc == 0x1FCE64u) {
        ctx->pc = 0x1FCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE60u;
        // 0x1fce64: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE68u;
        goto label_1fce68;
    }
    ctx->pc = 0x1FCE60u;
    SET_GPR_U32(ctx, 31, 0x1FCE68u);
    ctx->pc = 0x1FCE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE60u;
    // 0x1fce64: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FCE60u, 0x1FCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE68u;
label_1fce68:
    // 0x1fce68: 0xc07f7e0  jal         func_1FDF80
label_1fce6c:
    if (ctx->pc == 0x1FCE6Cu) {
        ctx->pc = 0x1FCE70u;
        goto label_1fce70;
    }
    ctx->pc = 0x1FCE68u;
    SET_GPR_U32(ctx, 31, 0x1FCE70u);
    ctx->pc = 0x1FDF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF80u, 0x1FCE68u, 0x1FCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE70u;
label_1fce70:
    // 0x1fce70: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1fce74:
    if (ctx->pc == 0x1FCE74u) {
        ctx->pc = 0x1FCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE70u;
        // 0x1fce74: 0x2e220003  sltiu       $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE78u;
        goto label_1fce78;
    }
    ctx->pc = 0x1FCE70u;
    {
        const bool branch_taken_0x1fce70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE70u;
        // 0x1fce74: 0x2e220003  sltiu       $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce70) {
            ctx->pc = 0x1FCEF0u;
            goto label_1fcef0;
        }
    }
    ctx->pc = 0x1FCE78u;
label_1fce78:
    // 0x1fce78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1fce7c:
    if (ctx->pc == 0x1FCE7Cu) {
        ctx->pc = 0x1FCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE78u;
        // 0x1fce7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE80u;
        goto label_1fce80;
    }
    ctx->pc = 0x1FCE78u;
    {
        const bool branch_taken_0x1fce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE78u;
        // 0x1fce7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce78) {
            ctx->pc = 0x1FCEACu;
            goto label_1fceac;
        }
    }
    ctx->pc = 0x1FCE80u;
label_1fce80:
    // 0x1fce80: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1fce80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fce84:
    // 0x1fce84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1fce88:
    if (ctx->pc == 0x1FCE88u) {
        ctx->pc = 0x1FCE8Cu;
        goto label_1fce8c;
    }
    ctx->pc = 0x1FCE84u;
    {
        const bool branch_taken_0x1fce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce84) {
            ctx->pc = 0x1FCEB0u;
            goto label_1fceb0;
        }
    }
    ctx->pc = 0x1FCE8Cu;
label_1fce8c:
    // 0x1fce8c: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fce90:
    // 0x1fce90: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1fce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1fce94:
    // 0x1fce94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fce98:
    // 0x1fce98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fce9c:
    // 0x1fce9c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fcea0:
    // 0x1fcea0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1fcea0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1fcea4:
    // 0x1fcea4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1fcea8:
    if (ctx->pc == 0x1FCEA8u) {
        ctx->pc = 0x1FCEACu;
        goto label_1fceac;
    }
    ctx->pc = 0x1FCEA4u;
    {
        const bool branch_taken_0x1fcea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcea4) {
            ctx->pc = 0x1FCEB0u;
            goto label_1fceb0;
        }
    }
    ctx->pc = 0x1FCEACu;
label_1fceac:
    // 0x1fceac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fceacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fceb0:
    // 0x1fceb0: 0xc067b9c  jal         func_19EE70
label_1fceb4:
    if (ctx->pc == 0x1FCEB4u) {
        ctx->pc = 0x1FCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB0u;
        // 0x1fceb4: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEB8u;
        goto label_1fceb8;
    }
    ctx->pc = 0x1FCEB0u;
    SET_GPR_U32(ctx, 31, 0x1FCEB8u);
    ctx->pc = 0x1FCEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEB0u;
    // 0x1fceb4: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FCEB0u, 0x1FCEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEB8u;
label_1fceb8:
    // 0x1fceb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fcebc:
    // 0x1fcebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fcebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcec0:
    // 0x1fcec0: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1fcec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fcec4:
    // 0x1fcec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcec8:
    // 0x1fcec8: 0x8c6ad320  lw          $t2, -0x2CE0($v1)
    ctx->pc = 0x1fcec8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1fcecc:
    // 0x1fcecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fceccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fced0:
    // 0x1fced0: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1fced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1fced4:
    // 0x1fced4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fced4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1fced8:
    // 0x1fced8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fced8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fcedc:
    // 0x1fcedc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fcee0:
    // 0x1fcee0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1fcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1fcee4:
    // 0x1fcee4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fcee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcee8:
    // 0x1fcee8: 0xc07508c  jal         func_1D4230
label_1fceec:
    if (ctx->pc == 0x1FCEECu) {
        ctx->pc = 0x1FCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEE8u;
        // 0x1fceec: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEF0u;
        goto label_1fcef0;
    }
    ctx->pc = 0x1FCEE8u;
    SET_GPR_U32(ctx, 31, 0x1FCEF0u);
    ctx->pc = 0x1FCEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEE8u;
    // 0x1fceec: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FCEE8u, 0x1FCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEF0u;
label_1fcef0:
    // 0x1fcef0: 0xc07f7e8  jal         func_1FDFA0
label_1fcef4:
    if (ctx->pc == 0x1FCEF4u) {
        ctx->pc = 0x1FCEF8u;
        goto label_1fcef8;
    }
    ctx->pc = 0x1FCEF0u;
    SET_GPR_U32(ctx, 31, 0x1FCEF8u);
    ctx->pc = 0x1FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFA0u, 0x1FCEF0u, 0x1FCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEF8u;
label_1fcef8:
    // 0x1fcef8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1fcefc:
    if (ctx->pc == 0x1FCEFCu) {
        ctx->pc = 0x1FCEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEF8u;
        // 0x1fcefc: 0x8e6300bc  lw          $v1, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF00u;
        goto label_1fcf00;
    }
    ctx->pc = 0x1FCEF8u;
    {
        const bool branch_taken_0x1fcef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcef8) {
            ctx->pc = 0x1FCEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCEF8u;
            // 0x1fcefc: 0x8e6300bc  lw          $v1, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCF48u;
            goto label_1fcf48;
        }
    }
    ctx->pc = 0x1FCF00u;
label_1fcf00:
    // 0x1fcf00: 0xc067b9c  jal         func_19EE70
label_1fcf04:
    if (ctx->pc == 0x1FCF04u) {
        ctx->pc = 0x1FCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF00u;
        // 0x1fcf04: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF08u;
        goto label_1fcf08;
    }
    ctx->pc = 0x1FCF00u;
    SET_GPR_U32(ctx, 31, 0x1FCF08u);
    ctx->pc = 0x1FCF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF00u;
    // 0x1fcf04: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FCF00u, 0x1FCF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF08u;
label_1fcf08:
    // 0x1fcf08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fcf08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcf0c:
    // 0x1fcf0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fcf10:
    // 0x1fcf10: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fcf14:
    // 0x1fcf14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf18:
    // 0x1fcf18: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1fcf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1fcf1c:
    // 0x1fcf1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fcf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf20:
    // 0x1fcf20: 0x8c6ad320  lw          $t2, -0x2CE0($v1)
    ctx->pc = 0x1fcf20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1fcf24:
    // 0x1fcf24: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1fcf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fcf28:
    // 0x1fcf28: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1fcf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1fcf2c:
    // 0x1fcf2c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fcf2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1fcf30:
    // 0x1fcf30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fcf30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fcf34:
    // 0x1fcf34: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fcf34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fcf38:
    // 0x1fcf38: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcf3c:
    // 0x1fcf3c: 0xc07508c  jal         func_1D4230
label_1fcf40:
    if (ctx->pc == 0x1FCF40u) {
        ctx->pc = 0x1FCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF3Cu;
        // 0x1fcf40: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF44u;
        goto label_1fcf44;
    }
    ctx->pc = 0x1FCF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCF44u);
    ctx->pc = 0x1FCF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF3Cu;
    // 0x1fcf40: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1FCF3Cu, 0x1FCF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF44u;
label_1fcf44:
    // 0x1fcf44: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x1fcf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fcf48:
    // 0x1fcf48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fcf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcf4c:
    // 0x1fcf4c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1fcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1fcf50:
    // 0x1fcf50: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1fcf54:
    // 0x1fcf54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fcf58:
    // 0x1fcf58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1fcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fcf5c:
    // 0x1fcf5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1fcf5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1fcf60:
    // 0x1fcf60: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_1fcf64:
    if (ctx->pc == 0x1FCF64u) {
        ctx->pc = 0x1FCF68u;
        goto label_1fcf68;
    }
    ctx->pc = 0x1FCF60u;
    {
        const bool branch_taken_0x1fcf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fcf60) {
            ctx->pc = 0x1FCF84u;
            goto label_1fcf84;
        }
    }
    ctx->pc = 0x1FCF68u;
label_1fcf68:
    // 0x1fcf68: 0xc067b9c  jal         func_19EE70
label_1fcf6c:
    if (ctx->pc == 0x1FCF6Cu) {
        ctx->pc = 0x1FCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF68u;
        // 0x1fcf6c: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF70u;
        goto label_1fcf70;
    }
    ctx->pc = 0x1FCF68u;
    SET_GPR_U32(ctx, 31, 0x1FCF70u);
    ctx->pc = 0x1FCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF68u;
    // 0x1fcf6c: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FCF68u, 0x1FCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF70u;
label_1fcf70:
    // 0x1fcf70: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_1fcf74:
    // 0x1fcf74: 0xc073b0a  jal         func_1CEC28
label_1fcf78:
    if (ctx->pc == 0x1FCF78u) {
        ctx->pc = 0x1FCF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF74u;
        // 0x1fcf78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF7Cu;
        goto label_1fcf7c;
    }
    ctx->pc = 0x1FCF74u;
    SET_GPR_U32(ctx, 31, 0x1FCF7Cu);
    ctx->pc = 0x1FCF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF74u;
    // 0x1fcf78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1FCF74u, 0x1FCF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF7Cu;
label_1fcf7c:
    // 0x1fcf7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fcf80:
    if (ctx->pc == 0x1FCF80u) {
        ctx->pc = 0x1FCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF7Cu;
        // 0x1fcf80: 0x8e6500bc  lw          $a1, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF84u;
        goto label_1fcf84;
    }
    ctx->pc = 0x1FCF7Cu;
    {
        const bool branch_taken_0x1fcf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF7Cu;
        // 0x1fcf80: 0x8e6500bc  lw          $a1, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf7c) {
            ctx->pc = 0x1FCF9Cu;
            goto label_1fcf9c;
        }
    }
    ctx->pc = 0x1FCF84u;
label_1fcf84:
    // 0x1fcf84: 0xc067b9c  jal         func_19EE70
label_1fcf88:
    if (ctx->pc == 0x1FCF88u) {
        ctx->pc = 0x1FCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF84u;
        // 0x1fcf88: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF8Cu;
        goto label_1fcf8c;
    }
    ctx->pc = 0x1FCF84u;
    SET_GPR_U32(ctx, 31, 0x1FCF8Cu);
    ctx->pc = 0x1FCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF84u;
    // 0x1fcf88: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FCF84u, 0x1FCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF8Cu;
label_1fcf8c:
    // 0x1fcf8c: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_1fcf90:
    // 0x1fcf90: 0xc073b0a  jal         func_1CEC28
label_1fcf94:
    if (ctx->pc == 0x1FCF94u) {
        ctx->pc = 0x1FCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF90u;
        // 0x1fcf94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF98u;
        goto label_1fcf98;
    }
    ctx->pc = 0x1FCF90u;
    SET_GPR_U32(ctx, 31, 0x1FCF98u);
    ctx->pc = 0x1FCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF90u;
    // 0x1fcf94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1FCF90u, 0x1FCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF98u;
label_1fcf98:
    // 0x1fcf98: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x1fcf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1fcf9c:
    // 0x1fcf9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fcfa0:
    // 0x1fcfa0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1fcfa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1fcfa4:
    // 0x1fcfa4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1fcfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1fcfa8:
    // 0x1fcfa8: 0x60f809  jalr        $v1
label_1fcfac:
    if (ctx->pc == 0x1FCFACu) {
        ctx->pc = 0x1FCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFA8u;
        // 0x1fcfac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFB0u;
        goto label_1fcfb0;
    }
    ctx->pc = 0x1FCFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FCFB0u);
        ctx->pc = 0x1FCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFA8u;
        // 0x1fcfac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCFA8u, 0x1FCFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCFB0u;
label_1fcfb0:
    // 0x1fcfb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcfb4:
    // 0x1fcfb4: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1fcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1fcfb8:
    // 0x1fcfb8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1fcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_1fcfbc:
    // 0x1fcfbc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1fcfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1fcfc0:
    // 0x1fcfc0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1fcfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1fcfc4:
    // 0x1fcfc4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1fcfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1fcfc8:
    // 0x1fcfc8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1fcfcc:
    // 0x1fcfcc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1fcfccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1fcfd0:
    // 0x1fcfd0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1fcfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1fcfd4:
    // 0x1fcfd4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1fcfd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fcfd8:
    // 0x1fcfd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fcfd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fcfdc:
    // 0x1fcfdc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1fcfdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fcfe0:
    // 0x1fcfe0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fcfe4:
    // 0x1fcfe4: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x1fcfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fcfe8:
    // 0x1fcfe8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1fcfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fcfec:
    // 0x1fcfec: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1fcfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fcff0:
    // 0x1fcff0: 0x3e00008  jr          $ra
label_1fcff4:
    if (ctx->pc == 0x1FCFF4u) {
        ctx->pc = 0x1FCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF0u;
        // 0x1fcff4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFF8u;
        goto label_fallthrough_0x1fcff0;
    }
    ctx->pc = 0x1FCFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF0u;
        // 0x1fcff4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fcff0:
    ctx->pc = 0x1FCFF8u;
}
