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

// Function: sub_002FC5C0
// Address: 0x2fc5c0 - 0x2fcd90
void sub_002FC5C0_0x2fc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC5C0_0x2fc5c0");
#endif

    switch (ctx->pc) {
        case 0x2fc5c0u: goto label_2fc5c0;
        case 0x2fc5c4u: goto label_2fc5c4;
        case 0x2fc5c8u: goto label_2fc5c8;
        case 0x2fc5ccu: goto label_2fc5cc;
        case 0x2fc5d0u: goto label_2fc5d0;
        case 0x2fc5d4u: goto label_2fc5d4;
        case 0x2fc5d8u: goto label_2fc5d8;
        case 0x2fc5dcu: goto label_2fc5dc;
        case 0x2fc5e0u: goto label_2fc5e0;
        case 0x2fc5e4u: goto label_2fc5e4;
        case 0x2fc5e8u: goto label_2fc5e8;
        case 0x2fc5ecu: goto label_2fc5ec;
        case 0x2fc5f0u: goto label_2fc5f0;
        case 0x2fc5f4u: goto label_2fc5f4;
        case 0x2fc5f8u: goto label_2fc5f8;
        case 0x2fc5fcu: goto label_2fc5fc;
        case 0x2fc600u: goto label_2fc600;
        case 0x2fc604u: goto label_2fc604;
        case 0x2fc608u: goto label_2fc608;
        case 0x2fc60cu: goto label_2fc60c;
        case 0x2fc610u: goto label_2fc610;
        case 0x2fc614u: goto label_2fc614;
        case 0x2fc618u: goto label_2fc618;
        case 0x2fc61cu: goto label_2fc61c;
        case 0x2fc620u: goto label_2fc620;
        case 0x2fc624u: goto label_2fc624;
        case 0x2fc628u: goto label_2fc628;
        case 0x2fc62cu: goto label_2fc62c;
        case 0x2fc630u: goto label_2fc630;
        case 0x2fc634u: goto label_2fc634;
        case 0x2fc638u: goto label_2fc638;
        case 0x2fc63cu: goto label_2fc63c;
        case 0x2fc640u: goto label_2fc640;
        case 0x2fc644u: goto label_2fc644;
        case 0x2fc648u: goto label_2fc648;
        case 0x2fc64cu: goto label_2fc64c;
        case 0x2fc650u: goto label_2fc650;
        case 0x2fc654u: goto label_2fc654;
        case 0x2fc658u: goto label_2fc658;
        case 0x2fc65cu: goto label_2fc65c;
        case 0x2fc660u: goto label_2fc660;
        case 0x2fc664u: goto label_2fc664;
        case 0x2fc668u: goto label_2fc668;
        case 0x2fc66cu: goto label_2fc66c;
        case 0x2fc670u: goto label_2fc670;
        case 0x2fc674u: goto label_2fc674;
        case 0x2fc678u: goto label_2fc678;
        case 0x2fc67cu: goto label_2fc67c;
        case 0x2fc680u: goto label_2fc680;
        case 0x2fc684u: goto label_2fc684;
        case 0x2fc688u: goto label_2fc688;
        case 0x2fc68cu: goto label_2fc68c;
        case 0x2fc690u: goto label_2fc690;
        case 0x2fc694u: goto label_2fc694;
        case 0x2fc698u: goto label_2fc698;
        case 0x2fc69cu: goto label_2fc69c;
        case 0x2fc6a0u: goto label_2fc6a0;
        case 0x2fc6a4u: goto label_2fc6a4;
        case 0x2fc6a8u: goto label_2fc6a8;
        case 0x2fc6acu: goto label_2fc6ac;
        case 0x2fc6b0u: goto label_2fc6b0;
        case 0x2fc6b4u: goto label_2fc6b4;
        case 0x2fc6b8u: goto label_2fc6b8;
        case 0x2fc6bcu: goto label_2fc6bc;
        case 0x2fc6c0u: goto label_2fc6c0;
        case 0x2fc6c4u: goto label_2fc6c4;
        case 0x2fc6c8u: goto label_2fc6c8;
        case 0x2fc6ccu: goto label_2fc6cc;
        case 0x2fc6d0u: goto label_2fc6d0;
        case 0x2fc6d4u: goto label_2fc6d4;
        case 0x2fc6d8u: goto label_2fc6d8;
        case 0x2fc6dcu: goto label_2fc6dc;
        case 0x2fc6e0u: goto label_2fc6e0;
        case 0x2fc6e4u: goto label_2fc6e4;
        case 0x2fc6e8u: goto label_2fc6e8;
        case 0x2fc6ecu: goto label_2fc6ec;
        case 0x2fc6f0u: goto label_2fc6f0;
        case 0x2fc6f4u: goto label_2fc6f4;
        case 0x2fc6f8u: goto label_2fc6f8;
        case 0x2fc6fcu: goto label_2fc6fc;
        case 0x2fc700u: goto label_2fc700;
        case 0x2fc704u: goto label_2fc704;
        case 0x2fc708u: goto label_2fc708;
        case 0x2fc70cu: goto label_2fc70c;
        case 0x2fc710u: goto label_2fc710;
        case 0x2fc714u: goto label_2fc714;
        case 0x2fc718u: goto label_2fc718;
        case 0x2fc71cu: goto label_2fc71c;
        case 0x2fc720u: goto label_2fc720;
        case 0x2fc724u: goto label_2fc724;
        case 0x2fc728u: goto label_2fc728;
        case 0x2fc72cu: goto label_2fc72c;
        case 0x2fc730u: goto label_2fc730;
        case 0x2fc734u: goto label_2fc734;
        case 0x2fc738u: goto label_2fc738;
        case 0x2fc73cu: goto label_2fc73c;
        case 0x2fc740u: goto label_2fc740;
        case 0x2fc744u: goto label_2fc744;
        case 0x2fc748u: goto label_2fc748;
        case 0x2fc74cu: goto label_2fc74c;
        case 0x2fc750u: goto label_2fc750;
        case 0x2fc754u: goto label_2fc754;
        case 0x2fc758u: goto label_2fc758;
        case 0x2fc75cu: goto label_2fc75c;
        case 0x2fc760u: goto label_2fc760;
        case 0x2fc764u: goto label_2fc764;
        case 0x2fc768u: goto label_2fc768;
        case 0x2fc76cu: goto label_2fc76c;
        case 0x2fc770u: goto label_2fc770;
        case 0x2fc774u: goto label_2fc774;
        case 0x2fc778u: goto label_2fc778;
        case 0x2fc77cu: goto label_2fc77c;
        case 0x2fc780u: goto label_2fc780;
        case 0x2fc784u: goto label_2fc784;
        case 0x2fc788u: goto label_2fc788;
        case 0x2fc78cu: goto label_2fc78c;
        case 0x2fc790u: goto label_2fc790;
        case 0x2fc794u: goto label_2fc794;
        case 0x2fc798u: goto label_2fc798;
        case 0x2fc79cu: goto label_2fc79c;
        case 0x2fc7a0u: goto label_2fc7a0;
        case 0x2fc7a4u: goto label_2fc7a4;
        case 0x2fc7a8u: goto label_2fc7a8;
        case 0x2fc7acu: goto label_2fc7ac;
        case 0x2fc7b0u: goto label_2fc7b0;
        case 0x2fc7b4u: goto label_2fc7b4;
        case 0x2fc7b8u: goto label_2fc7b8;
        case 0x2fc7bcu: goto label_2fc7bc;
        case 0x2fc7c0u: goto label_2fc7c0;
        case 0x2fc7c4u: goto label_2fc7c4;
        case 0x2fc7c8u: goto label_2fc7c8;
        case 0x2fc7ccu: goto label_2fc7cc;
        case 0x2fc7d0u: goto label_2fc7d0;
        case 0x2fc7d4u: goto label_2fc7d4;
        case 0x2fc7d8u: goto label_2fc7d8;
        case 0x2fc7dcu: goto label_2fc7dc;
        case 0x2fc7e0u: goto label_2fc7e0;
        case 0x2fc7e4u: goto label_2fc7e4;
        case 0x2fc7e8u: goto label_2fc7e8;
        case 0x2fc7ecu: goto label_2fc7ec;
        case 0x2fc7f0u: goto label_2fc7f0;
        case 0x2fc7f4u: goto label_2fc7f4;
        case 0x2fc7f8u: goto label_2fc7f8;
        case 0x2fc7fcu: goto label_2fc7fc;
        case 0x2fc800u: goto label_2fc800;
        case 0x2fc804u: goto label_2fc804;
        case 0x2fc808u: goto label_2fc808;
        case 0x2fc80cu: goto label_2fc80c;
        case 0x2fc810u: goto label_2fc810;
        case 0x2fc814u: goto label_2fc814;
        case 0x2fc818u: goto label_2fc818;
        case 0x2fc81cu: goto label_2fc81c;
        case 0x2fc820u: goto label_2fc820;
        case 0x2fc824u: goto label_2fc824;
        case 0x2fc828u: goto label_2fc828;
        case 0x2fc82cu: goto label_2fc82c;
        case 0x2fc830u: goto label_2fc830;
        case 0x2fc834u: goto label_2fc834;
        case 0x2fc838u: goto label_2fc838;
        case 0x2fc83cu: goto label_2fc83c;
        case 0x2fc840u: goto label_2fc840;
        case 0x2fc844u: goto label_2fc844;
        case 0x2fc848u: goto label_2fc848;
        case 0x2fc84cu: goto label_2fc84c;
        case 0x2fc850u: goto label_2fc850;
        case 0x2fc854u: goto label_2fc854;
        case 0x2fc858u: goto label_2fc858;
        case 0x2fc85cu: goto label_2fc85c;
        case 0x2fc860u: goto label_2fc860;
        case 0x2fc864u: goto label_2fc864;
        case 0x2fc868u: goto label_2fc868;
        case 0x2fc86cu: goto label_2fc86c;
        case 0x2fc870u: goto label_2fc870;
        case 0x2fc874u: goto label_2fc874;
        case 0x2fc878u: goto label_2fc878;
        case 0x2fc87cu: goto label_2fc87c;
        case 0x2fc880u: goto label_2fc880;
        case 0x2fc884u: goto label_2fc884;
        case 0x2fc888u: goto label_2fc888;
        case 0x2fc88cu: goto label_2fc88c;
        case 0x2fc890u: goto label_2fc890;
        case 0x2fc894u: goto label_2fc894;
        case 0x2fc898u: goto label_2fc898;
        case 0x2fc89cu: goto label_2fc89c;
        case 0x2fc8a0u: goto label_2fc8a0;
        case 0x2fc8a4u: goto label_2fc8a4;
        case 0x2fc8a8u: goto label_2fc8a8;
        case 0x2fc8acu: goto label_2fc8ac;
        case 0x2fc8b0u: goto label_2fc8b0;
        case 0x2fc8b4u: goto label_2fc8b4;
        case 0x2fc8b8u: goto label_2fc8b8;
        case 0x2fc8bcu: goto label_2fc8bc;
        case 0x2fc8c0u: goto label_2fc8c0;
        case 0x2fc8c4u: goto label_2fc8c4;
        case 0x2fc8c8u: goto label_2fc8c8;
        case 0x2fc8ccu: goto label_2fc8cc;
        case 0x2fc8d0u: goto label_2fc8d0;
        case 0x2fc8d4u: goto label_2fc8d4;
        case 0x2fc8d8u: goto label_2fc8d8;
        case 0x2fc8dcu: goto label_2fc8dc;
        case 0x2fc8e0u: goto label_2fc8e0;
        case 0x2fc8e4u: goto label_2fc8e4;
        case 0x2fc8e8u: goto label_2fc8e8;
        case 0x2fc8ecu: goto label_2fc8ec;
        case 0x2fc8f0u: goto label_2fc8f0;
        case 0x2fc8f4u: goto label_2fc8f4;
        case 0x2fc8f8u: goto label_2fc8f8;
        case 0x2fc8fcu: goto label_2fc8fc;
        case 0x2fc900u: goto label_2fc900;
        case 0x2fc904u: goto label_2fc904;
        case 0x2fc908u: goto label_2fc908;
        case 0x2fc90cu: goto label_2fc90c;
        case 0x2fc910u: goto label_2fc910;
        case 0x2fc914u: goto label_2fc914;
        case 0x2fc918u: goto label_2fc918;
        case 0x2fc91cu: goto label_2fc91c;
        case 0x2fc920u: goto label_2fc920;
        case 0x2fc924u: goto label_2fc924;
        case 0x2fc928u: goto label_2fc928;
        case 0x2fc92cu: goto label_2fc92c;
        case 0x2fc930u: goto label_2fc930;
        case 0x2fc934u: goto label_2fc934;
        case 0x2fc938u: goto label_2fc938;
        case 0x2fc93cu: goto label_2fc93c;
        case 0x2fc940u: goto label_2fc940;
        case 0x2fc944u: goto label_2fc944;
        case 0x2fc948u: goto label_2fc948;
        case 0x2fc94cu: goto label_2fc94c;
        case 0x2fc950u: goto label_2fc950;
        case 0x2fc954u: goto label_2fc954;
        case 0x2fc958u: goto label_2fc958;
        case 0x2fc95cu: goto label_2fc95c;
        case 0x2fc960u: goto label_2fc960;
        case 0x2fc964u: goto label_2fc964;
        case 0x2fc968u: goto label_2fc968;
        case 0x2fc96cu: goto label_2fc96c;
        case 0x2fc970u: goto label_2fc970;
        case 0x2fc974u: goto label_2fc974;
        case 0x2fc978u: goto label_2fc978;
        case 0x2fc97cu: goto label_2fc97c;
        case 0x2fc980u: goto label_2fc980;
        case 0x2fc984u: goto label_2fc984;
        case 0x2fc988u: goto label_2fc988;
        case 0x2fc98cu: goto label_2fc98c;
        case 0x2fc990u: goto label_2fc990;
        case 0x2fc994u: goto label_2fc994;
        case 0x2fc998u: goto label_2fc998;
        case 0x2fc99cu: goto label_2fc99c;
        case 0x2fc9a0u: goto label_2fc9a0;
        case 0x2fc9a4u: goto label_2fc9a4;
        case 0x2fc9a8u: goto label_2fc9a8;
        case 0x2fc9acu: goto label_2fc9ac;
        case 0x2fc9b0u: goto label_2fc9b0;
        case 0x2fc9b4u: goto label_2fc9b4;
        case 0x2fc9b8u: goto label_2fc9b8;
        case 0x2fc9bcu: goto label_2fc9bc;
        case 0x2fc9c0u: goto label_2fc9c0;
        case 0x2fc9c4u: goto label_2fc9c4;
        case 0x2fc9c8u: goto label_2fc9c8;
        case 0x2fc9ccu: goto label_2fc9cc;
        case 0x2fc9d0u: goto label_2fc9d0;
        case 0x2fc9d4u: goto label_2fc9d4;
        case 0x2fc9d8u: goto label_2fc9d8;
        case 0x2fc9dcu: goto label_2fc9dc;
        case 0x2fc9e0u: goto label_2fc9e0;
        case 0x2fc9e4u: goto label_2fc9e4;
        case 0x2fc9e8u: goto label_2fc9e8;
        case 0x2fc9ecu: goto label_2fc9ec;
        case 0x2fc9f0u: goto label_2fc9f0;
        case 0x2fc9f4u: goto label_2fc9f4;
        case 0x2fc9f8u: goto label_2fc9f8;
        case 0x2fc9fcu: goto label_2fc9fc;
        case 0x2fca00u: goto label_2fca00;
        case 0x2fca04u: goto label_2fca04;
        case 0x2fca08u: goto label_2fca08;
        case 0x2fca0cu: goto label_2fca0c;
        case 0x2fca10u: goto label_2fca10;
        case 0x2fca14u: goto label_2fca14;
        case 0x2fca18u: goto label_2fca18;
        case 0x2fca1cu: goto label_2fca1c;
        case 0x2fca20u: goto label_2fca20;
        case 0x2fca24u: goto label_2fca24;
        case 0x2fca28u: goto label_2fca28;
        case 0x2fca2cu: goto label_2fca2c;
        case 0x2fca30u: goto label_2fca30;
        case 0x2fca34u: goto label_2fca34;
        case 0x2fca38u: goto label_2fca38;
        case 0x2fca3cu: goto label_2fca3c;
        case 0x2fca40u: goto label_2fca40;
        case 0x2fca44u: goto label_2fca44;
        case 0x2fca48u: goto label_2fca48;
        case 0x2fca4cu: goto label_2fca4c;
        case 0x2fca50u: goto label_2fca50;
        case 0x2fca54u: goto label_2fca54;
        case 0x2fca58u: goto label_2fca58;
        case 0x2fca5cu: goto label_2fca5c;
        case 0x2fca60u: goto label_2fca60;
        case 0x2fca64u: goto label_2fca64;
        case 0x2fca68u: goto label_2fca68;
        case 0x2fca6cu: goto label_2fca6c;
        case 0x2fca70u: goto label_2fca70;
        case 0x2fca74u: goto label_2fca74;
        case 0x2fca78u: goto label_2fca78;
        case 0x2fca7cu: goto label_2fca7c;
        case 0x2fca80u: goto label_2fca80;
        case 0x2fca84u: goto label_2fca84;
        case 0x2fca88u: goto label_2fca88;
        case 0x2fca8cu: goto label_2fca8c;
        case 0x2fca90u: goto label_2fca90;
        case 0x2fca94u: goto label_2fca94;
        case 0x2fca98u: goto label_2fca98;
        case 0x2fca9cu: goto label_2fca9c;
        case 0x2fcaa0u: goto label_2fcaa0;
        case 0x2fcaa4u: goto label_2fcaa4;
        case 0x2fcaa8u: goto label_2fcaa8;
        case 0x2fcaacu: goto label_2fcaac;
        case 0x2fcab0u: goto label_2fcab0;
        case 0x2fcab4u: goto label_2fcab4;
        case 0x2fcab8u: goto label_2fcab8;
        case 0x2fcabcu: goto label_2fcabc;
        case 0x2fcac0u: goto label_2fcac0;
        case 0x2fcac4u: goto label_2fcac4;
        case 0x2fcac8u: goto label_2fcac8;
        case 0x2fcaccu: goto label_2fcacc;
        case 0x2fcad0u: goto label_2fcad0;
        case 0x2fcad4u: goto label_2fcad4;
        case 0x2fcad8u: goto label_2fcad8;
        case 0x2fcadcu: goto label_2fcadc;
        case 0x2fcae0u: goto label_2fcae0;
        case 0x2fcae4u: goto label_2fcae4;
        case 0x2fcae8u: goto label_2fcae8;
        case 0x2fcaecu: goto label_2fcaec;
        case 0x2fcaf0u: goto label_2fcaf0;
        case 0x2fcaf4u: goto label_2fcaf4;
        case 0x2fcaf8u: goto label_2fcaf8;
        case 0x2fcafcu: goto label_2fcafc;
        case 0x2fcb00u: goto label_2fcb00;
        case 0x2fcb04u: goto label_2fcb04;
        case 0x2fcb08u: goto label_2fcb08;
        case 0x2fcb0cu: goto label_2fcb0c;
        case 0x2fcb10u: goto label_2fcb10;
        case 0x2fcb14u: goto label_2fcb14;
        case 0x2fcb18u: goto label_2fcb18;
        case 0x2fcb1cu: goto label_2fcb1c;
        case 0x2fcb20u: goto label_2fcb20;
        case 0x2fcb24u: goto label_2fcb24;
        case 0x2fcb28u: goto label_2fcb28;
        case 0x2fcb2cu: goto label_2fcb2c;
        case 0x2fcb30u: goto label_2fcb30;
        case 0x2fcb34u: goto label_2fcb34;
        case 0x2fcb38u: goto label_2fcb38;
        case 0x2fcb3cu: goto label_2fcb3c;
        case 0x2fcb40u: goto label_2fcb40;
        case 0x2fcb44u: goto label_2fcb44;
        case 0x2fcb48u: goto label_2fcb48;
        case 0x2fcb4cu: goto label_2fcb4c;
        case 0x2fcb50u: goto label_2fcb50;
        case 0x2fcb54u: goto label_2fcb54;
        case 0x2fcb58u: goto label_2fcb58;
        case 0x2fcb5cu: goto label_2fcb5c;
        case 0x2fcb60u: goto label_2fcb60;
        case 0x2fcb64u: goto label_2fcb64;
        case 0x2fcb68u: goto label_2fcb68;
        case 0x2fcb6cu: goto label_2fcb6c;
        case 0x2fcb70u: goto label_2fcb70;
        case 0x2fcb74u: goto label_2fcb74;
        case 0x2fcb78u: goto label_2fcb78;
        case 0x2fcb7cu: goto label_2fcb7c;
        case 0x2fcb80u: goto label_2fcb80;
        case 0x2fcb84u: goto label_2fcb84;
        case 0x2fcb88u: goto label_2fcb88;
        case 0x2fcb8cu: goto label_2fcb8c;
        case 0x2fcb90u: goto label_2fcb90;
        case 0x2fcb94u: goto label_2fcb94;
        case 0x2fcb98u: goto label_2fcb98;
        case 0x2fcb9cu: goto label_2fcb9c;
        case 0x2fcba0u: goto label_2fcba0;
        case 0x2fcba4u: goto label_2fcba4;
        case 0x2fcba8u: goto label_2fcba8;
        case 0x2fcbacu: goto label_2fcbac;
        case 0x2fcbb0u: goto label_2fcbb0;
        case 0x2fcbb4u: goto label_2fcbb4;
        case 0x2fcbb8u: goto label_2fcbb8;
        case 0x2fcbbcu: goto label_2fcbbc;
        case 0x2fcbc0u: goto label_2fcbc0;
        case 0x2fcbc4u: goto label_2fcbc4;
        case 0x2fcbc8u: goto label_2fcbc8;
        case 0x2fcbccu: goto label_2fcbcc;
        case 0x2fcbd0u: goto label_2fcbd0;
        case 0x2fcbd4u: goto label_2fcbd4;
        case 0x2fcbd8u: goto label_2fcbd8;
        case 0x2fcbdcu: goto label_2fcbdc;
        case 0x2fcbe0u: goto label_2fcbe0;
        case 0x2fcbe4u: goto label_2fcbe4;
        case 0x2fcbe8u: goto label_2fcbe8;
        case 0x2fcbecu: goto label_2fcbec;
        case 0x2fcbf0u: goto label_2fcbf0;
        case 0x2fcbf4u: goto label_2fcbf4;
        case 0x2fcbf8u: goto label_2fcbf8;
        case 0x2fcbfcu: goto label_2fcbfc;
        case 0x2fcc00u: goto label_2fcc00;
        case 0x2fcc04u: goto label_2fcc04;
        case 0x2fcc08u: goto label_2fcc08;
        case 0x2fcc0cu: goto label_2fcc0c;
        case 0x2fcc10u: goto label_2fcc10;
        case 0x2fcc14u: goto label_2fcc14;
        case 0x2fcc18u: goto label_2fcc18;
        case 0x2fcc1cu: goto label_2fcc1c;
        case 0x2fcc20u: goto label_2fcc20;
        case 0x2fcc24u: goto label_2fcc24;
        case 0x2fcc28u: goto label_2fcc28;
        case 0x2fcc2cu: goto label_2fcc2c;
        case 0x2fcc30u: goto label_2fcc30;
        case 0x2fcc34u: goto label_2fcc34;
        case 0x2fcc38u: goto label_2fcc38;
        case 0x2fcc3cu: goto label_2fcc3c;
        case 0x2fcc40u: goto label_2fcc40;
        case 0x2fcc44u: goto label_2fcc44;
        case 0x2fcc48u: goto label_2fcc48;
        case 0x2fcc4cu: goto label_2fcc4c;
        case 0x2fcc50u: goto label_2fcc50;
        case 0x2fcc54u: goto label_2fcc54;
        case 0x2fcc58u: goto label_2fcc58;
        case 0x2fcc5cu: goto label_2fcc5c;
        case 0x2fcc60u: goto label_2fcc60;
        case 0x2fcc64u: goto label_2fcc64;
        case 0x2fcc68u: goto label_2fcc68;
        case 0x2fcc6cu: goto label_2fcc6c;
        case 0x2fcc70u: goto label_2fcc70;
        case 0x2fcc74u: goto label_2fcc74;
        case 0x2fcc78u: goto label_2fcc78;
        case 0x2fcc7cu: goto label_2fcc7c;
        case 0x2fcc80u: goto label_2fcc80;
        case 0x2fcc84u: goto label_2fcc84;
        case 0x2fcc88u: goto label_2fcc88;
        case 0x2fcc8cu: goto label_2fcc8c;
        case 0x2fcc90u: goto label_2fcc90;
        case 0x2fcc94u: goto label_2fcc94;
        case 0x2fcc98u: goto label_2fcc98;
        case 0x2fcc9cu: goto label_2fcc9c;
        case 0x2fcca0u: goto label_2fcca0;
        case 0x2fcca4u: goto label_2fcca4;
        case 0x2fcca8u: goto label_2fcca8;
        case 0x2fccacu: goto label_2fccac;
        case 0x2fccb0u: goto label_2fccb0;
        case 0x2fccb4u: goto label_2fccb4;
        case 0x2fccb8u: goto label_2fccb8;
        case 0x2fccbcu: goto label_2fccbc;
        case 0x2fccc0u: goto label_2fccc0;
        case 0x2fccc4u: goto label_2fccc4;
        case 0x2fccc8u: goto label_2fccc8;
        case 0x2fccccu: goto label_2fcccc;
        case 0x2fccd0u: goto label_2fccd0;
        case 0x2fccd4u: goto label_2fccd4;
        case 0x2fccd8u: goto label_2fccd8;
        case 0x2fccdcu: goto label_2fccdc;
        case 0x2fcce0u: goto label_2fcce0;
        case 0x2fcce4u: goto label_2fcce4;
        case 0x2fcce8u: goto label_2fcce8;
        case 0x2fccecu: goto label_2fccec;
        case 0x2fccf0u: goto label_2fccf0;
        case 0x2fccf4u: goto label_2fccf4;
        case 0x2fccf8u: goto label_2fccf8;
        case 0x2fccfcu: goto label_2fccfc;
        case 0x2fcd00u: goto label_2fcd00;
        case 0x2fcd04u: goto label_2fcd04;
        case 0x2fcd08u: goto label_2fcd08;
        case 0x2fcd0cu: goto label_2fcd0c;
        case 0x2fcd10u: goto label_2fcd10;
        case 0x2fcd14u: goto label_2fcd14;
        case 0x2fcd18u: goto label_2fcd18;
        case 0x2fcd1cu: goto label_2fcd1c;
        case 0x2fcd20u: goto label_2fcd20;
        case 0x2fcd24u: goto label_2fcd24;
        case 0x2fcd28u: goto label_2fcd28;
        case 0x2fcd2cu: goto label_2fcd2c;
        case 0x2fcd30u: goto label_2fcd30;
        case 0x2fcd34u: goto label_2fcd34;
        case 0x2fcd38u: goto label_2fcd38;
        case 0x2fcd3cu: goto label_2fcd3c;
        case 0x2fcd40u: goto label_2fcd40;
        case 0x2fcd44u: goto label_2fcd44;
        case 0x2fcd48u: goto label_2fcd48;
        case 0x2fcd4cu: goto label_2fcd4c;
        case 0x2fcd50u: goto label_2fcd50;
        case 0x2fcd54u: goto label_2fcd54;
        case 0x2fcd58u: goto label_2fcd58;
        case 0x2fcd5cu: goto label_2fcd5c;
        case 0x2fcd60u: goto label_2fcd60;
        case 0x2fcd64u: goto label_2fcd64;
        case 0x2fcd68u: goto label_2fcd68;
        case 0x2fcd6cu: goto label_2fcd6c;
        case 0x2fcd70u: goto label_2fcd70;
        case 0x2fcd74u: goto label_2fcd74;
        case 0x2fcd78u: goto label_2fcd78;
        case 0x2fcd7cu: goto label_2fcd7c;
        case 0x2fcd80u: goto label_2fcd80;
        case 0x2fcd84u: goto label_2fcd84;
        case 0x2fcd88u: goto label_2fcd88;
        case 0x2fcd8cu: goto label_2fcd8c;
        default: break;
    }

    ctx->pc = 0x2fc5c0u;

label_2fc5c0:
    // 0x2fc5c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2fc5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2fc5c4:
    // 0x2fc5c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fc5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2fc5c8:
    // 0x2fc5c8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2fc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_2fc5cc:
    // 0x2fc5cc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2fc5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_2fc5d0:
    // 0x2fc5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc5d4:
    // 0x2fc5d4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2fc5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_2fc5d8:
    // 0x2fc5d8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2fc5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_2fc5dc:
    // 0x2fc5dc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2fc5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_2fc5e0:
    // 0x2fc5e0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2fc5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_2fc5e4:
    // 0x2fc5e4: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2fc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_2fc5e8:
    // 0x2fc5e8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2fc5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2fc5ec:
    // 0x2fc5ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2fc5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2fc5f0:
    // 0x2fc5f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2fc5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2fc5f4:
    // 0x2fc5f4: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2fc5f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2fc5f8:
    // 0x2fc5f8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2fc5f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_2fc5fc:
    // 0x2fc5fc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2fc5fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2fc600:
    // 0x2fc600: 0x8c4412b4  lw          $a0, 0x12B4($v0)
    ctx->pc = 0x2fc600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
label_2fc604:
    // 0x2fc604: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fc604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc608:
    // 0x2fc608: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x2fc608u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fc60c:
    // 0x2fc60c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_2fc610:
    if (ctx->pc == 0x2FC610u) {
        ctx->pc = 0x2FC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC60Cu;
        // 0x2fc610: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC614u;
        goto label_2fc614;
    }
    ctx->pc = 0x2FC60Cu;
    {
        const bool branch_taken_0x2fc60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC60Cu;
        // 0x2fc610: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc60c) {
            ctx->pc = 0x2FC638u;
            goto label_2fc638;
        }
    }
    ctx->pc = 0x2FC614u;
label_2fc614:
    // 0x2fc614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fc614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fc618:
    // 0x2fc618: 0xc088edc  jal         func_223B70
label_2fc61c:
    if (ctx->pc == 0x2FC61Cu) {
        ctx->pc = 0x2FC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC618u;
        // 0x2fc61c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC620u;
        goto label_2fc620;
    }
    ctx->pc = 0x2FC618u;
    SET_GPR_U32(ctx, 31, 0x2FC620u);
    ctx->pc = 0x2FC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC618u;
    // 0x2fc61c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2FC618u, 0x2FC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC620u;
label_2fc620:
    // 0x2fc620: 0x105001cc  beq         $v0, $s0, . + 4 + (0x1CC << 2)
label_2fc624:
    if (ctx->pc == 0x2FC624u) {
        ctx->pc = 0x2FC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC620u;
        // 0x2fc624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC628u;
        goto label_2fc628;
    }
    ctx->pc = 0x2FC620u;
    {
        const bool branch_taken_0x2fc620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC620u;
        // 0x2fc624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc620) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC628u;
label_2fc628:
    // 0x2fc628: 0xc088f2c  jal         func_223CB0
label_2fc62c:
    if (ctx->pc == 0x2FC62Cu) {
        ctx->pc = 0x2FC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC628u;
        // 0x2fc62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC630u;
        goto label_2fc630;
    }
    ctx->pc = 0x2FC628u;
    SET_GPR_U32(ctx, 31, 0x2FC630u);
    ctx->pc = 0x2FC62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC628u;
    // 0x2fc62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x2FC628u, 0x2FC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC630u;
label_2fc630:
    // 0x2fc630: 0x105001c8  beq         $v0, $s0, . + 4 + (0x1C8 << 2)
label_2fc634:
    if (ctx->pc == 0x2FC634u) {
        ctx->pc = 0x2FC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC630u;
        // 0x2fc634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC638u;
        goto label_2fc638;
    }
    ctx->pc = 0x2FC630u;
    {
        const bool branch_taken_0x2fc630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC630u;
        // 0x2fc634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc630) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC638u;
label_2fc638:
    // 0x2fc638: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x2fc638u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_2fc63c:
    // 0x2fc63c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fc63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2fc640:
    // 0x2fc640: 0x31a7c  dsll32      $v1, $v1, 9
    ctx->pc = 0x2fc640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 9));
label_2fc644:
    // 0x2fc644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fc644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fc648:
    // 0x2fc648: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2fc64c:
    if (ctx->pc == 0x2FC64Cu) {
        ctx->pc = 0x2FC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC648u;
        // 0x2fc64c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC650u;
        goto label_2fc650;
    }
    ctx->pc = 0x2FC648u;
    {
        const bool branch_taken_0x2fc648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc648) {
            ctx->pc = 0x2FC64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC648u;
            // 0x2fc64c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC658u;
            goto label_2fc658;
        }
    }
    ctx->pc = 0x2FC650u;
label_2fc650:
    // 0x2fc650: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_2fc654:
    if (ctx->pc == 0x2FC654u) {
        ctx->pc = 0x2FC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC650u;
        // 0x2fc654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC658u;
        goto label_2fc658;
    }
    ctx->pc = 0x2FC650u;
    {
        const bool branch_taken_0x2fc650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC650u;
        // 0x2fc654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc650) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC658u;
label_2fc658:
    // 0x2fc658: 0x245400a0  addiu       $s4, $v0, 0xA0
    ctx->pc = 0x2fc658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_2fc65c:
    // 0x2fc65c: 0xc0a22d6  jal         func_288B58
label_2fc660:
    if (ctx->pc == 0x2FC660u) {
        ctx->pc = 0x2FC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC65Cu;
        // 0x2fc660: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC664u;
        goto label_2fc664;
    }
    ctx->pc = 0x2FC65Cu;
    SET_GPR_U32(ctx, 31, 0x2FC664u);
    ctx->pc = 0x2FC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC65Cu;
    // 0x2fc660: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B58u, 0x2FC65Cu, 0x2FC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC664u;
label_2fc664:
    // 0x2fc664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fc664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc668:
    // 0x2fc668: 0x104501ba  beq         $v0, $a1, . + 4 + (0x1BA << 2)
label_2fc66c:
    if (ctx->pc == 0x2FC66Cu) {
        ctx->pc = 0x2FC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC668u;
        // 0x2fc66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC670u;
        goto label_2fc670;
    }
    ctx->pc = 0x2FC668u;
    {
        const bool branch_taken_0x2fc668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2FC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC668u;
        // 0x2fc66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc668) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC670u;
label_2fc670:
    // 0x2fc670: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fc670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc674:
    // 0x2fc674: 0x9062011d  lbu         $v0, 0x11D($v1)
    ctx->pc = 0x2fc674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 285)));
label_2fc678:
    // 0x2fc678: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2fc678u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fc67c:
    // 0x2fc67c: 0x14850010  bne         $a0, $a1, . + 4 + (0x10 << 2)
label_2fc680:
    if (ctx->pc == 0x2FC680u) {
        ctx->pc = 0x2FC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC67Cu;
        // 0x2fc680: 0x247300e0  addiu       $s3, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC684u;
        goto label_2fc684;
    }
    ctx->pc = 0x2FC67Cu;
    {
        const bool branch_taken_0x2fc67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2FC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC67Cu;
        // 0x2fc680: 0x247300e0  addiu       $s3, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc67c) {
            ctx->pc = 0x2FC6C0u;
            goto label_2fc6c0;
        }
    }
    ctx->pc = 0x2FC684u;
label_2fc684:
    // 0x2fc684: 0xa220004c  sb          $zero, 0x4C($s1)
    ctx->pc = 0x2fc684u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 0));
label_2fc688:
    // 0x2fc688: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2fc688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
label_2fc68c:
    // 0x2fc68c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x2fc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2fc690:
    // 0x2fc690: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fc690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fc694:
    // 0x2fc694: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
label_2fc698:
    if (ctx->pc == 0x2FC698u) {
        ctx->pc = 0x2FC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC694u;
        // 0x2fc698: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC69Cu;
        goto label_2fc69c;
    }
    ctx->pc = 0x2FC694u;
    {
        const bool branch_taken_0x2fc694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fc694) {
            ctx->pc = 0x2FC698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC694u;
            // 0x2fc698: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC6ACu;
            goto label_2fc6ac;
        }
    }
    ctx->pc = 0x2FC69Cu;
label_2fc69c:
    // 0x2fc69c: 0xc0a22b4  jal         func_288AD0
label_2fc6a0:
    if (ctx->pc == 0x2FC6A0u) {
        ctx->pc = 0x2FC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC69Cu;
        // 0x2fc6a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6A4u;
        goto label_2fc6a4;
    }
    ctx->pc = 0x2FC69Cu;
    SET_GPR_U32(ctx, 31, 0x2FC6A4u);
    ctx->pc = 0x2FC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC69Cu;
    // 0x2fc6a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AD0u, 0x2FC69Cu, 0x2FC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC6A4u;
label_2fc6a4:
    // 0x2fc6a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fc6a8:
    if (ctx->pc == 0x2FC6A8u) {
        ctx->pc = 0x2FC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6A4u;
        // 0x2fc6a8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6ACu;
        goto label_2fc6ac;
    }
    ctx->pc = 0x2FC6A4u;
    {
        const bool branch_taken_0x2fc6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6A4u;
        // 0x2fc6a8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6a4) {
            ctx->pc = 0x2FC6C4u;
            goto label_2fc6c4;
        }
    }
    ctx->pc = 0x2FC6ACu;
label_2fc6ac:
    // 0x2fc6ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fc6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fc6b0:
    // 0x2fc6b0: 0x144401a8  bne         $v0, $a0, . + 4 + (0x1A8 << 2)
label_2fc6b4:
    if (ctx->pc == 0x2FC6B4u) {
        ctx->pc = 0x2FC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6B0u;
        // 0x2fc6b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6B8u;
        goto label_2fc6b8;
    }
    ctx->pc = 0x2FC6B0u;
    {
        const bool branch_taken_0x2fc6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6B0u;
        // 0x2fc6b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6b0) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC6B8u;
label_2fc6b8:
    // 0x2fc6b8: 0xc0a6a9e  jal         func_29AA78
label_2fc6bc:
    if (ctx->pc == 0x2FC6BCu) {
        ctx->pc = 0x2FC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6B8u;
        // 0x2fc6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6C0u;
        goto label_2fc6c0;
    }
    ctx->pc = 0x2FC6B8u;
    SET_GPR_U32(ctx, 31, 0x2FC6C0u);
    ctx->pc = 0x2FC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC6B8u;
    // 0x2fc6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AA78u, 0x2FC6B8u, 0x2FC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC6C0u;
label_2fc6c0:
    // 0x2fc6c0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2fc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2fc6c4:
    // 0x2fc6c4: 0x26b60090  addiu       $s6, $s5, 0x90
    ctx->pc = 0x2fc6c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_2fc6c8:
    // 0x2fc6c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2fc6cc:
    if (ctx->pc == 0x2FC6CCu) {
        ctx->pc = 0x2FC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6C8u;
        // 0x2fc6cc: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6D0u;
        goto label_2fc6d0;
    }
    ctx->pc = 0x2FC6C8u;
    {
        const bool branch_taken_0x2fc6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6C8u;
        // 0x2fc6cc: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6c8) {
            ctx->pc = 0x2FC720u;
            goto label_2fc720;
        }
    }
    ctx->pc = 0x2FC6D0u;
label_2fc6d0:
    // 0x2fc6d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc6d4:
    // 0x2fc6d4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2fc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2fc6d8:
    // 0x2fc6d8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2fc6dc:
    if (ctx->pc == 0x2FC6DCu) {
        ctx->pc = 0x2FC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6D8u;
        // 0x2fc6dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6E0u;
        goto label_2fc6e0;
    }
    ctx->pc = 0x2FC6D8u;
    {
        const bool branch_taken_0x2fc6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc6d8) {
            ctx->pc = 0x2FC6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC6D8u;
            // 0x2fc6dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC6E0u;
            goto label_2fc6e0;
        }
    }
    ctx->pc = 0x2FC6E0u;
label_2fc6e0:
    // 0x2fc6e0: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x2fc6e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2fc6e4:
    // 0x2fc6e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2fc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2fc6e8:
    // 0x2fc6e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fc6ec:
    // 0x2fc6ec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2fc6ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2fc6f0:
    // 0x2fc6f0: 0x1810  mfhi        $v1
    ctx->pc = 0x2fc6f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2fc6f4:
    // 0x2fc6f4: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_2fc6f8:
    if (ctx->pc == 0x2FC6F8u) {
        ctx->pc = 0x2FC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6F4u;
        // 0x2fc6f8: 0x86c40002  lh          $a0, 0x2($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC6FCu;
        goto label_2fc6fc;
    }
    ctx->pc = 0x2FC6F4u;
    {
        const bool branch_taken_0x2fc6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc6f4) {
            ctx->pc = 0x2FC6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC6F4u;
            // 0x2fc6f8: 0x86c40002  lh          $a0, 0x2($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC724u;
            goto label_2fc724;
        }
    }
    ctx->pc = 0x2FC6FCu;
label_2fc6fc:
    // 0x2fc6fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fc6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fc700:
    // 0x2fc700: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2fc700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fc704:
    // 0x2fc704: 0xc088878  jal         func_2221E0
label_2fc708:
    if (ctx->pc == 0x2FC708u) {
        ctx->pc = 0x2FC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC704u;
        // 0x2fc708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC70Cu;
        goto label_2fc70c;
    }
    ctx->pc = 0x2FC704u;
    SET_GPR_U32(ctx, 31, 0x2FC70Cu);
    ctx->pc = 0x2FC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC704u;
    // 0x2fc708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2FC704u, 0x2FC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC70Cu;
label_2fc70c:
    // 0x2fc70c: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
label_2fc710:
    if (ctx->pc == 0x2FC710u) {
        ctx->pc = 0x2FC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC70Cu;
        // 0x2fc710: 0x86c40002  lh          $a0, 0x2($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC714u;
        goto label_2fc714;
    }
    ctx->pc = 0x2FC70Cu;
    {
        const bool branch_taken_0x2fc70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2fc70c) {
            ctx->pc = 0x2FC710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC70Cu;
            // 0x2fc710: 0x86c40002  lh          $a0, 0x2($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC724u;
            goto label_2fc724;
        }
    }
    ctx->pc = 0x2FC714u;
label_2fc714:
    // 0x2fc714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fc714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fc718:
    // 0x2fc718: 0xc0a6a88  jal         func_29AA20
label_2fc71c:
    if (ctx->pc == 0x2FC71Cu) {
        ctx->pc = 0x2FC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC718u;
        // 0x2fc71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC720u;
        goto label_2fc720;
    }
    ctx->pc = 0x2FC718u;
    SET_GPR_U32(ctx, 31, 0x2FC720u);
    ctx->pc = 0x2FC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC718u;
    // 0x2fc71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AA20u, 0x2FC718u, 0x2FC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC720u;
label_2fc720:
    // 0x2fc720: 0x86c40002  lh          $a0, 0x2($s6)
    ctx->pc = 0x2fc720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2fc724:
    // 0x2fc724: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2fc724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2fc728:
    // 0x2fc728: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2fc728u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fc72c:
    // 0x2fc72c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2fc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2fc730:
    // 0x2fc730: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fc730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2fc734:
    // 0x2fc734: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fc734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2fc738:
    // 0x2fc738: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2fc738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc73c:
    // 0x2fc73c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2fc73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2fc740:
    // 0x2fc740: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2fc740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2fc744:
    // 0x2fc744: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2fc748:
    if (ctx->pc == 0x2FC748u) {
        ctx->pc = 0x2FC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC744u;
        // 0x2fc748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC74Cu;
        goto label_2fc74c;
    }
    ctx->pc = 0x2FC744u;
    {
        const bool branch_taken_0x2fc744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC744u;
        // 0x2fc748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc744) {
            ctx->pc = 0x2FC758u;
            goto label_2fc758;
        }
    }
    ctx->pc = 0x2FC74Cu;
label_2fc74c:
    // 0x2fc74c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2fc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2fc750:
    // 0x2fc750: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2fc754:
    if (ctx->pc == 0x2FC754u) {
        ctx->pc = 0x2FC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC750u;
        // 0x2fc754: 0x96820032  lhu         $v0, 0x32($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC758u;
        goto label_2fc758;
    }
    ctx->pc = 0x2FC750u;
    {
        const bool branch_taken_0x2fc750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc750) {
            ctx->pc = 0x2FC754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC750u;
            // 0x2fc754: 0x96820032  lhu         $v0, 0x32($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC77Cu;
            goto label_2fc77c;
        }
    }
    ctx->pc = 0x2FC758u;
label_2fc758:
    // 0x2fc758: 0xc0cdb38  jal         func_336CE0
label_2fc75c:
    if (ctx->pc == 0x2FC75Cu) {
        ctx->pc = 0x2FC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC758u;
        // 0x2fc75c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC760u;
        goto label_2fc760;
    }
    ctx->pc = 0x2FC758u;
    SET_GPR_U32(ctx, 31, 0x2FC760u);
    ctx->pc = 0x2FC75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC758u;
    // 0x2fc75c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FC758u, 0x2FC760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC760u;
label_2fc760:
    // 0x2fc760: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2fc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc764:
    // 0x2fc764: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2fc764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2fc768:
    // 0x2fc768: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2fc768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc76c:
    // 0x2fc76c: 0x0  nop
    ctx->pc = 0x2fc76cu;
    // NOP
label_2fc770:
    // 0x2fc770: 0x45010178  bc1t        . + 4 + (0x178 << 2)
label_2fc774:
    if (ctx->pc == 0x2FC774u) {
        ctx->pc = 0x2FC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC770u;
        // 0x2fc774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC778u;
        goto label_2fc778;
    }
    ctx->pc = 0x2FC770u;
    {
        const bool branch_taken_0x2fc770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC770u;
        // 0x2fc774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc770) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC778u;
label_2fc778:
    // 0x2fc778: 0x96820032  lhu         $v0, 0x32($s4)
    ctx->pc = 0x2fc778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_2fc77c:
    // 0x2fc77c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2fc780:
    if (ctx->pc == 0x2FC780u) {
        ctx->pc = 0x2FC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC77Cu;
        // 0x2fc780: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC784u;
        goto label_2fc784;
    }
    ctx->pc = 0x2FC77Cu;
    {
        const bool branch_taken_0x2fc77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc77c) {
            ctx->pc = 0x2FC780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC77Cu;
            // 0x2fc780: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC788u;
            goto label_2fc788;
        }
    }
    ctx->pc = 0x2FC784u;
label_2fc784:
    // 0x2fc784: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x2fc784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc788:
    // 0x2fc788: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fc788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2fc78c:
    // 0x2fc78c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2fc790:
    // 0x2fc790: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2fc794:
    if (ctx->pc == 0x2FC794u) {
        ctx->pc = 0x2FC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC790u;
        // 0x2fc794: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC798u;
        goto label_2fc798;
    }
    ctx->pc = 0x2FC790u;
    {
        const bool branch_taken_0x2fc790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC790u;
        // 0x2fc794: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc790) {
            ctx->pc = 0x2FC7D8u;
            goto label_2fc7d8;
        }
    }
    ctx->pc = 0x2FC798u;
label_2fc798:
    // 0x2fc798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fc798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fc79c:
    // 0x2fc79c: 0xc0a6aa2  jal         func_29AA88
label_2fc7a0:
    if (ctx->pc == 0x2FC7A0u) {
        ctx->pc = 0x2FC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC79Cu;
        // 0x2fc7a0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7A4u;
        goto label_2fc7a4;
    }
    ctx->pc = 0x2FC79Cu;
    SET_GPR_U32(ctx, 31, 0x2FC7A4u);
    ctx->pc = 0x2FC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC79Cu;
    // 0x2fc7a0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AA88u, 0x2FC79Cu, 0x2FC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7A4u;
label_2fc7a4:
    // 0x2fc7a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fc7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc7a8:
    // 0x2fc7a8: 0x5470016b  bnel        $v1, $s0, . + 4 + (0x16B << 2)
label_2fc7ac:
    if (ctx->pc == 0x2FC7ACu) {
        ctx->pc = 0x2FC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7A8u;
        // 0x2fc7ac: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7B0u;
        goto label_2fc7b0;
    }
    ctx->pc = 0x2FC7A8u;
    {
        const bool branch_taken_0x2fc7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2fc7a8) {
            ctx->pc = 0x2FC7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC7A8u;
            // 0x2fc7ac: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD58u;
            goto label_2fcd58;
        }
    }
    ctx->pc = 0x2FC7B0u;
label_2fc7b0:
    // 0x2fc7b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2fc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2fc7b4:
    // 0x2fc7b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fc7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fc7b8:
    // 0x2fc7b8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_2fc7bc:
    if (ctx->pc == 0x2FC7BCu) {
        ctx->pc = 0x2FC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7B8u;
        // 0x2fc7bc: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7C0u;
        goto label_2fc7c0;
    }
    ctx->pc = 0x2FC7B8u;
    {
        const bool branch_taken_0x2fc7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc7b8) {
            ctx->pc = 0x2FC7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC7B8u;
            // 0x2fc7bc: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC7DCu;
            goto label_2fc7dc;
        }
    }
    ctx->pc = 0x2FC7C0u;
label_2fc7c0:
    // 0x2fc7c0: 0xc6750008  lwc1        $f21, 0x8($s3)
    ctx->pc = 0x2fc7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2fc7c4:
    // 0x2fc7c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fc7c8:
    // 0x2fc7c8: 0xc0a68f0  jal         func_29A3C0
label_2fc7cc:
    if (ctx->pc == 0x2FC7CCu) {
        ctx->pc = 0x2FC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7C8u;
        // 0x2fc7cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7D0u;
        goto label_2fc7d0;
    }
    ctx->pc = 0x2FC7C8u;
    SET_GPR_U32(ctx, 31, 0x2FC7D0u);
    ctx->pc = 0x2FC7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC7C8u;
    // 0x2fc7cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x2FC7C8u, 0x2FC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7D0u;
label_2fc7d0:
    // 0x2fc7d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fc7d4:
    if (ctx->pc == 0x2FC7D4u) {
        ctx->pc = 0x2FC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7D0u;
        // 0x2fc7d4: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7D8u;
        goto label_2fc7d8;
    }
    ctx->pc = 0x2FC7D0u;
    {
        const bool branch_taken_0x2fc7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7D0u;
        // 0x2fc7d4: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc7d0) {
            ctx->pc = 0x2FC7E0u;
            goto label_2fc7e0;
        }
    }
    ctx->pc = 0x2FC7D8u;
label_2fc7d8:
    // 0x2fc7d8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2fc7d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2fc7dc:
    // 0x2fc7dc: 0xc635002c  lwc1        $f21, 0x2C($s1)
    ctx->pc = 0x2fc7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2fc7e0:
    // 0x2fc7e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fc7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2fc7e4:
    // 0x2fc7e4: 0xc0a2acc  jal         func_28AB30
label_2fc7e8:
    if (ctx->pc == 0x2FC7E8u) {
        ctx->pc = 0x2FC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7E4u;
        // 0x2fc7e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7ECu;
        goto label_2fc7ec;
    }
    ctx->pc = 0x2FC7E4u;
    SET_GPR_U32(ctx, 31, 0x2FC7ECu);
    ctx->pc = 0x2FC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC7E4u;
    // 0x2fc7e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x2FC7E4u, 0x2FC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7ECu;
label_2fc7ec:
    // 0x2fc7ec: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2fc7f0:
    if (ctx->pc == 0x2FC7F0u) {
        ctx->pc = 0x2FC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7ECu;
        // 0x2fc7f0: 0x9222004d  lbu         $v0, 0x4D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC7F4u;
        goto label_2fc7f4;
    }
    ctx->pc = 0x2FC7ECu;
    {
        const bool branch_taken_0x2fc7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc7ec) {
            ctx->pc = 0x2FC7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC7ECu;
            // 0x2fc7f0: 0x9222004d  lbu         $v0, 0x4D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC854u;
            goto label_2fc854;
        }
    }
    ctx->pc = 0x2FC7F4u;
label_2fc7f4:
    // 0x2fc7f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fc7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fc7f8:
    // 0x2fc7f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fc7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fc7fc:
    // 0x2fc7fc: 0xc105062  jal         func_414188
label_2fc800:
    if (ctx->pc == 0x2FC800u) {
        ctx->pc = 0x2FC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7FCu;
        // 0x2fc800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC804u;
        goto label_2fc804;
    }
    ctx->pc = 0x2FC7FCu;
    SET_GPR_U32(ctx, 31, 0x2FC804u);
    ctx->pc = 0x2FC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC7FCu;
    // 0x2fc800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414188u, 0x2FC7FCu, 0x2FC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC804u;
label_2fc804:
    // 0x2fc804: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2fc808:
    if (ctx->pc == 0x2FC808u) {
        ctx->pc = 0x2FC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC804u;
        // 0x2fc808: 0x9222004d  lbu         $v0, 0x4D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC80Cu;
        goto label_2fc80c;
    }
    ctx->pc = 0x2FC804u;
    {
        const bool branch_taken_0x2fc804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc804) {
            ctx->pc = 0x2FC808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC804u;
            // 0x2fc808: 0x9222004d  lbu         $v0, 0x4D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC854u;
            goto label_2fc854;
        }
    }
    ctx->pc = 0x2FC80Cu;
label_2fc80c:
    // 0x2fc80c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2fc80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2fc810:
    // 0x2fc810: 0xc0a22d0  jal         func_288B40
label_2fc814:
    if (ctx->pc == 0x2FC814u) {
        ctx->pc = 0x2FC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC810u;
        // 0x2fc814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC818u;
        goto label_2fc818;
    }
    ctx->pc = 0x2FC810u;
    SET_GPR_U32(ctx, 31, 0x2FC818u);
    ctx->pc = 0x2FC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC810u;
    // 0x2fc814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B40u, 0x2FC810u, 0x2FC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC818u;
label_2fc818:
    // 0x2fc818: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fc81c:
    // 0x2fc81c: 0xc0a2aca  jal         func_28AB28
label_2fc820:
    if (ctx->pc == 0x2FC820u) {
        ctx->pc = 0x2FC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC81Cu;
        // 0x2fc820: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC824u;
        goto label_2fc824;
    }
    ctx->pc = 0x2FC81Cu;
    SET_GPR_U32(ctx, 31, 0x2FC824u);
    ctx->pc = 0x2FC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC81Cu;
    // 0x2fc820: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB28u, 0x2FC81Cu, 0x2FC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC824u;
label_2fc824:
    // 0x2fc824: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fc824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fc828:
    // 0x2fc828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fc828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc82c:
    // 0x2fc82c: 0xc136afa  jal         func_4DABE8
label_2fc830:
    if (ctx->pc == 0x2FC830u) {
        ctx->pc = 0x2FC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC82Cu;
        // 0x2fc830: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC834u;
        goto label_2fc834;
    }
    ctx->pc = 0x2FC82Cu;
    SET_GPR_U32(ctx, 31, 0x2FC834u);
    ctx->pc = 0x2FC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC82Cu;
    // 0x2fc830: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FC82Cu, 0x2FC834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC834u;
label_2fc834:
    // 0x2fc834: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2fc834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fc838:
    // 0x2fc838: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fc838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fc83c:
    // 0x2fc83c: 0xc0cd766  jal         func_335D98
label_2fc840:
    if (ctx->pc == 0x2FC840u) {
        ctx->pc = 0x2FC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC83Cu;
        // 0x2fc840: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC844u;
        goto label_2fc844;
    }
    ctx->pc = 0x2FC83Cu;
    SET_GPR_U32(ctx, 31, 0x2FC844u);
    ctx->pc = 0x2FC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC83Cu;
    // 0x2fc840: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FC83Cu, 0x2FC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC844u;
label_2fc844:
    // 0x2fc844: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fc844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc848:
    // 0x2fc848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc84c:
    // 0x2fc84c: 0x10000141  b           . + 4 + (0x141 << 2)
label_2fc850:
    if (ctx->pc == 0x2FC850u) {
        ctx->pc = 0x2FC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC84Cu;
        // 0x2fc850: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC854u;
        goto label_2fc854;
    }
    ctx->pc = 0x2FC84Cu;
    {
        const bool branch_taken_0x2fc84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC84Cu;
        // 0x2fc850: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc84c) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC854u;
label_2fc854:
    // 0x2fc854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fc858:
    // 0x2fc858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fc858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2fc85c:
    // 0x2fc85c: 0x2c63001f  sltiu       $v1, $v1, 0x1F
    ctx->pc = 0x2fc85cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2fc860:
    // 0x2fc860: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2fc864:
    if (ctx->pc == 0x2FC864u) {
        ctx->pc = 0x2FC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC860u;
        // 0x2fc864: 0xa222004d  sb          $v0, 0x4D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC868u;
        goto label_2fc868;
    }
    ctx->pc = 0x2FC860u;
    {
        const bool branch_taken_0x2fc860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC860u;
        // 0x2fc864: 0xa222004d  sb          $v0, 0x4D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc860) {
            ctx->pc = 0x2FC884u;
            goto label_2fc884;
        }
    }
    ctx->pc = 0x2FC868u;
label_2fc868:
    // 0x2fc868: 0xa220004d  sb          $zero, 0x4D($s1)
    ctx->pc = 0x2fc868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 0));
label_2fc86c:
    // 0x2fc86c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fc86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fc870:
    // 0x2fc870: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fc870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fc874:
    // 0x2fc874: 0xc088878  jal         func_2221E0
label_2fc878:
    if (ctx->pc == 0x2FC878u) {
        ctx->pc = 0x2FC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC874u;
        // 0x2fc878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC87Cu;
        goto label_2fc87c;
    }
    ctx->pc = 0x2FC874u;
    SET_GPR_U32(ctx, 31, 0x2FC87Cu);
    ctx->pc = 0x2FC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC874u;
    // 0x2fc878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2FC874u, 0x2FC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC87Cu;
label_2fc87c:
    // 0x2fc87c: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_2fc880:
    if (ctx->pc == 0x2FC880u) {
        ctx->pc = 0x2FC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC87Cu;
        // 0x2fc880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC884u;
        goto label_2fc884;
    }
    ctx->pc = 0x2FC87Cu;
    {
        const bool branch_taken_0x2fc87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC87Cu;
        // 0x2fc880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc87c) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC884u;
label_2fc884:
    // 0x2fc884: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fc884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fc888:
    // 0x2fc888: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fc888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fc88c:
    // 0x2fc88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fc890:
    // 0x2fc890: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fc890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2fc894:
    // 0x2fc894: 0xc136afa  jal         func_4DABE8
label_2fc898:
    if (ctx->pc == 0x2FC898u) {
        ctx->pc = 0x2FC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC894u;
        // 0x2fc898: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC89Cu;
        goto label_2fc89c;
    }
    ctx->pc = 0x2FC894u;
    SET_GPR_U32(ctx, 31, 0x2FC89Cu);
    ctx->pc = 0x2FC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC894u;
    // 0x2fc898: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FC894u, 0x2FC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC89Cu;
label_2fc89c:
    // 0x2fc89c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2fc89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fc8a0:
    // 0x2fc8a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fc8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2fc8a4:
    // 0x2fc8a4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2fc8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc8a8:
    // 0x2fc8a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2fc8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc8ac:
    // 0x2fc8ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2fc8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2fc8b0:
    // 0x2fc8b0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2fc8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fc8b4:
    // 0x2fc8b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2fc8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2fc8b8:
    // 0x2fc8b8: 0x92b70333  lbu         $s7, 0x333($s5)
    ctx->pc = 0x2fc8b8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 819)));
label_2fc8bc:
    // 0x2fc8bc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2fc8bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2fc8c0:
    // 0x2fc8c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fc8c4:
    // 0x2fc8c4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2fc8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc8c8:
    // 0x2fc8c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2fc8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2fc8cc:
    // 0x2fc8cc: 0x0  nop
    ctx->pc = 0x2fc8ccu;
    // NOP
label_2fc8d0:
    // 0x2fc8d0: 0x0  nop
    ctx->pc = 0x2fc8d0u;
    // NOP
label_2fc8d4:
    // 0x2fc8d4: 0x46000504  c1          0x504
    ctx->pc = 0x2fc8d4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2fc8d8:
    // 0x2fc8d8: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_2fc8dc:
    if (ctx->pc == 0x2FC8DCu) {
        ctx->pc = 0x2FC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8D8u;
        // 0x2fc8dc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC8E0u;
        goto label_2fc8e0;
    }
    ctx->pc = 0x2FC8D8u;
    {
        const bool branch_taken_0x2fc8d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8D8u;
        // 0x2fc8dc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8d8) {
            ctx->pc = 0x2FC988u;
            goto label_2fc988;
        }
    }
    ctx->pc = 0x2FC8E0u;
label_2fc8e0:
    // 0x2fc8e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2fc8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2fc8e4:
    // 0x2fc8e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc8e8:
    // 0x2fc8e8: 0x0  nop
    ctx->pc = 0x2fc8e8u;
    // NOP
label_2fc8ec:
    // 0x2fc8ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2fc8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc8f0:
    // 0x2fc8f0: 0x0  nop
    ctx->pc = 0x2fc8f0u;
    // NOP
label_2fc8f4:
    // 0x2fc8f4: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_2fc8f8:
    if (ctx->pc == 0x2FC8F8u) {
        ctx->pc = 0x2FC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8F4u;
        // 0x2fc8f8: 0xc62c002c  lwc1        $f12, 0x2C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC8FCu;
        goto label_2fc8fc;
    }
    ctx->pc = 0x2FC8F4u;
    {
        const bool branch_taken_0x2fc8f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc8f4) {
            ctx->pc = 0x2FC8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC8F4u;
            // 0x2fc8f8: 0xc62c002c  lwc1        $f12, 0x2C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC98Cu;
            goto label_2fc98c;
        }
    }
    ctx->pc = 0x2FC8FCu;
label_2fc8fc:
    // 0x2fc8fc: 0xc089fe4  jal         func_227F90
label_2fc900:
    if (ctx->pc == 0x2FC900u) {
        ctx->pc = 0x2FC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8FCu;
        // 0x2fc900: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC904u;
        goto label_2fc904;
    }
    ctx->pc = 0x2FC8FCu;
    SET_GPR_U32(ctx, 31, 0x2FC904u);
    ctx->pc = 0x2FC900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC8FCu;
    // 0x2fc900: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x2FC8FCu, 0x2FC904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC904u;
label_2fc904:
    // 0x2fc904: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_2fc908:
    if (ctx->pc == 0x2FC908u) {
        ctx->pc = 0x2FC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC904u;
        // 0x2fc908: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC90Cu;
        goto label_2fc90c;
    }
    ctx->pc = 0x2FC904u;
    {
        const bool branch_taken_0x2fc904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc904) {
            ctx->pc = 0x2FC908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC904u;
            // 0x2fc908: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC988u;
            goto label_2fc988;
        }
    }
    ctx->pc = 0x2FC90Cu;
label_2fc90c:
    // 0x2fc90c: 0x0  nop
    ctx->pc = 0x2fc90cu;
    // NOP
label_2fc910:
    // 0x2fc910: 0x0  nop
    ctx->pc = 0x2fc910u;
    // NOP
label_2fc914:
    // 0x2fc914: 0x4614b303  div.s       $f12, $f22, $f20
    ctx->pc = 0x2fc914u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
label_2fc918:
    // 0x2fc918: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fc918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fc91c:
    // 0x2fc91c: 0xc136b24  jal         func_4DAC90
label_2fc920:
    if (ctx->pc == 0x2FC920u) {
        ctx->pc = 0x2FC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC91Cu;
        // 0x2fc920: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC924u;
        goto label_2fc924;
    }
    ctx->pc = 0x2FC91Cu;
    SET_GPR_U32(ctx, 31, 0x2FC924u);
    ctx->pc = 0x2FC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC91Cu;
    // 0x2fc920: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2FC91Cu, 0x2FC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC924u;
label_2fc924:
    // 0x2fc924: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2fc928:
    // 0x2fc928: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x2fc928u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fc92c:
    // 0x2fc92c: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2fc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_2fc930:
    // 0x2fc930: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x2fc930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
label_2fc934:
    // 0x2fc934: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x2fc934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_2fc938:
    // 0x2fc938: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fc938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fc93c:
    // 0x2fc93c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fc93cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fc940:
    // 0x2fc940: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2fc940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2fc944:
    // 0x2fc944: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2fc944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2fc948:
    // 0x2fc948: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2fc948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fc94c:
    // 0x2fc94c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fc94cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fc950:
    // 0x2fc950: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fc950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fc954:
    // 0x2fc954: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2fc954u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fc958:
    // 0x2fc958: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2fc958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fc95c:
    // 0x2fc95c: 0xc12e29c  jal         func_4B8A70
label_2fc960:
    if (ctx->pc == 0x2FC960u) {
        ctx->pc = 0x2FC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC95Cu;
        // 0x2fc960: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC964u;
        goto label_2fc964;
    }
    ctx->pc = 0x2FC95Cu;
    SET_GPR_U32(ctx, 31, 0x2FC964u);
    ctx->pc = 0x2FC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC95Cu;
    // 0x2fc960: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2FC95Cu, 0x2FC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC964u;
label_2fc964:
    // 0x2fc964: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2fc964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc968:
    // 0x2fc968: 0x0  nop
    ctx->pc = 0x2fc968u;
    // NOP
label_2fc96c:
    // 0x2fc96c: 0x450100f9  bc1t        . + 4 + (0xF9 << 2)
label_2fc970:
    if (ctx->pc == 0x2FC970u) {
        ctx->pc = 0x2FC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC96Cu;
        // 0x2fc970: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC974u;
        goto label_2fc974;
    }
    ctx->pc = 0x2FC96Cu;
    {
        const bool branch_taken_0x2fc96c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC96Cu;
        // 0x2fc970: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc96c) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC974u;
label_2fc974:
    // 0x2fc974: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fc974u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2fc978:
    // 0x2fc978: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fc978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc97c:
    // 0x2fc97c: 0x0  nop
    ctx->pc = 0x2fc97cu;
    // NOP
label_2fc980:
    // 0x2fc980: 0x450100f4  bc1t        . + 4 + (0xF4 << 2)
label_2fc984:
    if (ctx->pc == 0x2FC984u) {
        ctx->pc = 0x2FC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC980u;
        // 0x2fc984: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC988u;
        goto label_2fc988;
    }
    ctx->pc = 0x2FC980u;
    {
        const bool branch_taken_0x2fc980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC980u;
        // 0x2fc984: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc980) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FC988u;
label_2fc988:
    // 0x2fc988: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x2fc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fc98c:
    // 0x2fc98c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fc98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fc990:
    // 0x2fc990: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2fc990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fc994:
    // 0x2fc994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fc994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc998:
    // 0x2fc998: 0xc0a244e  jal         func_289138
label_2fc99c:
    if (ctx->pc == 0x2FC99Cu) {
        ctx->pc = 0x2FC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC998u;
        // 0x2fc99c: 0x26270010  addiu       $a3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC9A0u;
        goto label_2fc9a0;
    }
    ctx->pc = 0x2FC998u;
    SET_GPR_U32(ctx, 31, 0x2FC9A0u);
    ctx->pc = 0x2FC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC998u;
    // 0x2fc99c: 0x26270010  addiu       $a3, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289138u, 0x2FC998u, 0x2FC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC9A0u;
label_2fc9a0:
    // 0x2fc9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc9a4:
    // 0x2fc9a4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_2fc9a8:
    if (ctx->pc == 0x2FC9A8u) {
        ctx->pc = 0x2FC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9A4u;
        // 0x2fc9a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC9ACu;
        goto label_2fc9ac;
    }
    ctx->pc = 0x2FC9A4u;
    {
        const bool branch_taken_0x2fc9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9A4u;
        // 0x2fc9a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9a4) {
            ctx->pc = 0x2FC9D0u;
            goto label_2fc9d0;
        }
    }
    ctx->pc = 0x2FC9ACu;
label_2fc9ac:
    // 0x2fc9ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fc9b0:
    // 0x2fc9b0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2fc9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2fc9b4:
    // 0x2fc9b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2fc9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2fc9b8:
    // 0x2fc9b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fc9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2fc9bc:
    // 0x2fc9bc: 0xc136afa  jal         func_4DABE8
label_2fc9c0:
    if (ctx->pc == 0x2FC9C0u) {
        ctx->pc = 0x2FC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9BCu;
        // 0x2fc9c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC9C4u;
        goto label_2fc9c4;
    }
    ctx->pc = 0x2FC9BCu;
    SET_GPR_U32(ctx, 31, 0x2FC9C4u);
    ctx->pc = 0x2FC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC9BCu;
    // 0x2fc9c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FC9BCu, 0x2FC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC9C4u;
label_2fc9c4:
    // 0x2fc9c4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2fc9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fc9c8:
    // 0x2fc9c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fc9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2fc9cc:
    // 0x2fc9cc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2fc9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2fc9d0:
    // 0x2fc9d0: 0xc0e4060  jal         func_390180
label_2fc9d4:
    if (ctx->pc == 0x2FC9D4u) {
        ctx->pc = 0x2FC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9D0u;
        // 0x2fc9d4: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC9D8u;
        goto label_2fc9d8;
    }
    ctx->pc = 0x2FC9D0u;
    SET_GPR_U32(ctx, 31, 0x2FC9D8u);
    ctx->pc = 0x2FC9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC9D0u;
    // 0x2fc9d4: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FC9D0u, 0x2FC9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC9D8u;
label_2fc9d8:
    // 0x2fc9d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fc9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc9dc:
    // 0x2fc9dc: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2fc9e0:
    if (ctx->pc == 0x2FC9E0u) {
        ctx->pc = 0x2FC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9DCu;
        // 0x2fc9e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC9E4u;
        goto label_2fc9e4;
    }
    ctx->pc = 0x2FC9DCu;
    {
        const bool branch_taken_0x2fc9dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9DCu;
        // 0x2fc9e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9dc) {
            ctx->pc = 0x2FCA1Cu;
            goto label_2fca1c;
        }
    }
    ctx->pc = 0x2FC9E4u;
label_2fc9e4:
    // 0x2fc9e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2fc9e8:
    // 0x2fc9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc9ec:
    // 0x2fc9ec: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2fc9ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2fc9f0:
    // 0x2fc9f0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2fc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2fc9f4:
    // 0x2fc9f4: 0x40f809  jalr        $v0
label_2fc9f8:
    if (ctx->pc == 0x2FC9F8u) {
        ctx->pc = 0x2FC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9F4u;
        // 0x2fc9f8: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC9FCu;
        goto label_2fc9fc;
    }
    ctx->pc = 0x2FC9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FC9FCu);
        ctx->pc = 0x2FC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9F4u;
        // 0x2fc9f8: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC9F4u, 0x2FC9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC9FCu;
label_2fc9fc:
    // 0x2fc9fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fc9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fca00:
    // 0x2fca00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fca04:
    // 0x2fca04: 0xc136afa  jal         func_4DABE8
label_2fca08:
    if (ctx->pc == 0x2FCA08u) {
        ctx->pc = 0x2FCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA04u;
        // 0x2fca08: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCA0Cu;
        goto label_2fca0c;
    }
    ctx->pc = 0x2FCA04u;
    SET_GPR_U32(ctx, 31, 0x2FCA0Cu);
    ctx->pc = 0x2FCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCA04u;
    // 0x2fca08: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FCA04u, 0x2FCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA0Cu;
label_2fca0c:
    // 0x2fca0c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2fca0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fca10:
    // 0x2fca10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fca14:
    // 0x2fca14: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fca18:
    if (ctx->pc == 0x2FCA18u) {
        ctx->pc = 0x2FCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA14u;
        // 0x2fca18: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCA1Cu;
        goto label_2fca1c;
    }
    ctx->pc = 0x2FCA14u;
    {
        const bool branch_taken_0x2fca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA14u;
        // 0x2fca18: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca14) {
            ctx->pc = 0x2FCA20u;
            goto label_2fca20;
        }
    }
    ctx->pc = 0x2FCA1Cu;
label_2fca1c:
    // 0x2fca1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fca20:
    // 0x2fca20: 0xc0cd766  jal         func_335D98
label_2fca24:
    if (ctx->pc == 0x2FCA24u) {
        ctx->pc = 0x2FCA28u;
        goto label_2fca28;
    }
    ctx->pc = 0x2FCA20u;
    SET_GPR_U32(ctx, 31, 0x2FCA28u);
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FCA20u, 0x2FCA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA28u;
label_2fca28:
    // 0x2fca28: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x2fca28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_2fca2c:
    // 0x2fca2c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fca2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2fca30:
    // 0x2fca30: 0x31abc  dsll32      $v1, $v1, 10
    ctx->pc = 0x2fca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 10));
label_2fca34:
    // 0x2fca34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fca38:
    // 0x2fca38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fca3c:
    if (ctx->pc == 0x2FCA3Cu) {
        ctx->pc = 0x2FCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA38u;
        // 0x2fca3c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCA40u;
        goto label_2fca40;
    }
    ctx->pc = 0x2FCA38u;
    {
        const bool branch_taken_0x2fca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA38u;
        // 0x2fca3c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca38) {
            ctx->pc = 0x2FCA58u;
            goto label_2fca58;
        }
    }
    ctx->pc = 0x2FCA40u;
label_2fca40:
    // 0x2fca40: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2fca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2fca44:
    // 0x2fca44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2fca48:
    if (ctx->pc == 0x2FCA48u) {
        ctx->pc = 0x2FCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA44u;
        // 0x2fca48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCA4Cu;
        goto label_2fca4c;
    }
    ctx->pc = 0x2FCA44u;
    {
        const bool branch_taken_0x2fca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA44u;
        // 0x2fca48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca44) {
            ctx->pc = 0x2FCA80u;
            goto label_2fca80;
        }
    }
    ctx->pc = 0x2FCA4Cu;
label_2fca4c:
    // 0x2fca4c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x2fca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2fca50:
    // 0x2fca50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fca54:
    if (ctx->pc == 0x2FCA54u) {
        ctx->pc = 0x2FCA58u;
        goto label_2fca58;
    }
    ctx->pc = 0x2FCA50u;
    {
        const bool branch_taken_0x2fca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca50) {
            ctx->pc = 0x2FCA60u;
            goto label_2fca60;
        }
    }
    ctx->pc = 0x2FCA58u;
label_2fca58:
    // 0x2fca58: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fca5c:
    if (ctx->pc == 0x2FCA5Cu) {
        ctx->pc = 0x2FCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA58u;
        // 0x2fca5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCA60u;
        goto label_2fca60;
    }
    ctx->pc = 0x2FCA58u;
    {
        const bool branch_taken_0x2fca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA58u;
        // 0x2fca5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca58) {
            ctx->pc = 0x2FCA80u;
            goto label_2fca80;
        }
    }
    ctx->pc = 0x2FCA60u;
label_2fca60:
    // 0x2fca60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fca64:
    // 0x2fca64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fca64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fca68:
    // 0x2fca68: 0x0  nop
    ctx->pc = 0x2fca68u;
    // NOP
label_2fca6c:
    // 0x2fca6c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2fca6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fca70:
    // 0x2fca70: 0x0  nop
    ctx->pc = 0x2fca70u;
    // NOP
label_2fca74:
    // 0x2fca74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2fca78:
    if (ctx->pc == 0x2FCA78u) {
        ctx->pc = 0x2FCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA74u;
        // 0x2fca78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCA7Cu;
        goto label_2fca7c;
    }
    ctx->pc = 0x2FCA74u;
    {
        const bool branch_taken_0x2fca74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA74u;
        // 0x2fca78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca74) {
            ctx->pc = 0x2FCA80u;
            goto label_2fca80;
        }
    }
    ctx->pc = 0x2FCA7Cu;
label_2fca7c:
    // 0x2fca7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fca7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fca80:
    // 0x2fca80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fca84:
    // 0x2fca84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fca88:
    // 0x2fca88: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fca88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2fca8c:
    // 0x2fca8c: 0xa062011c  sb          $v0, 0x11C($v1)
    ctx->pc = 0x2fca8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 2));
label_2fca90:
    // 0x2fca90: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2fca90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fca94:
    // 0x2fca94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fca98:
    // 0x2fca98: 0x7c430090  sq          $v1, 0x90($v0)
    ctx->pc = 0x2fca98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 3));
label_2fca9c:
    // 0x2fca9c: 0xe4550118  swc1        $f21, 0x118($v0)
    ctx->pc = 0x2fca9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_2fcaa0:
    // 0x2fcaa0: 0xe456009c  swc1        $f22, 0x9C($v0)
    ctx->pc = 0x2fcaa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
label_2fcaa4:
    // 0x2fcaa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fcaa8:
    // 0x2fcaa8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_2fcaac:
    if (ctx->pc == 0x2FCAACu) {
        ctx->pc = 0x2FCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAA8u;
        // 0x2fcaac: 0xe4610110  swc1        $f1, 0x110($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCAB0u;
        goto label_2fcab0;
    }
    ctx->pc = 0x2FCAA8u;
    {
        const bool branch_taken_0x2fcaa8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAA8u;
        // 0x2fcaac: 0xe4610110  swc1        $f1, 0x110($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcaa8) {
            ctx->pc = 0x2FCABCu;
            goto label_2fcabc;
        }
    }
    ctx->pc = 0x2FCAB0u;
label_2fcab0:
    // 0x2fcab0: 0x2ee20002  sltiu       $v0, $s7, 0x2
    ctx->pc = 0x2fcab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2fcab4:
    // 0x2fcab4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2fcab8:
    if (ctx->pc == 0x2FCAB8u) {
        ctx->pc = 0x2FCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAB4u;
        // 0x2fcab8: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCABCu;
        goto label_2fcabc;
    }
    ctx->pc = 0x2FCAB4u;
    {
        const bool branch_taken_0x2fcab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAB4u;
        // 0x2fcab8: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcab4) {
            ctx->pc = 0x2FCAC8u;
            goto label_2fcac8;
        }
    }
    ctx->pc = 0x2FCABCu;
label_2fcabc:
    // 0x2fcabc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2fcabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fcac0:
    // 0x2fcac0: 0x1000009b  b           . + 4 + (0x9B << 2)
label_2fcac4:
    if (ctx->pc == 0x2FCAC4u) {
        ctx->pc = 0x2FCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAC0u;
        // 0x2fcac4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCAC8u;
        goto label_2fcac8;
    }
    ctx->pc = 0x2FCAC0u;
    {
        const bool branch_taken_0x2fcac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAC0u;
        // 0x2fcac4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcac0) {
            ctx->pc = 0x2FCD30u;
            goto label_2fcd30;
        }
    }
    ctx->pc = 0x2FCAC8u;
label_2fcac8:
    // 0x2fcac8: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x2fcac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2fcacc:
    // 0x2fcacc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fcaccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fcad0:
    // 0x2fcad0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2fcad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fcad4:
    // 0x2fcad4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fcad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fcad8:
    // 0x2fcad8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fcad8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2fcadc:
    // 0x2fcadc: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2fcadcu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2fcae0:
    // 0x2fcae0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fcae0u;
    // VWAITQ (Q already resolved in this runtime)
label_2fcae4:
    // 0x2fcae4: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x2fcae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fcae8:
    // 0x2fcae8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2fcae8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2fcaec:
    // 0x2fcaec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fcaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fcaf0:
    // 0x2fcaf0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2fcaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2fcaf4:
    // 0x2fcaf4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2fcaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2fcaf8:
    // 0x2fcaf8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2fcaf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2fcafc:
    // 0x2fcafc: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x2fcafcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2fcb00:
    // 0x2fcb00: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fcb00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2fcb04:
    // 0x2fcb04: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2fcb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2fcb08:
    // 0x2fcb08: 0xc0cd8ec  jal         func_3363B0
label_2fcb0c:
    if (ctx->pc == 0x2FCB0Cu) {
        ctx->pc = 0x2FCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB08u;
        // 0x2fcb0c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCB10u;
        goto label_2fcb10;
    }
    ctx->pc = 0x2FCB08u;
    SET_GPR_U32(ctx, 31, 0x2FCB10u);
    ctx->pc = 0x2FCB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB08u;
    // 0x2fcb0c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2FCB08u, 0x2FCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB10u;
label_2fcb10:
    // 0x2fcb10: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2fcb10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fcb14:
    // 0x2fcb14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fcb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fcb18:
    // 0x2fcb18: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2fcb18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fcb1c:
    // 0x2fcb1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2fcb1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2fcb20:
    // 0x2fcb20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fcb20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fcb24:
    // 0x2fcb24: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2fcb24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcb28:
    // 0x2fcb28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fcb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcb2c:
    // 0x2fcb2c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2fcb2cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fcb30:
    // 0x2fcb30: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x2fcb30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fcb34:
    // 0x2fcb34: 0xc0e87c0  jal         func_3A1F00
label_2fcb38:
    if (ctx->pc == 0x2FCB38u) {
        ctx->pc = 0x2FCB3Cu;
        goto label_2fcb3c;
    }
    ctx->pc = 0x2FCB34u;
    SET_GPR_U32(ctx, 31, 0x2FCB3Cu);
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x2FCB34u, 0x2FCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB3Cu;
label_2fcb3c:
    // 0x2fcb3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fcb3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fcb40:
    // 0x2fcb40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2fcb40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2fcb44:
    // 0x2fcb44: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2fcb44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcb48:
    // 0x2fcb48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fcb48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcb4c:
    // 0x2fcb4c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fcb4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcb50:
    // 0x2fcb50: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2fcb50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fcb54:
    // 0x2fcb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fcb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcb58:
    // 0x2fcb58: 0x0  nop
    ctx->pc = 0x2fcb58u;
    // NOP
label_2fcb5c:
    // 0x2fcb5c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2fcb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fcb60:
    // 0x2fcb60: 0x0  nop
    ctx->pc = 0x2fcb60u;
    // NOP
label_2fcb64:
    // 0x2fcb64: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_2fcb68:
    if (ctx->pc == 0x2FCB68u) {
        ctx->pc = 0x2FCB6Cu;
        goto label_2fcb6c;
    }
    ctx->pc = 0x2FCB64u;
    {
        const bool branch_taken_0x2fcb64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fcb64) {
            ctx->pc = 0x2FCBE0u;
            goto label_2fcbe0;
        }
    }
    ctx->pc = 0x2FCB6Cu;
label_2fcb6c:
    // 0x2fcb6c: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x2fcb6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_2fcb70:
    // 0x2fcb70: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fcb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2fcb74:
    // 0x2fcb74: 0x31afc  dsll32      $v1, $v1, 11
    ctx->pc = 0x2fcb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
label_2fcb78:
    // 0x2fcb78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fcb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fcb7c:
    // 0x2fcb7c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_2fcb80:
    if (ctx->pc == 0x2FCB80u) {
        ctx->pc = 0x2FCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB7Cu;
        // 0x2fcb80: 0x9222004c  lbu         $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCB84u;
        goto label_2fcb84;
    }
    ctx->pc = 0x2FCB7Cu;
    {
        const bool branch_taken_0x2fcb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcb7c) {
            ctx->pc = 0x2FCB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCB7Cu;
            // 0x2fcb80: 0x9222004c  lbu         $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCC20u;
            goto label_2fcc20;
        }
    }
    ctx->pc = 0x2FCB84u;
label_2fcb84:
    // 0x2fcb84: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2fcb84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fcb88:
    // 0x2fcb88: 0x0  nop
    ctx->pc = 0x2fcb88u;
    // NOP
label_2fcb8c:
    // 0x2fcb8c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_2fcb90:
    if (ctx->pc == 0x2FCB90u) {
        ctx->pc = 0x2FCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB8Cu;
        // 0x2fcb90: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCB94u;
        goto label_2fcb94;
    }
    ctx->pc = 0x2FCB8Cu;
    {
        const bool branch_taken_0x2fcb8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB8Cu;
        // 0x2fcb90: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb8c) {
            ctx->pc = 0x2FCC1Cu;
            goto label_2fcc1c;
        }
    }
    ctx->pc = 0x2FCB94u;
label_2fcb94:
    // 0x2fcb94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fcb94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fcb98:
    // 0x2fcb98: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2fcb98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcb9c:
    // 0x2fcb9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fcb9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcba0:
    // 0x2fcba0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fcba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcba4:
    // 0x2fcba4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2fcba4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2fcba8:
    // 0x2fcba8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fcba8u;
    // VWAITQ (Q already resolved in this runtime)
label_2fcbac:
    // 0x2fcbac: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2fcbacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcbb0:
    // 0x2fcbb0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2fcbb0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fcbb4:
    // 0x2fcbb4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2fcbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2fcbb8:
    // 0x2fcbb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fcbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fcbbc:
    // 0x2fcbbc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fcbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fcbc0:
    // 0x2fcbc0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2fcbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_2fcbc4:
    // 0x2fcbc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fcbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcbc8:
    // 0x2fcbc8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2fcbc8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2fcbcc:
    // 0x2fcbcc: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x2fcbccu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
label_2fcbd0:
    // 0x2fcbd0: 0xc12e29c  jal         func_4B8A70
label_2fcbd4:
    if (ctx->pc == 0x2FCBD4u) {
        ctx->pc = 0x2FCBD8u;
        goto label_2fcbd8;
    }
    ctx->pc = 0x2FCBD0u;
    SET_GPR_U32(ctx, 31, 0x2FCBD8u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2FCBD0u, 0x2FCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBD8u;
label_2fcbd8:
    // 0x2fcbd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2fcbdc:
    if (ctx->pc == 0x2FCBDCu) {
        ctx->pc = 0x2FCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBD8u;
        // 0x2fcbdc: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCBE0u;
        goto label_2fcbe0;
    }
    ctx->pc = 0x2FCBD8u;
    {
        const bool branch_taken_0x2fcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBD8u;
        // 0x2fcbdc: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbd8) {
            ctx->pc = 0x2FCBF4u;
            goto label_2fcbf4;
        }
    }
    ctx->pc = 0x2FCBE0u;
label_2fcbe0:
    // 0x2fcbe0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2fcbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_2fcbe4:
    // 0x2fcbe4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2fcbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2fcbe8:
    // 0x2fcbe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fcbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fcbec:
    // 0x2fcbec: 0xc12e29c  jal         func_4B8A70
label_2fcbf0:
    if (ctx->pc == 0x2FCBF0u) {
        ctx->pc = 0x2FCBF4u;
        goto label_2fcbf4;
    }
    ctx->pc = 0x2FCBECu;
    SET_GPR_U32(ctx, 31, 0x2FCBF4u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2FCBECu, 0x2FCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBF4u;
label_2fcbf4:
    // 0x2fcbf4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fcbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fcbf8:
    // 0x2fcbf8: 0x0  nop
    ctx->pc = 0x2fcbf8u;
    // NOP
label_2fcbfc:
    // 0x2fcbfc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_2fcc00:
    if (ctx->pc == 0x2FCC00u) {
        ctx->pc = 0x2FCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBFCu;
        // 0x2fcc00: 0x9222004c  lbu         $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC04u;
        goto label_2fcc04;
    }
    ctx->pc = 0x2FCBFCu;
    {
        const bool branch_taken_0x2fcbfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fcbfc) {
            ctx->pc = 0x2FCC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCBFCu;
            // 0x2fcc00: 0x9222004c  lbu         $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCC20u;
            goto label_2fcc20;
        }
    }
    ctx->pc = 0x2FCC04u;
label_2fcc04:
    // 0x2fcc04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fcc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fcc08:
    // 0x2fcc08: 0xc0a2aca  jal         func_28AB28
label_2fcc0c:
    if (ctx->pc == 0x2FCC0Cu) {
        ctx->pc = 0x2FCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC08u;
        // 0x2fcc0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC10u;
        goto label_2fcc10;
    }
    ctx->pc = 0x2FCC08u;
    SET_GPR_U32(ctx, 31, 0x2FCC10u);
    ctx->pc = 0x2FCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC08u;
    // 0x2fcc0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB28u, 0x2FCC08u, 0x2FCC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC10u;
label_2fcc10:
    // 0x2fcc10: 0xa220004e  sb          $zero, 0x4E($s1)
    ctx->pc = 0x2fcc10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 0));
label_2fcc14:
    // 0x2fcc14: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2fcc18:
    if (ctx->pc == 0x2FCC18u) {
        ctx->pc = 0x2FCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC14u;
        // 0x2fcc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC1Cu;
        goto label_2fcc1c;
    }
    ctx->pc = 0x2FCC14u;
    {
        const bool branch_taken_0x2fcc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC14u;
        // 0x2fcc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc14) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FCC1Cu;
label_2fcc1c:
    // 0x2fcc1c: 0x9222004c  lbu         $v0, 0x4C($s1)
    ctx->pc = 0x2fcc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_2fcc20:
    // 0x2fcc20: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2fcc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2fcc24:
    // 0x2fcc24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2fcc28:
    // 0x2fcc28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fcc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2fcc2c:
    // 0x2fcc2c: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
label_2fcc30:
    if (ctx->pc == 0x2FCC30u) {
        ctx->pc = 0x2FCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC2Cu;
        // 0x2fcc30: 0xa222004c  sb          $v0, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC34u;
        goto label_2fcc34;
    }
    ctx->pc = 0x2FCC2Cu;
    {
        const bool branch_taken_0x2fcc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC2Cu;
        // 0x2fcc30: 0xa222004c  sb          $v0, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc2c) {
            ctx->pc = 0x2FCC80u;
            goto label_2fcc80;
        }
    }
    ctx->pc = 0x2FCC34u;
label_2fcc34:
    // 0x2fcc34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fcc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fcc38:
    // 0x2fcc38: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2fcc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2fcc3c:
    // 0x2fcc3c: 0xc136afa  jal         func_4DABE8
label_2fcc40:
    if (ctx->pc == 0x2FCC40u) {
        ctx->pc = 0x2FCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC3Cu;
        // 0x2fcc40: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC44u;
        goto label_2fcc44;
    }
    ctx->pc = 0x2FCC3Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC44u);
    ctx->pc = 0x2FCC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC3Cu;
    // 0x2fcc40: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FCC3Cu, 0x2FCC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC44u;
label_2fcc44:
    // 0x2fcc44: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fcc44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fcc48:
    // 0x2fcc48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fcc48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fcc4c:
    // 0x2fcc4c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2fcc4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcc50:
    // 0x2fcc50: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fcc50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcc54:
    // 0x2fcc54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fcc54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fcc58:
    // 0x2fcc58: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2fcc58u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fcc5c:
    // 0x2fcc5c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2fcc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_2fcc60:
    // 0x2fcc60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fcc60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2fcc64:
    // 0x2fcc64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fcc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fcc68:
    // 0x2fcc68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fcc68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcc6c:
    // 0x2fcc6c: 0x0  nop
    ctx->pc = 0x2fcc6cu;
    // NOP
label_2fcc70:
    // 0x2fcc70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fcc70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fcc74:
    // 0x2fcc74: 0x0  nop
    ctx->pc = 0x2fcc74u;
    // NOP
label_2fcc78:
    // 0x2fcc78: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2fcc7c:
    if (ctx->pc == 0x2FCC7Cu) {
        ctx->pc = 0x2FCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC78u;
        // 0x2fcc7c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC80u;
        goto label_2fcc80;
    }
    ctx->pc = 0x2FCC78u;
    {
        const bool branch_taken_0x2fcc78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC78u;
        // 0x2fcc7c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc78) {
            ctx->pc = 0x2FCCCCu;
            goto label_2fcccc;
        }
    }
    ctx->pc = 0x2FCC80u;
label_2fcc80:
    // 0x2fcc80: 0xc6ac01ac  lwc1        $f12, 0x1AC($s5)
    ctx->pc = 0x2fcc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fcc84:
    // 0x2fcc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc88:
    // 0x2fcc88: 0xc0bf056  jal         func_2FC158
label_2fcc8c:
    if (ctx->pc == 0x2FCC8Cu) {
        ctx->pc = 0x2FCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC88u;
        // 0x2fcc8c: 0xc7ad0070  lwc1        $f13, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCC90u;
        goto label_2fcc90;
    }
    ctx->pc = 0x2FCC88u;
    SET_GPR_U32(ctx, 31, 0x2FCC90u);
    ctx->pc = 0x2FCC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC88u;
    // 0x2fcc8c: 0xc7ad0070  lwc1        $f13, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC158u, 0x2FCC88u, 0x2FCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC90u;
label_2fcc90:
    // 0x2fcc90: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2fcc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fcc94:
    // 0x2fcc94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fcc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcc98:
    // 0x2fcc98: 0x0  nop
    ctx->pc = 0x2fcc98u;
    // NOP
label_2fcc9c:
    // 0x2fcc9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fcc9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fcca0:
    // 0x2fcca0: 0x0  nop
    ctx->pc = 0x2fcca0u;
    // NOP
label_2fcca4:
    // 0x2fcca4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2fcca8:
    if (ctx->pc == 0x2FCCA8u) {
        ctx->pc = 0x2FCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCA4u;
        // 0x2fcca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCCACu;
        goto label_2fccac;
    }
    ctx->pc = 0x2FCCA4u;
    {
        const bool branch_taken_0x2fcca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCA4u;
        // 0x2fcca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcca4) {
            ctx->pc = 0x2FCCB0u;
            goto label_2fccb0;
        }
    }
    ctx->pc = 0x2FCCACu;
label_2fccac:
    // 0x2fccac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2fccb0:
    // 0x2fccb0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2fccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fccb4:
    // 0x2fccb4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2fccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fccb8:
    // 0x2fccb8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fccbc:
    // 0x2fccbc: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x2fccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
label_2fccc0:
    // 0x2fccc0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2fccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2fccc4:
    // 0x2fccc4: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2fccc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2fccc8:
    // 0x2fccc8: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x2fccc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2fcccc:
    // 0x2fcccc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fccd0:
    // 0x2fccd0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fccd4:
    // 0x2fccd4: 0xc136afa  jal         func_4DABE8
label_2fccd8:
    if (ctx->pc == 0x2FCCD8u) {
        ctx->pc = 0x2FCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCD4u;
        // 0x2fccd8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCCDCu;
        goto label_2fccdc;
    }
    ctx->pc = 0x2FCCD4u;
    SET_GPR_U32(ctx, 31, 0x2FCCDCu);
    ctx->pc = 0x2FCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCCD4u;
    // 0x2fccd8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FCCD4u, 0x2FCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCCDCu;
label_2fccdc:
    // 0x2fccdc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fccdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fcce0:
    // 0x2fcce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fcce4:
    // 0x2fcce4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fcce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fcce8:
    // 0x2fcce8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2fcce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fccec:
    // 0x2fccec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fccecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fccf0:
    // 0x2fccf0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fccf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fccf4:
    // 0x2fccf4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2fccf4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fccf8:
    // 0x2fccf8: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x2fccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fccfc:
    // 0x2fccfc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fccfcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcd00:
    // 0x2fcd00: 0x0  nop
    ctx->pc = 0x2fcd00u;
    // NOP
label_2fcd04:
    // 0x2fcd04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fcd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fcd08:
    // 0x2fcd08: 0x0  nop
    ctx->pc = 0x2fcd08u;
    // NOP
label_2fcd0c:
    // 0x2fcd0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2fcd10:
    if (ctx->pc == 0x2FCD10u) {
        ctx->pc = 0x2FCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD0Cu;
        // 0x2fcd10: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCD14u;
        goto label_2fcd14;
    }
    ctx->pc = 0x2FCD0Cu;
    {
        const bool branch_taken_0x2fcd0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD0Cu;
        // 0x2fcd10: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd0c) {
            ctx->pc = 0x2FCD18u;
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCD14u;
label_2fcd14:
    // 0x2fcd14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2fcd14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcd18:
    // 0x2fcd18: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_2fcd1c:
    if (ctx->pc == 0x2FCD1Cu) {
        ctx->pc = 0x2FCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD18u;
        // 0x2fcd1c: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCD20u;
        goto label_2fcd20;
    }
    ctx->pc = 0x2FCD18u;
    {
        const bool branch_taken_0x2fcd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcd18) {
            ctx->pc = 0x2FCD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCD18u;
            // 0x2fcd1c: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD24u;
            goto label_2fcd24;
        }
    }
    ctx->pc = 0x2FCD20u;
label_2fcd20:
    // 0x2fcd20: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x2fcd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fcd24:
    // 0x2fcd24: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2fcd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fcd28:
    // 0x2fcd28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fcd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fcd2c:
    // 0x2fcd2c: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x2fcd2cu;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_2fcd30:
    // 0x2fcd30: 0xc0a2aca  jal         func_28AB28
label_2fcd34:
    if (ctx->pc == 0x2FCD34u) {
        ctx->pc = 0x2FCD38u;
        goto label_2fcd38;
    }
    ctx->pc = 0x2FCD30u;
    SET_GPR_U32(ctx, 31, 0x2FCD38u);
    ctx->pc = 0x28AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB28u, 0x2FCD30u, 0x2FCD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD38u;
label_2fcd38:
    // 0x2fcd38: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2fcd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fcd3c:
    // 0x2fcd3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcd40:
    // 0x2fcd40: 0xc0bf0cc  jal         func_2FC330
label_2fcd44:
    if (ctx->pc == 0x2FCD44u) {
        ctx->pc = 0x2FCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD40u;
        // 0x2fcd44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCD48u;
        goto label_2fcd48;
    }
    ctx->pc = 0x2FCD40u;
    SET_GPR_U32(ctx, 31, 0x2FCD48u);
    ctx->pc = 0x2FCD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD40u;
    // 0x2fcd44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC330u, 0x2FCD40u, 0x2FCD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD48u;
label_2fcd48:
    // 0x2fcd48: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fcd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fcd4c:
    // 0x2fcd4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fcd50:
    // 0x2fcd50: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2fcd50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2fcd54:
    // 0x2fcd54: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2fcd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2fcd58:
    // 0x2fcd58: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2fcd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2fcd5c:
    // 0x2fcd5c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2fcd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2fcd60:
    // 0x2fcd60: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2fcd60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2fcd64:
    // 0x2fcd64: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2fcd64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2fcd68:
    // 0x2fcd68: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2fcd68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2fcd6c:
    // 0x2fcd6c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2fcd6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2fcd70:
    // 0x2fcd70: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2fcd70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2fcd74:
    // 0x2fcd74: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2fcd74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fcd78:
    // 0x2fcd78: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2fcd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fcd7c:
    // 0x2fcd7c: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2fcd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2fcd80:
    // 0x2fcd80: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2fcd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2fcd84:
    // 0x2fcd84: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2fcd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fcd88:
    // 0x2fcd88: 0x3e00008  jr          $ra
label_2fcd8c:
    if (ctx->pc == 0x2FCD8Cu) {
        ctx->pc = 0x2FCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD88u;
        // 0x2fcd8c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCD90u;
        goto label_fallthrough_0x2fcd88;
    }
    ctx->pc = 0x2FCD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD88u;
        // 0x2fcd8c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fcd88:
    ctx->pc = 0x2FCD90u;
}
